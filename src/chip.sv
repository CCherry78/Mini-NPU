`default_nettype none

/* Top Module for chip design */
module my_chip (
    input logic [11:0] io_in, // Inputs to your chip
    output logic [11:0] io_out, // Outputs from your chip
    input logic clock,
    input logic reset // Important: Reset is ACTIVE-HIGH
);
    
    Mini_NPU npu(.clock(clock), .reset_n(~reset),
                 .start(io_in[1]), .stop(io_in[2]),
                 .SDA_in(io_in[0]), .SDA(io_out[0]), .SCL(io_out[1]),
                 .LEDs(io_out[2:9]));

endmodule
