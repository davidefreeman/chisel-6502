// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU6502Testable.h for the primary calling header

#ifndef VERILATED_VCPU6502TESTABLE___024ROOT_H_
#define VERILATED_VCPU6502TESTABLE___024ROOT_H_  // guard

#include "verilated.h"


class VCPU6502Testable__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU6502Testable___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_dataIn,7,0);
        VL_OUT8(io_dataOut,7,0);
        VL_OUT8(io_writeEnable,0,0);
        VL_IN8(io_irq,0,0);
        VL_IN8(io_nmi,0,0);
        VL_IN8(io_rdy,0,0);
        VL_IN8(io_test_enable,0,0);
        VL_IN8(io_test_a,7,0);
        VL_IN8(io_test_x,7,0);
        VL_IN8(io_test_y,7,0);
        VL_IN8(io_test_s,7,0);
        VL_IN8(io_test_p,7,0);
        VL_OUT8(io_debug_a,7,0);
        VL_OUT8(io_debug_x,7,0);
        VL_OUT8(io_debug_y,7,0);
        VL_OUT8(io_debug_sp,7,0);
        VL_OUT8(io_debug_p,7,0);
        VL_OUT8(io_debug_opcode,7,0);
        VL_OUT8(io_debug_state,3,0);
        VL_OUT8(io_cycleCount,7,0);
        CData/*7:0*/ CPU6502Testable__DOT___alu_io_result;
        CData/*0:0*/ CPU6502Testable__DOT___alu_io_carryOut;
        CData/*0:0*/ CPU6502Testable__DOT___alu_io_negative;
        CData/*0:0*/ CPU6502Testable__DOT___alu_io_overflow;
        CData/*3:0*/ CPU6502Testable__DOT___decoder_io_aluOp;
        CData/*3:0*/ CPU6502Testable__DOT___decoder_io_addressMode;
        CData/*3:0*/ CPU6502Testable__DOT___decoder_io_instrType;
        CData/*0:0*/ CPU6502Testable__DOT___decoder_io_writeA;
        CData/*0:0*/ CPU6502Testable__DOT___decoder_io_writeX;
        CData/*0:0*/ CPU6502Testable__DOT___decoder_io_writeY;
        CData/*0:0*/ CPU6502Testable__DOT___decoder_io_updateFlags;
        CData/*7:0*/ CPU6502Testable__DOT__regA;
        CData/*7:0*/ CPU6502Testable__DOT__regX;
        CData/*7:0*/ CPU6502Testable__DOT__regY;
        CData/*7:0*/ CPU6502Testable__DOT__regSP;
        CData/*0:0*/ CPU6502Testable__DOT__flagN;
        CData/*0:0*/ CPU6502Testable__DOT__flagV;
        CData/*0:0*/ CPU6502Testable__DOT__flagB;
        CData/*0:0*/ CPU6502Testable__DOT__flagD;
        CData/*0:0*/ CPU6502Testable__DOT__flagI;
        CData/*0:0*/ CPU6502Testable__DOT__flagZ;
        CData/*0:0*/ CPU6502Testable__DOT__flagC;
        CData/*4:0*/ CPU6502Testable__DOT__state;
        CData/*3:0*/ CPU6502Testable__DOT__cycle;
        CData/*7:0*/ CPU6502Testable__DOT__cycleCount;
        CData/*7:0*/ CPU6502Testable__DOT__opcode;
        CData/*7:0*/ CPU6502Testable__DOT__operand;
        CData/*7:0*/ CPU6502Testable__DOT__addrLo;
        CData/*7:0*/ CPU6502Testable__DOT__addrHi;
        CData/*7:0*/ CPU6502Testable__DOT__zpAddr;
        CData/*0:0*/ CPU6502Testable__DOT___GEN;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_0;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_1;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_2;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_3;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_4;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_5;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_6;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_7;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_8;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_9;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_11;
    };
    struct {
        CData/*0:0*/ CPU6502Testable__DOT___GEN_12;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_13;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_15;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_22;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_23;
        CData/*7:0*/ CPU6502Testable__DOT___io_address_T_3;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_28;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_30;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_31;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_32;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_33;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_35;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_36;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_37;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_38;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_39;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_40;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_41;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_42;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_43;
        CData/*0:0*/ CPU6502Testable__DOT___GEN_44;
        CData/*7:0*/ CPU6502Testable__DOT____Vcellinp__alu__io_a;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT___GEN_45;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT___GEN_46;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT___GEN_47;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT___GEN_48;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT___GEN_49;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT___GEN_50;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT___GEN_51;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT___GEN_52;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT___GEN_53;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT___GEN_54;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_55;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_60;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66;
        CData/*7:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67;
        CData/*7:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68;
        CData/*7:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70;
        CData/*7:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71;
        CData/*7:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_2;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72;
        CData/*7:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_4;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73;
        CData/*7:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_6;
        CData/*7:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_74;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_75;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_76;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_78;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_79;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_80;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_81;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_82;
    };
    struct {
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_84;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_85;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_86;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_87;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_88;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_89;
        CData/*7:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue;
        CData/*7:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT___GEN_90;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_91;
        CData/*4:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_94;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_97;
        VlWide<3>/*79:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_99;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_102;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_103;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_104;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_105;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_106;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_107;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk13__DOT___GEN_108;
        CData/*0:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_109;
        CData/*7:0*/ CPU6502Testable__DOT____VdfgRegularize_h6471f877_0_3;
        CData/*0:0*/ CPU6502Testable__DOT__alu__DOT____VdfgRegularize_hc81e6bf2_0_6;
        CData/*0:0*/ __VdfgRegularize_h7cd686f0_0_0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(io_address,15,0);
        VL_IN16(io_test_pc,15,0);
        VL_OUT16(io_debug_pc,15,0);
        SData/*15:0*/ CPU6502Testable__DOT__regPC;
        SData/*15:0*/ CPU6502Testable__DOT__effectiveAddr;
        SData/*15:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92;
        VlWide<8>/*255:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_98;
        SData/*15:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_100;
        SData/*15:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_101;
        SData/*15:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr;
        SData/*15:0*/ CPU6502Testable__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1;
        SData/*8:0*/ CPU6502Testable__DOT__alu__DOT___sum_T_1;
        SData/*8:0*/ CPU6502Testable__DOT__alu__DOT__cmpDiff;
        SData/*8:0*/ CPU6502Testable__DOT__alu__DOT___diff_T_4;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCPU6502Testable__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU6502Testable___024root(VCPU6502Testable__Syms* symsp, const char* v__name);
    ~VCPU6502Testable___024root();
    VL_UNCOPYABLE(VCPU6502Testable___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
