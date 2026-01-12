// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU6502Testable.h for the primary calling header

#include "VCPU6502Testable__pch.h"
#include "VCPU6502Testable___024root.h"

void VCPU6502Testable___024root___ico_sequent__TOP__0(VCPU6502Testable___024root* vlSelf);

void VCPU6502Testable___024root___eval_ico(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_ico\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VCPU6502Testable___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VCPU6502Testable___024root___ico_sequent__TOP__0(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___ico_sequent__TOP__0\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_writeEnable = ((~ (IData)(vlSelfRef.io_test_enable)) 
                                & ((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_23)) 
                                   & ((3U == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                       ? ((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_33)) 
                                          & ((2U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                             | ((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_31)) 
                                                & ((5U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                                   & ((0x48U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                      | ((0x68U 
                                                          != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                         & (8U 
                                                            == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))))))
                                       : ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_40) 
                                          | ((0xcU 
                                              == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                              ? (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_5)
                                              : ((0xdU 
                                                  != (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                 & ((0xeU 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                    & ((0U 
                                                        != (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)) 
                                                       & ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_6) 
                                                          | (3U 
                                                             == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)))))))))));
    vlSelfRef.io_dataOut = (((IData)(vlSelfRef.io_test_enable) 
                             | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_23))
                             ? 0U : (0xffU & ((3U == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                               ? ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_33)
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
                                                   ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_32)
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
    vlSelfRef.io_address = ((IData)(vlSelfRef.io_test_enable)
                             ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                             : ((0U == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                 ? ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_5)
                                     ? 0xfffcU : ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_4)
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
                                                 ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_33)
                                                   ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))
                                                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__effectiveAddr)
                                                    : 
                                                   ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_32)
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
                                                 ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_40)
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
}

void VCPU6502Testable___024root___eval_triggers__ico(VCPU6502Testable___024root* vlSelf);

