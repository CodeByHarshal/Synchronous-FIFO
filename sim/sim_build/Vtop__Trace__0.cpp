// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.wr_en));
    bufp->chgBit(oldp+3,(vlSelfRef.rd_en));
    bufp->chgIData(oldp+4,(vlSelfRef.data_in),32);
    bufp->chgIData(oldp+5,(vlSelfRef.data_out),32);
    bufp->chgBit(oldp+6,(vlSelfRef.full));
    bufp->chgBit(oldp+7,(vlSelfRef.empty));
    bufp->chgBit(oldp+8,(vlSelfRef.almost_full));
    bufp->chgBit(oldp+9,(vlSelfRef.almost_empty));
    bufp->chgBit(oldp+10,(vlSelfRef.sync_fifo__DOT__clk));
    bufp->chgBit(oldp+11,(vlSelfRef.sync_fifo__DOT__rst));
    bufp->chgBit(oldp+12,(vlSelfRef.sync_fifo__DOT__wr_en));
    bufp->chgBit(oldp+13,(vlSelfRef.sync_fifo__DOT__rd_en));
    bufp->chgIData(oldp+14,(vlSelfRef.sync_fifo__DOT__data_in),32);
    bufp->chgIData(oldp+15,(vlSelfRef.sync_fifo__DOT__data_out),32);
    bufp->chgBit(oldp+16,(vlSelfRef.sync_fifo__DOT__full));
    bufp->chgBit(oldp+17,(vlSelfRef.sync_fifo__DOT__empty));
    bufp->chgBit(oldp+18,(vlSelfRef.sync_fifo__DOT__almost_full));
    bufp->chgBit(oldp+19,(vlSelfRef.sync_fifo__DOT__almost_empty));
    bufp->chgIData(oldp+20,(vlSelfRef.sync_fifo__DOT__mem[0]),32);
    bufp->chgIData(oldp+21,(vlSelfRef.sync_fifo__DOT__mem[1]),32);
    bufp->chgIData(oldp+22,(vlSelfRef.sync_fifo__DOT__mem[2]),32);
    bufp->chgIData(oldp+23,(vlSelfRef.sync_fifo__DOT__mem[3]),32);
    bufp->chgIData(oldp+24,(vlSelfRef.sync_fifo__DOT__mem[4]),32);
    bufp->chgIData(oldp+25,(vlSelfRef.sync_fifo__DOT__mem[5]),32);
    bufp->chgIData(oldp+26,(vlSelfRef.sync_fifo__DOT__mem[6]),32);
    bufp->chgIData(oldp+27,(vlSelfRef.sync_fifo__DOT__mem[7]),32);
    bufp->chgIData(oldp+28,(vlSelfRef.sync_fifo__DOT__mem[8]),32);
    bufp->chgIData(oldp+29,(vlSelfRef.sync_fifo__DOT__mem[9]),32);
    bufp->chgIData(oldp+30,(vlSelfRef.sync_fifo__DOT__mem[10]),32);
    bufp->chgIData(oldp+31,(vlSelfRef.sync_fifo__DOT__mem[11]),32);
    bufp->chgIData(oldp+32,(vlSelfRef.sync_fifo__DOT__mem[12]),32);
    bufp->chgIData(oldp+33,(vlSelfRef.sync_fifo__DOT__mem[13]),32);
    bufp->chgIData(oldp+34,(vlSelfRef.sync_fifo__DOT__mem[14]),32);
    bufp->chgIData(oldp+35,(vlSelfRef.sync_fifo__DOT__mem[15]),32);
    bufp->chgCData(oldp+36,(vlSelfRef.sync_fifo__DOT__wr_ptr),4);
    bufp->chgCData(oldp+37,(vlSelfRef.sync_fifo__DOT__rd_ptr),4);
    bufp->chgCData(oldp+38,(vlSelfRef.sync_fifo__DOT__fifo_count),5);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
