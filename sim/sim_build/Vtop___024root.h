// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(wr_en,0,0);
    VL_IN8(rd_en,0,0);
    VL_OUT8(full,0,0);
    VL_OUT8(empty,0,0);
    VL_OUT8(almost_full,0,0);
    VL_OUT8(almost_empty,0,0);
    CData/*0:0*/ sync_fifo__DOT__clk;
    CData/*0:0*/ sync_fifo__DOT__rst;
    CData/*0:0*/ sync_fifo__DOT__wr_en;
    CData/*0:0*/ sync_fifo__DOT__rd_en;
    CData/*0:0*/ sync_fifo__DOT__full;
    CData/*0:0*/ sync_fifo__DOT__empty;
    CData/*0:0*/ sync_fifo__DOT__almost_full;
    CData/*0:0*/ sync_fifo__DOT__almost_empty;
    CData/*3:0*/ sync_fifo__DOT__wr_ptr;
    CData/*3:0*/ sync_fifo__DOT__rd_ptr;
    CData/*4:0*/ sync_fifo__DOT__fifo_count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sync_fifo__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_IN(data_in,31,0);
    VL_OUT(data_out,31,0);
    IData/*31:0*/ sync_fifo__DOT__data_in;
    IData/*31:0*/ sync_fifo__DOT__data_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> sync_fifo__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ sync_fifo__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ sync_fifo__DOT__DEPTH = 0x00000010U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
