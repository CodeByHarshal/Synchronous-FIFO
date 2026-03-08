TOPLEVEL_LANG = verilog

VERILOG_SOURCES = ../hdl/sync_fifo.v

TOPLEVEL = sync_fifo

COCOTB_TEST_MODULES = test_fifo

SIM = verilator

EXTRA_ARGS += --trace

export PYTHONPATH := ../dv

include $(shell cocotb-config --makefiles)/Makefile.sim
