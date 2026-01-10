// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSkeletonTop.h for the primary calling header

#include "VSkeletonTop__pch.h"
#include "VSkeletonTop___024root.h"

void VSkeletonTop___024root___ico_sequent__TOP__0(VSkeletonTop___024root* vlSelf);

void VSkeletonTop___024root___eval_ico(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_ico\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VSkeletonTop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VSkeletonTop___024root___ico_sequent__TOP__0(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___ico_sequent__TOP__0\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a;
    SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a = 0;
    CData/*3:0*/ SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_2;
    SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_2 = 0;
    CData/*7:0*/ SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_3;
    SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_3 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32 = 0;
    CData/*7:0*/ SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0;
    SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6;
    SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h7cd686f0_0_0;
    __VdfgRegularize_h7cd686f0_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h7cd686f0_0_1;
    __VdfgRegularize_h7cd686f0_0_1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_opcode 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_b 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryIn 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC;
    vlSelfRef.io_debugCharOut = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharOut;
    vlSelfRef.io_cpuPc = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC;
    vlSelfRef.io_cpuA = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
    vlSelfRef.io_cpuX = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX;
    vlSelfRef.io_cpuY = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY;
    vlSelfRef.io_cpuS = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP;
    vlSelfRef.SkeletonTop__DOT__io_debugCharOut = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharOut;
    vlSelfRef.SkeletonTop__DOT__io_cpuPc = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC;
    vlSelfRef.SkeletonTop__DOT__io_cpuA = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
    vlSelfRef.SkeletonTop__DOT__io_cpuX = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX;
    vlSelfRef.SkeletonTop__DOT__io_cpuY = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY;
    vlSelfRef.SkeletonTop__DOT__io_cpuS = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_pc 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_a 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_x 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_y 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_sp 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_charOut 
        = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharOut;
    vlSelfRef.io_debugCharValid = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharValid;
    vlSelfRef.SkeletonTop__DOT__io_debugCharValid = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharValid;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_charValid 
        = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharValid;
    vlSelfRef.io_debugHalt = vlSelfRef.SkeletonTop__DOT__debug__DOT__regHalt;
    vlSelfRef.SkeletonTop__DOT__io_debugHalt = vlSelfRef.SkeletonTop__DOT__debug__DOT__regHalt;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_halt 
        = vlSelfRef.SkeletonTop__DOT__debug__DOT__regHalt;
    vlSelfRef.SkeletonTop__DOT__io_testEnable = vlSelfRef.io_testEnable;
    vlSelfRef.SkeletonTop__DOT__io_testPc = vlSelfRef.io_testPc;
    vlSelfRef.SkeletonTop__DOT__io_testA = vlSelfRef.io_testA;
    vlSelfRef.SkeletonTop__DOT__io_testX = vlSelfRef.io_testX;
    vlSelfRef.SkeletonTop__DOT__io_testY = vlSelfRef.io_testY;
    vlSelfRef.SkeletonTop__DOT__io_testS = vlSelfRef.io_testS;
    vlSelfRef.SkeletonTop__DOT__io_testP = vlSelfRef.io_testP;
    vlSelfRef.SkeletonTop__DOT__reset = vlSelfRef.reset;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_state 
        = (0xfU & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__clock = vlSelfRef.clock;
    SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_2 
        = ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagD) 
             << 3U) | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagI) 
                       << 2U)) | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagZ) 
                                   << 1U) | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41 = 
        (0xfU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_39 = 
        (4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_40 = 
        (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_42 = 
        (0x10U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr 
        = (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrHi) 
            << 8U) | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_3 
        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11 = 
        (3U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33 = 
        (0xcU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0 = 
        (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36 = 
        (0xdU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37 = 
        (0xeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34 = 
        (3U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2 = 
        (2U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_31 = 
        (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_32 = 
        (9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN = (0U 
                                                  == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_3 = 
        (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_4 = 
        (2U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_5 = 
        (8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_7 = 
        (4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_8 = 
        (0xaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_9 = 
        (0xbU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1 = 
        (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_0 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_135 
        = (0xeaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_142 
        = (0xceU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_143 
        = (0xdeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_146 
        = (0xeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_147 
        = (0x1eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_150 
        = (0x4eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_151 
        = (0x5eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_140 
        = (0xc6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_141 
        = (0xd6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_144 
        = (6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_145 
        = (0x16U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_148 
        = (0x46U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_149 
        = (0x56U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_136 
        = (0xe6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_137 
        = (0xf6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_138 
        = (0xeeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_139 
        = (0xfeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_152 
        = (0x26U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_153 
        = (0x36U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_154 
        = (0x2eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_155 
        = (0x3eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_156 
        = (0x66U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_157 
        = (0x76U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_158 
        = (0x6eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_159 
        = (0x7eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_133 
        = (0x88U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_125 
        = (0xbaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_127 
        = (0xe8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_128 
        = (0xc8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_129 
        = (0xcaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_126 
        = (0x9aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_112 
        = (0x24U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_113 
        = (0x2cU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_110 
        = (0x2aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_111 
        = (0x6aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_108 
        = (0xaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_109 
        = (0x4aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94 
        = (0x20U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN 
        = (0xa9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_0 
        = (0xa5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_1 
        = (0xb5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_2 
        = (0xadU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_3 
        = (0xbdU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_4 
        = (0xb9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_5 
        = (0xa1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_6 
        = (0xb1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_114 
        = (0xaaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_115 
        = (0x8aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_116 
        = (0xa8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_117 
        = (0x98U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64 
        = (0x4dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65 
        = (0x55U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66 
        = (0x5dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67 
        = (0x59U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68 
        = (0x41U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69 
        = (0x51U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_92 
        = (0x4cU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_93 
        = (0x6cU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99 
        = (0x58U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100 
        = (0x78U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101 
        = (0xb8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102 
        = (0xd8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103 
        = (0xf8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_9 
        = (0xb6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_10 
        = (0xaeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_11 
        = (0xbeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_12 
        = (0xa0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_13 
        = (0xa4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_14 
        = (0xb4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_15 
        = (0xacU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_16 
        = (0xbcU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_62 
        = (0x49U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_63 
        = (0x45U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_72 
        = (0xcdU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_73 
        = (0xd5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_74 
        = (0xddU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_75 
        = (0xd9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_76 
        = (0xc1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_77 
        = (0xd1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_95 
        = (0x60U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_96 
        = (0x40U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_97 
        = (0x18U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_98 
        = (0x38U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42 
        = (0xfdU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43 
        = (0xf9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50 
        = (0x3dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51 
        = (0x39U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_86 
        = (0x50U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_87 
        = (0x70U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_88 
        = (0x90U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_89 
        = (0xb0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_90 
        = (0xd0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_91 
        = (0xf0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_7 
        = (0xa2U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_8 
        = (0xa6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_70 
        = (0xc9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_71 
        = (0xc5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_38 
        = (0xe9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_39 
        = (0xe5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_40 
        = (0xedU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_41 
        = (0xf5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_44 
        = (0xe1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_45 
        = (0xf1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_46 
        = (0x29U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_47 
        = (0x25U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_48 
        = (0x2dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_49 
        = (0x35U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_52 
        = (0x21U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_53 
        = (0x31U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_84 
        = (0x10U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_85 
        = (0x30U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_32 
        = (0x6dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_33 
        = (0x75U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_34 
        = (0x7dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_35 
        = (0x79U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_36 
        = (0x61U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_37 
        = (0x71U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_56 
        = (0xdU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_57 
        = (0x15U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_58 
        = (0x1dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_59 
        = (0x19U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_60 
        = (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_61 
        = (0x11U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_30 
        = (0x69U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_31 
        = (0x65U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_54 
        = (9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_55 
        = (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_19 
        = (0x8dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_20 
        = (0x9dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_21 
        = (0x99U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_22 
        = (0x81U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_23 
        = (0x91U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_24 
        = (0x86U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_25 
        = (0x96U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_26 
        = (0x8eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_17 
        = (0x85U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_18 
        = (0x95U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_27 
        = (0x84U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_28 
        = (0x94U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_29 
        = (0x8cU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30 = 
        (0x28U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23 = 
        (0x68U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25 = 
        (8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22 = 
        (0x48U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78 
        = (0xe0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79 
        = (0xe4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80 
        = (0xecU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_81 
        = (0xc0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_82 
        = (0xc4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_83 
        = (0xccU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_enable 
        = vlSelfRef.SkeletonTop__DOT__io_testEnable;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_pc 
        = vlSelfRef.SkeletonTop__DOT__io_testPc;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_a 
        = vlSelfRef.SkeletonTop__DOT__io_testA;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_x 
        = vlSelfRef.SkeletonTop__DOT__io_testX;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_y 
        = vlSelfRef.SkeletonTop__DOT__io_testY;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_s 
        = vlSelfRef.SkeletonTop__DOT__io_testS;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_p 
        = vlSelfRef.SkeletonTop__DOT__io_testP;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__reset = vlSelfRef.SkeletonTop__DOT__reset;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__reset = vlSelfRef.SkeletonTop__DOT__reset;
    vlSelfRef.io_cpuState = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_state;
    vlSelfRef.SkeletonTop__DOT__io_cpuState = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_state;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__clock = vlSelfRef.SkeletonTop__DOT__clock;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__clock = vlSelfRef.SkeletonTop__DOT__clock;
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__R0_clk 
        = vlSelfRef.SkeletonTop__DOT__clock;
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__W0_clk 
        = vlSelfRef.SkeletonTop__DOT__clock;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_p 
        = (0x20U | ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagN) 
                      << 7U) | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagV) 
                                << 6U)) | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagB) 
                                            << 4U) 
                                           | (IData)(SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_2))));
    SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_3 
        = (0x30U | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagN) 
                     << 7U) | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagV) 
                                << 6U) | (IData)(SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_2))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_7 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_3;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_38 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_31) 
         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_32));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_18 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_7) 
         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_8) 
            | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_9)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_35 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) 
         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_140) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_141));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_144) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_145));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_148) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_149));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_136) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_137) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_138) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_139))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_152) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_153) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_154) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_155))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_160 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_156) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_157) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_158) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_159))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_161 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_127) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_128) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_129) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_133))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_130 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_112) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_113));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_108) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_109));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_0) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_1) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_2) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_3) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_4) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_5) 
                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_6))))))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_114) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_115));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_116) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_117));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_92) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_93));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_134 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_12) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_13) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_14) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_15) 
                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_16)))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_62) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_63));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_95) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_96));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_97) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_98));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_7) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_8));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_70) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_71));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_38) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_39));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_40) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_41));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_44) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_45));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_46) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_47));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_48) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_49));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_52) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_53));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_84) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_85));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_30) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_31));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_54) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_55));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_17) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_18));
    __VdfgRegularize_h7cd686f0_0_0 = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_27) 
                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_28) 
                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_29)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_107 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_105 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_106 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_119 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_104 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23));
    __VdfgRegularize_h7cd686f0_0_1 = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_81) 
                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_82) 
                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_83)));
    vlSelfRef.io_cpuP = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_p;
    vlSelfRef.SkeletonTop__DOT__io_cpuP = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_p;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_19 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN) 
         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_3) 
            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_4) 
               | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_5) 
                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_18)))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_142) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_143) 
                    | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_146) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_147) 
                             | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_150) 
                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_151) 
                                      | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22) 
                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_160))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_118 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_110) 
              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_111)));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_125) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_126))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_121 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69)))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_132 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_9) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_10) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_11))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_166 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_9) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_10) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_11) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_134))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_163 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_86) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_87) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_88) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_89) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_90) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_91)))))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_32) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_33) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_34) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_35) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_36) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_37)))))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_56) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_57) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_58) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_59) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_60) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_61)))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_122 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_19) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_20) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_21) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_22) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_23) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_24) 
                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_25) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_26) 
                                   | (IData)(__VdfgRegularize_h7cd686f0_0_0))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_162 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_119));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_164 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_72) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_73) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_74) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_75) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_76) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_77) 
                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79) 
                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80) 
                                      | (IData)(__VdfgRegularize_h7cd686f0_0_1)))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_131 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_118) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_130));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_167 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_127) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_128) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_129) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_133) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_135))))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_163) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_92) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_93) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10) 
              | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43) 
                       | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27) 
                          | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11) 
                             | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50) 
                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51) 
                                      | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25) 
                                         | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeY 
        = ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124) 
               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_132))) 
           & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_134) 
              | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_122) 
                     | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7) 
                        | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_32) 
                           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_33) 
                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_34) 
                                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_35) 
                                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_36) 
                                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_37) 
                                          | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10) 
                                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_40) 
                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_41) 
                                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42) 
                                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43) 
                                                         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_44) 
                                                            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_45) 
                                                               | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11) 
                                                                  | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_48) 
                                                                     | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_49) 
                                                                        | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50) 
                                                                           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51) 
                                                                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_52) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_53) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_56) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_57) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_58) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_59) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_60) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_61) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_72) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_73) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_74) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_75) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_76) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_77) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_81) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_82) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_83) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_86) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_87) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_88) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_89) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_90) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_91) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_95) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_96) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_97) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_98) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_119) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_110) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_111) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_130) 
                                                                                | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                 & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_116) 
                    | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_117) 
                           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_125) 
                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_126) 
                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_127))))) 
                       & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_128) 
                          | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_129)) 
                             & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_133))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_123 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_132) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_12) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_13) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_14) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_15) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_16) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_122)))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_168 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103) 
                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_162))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeX 
        = ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124)) 
           & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_132) 
              | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_134) 
                     | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3) 
                        | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_19) 
                           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_20) 
                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_21) 
                                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_22) 
                                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_23) 
                                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_24) 
                                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_25) 
                                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_26) 
                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_27) 
                                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_28) 
                                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_29) 
                                                         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_30) 
                                                            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_31) 
                                                               | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_32) 
                                                                  | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_33) 
                                                                     | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_34) 
                                                                        | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_35) 
                                                                           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_36) 
                                                                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_37) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_38) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_39) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_40) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_41) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_44) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_45) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_46) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_47) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_48) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_49) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_52) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_53) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_54) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_55) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_56) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_57) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_58) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_59) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_60) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_61) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_62) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_63) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_70) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_71) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_72) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_73) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_74) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_75) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_76) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_77) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_81) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_82) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_83) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_84) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_85) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_86) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_87) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_88) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_89) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_90) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_91) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_92) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_93) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30) 
                                                                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_131))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                 & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_114) 
                    | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_115) 
                           | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21))) 
                       & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_125) 
                          | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_126)) 
                             & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_127) 
                                | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_128)) 
                                   & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_129))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_120 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9) 
              | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102) 
                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103) 
                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22)))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_165 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_62) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_63) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67) 
                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69) 
                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_164))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeY 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeY;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_addressMode 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN)
            ? 1U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_0)
                     ? 2U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_1)
                              ? 3U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_2)
                                       ? 5U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_3)
                                                ? 6U
                                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_4)
                                                    ? 7U
                                                    : 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_5)
                                                     ? 9U
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_6)
                                                      ? 0xaU
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_7)
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_8)
                                                        ? 2U
                                                        : 
                                                       ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_9)
                                                         ? 4U
                                                         : 
                                                        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_10)
                                                          ? 5U
                                                          : 
                                                         ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_11)
                                                           ? 7U
                                                           : 
                                                          ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_12)
                                                            ? 1U
                                                            : 
                                                           ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_13)
                                                             ? 2U
                                                             : 
                                                            ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_14)
                                                              ? 3U
                                                              : 
                                                             ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_15)
                                                               ? 5U
                                                               : 
                                                              ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_16)
                                                                ? 6U
                                                                : 
                                                               ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_17)
                                                                 ? 2U
                                                                 : 
                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_18)
                                                                  ? 3U
                                                                  : 
                                                                 ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_19)
                                                                   ? 5U
                                                                   : 
                                                                  ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_20)
                                                                    ? 6U
                                                                    : 
                                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_21)
                                                                     ? 7U
                                                                     : 
                                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_22)
                                                                      ? 9U
                                                                      : 
                                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_23)
                                                                       ? 0xaU
                                                                       : 
                                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_24)
                                                                        ? 2U
                                                                        : 
                                                                       ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_25)
                                                                         ? 4U
                                                                         : 
                                                                        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_26)
                                                                          ? 5U
                                                                          : 
                                                                         ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_27)
                                                                           ? 2U
                                                                           : 
                                                                          ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_28)
                                                                            ? 3U
                                                                            : 
                                                                           ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_29)
                                                                             ? 5U
                                                                             : 
                                                                            ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_30)
                                                                              ? 1U
                                                                              : 
                                                                             ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_31)
                                                                               ? 2U
                                                                               : 
                                                                              ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_32)
                                                                                ? 5U
                                                                                : 
                                                                               ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_33)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_34)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_35)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_36)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_37)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_38)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_39)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_40)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_41)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_44)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_45)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_46)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_47)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_48)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_49)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_52)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_53)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_54)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_55)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_56)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_57)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_58)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_59)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_60)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_61)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_62)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_63)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_70)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_71)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_72)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_73)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_74)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_75)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_76)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_77)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_81)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_82)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_83)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_163)
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_92)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_93)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_168)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_118)
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_112)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_113)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_167)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_136)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_137)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_138)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_139)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_140)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_141)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_142)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_143)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_144)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_145)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_146)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_147)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_148)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_149)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_150)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_151)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_152)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_153)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_154)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_155)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_156)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_157)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_158)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_159)
                                                                                 ? 6U
                                                                                 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp 
        = (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124) 
            | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_123))
            ? 0xdU : ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31)
                       ? 0U : (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10) 
                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28) 
                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42) 
                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43) 
                                         | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27)))))
                                ? 1U : (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11) 
                                         | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26) 
                                            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50) 
                                               | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51) 
                                                  | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25)))))
                                         ? 2U : ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_121)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_164)
                                                    ? 0xbU
                                                    : 
                                                   (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32) 
                                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_168))
                                                     ? 0xdU
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_108)
                                                      ? 5U
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_109)
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_110)
                                                        ? 7U
                                                        : 
                                                       ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_111)
                                                         ? 8U
                                                         : 
                                                        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_130)
                                                          ? 0xcU
                                                          : 
                                                         ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_167)
                                                           ? 0xdU
                                                           : 
                                                          ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23)
                                                            ? 9U
                                                            : 
                                                           (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13) 
                                                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_142) 
                                                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_143)))
                                                             ? 0xaU
                                                             : 
                                                            (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14) 
                                                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_146) 
                                                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_147)))
                                                              ? 5U
                                                              : 
                                                             (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15) 
                                                               | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_150) 
                                                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_151)))
                                                               ? 6U
                                                               : 
                                                              ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22)
                                                                ? 7U
                                                                : 
                                                               ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_160)
                                                                 ? 8U
                                                                 : 0xdU))))))))))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeX 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeX;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeA 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124) 
           | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_123)) 
              & ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_121) 
                    | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_164) 
                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_120))) 
                       & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23) 
                          | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_119)) 
                             & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_118) 
                                | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_130) 
                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_114))) 
                                   & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_115) 
                                      | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_116)) 
                                         & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_117))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_updateFlags 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_166) 
           | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_122)) 
              & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_165) 
                 | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_120)) 
                    & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23) 
                       | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_119)) 
                          & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_131) 
                             | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_116) 
                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_117) 
                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_125) 
                                         | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_126)) 
                                            & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_161) 
                                               | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_135)) 
                                                  & (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18)))))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_166)
            ? 1U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_122)
                     ? 2U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_165)
                              ? 0U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_163)
                                       ? 3U : (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16) 
                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94) 
                                                   | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9)))
                                                ? 4U
                                                : (
                                                   ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
                                                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99) 
                                                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100) 
                                                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101) 
                                                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102) 
                                                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103))))))
                                                    ? 6U
                                                    : 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_162)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_131)
                                                      ? 0U
                                                      : 
                                                     ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29)
                                                       ? 9U
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_161)
                                                        ? 0xaU
                                                        : 
                                                       ((1U 
                                                         & ((~ (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18)) 
                                                            | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_135)))
                                                         ? 7U
                                                         : 0xbU)))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_addressMode;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_1 
        = (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_2 
        = (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_6 
        = (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_7 
        = (6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_8 
        = (7U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_9 
        = (8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_10 
        = (9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_11 
        = (0xaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_12 
        = (0xbU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_3 
        = (2U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_4 
        = (3U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_5 
        = (4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeA 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeA;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_updateFlags 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_updateFlags;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_instrType 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10 = 
        (2U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_21 = 
        (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_6 = 
        (4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_14 = 
        (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_12 = 
        (7U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_13 = 
        (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_15 = 
        (6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_16 = 
        (9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_17 = 
        (0xaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_20 = 
        (3U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_a_T 
        = (0xbU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_operation 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp;
    SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_3) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_4) 
              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_5)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_29 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_12) 
         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_13) 
            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_14) 
               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_6))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_24 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_17) 
         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_20));
    SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_a_T)
            ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand)
            : (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78) 
                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79) 
                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80)))
                ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX)
                : ((IData)(__VdfgRegularize_h7cd686f0_0_1)
                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY)
                    : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_26 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_16) 
         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_24));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_a 
        = SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a;
    SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0 
        = ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
           & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN 
        = SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_27 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_15) 
         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_26));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___sum_T_1 
        = (0x1ffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN) 
                     + ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_0) 
                        + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff 
        = (0x1ffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN) 
                     - (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_0)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_writeEnable 
        = ((~ (IData)(vlSelfRef.io_testEnable)) & (
                                                   (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_19)) 
                                                   & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11)
                                                       ? 
                                                      ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_29)) 
                                                       & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10) 
                                                          | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_27)) 
                                                             & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_21) 
                                                                & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22) 
                                                                   | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23)) 
                                                                      & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25)))))))
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_38) 
                                                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33)
                                                           ? 
                                                          ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) 
                                                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1))
                                                           : 
                                                          ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36)) 
                                                           & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37) 
                                                              & ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)) 
                                                                 & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_35) 
                                                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_28 = 
        (1U & ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_21)) 
               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_27)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___diff_T_4 
        = (0x1ffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff) 
                     - (1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC)))));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuRw 
        = (1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_writeEnable)));
    vlSelfRef.SkeletonTop__DOT___cpu_io_writeEnable 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_writeEnable;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address 
        = ((IData)(vlSelfRef.io_testEnable) ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
            : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN)
                ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                    ? 0xfffcU : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                  ? 0xfffdU : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))
                : (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_3) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_4) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_5)))
                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                    : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_7)
                        ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr)
                        : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_8)
                            ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__zpAddr)
                            : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_9)
                                ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__zpAddr)
                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11)
                                    ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_29)
                                        ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                        : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10)
                                            ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr)
                                            : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_28)
                                                ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22)
                                                    ? 
                                                   (0x100U 
                                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                    : 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23)
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_3))
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25)
                                                      ? 
                                                     (0x100U 
                                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30)
                                                       ? 
                                                      (0x100U 
                                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_3))
                                                       : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC))))))))
                                    : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_38)
                                        ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr)
                                        : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33)
                                            ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                                                ? (0x100U 
                                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                    ? 
                                                   (0x100U 
                                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                    : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))
                                            : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36)
                                                ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                                                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                    : 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)
                                                      ? 
                                                     (0x100U 
                                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                      : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC))))
                                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37)
                                                    ? 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                                                     ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                      ? 
                                                     (0x100U 
                                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)
                                                       ? 
                                                      (0x100U 
                                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34)
                                                        ? 
                                                       (0x100U 
                                                        | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                        : 
                                                       ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_39)
                                                         ? 0xfffeU
                                                         : 
                                                        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_40)
                                                          ? 0xffffU
                                                          : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))))))
                                                    : 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41)
                                                     ? 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                                                      ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                       ? 
                                                      (0x100U 
                                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)
                                                        ? 
                                                       (0x100U 
                                                        | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                        : 
                                                       ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34)
                                                         ? 
                                                        (0x100U 
                                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                         : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))))
                                                     : 
                                                    ((1U 
                                                      & ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_42)) 
                                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)))
                                                      ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                       ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr)
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)
                                                        ? 
                                                       (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrHi) 
                                                         << 8U) 
                                                        | (0xffU 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo))))
                                                        : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC))))))))))))))));
    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_1) {
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryOut 
            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___sum_T_1) 
                     >> 8U));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_overflow 
            = (((1U & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) == (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                         >> 7U))) & 
               ((1U & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) != (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___sum_T_1) 
                                         >> 7U))));
    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_2) {
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryOut 
            = (1U & (~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___diff_T_4) 
                        >> 8U)));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_overflow 
            = (((1U & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) != (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                         >> 7U))) & 
               ((1U & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) != (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___diff_T_4) 
                                         >> 7U))));
    } else {
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryOut 
            = (1U & ((~ (IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6)) 
                     & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_6)
                         ? ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                            >> 7U) : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_7)
                                       ? (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)
                                       : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_8)
                                           ? ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                              >> 7U)
                                           : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_9)
                                               ? (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)
                                               : ((~ 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_10) 
                                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_11))) 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff) 
                                                       >> 8U)) 
                                                     & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_12)))))))));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_overflow 
            = ((~ ((IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6) 
                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_6) 
                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_7) 
                         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_8) 
                            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_9) 
                               | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_10) 
                                  | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_11) 
                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_12))))))))) 
               & ((0xcU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp)) 
                  & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                     >> 6U)));
    }
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x7fU 
                                               & (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)))) 
                              << 0x39U) | (((QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC)) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (0x7fU 
                                                                & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                   >> 1U)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)))) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                      ^ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand)) 
                                                                         << 0x18U) 
                                                                        | ((IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___diff_T_4) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___sum_T_1))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0x7fU 
                                                & (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)))) 
                               << 0x39U) | (((QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC)) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0x7fU 
                                                                 & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                    >> 1U)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)))) 
                                                   << 0x29U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                       ^ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand)) 
                                                                          << 0x18U) 
                                                                         | ((IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___diff_T_4) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___sum_T_1))))))))))) 
                             >> 0x20U));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[0U] 
        = __Vtemp_1[0U];
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[2U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                       << 0x18U) | 
                                      ((IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                       << 0x10U)) | 
                                     ((0xff00U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff) 
                                                  << 8U)) 
                                      | (0xffU & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                  - (IData)(1U))))))) 
                    << 0x10U) | (QData)((IData)(((0xff00U 
                                                  & (((IData)(1U) 
                                                      + (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC) 
                                                     << 7U) 
                                                    | (0x7fU 
                                                       & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                          >> 1U))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[3U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                        << 0x18U) | 
                                       ((IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                        << 0x10U)) 
                                      | ((0xff00U & 
                                          ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff) 
                                           << 8U)) 
                                         | (0xffU & 
                                            ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                             - (IData)(1U))))))) 
                     << 0x10U) | (QData)((IData)(((0xff00U 
                                                   & (((IData)(1U) 
                                                       + (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC) 
                                                      << 7U) 
                                                     | (0x7fU 
                                                        & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                           >> 1U))))))) 
                   >> 0x20U));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramAddr 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address;
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__Memory
        [vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address];
    vlSelfRef.SkeletonTop__DOT___cpu_io_address = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address;
    vlSelfRef.SkeletonTop__DOT___ram_ext_R0_data = 
        vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__Memory
        [vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address];
    vlSelfRef.SkeletonTop__DOT___bus_io_ramAddr = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugAddr 
        = (0xfU & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs 
        = ((0xffdfU < (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address)) 
           & (0xfffU != (0xfffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address) 
                                   >> 4U))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_carryOut 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryOut;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_overflow 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_overflow;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_negative 
        = (1U & (vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[
                 (3U & (((IData)(7U) + VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U)) 
                        >> 5U))] >> (0x1fU & ((IData)(7U) 
                                              + VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U)))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_result 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U)))
                      ? 0U : (vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U))))) 
                    | (vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[
                       (3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U)))));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuAddr 
        = vlSelfRef.SkeletonTop__DOT___cpu_io_address;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramDataOut 
        = vlSelfRef.SkeletonTop__DOT___ram_ext_R0_data;
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.SkeletonTop__DOT___bus_io_ramAddr;
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.SkeletonTop__DOT___bus_io_ramAddr;
    vlSelfRef.SkeletonTop__DOT___bus_io_debugAddr = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugAddr;
    vlSelfRef.SkeletonTop__DOT__debug__DOT___GEN = 
        (0U == (IData)(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugAddr));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__isDebugRange 
        = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs;
    vlSelfRef.SkeletonTop__DOT___bus_io_debugCs = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramWe 
        = ((~ (IData)(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs)) 
           & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_writeEnable));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugWe 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_writeEnable) 
           & (IData)(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_negative 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_negative;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_result 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_result;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_zero 
        = (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_result));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut 
        = (((IData)(vlSelfRef.io_testEnable) | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_19))
            ? 0U : (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11)
                              ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_29)
                                  ? 0U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10)
                                           ? ((IData)(__VdfgRegularize_h7cd686f0_0_0)
                                               ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY)
                                               : (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_24) 
                                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_25) 
                                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_26)))
                                                   ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX)
                                                   : 
                                                  (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_17) 
                                                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_19) 
                                                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_18) 
                                                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_20) 
                                                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_21) 
                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_22) 
                                                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_23)))))))
                                                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA)
                                                    : 0U)))
                                           : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_28)
                                               ? 0U
                                               : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22)
                                                   ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA)
                                                   : 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25)) 
                                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23)))
                                                    ? 0U
                                                    : (IData)(SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_3))))))
                              : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_31)
                                  ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA)
                                  : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_32)
                                      ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_result)
                                      : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33)
                                          ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                                              ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC) 
                                                 >> 8U)
                                              : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                  ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                  : 0U))
                                          : ((1U & 
                                              ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36) 
                                               | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37)) 
                                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0))))
                                              ? 0U : 
                                             ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                               ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC) 
                                                  >> 8U)
                                               : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)
                                                   ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                   : 
                                                  ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34)
                                                    ? (IData)(SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_3)
                                                    : 0U))))))))));
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_addr 
        = vlSelfRef.SkeletonTop__DOT___bus_io_debugAddr;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_dataOut 
        = (((IData)(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs) 
            & (IData)(vlSelfRef.SkeletonTop__DOT__debug__DOT___GEN))
            ? (IData)(vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharOut)
            : 0U);
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_cs = vlSelfRef.SkeletonTop__DOT___bus_io_debugCs;
    vlSelfRef.SkeletonTop__DOT___bus_io_ramWe = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramWe;
    vlSelfRef.SkeletonTop__DOT___bus_io_debugWe = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugWe;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_zero 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_zero;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramDataIn 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugDataIn 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT___cpu_io_dataOut = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT___bus_io_debugDataIn 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT___bus_io_ramDataIn = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT___debug_io_dataOut = vlSelfRef.SkeletonTop__DOT__debug__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuDataIn 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs)
            ? (IData)(vlSelfRef.SkeletonTop__DOT__debug__DOT__io_dataOut)
            : vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__Memory
           [vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address]);
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__W0_en 
        = vlSelfRef.SkeletonTop__DOT___bus_io_ramWe;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_we = vlSelfRef.SkeletonTop__DOT___bus_io_debugWe;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuDataOut 
        = vlSelfRef.SkeletonTop__DOT___cpu_io_dataOut;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_dataIn 
        = vlSelfRef.SkeletonTop__DOT___bus_io_debugDataIn;
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__W0_data 
        = vlSelfRef.SkeletonTop__DOT___bus_io_ramDataIn;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugDataOut 
        = vlSelfRef.SkeletonTop__DOT___debug_io_dataOut;
    vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuDataIn;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataIn 
        = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
}