bool VCPU6502Testable___024root___eval_phase__ico(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_phase__ico\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VCPU6502Testable___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VCPU6502Testable___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VCPU6502Testable___024root___eval_act(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_act\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VCPU6502Testable___024root___nba_sequent__TOP__0(VCPU6502Testable___024root* vlSelf);

void VCPU6502Testable___024root___eval_nba(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_nba\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU6502Testable___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VCPU6502Testable___024root___nba_sequent__TOP__0(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___nba_sequent__TOP__0\n"); );
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
    CData/*7:0*/ __Vdly__CPU6502Testable__DOT__regA;
    __Vdly__CPU6502Testable__DOT__regA = 0;
    CData/*7:0*/ __Vdly__CPU6502Testable__DOT__regX;
    __Vdly__CPU6502Testable__DOT__regX = 0;
    CData/*7:0*/ __Vdly__CPU6502Testable__DOT__regY;
    __Vdly__CPU6502Testable__DOT__regY = 0;
    CData/*7:0*/ __Vdly__CPU6502Testable__DOT__regSP;
    __Vdly__CPU6502Testable__DOT__regSP = 0;
    SData/*15:0*/ __Vdly__CPU6502Testable__DOT__regPC;
    __Vdly__CPU6502Testable__DOT__regPC = 0;
    CData/*0:0*/ __Vdly__CPU6502Testable__DOT__flagN;
    __Vdly__CPU6502Testable__DOT__flagN = 0;
    CData/*0:0*/ __Vdly__CPU6502Testable__DOT__flagV;
    __Vdly__CPU6502Testable__DOT__flagV = 0;
    CData/*0:0*/ __Vdly__CPU6502Testable__DOT__flagD;
    __Vdly__CPU6502Testable__DOT__flagD = 0;
    CData/*0:0*/ __Vdly__CPU6502Testable__DOT__flagI;
    __Vdly__CPU6502Testable__DOT__flagI = 0;
    CData/*0:0*/ __Vdly__CPU6502Testable__DOT__flagZ;
    __Vdly__CPU6502Testable__DOT__flagZ = 0;
    CData/*0:0*/ __Vdly__CPU6502Testable__DOT__flagC;
    __Vdly__CPU6502Testable__DOT__flagC = 0;
    CData/*4:0*/ __Vdly__CPU6502Testable__DOT__state;
    __Vdly__CPU6502Testable__DOT__state = 0;
    CData/*3:0*/ __Vdly__CPU6502Testable__DOT__cycle;
    __Vdly__CPU6502Testable__DOT__cycle = 0;
    CData/*7:0*/ __Vdly__CPU6502Testable__DOT__operand;
    __Vdly__CPU6502Testable__DOT__operand = 0;
    CData/*7:0*/ __Vdly__CPU6502Testable__DOT__addrLo;
    __Vdly__CPU6502Testable__DOT__addrLo = 0;
    CData/*7:0*/ __Vdly__CPU6502Testable__DOT__addrHi;
    __Vdly__CPU6502Testable__DOT__addrHi = 0;
    CData/*7:0*/ __Vdly__CPU6502Testable__DOT__zpAddr;
    __Vdly__CPU6502Testable__DOT__zpAddr = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vdly__CPU6502Testable__DOT__zpAddr = vlSelfRef.CPU6502Testable__DOT__zpAddr;
    __Vdly__CPU6502Testable__DOT__regSP = vlSelfRef.CPU6502Testable__DOT__regSP;
    __Vdly__CPU6502Testable__DOT__flagN = vlSelfRef.CPU6502Testable__DOT__flagN;
    __Vdly__CPU6502Testable__DOT__flagV = vlSelfRef.CPU6502Testable__DOT__flagV;
    __Vdly__CPU6502Testable__DOT__flagD = vlSelfRef.CPU6502Testable__DOT__flagD;
    __Vdly__CPU6502Testable__DOT__flagI = vlSelfRef.CPU6502Testable__DOT__flagI;
    __Vdly__CPU6502Testable__DOT__flagZ = vlSelfRef.CPU6502Testable__DOT__flagZ;
    __Vdly__CPU6502Testable__DOT__regPC = vlSelfRef.CPU6502Testable__DOT__regPC;
    __Vdly__CPU6502Testable__DOT__addrLo = vlSelfRef.CPU6502Testable__DOT__addrLo;
    __Vdly__CPU6502Testable__DOT__addrHi = vlSelfRef.CPU6502Testable__DOT__addrHi;
    __Vdly__CPU6502Testable__DOT__cycle = vlSelfRef.CPU6502Testable__DOT__cycle;
    __Vdly__CPU6502Testable__DOT__flagC = vlSelfRef.CPU6502Testable__DOT__flagC;
    __Vdly__CPU6502Testable__DOT__state = vlSelfRef.CPU6502Testable__DOT__state;
    __Vdly__CPU6502Testable__DOT__regA = vlSelfRef.CPU6502Testable__DOT__regA;
    __Vdly__CPU6502Testable__DOT__regX = vlSelfRef.CPU6502Testable__DOT__regX;
    __Vdly__CPU6502Testable__DOT__regY = vlSelfRef.CPU6502Testable__DOT__regY;
    __Vdly__CPU6502Testable__DOT__operand = vlSelfRef.CPU6502Testable__DOT__operand;
    if (vlSelfRef.reset) {
        vlSelfRef.CPU6502Testable__DOT__cycleCount = 0U;
        __Vdly__CPU6502Testable__DOT__regA = 0U;
        __Vdly__CPU6502Testable__DOT__regX = 0U;
        __Vdly__CPU6502Testable__DOT__regY = 0U;
        __Vdly__CPU6502Testable__DOT__regSP = 0xfdU;
        __Vdly__CPU6502Testable__DOT__regPC = 0U;
        __Vdly__CPU6502Testable__DOT__flagN = 0U;
        __Vdly__CPU6502Testable__DOT__flagV = 0U;
        __Vdly__CPU6502Testable__DOT__flagD = 0U;
        __Vdly__CPU6502Testable__DOT__flagI = 1U;
        __Vdly__CPU6502Testable__DOT__flagZ = 0U;
        __Vdly__CPU6502Testable__DOT__flagC = 0U;
        __Vdly__CPU6502Testable__DOT__state = 0U;
        __Vdly__CPU6502Testable__DOT__cycle = 0U;
        __Vdly__CPU6502Testable__DOT__operand = 0U;
        __Vdly__CPU6502Testable__DOT__addrLo = 0U;
        __Vdly__CPU6502Testable__DOT__addrHi = 0U;
        __Vdly__CPU6502Testable__DOT__zpAddr = 0U;
        vlSelfRef.CPU6502Testable__DOT__flagB = 0U;
        vlSelfRef.CPU6502Testable__DOT__opcode = 0U;
    } else {
        vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_45 
            = (0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode));
        vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_46 
            = (1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode));
        vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_47 
            = (5U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode));
        vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_48 
            = (8U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode));
        vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_49 
            = (2U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode));
        vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_50 
            = (3U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode));
        vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_51 
            = (4U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode));
        vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_52 
            = (6U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode));
        vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_53 
            = (7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode));
        vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_54 
            = ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_52) 
               | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_53));
        if (vlSelfRef.io_test_enable) {
            vlSelfRef.CPU6502Testable__DOT__cycleCount = 0U;
            __Vdly__CPU6502Testable__DOT__regA = vlSelfRef.io_test_a;
            __Vdly__CPU6502Testable__DOT__regX = vlSelfRef.io_test_x;
            __Vdly__CPU6502Testable__DOT__regY = vlSelfRef.io_test_y;
            __Vdly__CPU6502Testable__DOT__regSP = vlSelfRef.io_test_s;
            __Vdly__CPU6502Testable__DOT__regPC = vlSelfRef.io_test_pc;
            __Vdly__CPU6502Testable__DOT__flagN = (1U 
                                                   & ((IData)(vlSelfRef.io_test_p) 
                                                      >> 7U));
            __Vdly__CPU6502Testable__DOT__flagV = (1U 
                                                   & ((IData)(vlSelfRef.io_test_p) 
                                                      >> 6U));
            __Vdly__CPU6502Testable__DOT__flagD = (1U 
                                                   & ((IData)(vlSelfRef.io_test_p) 
                                                      >> 3U));
            __Vdly__CPU6502Testable__DOT__flagI = (1U 
                                                   & ((IData)(vlSelfRef.io_test_p) 
                                                      >> 2U));
            __Vdly__CPU6502Testable__DOT__flagZ = (1U 
                                                   & ((IData)(vlSelfRef.io_test_p) 
                                                      >> 1U));
            __Vdly__CPU6502Testable__DOT__flagC = (1U 
                                                   & (IData)(vlSelfRef.io_test_p));
            __Vdly__CPU6502Testable__DOT__state = 1U;
            __Vdly__CPU6502Testable__DOT__cycle = 0U;
            vlSelfRef.CPU6502Testable__DOT__flagB = 
                (1U & ((IData)(vlSelfRef.io_test_p) 
                       >> 4U));
        } else {
            vlSelfRef.CPU6502Testable__DOT__cycleCount 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.CPU6502Testable__DOT__cycleCount)));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_55 
                = (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_0) 
                         | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_1))));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56 
                = ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_0) 
                   | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_6));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57 
                = (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56) 
                         | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_3))));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58 
                = ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_3) 
                   | (IData)(vlSelfRef.io_test_enable));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59 
                = ((~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56)) 
                   & (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_3));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_60 
                = ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59) 
                   | (IData)(vlSelfRef.io_test_enable));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61 
                = (0xaaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62 
                = (0x8aU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63 
                = (0xa8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64 
                = (0x98U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65 
                = (0xbaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66 
                = (0x9aU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67 
                = ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66)
                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__regX)
                    : 0U);
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68 
                = ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65)
                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__regSP)
                    : (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69 
                = ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64)
                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__regY)
                    : (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70 
                = (0xe8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.CPU6502Testable__DOT__regX)));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71 
                = (0xc8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_2 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.CPU6502Testable__DOT__regY)));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72 
                = (0xcaU == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_4 
                = (0xffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__regX) 
                            - (IData)(1U)));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73 
                = (0x88U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_6 
                = (0xffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__regY) 
                            - (IData)(1U)));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_74 
                = ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73)
                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_6)
                    : 0U);
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_75 
                = (((4U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                    | (2U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                   | (6U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)));
            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_76 
                = ((0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                   | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_75));
            if ((1U & (((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_23) 
                        | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_15))) 
                       | (7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))))) {
                if (vlSelfRef.io_test_enable) {
                    __Vdly__CPU6502Testable__DOT__regA 
                        = vlSelfRef.io_test_a;
                    __Vdly__CPU6502Testable__DOT__regX 
                        = vlSelfRef.io_test_x;
                    __Vdly__CPU6502Testable__DOT__regY 
                        = vlSelfRef.io_test_y;
                }
            } else if ((1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                if (vlSelfRef.CPU6502Testable__DOT___decoder_io_writeA) {
                    __Vdly__CPU6502Testable__DOT__regA 
                        = vlSelfRef.CPU6502Testable__DOT__operand;
                } else if (vlSelfRef.io_test_enable) {
                    __Vdly__CPU6502Testable__DOT__regA 
                        = vlSelfRef.io_test_a;
                }
                if (vlSelfRef.CPU6502Testable__DOT___decoder_io_writeX) {
                    __Vdly__CPU6502Testable__DOT__regX 
                        = vlSelfRef.CPU6502Testable__DOT__operand;
                } else if (vlSelfRef.io_test_enable) {
                    __Vdly__CPU6502Testable__DOT__regX 
                        = vlSelfRef.io_test_x;
                }
                if (vlSelfRef.CPU6502Testable__DOT___decoder_io_writeY) {
                    __Vdly__CPU6502Testable__DOT__regY 
                        = vlSelfRef.CPU6502Testable__DOT__operand;
                } else if (vlSelfRef.io_test_enable) {
                    __Vdly__CPU6502Testable__DOT__regY 
                        = vlSelfRef.io_test_y;
                }
            } else {
                if ((0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                    if (vlSelfRef.CPU6502Testable__DOT___decoder_io_writeA) {
                        __Vdly__CPU6502Testable__DOT__regA 
                            = vlSelfRef.CPU6502Testable__DOT___alu_io_result;
                    } else if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regA 
                            = vlSelfRef.io_test_a;
                    }
                } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_75) {
                    if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regA 
                            = vlSelfRef.io_test_a;
                    }
                } else if ((9U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                    if (vlSelfRef.CPU6502Testable__DOT___decoder_io_writeA) {
                        if ((1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61)))) {
                            if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62) {
                                __Vdly__CPU6502Testable__DOT__regA 
                                    = vlSelfRef.CPU6502Testable__DOT__regX;
                            } else if ((1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63)))) {
                                __Vdly__CPU6502Testable__DOT__regA 
                                    = vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69;
                            }
                        }
                    } else if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regA 
                            = vlSelfRef.io_test_a;
                    }
                } else if (((((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_28) 
                              | (5U != (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                             | (0x48U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))) 
                            | (0x68U != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))) {
                    if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regA 
                            = vlSelfRef.io_test_a;
                    }
                } else {
                    __Vdly__CPU6502Testable__DOT__regA 
                        = vlSelfRef.io_dataIn;
                }
                if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_76) {
                    if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regX 
                            = vlSelfRef.io_test_x;
                        __Vdly__CPU6502Testable__DOT__regY 
                            = vlSelfRef.io_test_y;
                    }
                } else if ((9U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                    if (vlSelfRef.CPU6502Testable__DOT___decoder_io_writeX) {
                        if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61) {
                            __Vdly__CPU6502Testable__DOT__regX 
                                = vlSelfRef.CPU6502Testable__DOT__regA;
                        } else if ((1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62)))) {
                            if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63) {
                                __Vdly__CPU6502Testable__DOT__regX 
                                    = vlSelfRef.CPU6502Testable__DOT__regA;
                            } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64) {
                                __Vdly__CPU6502Testable__DOT__regX 
                                    = vlSelfRef.CPU6502Testable__DOT__regY;
                            } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65) {
                                __Vdly__CPU6502Testable__DOT__regX 
                                    = vlSelfRef.CPU6502Testable__DOT__regSP;
                            } else if ((1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66)))) {
                                __Vdly__CPU6502Testable__DOT__regX = 0U;
                            }
                        }
                    } else if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regX 
                            = vlSelfRef.io_test_x;
                    }
                    if (vlSelfRef.CPU6502Testable__DOT___decoder_io_writeY) {
                        if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61) {
                            __Vdly__CPU6502Testable__DOT__regY 
                                = vlSelfRef.CPU6502Testable__DOT__regA;
                        } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62) {
                            __Vdly__CPU6502Testable__DOT__regY 
                                = vlSelfRef.CPU6502Testable__DOT__regX;
                        } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63) {
                            __Vdly__CPU6502Testable__DOT__regY 
                                = vlSelfRef.CPU6502Testable__DOT__regA;
                        } else if ((1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64)))) {
                            __Vdly__CPU6502Testable__DOT__regY 
                                = vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68;
                        }
                    } else if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regY 
                            = vlSelfRef.io_test_y;
                    }
                } else {
                    if (((0xaU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                         & (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_writeX))) {
                        __Vdly__CPU6502Testable__DOT__regX 
                            = ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70)
                                ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T)
                                : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71)
                                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_2)
                                    : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72)
                                        ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_4)
                                        : (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_74))));
                    } else if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regX 
                            = vlSelfRef.io_test_x;
                    }
                    if (((0xaU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                         & (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_writeY))) {
                        __Vdly__CPU6502Testable__DOT__regY 
                            = ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70)
                                ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T)
                                : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71)
                                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_2)
                                    : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72)
                                        ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_4)
                                        : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73)
                                            ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_6)
                                            : 0U))));
                    } else if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regY 
                            = vlSelfRef.io_test_y;
                    }
                }
            }
            if (vlSelfRef.CPU6502Testable__DOT___GEN_23) {
                if (vlSelfRef.io_test_enable) {
                    __Vdly__CPU6502Testable__DOT__regSP 
                        = vlSelfRef.io_test_s;
                    __Vdly__CPU6502Testable__DOT__flagN 
                        = (1U & ((IData)(vlSelfRef.io_test_p) 
                                 >> 7U));
                    __Vdly__CPU6502Testable__DOT__flagV 
                        = (1U & ((IData)(vlSelfRef.io_test_p) 
                                 >> 6U));
                    __Vdly__CPU6502Testable__DOT__flagD 
                        = (1U & ((IData)(vlSelfRef.io_test_p) 
                                 >> 3U));
                    __Vdly__CPU6502Testable__DOT__flagI 
                        = (1U & ((IData)(vlSelfRef.io_test_p) 
                                 >> 2U));
                    __Vdly__CPU6502Testable__DOT__flagZ 
                        = (1U & ((IData)(vlSelfRef.io_test_p) 
                                 >> 1U));
                    __Vdly__CPU6502Testable__DOT__flagC 
                        = (1U & (IData)(vlSelfRef.io_test_p));
                }
            } else {
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77 
                    = (1U & ((IData)(vlSelfRef.io_test_enable)
                              ? ((IData)(vlSelfRef.io_test_p) 
                                 >> 2U) : (IData)(vlSelfRef.CPU6502Testable__DOT__flagI)));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_78 
                    = (5U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_79 
                    = (6U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_80 
                    = (7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_81 
                    = (8U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp));
                if (vlSelfRef.CPU6502Testable__DOT___GEN_15) {
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_82 
                        = (0xcU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp));
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83 
                        = (0x18U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_84 
                        = (0x38U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_85 
                        = (0x58U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_86 
                        = (0x78U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_87 
                        = (0xb8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_88 
                        = ((((((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_30) 
                               | (5U != (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                              | (0x48U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))) 
                             | (0x68U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))) 
                            | (8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))) 
                           | (0x28U != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)));
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_89 
                        = ((4U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                           | (2U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)));
                    if ((((7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                          | (1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                         | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_76))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = vlSelfRef.io_test_s;
                        }
                    } else if ((9U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                        if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66) {
                            if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61) {
                                __Vdly__CPU6502Testable__DOT__regSP 
                                    = vlSelfRef.CPU6502Testable__DOT__regA;
                            } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62) {
                                __Vdly__CPU6502Testable__DOT__regSP 
                                    = vlSelfRef.CPU6502Testable__DOT__regX;
                            } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63) {
                                __Vdly__CPU6502Testable__DOT__regSP 
                                    = vlSelfRef.CPU6502Testable__DOT__regA;
                            } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64) {
                                __Vdly__CPU6502Testable__DOT__regSP 
                                    = vlSelfRef.CPU6502Testable__DOT__regY;
                            } else if ((1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65)))) {
                                __Vdly__CPU6502Testable__DOT__regSP 
                                    = vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67;
                            }
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = vlSelfRef.io_test_s;
                        }
                    } else if (((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_28) 
                                | (5U != (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = vlSelfRef.io_test_s;
                        }
                    } else if ((0x48U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))) {
                        __Vdly__CPU6502Testable__DOT__regSP 
                            = (0xffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__regSP) 
                                        - (IData)(1U)));
                    } else if ((0x68U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))) {
                        __Vdly__CPU6502Testable__DOT__regSP 
                            = vlSelfRef.CPU6502Testable__DOT___io_address_T_3;
                    } else if ((8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))) {
                        __Vdly__CPU6502Testable__DOT__regSP 
                            = (0xffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__regSP) 
                                        - (IData)(1U)));
                    } else if ((0x28U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))) {
                        __Vdly__CPU6502Testable__DOT__regSP 
                            = vlSelfRef.CPU6502Testable__DOT___io_address_T_3;
                    } else if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regSP 
                            = vlSelfRef.io_test_s;
                    }
                    if ((7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 1U));
                        }
                    } else if ((1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                        if (vlSelfRef.CPU6502Testable__DOT___decoder_io_updateFlags) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (0U == (IData)(vlSelfRef.CPU6502Testable__DOT__operand));
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 1U));
                        }
                    } else if ((0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                        if (vlSelfRef.CPU6502Testable__DOT___decoder_io_updateFlags) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_82)
                                          ? ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                             >> 7U)
                                          : (IData)(vlSelfRef.CPU6502Testable__DOT___alu_io_negative)));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (0U == (IData)(vlSelfRef.CPU6502Testable__DOT___alu_io_result));
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 1U));
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_75) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 1U));
                        }
                    } else if ((9U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                        if (vlSelfRef.CPU6502Testable__DOT___decoder_io_updateFlags) {
                            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue 
                                = ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61)
                                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__regA)
                                    : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62)
                                        ? (IData)(vlSelfRef.CPU6502Testable__DOT__regX)
                                        : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63)
                                            ? (IData)(vlSelfRef.CPU6502Testable__DOT__regA)
                                            : (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69))));
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (0U == (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue));
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 1U));
                        }
                    } else if ((0xaU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                        if (vlSelfRef.CPU6502Testable__DOT___decoder_io_updateFlags) {
                            vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult 
                                = ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70)
                                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T)
                                    : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71)
                                        ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_2)
                                        : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72)
                                            ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_4)
                                            : (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_74))));
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (0U == (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult));
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 1U));
                        }
                    } else if ((((3U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                 | (5U != (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                | (0x48U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 1U));
                        }
                    } else if ((0x68U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))) {
                        __Vdly__CPU6502Testable__DOT__flagN 
                            = (1U & ((IData)(vlSelfRef.io_dataIn) 
                                     >> 7U));
                        __Vdly__CPU6502Testable__DOT__flagZ 
                            = (0U == (IData)(vlSelfRef.io_dataIn));
                    } else if (((8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                | (0x28U != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 1U));
                        }
                    } else {
                        __Vdly__CPU6502Testable__DOT__flagN 
                            = (1U & ((IData)(vlSelfRef.io_dataIn) 
                                     >> 7U));
                        __Vdly__CPU6502Testable__DOT__flagZ 
                            = (1U & ((IData)(vlSelfRef.io_dataIn) 
                                     >> 1U));
                    }
                    if (((7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                         | (1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagV 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 6U));
                            __Vdly__CPU6502Testable__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_test_p));
                        }
                    } else if ((0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                        vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT___GEN_90 
                            = ((0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                               | (1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)));
                        if (vlSelfRef.CPU6502Testable__DOT___decoder_io_updateFlags) {
                            if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT___GEN_90) {
                                __Vdly__CPU6502Testable__DOT__flagV 
                                    = vlSelfRef.CPU6502Testable__DOT___alu_io_overflow;
                            } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_82) {
                                __Vdly__CPU6502Testable__DOT__flagV 
                                    = (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                             >> 6U));
                            } else if (vlSelfRef.io_test_enable) {
                                __Vdly__CPU6502Testable__DOT__flagV 
                                    = (1U & ((IData)(vlSelfRef.io_test_p) 
                                             >> 6U));
                            }
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagV 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 6U));
                        }
                        if (((IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_updateFlags) 
                             & ((((((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT___GEN_90) 
                                    | (0xbU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))) 
                                   | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_78)) 
                                  | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_79)) 
                                 | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_80)) 
                                | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_81)))) {
                            __Vdly__CPU6502Testable__DOT__flagC 
                                = vlSelfRef.CPU6502Testable__DOT___alu_io_carryOut;
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_test_p));
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_89) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagV 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 6U));
                            __Vdly__CPU6502Testable__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_test_p));
                        }
                    } else if ((6U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                        __Vdly__CPU6502Testable__DOT__flagV 
                            = (1U & ((((((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83) 
                                         | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_84)) 
                                        | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_85)) 
                                       | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_86)) 
                                      | (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_87))) 
                                     & ((IData)(vlSelfRef.io_test_enable)
                                         ? ((IData)(vlSelfRef.io_test_p) 
                                            >> 6U) : (IData)(vlSelfRef.CPU6502Testable__DOT__flagV))));
                        __Vdly__CPU6502Testable__DOT__flagC 
                            = (1U & ((~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83)) 
                                     & ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_84) 
                                        | ((IData)(vlSelfRef.io_test_enable)
                                            ? (IData)(vlSelfRef.io_test_p)
                                            : (IData)(vlSelfRef.CPU6502Testable__DOT__flagC)))));
                    } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_88) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagV 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 6U));
                            __Vdly__CPU6502Testable__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_test_p));
                        }
                    } else {
                        __Vdly__CPU6502Testable__DOT__flagV 
                            = (1U & ((IData)(vlSelfRef.io_dataIn) 
                                     >> 6U));
                        __Vdly__CPU6502Testable__DOT__flagC 
                            = (1U & (IData)(vlSelfRef.io_dataIn));
                    }
                    if (((((7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                           | (1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                          | (0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                         | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_89))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagD 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 3U));
                            __Vdly__CPU6502Testable__DOT__flagI 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 2U));
                        }
                    } else if ((6U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                        if ((((((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83) 
                                | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_84)) 
                               | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_85)) 
                              | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_86)) 
                             | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_87))) {
                            if (vlSelfRef.io_test_enable) {
                                __Vdly__CPU6502Testable__DOT__flagD 
                                    = (1U & ((IData)(vlSelfRef.io_test_p) 
                                             >> 3U));
                            }
                        } else {
                            __Vdly__CPU6502Testable__DOT__flagD 
                                = ((0xd8U != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                   & ((0xf8U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                      | ((IData)(vlSelfRef.io_test_enable)
                                          ? ((IData)(vlSelfRef.io_test_p) 
                                             >> 3U)
                                          : (IData)(vlSelfRef.CPU6502Testable__DOT__flagD))));
                        }
                        if (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83) 
                             | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_84))) {
                            if (vlSelfRef.io_test_enable) {
                                __Vdly__CPU6502Testable__DOT__flagI 
                                    = (1U & ((IData)(vlSelfRef.io_test_p) 
                                             >> 2U));
                            }
                        } else {
                            __Vdly__CPU6502Testable__DOT__flagI 
                                = ((~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_85)) 
                                   & ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_86) 
                                      | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77)));
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_88) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagD 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 3U));
                            __Vdly__CPU6502Testable__DOT__flagI 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 2U));
                        }
                    } else {
                        __Vdly__CPU6502Testable__DOT__flagD 
                            = (1U & ((IData)(vlSelfRef.io_dataIn) 
                                     >> 3U));
                        __Vdly__CPU6502Testable__DOT__flagI 
                            = (1U & ((IData)(vlSelfRef.io_dataIn) 
                                     >> 2U));
                    }
                } else {
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_91 
                        = (((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_37) 
                            | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_38)) 
                           | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_39));
                    if (vlSelfRef.CPU6502Testable__DOT___GEN_40) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = vlSelfRef.io_test_s;
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_37) {
                        if (vlSelfRef.CPU6502Testable__DOT___GEN_0) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = (0xffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__regSP) 
                                            - (IData)(1U)));
                        } else if (vlSelfRef.CPU6502Testable__DOT___GEN_1) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = (0xffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__regSP) 
                                            - (IData)(1U)));
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = vlSelfRef.io_test_s;
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_38) {
                        if (vlSelfRef.CPU6502Testable__DOT___GEN_0) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.CPU6502Testable__DOT__regSP)));
                        } else if (vlSelfRef.CPU6502Testable__DOT___GEN_1) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.CPU6502Testable__DOT__regSP)));
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = vlSelfRef.io_test_s;
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_39) {
                        if (vlSelfRef.CPU6502Testable__DOT___GEN_0) {
                            if (vlSelfRef.io_test_enable) {
                                __Vdly__CPU6502Testable__DOT__regSP 
                                    = vlSelfRef.io_test_s;
                            }
                        } else if (vlSelfRef.CPU6502Testable__DOT___GEN_1) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = (0xffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__regSP) 
                                            - (IData)(1U)));
                        } else if (vlSelfRef.CPU6502Testable__DOT___GEN_2) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = (0xffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__regSP) 
                                            - (IData)(1U)));
                        } else if (vlSelfRef.CPU6502Testable__DOT___GEN_3) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = (0xffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__regSP) 
                                            - (IData)(1U)));
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = vlSelfRef.io_test_s;
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_43) {
                        if (vlSelfRef.CPU6502Testable__DOT___GEN_0) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.CPU6502Testable__DOT__regSP)));
                        } else if (vlSelfRef.CPU6502Testable__DOT___GEN_1) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.CPU6502Testable__DOT__regSP)));
                        } else if (vlSelfRef.CPU6502Testable__DOT___GEN_2) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.CPU6502Testable__DOT__regSP)));
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__regSP 
                                = vlSelfRef.io_test_s;
                        }
                    } else if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regSP 
                            = vlSelfRef.io_test_s;
                    }
                    if (vlSelfRef.CPU6502Testable__DOT___GEN_35) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 1U));
                            __Vdly__CPU6502Testable__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_test_p));
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_36) {
                        if (vlSelfRef.CPU6502Testable__DOT___decoder_io_updateFlags) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = vlSelfRef.CPU6502Testable__DOT___alu_io_negative;
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (0U == (IData)(vlSelfRef.CPU6502Testable__DOT___alu_io_result));
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 1U));
                        }
                        if (((IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_updateFlags) 
                             & ((((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_78) 
                                  | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_79)) 
                                 | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_80)) 
                                | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_81)))) {
                            __Vdly__CPU6502Testable__DOT__flagC 
                                = vlSelfRef.CPU6502Testable__DOT___alu_io_carryOut;
                        } else if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_test_p));
                        }
                    } else if ((1U & ((((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_91) 
                                        | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_43))) 
                                       | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_0)) 
                                      | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_1))))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 7U));
                            __Vdly__CPU6502Testable__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 1U));
                            __Vdly__CPU6502Testable__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_test_p));
                        }
                    } else {
                        __Vdly__CPU6502Testable__DOT__flagN 
                            = (1U & ((IData)(vlSelfRef.io_dataIn) 
                                     >> 7U));
                        __Vdly__CPU6502Testable__DOT__flagZ 
                            = (1U & ((IData)(vlSelfRef.io_dataIn) 
                                     >> 1U));
                        __Vdly__CPU6502Testable__DOT__flagC 
                            = (1U & (IData)(vlSelfRef.io_dataIn));
                    }
                    if (((((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_35) 
                           | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_36)) 
                          | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_37)) 
                         | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_38))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagI 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 2U));
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_39) {
                        __Vdly__CPU6502Testable__DOT__flagI 
                            = ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59) 
                               | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77));
                    } else if ((1U & (((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_43)) 
                                       | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_0)) 
                                      | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_1))))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagI 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 2U));
                        }
                    } else {
                        __Vdly__CPU6502Testable__DOT__flagI 
                            = (1U & ((IData)(vlSelfRef.io_dataIn) 
                                     >> 2U));
                    }
                    if ((1U & ((((((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_35) 
                                   | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_36)) 
                                  | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_91)) 
                                 | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_43))) 
                                | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_0)) 
                               | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_1))))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__flagV 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 6U));
                            __Vdly__CPU6502Testable__DOT__flagD 
                                = (1U & ((IData)(vlSelfRef.io_test_p) 
                                         >> 3U));
                        }
                    } else {
                        __Vdly__CPU6502Testable__DOT__flagV 
                            = (1U & ((IData)(vlSelfRef.io_dataIn) 
                                     >> 6U));
                        __Vdly__CPU6502Testable__DOT__flagD 
                            = (1U & ((IData)(vlSelfRef.io_dataIn) 
                                     >> 3U));
                    }
                }
            }
            if (vlSelfRef.CPU6502Testable__DOT___GEN) {
                if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57) {
                    if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__regPC 
                            = vlSelfRef.io_test_pc;
                    }
                } else {
                    __Vdly__CPU6502Testable__DOT__regPC 
                        = (((IData)(vlSelfRef.io_dataIn) 
                            << 8U) | (IData)(vlSelfRef.CPU6502Testable__DOT__addrLo));
                }
                if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_60) {
                    __Vdly__CPU6502Testable__DOT__state = 1U;
                }
                if (vlSelfRef.CPU6502Testable__DOT___GEN_0) {
                    __Vdly__CPU6502Testable__DOT__cycle = 1U;
                } else if (vlSelfRef.CPU6502Testable__DOT___GEN_1) {
                    __Vdly__CPU6502Testable__DOT__cycle = 2U;
                } else if (vlSelfRef.CPU6502Testable__DOT___GEN_2) {
                    __Vdly__CPU6502Testable__DOT__cycle = 3U;
                } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58) {
                    __Vdly__CPU6502Testable__DOT__cycle = 0U;
                }
                if ((1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57)))) {
                    __Vdly__CPU6502Testable__DOT__addrHi 
                        = vlSelfRef.io_dataIn;
                }
                if ((1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_55)))) {
                    __Vdly__CPU6502Testable__DOT__addrLo 
                        = vlSelfRef.io_dataIn;
                }
            } else if (vlSelfRef.CPU6502Testable__DOT___GEN_7) {
                __Vdly__CPU6502Testable__DOT__regPC 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)));
                __Vdly__CPU6502Testable__DOT__state = 2U;
                if (vlSelfRef.io_test_enable) {
                    __Vdly__CPU6502Testable__DOT__cycle = 0U;
                }
            } else if (vlSelfRef.CPU6502Testable__DOT___GEN_8) {
                if (vlSelfRef.io_test_enable) {
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92 
                        = vlSelfRef.io_test_pc;
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93 = 1U;
                } else {
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92 
                        = vlSelfRef.CPU6502Testable__DOT__regPC;
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93 
                        = vlSelfRef.CPU6502Testable__DOT__state;
                }
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_94 
                    = (0x60U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_98[0U] 
                    = (IData)((((QData)((IData)(((((IData)(1U) 
                                                   + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((IData)(1U) 
                                                               + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92))))));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_98[1U] 
                    = (IData)(((((QData)((IData)(((
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(1U) 
                                                                + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92))))) 
                               >> 0x20U));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_98[2U] 
                    = (IData)((((QData)((IData)(((((IData)(1U) 
                                                   + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((IData)(1U) 
                                                               + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(1U) 
                                                                   + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC))))))));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_98[3U] 
                    = (IData)(((((QData)((IData)(((
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(1U) 
                                                                + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC))))))) 
                               >> 0x20U));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_98[4U] 
                    = (IData)((((QData)((IData)(((((IData)(1U) 
                                                   + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((IData)(1U) 
                                                               + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(1U) 
                                                                   + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC))))))));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_98[5U] 
                    = (IData)(((((QData)((IData)(((
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(1U) 
                                                                + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC))))))) 
                               >> 0x20U));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_98[6U] 
                    = (IData)((((QData)((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92)) 
                                << 0x30U) | (((QData)((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92)) 
                                              << 0x20U) 
                                             | (((QData)((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92)) 
                                                 << 0x10U) 
                                                | (QData)((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92))))));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_98[7U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92)) 
                                 << 0x30U) | (((QData)((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92)) 
                                               << 0x20U) 
                                              | (((QData)((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92)) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92))))) 
                               >> 0x20U));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95 
                    = (0x40U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96 
                    = (0U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_97 
                    = (0x20U == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode));
                __Vdly__CPU6502Testable__DOT__regPC 
                    = (0xffffU & (((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode), 4U)))
                                    ? 0U : (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_98[
                                            (((IData)(0xfU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode), 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode), 4U))))) 
                                  | (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_98[
                                     (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode), 4U) 
                                            >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode), 4U)))));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_99[0U] 
                    = (0x10421060U | ((0xc0000000U 
                                       & vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_99[0U]) 
                                      | (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_97) 
                                          << 0x1bU) 
                                         | ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_94)
                                             ? 0xdU
                                             : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95)
                                                 ? 0xfU
                                                 : 
                                                ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96)
                                                  ? 0xeU
                                                  : 3U))))));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_99[0U] 
                    = ((0x3fffffffU & vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_99[0U]) 
                       | ((IData)((0xc6a54108ULL | 
                                   ((QData)((IData)(
                                                    (0x7fffU 
                                                     & (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93) 
                                                            << 5U) 
                                                           | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93)))))) 
                                    << 0x23U))) << 0x1eU));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_99[1U] 
                    = (((IData)((0xc6a54108ULL | ((QData)((IData)(
                                                                  (0x7fffU 
                                                                   & (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93) 
                                                                       << 0xaU) 
                                                                      | (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93) 
                                                                          << 5U) 
                                                                         | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93)))))) 
                                                  << 0x23U))) 
                        >> 2U) | ((IData)(((0xc6a54108ULL 
                                            | ((QData)((IData)(
                                                               (0x7fffU 
                                                                & (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93) 
                                                                    << 0xaU) 
                                                                   | (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93) 
                                                                       << 5U) 
                                                                      | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93)))))) 
                                               << 0x23U)) 
                                           >> 0x20U)) 
                                  << 0x1eU));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_99[2U] 
                    = (0xffffU & ((IData)(((0xc6a54108ULL 
                                            | ((QData)((IData)(
                                                               (0x7fffU 
                                                                & (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93) 
                                                                    << 0xaU) 
                                                                   | (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93) 
                                                                       << 5U) 
                                                                      | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93)))))) 
                                               << 0x23U)) 
                                           >> 0x20U)) 
                                  >> 2U));
                __Vdly__CPU6502Testable__DOT__state 
                    = ((0x4fU >= (0x7fU & ((IData)(5U) 
                                           * (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode))))
                        ? (0x1fU & (((0U == (0x1fU 
                                             & ((IData)(5U) 
                                                * (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode))))
                                      ? 0U : (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_99[
                                              (((IData)(4U) 
                                                + (0x7fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode)))))) 
                                    | (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_99[
                                       (3U & (((IData)(5U) 
                                               * (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode)) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(5U) 
                                            * (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode))))))
                        : 0U);
                if (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_45)
                      ? ((((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_94) 
                           | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95)) 
                          | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96)) 
                         | (IData)(vlSelfRef.io_test_enable))
                      : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_46)
                          ? (IData)(vlSelfRef.io_test_enable)
                          : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_47)
                              ? ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_97) 
                                 | (IData)(vlSelfRef.io_test_enable))
                              : ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_48) 
                                 | (IData)(vlSelfRef.io_test_enable)))))) {
                    __Vdly__CPU6502Testable__DOT__cycle = 0U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_45) 
                              | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_46))))) {
                    if ((((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_47) 
                          | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_48)) 
                         | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_49))) {
                        __Vdly__CPU6502Testable__DOT__addrLo 
                            = vlSelfRef.io_dataIn;
                    } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_50) {
                        __Vdly__CPU6502Testable__DOT__addrLo 
                            = (0xffU & ((IData)(vlSelfRef.io_dataIn) 
                                        + (IData)(vlSelfRef.CPU6502Testable__DOT__regX)));
                    } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_51) {
                        __Vdly__CPU6502Testable__DOT__addrLo 
                            = (0xffU & ((IData)(vlSelfRef.io_dataIn) 
                                        + (IData)(vlSelfRef.CPU6502Testable__DOT__regY)));
                    } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_54) {
                        __Vdly__CPU6502Testable__DOT__addrLo 
                            = vlSelfRef.io_dataIn;
                    }
                }
                if ((1U & (~ (((((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_45) 
                                 | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_46)) 
                                | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_47)) 
                               | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_48)) 
                              | (~ (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_49) 
                                     | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_50)) 
                                    | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_51))))))) {
                    __Vdly__CPU6502Testable__DOT__addrHi = 0U;
                }
            } else {
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_100 
                    = (((IData)(vlSelfRef.io_dataIn) 
                        << 8U) | (IData)(vlSelfRef.CPU6502Testable__DOT__addrLo));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_101 
                    = vlSelfRef.CPU6502Testable__DOT__regY;
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_102 
                    = (6U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_103 
                    = ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_37) 
                       | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_38));
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_104 
                    = ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_15) 
                       | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_40));
                if (vlSelfRef.CPU6502Testable__DOT___GEN_9) {
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr 
                        = (0xffffU & ((6U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode))
                                       ? ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_100) 
                                          + (IData)(vlSelfRef.CPU6502Testable__DOT__regX))
                                       : ((7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode))
                                           ? ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_100) 
                                              + (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_101))
                                           : (((IData)(vlSelfRef.io_dataIn) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.CPU6502Testable__DOT__addrLo)))));
                    __Vdly__CPU6502Testable__DOT__regPC 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)));
                    __Vdly__CPU6502Testable__DOT__state 
                        = ((4U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))
                            ? 3U : 4U);
                    __Vdly__CPU6502Testable__DOT__addrLo 
                        = (0xffU & (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr));
                    __Vdly__CPU6502Testable__DOT__addrHi 
                        = (0xffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr) 
                                    >> 8U));
                } else {
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1 
                        = (0xffffU & ((0xaU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode))
                                       ? ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_100) 
                                          + (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_101))
                                       : (((IData)(vlSelfRef.io_dataIn) 
                                           << 8U) | (IData)(vlSelfRef.CPU6502Testable__DOT__addrLo))));
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_105 
                        = (((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_0) 
                            | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_1)) 
                           | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_4));
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_106 
                        = (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_105) 
                                 | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_41))));
                    vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_107 
                        = (((((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_1) 
                              | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_2)) 
                             | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_3)) 
                            | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_41)) 
                           | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_42));
                    if (vlSelfRef.CPU6502Testable__DOT___GEN_22) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__regPC 
                                = vlSelfRef.io_test_pc;
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_15) {
                        if ((((7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                              | (1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                             | (0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)))) {
                            if (vlSelfRef.io_test_enable) {
                                __Vdly__CPU6502Testable__DOT__regPC 
                                    = vlSelfRef.io_test_pc;
                            }
                        } else if ((4U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) {
                            __Vdly__CPU6502Testable__DOT__regPC 
                                = vlSelfRef.CPU6502Testable__DOT__effectiveAddr;
                        } else if ((1U & (((((2U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                             | (6U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                            | (9U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                           | (0xaU 
                                              == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                          | (~ ((3U 
                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                                & ((0x10U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                    ? 
                                                   (~ (IData)(vlSelfRef.CPU6502Testable__DOT__flagN))
                                                    : 
                                                   ((0x30U 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                     ? (IData)(vlSelfRef.CPU6502Testable__DOT__flagN)
                                                     : 
                                                    ((0x50U 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                      ? 
                                                     (~ (IData)(vlSelfRef.CPU6502Testable__DOT__flagV))
                                                      : 
                                                     ((0x70U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                       ? (IData)(vlSelfRef.CPU6502Testable__DOT__flagV)
                                                       : 
                                                      ((0x90U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.CPU6502Testable__DOT__flagC))
                                                        : 
                                                       ((0xb0U 
                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                         ? (IData)(vlSelfRef.CPU6502Testable__DOT__flagC)
                                                         : 
                                                        ((0xd0U 
                                                          == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.CPU6502Testable__DOT__flagZ))
                                                          : 
                                                         ((0xf0U 
                                                           == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                          & (IData)(vlSelfRef.CPU6502Testable__DOT__flagZ)))))))))))))) {
                            if (vlSelfRef.io_test_enable) {
                                __Vdly__CPU6502Testable__DOT__regPC 
                                    = vlSelfRef.io_test_pc;
                            }
                        } else {
                            __Vdly__CPU6502Testable__DOT__regPC 
                                = (0xffffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__regPC) 
                                              + ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                                                    >> 7U)))) 
                                                     << 8U)) 
                                                 | (IData)(vlSelfRef.CPU6502Testable__DOT__operand))));
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_40) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__regPC 
                                = vlSelfRef.io_test_pc;
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_37) {
                        if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57) {
                            if (vlSelfRef.io_test_enable) {
                                __Vdly__CPU6502Testable__DOT__regPC 
                                    = vlSelfRef.io_test_pc;
                            }
                        } else {
                            __Vdly__CPU6502Testable__DOT__regPC 
                                = vlSelfRef.CPU6502Testable__DOT__effectiveAddr;
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_38) {
                        if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57) {
                            if (vlSelfRef.io_test_enable) {
                                __Vdly__CPU6502Testable__DOT__regPC 
                                    = vlSelfRef.io_test_pc;
                            }
                        } else {
                            __Vdly__CPU6502Testable__DOT__regPC 
                                = (0xffffU & ((IData)(1U) 
                                              + (((IData)(vlSelfRef.CPU6502Testable__DOT__addrHi) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.CPU6502Testable__DOT__addrLo))));
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_39) {
                        if (vlSelfRef.CPU6502Testable__DOT___GEN_0) {
                            __Vdly__CPU6502Testable__DOT__regPC 
                                = (0xffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)));
                        } else if ((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_107) 
                                          | (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_102))))) {
                            if (vlSelfRef.io_test_enable) {
                                __Vdly__CPU6502Testable__DOT__regPC 
                                    = vlSelfRef.io_test_pc;
                            }
                        } else {
                            __Vdly__CPU6502Testable__DOT__regPC 
                                = vlSelfRef.CPU6502Testable__DOT__effectiveAddr;
                        }
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_43) {
                        if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_106) {
                            if (vlSelfRef.io_test_enable) {
                                __Vdly__CPU6502Testable__DOT__regPC 
                                    = vlSelfRef.io_test_pc;
                            }
                        } else {
                            __Vdly__CPU6502Testable__DOT__regPC 
                                = vlSelfRef.CPU6502Testable__DOT__effectiveAddr;
                        }
                    } else if ((1U & (((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_44)) 
                                       | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56)) 
                                      | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_3))))) {
                        if (vlSelfRef.io_test_enable) {
                            __Vdly__CPU6502Testable__DOT__regPC 
                                = vlSelfRef.io_test_pc;
                        }
                    } else {
                        __Vdly__CPU6502Testable__DOT__regPC 
                            = (((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                << 8U) | (IData)(vlSelfRef.CPU6502Testable__DOT__zpAddr));
                    }
                    if (vlSelfRef.CPU6502Testable__DOT___GEN_11) {
                        __Vdly__CPU6502Testable__DOT__state 
                            = ((0xbU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))
                                ? 9U : 3U);
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_12) {
                        __Vdly__CPU6502Testable__DOT__state = 0xbU;
                        __Vdly__CPU6502Testable__DOT__addrLo 
                            = vlSelfRef.io_dataIn;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_13) {
                        __Vdly__CPU6502Testable__DOT__state 
                            = ((2U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))
                                ? 3U : 4U);
                        __Vdly__CPU6502Testable__DOT__addrLo 
                            = (0xffU & (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1));
                    } else {
                        if (((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_15)
                              ? (((((((((((7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                          | (1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                         | (0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                        | (4U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                       | (2U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                      | (6U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                     | (9U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                    | (0xaU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                   | (3U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                  | (5U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))) 
                                 | (IData)(vlSelfRef.io_test_enable))
                              : ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_40) 
                                 | ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_103)
                                     ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_60)
                                     : ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_39)
                                         ? (((~ ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_0) 
                                                 | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_107))) 
                                             & (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_102)) 
                                            | (IData)(vlSelfRef.io_test_enable))
                                         : ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_43)
                                             ? (((~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_105)) 
                                                 & (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_41)) 
                                                | (IData)(vlSelfRef.io_test_enable))
                                             : (((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_44) 
                                                 & (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59)) 
                                                | (IData)(vlSelfRef.io_test_enable)))))))) {
                            __Vdly__CPU6502Testable__DOT__state = 1U;
                        }
                        if ((1U & (~ (((((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_15) 
                                         | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_35)) 
                                        | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_36)) 
                                       | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_37)) 
                                      | ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_38)
                                          ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_55)
                                          : ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_39)
                                              ? (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_106)
                                              : (((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_43)) 
                                                  | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_5)) 
                                                 | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_2))))))))) {
                            __Vdly__CPU6502Testable__DOT__addrLo 
                                = vlSelfRef.io_dataIn;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_11) 
                                  | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_12))))) {
                        if (vlSelfRef.CPU6502Testable__DOT___GEN_13) {
                            __Vdly__CPU6502Testable__DOT__addrHi 
                                = (0xffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1) 
                                            >> 8U));
                        } else if ((1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_104)))) {
                            if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_103) {
                                if ((1U & (~ ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_5) 
                                              | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_2)))))) {
                                    __Vdly__CPU6502Testable__DOT__addrHi 
                                        = vlSelfRef.io_dataIn;
                                }
                            } else if (vlSelfRef.CPU6502Testable__DOT___GEN_39) {
                                if ((1U & (~ ((((((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_0) 
                                                  | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_1)) 
                                                 | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_2)) 
                                                | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_3)) 
                                               | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_41)) 
                                              | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_42)))))) {
                                    __Vdly__CPU6502Testable__DOT__addrHi 
                                        = vlSelfRef.io_dataIn;
                                }
                            } else if (vlSelfRef.CPU6502Testable__DOT___GEN_43) {
                                if ((1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57)))) {
                                    __Vdly__CPU6502Testable__DOT__addrHi 
                                        = vlSelfRef.io_dataIn;
                                }
                            } else if (((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_44) 
                                        & (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_0))) {
                                __Vdly__CPU6502Testable__DOT__addrHi 
                                    = vlSelfRef.io_dataIn;
                            }
                        }
                    }
                }
                if ((((((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_9) 
                        | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_11)) 
                       | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_12)) 
                      | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_13)) 
                     | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_104))) {
                    if (vlSelfRef.io_test_enable) {
                        __Vdly__CPU6502Testable__DOT__cycle = 0U;
                    }
                } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_103) {
                    if (vlSelfRef.CPU6502Testable__DOT___GEN_0) {
                        __Vdly__CPU6502Testable__DOT__cycle = 1U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_1) {
                        __Vdly__CPU6502Testable__DOT__cycle = 2U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_2) {
                        __Vdly__CPU6502Testable__DOT__cycle = 3U;
                    } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58) {
                        __Vdly__CPU6502Testable__DOT__cycle = 0U;
                    }
                } else if (vlSelfRef.CPU6502Testable__DOT___GEN_39) {
                    if (vlSelfRef.CPU6502Testable__DOT___GEN_0) {
                        __Vdly__CPU6502Testable__DOT__cycle = 1U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_1) {
                        __Vdly__CPU6502Testable__DOT__cycle = 2U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_2) {
                        __Vdly__CPU6502Testable__DOT__cycle = 3U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_3) {
                        __Vdly__CPU6502Testable__DOT__cycle = 4U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_41) {
                        __Vdly__CPU6502Testable__DOT__cycle = 5U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_42) {
                        __Vdly__CPU6502Testable__DOT__cycle = 6U;
                    } else if (((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_102) 
                                | (IData)(vlSelfRef.io_test_enable))) {
                        __Vdly__CPU6502Testable__DOT__cycle = 0U;
                    }
                } else if (vlSelfRef.CPU6502Testable__DOT___GEN_43) {
                    if (vlSelfRef.CPU6502Testable__DOT___GEN_0) {
                        __Vdly__CPU6502Testable__DOT__cycle = 1U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_1) {
                        __Vdly__CPU6502Testable__DOT__cycle = 2U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_2) {
                        __Vdly__CPU6502Testable__DOT__cycle = 3U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_3) {
                        __Vdly__CPU6502Testable__DOT__cycle = 4U;
                    } else if (((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_41) 
                                | (IData)(vlSelfRef.io_test_enable))) {
                        __Vdly__CPU6502Testable__DOT__cycle = 0U;
                    }
                } else if (vlSelfRef.CPU6502Testable__DOT___GEN_44) {
                    if (vlSelfRef.CPU6502Testable__DOT___GEN_0) {
                        __Vdly__CPU6502Testable__DOT__cycle = 1U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_1) {
                        __Vdly__CPU6502Testable__DOT__cycle = 2U;
                    } else if (vlSelfRef.CPU6502Testable__DOT___GEN_2) {
                        __Vdly__CPU6502Testable__DOT__cycle = 3U;
                    } else if (vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58) {
                        __Vdly__CPU6502Testable__DOT__cycle = 0U;
                    }
                } else if (vlSelfRef.io_test_enable) {
                    __Vdly__CPU6502Testable__DOT__cycle = 0U;
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.io_test_enable) 
                       | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN)) 
                      | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_7))))) {
            if (vlSelfRef.CPU6502Testable__DOT___GEN_8) {
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk13__DOT___GEN_108 
                    = (0xbU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode));
                if ((0xcU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode))) {
                    __Vdly__CPU6502Testable__DOT__operand 
                        = vlSelfRef.CPU6502Testable__DOT__regA;
                } else if ((1U & (~ ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_45) 
                                     | (~ ((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_46) 
                                           | (~ (((
                                                   ((((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_47) 
                                                      | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_48)) 
                                                     | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_49)) 
                                                    | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_50)) 
                                                   | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_51)) 
                                                  | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_54)) 
                                                 | (~ (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk13__DOT___GEN_108)))))))))) {
                    __Vdly__CPU6502Testable__DOT__operand 
                        = vlSelfRef.io_dataIn;
                }
                if ((1U & (~ ((((((((((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_45) 
                                      | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_46)) 
                                     | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_47)) 
                                    | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_48)) 
                                   | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_49)) 
                                  | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_50)) 
                                 | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_51)) 
                                | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_52)) 
                               | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT___GEN_53)) 
                              | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk13__DOT___GEN_108))))) {
                    if ((9U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode))) {
                        __Vdly__CPU6502Testable__DOT__zpAddr 
                            = (0xffU & ((IData)(vlSelfRef.io_dataIn) 
                                        + (IData)(vlSelfRef.CPU6502Testable__DOT__regX)));
                    } else if ((0xaU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode))) {
                        __Vdly__CPU6502Testable__DOT__zpAddr 
                            = vlSelfRef.io_dataIn;
                    }
                }
            } else {
                vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_109 
                    = ((((((((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_13) 
                             | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_15)) 
                            | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_35)) 
                           | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_36)) 
                          | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_37)) 
                         | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_38)) 
                        | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_39)) 
                       | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_43));
                if ((1U & (~ ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_9) 
                              | (~ ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_11) 
                                    | (~ (((((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_12) 
                                             | (IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_109)) 
                                            | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_44))) 
                                           | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_5)) 
                                          | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_2)))))))))) {
                    __Vdly__CPU6502Testable__DOT__operand 
                        = vlSelfRef.io_dataIn;
                }
                if ((1U & (~ ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_9) 
                              | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_11))))) {
                    if (vlSelfRef.CPU6502Testable__DOT___GEN_12) {
                        __Vdly__CPU6502Testable__DOT__zpAddr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.CPU6502Testable__DOT__zpAddr)));
                    } else if ((1U & (~ ((((IData)(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_109) 
                                           | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_44))) 
                                          | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_0)) 
                                         | (~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_1)))))) {
                        __Vdly__CPU6502Testable__DOT__zpAddr 
                            = vlSelfRef.io_dataIn;
                    }
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.io_test_enable) 
                       | (0U == (IData)(vlSelfRef.CPU6502Testable__DOT__state))) 
                      | (1U != (IData)(vlSelfRef.CPU6502Testable__DOT__state)))))) {
            vlSelfRef.CPU6502Testable__DOT__opcode 
                = vlSelfRef.io_dataIn;
        }
    }
    vlSelfRef.CPU6502Testable__DOT__zpAddr = __Vdly__CPU6502Testable__DOT__zpAddr;
    vlSelfRef.CPU6502Testable__DOT__regSP = __Vdly__CPU6502Testable__DOT__regSP;
    vlSelfRef.CPU6502Testable__DOT__flagN = __Vdly__CPU6502Testable__DOT__flagN;
    vlSelfRef.CPU6502Testable__DOT__flagV = __Vdly__CPU6502Testable__DOT__flagV;
    vlSelfRef.CPU6502Testable__DOT__flagD = __Vdly__CPU6502Testable__DOT__flagD;
    vlSelfRef.CPU6502Testable__DOT__flagI = __Vdly__CPU6502Testable__DOT__flagI;
    vlSelfRef.CPU6502Testable__DOT__flagZ = __Vdly__CPU6502Testable__DOT__flagZ;
    vlSelfRef.CPU6502Testable__DOT__regPC = __Vdly__CPU6502Testable__DOT__regPC;
    vlSelfRef.CPU6502Testable__DOT__addrLo = __Vdly__CPU6502Testable__DOT__addrLo;
    vlSelfRef.CPU6502Testable__DOT__addrHi = __Vdly__CPU6502Testable__DOT__addrHi;
    vlSelfRef.CPU6502Testable__DOT__cycle = __Vdly__CPU6502Testable__DOT__cycle;
    vlSelfRef.CPU6502Testable__DOT__flagC = __Vdly__CPU6502Testable__DOT__flagC;
    vlSelfRef.CPU6502Testable__DOT__regA = __Vdly__CPU6502Testable__DOT__regA;
    vlSelfRef.CPU6502Testable__DOT__regX = __Vdly__CPU6502Testable__DOT__regX;
    vlSelfRef.CPU6502Testable__DOT__regY = __Vdly__CPU6502Testable__DOT__regY;
    vlSelfRef.CPU6502Testable__DOT__operand = __Vdly__CPU6502Testable__DOT__operand;
    vlSelfRef.io_cycleCount = vlSelfRef.CPU6502Testable__DOT__cycleCount;
    vlSelfRef.io_debug_sp = vlSelfRef.CPU6502Testable__DOT__regSP;
    vlSelfRef.CPU6502Testable__DOT___io_address_T_3 
        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.CPU6502Testable__DOT__regSP)));
    vlSelfRef.io_debug_pc = vlSelfRef.CPU6502Testable__DOT__regPC;
    vlSelfRef.CPU6502Testable__DOT__effectiveAddr = 
        (((IData)(vlSelfRef.CPU6502Testable__DOT__addrHi) 
          << 8U) | (IData)(vlSelfRef.CPU6502Testable__DOT__addrLo));
    vlSelfRef.CPU6502Testable__DOT___GEN_0 = (0U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_1 = (1U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_2 = (2U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_3 = (3U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_41 = (4U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_42 = (5U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle));
    vlSelfRef.CPU6502Testable__DOT___GEN_6 = ((1U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)));
    vlSelfRef.CPU6502Testable__DOT___GEN_4 = ((2U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)) 
                                              | (3U 
                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)));
    vlSelfRef.CPU6502Testable__DOT___GEN_5 = ((0U == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)) 
                                              | (1U 
                                                 == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)));
    CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_2 
        = ((((IData)(vlSelfRef.CPU6502Testable__DOT__flagD) 
             << 3U) | ((IData)(vlSelfRef.CPU6502Testable__DOT__flagI) 
                       << 2U)) | (((IData)(vlSelfRef.CPU6502Testable__DOT__flagZ) 
                                   << 1U) | (IData)(vlSelfRef.CPU6502Testable__DOT__flagC)));
    vlSelfRef.io_debug_a = vlSelfRef.CPU6502Testable__DOT__regA;
    vlSelfRef.io_debug_x = vlSelfRef.CPU6502Testable__DOT__regX;
    vlSelfRef.io_debug_y = vlSelfRef.CPU6502Testable__DOT__regY;
    vlSelfRef.io_debug_p = (0x20U | ((((IData)(vlSelfRef.CPU6502Testable__DOT__flagN) 
                                       << 7U) | ((IData)(vlSelfRef.CPU6502Testable__DOT__flagV) 
                                                 << 6U)) 
                                     | (((IData)(vlSelfRef.CPU6502Testable__DOT__flagB) 
                                         << 4U) | (IData)(CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_2))));
    vlSelfRef.CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_3 
        = (0x30U | (((IData)(vlSelfRef.CPU6502Testable__DOT__flagN) 
                     << 7U) | (((IData)(vlSelfRef.CPU6502Testable__DOT__flagV) 
                                << 6U) | (IData)(CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_2))));
    vlSelfRef.CPU6502Testable__DOT__state = __Vdly__CPU6502Testable__DOT__state;
    vlSelfRef.io_debug_state = (0xfU & (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN = (0U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_7 = (1U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_8 = (2U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_9 = (8U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_11 = (4U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_12 = (0xaU 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_13 = (0xbU 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_15 = (3U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_37 = (0xcU 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_38 = (0xdU 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_39 = (0xeU 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_43 = (0xfU 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_44 = (0x10U 
                                               == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_35 = (5U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_36 = (9U == (IData)(vlSelfRef.CPU6502Testable__DOT__state));
    vlSelfRef.CPU6502Testable__DOT___GEN_40 = ((5U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                               | (9U 
                                                  == (IData)(vlSelfRef.CPU6502Testable__DOT__state)));
    vlSelfRef.CPU6502Testable__DOT___GEN_22 = ((4U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                               | ((0xaU 
                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                  | (0xbU 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__state))));
    vlSelfRef.io_debug_opcode = vlSelfRef.CPU6502Testable__DOT__opcode;
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
    vlSelfRef.CPU6502Testable__DOT___GEN_23 = ((0U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                               | ((1U 
                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                  | ((2U 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                     | ((8U 
                                                         == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                        | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_22)))));
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
    vlSelfRef.CPU6502Testable__DOT___GEN_33 = ((7U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                               | ((1U 
                                                   == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                                  | ((0U 
                                                      == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                                     | (4U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)))));
    vlSelfRef.CPU6502Testable__DOT___GEN_28 = ((0xaU 
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
    vlSelfRef.CPU6502Testable__DOT___GEN_30 = ((9U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                               | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_28));
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
    vlSelfRef.CPU6502Testable__DOT___GEN_31 = ((6U 
                                                == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                               | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_30));
    vlSelfRef.CPU6502Testable__DOT__alu__DOT___diff_T_4 
        = (0x1ffU & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT__cmpDiff) 
                     - (1U & (~ (IData)(vlSelfRef.CPU6502Testable__DOT__flagC)))));
    vlSelfRef.io_writeEnable = ((~ (IData)(vlSelfRef.io_test_enable)) 
                                & ((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_23)) 
                                   & ((3U == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                       ? ((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_33)) 
                                          & ((2U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                             | ((~ (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_31)) 
                                                & ((5U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                                   & ((0x48U 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                      | ((0x68U 
                                                          != (IData)(vlSelfRef.CPU6502Testable__DOT__opcode)) 
                                                         & (8U 
                                                            == (IData)(vlSelfRef.CPU6502Testable__DOT__opcode))))))))
                                       : ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_40) 
                                          | ((0xcU 
                                              == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                              ? (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_5)
                                              : ((0xdU 
                                                  != (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                 & ((0xeU 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT__state)) 
                                                    & ((0U 
                                                        != (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)) 
                                                       & ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_6) 
                                                          | (3U 
                                                             == (IData)(vlSelfRef.CPU6502Testable__DOT__cycle)))))))))));
    vlSelfRef.CPU6502Testable__DOT___GEN_32 = ((5U 
                                                != (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType)) 
                                               | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_31));
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
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x7fU 
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
    __Vtemp_2[1U] = (IData)(((((QData)((IData)((0x7fU 
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
    CPU6502Testable__DOT__alu__DOT___GEN_13[0U] = __Vtemp_2[0U];
    CPU6502Testable__DOT__alu__DOT___GEN_13[1U] = __Vtemp_2[1U];
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
                                 ? ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_5)
                                     ? 0xfffcU : ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_4)
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
                                                 ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_33)
                                                   ? (IData)(vlSelfRef.CPU6502Testable__DOT__regPC)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType))
                                                    ? (IData)(vlSelfRef.CPU6502Testable__DOT__effectiveAddr)
                                                    : 
                                                   ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_32)
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
                                                 ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_40)
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
                             | (IData)(vlSelfRef.CPU6502Testable__DOT___GEN_23))
                             ? 0U : (0xffU & ((3U == (IData)(vlSelfRef.CPU6502Testable__DOT__state))
                                               ? ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_33)
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
                                                   ((IData)(vlSelfRef.CPU6502Testable__DOT___GEN_32)
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

void VCPU6502Testable___024root___eval_triggers__act(VCPU6502Testable___024root* vlSelf);

bool VCPU6502Testable___024root___eval_phase__act(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_phase__act\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCPU6502Testable___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VCPU6502Testable___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VCPU6502Testable___024root___eval_phase__nba(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_phase__nba\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCPU6502Testable___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU6502Testable___024root___dump_triggers__ico(VCPU6502Testable___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU6502Testable___024root___dump_triggers__nba(VCPU6502Testable___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU6502Testable___024root___dump_triggers__act(VCPU6502Testable___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU6502Testable___024root___eval(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VCPU6502Testable___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/Users/david.e.freeman/Projects/chisel-6502/sim/../generated/CPU6502Testable.sv", 717, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VCPU6502Testable___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VCPU6502Testable___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/david.e.freeman/Projects/chisel-6502/sim/../generated/CPU6502Testable.sv", 717, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VCPU6502Testable___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/david.e.freeman/Projects/chisel-6502/sim/../generated/CPU6502Testable.sv", 717, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VCPU6502Testable___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VCPU6502Testable___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCPU6502Testable___024root___eval_debug_assertions(VCPU6502Testable___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root___eval_debug_assertions\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_irq & 0xfeU)))) {
        Verilated::overWidthError("io_irq");}
    if (VL_UNLIKELY(((vlSelfRef.io_nmi & 0xfeU)))) {
        Verilated::overWidthError("io_nmi");}
    if (VL_UNLIKELY(((vlSelfRef.io_rdy & 0xfeU)))) {
        Verilated::overWidthError("io_rdy");}
    if (VL_UNLIKELY(((vlSelfRef.io_test_enable & 0xfeU)))) {
        Verilated::overWidthError("io_test_enable");}
}
#endif  // VL_DEBUG
