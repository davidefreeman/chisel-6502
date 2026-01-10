// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU6502Testable__Syms.h"


VL_ATTR_COLD void VCPU6502Testable___024root__trace_init_sub__TOP__0(VCPU6502Testable___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root__trace_init_sub__TOP__0\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"io_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"io_dataIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"io_dataOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+45,0,"io_writeEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"io_irq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"io_nmi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"io_test_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"io_test_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"io_test_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"io_test_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"io_test_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"io_test_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"io_test_p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"io_debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"io_debug_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,0,"io_debug_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"io_debug_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"io_debug_sp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"io_debug_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"io_debug_opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"io_debug_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"io_cycleCount",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("CPU6502Testable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"io_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"io_dataIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"io_dataOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+45,0,"io_writeEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"io_irq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"io_nmi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_rdy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"io_test_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"io_test_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+51,0,"io_test_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"io_test_x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"io_test_y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"io_test_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"io_test_p",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"io_debug_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+57,0,"io_debug_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,0,"io_debug_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"io_debug_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"io_debug_sp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"io_debug_p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"io_debug_opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+63,0,"io_debug_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"io_cycleCount",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"regA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"regX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"regY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"regSP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"regPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+6,0,"flagN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"flagV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"flagB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"flagD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"flagI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"flagZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"flagC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"cycleCount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"addrLo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"addrHi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"effectiveAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"zpAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"io_carryIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"io_operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"io_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"io_carryOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"io_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"io_negative",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"cmpDiff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"io_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"io_aluOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"io_addressMode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"io_instrType",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+32,0,"io_writeA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_writeX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"io_writeY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"io_updateFlags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"indexedAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"indexedAddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"transferValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"incDecResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU6502Testable___024root__trace_init_top(VCPU6502Testable___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root__trace_init_top\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCPU6502Testable___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPU6502Testable___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VCPU6502Testable___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU6502Testable___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU6502Testable___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPU6502Testable___024root__trace_register(VCPU6502Testable___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root__trace_register\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VCPU6502Testable___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VCPU6502Testable___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VCPU6502Testable___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VCPU6502Testable___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPU6502Testable___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root__trace_const_0\n"); );
    // Init
    VCPU6502Testable___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU6502Testable___024root*>(voidSelf);
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VCPU6502Testable___024root__trace_full_0_sub_0(VCPU6502Testable___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU6502Testable___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root__trace_full_0\n"); );
    // Init
    VCPU6502Testable___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU6502Testable___024root*>(voidSelf);
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU6502Testable___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU6502Testable___024root__trace_full_0_sub_0(VCPU6502Testable___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU6502Testable___024root__trace_full_0_sub_0\n"); );
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.CPU6502Testable__DOT__regA),8);
    bufp->fullCData(oldp+2,(vlSelfRef.CPU6502Testable__DOT__regX),8);
    bufp->fullCData(oldp+3,(vlSelfRef.CPU6502Testable__DOT__regY),8);
    bufp->fullCData(oldp+4,(vlSelfRef.CPU6502Testable__DOT__regSP),8);
    bufp->fullSData(oldp+5,(vlSelfRef.CPU6502Testable__DOT__regPC),16);
    bufp->fullBit(oldp+6,(vlSelfRef.CPU6502Testable__DOT__flagN));
    bufp->fullBit(oldp+7,(vlSelfRef.CPU6502Testable__DOT__flagV));
    bufp->fullBit(oldp+8,(vlSelfRef.CPU6502Testable__DOT__flagB));
    bufp->fullBit(oldp+9,(vlSelfRef.CPU6502Testable__DOT__flagD));
    bufp->fullBit(oldp+10,(vlSelfRef.CPU6502Testable__DOT__flagI));
    bufp->fullBit(oldp+11,(vlSelfRef.CPU6502Testable__DOT__flagZ));
    bufp->fullBit(oldp+12,(vlSelfRef.CPU6502Testable__DOT__flagC));
    bufp->fullCData(oldp+13,(vlSelfRef.CPU6502Testable__DOT__state),5);
    bufp->fullCData(oldp+14,(vlSelfRef.CPU6502Testable__DOT__cycle),4);
    bufp->fullCData(oldp+15,(vlSelfRef.CPU6502Testable__DOT__cycleCount),8);
    bufp->fullCData(oldp+16,(vlSelfRef.CPU6502Testable__DOT__opcode),8);
    bufp->fullCData(oldp+17,(vlSelfRef.CPU6502Testable__DOT__operand),8);
    bufp->fullCData(oldp+18,(vlSelfRef.CPU6502Testable__DOT__addrLo),8);
    bufp->fullCData(oldp+19,(vlSelfRef.CPU6502Testable__DOT__addrHi),8);
    bufp->fullSData(oldp+20,(vlSelfRef.CPU6502Testable__DOT__effectiveAddr),16);
    bufp->fullCData(oldp+21,(vlSelfRef.CPU6502Testable__DOT__zpAddr),8);
    bufp->fullCData(oldp+22,(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a),8);
    bufp->fullCData(oldp+23,(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp),4);
    bufp->fullCData(oldp+24,(vlSelfRef.CPU6502Testable__DOT___alu_io_result),8);
    bufp->fullBit(oldp+25,(vlSelfRef.CPU6502Testable__DOT___alu_io_carryOut));
    bufp->fullBit(oldp+26,((0U == (IData)(vlSelfRef.CPU6502Testable__DOT___alu_io_result))));
    bufp->fullBit(oldp+27,(vlSelfRef.CPU6502Testable__DOT___alu_io_negative));
    bufp->fullBit(oldp+28,(((0U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))
                             ? (((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                        >> 7U)) == 
                                 (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                        >> 7U))) & 
                                ((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                        >> 7U)) != 
                                 (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___sum_T_1) 
                                        >> 7U)))) : 
                            ((1U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp))
                              ? (((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                         >> 7U)) != 
                                  (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                         >> 7U))) & 
                                 ((1U & ((IData)(vlSelfRef.CPU6502Testable__DOT____Vcellinp__alu__io_a) 
                                         >> 7U)) != 
                                  (1U & ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT___diff_T_4) 
                                         >> 7U)))) : 
                             ((~ ((IData)(vlSelfRef.CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6) 
                                  | ((5U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                     | ((6U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                        | ((7U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                           | ((8U == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                              | ((9U 
                                                  == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                                 | ((0xaU 
                                                     == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                                    | (0xbU 
                                                       == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)))))))))) 
                              & ((0xcU == (IData)(vlSelfRef.CPU6502Testable__DOT___decoder_io_aluOp)) 
                                 & ((IData)(vlSelfRef.CPU6502Testable__DOT__operand) 
                                    >> 6U)))))));
    bufp->fullSData(oldp+29,(vlSelfRef.CPU6502Testable__DOT__alu__DOT__cmpDiff),9);
    bufp->fullCData(oldp+30,(vlSelfRef.CPU6502Testable__DOT___decoder_io_addressMode),4);
    bufp->fullCData(oldp+31,(vlSelfRef.CPU6502Testable__DOT___decoder_io_instrType),4);
    bufp->fullBit(oldp+32,(vlSelfRef.CPU6502Testable__DOT___decoder_io_writeA));
    bufp->fullBit(oldp+33,(vlSelfRef.CPU6502Testable__DOT___decoder_io_writeX));
    bufp->fullBit(oldp+34,(vlSelfRef.CPU6502Testable__DOT___decoder_io_writeY));
    bufp->fullBit(oldp+35,(vlSelfRef.CPU6502Testable__DOT___decoder_io_updateFlags));
    bufp->fullSData(oldp+36,(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr),16);
    bufp->fullSData(oldp+37,(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1),16);
    bufp->fullCData(oldp+38,(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue),8);
    bufp->fullCData(oldp+39,(vlSelfRef.CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult),8);
    bufp->fullBit(oldp+40,(vlSelfRef.clock));
    bufp->fullBit(oldp+41,(vlSelfRef.reset));
    bufp->fullSData(oldp+42,(vlSelfRef.io_address),16);
    bufp->fullCData(oldp+43,(vlSelfRef.io_dataIn),8);
    bufp->fullCData(oldp+44,(vlSelfRef.io_dataOut),8);
    bufp->fullBit(oldp+45,(vlSelfRef.io_writeEnable));
    bufp->fullBit(oldp+46,(vlSelfRef.io_irq));
    bufp->fullBit(oldp+47,(vlSelfRef.io_nmi));
    bufp->fullBit(oldp+48,(vlSelfRef.io_rdy));
    bufp->fullBit(oldp+49,(vlSelfRef.io_test_enable));
    bufp->fullSData(oldp+50,(vlSelfRef.io_test_pc),16);
    bufp->fullCData(oldp+51,(vlSelfRef.io_test_a),8);
    bufp->fullCData(oldp+52,(vlSelfRef.io_test_x),8);
    bufp->fullCData(oldp+53,(vlSelfRef.io_test_y),8);
    bufp->fullCData(oldp+54,(vlSelfRef.io_test_s),8);
    bufp->fullCData(oldp+55,(vlSelfRef.io_test_p),8);
    bufp->fullSData(oldp+56,(vlSelfRef.io_debug_pc),16);
    bufp->fullCData(oldp+57,(vlSelfRef.io_debug_a),8);
    bufp->fullCData(oldp+58,(vlSelfRef.io_debug_x),8);
    bufp->fullCData(oldp+59,(vlSelfRef.io_debug_y),8);
    bufp->fullCData(oldp+60,(vlSelfRef.io_debug_sp),8);
    bufp->fullCData(oldp+61,(vlSelfRef.io_debug_p),8);
    bufp->fullCData(oldp+62,(vlSelfRef.io_debug_opcode),8);
    bufp->fullCData(oldp+63,(vlSelfRef.io_debug_state),4);
    bufp->fullCData(oldp+64,(vlSelfRef.io_cycleCount),8);
}
