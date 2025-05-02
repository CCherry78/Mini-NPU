import os
import logging
import random
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import *
from cocotb.utils import get_sim_time

#### Testbench that acts as ADXL345 accelerometer slave device ####

async def start_condition_write(dut):
    await RisingEdge(dut.clock)
    await RisingEdge(dut.clock) # extra cycle to account for en signals can be asserted in design
    assert (dut.write.value == 1)
    assert (dut.SDA.value == 1)
    assert (dut.SCL.value == 1)
    await RisingEdge(dut.clock)
    assert (dut.SDA.value == 0)
    assert (dut.SCL.value == 1)


async def start_condition_poll(dut):
    await RisingEdge(dut.clock)
    await RisingEdge(dut.clock) # extra cycle to account for en signals can be asserted in design
    assert (dut.poll.value == 1)
    assert (dut.SDA.value == 1)
    assert (dut.SCL.value == 1)
    await RisingEdge(dut.clock)
    assert (dut.SDA.value == 0)
    assert (dut.SCL.value == 1)


async def start_condition_read(dut):
    await RisingEdge(dut.clock)
    assert (dut.data_read.value == 1)
    assert (dut.SDA.value == 1)
    assert (dut.SCL.value == 1)
    await RisingEdge(dut.clock)
    assert (dut.SDA.value == 0)
    assert (dut.SCL.value == 1)


async def start_condition_poll_regular(dut):
    await RisingEdge(dut.clock)
    assert (dut.poll.value == 1)
    assert (dut.SDA.value == 1)
    assert (dut.SCL.value == 1)
    await RisingEdge(dut.clock)
    assert (dut.SDA.value == 0)
    assert (dut.SCL.value == 1)


async def repeated_start_condition_poll(dut):
    await RisingEdge(dut.clock)
    assert (dut.poll.value == 1)
    assert (dut.write.value == 0)
    assert (dut.SDA.value == 1)
    assert (dut.SCL.value == 1)
    await RisingEdge(dut.clock)
    assert (dut.SDA.value == 0)
    assert (dut.SCL.value == 1)


async def repeated_start_condition_read(dut):
    await RisingEdge(dut.clock)
    assert (dut.data_read.value == 1)
    assert (dut.poll.value == 0)
    assert (dut.SDA.value == 1)
    assert (dut.SCL.value == 1)
    await RisingEdge(dut.clock)
    assert (dut.SDA.value == 0)
    assert (dut.SCL.value == 1)


async def sak(dut):
    await FallingEdge(dut.clock)
    dut.SDA_in.value = 0
    await RisingEdge(dut.clock)
    assert(dut.abort.value == 0)
    await FallingEdge(dut.clock)
    dut.SDA_in.value = 1
    await RisingEdge(dut.clock)
    assert(dut.SDA.value == 1)
    assert(dut.abort.value == 0)


async def nmak(dut):
    await RisingEdge(dut.clock)
    assert(dut.SDA.value == 1)
    await RisingEdge(dut.clock)
    assert(dut.SDA.value == 0)


async def nmak_read(dut, moved, value):
    await RisingEdge(dut.clock)
    assert(dut.SDA.value == 1)
    assert(dut.data_avail.value == 1)
    assert(dut.x_axis.d1_en.value == 1)
    assert(dut.x_axis.d2n_en.value == 1)
    assert(dut.y_axis.d1_en.value == 1)
    assert(dut.y_axis.d2n_en.value == 1)
    assert(dut.z_axis.d1_en.value == 1)
    assert(dut.z_axis.d2n_en.value == 1)
    await RisingEdge(dut.clock)
    assert(dut.SDA.value == 0)
    if (moved[0] == 1) and (value != 0):
        assert(dut.left_activated.value == 1)
    elif (moved[2] == 1) and (value != 0):
        assert(dut.right_activated.value == 1)
    elif (moved[3] == 1) and (value != 0):
        assert(dut.back_activated.value == 1)
    elif (moved[5] == 1) and (value != 0):
        assert(dut.forward_activated.value == 1)
    elif (moved[6] == 1) and (value != 0):
        assert(dut.down_activated.value == 1)
    elif (moved[8] == 1) and (value != 0):
        assert(dut.up_activated.value == 1)


async def stop_condition(dut):
    await RisingEdge(dut.clock)
    assert (dut.SDA.value == 0)
    assert (dut.SCL.value == 1)
    await RisingEdge(dut.clock)
    assert (dut.SDA.value == 1)
    assert (dut.SCL.value == 1)


