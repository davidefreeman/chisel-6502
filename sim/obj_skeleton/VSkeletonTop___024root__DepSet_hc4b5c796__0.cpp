// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSkeletonTop.h for the primary calling header

#include "VSkeletonTop__pch.h"
#include "VSkeletonTop__Syms.h"
#include "VSkeletonTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSkeletonTop___024root___dump_triggers__ico(VSkeletonTop___024root* vlSelf);
#endif  // VL_DEBUG

void VSkeletonTop___024root___eval_triggers__ico(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_triggers__ico\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSkeletonTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSkeletonTop___024root___dump_triggers__act(VSkeletonTop___024root* vlSelf);
#endif  // VL_DEBUG

void VSkeletonTop___024root___eval_triggers__act(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_triggers__act\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSkeletonTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