void VSkeletonTop___024root___eval_triggers__ico(VSkeletonTop___024root* vlSelf);

bool VSkeletonTop___024root___eval_phase__ico(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_phase__ico\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VSkeletonTop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VSkeletonTop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VSkeletonTop___024root___eval_act(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_act\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VSkeletonTop___024root___nba_sequent__TOP__0(VSkeletonTop___024root* vlSelf);

void VSkeletonTop___024root___eval_nba(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_nba\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSkeletonTop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VSkeletonTop___024root___nba_sequent__TOP__0(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___nba_sequent__TOP__0\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a;
    SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a = 0;
    CData/*3:0*/ SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_2;
    SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_2 = 0;
    CData/*7:0*/ SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_3;
    SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_3 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32 = 0;
    CData/*7:0*/ SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0;
    SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0 = 0;
    CData/*0:0*/ SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6;
    SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h7cd686f0_0_0;
    __VdfgRegularize_h7cd686f0_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h7cd686f0_0_1;
    __VdfgRegularize_h7cd686f0_0_1 = 0;
    CData/*7:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__regA;
    __Vdly__SkeletonTop__DOT__cpu__DOT__regA = 0;
    CData/*7:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__regX;
    __Vdly__SkeletonTop__DOT__cpu__DOT__regX = 0;
    CData/*7:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__regY;
    __Vdly__SkeletonTop__DOT__cpu__DOT__regY = 0;
    CData/*7:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__regSP;
    __Vdly__SkeletonTop__DOT__cpu__DOT__regSP = 0;
    SData/*15:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__regPC;
    __Vdly__SkeletonTop__DOT__cpu__DOT__regPC = 0;
    CData/*0:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__flagN;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagN = 0;
    CData/*0:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__flagV;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagV = 0;
    CData/*0:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__flagD;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagD = 0;
    CData/*0:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__flagI;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagI = 0;
    CData/*0:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ = 0;
    CData/*0:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__flagC;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagC = 0;
    CData/*4:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__state;
    __Vdly__SkeletonTop__DOT__cpu__DOT__state = 0;
    CData/*3:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__cycle;
    __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0;
    CData/*7:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__operand;
    __Vdly__SkeletonTop__DOT__cpu__DOT__operand = 0;
    CData/*7:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo;
    __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo = 0;
    CData/*7:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi;
    __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi = 0;
    CData/*7:0*/ __Vdly__SkeletonTop__DOT__cpu__DOT__zpAddr;
    __Vdly__SkeletonTop__DOT__cpu__DOT__zpAddr = 0;
    CData/*0:0*/ __Vdly__SkeletonTop__DOT__debug__DOT__regHalt;
    __Vdly__SkeletonTop__DOT__debug__DOT__regHalt = 0;
    CData/*7:0*/ __VdlyVal__SkeletonTop__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__SkeletonTop__DOT__ram_ext__DOT__Memory__v0 = 0;
    SData/*15:0*/ __VdlyDim0__SkeletonTop__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__SkeletonTop__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__SkeletonTop__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__SkeletonTop__DOT__ram_ext__DOT__Memory__v0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __VdlySet__SkeletonTop__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__SkeletonTop__DOT__debug__DOT__regHalt = vlSelfRef.SkeletonTop__DOT__debug__DOT__regHalt;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagN = vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagN;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagV = vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagV;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagD = vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagD;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagI = vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagI;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ = vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagZ;
    __Vdly__SkeletonTop__DOT__cpu__DOT__zpAddr = vlSelfRef.SkeletonTop__DOT__cpu__DOT__zpAddr;
    __Vdly__SkeletonTop__DOT__cpu__DOT__regPC = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC;
    __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo = vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo;
    __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi = vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrHi;
    __Vdly__SkeletonTop__DOT__cpu__DOT__regSP = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP;
    __Vdly__SkeletonTop__DOT__cpu__DOT__flagC = vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC;
    __Vdly__SkeletonTop__DOT__cpu__DOT__regA = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
    __Vdly__SkeletonTop__DOT__cpu__DOT__regX = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX;
    __Vdly__SkeletonTop__DOT__cpu__DOT__regY = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY;
    __Vdly__SkeletonTop__DOT__cpu__DOT__operand = vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand;
    __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle;
    __Vdly__SkeletonTop__DOT__cpu__DOT__state = vlSelfRef.SkeletonTop__DOT__cpu__DOT__state;
    if (vlSelfRef.SkeletonTop__DOT___bus_io_ramWe) {
        __VdlyVal__SkeletonTop__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.SkeletonTop__DOT___bus_io_ramDataIn;
        __VdlyDim0__SkeletonTop__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.SkeletonTop__DOT___bus_io_ramAddr;
        __VdlySet__SkeletonTop__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.reset) {
        __Vdly__SkeletonTop__DOT__cpu__DOT__regA = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__regX = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__regY = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__regSP = 0xfdU;
        __Vdly__SkeletonTop__DOT__cpu__DOT__regPC = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__flagN = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__flagV = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__flagD = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__flagI = 1U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__flagC = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__state = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__operand = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi = 0U;
        __Vdly__SkeletonTop__DOT__cpu__DOT__zpAddr = 0U;
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagB = 0U;
        vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharOut = 0U;
        vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharValid = 0U;
        __Vdly__SkeletonTop__DOT__debug__DOT__regHalt = 0U;
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode = 0U;
    } else {
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_43 
            = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) 
               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_44 
            = (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_45 
            = (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_46 
            = (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_47 
            = (8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_48 
            = (2U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_49 
            = (3U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_50 
            = (4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_51 
            = (6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_52 
            = (7U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_53 
            = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_51) 
               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_52));
        if (vlSelfRef.io_testEnable) {
            __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                = vlSelfRef.io_testA;
            __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                = vlSelfRef.io_testX;
            __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                = vlSelfRef.io_testY;
            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                = vlSelfRef.io_testS;
            __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                = vlSelfRef.io_testPc;
            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                = (1U & ((IData)(vlSelfRef.io_testP) 
                         >> 7U));
            __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                = (1U & ((IData)(vlSelfRef.io_testP) 
                         >> 6U));
            __Vdly__SkeletonTop__DOT__cpu__DOT__flagD 
                = (1U & ((IData)(vlSelfRef.io_testP) 
                         >> 3U));
            __Vdly__SkeletonTop__DOT__cpu__DOT__flagI 
                = (1U & ((IData)(vlSelfRef.io_testP) 
                         >> 2U));
            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                = (1U & ((IData)(vlSelfRef.io_testP) 
                         >> 1U));
            __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                = (1U & (IData)(vlSelfRef.io_testP));
            __Vdly__SkeletonTop__DOT__cpu__DOT__state = 1U;
            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0U;
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagB 
                = (1U & ((IData)(vlSelfRef.io_testP) 
                         >> 4U));
        } else {
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_54 
                = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) 
                         | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1))));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_55 
                = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_43) 
                         | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2))));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56 
                = (0xaaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57 
                = (0x8aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58 
                = (0xa8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59 
                = (0x98U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_60 
                = (0xbaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61 
                = (0x9aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62 
                = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61)
                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX)
                    : 0U);
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63 
                = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_60)
                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP)
                    : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64 
                = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59)
                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY)
                    : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65 
                = (0xe8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX)));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66 
                = (0xc8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_2 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY)));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67 
                = (0xcaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_4 
                = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX) 
                            - (IData)(1U)));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68 
                = (0x88U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_6 
                = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY) 
                            - (IData)(1U)));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69 
                = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68)
                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_6)
                    : 0U);
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70 
                = (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_6) 
                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10)) 
                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_15));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71 
                = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_14) 
                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72 
                = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) 
                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_35));
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73 
                = ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72)) 
                   & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34));
            if ((1U & (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_19) 
                        | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11))) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_12)))) {
                if (vlSelfRef.io_testEnable) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                        = vlSelfRef.io_testA;
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                        = vlSelfRef.io_testX;
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                        = vlSelfRef.io_testY;
                }
            } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_13) {
                if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeA) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand;
                } else if (vlSelfRef.io_testEnable) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                        = vlSelfRef.io_testA;
                }
                if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeX) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand;
                } else if (vlSelfRef.io_testEnable) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                        = vlSelfRef.io_testX;
                }
                if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeY) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand;
                } else if (vlSelfRef.io_testEnable) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                        = vlSelfRef.io_testY;
                }
            } else {
                if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_14) {
                    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeA) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                            = vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_result;
                    } else if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                            = vlSelfRef.io_testA;
                    }
                } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70) {
                    if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                            = vlSelfRef.io_testA;
                    }
                } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_16) {
                    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeA) {
                        if ((1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56)))) {
                            if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX;
                            } else if ((1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58)))) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64;
                            }
                        }
                    } else if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                            = vlSelfRef.io_testA;
                    }
                } else if ((1U & ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_24) 
                                    | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_21))) 
                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22)) 
                                  | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23))))) {
                    if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                            = vlSelfRef.io_testA;
                    }
                } else {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regA 
                        = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                }
                if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71) {
                    if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                            = vlSelfRef.io_testX;
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                            = vlSelfRef.io_testY;
                    }
                } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_16) {
                    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeX) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
                        } else if ((1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57)))) {
                            if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
                            } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY;
                            } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_60) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP;
                            } else if ((1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61)))) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regX = 0U;
                            }
                        }
                    } else if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                            = vlSelfRef.io_testX;
                    }
                    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeY) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
                        } else if ((1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59)))) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63;
                        }
                    } else if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                            = vlSelfRef.io_testY;
                    }
                } else {
                    if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_17) 
                         & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeX))) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                            = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65)
                                ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T)
                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66)
                                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_2)
                                    : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67)
                                        ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_4)
                                        : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69))));
                    } else if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regX 
                            = vlSelfRef.io_testX;
                    }
                    if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_17) 
                         & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeY))) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                            = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65)
                                ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T)
                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66)
                                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_2)
                                    : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67)
                                        ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_4)
                                        : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68)
                                            ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_6)
                                            : 0U))));
                    } else if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regY 
                            = vlSelfRef.io_testY;
                    }
                }
            }
            if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_19) {
                if (vlSelfRef.io_testEnable) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                        = vlSelfRef.io_testS;
                    __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                        = (1U & ((IData)(vlSelfRef.io_testP) 
                                 >> 7U));
                    __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                        = (1U & ((IData)(vlSelfRef.io_testP) 
                                 >> 6U));
                    __Vdly__SkeletonTop__DOT__cpu__DOT__flagD 
                        = (1U & ((IData)(vlSelfRef.io_testP) 
                                 >> 3U));
                    __Vdly__SkeletonTop__DOT__cpu__DOT__flagI 
                        = (1U & ((IData)(vlSelfRef.io_testP) 
                                 >> 2U));
                    __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                        = (1U & ((IData)(vlSelfRef.io_testP) 
                                 >> 1U));
                    __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                        = (1U & (IData)(vlSelfRef.io_testP));
                }
            } else {
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_74 
                    = (1U & ((IData)(vlSelfRef.io_testEnable)
                              ? ((IData)(vlSelfRef.io_testP) 
                                 >> 2U) : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagI)));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_75 
                    = (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_76 
                    = (6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77 
                    = (7U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_78 
                    = (8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp));
                if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11) {
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_79 
                        = (0xcU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp));
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_80 
                        = (0x18U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_81 
                        = (0x38U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_82 
                        = (0x58U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83 
                        = (0x78U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_84 
                        = (0xb8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_85 
                        = (1U & ((((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_26) 
                                     | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_21))) 
                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22)) 
                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23)) 
                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25)) 
                                 | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30))));
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_86 
                        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_6) 
                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10));
                    if ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_12) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_13)) 
                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71))) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = vlSelfRef.io_testS;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_16) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61) {
                            if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
                            } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX;
                            } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
                            } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY;
                            } else if ((1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_60)))) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62;
                            }
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = vlSelfRef.io_testS;
                        }
                    } else if ((1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_24) 
                                      | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_21))))) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = vlSelfRef.io_testS;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                            = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP) 
                                        - (IData)(1U)));
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                            = vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_3;
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                            = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP) 
                                        - (IData)(1U)));
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                            = vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_7;
                    } else if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                            = vlSelfRef.io_testS;
                    }
                    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_12) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 1U));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_13) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_updateFlags) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand));
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 1U));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_14) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_updateFlags) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_79)
                                          ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                             >> 7U)
                                          : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_negative)));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_zero;
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 1U));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 1U));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_16) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_updateFlags) {
                            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue 
                                = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56)
                                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA)
                                    : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57)
                                        ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX)
                                        : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58)
                                            ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA)
                                            : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64))));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue));
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 1U));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_17) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_updateFlags) {
                            vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult 
                                = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65)
                                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T)
                                    : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66)
                                        ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_2)
                                        : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67)
                                            ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_4)
                                            : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69))));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult));
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 1U));
                        }
                    } else if ((1U & (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_20) 
                                       | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_21))) 
                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22)))) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 1U));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                     >> 7U));
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                            = (0U == (IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn));
                    } else if ((1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25) 
                                      | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30))))) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 1U));
                        }
                    } else {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                     >> 7U));
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                     >> 1U));
                    }
                    if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_12) 
                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_13))) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 6U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_testP));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_14) {
                        vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT___GEN_87 
                            = ((0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp)) 
                               | (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp)));
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_updateFlags) {
                            if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT___GEN_87) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_overflow;
                            } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_79) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                                    = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                             >> 6U));
                            } else if (vlSelfRef.io_testEnable) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                                    = (1U & ((IData)(vlSelfRef.io_testP) 
                                             >> 6U));
                            }
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 6U));
                        }
                        if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_updateFlags) 
                             & ((((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT___GEN_87) 
                                    | (0xbU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp))) 
                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_75)) 
                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_76)) 
                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77)) 
                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_78)))) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_carryOut;
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_testP));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_86) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 6U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_testP));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_15) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                            = (1U & ((((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_80) 
                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_81)) 
                                        | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_82)) 
                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83)) 
                                      | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_84))) 
                                     & ((IData)(vlSelfRef.io_testEnable)
                                         ? ((IData)(vlSelfRef.io_testP) 
                                            >> 6U) : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagV))));
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                            = (1U & ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_80)) 
                                     & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_81) 
                                        | ((IData)(vlSelfRef.io_testEnable)
                                            ? (IData)(vlSelfRef.io_testP)
                                            : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC)))));
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_85) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 6U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_testP));
                        }
                    } else {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                     >> 6U));
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                            = (1U & (IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn));
                    }
                    if (((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_12) 
                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_13)) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_14)) 
                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_86))) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagD 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 3U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagI 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 2U));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_15) {
                        if ((((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_80) 
                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_81)) 
                               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_82)) 
                              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83)) 
                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_84))) {
                            if (vlSelfRef.io_testEnable) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__flagD 
                                    = (1U & ((IData)(vlSelfRef.io_testP) 
                                             >> 3U));
                            }
                        } else {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagD 
                                = ((0xd8U != (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode)) 
                                   & ((0xf8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode)) 
                                      | ((IData)(vlSelfRef.io_testEnable)
                                          ? ((IData)(vlSelfRef.io_testP) 
                                             >> 3U)
                                          : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagD))));
                        }
                        if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_80) 
                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_81))) {
                            if (vlSelfRef.io_testEnable) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__flagI 
                                    = (1U & ((IData)(vlSelfRef.io_testP) 
                                             >> 2U));
                            }
                        } else {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagI 
                                = ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_82)) 
                                   & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83) 
                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_74)));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_85) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagD 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 3U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagI 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 2U));
                        }
                    } else {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagD 
                            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                     >> 3U));
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagI 
                            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                     >> 2U));
                    }
                } else {
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_88 
                        = (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33) 
                            | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36)) 
                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37));
                    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_38) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = vlSelfRef.io_testS;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP) 
                                            - (IData)(1U)));
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP) 
                                            - (IData)(1U)));
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = vlSelfRef.io_testS;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP)));
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP)));
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = vlSelfRef.io_testS;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) {
                            if (vlSelfRef.io_testEnable) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                    = vlSelfRef.io_testS;
                            }
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP) 
                                            - (IData)(1U)));
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP) 
                                            - (IData)(1U)));
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP) 
                                            - (IData)(1U)));
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = vlSelfRef.io_testS;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP)));
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP)));
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP)));
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                                = vlSelfRef.io_testS;
                        }
                    } else if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regSP 
                            = vlSelfRef.io_testS;
                    }
                    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_31) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 1U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_testP));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_32) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_updateFlags) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_negative;
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_zero;
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 1U));
                        }
                        if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_updateFlags) 
                             & ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_75) 
                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_76)) 
                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77)) 
                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_78)))) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_carryOut;
                        } else if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_testP));
                        }
                    } else if ((1U & ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_88) 
                                        | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41))) 
                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)) 
                                      | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1))))) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 7U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 1U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                                = (1U & (IData)(vlSelfRef.io_testP));
                        }
                    } else {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagN 
                            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                     >> 7U));
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ 
                            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                     >> 1U));
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagC 
                            = (1U & (IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn));
                    }
                    if (((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_31) 
                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_32)) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33)) 
                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36))) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagI 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 2U));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagI 
                            = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73) 
                               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_74));
                    } else if ((1U & (((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41)) 
                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)) 
                                      | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1))))) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagI 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 2U));
                        }
                    } else {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagI 
                            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                     >> 2U));
                    }
                    if ((1U & ((((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_31) 
                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_32)) 
                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_88)) 
                                 | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41))) 
                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)) 
                               | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1))))) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 6U));
                            __Vdly__SkeletonTop__DOT__cpu__DOT__flagD 
                                = (1U & ((IData)(vlSelfRef.io_testP) 
                                         >> 3U));
                        }
                    } else {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagV 
                            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                     >> 6U));
                        __Vdly__SkeletonTop__DOT__cpu__DOT__flagD 
                            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                     >> 3U));
                    }
                }
            }
            if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN) {
                if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_55) {
                    if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                            = vlSelfRef.io_testPc;
                    }
                } else {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                        = (((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                            << 8U) | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo));
                }
                if ((((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_43)) 
                      & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)) 
                     | (IData)(vlSelfRef.io_testEnable))) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__state = 1U;
                }
                if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 1U;
                } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 2U;
                } else if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2) 
                            | (IData)(vlSelfRef.io_testEnable))) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0U;
                }
                if ((1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_55)))) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi 
                        = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                }
                if ((1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_54)))) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo 
                        = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                }
            } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_3) {
                __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)));
                __Vdly__SkeletonTop__DOT__cpu__DOT__state = 2U;
                if (vlSelfRef.io_testEnable) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0U;
                }
            } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_4) {
                if (vlSelfRef.io_testEnable) {
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89 
                        = vlSelfRef.io_testPc;
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90 = 1U;
                } else {
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89 
                        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC;
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90 
                        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__state;
                }
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_91 
                    = (0x60U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95[0U] 
                    = (IData)((((QData)((IData)(((((IData)(1U) 
                                                   + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((IData)(1U) 
                                                               + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89))))));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95[1U] 
                    = (IData)(((((QData)((IData)(((
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(1U) 
                                                                + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89))))) 
                               >> 0x20U));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95[2U] 
                    = (IData)((((QData)((IData)(((((IData)(1U) 
                                                   + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((IData)(1U) 
                                                               + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(1U) 
                                                                   + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC))))))));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95[3U] 
                    = (IData)(((((QData)((IData)(((
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(1U) 
                                                                + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC))))))) 
                               >> 0x20U));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95[4U] 
                    = (IData)((((QData)((IData)(((((IData)(1U) 
                                                   + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((IData)(1U) 
                                                               + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(1U) 
                                                                   + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC))))))));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95[5U] 
                    = (IData)(((((QData)((IData)(((
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((IData)(1U) 
                                                                + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC))))))) 
                               >> 0x20U));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95[6U] 
                    = (IData)((((QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89)) 
                                << 0x30U) | (((QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89)) 
                                              << 0x20U) 
                                             | (((QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89)) 
                                                 << 0x10U) 
                                                | (QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89))))));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95[7U] 
                    = (IData)(((((QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89)) 
                                 << 0x30U) | (((QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89)) 
                                               << 0x20U) 
                                              | (((QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89)) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89))))) 
                               >> 0x20U));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92 
                    = (0x40U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93 
                    = (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_94 
                    = (0x20U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
                __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                    = (0xffffU & (((0U == (0x1fU & 
                                           VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode), 4U)))
                                    ? 0U : (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95[
                                            (((IData)(0xfU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode), 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode), 4U))))) 
                                  | (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95[
                                     (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode), 4U) 
                                            >> 5U))] 
                                     >> (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode), 4U)))));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96[0U] 
                    = (0x10421060U | ((0xc0000000U 
                                       & vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96[0U]) 
                                      | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_94) 
                                          << 0x1bU) 
                                         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_91)
                                             ? 0xdU
                                             : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92)
                                                 ? 0xfU
                                                 : 
                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93)
                                                  ? 0xeU
                                                  : 3U))))));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96[0U] 
                    = ((0x3fffffffU & vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96[0U]) 
                       | ((IData)((0xc6a54108ULL | 
                                   ((QData)((IData)(
                                                    (0x7fffU 
                                                     & (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90) 
                                                            << 5U) 
                                                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90)))))) 
                                    << 0x23U))) << 0x1eU));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96[1U] 
                    = (((IData)((0xc6a54108ULL | ((QData)((IData)(
                                                                  (0x7fffU 
                                                                   & (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90) 
                                                                       << 0xaU) 
                                                                      | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90) 
                                                                          << 5U) 
                                                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90)))))) 
                                                  << 0x23U))) 
                        >> 2U) | ((IData)(((0xc6a54108ULL 
                                            | ((QData)((IData)(
                                                               (0x7fffU 
                                                                & (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90) 
                                                                    << 0xaU) 
                                                                   | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90) 
                                                                       << 5U) 
                                                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90)))))) 
                                               << 0x23U)) 
                                           >> 0x20U)) 
                                  << 0x1eU));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96[2U] 
                    = (0xffffU & ((IData)(((0xc6a54108ULL 
                                            | ((QData)((IData)(
                                                               (0x7fffU 
                                                                & (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90) 
                                                                    << 0xaU) 
                                                                   | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90) 
                                                                       << 5U) 
                                                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90)))))) 
                                               << 0x23U)) 
                                           >> 0x20U)) 
                                  >> 2U));
                __Vdly__SkeletonTop__DOT__cpu__DOT__state 
                    = ((0x4fU >= (0x7fU & ((IData)(5U) 
                                           * (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode))))
                        ? (0x1fU & (((0U == (0x1fU 
                                             & ((IData)(5U) 
                                                * (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode))))
                                      ? 0U : (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96[
                                              (((IData)(4U) 
                                                + (0x7fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode)))))) 
                                    | (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96[
                                       (3U & (((IData)(5U) 
                                               * (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode)) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(5U) 
                                            * (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode))))))
                        : 0U);
                if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_44)
                      ? ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_91) 
                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92)) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93)) 
                         | (IData)(vlSelfRef.io_testEnable))
                      : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_45)
                          ? (IData)(vlSelfRef.io_testEnable)
                          : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_46)
                              ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_94) 
                                 | (IData)(vlSelfRef.io_testEnable))
                              : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_47) 
                                 | (IData)(vlSelfRef.io_testEnable)))))) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_44) 
                              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_45))))) {
                    if ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_46) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_47)) 
                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_48))) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo 
                            = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_49) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo 
                            = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                        + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX)));
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_50) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo 
                            = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                        + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY)));
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_53) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo 
                            = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                    }
                }
                if ((1U & (~ (((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_44) 
                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_45)) 
                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_46)) 
                               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_47)) 
                              | (~ (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_48) 
                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_49)) 
                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_50))))))) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi = 0U;
                }
            } else {
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_97 
                    = (((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                        << 8U) | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_98 
                    = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY;
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_99 
                    = (6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_100 
                    = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36));
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_101 
                    = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_38));
                if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_5) {
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr 
                        = (0xffffU & ((6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode))
                                       ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_97) 
                                          + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX))
                                       : ((7U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode))
                                           ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_97) 
                                              + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_98))
                                           : (((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo)))));
                    __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)));
                    __Vdly__SkeletonTop__DOT__cpu__DOT__state 
                        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_6)
                            ? 3U : 4U);
                    __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo 
                        = (0xffU & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr));
                    __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi 
                        = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr) 
                                    >> 8U));
                } else {
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1 
                        = (0xffffU & ((0xaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode))
                                       ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_97) 
                                          + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_98))
                                       : (((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                           << 8U) | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo))));
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_102 
                        = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72) 
                                 | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34))));
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_103 
                        = ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) 
                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)) 
                            | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)) 
                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34));
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_104 
                        = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_103) 
                                 | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_39))));
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_105 
                        = (((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) 
                              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)) 
                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34)) 
                            | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_39)) 
                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_40));
                    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_18) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                = vlSelfRef.io_testPc;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11) {
                        if ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_12) 
                              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_13)) 
                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_14))) {
                            if (vlSelfRef.io_testEnable) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                    = vlSelfRef.io_testPc;
                            }
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_6) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr;
                        } else if ((1U & (((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10) 
                                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_15)) 
                                            | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_16)) 
                                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_17)) 
                                          | (~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_20) 
                                                & ((0x10U 
                                                    == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode))
                                                    ? 
                                                   (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagN))
                                                    : 
                                                   ((0x30U 
                                                     == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode))
                                                     ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagN)
                                                     : 
                                                    ((0x50U 
                                                      == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode))
                                                      ? 
                                                     (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagV))
                                                      : 
                                                     ((0x70U 
                                                       == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode))
                                                       ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagV)
                                                       : 
                                                      ((0x90U 
                                                        == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode))
                                                        ? 
                                                       (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC))
                                                        : 
                                                       ((0xb0U 
                                                         == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode))
                                                         ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC)
                                                         : 
                                                        ((0xd0U 
                                                          == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagZ))
                                                          : 
                                                         ((0xf0U 
                                                           == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode)) 
                                                          & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagZ)))))))))))))) {
                            if (vlSelfRef.io_testEnable) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                    = vlSelfRef.io_testPc;
                            }
                        } else {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                = (0xffffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC) 
                                              + ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                                                    >> 7U)))) 
                                                     << 8U)) 
                                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand))));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_38) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                = vlSelfRef.io_testPc;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_102) {
                            if (vlSelfRef.io_testEnable) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                    = vlSelfRef.io_testPc;
                            }
                        } else {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_102) {
                            if (vlSelfRef.io_testEnable) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                    = vlSelfRef.io_testPc;
                            }
                        } else {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                = (0xffffU & ((IData)(1U) 
                                              + (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrHi) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo))));
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                = (0xffffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)));
                        } else if ((1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_105) 
                                          | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_99))))) {
                            if (vlSelfRef.io_testEnable) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                    = vlSelfRef.io_testPc;
                            }
                        } else {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_104) {
                            if (vlSelfRef.io_testEnable) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                    = vlSelfRef.io_testPc;
                            }
                        } else {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                = vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr;
                        }
                    } else if ((1U & (((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_42)) 
                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72)) 
                                      | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34))))) {
                        if (vlSelfRef.io_testEnable) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                                = vlSelfRef.io_testPc;
                        }
                    } else {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__regPC 
                            = (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                << 8U) | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__zpAddr));
                    }
                    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_7) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__state 
                            = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_a_T)
                                ? 9U : 3U);
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_8) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__state = 0xbU;
                        __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo 
                            = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_9) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__state 
                            = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10)
                                ? 3U : 4U);
                        __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo 
                            = (0xffU & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1));
                    } else {
                        if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11)
                              ? (((((((((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_12) 
                                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_13)) 
                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_14)) 
                                        | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_6)) 
                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10)) 
                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_15)) 
                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_16)) 
                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_17)) 
                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_20)) 
                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_21)) 
                                 | (IData)(vlSelfRef.io_testEnable))
                              : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_38) 
                                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_100)
                                     ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73) 
                                        | (IData)(vlSelfRef.io_testEnable))
                                     : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37)
                                         ? (((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) 
                                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_105))) 
                                             & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_99)) 
                                            | (IData)(vlSelfRef.io_testEnable))
                                         : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41)
                                             ? (((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_103)) 
                                                 & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_39)) 
                                                | (IData)(vlSelfRef.io_testEnable))
                                             : (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_42) 
                                                 & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73)) 
                                                | (IData)(vlSelfRef.io_testEnable)))))))) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__state = 1U;
                        }
                        if ((1U & (~ (((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11) 
                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_31)) 
                                        | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_32)) 
                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33)) 
                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36)
                                          ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_54)
                                          : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37)
                                              ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_104)
                                              : (((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41)) 
                                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_43)) 
                                                 | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2))))))))) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo 
                                = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_7) 
                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_8))))) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_9) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi 
                                = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1) 
                                            >> 8U));
                        } else if ((1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_101)))) {
                            if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_100) {
                                if ((1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_55)))) {
                                    __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi 
                                        = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                                }
                            } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37) {
                                if ((1U & (~ ((((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) 
                                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)) 
                                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)) 
                                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34)) 
                                               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_39)) 
                                              | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_40)))))) {
                                    __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi 
                                        = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                                }
                            } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41) {
                                if ((1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_102)))) {
                                    __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi 
                                        = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                                }
                            } else if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_42) 
                                        & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0))) {
                                __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi 
                                    = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                            }
                        }
                    }
                }
                if ((((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_5) 
                        | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_7)) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_8)) 
                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_9)) 
                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_101))) {
                    if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0U;
                    }
                } else {
                    vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk13__DOT___GEN_106 
                        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34) 
                           | (IData)(vlSelfRef.io_testEnable));
                    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_100) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 1U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 2U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 3U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk13__DOT___GEN_106) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0U;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 1U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 2U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 3U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 4U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_39) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 5U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_40) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 6U;
                        } else if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_99) 
                                    | (IData)(vlSelfRef.io_testEnable))) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0U;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 1U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 2U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 3U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 4U;
                        } else if (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_39) 
                                    | (IData)(vlSelfRef.io_testEnable))) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0U;
                        }
                    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_42) {
                        if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 1U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 2U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 3U;
                        } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk13__DOT___GEN_106) {
                            __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0U;
                        }
                    } else if (vlSelfRef.io_testEnable) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__cycle = 0U;
                    }
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.io_testEnable) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN)) 
                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_3))))) {
            if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_4) {
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_107 
                    = (0xbU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode));
                if ((0xcU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode))) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__operand 
                        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
                } else if ((1U & (~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_44) 
                                     | (~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_45) 
                                           | (~ (((
                                                   ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_46) 
                                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_47)) 
                                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_48)) 
                                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_49)) 
                                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_50)) 
                                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_53)) 
                                                 | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_107)))))))))) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__operand 
                        = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                }
                if ((1U & (~ ((((((((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_44) 
                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_45)) 
                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_46)) 
                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_47)) 
                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_48)) 
                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_49)) 
                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_50)) 
                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_51)) 
                               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_52)) 
                              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_107))))) {
                    if ((9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode))) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__zpAddr 
                            = (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn) 
                                        + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX)));
                    } else if ((0xaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode))) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__zpAddr 
                            = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                    }
                }
            } else {
                vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk15__DOT___GEN_108 
                    = ((((((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_9) 
                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11)) 
                            | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_31)) 
                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_32)) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33)) 
                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36)) 
                        | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37)) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41));
                if ((1U & (~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_5) 
                              | (~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_7) 
                                    | (~ (((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_8) 
                                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk15__DOT___GEN_108)) 
                                            | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_42))) 
                                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_43)) 
                                          | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)))))))))) {
                    __Vdly__SkeletonTop__DOT__cpu__DOT__operand 
                        = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                }
                if ((1U & (~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_5) 
                              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_7))))) {
                    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_8) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__zpAddr 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__zpAddr)));
                    } else if ((1U & (~ ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk15__DOT___GEN_108) 
                                           | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_42))) 
                                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)) 
                                         | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)))))) {
                        __Vdly__SkeletonTop__DOT__cpu__DOT__zpAddr 
                            = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
                    }
                }
            }
        }
        vlSelfRef.SkeletonTop__DOT__debug__DOT__unnamedblk1__DOT___GEN_0 
            = ((IData)(vlSelfRef.SkeletonTop__DOT___bus_io_debugCs) 
               & (IData)(vlSelfRef.SkeletonTop__DOT___bus_io_debugWe));
        if (((IData)(vlSelfRef.SkeletonTop__DOT__debug__DOT__unnamedblk1__DOT___GEN_0) 
             & (IData)(vlSelfRef.SkeletonTop__DOT__debug__DOT___GEN))) {
            vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharOut 
                = vlSelfRef.SkeletonTop__DOT___bus_io_debugDataIn;
            vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharValid = 1U;
        } else {
            vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharValid = 0U;
        }
        __Vdly__SkeletonTop__DOT__debug__DOT__regHalt 
            = (((((IData)(vlSelfRef.SkeletonTop__DOT__debug__DOT__unnamedblk1__DOT___GEN_0) 
                  & (~ (IData)(vlSelfRef.SkeletonTop__DOT__debug__DOT___GEN))) 
                 & (1U == (IData)(vlSelfRef.SkeletonTop__DOT___bus_io_debugAddr))) 
                & (1U == (IData)(vlSelfRef.SkeletonTop__DOT___bus_io_debugDataIn))) 
               | (IData)(vlSelfRef.SkeletonTop__DOT__debug__DOT__regHalt));
        if ((1U & (~ (((IData)(vlSelfRef.io_testEnable) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN)) 
                      | (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_3)))))) {
            vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode 
                = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
        }
    }
    if (__VdlySet__SkeletonTop__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__Memory[__VdlyDim0__SkeletonTop__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__SkeletonTop__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagN = __Vdly__SkeletonTop__DOT__cpu__DOT__flagN;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagV = __Vdly__SkeletonTop__DOT__cpu__DOT__flagV;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagD = __Vdly__SkeletonTop__DOT__cpu__DOT__flagD;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagI = __Vdly__SkeletonTop__DOT__cpu__DOT__flagI;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagZ = __Vdly__SkeletonTop__DOT__cpu__DOT__flagZ;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__zpAddr = __Vdly__SkeletonTop__DOT__cpu__DOT__zpAddr;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC = __Vdly__SkeletonTop__DOT__cpu__DOT__regPC;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo = __Vdly__SkeletonTop__DOT__cpu__DOT__addrLo;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrHi = __Vdly__SkeletonTop__DOT__cpu__DOT__addrHi;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP = __Vdly__SkeletonTop__DOT__cpu__DOT__regSP;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC = __Vdly__SkeletonTop__DOT__cpu__DOT__flagC;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA = __Vdly__SkeletonTop__DOT__cpu__DOT__regA;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX = __Vdly__SkeletonTop__DOT__cpu__DOT__regX;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY = __Vdly__SkeletonTop__DOT__cpu__DOT__regY;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand = __Vdly__SkeletonTop__DOT__cpu__DOT__operand;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle = __Vdly__SkeletonTop__DOT__cpu__DOT__cycle;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__state = __Vdly__SkeletonTop__DOT__cpu__DOT__state;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__regHalt 
        = __Vdly__SkeletonTop__DOT__debug__DOT__regHalt;
    vlSelfRef.io_cpuPc = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC;
    vlSelfRef.SkeletonTop__DOT__io_cpuPc = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_pc 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr 
        = (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrHi) 
            << 8U) | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo));
    vlSelfRef.io_cpuS = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP;
    vlSelfRef.SkeletonTop__DOT__io_cpuS = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_sp 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_3 
        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryIn 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC;
    SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_2 
        = ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagD) 
             << 3U) | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagI) 
                       << 2U)) | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagZ) 
                                   << 1U) | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC)));
    vlSelfRef.io_cpuA = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
    vlSelfRef.SkeletonTop__DOT__io_cpuA = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_a 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA;
    vlSelfRef.io_cpuX = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX;
    vlSelfRef.SkeletonTop__DOT__io_cpuX = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_x 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX;
    vlSelfRef.io_cpuY = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY;
    vlSelfRef.SkeletonTop__DOT__io_cpuY = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_y 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_b 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_0 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_39 = 
        (4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_40 = 
        (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0 = 
        (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34 = 
        (3U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2 = 
        (2U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1 = 
        (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_state 
        = (0xfU & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41 = 
        (0xfU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_42 = 
        (0x10U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11 = 
        (3U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33 = 
        (0xcU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36 = 
        (0xdU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37 = 
        (0xeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_31 = 
        (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_32 = 
        (9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_4 = 
        (2U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_5 = 
        (8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_7 = 
        (4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_8 = 
        (0xaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_9 = 
        (0xbU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.io_debugCharValid = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharValid;
    vlSelfRef.SkeletonTop__DOT__io_debugCharValid = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharValid;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_charValid 
        = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharValid;
    vlSelfRef.io_debugHalt = vlSelfRef.SkeletonTop__DOT__debug__DOT__regHalt;
    vlSelfRef.SkeletonTop__DOT__io_debugHalt = vlSelfRef.SkeletonTop__DOT__debug__DOT__regHalt;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_halt 
        = vlSelfRef.SkeletonTop__DOT__debug__DOT__regHalt;
    vlSelfRef.io_debugCharOut = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharOut;
    vlSelfRef.SkeletonTop__DOT__io_debugCharOut = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharOut;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_charOut 
        = vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharOut;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_7 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_3;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_p 
        = (0x20U | ((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagN) 
                      << 7U) | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagV) 
                                << 6U)) | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagB) 
                                            << 4U) 
                                           | (IData)(SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_2))));
    SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_3 
        = (0x30U | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagN) 
                     << 7U) | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagV) 
                                << 6U) | (IData)(SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_2))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_35 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1) 
         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2));
    vlSelfRef.io_cpuState = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_state;
    vlSelfRef.SkeletonTop__DOT__io_cpuState = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_state;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_38 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_31) 
         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_32));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_18 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_7) 
         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_8) 
            | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_9)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN = (0U 
                                                  == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_3 = 
        (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state));
    vlSelfRef.io_cpuP = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_p;
    vlSelfRef.SkeletonTop__DOT__io_cpuP = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_p;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_19 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN) 
         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_3) 
            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_4) 
               | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_5) 
                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_18)))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_opcode 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_135 
        = (0xeaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_142 
        = (0xceU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_143 
        = (0xdeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_146 
        = (0xeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_147 
        = (0x1eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_150 
        = (0x4eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_151 
        = (0x5eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_140 
        = (0xc6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_141 
        = (0xd6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_144 
        = (6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_145 
        = (0x16U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_148 
        = (0x46U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_149 
        = (0x56U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_136 
        = (0xe6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_137 
        = (0xf6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_138 
        = (0xeeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_139 
        = (0xfeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_152 
        = (0x26U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_153 
        = (0x36U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_154 
        = (0x2eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_155 
        = (0x3eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_156 
        = (0x66U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_157 
        = (0x76U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_158 
        = (0x6eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_159 
        = (0x7eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_133 
        = (0x88U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_125 
        = (0xbaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_127 
        = (0xe8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_128 
        = (0xc8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_129 
        = (0xcaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_126 
        = (0x9aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_112 
        = (0x24U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_113 
        = (0x2cU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_110 
        = (0x2aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_111 
        = (0x6aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_108 
        = (0xaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_109 
        = (0x4aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94 
        = (0x20U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN 
        = (0xa9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_0 
        = (0xa5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_1 
        = (0xb5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_2 
        = (0xadU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_3 
        = (0xbdU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_4 
        = (0xb9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_5 
        = (0xa1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_6 
        = (0xb1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_114 
        = (0xaaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_115 
        = (0x8aU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_116 
        = (0xa8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_117 
        = (0x98U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64 
        = (0x4dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65 
        = (0x55U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66 
        = (0x5dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67 
        = (0x59U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68 
        = (0x41U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69 
        = (0x51U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_92 
        = (0x4cU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_93 
        = (0x6cU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99 
        = (0x58U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100 
        = (0x78U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101 
        = (0xb8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102 
        = (0xd8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103 
        = (0xf8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_9 
        = (0xb6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_10 
        = (0xaeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_11 
        = (0xbeU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_12 
        = (0xa0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_13 
        = (0xa4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_14 
        = (0xb4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_15 
        = (0xacU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_16 
        = (0xbcU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_62 
        = (0x49U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_63 
        = (0x45U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_72 
        = (0xcdU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_73 
        = (0xd5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_74 
        = (0xddU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_75 
        = (0xd9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_76 
        = (0xc1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_77 
        = (0xd1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_95 
        = (0x60U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_96 
        = (0x40U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_97 
        = (0x18U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_98 
        = (0x38U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42 
        = (0xfdU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43 
        = (0xf9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50 
        = (0x3dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51 
        = (0x39U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_86 
        = (0x50U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_87 
        = (0x70U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_88 
        = (0x90U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_89 
        = (0xb0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_90 
        = (0xd0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_91 
        = (0xf0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_7 
        = (0xa2U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_8 
        = (0xa6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_70 
        = (0xc9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_71 
        = (0xc5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_38 
        = (0xe9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_39 
        = (0xe5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_40 
        = (0xedU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_41 
        = (0xf5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_44 
        = (0xe1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_45 
        = (0xf1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_46 
        = (0x29U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_47 
        = (0x25U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_48 
        = (0x2dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_49 
        = (0x35U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_52 
        = (0x21U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_53 
        = (0x31U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_84 
        = (0x10U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_85 
        = (0x30U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_32 
        = (0x6dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_33 
        = (0x75U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_34 
        = (0x7dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_35 
        = (0x79U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_36 
        = (0x61U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_37 
        = (0x71U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_56 
        = (0xdU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_57 
        = (0x15U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_58 
        = (0x1dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_59 
        = (0x19U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_60 
        = (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_61 
        = (0x11U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_30 
        = (0x69U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_31 
        = (0x65U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_54 
        = (9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_55 
        = (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_19 
        = (0x8dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_20 
        = (0x9dU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_21 
        = (0x99U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_22 
        = (0x81U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_23 
        = (0x91U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_24 
        = (0x86U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_25 
        = (0x96U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_26 
        = (0x8eU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_17 
        = (0x85U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_18 
        = (0x95U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_27 
        = (0x84U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_28 
        = (0x94U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_29 
        = (0x8cU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30 = 
        (0x28U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23 = 
        (0x68U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25 = 
        (8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22 = 
        (0x48U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78 
        = (0xe0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79 
        = (0xe4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80 
        = (0xecU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_81 
        = (0xc0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_82 
        = (0xc4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_83 
        = (0xccU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_140) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_141));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_144) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_145));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_148) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_149));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_136) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_137) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_138) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_139))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_152) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_153) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_154) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_155))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_160 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_156) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_157) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_158) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_159))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_161 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_127) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_128) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_129) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_133))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_130 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_112) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_113));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_108) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_109));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_0) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_1) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_2) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_3) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_4) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_5) 
                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_6))))))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_114) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_115));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_116) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_117));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_92) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_93));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_134 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_12) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_13) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_14) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_15) 
                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_16)))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_62) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_63));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_95) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_96));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_97) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_98));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_7) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_8));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_70) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_71));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_38) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_39));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_40) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_41));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_44) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_45));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_46) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_47));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_48) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_49));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_52) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_53));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_84) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_85));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_30) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_31));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_54) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_55));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_17) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_18));
    __VdfgRegularize_h7cd686f0_0_0 = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_27) 
                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_28) 
                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_29)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_107 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_105 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_106 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_119 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_104 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22;
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23));
    __VdfgRegularize_h7cd686f0_0_1 = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_81) 
                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_82) 
                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_83)));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_142) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_143) 
                    | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_146) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_147) 
                             | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_150) 
                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_151) 
                                      | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22) 
                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_160))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_118 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_110) 
              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_111)));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_125) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_126))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_121 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69)))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_132 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_9) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_10) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_11))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_166 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_4) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_9) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_10) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_11) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_134))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_163 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_86) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_87) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_88) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_89) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_90) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_91)))))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_32) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_33) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_34) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_35) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_36) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_37)))))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_56) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_57) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_58) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_59) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_60) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_61)))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_122 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_19) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_20) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_21) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_22) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_23) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_24) 
                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_25) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_26) 
                                   | (IData)(__VdfgRegularize_h7cd686f0_0_0))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_162 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_119));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_164 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_72) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_73) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_74) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_75) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_76) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_77) 
                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79) 
                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80) 
                                      | (IData)(__VdfgRegularize_h7cd686f0_0_1)))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_131 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_118) 
           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_130));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_167 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_127) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_128) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_129) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_133) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_135))))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_163) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_92) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_93) 
                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94))));
    SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10) 
              | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43) 
                       | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27) 
                          | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11) 
                             | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50) 
                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51) 
                                      | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25) 
                                         | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeY 
        = ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124) 
               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_132))) 
           & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_134) 
              | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_122) 
                     | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_7) 
                        | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_32) 
                           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_33) 
                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_34) 
                                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_35) 
                                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_36) 
                                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_37) 
                                          | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10) 
                                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_40) 
                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_41) 
                                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42) 
                                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43) 
                                                         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_44) 
                                                            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_45) 
                                                               | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11) 
                                                                  | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_48) 
                                                                     | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_49) 
                                                                        | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50) 
                                                                           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51) 
                                                                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_52) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_53) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_12) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_56) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_57) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_58) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_59) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_60) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_61) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_2) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_6) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_72) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_73) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_74) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_75) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_76) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_77) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_81) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_82) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_83) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_1) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_86) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_87) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_88) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_89) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_90) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_91) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_95) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_96) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_97) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_98) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_5) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_119) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_0) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_110) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_111) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_130) 
                                                                                | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                 & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_116) 
                    | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_117) 
                           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_125) 
                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_126) 
                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_127))))) 
                       & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_128) 
                          | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_129)) 
                             & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_133))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_123 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_132) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_12) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_13) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_14) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_15) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_16) 
                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_122)))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_168 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103) 
                             | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_162))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeX 
        = ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124)) 
           & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_132) 
              | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_134) 
                     | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_3) 
                        | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_19) 
                           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_20) 
                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_21) 
                                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_22) 
                                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_23) 
                                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_24) 
                                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_25) 
                                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_26) 
                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_27) 
                                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_28) 
                                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_29) 
                                                         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_30) 
                                                            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_31) 
                                                               | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_32) 
                                                                  | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_33) 
                                                                     | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_34) 
                                                                        | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_35) 
                                                                           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_36) 
                                                                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_37) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_38) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_39) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_40) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_41) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_44) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_45) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_46) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_47) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_48) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_49) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_52) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_53) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_54) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_55) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_56) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_57) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_58) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_59) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_60) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_61) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_62) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_63) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_70) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_71) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_72) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_73) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_74) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_75) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_76) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_77) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_81) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_82) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_83) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_84) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_85) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_86) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_87) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_88) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_89) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_90) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_91) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_92) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_93) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9) 
                                                                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25) 
                                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30) 
                                                                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_131))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                 & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_114) 
                    | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_115) 
                           | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_21))) 
                       & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_125) 
                          | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_126)) 
                             & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_127) 
                                | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_128)) 
                                   & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_129))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_120 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32) 
           | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9) 
              | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102) 
                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103) 
                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22)))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_165 
        = ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_62) 
              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_63) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65) 
                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66) 
                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67) 
                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69) 
                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_164))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeY 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeY;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_addressMode 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN)
            ? 1U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_0)
                     ? 2U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_1)
                              ? 3U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_2)
                                       ? 5U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_3)
                                                ? 6U
                                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_4)
                                                    ? 7U
                                                    : 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_5)
                                                     ? 9U
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_6)
                                                      ? 0xaU
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_7)
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_8)
                                                        ? 2U
                                                        : 
                                                       ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_9)
                                                         ? 4U
                                                         : 
                                                        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_10)
                                                          ? 5U
                                                          : 
                                                         ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_11)
                                                           ? 7U
                                                           : 
                                                          ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_12)
                                                            ? 1U
                                                            : 
                                                           ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_13)
                                                             ? 2U
                                                             : 
                                                            ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_14)
                                                              ? 3U
                                                              : 
                                                             ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_15)
                                                               ? 5U
                                                               : 
                                                              ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_16)
                                                                ? 6U
                                                                : 
                                                               ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_17)
                                                                 ? 2U
                                                                 : 
                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_18)
                                                                  ? 3U
                                                                  : 
                                                                 ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_19)
                                                                   ? 5U
                                                                   : 
                                                                  ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_20)
                                                                    ? 6U
                                                                    : 
                                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_21)
                                                                     ? 7U
                                                                     : 
                                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_22)
                                                                      ? 9U
                                                                      : 
                                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_23)
                                                                       ? 0xaU
                                                                       : 
                                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_24)
                                                                        ? 2U
                                                                        : 
                                                                       ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_25)
                                                                         ? 4U
                                                                         : 
                                                                        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_26)
                                                                          ? 5U
                                                                          : 
                                                                         ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_27)
                                                                           ? 2U
                                                                           : 
                                                                          ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_28)
                                                                            ? 3U
                                                                            : 
                                                                           ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_29)
                                                                             ? 5U
                                                                             : 
                                                                            ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_30)
                                                                              ? 1U
                                                                              : 
                                                                             ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_31)
                                                                               ? 2U
                                                                               : 
                                                                              ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_32)
                                                                                ? 5U
                                                                                : 
                                                                               ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_33)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_34)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_35)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_36)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_37)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_38)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_39)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_40)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_41)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_44)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_45)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_46)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_47)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_48)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_49)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_52)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_53)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_54)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_55)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_56)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_57)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_58)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_59)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_60)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_61)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_62)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_63)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_70)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_71)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_72)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_73)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_74)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_75)
                                                                                 ? 7U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_76)
                                                                                 ? 9U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_77)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_81)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_82)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_83)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_163)
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_92)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_93)
                                                                                 ? 8U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_168)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_118)
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_112)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_113)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_167)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_136)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_137)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_138)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_139)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_140)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_141)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_142)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_143)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_144)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_145)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_146)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_147)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_148)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_149)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_150)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_151)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_152)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_153)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_154)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_155)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_156)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_157)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_158)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_159)
                                                                                 ? 6U
                                                                                 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp 
        = (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124) 
            | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_123))
            ? 0xdU : ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_31)
                       ? 0U : (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_10) 
                                | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_28) 
                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42) 
                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43) 
                                         | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_27)))))
                                ? 1U : (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_11) 
                                         | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_26) 
                                            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50) 
                                               | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51) 
                                                  | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_25)))))
                                         ? 2U : ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_24)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_121)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_164)
                                                    ? 0xbU
                                                    : 
                                                   (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_32) 
                                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_168))
                                                     ? 0xdU
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_108)
                                                      ? 5U
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_109)
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_110)
                                                        ? 7U
                                                        : 
                                                       ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_111)
                                                         ? 8U
                                                         : 
                                                        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_130)
                                                          ? 0xcU
                                                          : 
                                                         ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_167)
                                                           ? 0xdU
                                                           : 
                                                          ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_23)
                                                            ? 9U
                                                            : 
                                                           (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_13) 
                                                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_142) 
                                                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_143)))
                                                             ? 0xaU
                                                             : 
                                                            (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_14) 
                                                              | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_146) 
                                                                 | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_147)))
                                                              ? 5U
                                                              : 
                                                             (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_15) 
                                                               | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_150) 
                                                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_151)))
                                                               ? 6U
                                                               : 
                                                              ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_22)
                                                                ? 7U
                                                                : 
                                                               ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_160)
                                                                 ? 8U
                                                                 : 0xdU))))))))))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeX 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeX;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeA 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124) 
           | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_123)) 
              & ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_30) 
                 | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_121) 
                    | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_164) 
                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_120))) 
                       & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23) 
                          | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_119)) 
                             & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_118) 
                                | ((~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_130) 
                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_114))) 
                                   & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_115) 
                                      | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_116)) 
                                         & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_117))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_updateFlags 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_166) 
           | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_122)) 
              & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_165) 
                 | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_120)) 
                    & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23) 
                       | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_119)) 
                          & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_131) 
                             | ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_8) 
                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_116) 
                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_117) 
                                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_125) 
                                         | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_126)) 
                                            & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_161) 
                                               | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_135)) 
                                                  & (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18)))))))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_166)
            ? 1U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_122)
                     ? 2U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_165)
                              ? 0U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_163)
                                       ? 3U : (((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_16) 
                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94) 
                                                   | (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_9)))
                                                ? 4U
                                                : (
                                                   ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_17) 
                                                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99) 
                                                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100) 
                                                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101) 
                                                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102) 
                                                                | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103))))))
                                                    ? 6U
                                                    : 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_162)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_131)
                                                      ? 0U
                                                      : 
                                                     ((IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_29)
                                                       ? 9U
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_161)
                                                        ? 0xaU
                                                        : 
                                                       ((1U 
                                                         & ((~ (IData)(SkeletonTop__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_hda09c56b_0_18)) 
                                                            | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_135)))
                                                         ? 7U
                                                         : 0xbU)))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_addressMode;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_1 
        = (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_2 
        = (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_6 
        = (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_7 
        = (6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_8 
        = (7U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_9 
        = (8U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_10 
        = (9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_11 
        = (0xaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_12 
        = (0xbU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_3 
        = (2U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_4 
        = (3U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_5 
        = (4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_writeA 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeA;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_updateFlags 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_updateFlags;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_instrType 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10 = 
        (2U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_21 = 
        (5U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_6 = 
        (4U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_14 = 
        (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_12 = 
        (7U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_13 = 
        (1U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_15 = 
        (6U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_16 = 
        (9U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_17 = 
        (0xaU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_20 = 
        (3U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_a_T 
        = (0xbU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_operation 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp;
    SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_3) 
           | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_4) 
              | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_5)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_29 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_12) 
         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_13) 
            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_14) 
               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_6))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_24 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_17) 
         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_20));
    SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_a_T)
            ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand)
            : (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78) 
                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79) 
                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80)))
                ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX)
                : ((IData)(__VdfgRegularize_h7cd686f0_0_1)
                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY)
                    : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_26 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_16) 
         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_24));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_a 
        = SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a;
    SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0 
        = ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
           & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN 
        = SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_27 = 
        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_15) 
         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_26));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___sum_T_1 
        = (0x1ffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN) 
                     + ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_0) 
                        + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff 
        = (0x1ffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN) 
                     - (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_0)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_writeEnable 
        = ((~ (IData)(vlSelfRef.io_testEnable)) & (
                                                   (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_19)) 
                                                   & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11)
                                                       ? 
                                                      ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_29)) 
                                                       & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10) 
                                                          | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_27)) 
                                                             & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_21) 
                                                                & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22) 
                                                                   | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23)) 
                                                                      & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25)))))))
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_38) 
                                                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33)
                                                           ? 
                                                          ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0) 
                                                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1))
                                                           : 
                                                          ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36)) 
                                                           & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37) 
                                                              & ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)) 
                                                                 & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_35) 
                                                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34))))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_28 = 
        (1U & ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_21)) 
               | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_27)));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___diff_T_4 
        = (0x1ffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff) 
                     - (1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC)))));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuRw 
        = (1U & (~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_writeEnable)));
    vlSelfRef.SkeletonTop__DOT___cpu_io_writeEnable 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_writeEnable;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address 
        = ((IData)(vlSelfRef.io_testEnable) ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
            : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN)
                ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                    ? 0xfffcU : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                  ? 0xfffdU : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))
                : (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_3) 
                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_4) 
                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_5)))
                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                    : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_7)
                        ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr)
                        : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_8)
                            ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__zpAddr)
                            : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_9)
                                ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__zpAddr)
                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11)
                                    ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_29)
                                        ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                        : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10)
                                            ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr)
                                            : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_28)
                                                ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22)
                                                    ? 
                                                   (0x100U 
                                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                    : 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23)
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_3))
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25)
                                                      ? 
                                                     (0x100U 
                                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_30)
                                                       ? 
                                                      (0x100U 
                                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___io_address_T_3))
                                                       : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC))))))))
                                    : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_38)
                                        ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr)
                                        : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33)
                                            ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                                                ? (0x100U 
                                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                    ? 
                                                   (0x100U 
                                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                    : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))
                                            : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36)
                                                ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                                                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                    : 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)
                                                      ? 
                                                     (0x100U 
                                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                      : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC))))
                                                : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37)
                                                    ? 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                                                     ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                     : 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                      ? 
                                                     (0x100U 
                                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)
                                                       ? 
                                                      (0x100U 
                                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34)
                                                        ? 
                                                       (0x100U 
                                                        | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                        : 
                                                       ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_39)
                                                         ? 0xfffeU
                                                         : 
                                                        ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_40)
                                                          ? 0xffffU
                                                          : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))))))
                                                    : 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_41)
                                                     ? 
                                                    ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                                                      ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                       ? 
                                                      (0x100U 
                                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)
                                                        ? 
                                                       (0x100U 
                                                        | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                        : 
                                                       ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34)
                                                         ? 
                                                        (0x100U 
                                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP))
                                                         : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)))))
                                                     : 
                                                    ((1U 
                                                      & ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_42)) 
                                                         | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)))
                                                      ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                      : 
                                                     ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                       ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr)
                                                       : 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)
                                                        ? 
                                                       (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrHi) 
                                                         << 8U) 
                                                        | (0xffU 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo))))
                                                        : (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC))))))))))))))));
    if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_1) {
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryOut 
            = (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___sum_T_1) 
                     >> 8U));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_overflow 
            = (((1U & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) == (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                         >> 7U))) & 
               ((1U & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) != (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___sum_T_1) 
                                         >> 7U))));
    } else if (vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_2) {
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryOut 
            = (1U & (~ ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___diff_T_4) 
                        >> 8U)));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_overflow 
            = (((1U & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) != (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                         >> 7U))) & 
               ((1U & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                       >> 7U)) != (1U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___diff_T_4) 
                                         >> 7U))));
    } else {
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryOut 
            = (1U & ((~ (IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6)) 
                     & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_6)
                         ? ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                            >> 7U) : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_7)
                                       ? (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)
                                       : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_8)
                                           ? ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                              >> 7U)
                                           : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_9)
                                               ? (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)
                                               : ((~ 
                                                   ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_10) 
                                                    | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_11))) 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff) 
                                                       >> 8U)) 
                                                     & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_12)))))))));
        vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_overflow 
            = ((~ ((IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6) 
                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_6) 
                      | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_7) 
                         | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_8) 
                            | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_9) 
                               | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_10) 
                                  | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_11) 
                                     | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_12))))))))) 
               & ((0xcU == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp)) 
                  & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                     >> 6U)));
    }
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0x7fU 
                                               & (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)))) 
                              << 0x39U) | (((QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC)) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (0x7fU 
                                                                & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                   >> 1U)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)))) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                      ^ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                          | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand)) 
                                                                         << 0x18U) 
                                                                        | ((IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___diff_T_4) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___sum_T_1))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0x7fU 
                                                & (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)))) 
                               << 0x39U) | (((QData)((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC)) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0x7fU 
                                                                 & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                    >> 1U)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)))) 
                                                   << 0x29U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                       ^ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                                           | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand)) 
                                                                          << 0x18U) 
                                                                         | ((IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                                                            << 0x10U)) 
                                                                        | ((0xff00U 
                                                                            & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___diff_T_4) 
                                                                               << 8U)) 
                                                                           | (0xffU 
                                                                              & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___sum_T_1))))))))))) 
                             >> 0x20U));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[0U] 
        = __Vtemp_1[0U];
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[1U] 
        = __Vtemp_1[1U];
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[2U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                       << 0x18U) | 
                                      ((IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                       << 0x10U)) | 
                                     ((0xff00U & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff) 
                                                  << 8U)) 
                                      | (0xffU & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                  - (IData)(1U))))))) 
                    << 0x10U) | (QData)((IData)(((0xff00U 
                                                  & (((IData)(1U) 
                                                      + (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC) 
                                                     << 7U) 
                                                    | (0x7fU 
                                                       & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                          >> 1U))))))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[3U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand) 
                                        << 0x18U) | 
                                       ((IData)(SkeletonTop__DOT__cpu__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_0) 
                                        << 0x10U)) 
                                      | ((0xff00U & 
                                          ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff) 
                                           << 8U)) 
                                         | (0xffU & 
                                            ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                             - (IData)(1U))))))) 
                     << 0x10U) | (QData)((IData)(((0xff00U 
                                                   & (((IData)(1U) 
                                                       + (IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a)) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC) 
                                                      << 7U) 
                                                     | (0x7fU 
                                                        & ((IData)(SkeletonTop__DOT__cpu__DOT____Vcellinp__alu__io_a) 
                                                           >> 1U))))))) 
                   >> 0x20U));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramAddr 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address;
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__R0_data 
        = vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__Memory
        [vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address];
    vlSelfRef.SkeletonTop__DOT___cpu_io_address = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address;
    vlSelfRef.SkeletonTop__DOT___ram_ext_R0_data = 
        vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__Memory
        [vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address];
    vlSelfRef.SkeletonTop__DOT___bus_io_ramAddr = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugAddr 
        = (0xfU & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs 
        = ((0xffdfU < (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address)) 
           & (0xfffU != (0xfffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address) 
                                   >> 4U))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_carryOut 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryOut;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_overflow 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_overflow;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_negative 
        = (1U & (vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[
                 (3U & (((IData)(7U) + VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U)) 
                        >> 5U))] >> (0x1fU & ((IData)(7U) 
                                              + VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U)))));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_result 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U)))
                      ? 0U : (vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U))))) 
                    | (vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13[
                       (3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp), 3U)))));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuAddr 
        = vlSelfRef.SkeletonTop__DOT___cpu_io_address;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramDataOut 
        = vlSelfRef.SkeletonTop__DOT___ram_ext_R0_data;
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__R0_addr 
        = vlSelfRef.SkeletonTop__DOT___bus_io_ramAddr;
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__W0_addr 
        = vlSelfRef.SkeletonTop__DOT___bus_io_ramAddr;
    vlSelfRef.SkeletonTop__DOT___bus_io_debugAddr = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugAddr;
    vlSelfRef.SkeletonTop__DOT__debug__DOT___GEN = 
        (0U == (IData)(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugAddr));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__isDebugRange 
        = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs;
    vlSelfRef.SkeletonTop__DOT___bus_io_debugCs = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramWe 
        = ((~ (IData)(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs)) 
           & (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_writeEnable));
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugWe 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_writeEnable) 
           & (IData)(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_negative 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_negative;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_result 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_result;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_zero 
        = (0U == (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_result));
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut 
        = (((IData)(vlSelfRef.io_testEnable) | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_19))
            ? 0U : (0xffU & ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_11)
                              ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_29)
                                  ? 0U : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_10)
                                           ? ((IData)(__VdfgRegularize_h7cd686f0_0_0)
                                               ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY)
                                               : (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_24) 
                                                   | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_25) 
                                                      | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_26)))
                                                   ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX)
                                                   : 
                                                  (((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_17) 
                                                    | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_19) 
                                                       | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_18) 
                                                          | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_20) 
                                                             | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_21) 
                                                                | ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_22) 
                                                                   | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_23)))))))
                                                    ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA)
                                                    : 0U)))
                                           : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_28)
                                               ? 0U
                                               : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_22)
                                                   ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA)
                                                   : 
                                                  ((1U 
                                                    & ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_25)) 
                                                       | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_23)))
                                                    ? 0U
                                                    : (IData)(SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_3))))))
                              : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_31)
                                  ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA)
                                  : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_32)
                                      ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_result)
                                      : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_33)
                                          ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0)
                                              ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC) 
                                                 >> 8U)
                                              : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                                  ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                  : 0U))
                                          : ((1U & 
                                              ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_36) 
                                               | ((~ (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_37)) 
                                                  | (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_0))))
                                              ? 0U : 
                                             ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_1)
                                               ? ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC) 
                                                  >> 8U)
                                               : ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_2)
                                                   ? (IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC)
                                                   : 
                                                  ((IData)(vlSelfRef.SkeletonTop__DOT__cpu__DOT___GEN_34)
                                                    ? (IData)(SkeletonTop__DOT__cpu__DOT____VdfgRegularize_h6471f877_0_3)
                                                    : 0U))))))))));
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_addr 
        = vlSelfRef.SkeletonTop__DOT___bus_io_debugAddr;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_dataOut 
        = (((IData)(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs) 
            & (IData)(vlSelfRef.SkeletonTop__DOT__debug__DOT___GEN))
            ? (IData)(vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharOut)
            : 0U);
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_cs = vlSelfRef.SkeletonTop__DOT___bus_io_debugCs;
    vlSelfRef.SkeletonTop__DOT___bus_io_ramWe = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramWe;
    vlSelfRef.SkeletonTop__DOT___bus_io_debugWe = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugWe;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT___alu_io_zero 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_zero;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramDataIn 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugDataIn 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT___cpu_io_dataOut = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT___bus_io_debugDataIn 
        = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT___bus_io_ramDataIn = vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT___debug_io_dataOut = vlSelfRef.SkeletonTop__DOT__debug__DOT__io_dataOut;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuDataIn 
        = ((IData)(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs)
            ? (IData)(vlSelfRef.SkeletonTop__DOT__debug__DOT__io_dataOut)
            : vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__Memory
           [vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address]);
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__W0_en 
        = vlSelfRef.SkeletonTop__DOT___bus_io_ramWe;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_we = vlSelfRef.SkeletonTop__DOT___bus_io_debugWe;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuDataOut 
        = vlSelfRef.SkeletonTop__DOT___cpu_io_dataOut;
    vlSelfRef.SkeletonTop__DOT__debug__DOT__io_dataIn 
        = vlSelfRef.SkeletonTop__DOT___bus_io_debugDataIn;
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__W0_data 
        = vlSelfRef.SkeletonTop__DOT___bus_io_ramDataIn;
    vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugDataOut 
        = vlSelfRef.SkeletonTop__DOT___debug_io_dataOut;
    vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn = vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuDataIn;
    vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataIn 
        = vlSelfRef.SkeletonTop__DOT___bus_io_cpuDataIn;
}