async def stop_condition_read(dut, moved, value):
    await RisingEdge(dut.clock)
    assert (dut.SDA.value == 0)
    assert (dut.SCL.value == 1)
    if (moved[0] == 1) and (value != 0):
        if (value == 89):
            assert(dut.left_fired.value == 1)
            assert(dut.fired_array.value == 32) #00100000
    elif (moved[2] == 1) and (value != 0):
        if (value == 89):
            assert(dut.right_fired.value == 1)
            assert(dut.fired_array.value == 16) #00010000
    elif (moved[3] == 1) and (value != 0):
        if (value == 89):
            assert(dut.back_fired.value == 1)
            assert(dut.fired_array.value == 8) #00001000
    elif (moved[5] == 1) and (value != 0):
        if (value == 89):
            assert(dut.forward_fired.value == 1)
            assert(dut.fired_array.value == 4) #00000100
    elif (moved[6] == 1) and (value != 0):
        if (value == 89):
            assert(dut.down_fired.value == 1)
            assert(dut.fired_array.value == 2) #00000010
    elif (moved[8] == 1) and (value != 0):
        if (value == 89):
            assert(dut.up_fired.value == 1)
            assert(dut.fired_array.value == 1) #00000001
    await RisingEdge(dut.clock)
    assert (dut.SDA.value == 1)
    assert (dut.SCL.value == 1)


async def sad_w_check(dut):
    sad_w = []
    for i in range(8):
        await RisingEdge(dut.clock)
        sad_w.append(dut.SDA.value)
    assert(sad_w == [0,0,1,1,1,0,1,0]) # == 0x3A


async def sad_r_check(dut):
    sad_r = []
    for i in range(8):
        await RisingEdge(dut.clock)
        sad_r.append(dut.SDA.value)
    assert(sad_r == [0,0,1,1,1,0,1,1]) # == 0x3B


# single byte read sequence for polling DATA_READY
async def polling_sequence(dut, int_source_reg, i):
    if i == 0:
        ### Check START condition for polling ###
        await start_condition_poll(dut)
    else:
        ### Check START condition for polling ###
        await start_condition_poll_regular(dut)

    ### Check that the correct slave address + write bit is being sent ###
    await sad_w_check(dut)

    ### Send slave acknowledgement ###
    await sak(dut)

    ### Check that INT_SOURCE_addr register sub address is being sent ###
    sub_addr = []
    for i in range(8):
        await RisingEdge(dut.clock)
        sub_addr.append(dut.SDA.value)
    assert(sub_addr == [0,0,1,1,0,0,0,0]) # == 0x30 INT_SOURCE register

    ### Send slave acknowledgement ###
    await sak(dut)

    ### Check REPEATED START condition for polling ###
    await repeated_start_condition_poll(dut)

    ### Check that the correct slave address + read bit is being sent ###
    await sad_r_check(dut)

    ### Send slave acknowledgement ###
    await sak(dut)

    # send in INT_SOURCE register data
    for i in range(8):
        await FallingEdge(dut.clock)
        dut.SDA_in.value = int_source_reg[i]
    await RisingEdge(dut.clock)

    await nmak(dut)
    await stop_condition(dut)

    await RisingEdge(dut.clock)
    if (int_source_reg[0] == 0):
        assert(dut.data_ready.value == 0)
    elif (int_source_reg[0] == 1):
        assert(dut.data_ready.value == 1)


async def data_read_sequence(dut, data, moved, value):
    ### Check START condition for multi-byte data read ###
    await start_condition_read(dut)

    ### Check that the correct slave address + write bit is being sent ###
    await sad_w_check(dut)

    ### Send slave acknowledgement ###
    await sak(dut)

    ### Check that DATAX0_addr register sub address is being sent ###
    sub_addr = []
    for i in range(8):
        await RisingEdge(dut.clock)
        sub_addr.append(dut.SDA.value)
    assert(sub_addr == [0,0,1,1,0,0,1,0]) # == 0x32 DATAX0 register

    ### Send slave acknowledgement ###
    await sak(dut)

    ### Check REPEATED START condition for data reading ###
    await repeated_start_condition_read(dut)

    ### Check that the correct slave address + read bit is being sent ###
    await sad_r_check(dut)

    ### Send slave acknowledgement ###
    await sak(dut)
    
    # send in DATAX0 -> DATAZ1 register data
    for i in range(48):
        await FallingEdge(dut.clock)
        dut.SDA_in.value = data[i]
    await RisingEdge(dut.clock)

    await nmak_read(dut, moved, value)
    await stop_condition_read(dut, moved, value)

    await RisingEdge(dut.clock)
    assert(dut.read_done.value == 1)


