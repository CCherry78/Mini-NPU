`default_nettype none

/* Top Module for Mini_NPU design */
module Mini_NPU (
  input  logic clock, reset_n, start, stop,
  input  logic SDA_in,
  inout  wire  SDA,
  output logic SCL,
  output logic [7:0] LEDs
);

  /* Protocol_Handler and I2C_Master handshake signals */
  logic write_done, data_ready, read_done, abort,
        write, poll, data_read;

  /* I2C_Master and Axis_Neurons handshake signal */
  logic data_avail;

  /* Axis_Neurons' Data */
  logic [15:0] X_DATA, Y_DATA, Z_DATA;

  /* Axis_Neurons' and Motion_Neurons' handshake signals */
  logic left_activated, right_activated,
        back_activated, forward_activated,
        down_activated, up_activated;

  /* LEDs' and Motion_Neurons' output signals */
  logic left_fired, right_fired,
        back_fired, forward_fired,
        down_fired, up_fired;

  logic [7:0] fired_array;
  assign fired_array = {0, 0, left_fired, right_fired, back_fired, forward_fired, down_fired, up_fired};

  Protocol_Handler ph(.write_done(write_done), .data_ready(data_ready), 
                      .read_done(read_done), .abort(abort),
                      .write(write), .poll(poll), .data_read(data_read), .*);

  I2C_Master i2c_m(.write(write), .poll(poll), .data_read(data_read), 
                   .write_done(write_done), .data_ready(data_ready), 
                   .read_done(read_done), .abort(abort), .data_avail(data_avail),
                   .X_DATA(X_DATA), .Y_DATA(Y_DATA), .Z_DATA(Z_DATA), .*);

  Axis_Neuron x_axis(.data_avail(data_avail), .abort(abort), .data(X_DATA), 
                     .activate1(left_activated), .activate2(right_activated), 
                     .*);

  Axis_Neuron y_axis(.data_avail(data_avail), .abort(abort), .data(Y_DATA), 
                     .activate1(back_activated), .activate2(forward_activated), 
                     .*);

  Axis_Neuron z_axis(.data_avail(data_avail), .abort(abort), .data(Z_DATA), 
                     .activate1(down_activated), .activate2(up_activated), 
                     .*);

  Motion_Neuron left(.activated(left_activated), .fire(left_fired), .*);
  Motion_Neuron right(.activated(right_activated), .fire(right_fired), .*);

  Motion_Neuron back(.activated(back_activated), .fire(back_fired), .*);
  Motion_Neuron forward(.activated(forward_activated), .fire(forward_fired), .*);

  Motion_Neuron down(.activated(down_activated), .fire(down_fired), .*);
  Motion_Neuron up(.activated(up_activated), .fire(up_fired), .*);

  LED_Controller led_c(.fired_array(fired_array), .LEDs(LEDs), .*);
  
endmodule: Mini_NPU


/* Module for protocol handling of data transfers */
module Protocol_Handler (
  input  logic clock, reset_n, start, stop, // from Mini_NPU top module
  input  logic write_done, data_ready, read_done, abort, // from I2C_Master
  output logic write, poll, data_read // to I2C_Master 
);

  // control signals
  logic write_en, poll_en, data_read_en;

  // write register
  always_ff @(posedge clock) begin
    if (~reset_n || ~write_en) begin
      write <= 0;
    end
    else if (write_en) begin
      write <= 1;
    end
    else begin
      write <= write;
    end
  end

  // poll register
  always_ff @(posedge clock) begin
    if (~reset_n || ~poll_en) begin
      poll <= 0;
    end
    else if (poll_en) begin
      poll <= 1;
    end
    else begin
      poll <= poll;
    end
  end

  // data_read register
  always_ff @(posedge clock) begin
    if (~reset_n || ~data_read_en) begin
      data_read <= 0;
    end
    else if (data_read_en) begin
      data_read <= 1;
    end
    else begin
      data_read <= data_read;
    end
  end

  // Protocol Handler FSM
  enum logic [1:0] {RESET, SINGLE_WRITE,
                    POLL_DATA_READY, READ_DATA} ph_state, ph_nextState;

  always_comb begin
    // control signals
    write_en = 0;
    poll_en = 0;
    data_read_en = 0;

    ph_nextState = RESET;

    case (ph_state)
      RESET: begin
        if (~start || stop) begin
          ph_nextState = RESET;
        end
        else if (start) begin
          ph_nextState = SINGLE_WRITE;
          write_en = 1;
        end
      end

      SINGLE_WRITE: begin
        if (stop || abort) begin
          ph_nextState = RESET;
        end
        else if (~write_done && ~stop && ~abort) begin
          ph_nextState = SINGLE_WRITE;
          write_en = 1;
        end
        else if (write_done) begin
          ph_nextState = POLL_DATA_READY;
          poll_en = 1;
        end
      end

      POLL_DATA_READY: begin
        if (stop || abort) begin
          ph_nextState = RESET;
        end
        else if (~data_ready && ~stop && ~abort) begin
          ph_nextState = POLL_DATA_READY;
          poll_en = 1; 
        end
        else if (data_ready) begin
          ph_nextState = READ_DATA;
          data_read_en = 1;
        end
      end

      READ_DATA: begin
        if (stop || abort) begin
          ph_nextState = RESET;
        end
        else if (~read_done && ~stop && ~abort) begin
          ph_nextState = READ_DATA;
          data_read_en = 1;
        end
        else if (read_done) begin
          ph_nextState = POLL_DATA_READY;
          poll_en = 1;
        end
      end
    endcase
  end

  // State -> Next State Flip-Flop
  always_ff @(posedge clock) begin
    if (~reset_n) begin
      ph_state <= RESET;
    end
    else begin
      ph_state <= ph_nextState;
    end
  end

endmodule: Protocol_Handler


/* Module for I2C master data communication functions */
module I2C_Master (
  input  logic clock, reset_n, stop, SDA_in, // from Mini_NPU top module
               write, poll, data_read, // from Protocol_Hanlder
  inout  wire  SDA, // from Mini_NPU top module
  output logic SCL, // to Mini_NPU top module outputs
               write_done, data_ready, read_done, abort, // to Protocol_Handler
               data_avail, // to Axis_Neuron modules
  output logic [15:0] X_DATA, Y_DATA, Z_DATA // to Axis_Neuron modules   
);

  // sda_out_en signal idea from ChatGPT
  logic SDA_out, sda_out_en,
        SCL_out, scl_out_en;

  // tri-state buffer for bidirectional SDA line
  assign SDA = sda_out_en ? SDA_out : SDA_in; // 1'bz; change to hi-z for FPGA testing

  // multiplexer for assigning SCL line
  assign SCL = scl_out_en ? SCL_out : clock;

  logic [7:0] ADDR, addr, sub_addr, sad_w, sad_r,
              INT_SOURCE_addr, DATAX0_addr, FIFO_CTL_addr, 
              FIFO_DATA, INT_SOURCE,
              X0_DATA, X1_DATA,
              Y0_DATA, Y1_DATA,
              Z0_DATA, Z1_DATA;

  // status signals
  logic [1:0] iteration;
  logic [3:0] count;
  logic [5:0] data_count;

  // control signals
  logic       i_up, i_clr,
              count_en, count_reset, 
              data_count_en, data_count_reset,
              shift_in_s, shift_clr_s,
              shift_in_x0, shift_in_x1, shift_clr_x0, shift_clr_x1,
              shift_in_y0, shift_in_y1, shift_clr_y0, shift_clr_y1,
              shift_in_z0, shift_in_z1, shift_clr_z0, shift_clr_z1;

  logic data;

  assign X_DATA = {X1_DATA, X0_DATA};
  assign Y_DATA = {Y1_DATA, Y0_DATA};
  assign Z_DATA = {Z1_DATA, Z0_DATA};
  assign sad_w = 8'h3A;
  assign sad_r = 8'h3B;
  assign INT_SOURCE_addr = 8'h30;
  assign DATAX0_addr = 8'h32;
  assign FIFO_CTL_addr = 8'h38;
  assign FIFO_DATA = 8'b01100000;

  // Iteration Counter
  always_ff @(posedge clock) begin
    if (~reset_n || i_clr) begin
      iteration <= 0;
    end
    else if (i_up) begin
      iteration <= iteration + 1;
    end
    else begin
      iteration <= iteration;
    end
  end

  // Counter
  always_ff @(posedge clock) begin
    if (~reset_n || count_reset) begin
      count <= 4'd7;
    end
    else if (count_en) begin
      count <= count - 1;
    end
    else begin
      count <= count;
    end
  end

  // Data Counter
  always_ff @(posedge clock) begin
    if (~reset_n || data_count_reset) begin
      data_count <= 0;
    end
    else if (data_count_en) begin
      data_count <= data_count + 1;
    end
    else begin
      data_count <= data_count;
    end
  end

  // sub_addr picker multiplexer
  always_comb begin
    sub_addr = 0;

    if (write) begin
      sub_addr = FIFO_CTL_addr;
    end
    else if (poll) begin
      sub_addr = INT_SOURCE_addr;
    end
    else if (data_read) begin
      sub_addr = DATAX0_addr;
    end
    else begin
      sub_addr = sub_addr;
    end
  end

  // addr picker multiplexer
  always_comb begin
    addr = 0;

    if (iteration == 0) begin
      addr = sad_w;
    end
    else if (iteration == 1) begin
      addr = sub_addr;
    end
    else if (iteration == 2) begin
      addr = sad_r;
    end
    else begin
      addr = addr;
    end
  end

  // ADDR picker multiplexer
  always_comb begin
    if ((iteration == 2) && write) begin
      ADDR = FIFO_DATA;
    end
    else begin
      ADDR = addr;
    end
  end

  ShiftRegisterSIPO sipo_source(.en(shift_in_s), .shift_clr(shift_clr_s), 
                                .serial_bit(data), .Q(INT_SOURCE), .*);
  ShiftRegisterSIPO sipo_x0(.en(shift_in_x0), .shift_clr(shift_clr_x0), 
                                .serial_bit(data), .Q(X0_DATA), .*);
  ShiftRegisterSIPO sipo_x1(.en(shift_in_x1), .shift_clr(shift_clr_x1), 
                                .serial_bit(data), .Q(X1_DATA), .*);
  ShiftRegisterSIPO sipo_y0(.en(shift_in_y0), .shift_clr(shift_clr_y0), 
                                .serial_bit(data), .Q(Y0_DATA), .*);
  ShiftRegisterSIPO sipo_y1(.en(shift_in_y1), .shift_clr(shift_clr_y1), 
                                .serial_bit(data), .Q(Y1_DATA), .*);
  ShiftRegisterSIPO sipo_z0(.en(shift_in_z0), .shift_clr(shift_clr_z0), 
                                .serial_bit(data), .Q(Z0_DATA), .*);
  ShiftRegisterSIPO sipo_z1(.en(shift_in_z1), .shift_clr(shift_clr_z1), 
                                .serial_bit(data), .Q(Z1_DATA), .*);

  // I2C FSM
  enum logic [3:0] {INIT, START_H, START_L, SEND_ADDR, SEND_RW, SAK_L, SAK_H, 
                    GET_DATA, DATA_TURNAROUND, NMAK_H, NMAK_L, STOP_L, STOP_H, 
                    SAK_ERROR} i2c_state, i2c_nextState;

  always_comb begin
    // output signals
    write_done = 0;
    data_ready = 0;
    read_done = 0;
    abort = 0;
    data_avail = 0;

    // control signals
    i_up = 0;
    i_clr = 0;
    count_en = 0;
    count_reset = 0; 
    data_count_en = 0;
    data_count_reset = 0;
    shift_in_s = 0;
    shift_clr_s = 0;
    shift_in_x0 = 0;
    shift_in_x1 = 0;
    shift_clr_x0 = 0;
    shift_clr_x1 = 0;
    shift_in_y0 = 0;
    shift_in_y1 = 0;
    shift_clr_y0 = 0;
    shift_clr_y1 = 0;
    shift_in_z0 = 0;
    shift_in_z1 = 0;
    shift_clr_z0 = 0;
    shift_clr_z1 = 0;
    sda_out_en = 0;
    scl_out_en = 0;

    i2c_nextState = INIT;
    data = SDA;
    SDA_out = 0;
    SCL_out = 0;

    case (i2c_state)
      INIT: begin
        if (~write && ~poll && ~data_read) begin
          i2c_nextState = INIT;
        end
        else if (write || poll || data_read) begin
          i2c_nextState = START_H;
          sda_out_en = 1;
          SDA_out = 1;
          scl_out_en = 1;
          SCL_out = 1;
          i_clr = 1;
          count_reset = 1;
          data_count_reset = 1;
        end
      end

      START_H: begin
        i2c_nextState = START_L;
        sda_out_en = 1;
        SDA_out = 0;
        scl_out_en = 1;
        SCL_out = 1;
      end

      START_L: begin
        i2c_nextState = SEND_ADDR;
        sda_out_en = 1;
        SDA_out = ADDR[count];
        count_en = 1;
      end

      SEND_ADDR: begin
        if (count > 0) begin
          i2c_nextState = SEND_ADDR;
          sda_out_en = 1;
          SDA_out = ADDR[count];
          count_en = 1;
        end
        else if (count == 0) begin
          i2c_nextState = SEND_RW;
          sda_out_en = 1;
          SDA_out = ADDR[count];
          count_en = 0;
          count_reset = 1;
          i_up = 1;
        end
      end

      SEND_RW: begin
        if (~SDA) begin
          i2c_nextState = SAK_L;
        end
        else if (SDA) begin
          i2c_nextState = SAK_ERROR;
          abort = 1;
        end
      end

      SAK_ERROR: begin
        i2c_nextState = SAK_ERROR;
      end

      SAK_L: begin
        if (SDA) begin
          i2c_nextState = SAK_H;
        end
        else if (~SDA) begin
          i2c_nextState = SAK_ERROR;
          abort = 1;
        end
      end

      SAK_H: begin
        if ((iteration == 1) || ((iteration == 2) && write)) begin
          i2c_nextState = SEND_ADDR;
          sda_out_en = 1;
          SDA_out = ADDR[count];
          count_en = 1;
        end
        else if ((iteration == 2) && ~write) begin
          i2c_nextState = START_H;
          sda_out_en = 1;
          SDA_out = 1;
          scl_out_en = 1;
          SCL_out = 1;
        end
        else if ((iteration == 3) && poll) begin
          i2c_nextState = GET_DATA;
          i_clr = 1;
          count_en = 1;
          data = SDA;
          shift_in_s = 1;
        end
        else if ((iteration == 3) && data_read) begin
          i2c_nextState = GET_DATA;
          i_clr = 1;
          data_count_en = 1;
          data = SDA;
          shift_in_x0 = 1;
        end
        else if ((iteration == 3) && write) begin
          i2c_nextState = STOP_L;
          i_clr = 1;
          sda_out_en = 1;
          SDA_out = 0;
          scl_out_en = 1;
          SCL_out = 1;
        end
      end

      GET_DATA: begin
        if (poll && (count > 0)) begin
          i2c_nextState = GET_DATA;
          count_en = 1;
          data = SDA;
          shift_in_s = 1;
        end
        else if (poll && (count == 0)) begin
          i2c_nextState = DATA_TURNAROUND;
          count_reset = 1;
          data = SDA;
          shift_in_s = 1;
        end
        else if (data_read && (data_count <= 7)) begin
          i2c_nextState = GET_DATA;
          data_count_en = 1;
          data = SDA;
          shift_in_x0 = 1;
        end
        else if (data_read && (7 < data_count) && (data_count <= 15)) begin
          i2c_nextState = GET_DATA;
          data_count_en = 1;
          data = SDA;
          shift_in_x1 = 1;
        end
        else if (data_read && (15 < data_count) && (data_count <= 23)) begin
          i2c_nextState = GET_DATA;
          data_count_en = 1;
          data = SDA;
          shift_in_y0 = 1;
        end
        else if (data_read && (23 < data_count) && (data_count <= 31)) begin
          i2c_nextState = GET_DATA;
          data_count_en = 1;
          data = SDA;
          shift_in_y1 = 1;
        end
        else if (data_read && (31 < data_count) && (data_count <= 39)) begin
          i2c_nextState = GET_DATA;
          data_count_en = 1;
          data = SDA;
          shift_in_z0 = 1;
        end
        else if (data_read && (39 < data_count) && (data_count <= 47)) begin
          i2c_nextState = GET_DATA;
          data_count_en = 1;
          data = SDA;
          shift_in_z1 = 1;
        end
        else if (data_read && (data_count == 48)) begin
          i2c_nextState = NMAK_H;
          data_count_reset = 1;
          sda_out_en = 1;
          SDA_out = 1;
          data_avail = 1;
        end
      end

      DATA_TURNAROUND: begin
        i2c_nextState = NMAK_H;
        sda_out_en = 1;
        SDA_out = 1;
      end

      NMAK_H: begin
        i2c_nextState = NMAK_L;
        sda_out_en = 1;
        SDA_out = 0;
      end

      NMAK_L: begin
        i2c_nextState = STOP_L;
        sda_out_en = 1;
        SDA_out = 0;
        scl_out_en = 1;
        SCL_out = 1;
      end

      STOP_L: begin
        i2c_nextState = STOP_H;
        sda_out_en = 1;
        SDA_out = 1;
        scl_out_en = 1;
        SCL_out = 1;
      end

      STOP_H: begin
        if (write) begin
          i2c_nextState = INIT;
          write_done = 1;
        end
        else if (poll && ~INT_SOURCE[7]) begin
          i2c_nextState = INIT;
          shift_clr_s = 1;
        end
        else if (poll && INT_SOURCE[7]) begin
          i2c_nextState = INIT;
          data_ready = 1;
          shift_clr_s = 1;
        end
        else if (data_read) begin
          i2c_nextState = INIT;
          read_done = 1;
          shift_clr_x0 = 1;
          shift_clr_x1 = 1;
          shift_clr_y0 = 1;
          shift_clr_y1 = 1;
          shift_clr_z0 = 1;
          shift_clr_z1 = 1;
        end
      end
    endcase
  end

  // State -> Next State Flip-Flop
  always_ff @(posedge clock) begin
    if (~reset_n) begin
      i2c_state <= INIT;
    end
    else begin
      i2c_state <= i2c_nextState;
    end
  end

endmodule: I2C_Master


/* Module for reacting to movement on a specific axis from accelerometer */
module Axis_Neuron (
  input  logic clock, reset_n, stop, // from Mini_NPU top module
               data_avail, abort, // from I2C_Master
  input  logic [15:0] data, // from I2C_Master
  output logic activate1, activate2 // to Motion_Neuron modules 
);

  // status signals
  logic AltB, AeqB, AgtB;

  // control signals
  logic d1_en, d2_en, d2n_en, d1_clr, d2_clr, d2n_clr;

  logic [15:0] data1, data2, data2_next;

  // data1 Register
  always_ff @(posedge clock) begin
    if (~reset_n || d1_clr) begin
      data1 <= 0;
    end
    else if (d1_en) begin
      data1 <= data;
    end
    else begin
      data1 <= data1;
    end
  end

  // data2_next Register
  always_ff @(posedge clock) begin
    if (~reset_n || d2n_clr) begin
      data2_next <= 0;
    end
    else if (d2n_en) begin
      data2_next <= data;
    end
    else begin
      data2_next <= data2_next;
    end
  end

  // data2 Register
  always_ff @(posedge clock) begin
    if (~reset_n || d2_clr) begin
      data2 <= 0;
    end
    else if (d2_en) begin
      data2 <= data2_next;
    end
    else begin
      data2 <= data2;
    end
  end

  // 2's complement magnitude comparator for data
  always_comb begin
    AltB = 0;
    AeqB = 0;
    AgtB = 0;

    if (data1 == data2) begin // data1 == data2
        AltB = 0;
        AeqB = 1;
        AgtB = 0;
    end
    else if ((~data1[15]) && data2[15]) begin // data1 positive data2 negative
      AltB = 0;
      AeqB = 0;
      AgtB = 1;
    end
    else if (data1[15] && (~data2[15])) begin // data1 negative data2 positive
      AltB = 1;
      AeqB = 0;
      AgtB = 0;
    end
    else if (data1 < data2) begin
      AltB = 1;
      AeqB = 0;
      AgtB = 0;
    end
    else if (data1 > data2) begin
      AltB = 0;
      AeqB = 0;
      AgtB = 1;
    end
  end

  // Axis Neuron FSM
  enum logic [2:0] {WAITING, DATA_INIT, COMPARE, ACTIVATION, 
                    DATA_ERROR} an_state, an_nextState;

  always_comb begin
    // output signals
    activate1 = 0;
    activate2 = 0;

    // control signals
    d1_en = 0;
    d2_en = 0;
    d2n_en = 0;
    d1_clr = 0;
    d2_clr = 0;
    d2n_clr = 0;

    an_nextState = WAITING;

    case (an_state)
      WAITING: begin
        if (~data_avail) begin
          an_nextState = WAITING;
          d1_clr = 1;
          d2_clr = 1;
          d2n_clr = 1;
        end
        else if (data_avail) begin
          an_nextState = DATA_INIT;
          d1_en = 1;
          d2n_en = 1;
        end
      end

      DATA_INIT: begin
        if (stop || abort) begin
          an_nextState = WAITING;
          d1_clr = 1;
          d2_clr = 1;
          d2n_clr = 1;
        end
        else if (~data_avail) begin
          an_nextState = DATA_INIT;
        end
        else if (data_avail) begin
          an_nextState = COMPARE;
          d1_en = 1;
          d2_en = 1;
          d2n_en = 1;
        end
      end

      COMPARE: begin
        if (AltB) begin
          an_nextState = ACTIVATION;
          activate1 = 1;
        end
        else if (AeqB) begin
          an_nextState = DATA_INIT;
        end
        else if (AgtB) begin
          an_nextState = ACTIVATION;
          activate2 = 1;
        end
        else if (~AltB && ~AeqB && ~AgtB) begin
          an_nextState = DATA_ERROR;
        end
      end

      DATA_ERROR: begin
        an_nextState = DATA_ERROR;
      end

      ACTIVATION: begin
        an_nextState = DATA_INIT;
      end
    endcase
  end

  // State -> Next State Flip-Flop
  always_ff @(posedge clock) begin
    if (~reset_n) begin
      an_state <= WAITING;
    end
    else begin
      an_state <= an_nextState;
    end
  end

endmodule: Axis_Neuron


/* Module for detecting sustained movement in a specific direction from accelerometer */
module Motion_Neuron (
  input  logic clock, reset_n, // from Mini_NPU top module
               activated, // from Axis_Neuron modules
  output logic fire // to Mini_NPU LED instantiation
);

  // Clock frequency of design
  logic [23:0] CLK_FRQ;
  assign CLK_FRQ = 24'd10000000; // 10MHz clock

  // control signals
  logic cycle_en, cycle_reset, accum_up, accum_down, accum_reset;

  logic [23:0] cycle;
  logic [6:0] accum;

  // Cycle counter
  always_ff @(posedge clock) begin
    if (~reset_n || cycle_reset || accum_up || accum_down) begin
      cycle <= 0;
    end
    else if (cycle_en) begin
      cycle <= cycle + 1;
    end
    else begin
      cycle <= cycle;
    end
  end

  // Cycle comparator, 1 second
  always_comb begin
    if (cycle == CLK_FRQ) begin
      accum_down = 1;
    end
    else begin
      accum_down = 0;
    end
  end

  // Accumulation counter
  always_ff @(posedge clock) begin
    if (~reset_n || accum_reset) begin
      accum <= 0;
    end
    else if (accum_up && accum_down) begin
      accum <= accum + 1;
    end
    else if (accum_up) begin
      accum <= accum + 1;
    end
    else if (accum_down && (accum == 0)) begin
      accum <= accum;
    end
    else if (accum_down) begin
      accum <= accum - 1;
    end
    else begin
      accum <= accum;
    end
  end

  // Accumulation comparator
  always_comb begin
    if (accum == 7'd89) begin
      fire = 1;
    end
    else begin
      fire = 0;
    end
  end

  // Motion neuron FSM
  enum logic {IDLE, UP} mn_state, mn_nextState;

  always_comb begin
    // control signals
    cycle_en = 1;
    cycle_reset = 0;
    accum_up = 0;
    accum_reset = 0;

    mn_nextState = IDLE;

    case (mn_state)
      IDLE: begin
        if (~activated) begin
          mn_nextState = IDLE;
        end
        else if (activated) begin
          mn_nextState = UP;
          cycle_en = 0;
          cycle_reset = 1;
          accum_up = 1;
        end
      end

      UP: begin
        mn_nextState = IDLE;
        if (fire) begin
          accum_reset = 1;
          cycle_en = 1;
        end
        else if (~fire) begin
        mn_nextState = IDLE;
        cycle_en = 1;
        end
      end
    endcase
  end

  // State -> Next State Flip-Flop
  always_ff @(posedge clock) begin
    if (~reset_n) begin
      mn_state <= IDLE;
    end
    else begin
      mn_state <= mn_nextState;
    end
  end

endmodule: Motion_Neuron


/* Module for logic controlling LEDs */
module LED_Controller (
  input  logic clock, reset_n, // from Mini_NPU top module
  input  logic [7:0] fired_array, // array from Motion_Neuron modules
  output logic [7:0] LEDs // to Mini_NPU top module output
);

  // Clock frequency of design
  logic [23:0] CLK_FRQ;
  assign CLK_FRQ = 24'd10000000; // 10MHz clock

  // status signals
  logic count_done;

  // control signals
  logic count_down, count_reset, led_en, led_reset, fired_clr;

  // 25-bit count variable
  logic [24:0] count;

  // Counter for one second (time)
  always_ff @(posedge clock) begin
    if (~reset_n || count_reset || count_done) begin
      count <= CLK_FRQ;
    end
    else if (count_down) begin
      count <= count - 1;
    end
    else begin
      count <= count;
    end
  end

  // Cycle comparator
  always_comb begin
    if (count == 25'd0) begin
      count_done = 1;
    end
    else begin
      count_done = 0;
    end
  end

  // LED register
  always_ff @(posedge clock) begin
    if (~reset_n || led_reset) begin
      LEDs <= 0;
    end
    else if (led_en) begin
      LEDs <= fired_array;
    end
    else begin
      LEDs <= LEDs;
    end
  end

  // LED controller FSM
  enum logic {CLEAR, SHOW} led_state, led_nextState;

  always_comb begin
    // control signals
    count_down = 0;
    count_reset = 0;
    led_en = 0;
    led_reset = 0;

    led_nextState = CLEAR;

    case (led_state)
      CLEAR: begin
        if (fired_array == 0) begin
          led_nextState = CLEAR;
        end
        else if (fired_array > 0) begin
          led_nextState = SHOW;
          led_en = 1;
          count_down = 1;
        end
      end

      SHOW: begin
        if (~count_done) begin
          led_nextState = SHOW;
          count_down = 1;
        end
        else if (count_done) begin
          led_nextState = CLEAR;
          led_reset = 1;
          count_reset = 1;
        end
      end
    endcase
  end

  // State -> Next State Flip-Flop
  always_ff @(posedge clock) begin
    if (~reset_n) begin
      led_state <= CLEAR;
    end
    else begin
      led_state <= led_nextState;
    end
  end

endmodule: LED_Controller


/* Module for serial-in-parallel-out shift register */
module ShiftRegisterSIPO
 (input logic clock, reset_n,
              en, shift_clr, serial_bit,
  output logic [7:0] Q);

  always_ff @(posedge clock) begin
    if (~reset_n || shift_clr) begin
        Q <= 0;
    end
    else if (en) begin // Left shift in on LSB
        Q <= Q << 1;
        Q[0] <= serial_bit;
    end
    else begin // Latch output
        Q <= Q;
    end
  end

endmodule: ShiftRegisterSIPO
