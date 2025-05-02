TOPLEVEL_LANG = verilog
VERILOG_SOURCES = $(shell pwd)/mini_npu.sv
TOPLEVEL = Mini_NPU
MODULE = accelerometer_tb
SIM = verilator
EXTRA_ARGS += --trace --trace-structs -Wno-fatal
include $(shell cocotb-config --makefiles)/Makefile.sim