# help from ChatGPT writing some parts of this function
async def update_data(dut, data, value, axis, increase, decrease):
    print(f"axis = {axis}, value = {value}\n")

    # Constrain value to 16-bit two's complement range
    value &= 0xFFFF

    datalo = value & 0xFF        # LSB
    datahi = (value >> 8) & 0xFF # MSB

    # Big-endian: most significant bit first in each byte
    datalo_bits = [(datalo >> i) & 1 for i in reversed(range(8))]  # DATAX0
    datahi_bits = [(datahi >> i) & 1 for i in reversed(range(8))]  # DATAX1

    if (axis == 'x'):
        if (increase):
            moved = [0, 0, 1,
                     0, 0, 0,
                     0, 0, 0]
        elif (decrease):
            moved = [1, 0, 0,
                     0, 0, 0,
                     0, 0, 0]
        # Overwrite data[0:16] with new bit pattern
        data[0:8] = datalo_bits      # DATAX0 (LSB)
        data[8:16] = datahi_bits     # DATAX1 (MSB)
    elif (axis == 'y'):
        # Overwrite data[16:32] with new bit pattern
        data[16:24] = datalo_bits      # DATAY0 (LSB)
        data[24:32] = datahi_bits      # DATAY1 (MSB)
        if (increase):
            moved = [0, 0, 0,
                     0, 0, 1,
                     0, 0, 0]
        elif (decrease):
            moved = [0, 0, 0,
                     1, 0, 0,
                     0, 0, 0]
    elif (axis == 'z'):
        # Overwrite data[32:48] with new bit pattern
        data[32:40] = datalo_bits      # DATAZ0 (LSB)
        data[40:48] = datahi_bits      # DATAZ1 (MSB)
        if (increase):
            moved = [0, 0, 0,
                     0, 0, 0,
                     0, 0, 1]
        elif (decrease):
            moved = [0, 0, 0,
                     0, 0, 0,
                     1, 0, 0]
            
    print(f"data = {data}\n")

    # new data ready
    int_source_reg = [1,0,0,0,0,0,0,0] # DATA_READY bit (MSB) == 1
    # poll with DATA_READY
    await polling_sequence(dut, int_source_reg, 1)

    await data_read_sequence(dut, data, moved, value)


