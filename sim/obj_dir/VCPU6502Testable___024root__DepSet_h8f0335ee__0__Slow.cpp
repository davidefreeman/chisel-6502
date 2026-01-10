// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU6502Testable.h for the primary calling header

#include "VCPU6502Testable__pch.h"
#include "VCPU6502Testable___024root.h"

VL_ATTR_COLD void VCPU6502Testable___024root___eval_static(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_static\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VCPU6502Testable___024root___eval_initial(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_initial\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VCPU6502Testable___024root___eval_final(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_final\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU6502Testable___024root___dump_triggers__stl(VCPU6502Testable___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCPU6502Testable___024root___eval_phase__stl(VCPU6502Testable___024root* vlSelf);

VL_ATTR_COLD void VCPU6502Testable___024root___eval_settle(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_settle\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VCPU6502Testable___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/david.e.freeman/Projects/chisel-6502/sim/../generated/CPU6502Testable.sv", 717, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCPU6502Testable___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU6502Testable___024root___dump_triggers__stl(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___dump_triggers__stl\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU6502Testable___024root___stl_sequent__TOP__0(VCPU6502Testable___024root* vlSelf);
VL_ATTR_COLD void VCPU6502Testable___024root____Vm_traceActivitySetAll(VCPU6502Testable___024root* vlSelf);

VL_ATTR_COLD void VCPU6502Testable___024root___eval_stl(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_stl\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCPU6502Testable___024root___stl_sequent__TOP__0(vlSelf);
        VCPU6502Testable___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VCPU6502Testable___024root___stl_sequent__TOP__0(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___stl_sequent__TOP__0\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_2;
    CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_2 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_118;
    CPU6502Testable__DOT__decoder__DOT___GEN_118 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_119;
    CPU6502Testable__DOT__decoder__DOT___GEN_119 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_120;
    CPU6502Testable__DOT__decoder__DOT___GEN_120 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_121;
    CPU6502Testable__DOT__decoder__DOT___GEN_121 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_122;
    CPU6502Testable__DOT__decoder__DOT___GEN_122 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_123;
    CPU6502Testable__DOT__decoder__DOT___GEN_123 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_124;
    CPU6502Testable__DOT__decoder__DOT___GEN_124 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_130;
    CPU6502Testable__DOT__decoder__DOT___GEN_130 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_131;
    CPU6502Testable__DOT__decoder__DOT___GEN_131 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_132;
    CPU6502Testable__DOT__decoder__DOT___GEN_132 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_134;
    CPU6502Testable__DOT__decoder__DOT___GEN_134 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_160;
    CPU6502Testable__DOT__decoder__DOT___GEN_160 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_161;
    CPU6502Testable__DOT__decoder__DOT___GEN_161 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_162;
    CPU6502Testable__DOT__decoder__DOT___GEN_162 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_163;
    CPU6502Testable__DOT__decoder__DOT___GEN_163 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_164;
    CPU6502Testable__DOT__decoder__DOT___GEN_164 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_165;
    CPU6502Testable__DOT__decoder__DOT___GEN_165 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_166;
    CPU6502Testable__DOT__decoder__DOT___GEN_166 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_167;
    CPU6502Testable__DOT__decoder__DOT___GEN_167 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT___GEN_168;
    CPU6502Testable__DOT__decoder__DOT___GEN_168 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31 = 0;
    CData/*0:0*/ CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32;
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32 = 0;
    VlWide<4>/*127:0*/ CPU6502Testable__DOT__alu__DOT___GEN_13;
    VL_ZERO_W(128, CPU6502Testable__DOT__alu__DOT___GEN_13);
    CData/*7:0*/ CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0;
    CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h7cd686f0_0_1;
    __VdfgRegularize_h7cd686f0_0_1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelfRef.io_debug_pc = vlSelfRef.CPU6502Testable__DOT__regPC;
    vlSelfRef.io_debug_a = vlSelfRef.CPU6502Testable__DOT__regA;
    vlSelfRef.io_debug_x = vlSelfRef.CPU6502Testable__DOT__regX;
    vlSelfRef.io_debug_y = vlSelfRef.CPU6502Testable__DOT__regY;
    vlSelfRef.io_debug_sp = vlSelfRef.CPU6502Testable__DOT__regSP;
    vlSelfRef.io_debug_opcode = vlSelfRef.CPU6502Testable__DOT__opcode;
    vlSelfRef.io_debug_state = (0xfU & (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN = (0U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_0 = (0U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_1 = (1U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_3 = (1U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_4 = (2U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_5 = (8U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_7 = (4U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_8 = (0xaU 
                                              == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_9 = (0xbU 
                                              == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_11 = (3U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_33 = (0xcU 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_36 = (0xdU 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_2 = (2U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_37 = (0xeU 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_34 = (3U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_39 = (4U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_40 = (5U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_41 = (0xfU 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_42 = (0x10U 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_31 = (5U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_32 = (9U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___io_address_T_3 
        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.CPU6502Testable__DOT__regSP)));
    vlSelfRef.io_cycleCount = vlSelfRef.CPU6502Testable__DOT__cycleCount;
    vlSelfRef.CPU6502Testable__DOT___GEN_35 = ((1U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)) 
                                               | (2U 
                                                  == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)));
    vlSelfRef.CPU6502Testable__DOT__effectiveAddr = 
        (((IData)(vlSelfRef.CPU6502Testable__DOT__addrHi) 
          << 8U) | (IData)(vlSelfRef.CPU6502Testable__DOT__addrLo));
    vlSelfRef.CPU6502Testable__DOT___GEN_38 = ((5U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                               | (9U 
                                                  == (IData)(vlSelfRef.CPU6502Testable__DOT__state)));
    CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_2 
        = ((((IData)(vlSelfRef.CPU6502Testable__DOT__flagD) 
             << 3U) | ((IData)(vlSelfRef.CPU6502Testable__DOT__flagI) 
                       << 2U)) | (((IData)(vlSelfRef.CPU6502Testable__DOT__flagZ) 
                                   << 1U) | (IData)(vlSelfRef.CPU6502Testable__DOT__flagC)));
    vlSelfRef.CPU6502Testable__DOT___GEN_18 = ((4U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                               | ((0xaU 
                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                  | (0xbU 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__state))));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2 
        = ((0x49U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x45U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT___GEN_161 = 
        ((0xe8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
         | ((0xc8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0xcaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | (0x88U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16 
        = ((0x4cU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x6cU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT___GEN_134 = 
        ((0xa0U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
         | ((0xa4U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0xb4U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | ((0xacU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | (0xbcU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0 
        = ((0xaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x4aU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23 
        = ((0xe6U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | ((0xf6U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
              | ((0xeeU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                 | (0xfeU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13 
        = ((0xc6U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0xd6U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14 
        = ((6U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x16U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15 
        = ((0x46U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x56U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22 
        = ((0x26U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | ((0x36U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
              | ((0x2eU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                 | (0x3eU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))));
    CPU6502Testable__DOT__decoder__DOT___GEN_160 = 
        ((0x66U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
         | ((0x76U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0x6eU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | (0x7eU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21 
        = ((0xa8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x98U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5 
        = ((0x48U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x68U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28 
        = ((0xedU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0xf5U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27 
        = ((0xe1U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0xf1U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26 
        = ((0x2dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x35U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25 
        = ((0x21U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x31U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8 
        = ((0xaaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x8aU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9 
        = ((0x60U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x40U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17 
        = ((0x18U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x38U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6 
        = ((0xc9U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0xc5U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT___GEN_130 = 
        ((0x24U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
         | (0x2cU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10 
        = ((0xe9U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0xe5U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11 
        = ((0x29U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x25U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT___GEN_124 = 
        ((0xa9U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
         | ((0xa5U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0xb5U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | ((0xadU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | ((0xbdU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                     | ((0xb9U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                        | ((0xa1U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                           | (0xb1U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))))))));
    CPU6502Testable__DOT__decoder__DOT___GEN_119 = 
        ((8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
         | (0x28U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7 
        = ((0x69U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x65U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12 
        = ((9U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (5U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3 
        = ((0x85U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x95U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1 
        = ((0x10U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0x30U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4 
        = ((0xa2U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
           | (0xa6U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
    vlSelfRef.__VdfgRegularize_h7cd686f0_0_0 = ((0x84U 
                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                | ((0x94U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                   | (0x8cU 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))));
    __VdfgRegularize_h7cd686f0_0_1 = ((0xc0U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                      | ((0xc4U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                         | (0xccU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))));
    vlSelfRef.io_debug_p = (0x20U | ((((IData)(vlSelfRef.CPU6502Testable__DOT__flagN) 
                                       << 7U) | ((IData)(vlSelfRef.CPU6502Testable__DOT__flagV) 
                                                 << 6U)) 
                                     | (((IData)(vlSelfRef.CPU6502Testable__DOT__flagB) 
                                         << 4U) | (IData)(CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_2))));
    vlSelfRef.CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_3 
        = (0x30U | (((IData)(vlSelfRef.CPU6502Testable__DOT__flagN) 
                     << 7U) | (((IData)(vlSelfRef.CPU6502Testable__DOT__flagV) 
                                << 6U) | (IData)(CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_2))));
    vlSelfRef.CPU6502Testable__DOT___GEN_19 = ((0U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                               | ((1U 
                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                  | ((2U 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                     | ((8U 
                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                        | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_18)))));
    CPU6502Testable__DOT__decoder__DOT___GEN_121 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2) 
         | ((0x4dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0x55U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | ((0x5dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | ((0x59U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                     | ((0x41U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                        | (0x51U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))))));
    CPU6502Testable__DOT__decoder__DOT___GEN_118 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0) 
         | ((0x2aU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | (0x6aU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18 
        = ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23) 
           | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13) 
              | ((0xceU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                 | ((0xdeU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                    | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14) 
                       | ((0xeU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                          | ((0x1eU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                             | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15) 
                                | ((0x4eU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                   | ((0x5eU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                      | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22) 
                                         | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_160))))))))))));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29 
        = ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8) 
           | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21) 
              | ((0xbaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                 | (0x9aU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))));
    CPU6502Testable__DOT__decoder__DOT___GEN_162 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5) 
         | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_119));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31 
        = ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7) 
           | ((0x6dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
              | ((0x75U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                 | ((0x7dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                    | ((0x79U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                       | ((0x61U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                          | (0x71U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))))));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24 
        = ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12) 
           | ((0xdU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
              | ((0x15U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                 | ((0x1dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                    | ((0x19U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                       | ((1U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                          | (0x11U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))))));
    CPU6502Testable__DOT__decoder__DOT___GEN_163 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1) 
         | ((0x50U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0x70U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | ((0x90U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | ((0xb0U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                     | ((0xd0U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                        | (0xf0U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))))));
    CPU6502Testable__DOT__decoder__DOT___GEN_132 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4) 
         | ((0xb6U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0xaeU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | (0xbeU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))));
    CPU6502Testable__DOT__decoder__DOT___GEN_166 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_124) 
         | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4) 
            | ((0xb6U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | ((0xaeU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | ((0xbeU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                     | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_134))))));
    CPU6502Testable__DOT__decoder__DOT___GEN_122 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3) 
         | ((0x8dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0x9dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | ((0x99U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | ((0x81U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                     | ((0x91U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                        | ((0x86U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                           | ((0x96U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                              | ((0x8eU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h7cd686f0_0_0))))))))));
    CPU6502Testable__DOT__decoder__DOT___GEN_164 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6) 
         | ((0xcdU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0xd5U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | ((0xddU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | ((0xd9U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                     | ((0xc1U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                        | ((0xd1U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                           | ((0xe0U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                              | ((0xe4U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                 | ((0xecU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                    | (IData)(__VdfgRegularize_h7cd686f0_0_1)))))))))));
    CPU6502Testable__DOT__decoder__DOT___GEN_131 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_118) 
         | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_130));
    CPU6502Testable__DOT__decoder__DOT___GEN_167 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29) 
         | ((0xe8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0xc8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | ((0xcaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | ((0x88U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                     | (0xeaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))))));
    CPU6502Testable__DOT__decoder__DOT___GEN_168 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9) 
         | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
            | ((0x58U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | ((0x78U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | ((0xb8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                     | ((0xd8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                        | ((0xf8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                           | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_162))))))));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30 
        = ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31) 
           | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10) 
              | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28) 
                 | ((0xfdU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                    | ((0xf9U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                       | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27) 
                          | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11) 
                             | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26) 
                                | ((0x3dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                   | ((0x39U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                      | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25) 
                                         | (IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24))))))))))));
    CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32 
        = ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_163) 
           | ((0x4cU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
              | ((0x6cU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                 | (0x20U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))));
    vlSelfRef.CPU6502Testable__DOT___decoder_io_writeY 
        = ((~ ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_124) 
               | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_132))) 
           & ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_134) 
              | ((~ ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_122) 
                     | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7) 
                        | ((0x6dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                           | ((0x75U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                              | ((0x7dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                 | ((0x79U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                    | ((0x61U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                       | ((0x71U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                          | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10) 
                                             | ((0xedU 
                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                | ((0xf5U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                   | ((0xfdU 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                      | ((0xf9U 
                                                          == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                         | ((0xe1U 
                                                             == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                            | ((0xf1U 
                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                               | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11) 
                                                                  | ((0x2dU 
                                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                     | ((0x35U 
                                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                        | ((0x3dU 
                                                                            == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                           | ((0x39U 
                                                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                              | ((0x21U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x31U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12) 
                                                                                | ((0xdU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x15U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x1dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x19U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2) 
                                                                                | ((0x4dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x55U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x5dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x59U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x41U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x51U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6) 
                                                                                | ((0xcdU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xd5U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xddU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xd9U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xc1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xd1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xe0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xe4U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xecU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xc0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xc4U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xccU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1) 
                                                                                | ((0x50U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x70U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x90U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xb0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xd0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xf0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16) 
                                                                                | ((0x20U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x60U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x40U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x18U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x38U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x58U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x78U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xb8U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xd8U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xf8U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5) 
                                                                                | ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_119) 
                                                                                | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0) 
                                                                                | ((0x2aU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x6aU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_130) 
                                                                                | (IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                 & ((0xa8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                    | ((~ ((0x98U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                           | ((0xbaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                              | ((0x9aU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                 | (0xe8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))))) 
                       & ((0xc8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                          | ((0xcaU != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                             & (0x88U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))))))));
    CPU6502Testable__DOT__decoder__DOT___GEN_123 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_132) 
         | ((0xa0U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0xa4U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | ((0xb4U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | ((0xacU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                     | ((0xbcU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                        | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_122)))))));
    vlSelfRef.CPU6502Testable__DOT___decoder_io_writeX 
        = ((~ (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_124)) 
           & ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_132) 
              | ((~ ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_134) 
                     | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3) 
                        | ((0x8dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                           | ((0x9dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                              | ((0x99U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                 | ((0x81U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                    | ((0x91U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                       | ((0x86U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                          | ((0x96U 
                                              == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                             | ((0x8eU 
                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                | ((0x84U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                   | ((0x94U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                      | ((0x8cU 
                                                          == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                         | ((0x69U 
                                                             == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                            | ((0x65U 
                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                               | ((0x6dU 
                                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                  | ((0x75U 
                                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                     | ((0x7dU 
                                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                        | ((0x79U 
                                                                            == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                           | ((0x61U 
                                                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                              | ((0x71U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xe9U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xe5U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xedU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xf5U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xfdU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xf9U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xe1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xf1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x29U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x25U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x2dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x35U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x3dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x39U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x21U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x31U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((9U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((5U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xdU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x15U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x1dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x19U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x49U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x45U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x4dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x55U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x5dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x59U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x41U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x51U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xc9U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xc5U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xcdU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xd5U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xddU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xd9U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xc1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xd1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xe0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xe4U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xecU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xc0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xc4U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xccU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x10U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x30U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x50U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x70U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x90U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xb0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xd0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xf0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x4cU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x6cU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x20U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9) 
                                                                                | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
                                                                                | ((0x58U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x78U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xb8U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xd8U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0xf8U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x48U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x68U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((8U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | ((0x28U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                                | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_131))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                 & ((0xaaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                    | ((~ ((0x8aU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                           | (IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21))) 
                       & ((0xbaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                          | ((0x9aU != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                             & ((0xe8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                | ((0xc8U != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                   & (0xcaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))))))))));
    vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode 
        = ((0xa9U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
            ? 1U : ((0xa5U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                     ? 2U : ((0xb5U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                              ? 3U : ((0xadU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                       ? 5U : ((0xbdU 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                ? 6U
                                                : (
                                                   (0xb9U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                    ? 7U
                                                    : 
                                                   ((0xa1U 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                     ? 9U
                                                     : 
                                                    ((0xb1U 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                       ? 1U
                                                       : 
                                                      ((0xa6U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                        ? 2U
                                                        : 
                                                       ((0xb6U 
                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                         ? 4U
                                                         : 
                                                        ((0xaeU 
                                                          == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                          ? 5U
                                                          : 
                                                         ((0xbeU 
                                                           == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                           ? 7U
                                                           : 
                                                          ((0xa0U 
                                                            == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                            ? 1U
                                                            : 
                                                           ((0xa4U 
                                                             == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                             ? 2U
                                                             : 
                                                            ((0xb4U 
                                                              == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                              ? 3U
                                                              : 
                                                             ((0xacU 
                                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                               ? 5U
                                                               : 
                                                              ((0xbcU 
                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                ? 6U
                                                                : 
                                                               ((0x85U 
                                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                 ? 2U
                                                                 : 
                                                                ((0x95U 
                                                                  == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                  ? 3U
                                                                  : 
                                                                 ((0x8dU 
                                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                   ? 5U
                                                                   : 
                                                                  ((0x9dU 
                                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                    ? 6U
                                                                    : 
                                                                   ((0x99U 
                                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                     ? 7U
                                                                     : 
                                                                    ((0x81U 
                                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                      ? 9U
                                                                      : 
                                                                     ((0x91U 
                                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                       ? 0xaU
                                                                       : 
                                                                      ((0x86U 
                                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                        ? 2U
                                                                        : 
                                                                       ((0x96U 
                                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                         ? 4U
                                                                         : 
                                                                        ((0x8eU 
                                                                          == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                          ? 5U
                                                                          : 
                                                                         ((0x84U 
                                                                           == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                           ? 2U
                                                                           : 
                                                                          ((0x94U 
                                                                            == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                            ? 3U
                                                                            : 
                                                                           ((0x8cU 
                                                                             == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                             ? 5U
                                                                             : 
                                                                            ((0x69U 
                                                                              == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                              ? 1U
                                                                              : 
                                                                             ((0x65U 
                                                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                               ? 2U
                                                                               : 
                                                                              ((0x6dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                ? 5U
                                                                                : 
                                                                               ((0x75U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x7dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x79U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0x61U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x71U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0xe9U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0xe5U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0xedU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0xf5U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0xfdU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0xf9U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0xe1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0xf1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0x29U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0x25U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0x2dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x35U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x3dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x39U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0x21U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x31U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((9U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((5U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0xdU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x15U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x1dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x19U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x11U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0x49U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0x45U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0x4dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x55U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x5dU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x59U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0x41U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0x51U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0xc9U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0xc5U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0xcdU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0xd5U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0xddU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0xd9U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0xc1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0xd1U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0xe0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0xe4U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0xecU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0xc0U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0xc4U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0xccU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_163)
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((0x4cU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x6cU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0x20U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_168)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_118)
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((0x24U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0x2cU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_167)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xe6U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0xf6U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0xeeU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0xfeU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0xc6U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0xd6U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0xceU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0xdeU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((6U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0x16U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0xeU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x1eU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x46U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0x56U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x4eU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x5eU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x26U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0x36U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x2eU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x3eU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x66U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0x76U 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x6eU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x7eU 
                                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                                                 ? 6U
                                                                                 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    CPU6502Testable__DOT__decoder__DOT___GEN_165 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30) 
         | ((0x49U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
            | ((0x45U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
               | ((0x4dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | ((0x55U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                     | ((0x5dU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                        | ((0x59U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                           | ((0x41U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                              | ((0x51U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                 | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_164))))))))));
    CPU6502Testable__DOT__decoder__DOT___GEN_120 = 
        ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32) 
         | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9) 
            | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
               | ((0x58U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                  | ((0x78U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                     | ((0xb8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                        | ((0xd8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                           | ((0xf8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                              | (0x48U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))))))));
    vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp 
        = (((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_124) 
            | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_123))
            ? 0xdU : ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31)
                       ? 0U : (((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10) 
                                | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28) 
                                   | ((0xfdU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                      | ((0xf9U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                         | (IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27)))))
                                ? 1U : (((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11) 
                                         | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26) 
                                            | ((0x3dU 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                               | ((0x39U 
                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                  | (IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25)))))
                                         ? 2U : ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24)
                                                  ? 3U
                                                  : 
                                                 ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_121)
                                                   ? 4U
                                                   : 
                                                  ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_164)
                                                    ? 0xbU
                                                    : 
                                                   (((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32) 
                                                     | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_168))
                                                     ? 0xdU
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                      ? 5U
                                                      : 
                                                     ((0x4aU 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                       ? 6U
                                                       : 
                                                      ((0x2aU 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                        ? 7U
                                                        : 
                                                       ((0x6aU 
                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                         ? 8U
                                                         : 
                                                        ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_130)
                                                          ? 0xcU
                                                          : 
                                                         ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_167)
                                                           ? 0xdU
                                                           : 
                                                          ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23)
                                                            ? 9U
                                                            : 
                                                           (((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13) 
                                                             | ((0xceU 
                                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                | (0xdeU 
                                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))
                                                             ? 0xaU
                                                             : 
                                                            (((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14) 
                                                              | ((0xeU 
                                                                  == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                 | (0x1eU 
                                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))
                                                              ? 5U
                                                              : 
                                                             (((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15) 
                                                               | ((0x4eU 
                                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                  | (0x5eU 
                                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))
                                                               ? 6U
                                                               : 
                                                              ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22)
                                                                ? 7U
                                                                : 
                                                               ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_160)
                                                                 ? 8U
                                                                 : 0xdU))))))))))))))))))));
    vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType 
        = ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_166)
            ? 1U : ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_122)
                     ? 2U : ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_165)
                              ? 0U : ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_163)
                                       ? 3U : (((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16) 
                                                | ((0x20U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                   | (IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9)))
                                                ? 4U
                                                : (
                                                   ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
                                                    | ((0x58U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                       | ((0x78U 
                                                           == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                          | ((0xb8U 
                                                              == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                             | ((0xd8U 
                                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                | (0xf8U 
                                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))))))
                                                    ? 6U
                                                    : 
                                                   ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_162)
                                                     ? 5U
                                                     : 
                                                    ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_131)
                                                      ? 0U
                                                      : 
                                                     ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29)
                                                       ? 9U
                                                       : 
                                                      ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_161)
                                                        ? 0xaU
                                                        : 
                                                       ((1U 
                                                         & ((~ (IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18)) 
                                                            | (0xeaU 
                                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))
                                                         ? 7U
                                                         : 0xbU)))))))))));
    vlSelfRef.CPU6502Testable__DOT___decoder_io_writeA 
        = ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_124) 
           | ((~ (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_123)) 
              & ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30) 
                 | ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_121) 
                    | ((~ ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_164) 
                           | (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_120))) 
                       & ((0x68U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                          | ((~ (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_119)) 
                             & ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_118) 
                                | ((~ ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_130) 
                                       | (0xaaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))) 
                                   & ((0x8aU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                      | ((0xa8U != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                         & (0x98U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))))))))))));
    vlSelfRef.CPU6502Testable__DOT___decoder_io_updateFlags 
        = ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_166) 
           | ((~ (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_122)) 
              & ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_165) 
                 | ((~ (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_120)) 
                    & ((0x68U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                       | ((~ (IData)(CPU6502Testable__DOT__decoder__DOT___GEN_119)) 
                          & ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_131) 
                             | ((IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8) 
                                | ((0xa8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                   | ((0x98U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                      | ((0xbaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                         | ((0x9aU 
                                             != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                            & ((IData)(CPU6502Testable__DOT__decoder__DOT___GEN_161) 
                                               | ((0xeaU 
                                                   != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                  & (IData)(CPU6502Testable__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18)))))))))))))));
    vlSelfRef.CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6 
        = ((2U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
           | ((3U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
              | (4U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))));
    vlSelfRef.CPU6502Testable__DOT___GEN_29 = ((7U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                               | ((1U 
                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                                  | ((0U 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                                     | (4U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)))));
    vlSelfRef.CPU6502Testable__DOT___GEN_24 = ((0xaU 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)));
    vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a 
        = ((0xbU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))
            ? (IData)(vlSelfRef.CPU6502Testable__DOT__operand)
            : (((0xe0U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                | ((0xe4U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                   | (0xecU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))
                ? (IData)(vlSelfRef.CPU6502Testable__DOT__regX)
                : ((IData)(__VdfgRegularize_h7cd686f0_0_1)
                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__regY)
                    : (IData)(vlSelfRef.CPU6502Testable__DOT__regA))));
    vlSelfRef.CPU6502Testable__DOT___GEN_26 = ((9U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                               | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_24));
    CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0 
        = ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
           & (IData)(vlSelfRef.CPU6502Testable__DOT__operand));
    vlSelfRef.CPU6502Testable__DOT__alu__DOT___sum_T_1 
        = (0x1ffU & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                     + ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                        + (IData)(vlSelfRef.CPU6502Testable__DOT__flagC))));
    vlSelfRef.CPU6502Testable__DOT__alu__DOT__cmpDiff 
        = (0x1ffU & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                     - (IData)(vlSelfRef.CPU6502Testable__DOT__operand)));
    vlSelfRef.CPU6502Testable__DOT___GEN_27 = ((6U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                               | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_26));
    vlSelfRef.CPU6502Testable__DOT__alu__DOT___diff_T_4 
        = (0x1ffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT__cmpDiff) 
                     - (1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__flagC)))));
    vlSelfRef.io_writeEnable = ((~ (IData)(vlSelfRef.io_test_enable)) 
                                & ((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_19)) 
                                   & ((3U == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                       ? ((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_29)) 
                                          & ((2U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                             | ((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_27)) 
                                                & ((5U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                                   & ((0x48U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                      | ((0x68U 
                                                          != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                         & (8U 
                                                            == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))))))
                                       : ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_38) 
                                          | ((0xcU 
                                              == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                              ? ((0U 
                                                  == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)) 
                                                 | (1U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)))
                                              : ((0xdU 
                                                  != (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                 & ((0xeU 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                    & ((0U 
                                                        != (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)) 
                                                       & ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_35) 
                                                          | (3U 
                                                             == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)))))))))));
    vlSelfRef.CPU6502Testable__DOT___GEN_28 = ((5U 
                                                != (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                               | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_27));
    if ((0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))) {
        vlSelfRef.CPU6502Testable__DOT___alu_io_carryOut 
            = (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___sum_T_1) 
                     >> 8U));
        vlSelfRef.CPU6502Testable__DOT___alu_io_overflow 
            = (((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) == (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                         >> 7U))) & 
               ((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) != (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___sum_T_1) 
                                         >> 7U))));
    } else if ((1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))) {
        vlSelfRef.CPU6502Testable__DOT___alu_io_carryOut 
            = (1U & (~ ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___diff_T_4) 
                        >> 8U)));
        vlSelfRef.CPU6502Testable__DOT___alu_io_overflow 
            = (((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) != (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                         >> 7U))) & 
               ((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) != (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___diff_T_4) 
                                         >> 7U))));
    } else {
        vlSelfRef.CPU6502Testable__DOT___alu_io_carryOut 
            = (1U & ((~ (IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6)) 
                     & ((5U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))
                         ? ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                            >> 7U) : ((6U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))
                                       ? (IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a)
                                       : ((7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))
                                           ? ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                              >> 7U)
                                           : ((8U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))
                                               ? (IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a)
                                               : ((~ 
                                                   ((9U 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                                    | (0xaU 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)))) 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT__cmpDiff) 
                                                       >> 8U)) 
                                                     & (0xbU 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))))))))));
        vlSelfRef.CPU6502Testable__DOT___alu_io_overflow 
            = ((~ ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6) 
                   | ((5U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                      | ((6U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                         | ((7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                            | ((8U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                               | ((9U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                  | ((0xaU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                     | (0xbU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)))))))))) 
               & ((0xcU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                  & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                     >> 6U)));
    }
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x7fU 
                                               & (IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a)))) 
                              << 0x39U) | (((QData)((IData)(vlSelfRef.CPU6502Testable__DOT__flagC)) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (0x7fU 
                                                                & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                                                   >> 1U)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & (IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a)))) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                                                      ^ (IData)(vlSelfRef.CPU6502Testable__DOT__operand)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                                                          | (IData)(vlSelfRef.CPU6502Testable__DOT__operand)) 
                                                                         << 0x18U) 
                                                                        | ((IData)(CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___diff_T_4) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___sum_T_1))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0x7fU 
                                                & (IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a)))) 
                               << 0x39U) | (((QData)((IData)(vlSelfRef.CPU6502Testable__DOT__flagC)) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0x7fU 
                                                                 & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                                                    >> 1U)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a)))) 
                                                   << 0x29U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                                                       ^ (IData)(vlSelfRef.CPU6502Testable__DOT__operand)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                                                           | (IData)(vlSelfRef.CPU6502Testable__DOT__operand)) 
                                                                          << 0x18U) 
                                                                         | ((IData)(CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___diff_T_4) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___sum_T_1))))))))))) 
                             >> 0x20U));
    CPU6502Testable__DOT__alu__DOT___GEN_13[0U] = __Vtemp_1[0U];
    CPU6502Testable__DOT__alu__DOT___GEN_13[1U] = __Vtemp_1[1U];
    CPU6502Testable__DOT__alu__DOT___GEN_13[2U] = (IData)(
                                                          (((QData)((IData)(
                                                                            ((((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                                                               << 0x18U) 
                                                                              | ((IData)(CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                                                                << 0x10U)) 
                                                                             | ((0xff00U 
                                                                                & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT__cmpDiff) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                                                                - (IData)(1U))))))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             ((0xff00U 
                                                                               & (((IData)(1U) 
                                                                                + (IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a)) 
                                                                                << 8U)) 
                                                                              | (((IData)(vlSelfRef.CPU6502Testable__DOT__flagC) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                                                                >> 1U))))))));
    CPU6502Testable__DOT__alu__DOT___GEN_13[3U] = (IData)(
                                                          ((((QData)((IData)(
                                                                             ((((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                                                                << 0x18U) 
                                                                               | ((IData)(CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                                                                << 0x10U)) 
                                                                              | ((0xff00U 
                                                                                & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT__cmpDiff) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                                                                - (IData)(1U))))))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              ((0xff00U 
                                                                                & (((IData)(1U) 
                                                                                + (IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a)) 
                                                                                << 8U)) 
                                                                               | (((IData)(vlSelfRef.CPU6502Testable__DOT__flagC) 
                                                                                << 7U) 
                                                                                | (0x7fU 
                                                                                & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                                                                >> 1U))))))) 
                                                           >> 0x20U));
    vlSelfRef.io_address = ((IData)(vlSelfRef.io_test_enable)
                             ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                             : ((0U == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                 ? ((0U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                     ? 0xfffcU : ((1U 
                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                   ? 0xfffdU
                                                   : (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)))
                                 : (((1U == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                     | ((2U == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                        | (8U == (IData)(vlSelfRef.CPU6502Testable__DOT__state))))
                                     ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                                     : ((4U == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                         ? (IData)(vlSelfRef.CPU6502Testable__DOT__effectiveAddr)
                                         : ((0xaU == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                             ? (IData)(vlSelfRef.CPU6502Testable__DOT__zpAddr)
                                             : ((0xbU 
                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                                 ? (IData)(vlSelfRef.CPU6502Testable__DOT__zpAddr)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_29)
                                                   ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))
                                                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__effectiveAddr)
                                                    : 
                                                   ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_28)
                                                     ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                                                     : 
                                                    ((0x48U 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                      ? 
                                                     (0x100U 
                                                      | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                      : 
                                                     ((0x68U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                       ? 
                                                      (0x100U 
                                                       | (0xffU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))))
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                        ? 
                                                       (0x100U 
                                                        | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                        : 
                                                       ((0x28U 
                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                         ? 
                                                        (0x100U 
                                                         | (0xffU 
                                                            & ((IData)(1U) 
                                                               + (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))))
                                                         : (IData)(vlSelfRef.CPU6502Testable__DOT__regPC))))))))
                                                  : 
                                                 ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_38)
                                                   ? (IData)(vlSelfRef.CPU6502Testable__DOT__effectiveAddr)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                      ? 
                                                     (0x100U 
                                                      | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                      : (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)))
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                      ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                       ? 
                                                      (0x100U 
                                                       | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                        ? 
                                                       (0x100U 
                                                        | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                        : (IData)(vlSelfRef.CPU6502Testable__DOT__regPC))))
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                       ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                        ? 
                                                       (0x100U 
                                                        | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                         ? 
                                                        (0x100U 
                                                         | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                          ? 
                                                         (0x100U 
                                                          | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                           ? 0xfffeU
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                            ? 0xffffU
                                                            : (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)))))))
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                        ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                         ? 
                                                        (0x100U 
                                                         | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                          ? 
                                                         (0x100U 
                                                          | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                           ? 
                                                          (0x100U 
                                                           | (IData)(vlSelfRef.CPU6502Testable__DOT__regSP))
                                                           : (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)))))
                                                       : 
                                                      (((0x10U 
                                                         != (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                        | (0U 
                                                           == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)))
                                                        ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                         ? (IData)(vlSelfRef.CPU6502Testable__DOT__effectiveAddr)
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                          ? 
                                                         (((IData)(vlSelfRef.CPU6502Testable__DOT__addrHi) 
                                                           << 8U) 
                                                          | (0xffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.CPU6502Testable__DOT__addrLo))))
                                                          : (IData)(vlSelfRef.CPU6502Testable__DOT__regPC))))))))))))))));
    vlSelfRef.CPU6502Testable__DOT___alu_io_negative 
        = (1U & (CPU6502Testable__DOT__alu__DOT___GEN_13[
                 (3U & (((IData)(7U) + VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp), 3U)) 
                        >> 5U))] >> (0x1fU & ((IData)(7U) 
                                              + VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp), 3U)))));
    vlSelfRef.CPU6502Testable__DOT___alu_io_result 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp), 3U)))
                      ? 0U : (CPU6502Testable__DOT__alu__DOT___GEN_13[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp), 3U))))) 
                    | (CPU6502Testable__DOT__alu__DOT___GEN_13[
                       (3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp), 3U)))));
    vlSelfRef.io_dataOut = (((IData)(vlSelfRef.io_test_enable) 
                             | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_19))
                             ? 0U : (0xffU & ((3U == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                               ? ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_29)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h7cd686f0_0_0)
                                                     ? (IData)(vlSelfRef.CPU6502Testable__DOT__regY)
                                                     : 
                                                    (((0x86U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                      | ((0x96U 
                                                          == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                         | (0x8eU 
                                                            == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))
                                                      ? (IData)(vlSelfRef.CPU6502Testable__DOT__regX)
                                                      : 
                                                     (((0x85U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                       | ((0x8dU 
                                                           == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                          | ((0x95U 
                                                              == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                             | ((0x9dU 
                                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                | ((0x99U 
                                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                   | ((0x81U 
                                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                                      | (0x91U 
                                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))))))
                                                       ? (IData)(vlSelfRef.CPU6502Testable__DOT__regA)
                                                       : 0U)))
                                                    : 
                                                   ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_28)
                                                     ? 0U
                                                     : 
                                                    ((0x48U 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                      ? (IData)(vlSelfRef.CPU6502Testable__DOT__regA)
                                                      : 
                                                     (((8U 
                                                        != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                       | (0x68U 
                                                          == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))
                                                       ? 0U
                                                       : (IData)(vlSelfRef.CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_3))))))
                                               : ((5U 
                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                                   ? (IData)(vlSelfRef.CPU6502Testable__DOT__regA)
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                                    ? (IData)(vlSelfRef.CPU6502Testable__DOT___alu_io_result)
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                      ? 
                                                     ((IData)(vlSelfRef.CPU6502Testable__DOT__regPC) 
                                                      >> 8U)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                       ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                                                       : 0U))
                                                     : 
                                                    (((0xdU 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                      | ((0xeU 
                                                          != (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                         | (0U 
                                                            == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                       ? 
                                                      ((IData)(vlSelfRef.CPU6502Testable__DOT__regPC) 
                                                       >> 8U)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                        ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle))
                                                         ? (IData)(vlSelfRef.CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_3)
                                                         : 0U))))))))));
}

VL_ATTR_COLD void VCPU6502Testable___024root___eval_triggers__stl(VCPU6502Testable___024root* vlSelf);

VL_ATTR_COLD bool VCPU6502Testable___024root___eval_phase__stl(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_phase__stl\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCPU6502Testable___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VCPU6502Testable___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU6502Testable___024root___dump_triggers__ico(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___dump_triggers__ico\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU6502Testable___024root___dump_triggers__act(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___dump_triggers__act\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU6502Testable___024root___dump_triggers__nba(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___dump_triggers__nba\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU6502Testable___024root____Vm_traceActivitySetAll(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root____Vm_traceActivitySetAll\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VCPU6502Testable___024root___ctor_var_reset(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___ctor_var_reset\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2291783326818885519ull);
    vlSelf->io_dataIn = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6238546677346096030ull);
    vlSelf->io_dataOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3093542447108070962ull);
    vlSelf->io_writeEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10882523787590468553ull);
    vlSelf->io_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11508255256164795686ull);
    vlSelf->io_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12626417319763520558ull);
    vlSelf->io_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4105585816352928677ull);
    vlSelf->io_test_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6149195786028435625ull);
    vlSelf->io_test_pc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7140584217914750226ull);
    vlSelf->io_test_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10475680549273502326ull);
    vlSelf->io_test_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12444884775951623423ull);
    vlSelf->io_test_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 823585923077023756ull);
    vlSelf->io_test_s = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 167273512735914081ull);
    vlSelf->io_test_p = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15494987595605129505ull);
    vlSelf->io_debug_pc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10350072731982309968ull);
    vlSelf->io_debug_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3033231648726933463ull);
    vlSelf->io_debug_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9866056529192329251ull);
    vlSelf->io_debug_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18038066597487806162ull);
    vlSelf->io_debug_sp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11170317043965553902ull);
    vlSelf->io_debug_p = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5919286910711544003ull);
    vlSelf->io_debug_opcode = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4140289945094786175ull);
    vlSelf->io_debug_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11871637249436978663ull);
    vlSelf->io_cycleCount = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 722397440397711672ull);
    vlSelf->CPU6502Testable__DOT___alu_io_result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2694275468012831510ull);
    vlSelf->CPU6502Testable__DOT___alu_io_carryOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16488734509431453921ull);
    vlSelf->CPU6502Testable__DOT___alu_io_negative = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13916380841197571719ull);
    vlSelf->CPU6502Testable__DOT___alu_io_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3066752298113615417ull);
    vlSelf->CPU6502Testable__DOT___decoder_io_aluOp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5821850878434459705ull);
    vlSelf->CPU6502Testable__DOT___decoder_io_addressMode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11989861362021894594ull);
    vlSelf->CPU6502Testable__DOT___decoder_io_instrType = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13093504929056701793ull);
    vlSelf->CPU6502Testable__DOT___decoder_io_writeA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11224417410417205731ull);
    vlSelf->CPU6502Testable__DOT___decoder_io_writeX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13932346816135142401ull);
    vlSelf->CPU6502Testable__DOT___decoder_io_writeY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2569791104951630974ull);
    vlSelf->CPU6502Testable__DOT___decoder_io_updateFlags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7426860239182178923ull);
    vlSelf->CPU6502Testable__DOT__regA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12022932310623830945ull);
    vlSelf->CPU6502Testable__DOT__regX = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16351933495561117591ull);
    vlSelf->CPU6502Testable__DOT__regY = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14018517209338655619ull);
    vlSelf->CPU6502Testable__DOT__regSP = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8392243346868953725ull);
    vlSelf->CPU6502Testable__DOT__regPC = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7965700747087150990ull);
    vlSelf->CPU6502Testable__DOT__flagN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2830204351852041428ull);
    vlSelf->CPU6502Testable__DOT__flagV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1184166546730131475ull);
    vlSelf->CPU6502Testable__DOT__flagB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2585693679276082179ull);
    vlSelf->CPU6502Testable__DOT__flagD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17136198883448449866ull);
    vlSelf->CPU6502Testable__DOT__flagI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4378397385712973667ull);
    vlSelf->CPU6502Testable__DOT__flagZ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14513520537477508649ull);
    vlSelf->CPU6502Testable__DOT__flagC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1582082961702949330ull);
    vlSelf->CPU6502Testable__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14081158269826789369ull);
    vlSelf->CPU6502Testable__DOT__cycle = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4514933542372113287ull);
    vlSelf->CPU6502Testable__DOT__cycleCount = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10964595688021109776ull);
    vlSelf->CPU6502Testable__DOT__opcode = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1927372969956016746ull);
    vlSelf->CPU6502Testable__DOT__operand = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11038363640972097224ull);
    vlSelf->CPU6502Testable__DOT__addrLo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16482125414367422629ull);
    vlSelf->CPU6502Testable__DOT__addrHi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7840568699702028369ull);
    vlSelf->CPU6502Testable__DOT__effectiveAddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14947524642005754876ull);
    vlSelf->CPU6502Testable__DOT__zpAddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11413474155860761547ull);
    vlSelf->CPU6502Testable__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8272156867589337037ull);
    vlSelf->CPU6502Testable__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9620585788538546461ull);
    vlSelf->CPU6502Testable__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5144708672420814716ull);
    vlSelf->CPU6502Testable__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11480079782425505484ull);
    vlSelf->CPU6502Testable__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1661394689363506793ull);
    vlSelf->CPU6502Testable__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8840504517674565640ull);
    vlSelf->CPU6502Testable__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15175875627679109433ull);
    vlSelf->CPU6502Testable__DOT___GEN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9906289295233834904ull);
    vlSelf->CPU6502Testable__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9816833623575412694ull);
    vlSelf->CPU6502Testable__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5364528047880622928ull);
    vlSelf->CPU6502Testable__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14419740578039401392ull);
    vlSelf->CPU6502Testable__DOT___GEN_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4510829574558753287ull);
    vlSelf->CPU6502Testable__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16835091537114052798ull);
    vlSelf->CPU6502Testable__DOT___io_address_T_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13213589886692224235ull);
    vlSelf->CPU6502Testable__DOT___GEN_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16006567166461067574ull);
    vlSelf->CPU6502Testable__DOT___GEN_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7679184938896714668ull);
    vlSelf->CPU6502Testable__DOT___GEN_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4814159935075311667ull);
    vlSelf->CPU6502Testable__DOT___GEN_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5460064416155002775ull);
    vlSelf->CPU6502Testable__DOT___GEN_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3473721827777700435ull);
    vlSelf->CPU6502Testable__DOT___GEN_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1701569074715650466ull);
    vlSelf->CPU6502Testable__DOT___GEN_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11291875869092421887ull);
    vlSelf->CPU6502Testable__DOT___GEN_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13288369889105863783ull);
    vlSelf->CPU6502Testable__DOT___GEN_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3569400816131277136ull);
    vlSelf->CPU6502Testable__DOT___GEN_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10764482234974227366ull);
    vlSelf->CPU6502Testable__DOT___GEN_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15409373946247123436ull);
    vlSelf->CPU6502Testable__DOT___GEN_37 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16190117175822375713ull);
    vlSelf->CPU6502Testable__DOT___GEN_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16836021656901941153ull);
    vlSelf->CPU6502Testable__DOT___GEN_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8267548760718977392ull);
    vlSelf->CPU6502Testable__DOT___GEN_40 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12251262142324892595ull);
    vlSelf->CPU6502Testable__DOT___GEN_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15561892216197549202ull);
    vlSelf->CPU6502Testable__DOT___GEN_42 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16377250233465334106ull);
    vlSelf->CPU6502Testable__DOT____Vcellinp__alu__io_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6434810963110142234ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT___GEN_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6073353057074957295ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT___GEN_44 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3845054292126358842ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT___GEN_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14962283738730173785ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT___GEN_46 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11582269331233943788ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT___GEN_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10529374848397635422ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT___GEN_48 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419299616707132290ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT___GEN_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11156320139039357849ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT___GEN_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9606728414584663263ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT___GEN_51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13462319096167715733ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT___GEN_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16205232877377325695ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT___GEN_53 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3832306944925077981ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_54 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16661341189390836580ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12478787654039489996ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11309971969187692203ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13399903747228409807ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2418146513957725888ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10210042046440876509ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_60 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2435054234111800445ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18441271995541303044ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17272456310689505263ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9636381765222090271ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 501892863588525821ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9370725476276101714ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6325385283499662395ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12643948518915061023ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1293894219222477607ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10821157167739611753ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3224020287067406849ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1265703831842844410ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11792661164954760314ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1288696674385319881ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8956984598917790235ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4774431063566444934ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3605615378714736831ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8378736915438928128ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_74 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17563945008467459270ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_75 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6350721389598272414ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_76 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3996578251499056926ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13982695320139916405ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_78 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7040808738516236187ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_79 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8930239962563699753ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_80 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14448723046796622209ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10702215132676141612ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_82 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9109581378964805298ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3720209019055166322ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_84 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8793001398288184943ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 943149049197882610ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_86 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2983985086707998127ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16423936542776035611ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13784030470001091772ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT___GEN_87 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2904935023852325330ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_88 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12561805266699851677ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6721665673305337387ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3214296682716825209ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_91 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5362505019216201604ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7219550616724065085ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14296705602620180739ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16312107670365598166ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95, __VscopeHash, 16876539203573012110ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96, __VscopeHash, 18032660404765427494ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_97 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4989620157986779060ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_98 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13048992259646968614ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_99 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9280754516656957383ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_100 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11786425015141595145ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12415578076548784391ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3845994495986982813ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13027873477456284927ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15435208455851361270ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_103 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8730637355801136712ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_104 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4888434828480373304ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_105 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10743676871394639951ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk13__DOT___GEN_106 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4336053212094553720ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_107 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3903730600528173843ull);
    vlSelf->CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk15__DOT___GEN_108 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12307009571410693033ull);
    vlSelf->CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10956800344242373572ull);
    vlSelf->CPU6502Testable__DOT__alu__DOT___sum_T_1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5324264057608866615ull);
    vlSelf->CPU6502Testable__DOT__alu__DOT__cmpDiff = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2316884844236685776ull);
    vlSelf->CPU6502Testable__DOT__alu__DOT___diff_T_4 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9402650329529311123ull);
    vlSelf->CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7125932477240158642ull);
    vlSelf->__VdfgRegularize_h7cd686f0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6622935034393947247ull);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272892335938733197ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
