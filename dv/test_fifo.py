import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge


async def reset(dut):
    dut.rst.value = 1
    dut.wr_en.value = 0
    dut.rd_en.value = 0
    dut.data_in.value = 0

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    dut.rst.value = 0
    await RisingEdge(dut.clk)


@cocotb.test()
async def fifo_test(dut):

    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    await reset(dut)

    # ----------------
    # WRITE PHASE
    # ----------------

    for i in range(4):

        dut.wr_en.value = 1
        dut.data_in.value = i

        await RisingEdge(dut.clk)

    dut.wr_en.value = 0

    # allow fifo to settle
    await RisingEdge(dut.clk)

    # ----------------
    # READ PHASE
    # ----------------

    for expected in range(4):

        dut.rd_en.value = 1
        await RisingEdge(dut.clk)

        dut.rd_en.value = 0
        await RisingEdge(dut.clk)

        data = dut.data_out.value.to_unsigned()

        dut._log.info(f"READ = {data}")

        assert data == expected, f"Expected {expected}, got {data}"