@cocotb.test()
async def basic_test(dut):
    print("============== STARTING TEST ==============")

    # Following the I2C protocol from the ADXL345 datasheet:
    # 1. A single byte write
    # Until stop, loop on:
    # 2. Polling on single byte reads
    # 3. Multiple byte read

    # Run the clock
    # 100nS (=0.1uS) is the period of a 10MHz clock
    cocotb.start_soon(Clock(dut.clock, 100, units="ns").start())

    # Since our circuit is on the rising edge,
    # we can feed inputs on the falling edge
    # This makes things easier to read and visualize
    await FallingEdge(dut.clock)

    # Reset the DUT
    dut.reset_n.value = False
    await FallingEdge(dut.clock)
    await FallingEdge(dut.clock)
    dut.reset_n.value = True

    assert dut.start.value == False
    assert dut.stop.value == False
    print("Starting at", get_sim_time(units="ns"))

    # Assert start signal
    await FallingEdge(dut.clock)
    dut.start.value = 1

    ### Check START condition for writing ###
    await start_condition_write(dut)

    ### Check that the correct slave address + write bit is being sent ###
    await sad_w_check(dut)

    ### Send slave acknowledgement ###
    await sak(dut)

    ### Check that FIFO_CTL_addr register sub address is being sent ###
    sub_addr = []
    for i in range(8):
        await RisingEdge(dut.clock)
        sub_addr.append(dut.SDA.value)
    assert(sub_addr == [0,0,1,1,1,0,0,0]) # == 0x38 FIFO_CTL register

    ### Send slave acknowledgement ###
    await sak(dut)

    ### Check that correct FIFO register data is being sent ###
    fifo_data = []
    for i in range(8):
        await FallingEdge(dut.clock)
        fifo_data.append(dut.SDA.value)
    assert(fifo_data == [0,1,1,0,0,0,0,0])

    ### Send slave acknowledgement ###
    await sak(dut)

    ### Check STOP condition ###
    await stop_condition(dut)

    ### Check that write_done is asserted ###
    await FallingEdge(dut.clock)
    assert (dut.write_done.value == 1)

    int_source_reg = [0,0,0,0,0,0,0,0] # DATA_READY bit (MSB) == 0

    # Poll on DATA_READY bit 7 times
    for i in range(8):
        await polling_sequence(dut, int_source_reg, i)

    # Initial values for axis data
    data = [0,0,0,0,0,0,0,0, # DATAX0
            0,0,0,0,0,0,0,0, # DATAX1
            0,0,0,0,0,0,0,0, # DATAY0
            0,0,0,0,0,0,0,0, # DATAY1
            0,0,0,0,0,0,0,0, # DATAZ0
            0,0,0,0,0,0,0,0] # DATAZ1

    ### Increase then decrease in the positive range each axis to fire each motion neuron once ###

    # increase x_axis data 90 times to fire the "right" motion neuron
    for value in range(90):
        increase = 1
        decrease = 0
        await update_data(dut, data, value, 'x', increase, decrease)

    # decrease x_axis data 90 times to fire the "left" motion neuron
    for _ in range(90):
        value -= 1
        increase = 0
        decrease = 1
        await update_data(dut, data, value, 'x', increase, decrease)

    # increase y_axis data 90 times to fire the "forward" motion neuron
    for value in range(90):
        increase = 1
        decrease = 0
        await update_data(dut, data, value, 'y', increase, decrease)

    # decrease y_axis data 90 times to fire the "back" motion neuron
    for _ in range(90):
        value -= 1
        increase = 0
        decrease = 1
        await update_data(dut, data, value, 'y', increase, decrease)

    # increase z_axis data 90 times to fire the "up" motion neuron
    for value in range(90):
        increase = 1
        decrease = 0
        await update_data(dut, data, value, 'z', increase, decrease)

    # decrease z_axis data 90 times to fire the "down" motion neuron
    for _ in range(90):
        value -= 1
        increase = 0
        decrease = 1
        await update_data(dut, data, value, 'z', increase, decrease)

    ### Decrease then increase in the negative range each axis to fire each motion neuron once ###
    
    # increase back to 0
    value = 0
    await update_data(dut, data, value, 'x', 1, 0)
    assert (data[0:16] == [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])

    # decrease x_axis data 90 times to fire the "left" motion neuron
    for _ in range(90):
        value -= 1
        print(f"value = {value}\n")
        increase = 0
        decrease = 1
        await update_data(dut, data, value, 'x', increase, decrease)

    # increase x_axis data 90 times to fire the "right" motion neuron
    for _ in range(90):
        value += 1
        increase = 1
        decrease = 0
        await update_data(dut, data, value, 'x', increase, decrease)

    # increase back to 0
    value = 0
    await update_data(dut, data, value, 'y', 1, 0)
    assert (data[16:32] == [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])

    # decrease y_axis data 90 times to fire the "back" motion neuron
    for _ in range(90):
        value -= 1
        increase = 0
        decrease = 1
        await update_data(dut, data, value, 'y', increase, decrease)

    # increase y_axis data 90 times to fire the "forward" motion neuron
    for _ in range(90):
        value += 1
        increase = 1
        decrease = 0
        await update_data(dut, data, value, 'y', increase, decrease)

    # increase back to 0
    value = 0
    await update_data(dut, data, value, 'z', 1, 0)
    assert (data[32:48] == [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])

    # decrease z_axis data 90 times to fire the "down" motion neuron
    for _ in range(90):
        value -= 1
        increase = 0
        decrease = 1
        await update_data(dut, data, value, 'z', increase, decrease)

    # increase x_axis data 90 times to fire the "up" motion neuron
    for _ in range(90):
        value += 1
        increase = 1
        decrease = 0
        await update_data(dut, data, value, 'z', increase, decrease)

    await FallingEdge(dut.clock)
    dut.start.value = 0
    dut.stop.value = 1
    await RisingEdge(dut.clock)
    await RisingEdge(dut.clock)
    assert (dut.ph.ph_state == 0)

    print("All done :)\n")