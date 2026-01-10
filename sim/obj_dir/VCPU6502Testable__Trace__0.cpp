// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU6502Testable__Syms.h"


void VCPU6502Testable___024root__trace_chg_0_sub_0(VCPU6502Testable___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPU6502Testable___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root__trace_chg_0\n"); );
    // Init
    VCPU6502Testable___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU6502Testable___024root*>(voidSelf);
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPU6502Testable___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VCPU6502Testable___024root__trace_chg_0_sub_0(VCPU6502Testable___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root__trace_chg_0_sub_0\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.CPU6502Testable__DOT__regA),8);
        bufp->chgCData(oldp+1,(vlSelfRef.CPU6502Testable__DOT__regX),8);
        bufp->chgCData(oldp+2,(vlSelfRef.CPU6502Testable__DOT__regY),8);
        bufp->chgCData(oldp+3,(vlSelfRef.CPU6502Testable__DOT__regSP),8);
        bufp->chgSData(oldp+4,(vlSelfRef.CPU6502Testable__DOT__regPC),16);
        bufp->chgBit(oldp+5,(vlSelfRef.CPU6502Testable__DOT__flagN));
        bufp->chgBit(oldp+6,(vlSelfRef.CPU6502Testable__DOT__flagV));
        bufp->chgBit(oldp+7,(vlSelfRef.CPU6502Testable__DOT__flagB));
        bufp->chgBit(oldp+8,(vlSelfRef.CPU6502Testable__DOT__flagD));
        bufp->chgBit(oldp+9,(vlSelfRef.CPU6502Testable__DOT__flagI));
        bufp->chgBit(oldp+10,(vlSelfRef.CPU6502Testable__DOT__flagZ));
        bufp->chgBit(oldp+11,(vlSelfRef.CPU6502Testable__DOT__flagC));
        bufp->chgCData(oldp+12,(vlSelfRef.CPU6502Testable__DOT__state),5);
        bufp->chgCData(oldp+13,(vlSelfRef.CPU6502Testable__DOT__cycle),4);
        bufp->chgCData(oldp+14,(vlSelfRef.CPU6502Testable__DOT__cycleCount),8);
        bufp->chgCData(oldp+15,(vlSelfRef.CPU6502Testable__DOT__opcode),8);
        bufp->chgCData(oldp+16,(vlSelfRef.CPU6502Testable__DOT__operand),8);
        bufp->chgCData(oldp+17,(vlSelfRef.CPU6502Testable__DOT__addrLo),8);
        bufp->chgCData(oldp+18,(vlSelfRef.CPU6502Testable__DOT__addrHi),8);
        bufp->chgSData(oldp+19,(vlSelfRef.CPU6502Testable__DOT__effectiveAddr),16);
        bufp->chgCData(oldp+20,(vlSelfRef.CPU6502Testable__DOT__zpAddr),8);
        bufp->chgCData(oldp+21,(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a),8);
        bufp->chgCData(oldp+22,(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp),4);
        bufp->chgCData(oldp+23,(vlSelfRef.CPU6502Testable__DOT___alu_io_result),8);
        bufp->chgBit(oldp+24,(vlSelfRef.CPU6502Testable__DOT___alu_io_carryOut));
        bufp->chgBit(oldp+25,((0U == (IData)(vlSelfRef.CPU6502Testable__DOT___alu_io_result))));
        bufp->chgBit(oldp+26,(vlSelfRef.CPU6502Testable__DOT___alu_io_negative));
        bufp->chgBit(oldp+27,(((0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))
                                ? (((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                           >> 7U)) 
                                    == (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                              >> 7U))) 
                                   & ((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                             >> 7U)) 
                                      != (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___sum_T_1) 
                                                >> 7U))))
                                : ((1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))
                                    ? (((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                               >> 7U)) 
                                        != (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                                  >> 7U))) 
                                       & ((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                                 >> 7U)) 
                                          != (1U & 
                                              ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___diff_T_4) 
                                               >> 7U))))
                                    : ((~ ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6) 
                                           | ((5U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                              | ((6U 
                                                  == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                                 | ((7U 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                                    | ((8U 
                                                        == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                                       | ((9U 
                                                           == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                                          | ((0xaU 
                                                              == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                                             | (0xbU 
                                                                == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)))))))))) 
                                       & ((0xcU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                          & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                             >> 6U)))))));
        bufp->chgSData(oldp+28,(vlSelfRef.CPU6502Testable__DOT__alu__DOT__cmpDiff),9);
        bufp->chgCData(oldp+29,(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode),4);
        bufp->chgCData(oldp+30,(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType),4);
        bufp->chgBit(oldp+31,(vlSelfRef.CPU6502Testable__DOT___decoder_io_writeA));
        bufp->chgBit(oldp+32,(vlSelfRef.CPU6502Testable__DOT___decoder_io_writeX));
        bufp->chgBit(oldp+33,(vlSelfRef.CPU6502Testable__DOT___decoder_io_writeY));
        bufp->chgBit(oldp+34,(vlSelfRef.CPU6502Testable__DOT___decoder_io_updateFlags));
        bufp->chgSData(oldp+35,(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr),16);
        bufp->chgSData(oldp+36,(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1),16);
        bufp->chgCData(oldp+37,(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue),8);
        bufp->chgCData(oldp+38,(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult),8);
    }
    bufp->chgBit(oldp+39,(vlSelfRef.clock));
    bufp->chgBit(oldp+40,(vlSelfRef.reset));
    bufp->chgSData(oldp+41,(vlSelfRef.io_address),16);
    bufp->chgCData(oldp+42,(vlSelfRef.io_dataIn),8);
    bufp->chgCData(oldp+43,(vlSelfRef.io_dataOut),8);
    bufp->chgBit(oldp+44,(vlSelfRef.io_writeEnable));
    bufp->chgBit(oldp+45,(vlSelfRef.io_irq));
    bufp->chgBit(oldp+46,(vlSelfRef.io_nmi));
    bufp->chgBit(oldp+47,(vlSelfRef.io_rdy));
    bufp->chgBit(oldp+48,(vlSelfRef.io_test_enable));
    bufp->chgSData(oldp+49,(vlSelfRef.io_test_pc),16);
    bufp->chgCData(oldp+50,(vlSelfRef.io_test_a),8);
    bufp->chgCData(oldp+51,(vlSelfRef.io_test_x),8);
    bufp->chgCData(oldp+52,(vlSelfRef.io_test_y),8);
    bufp->chgCData(oldp+53,(vlSelfRef.io_test_s),8);
    bufp->chgCData(oldp+54,(vlSelfRef.io_test_p),8);
    bufp->chgSData(oldp+55,(vlSelfRef.io_debug_pc),16);
    bufp->chgCData(oldp+56,(vlSelfRef.io_debug_a),8);
    bufp->chgCData(oldp+57,(vlSelfRef.io_debug_x),8);
    bufp->chgCData(oldp+58,(vlSelfRef.io_debug_y),8);
    bufp->chgCData(oldp+59,(vlSelfRef.io_debug_sp),8);
    bufp->chgCData(oldp+60,(vlSelfRef.io_debug_p),8);
    bufp->chgCData(oldp+61,(vlSelfRef.io_debug_opcode),8);
    bufp->chgCData(oldp+62,(vlSelfRef.io_debug_state),4);
    bufp->chgCData(oldp+63,(vlSelfRef.io_cycleCount),8);
}

void VCPU6502Testable___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root__trace_cleanup\n"); );
    // Init
    VCPU6502Testable___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU6502Testable___024root*>(voidSelf);
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