void VSkeletonTop___024root___eval_triggers__act(VSkeletonTop___024root* vlSelf);

bool VSkeletonTop___024root___eval_phase__act(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_phase__act\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSkeletonTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VSkeletonTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSkeletonTop___024root___eval_phase__nba(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_phase__nba\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSkeletonTop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSkeletonTop___024root___dump_triggers__ico(VSkeletonTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSkeletonTop___024root___dump_triggers__nba(VSkeletonTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSkeletonTop___024root___dump_triggers__act(VSkeletonTop___024root* vlSelf);
#endif  // VL_DEBUG

void VSkeletonTop___024root___eval(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VSkeletonTop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/Users/david.e.freeman/Projects/chisel-6502/sim/../generated/SkeletonTop.sv", 2077, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VSkeletonTop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VSkeletonTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/david.e.freeman/Projects/chisel-6502/sim/../generated/SkeletonTop.sv", 2077, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VSkeletonTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/david.e.freeman/Projects/chisel-6502/sim/../generated/SkeletonTop.sv", 2077, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VSkeletonTop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VSkeletonTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSkeletonTop___024root___eval_debug_assertions(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_debug_assertions\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_testEnable & 0xfeU)))) {
        Verilated::overWidthError("io_testEnable");}
}
#endif  // VL_DEBUG
