// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU6502Testable.h for the primary calling header

#include "VCPU6502Testable__pch.h"
#include "VCPU6502Testable__Syms.h"
#include "VCPU6502Testable___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU6502Testable___024root___dump_triggers__stl(VCPU6502Testable___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU6502Testable___024root___eval_triggers__stl(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_triggers__stl\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPU6502Testable___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
