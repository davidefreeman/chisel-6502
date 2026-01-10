// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSkeletonTop__Syms.h"


void VSkeletonTop___024root__trace_chg_0_sub_0(VSkeletonTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSkeletonTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root__trace_chg_0\n"); );
    // Init
    VSkeletonTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSkeletonTop___024root*>(voidSelf);
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSkeletonTop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSkeletonTop___024root__trace_chg_0_sub_0(VSkeletonTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root__trace_chg_0_sub_0\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clock));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgBit(oldp+2,(vlSelfRef.io_testEnable));
    bufp->chgSData(oldp+3,(vlSelfRef.io_testPc),16);
    bufp->chgCData(oldp+4,(vlSelfRef.io_testA),8);
    bufp->chgCData(oldp+5,(vlSelfRef.io_testX),8);
    bufp->chgCData(oldp+6,(vlSelfRef.io_testY),8);
    bufp->chgCData(oldp+7,(vlSelfRef.io_testS),8);
    bufp->chgCData(oldp+8,(vlSelfRef.io_testP),8);
    bufp->chgCData(oldp+9,(vlSelfRef.io_debugCharOut),8);
    bufp->chgBit(oldp+10,(vlSelfRef.io_debugCharValid));
    bufp->chgBit(oldp+11,(vlSelfRef.io_debugHalt));
    bufp->chgSData(oldp+12,(vlSelfRef.io_cpuPc),16);
    bufp->chgCData(oldp+13,(vlSelfRef.io_cpuA),8);
    bufp->chgCData(oldp+14,(vlSelfRef.io_cpuX),8);
    bufp->chgCData(oldp+15,(vlSelfRef.io_cpuY),8);
    bufp->chgCData(oldp+16,(vlSelfRef.io_cpuS),8);
    bufp->chgCData(oldp+17,(vlSelfRef.io_cpuP),8);
    bufp->chgCData(oldp+18,(vlSelfRef.io_cpuState),4);
    bufp->chgBit(oldp+19,(vlSelfRef.SkeletonTop__DOT__clock));
    bufp->chgBit(oldp+20,(vlSelfRef.SkeletonTop__DOT__reset));
    bufp->chgBit(oldp+21,(vlSelfRef.SkeletonTop__DOT__io_testEnable));
    bufp->chgSData(oldp+22,(vlSelfRef.SkeletonTop__DOT__io_testPc),16);
    bufp->chgCData(oldp+23,(vlSelfRef.SkeletonTop__DOT__io_testA),8);
    bufp->chgCData(oldp+24,(vlSelfRef.SkeletonTop__DOT__io_testX),8);
    bufp->chgCData(oldp+25,(vlSelfRef.SkeletonTop__DOT__io_testY),8);
    bufp->chgCData(oldp+26,(vlSelfRef.SkeletonTop__DOT__io_testS),8);
    bufp->chgCData(oldp+27,(vlSelfRef.SkeletonTop__DOT__io_testP),8);
    bufp->chgCData(oldp+28,(vlSelfRef.SkeletonTop__DOT__io_debugCharOut),8);
    bufp->chgBit(oldp+29,(vlSelfRef.SkeletonTop__DOT__io_debugCharValid));
    bufp->chgBit(oldp+30,(vlSelfRef.SkeletonTop__DOT__io_debugHalt));
    bufp->chgSData(oldp+31,(vlSelfRef.SkeletonTop__DOT__io_cpuPc),16);
    bufp->chgCData(oldp+32,(vlSelfRef.SkeletonTop__DOT__io_cpuA),8);
    bufp->chgCData(oldp+33,(vlSelfRef.SkeletonTop__DOT__io_cpuX),8);
    bufp->chgCData(oldp+34,(vlSelfRef.SkeletonTop__DOT__io_cpuY),8);
    bufp->chgCData(oldp+35,(vlSelfRef.SkeletonTop__DOT__io_cpuS),8);
    bufp->chgCData(oldp+36,(vlSelfRef.SkeletonTop__DOT__io_cpuP),8);
    bufp->chgCData(oldp+37,(vlSelfRef.SkeletonTop__DOT__io_cpuState),4);
    bufp->chgSData(oldp+38,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuAddr),16);
    bufp->chgCData(oldp+39,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuDataOut),8);
    bufp->chgCData(oldp+40,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuDataIn),8);
    bufp->chgBit(oldp+41,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_cpuRw));
    bufp->chgSData(oldp+42,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramAddr),16);
    bufp->chgCData(oldp+43,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramDataOut),8);
    bufp->chgCData(oldp+44,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramDataIn),8);
    bufp->chgBit(oldp+45,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_ramWe));
    bufp->chgCData(oldp+46,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugAddr),4);
    bufp->chgCData(oldp+47,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugDataOut),8);
    bufp->chgCData(oldp+48,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugDataIn),8);
    bufp->chgBit(oldp+49,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugCs));
    bufp->chgBit(oldp+50,(vlSelfRef.SkeletonTop__DOT__bus__DOT__io_debugWe));
    bufp->chgBit(oldp+51,(vlSelfRef.SkeletonTop__DOT__bus__DOT__isDebugRange));
    bufp->chgBit(oldp+52,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__clock));
    bufp->chgBit(oldp+53,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__reset));
    bufp->chgSData(oldp+54,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_address),16);
    bufp->chgCData(oldp+55,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataIn),8);
    bufp->chgCData(oldp+56,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_dataOut),8);
    bufp->chgBit(oldp+57,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_writeEnable));
    bufp->chgBit(oldp+58,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_enable));
    bufp->chgSData(oldp+59,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_pc),16);
    bufp->chgCData(oldp+60,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_a),8);
    bufp->chgCData(oldp+61,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_x),8);
    bufp->chgCData(oldp+62,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_y),8);
    bufp->chgCData(oldp+63,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_s),8);
    bufp->chgCData(oldp+64,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_test_p),8);
    bufp->chgSData(oldp+65,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_pc),16);
    bufp->chgCData(oldp+66,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_a),8);
    bufp->chgCData(oldp+67,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_x),8);
    bufp->chgCData(oldp+68,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_y),8);
    bufp->chgCData(oldp+69,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_sp),8);
    bufp->chgCData(oldp+70,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_p),8);
    bufp->chgCData(oldp+71,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__io_debug_state),4);
    bufp->chgCData(oldp+72,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regA),8);
    bufp->chgCData(oldp+73,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regX),8);
    bufp->chgCData(oldp+74,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regY),8);
    bufp->chgCData(oldp+75,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regSP),8);
    bufp->chgSData(oldp+76,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__regPC),16);
    bufp->chgBit(oldp+77,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagN));
    bufp->chgBit(oldp+78,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagV));
    bufp->chgBit(oldp+79,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagB));
    bufp->chgBit(oldp+80,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagD));
    bufp->chgBit(oldp+81,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagI));
    bufp->chgBit(oldp+82,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagZ));
    bufp->chgBit(oldp+83,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__flagC));
    bufp->chgCData(oldp+84,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__state),5);
    bufp->chgCData(oldp+85,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__cycle),4);
    bufp->chgCData(oldp+86,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__opcode),8);
    bufp->chgCData(oldp+87,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__operand),8);
    bufp->chgCData(oldp+88,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrLo),8);
    bufp->chgCData(oldp+89,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__addrHi),8);
    bufp->chgSData(oldp+90,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__effectiveAddr),16);
    bufp->chgCData(oldp+91,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__zpAddr),8);
    bufp->chgCData(oldp+92,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_a),8);
    bufp->chgCData(oldp+93,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_b),8);
    bufp->chgBit(oldp+94,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryIn));
    bufp->chgCData(oldp+95,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_operation),4);
    bufp->chgCData(oldp+96,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_result),8);
    bufp->chgBit(oldp+97,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryOut));
    bufp->chgBit(oldp+98,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_zero));
    bufp->chgBit(oldp+99,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_negative));
    bufp->chgBit(oldp+100,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__io_overflow));
    bufp->chgSData(oldp+101,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff),9);
    bufp->chgCData(oldp+102,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_opcode),8);
    bufp->chgCData(oldp+103,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp),4);
    bufp->chgCData(oldp+104,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_addressMode),4);
    bufp->chgCData(oldp+105,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType),4);
    bufp->chgBit(oldp+106,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeA));
    bufp->chgBit(oldp+107,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeX));
    bufp->chgBit(oldp+108,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeY));
    bufp->chgBit(oldp+109,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_updateFlags));
    bufp->chgSData(oldp+110,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr),16);
    bufp->chgSData(oldp+111,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1),16);
    bufp->chgCData(oldp+112,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue),8);
    bufp->chgCData(oldp+113,(vlSelfRef.SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult),8);
    bufp->chgBit(oldp+114,(vlSelfRef.SkeletonTop__DOT__debug__DOT__clock));
    bufp->chgBit(oldp+115,(vlSelfRef.SkeletonTop__DOT__debug__DOT__reset));
    bufp->chgCData(oldp+116,(vlSelfRef.SkeletonTop__DOT__debug__DOT__io_addr),4);
    bufp->chgCData(oldp+117,(vlSelfRef.SkeletonTop__DOT__debug__DOT__io_dataIn),8);
    bufp->chgCData(oldp+118,(vlSelfRef.SkeletonTop__DOT__debug__DOT__io_dataOut),8);
    bufp->chgBit(oldp+119,(vlSelfRef.SkeletonTop__DOT__debug__DOT__io_cs));
    bufp->chgBit(oldp+120,(vlSelfRef.SkeletonTop__DOT__debug__DOT__io_we));
    bufp->chgCData(oldp+121,(vlSelfRef.SkeletonTop__DOT__debug__DOT__io_charOut),8);
    bufp->chgBit(oldp+122,(vlSelfRef.SkeletonTop__DOT__debug__DOT__io_charValid));
    bufp->chgBit(oldp+123,(vlSelfRef.SkeletonTop__DOT__debug__DOT__io_halt));
    bufp->chgCData(oldp+124,(vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharOut),8);
    bufp->chgBit(oldp+125,(vlSelfRef.SkeletonTop__DOT__debug__DOT__regCharValid));
    bufp->chgBit(oldp+126,(vlSelfRef.SkeletonTop__DOT__debug__DOT__regHalt));
    bufp->chgSData(oldp+127,(vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__R0_addr),16);
    bufp->chgBit(oldp+128,(vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__R0_en));
    bufp->chgBit(oldp+129,(vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__R0_clk));
    bufp->chgCData(oldp+130,(vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__R0_data),8);
    bufp->chgSData(oldp+131,(vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__W0_addr),16);
    bufp->chgBit(oldp+132,(vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__W0_en));
    bufp->chgBit(oldp+133,(vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__W0_clk));
    bufp->chgCData(oldp+134,(vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__W0_data),8);
}

void VSkeletonTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root__trace_cleanup\n"); );
    // Init
    VSkeletonTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSkeletonTop___024root*>(voidSelf);
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
