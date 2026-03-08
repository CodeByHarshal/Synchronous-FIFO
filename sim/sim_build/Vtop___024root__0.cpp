// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sync_fifo__DOT__clk = vlSelfRef.clk;
    vlSelfRef.sync_fifo__DOT__rst = vlSelfRef.rst;
    vlSelfRef.sync_fifo__DOT__wr_en = vlSelfRef.wr_en;
    vlSelfRef.sync_fifo__DOT__rd_en = vlSelfRef.rd_en;
    vlSelfRef.sync_fifo__DOT__data_in = vlSelfRef.data_in;
    vlSelfRef.data_out = vlSelfRef.sync_fifo__DOT__data_out;
    vlSelfRef.sync_fifo__DOT__full = (0x10U == (IData)(vlSelfRef.sync_fifo__DOT__fifo_count));
    vlSelfRef.sync_fifo__DOT__empty = (0U == (IData)(vlSelfRef.sync_fifo__DOT__fifo_count));
    vlSelfRef.sync_fifo__DOT__almost_full = (0x0eU 
                                             <= (IData)(vlSelfRef.sync_fifo__DOT__fifo_count));
    vlSelfRef.sync_fifo__DOT__almost_empty = (1U >= (IData)(vlSelfRef.sync_fifo__DOT__fifo_count));
    vlSelfRef.full = vlSelfRef.sync_fifo__DOT__full;
    vlSelfRef.empty = vlSelfRef.sync_fifo__DOT__empty;
    vlSelfRef.almost_full = vlSelfRef.sync_fifo__DOT__almost_full;
    vlSelfRef.almost_empty = vlSelfRef.sync_fifo__DOT__almost_empty;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.sync_fifo__DOT__clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sync_fifo__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__sync_fifo__DOT__clk__0 
        = vlSelfRef.sync_fifo__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__sync_fifo__DOT__wr_ptr;
    __Vdly__sync_fifo__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__sync_fifo__DOT__rd_ptr;
    __Vdly__sync_fifo__DOT__rd_ptr = 0;
    IData/*31:0*/ __VdlyVal__sync_fifo__DOT__mem__v0;
    __VdlyVal__sync_fifo__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__sync_fifo__DOT__mem__v0;
    __VdlyDim0__sync_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__sync_fifo__DOT__mem__v0;
    __VdlySet__sync_fifo__DOT__mem__v0 = 0;
    // Body
    __Vdly__sync_fifo__DOT__rd_ptr = vlSelfRef.sync_fifo__DOT__rd_ptr;
    __Vdly__sync_fifo__DOT__wr_ptr = vlSelfRef.sync_fifo__DOT__wr_ptr;
    __VdlySet__sync_fifo__DOT__mem__v0 = 0U;
    if (vlSelfRef.sync_fifo__DOT__rst) {
        __Vdly__sync_fifo__DOT__wr_ptr = 0U;
        vlSelfRef.sync_fifo__DOT__fifo_count = 0U;
        __Vdly__sync_fifo__DOT__rd_ptr = 0U;
    } else {
        if (((IData)(vlSelfRef.sync_fifo__DOT__wr_en) 
             & (~ (IData)(vlSelfRef.sync_fifo__DOT__full)))) {
            __VdlyVal__sync_fifo__DOT__mem__v0 = vlSelfRef.sync_fifo__DOT__data_in;
            __VdlyDim0__sync_fifo__DOT__mem__v0 = vlSelfRef.sync_fifo__DOT__wr_ptr;
            __VdlySet__sync_fifo__DOT__mem__v0 = 1U;
            __Vdly__sync_fifo__DOT__wr_ptr = (0x0000000fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.sync_fifo__DOT__wr_ptr)));
        }
        vlSelfRef.sync_fifo__DOT__fifo_count = (0x0000001fU 
                                                & ((2U 
                                                    == 
                                                    ((((IData)(vlSelfRef.sync_fifo__DOT__wr_en) 
                                                       & (~ (IData)(vlSelfRef.sync_fifo__DOT__full))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.sync_fifo__DOT__rd_en) 
                                                        & (~ (IData)(vlSelfRef.sync_fifo__DOT__empty)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.sync_fifo__DOT__fifo_count))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     ((((IData)(vlSelfRef.sync_fifo__DOT__wr_en) 
                                                        & (~ (IData)(vlSelfRef.sync_fifo__DOT__full))) 
                                                       << 1U) 
                                                      | ((IData)(vlSelfRef.sync_fifo__DOT__rd_en) 
                                                         & (~ (IData)(vlSelfRef.sync_fifo__DOT__empty)))))
                                                     ? 
                                                    ((IData)(vlSelfRef.sync_fifo__DOT__fifo_count) 
                                                     - (IData)(1U))
                                                     : (IData)(vlSelfRef.sync_fifo__DOT__fifo_count))));
        if (((IData)(vlSelfRef.sync_fifo__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.sync_fifo__DOT__empty)))) {
            vlSelfRef.sync_fifo__DOT__data_out = vlSelfRef.sync_fifo__DOT__mem
                [vlSelfRef.sync_fifo__DOT__rd_ptr];
            __Vdly__sync_fifo__DOT__rd_ptr = (0x0000000fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.sync_fifo__DOT__rd_ptr)));
        }
    }
    vlSelfRef.sync_fifo__DOT__wr_ptr = __Vdly__sync_fifo__DOT__wr_ptr;
    vlSelfRef.sync_fifo__DOT__rd_ptr = __Vdly__sync_fifo__DOT__rd_ptr;
    if (__VdlySet__sync_fifo__DOT__mem__v0) {
        vlSelfRef.sync_fifo__DOT__mem[__VdlyDim0__sync_fifo__DOT__mem__v0] 
            = __VdlyVal__sync_fifo__DOT__mem__v0;
    }
    vlSelfRef.sync_fifo__DOT__full = (0x10U == (IData)(vlSelfRef.sync_fifo__DOT__fifo_count));
    vlSelfRef.sync_fifo__DOT__empty = (0U == (IData)(vlSelfRef.sync_fifo__DOT__fifo_count));
    vlSelfRef.sync_fifo__DOT__almost_full = (0x0eU 
                                             <= (IData)(vlSelfRef.sync_fifo__DOT__fifo_count));
    vlSelfRef.sync_fifo__DOT__almost_empty = (1U >= (IData)(vlSelfRef.sync_fifo__DOT__fifo_count));
    vlSelfRef.data_out = vlSelfRef.sync_fifo__DOT__data_out;
    vlSelfRef.full = vlSelfRef.sync_fifo__DOT__full;
    vlSelfRef.empty = vlSelfRef.sync_fifo__DOT__empty;
    vlSelfRef.almost_full = vlSelfRef.sync_fifo__DOT__almost_full;
    vlSelfRef.almost_empty = vlSelfRef.sync_fifo__DOT__almost_empty;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../hdl/sync_fifo.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../hdl/sync_fifo.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../hdl/sync_fifo.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.wr_en & 0xfeU)))) {
        Verilated::overWidthError("wr_en");
    }
    if (VL_UNLIKELY(((vlSelfRef.rd_en & 0xfeU)))) {
        Verilated::overWidthError("rd_en");
    }
}
#endif  // VL_DEBUG
