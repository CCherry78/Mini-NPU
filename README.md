# 18-224/624 S25 Tapeout Template


1. Add your verilog source files to `source_files` in `info.yaml`. The top level of your chip should remain in `chip.sv` and be named `my_chip`

  
  

2. Optionally add other details about your project to `info.yaml` as well (this is only for GitHub - your final project submission will involve submitting these in a different format)

3. Do NOT edit `toplevel_chip.v`  `config.tcl` or `pin_order.cfg`

 # Final Project Submission Details 
  
1. Your design must synthesize at 30MHz but you can run it at any arbitrarily-slow frequency (including single-stepping the clock) on the manufactured chip. If your design must run at an exact frequency, it is safest to choose a lower frequency (i.e. 5MHz)

  

2. For your final project, we will ask you to submit some sort of testbench to verify your design. Include all relevant testing files inside the `testbench` repository

  
  

3. For your final project, we will ask you to submit documentation on how to run/test your design, as well as include your project proposal and progress reports. Include all these files inside the `docs` repository

  
  

4. Optionally, if you use any images in your documentation (diagrams, waveforms, etc) please include them in a separate `img` repository

  

5. Feel free to edit this file and include some basic information about your project (short description, inputs and outputs, diagrams, how to run, etc). An outline is provided below

# Final Project

## Project Name
Mini NPU:

This project is a miniature neural processing unit. It uses a spiking neural network
to recognize certain motions. The I2C master in the design interfaces with a 3-axis accelerometer to
collect dynamic x, y, and z axis data, and passes it on to the spiking neural network (SNN). The SNN
accumulates accumulates this data in its membrane potential with registers and counters, and fires a spike
once the data for a specific axis and direction exceeds a certain threshold. This achieves the purpose
of recognizing a swipe in a certain direction after many consecutive increasing or decreasing changes on an axis in space.

## IO

An IO table listing all of your inputs and outputs and their function, like the one below:

| Input/Output	| Description|																
|---------------|------------------------------------|
| io_in[0]      | maps to SDA_in                     |
| io_in[1]      | maps to start                      |
| io_in[2]      | maps to stop                       |
| io_in[3:11]   | unused                             |
| io_out[0]     | maps to SDA (output functionality) |
| io_out[1]     | maps to SCL                        |
| io_out[2:9]   | maps to LEDs                       |
| io_out[10:11] | unused                             |

## How to Test

Post-silicon testing:
Connect an ADXL345 accelerometer with I2C to the appropriate pins as outlined in chip.sv. Note that io_in and io_out should be tied together for correct bidirectional functionality. Press the start button to begin motion detection. Continuously move the connected accelerometer in a single direction for at least two seconds, and the connected LEDs will light up with binary values corresponding to the direction you swiped. Press the stop button to end motion detection.

Testbench testing:
If testing with the testbench accelerometer_tb.py, run 'make -Bf testbench.mk' on the design. Having python3 and cocoTB installed is required. The testbench acts as the accelerometer device, and checks that the design performs all I2C data interactions correctly, as in accordance with the UM10204 I2C-Bus Specification and User Manual, and checks that the design correctly detects motions based on the data that was given.

FPGA testing:
If testing with an FPGA, switch out SDA_in for 1'bz (high-z) in the tri-state driver for SDA in the I2C module. Run yosys on the design with ‘read_verilog -sv mini_npu.sv’, then ‘synth_ecp5 -json synth_out.json -top Mini_NPU’. Exit yosys, then run ‘nextpnr-ecp5 --12k --json synth_out.json --lpf constraints.lpf --textcfg pnr_out.config’ with the provided constrains.lpf file (edit this as needed). Then run ‘ecppack --compress pnr_out.config bitstream.bit’ and then ‘fujprog bitstream.bit’ to load bitstream onto the FPGA.

