// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSkeletonTop.h for the primary calling header

#include "VSkeletonTop__pch.h"
#include "VSkeletonTop___024root.h"

VL_ATTR_COLD void VSkeletonTop___024root___eval_static(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_static\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VSkeletonTop___024root___eval_initial__TOP(VSkeletonTop___024root* vlSelf);

VL_ATTR_COLD void VSkeletonTop___024root___eval_initial(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_initial\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VSkeletonTop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VSkeletonTop___024root___eval_initial__TOP(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_initial__TOP\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SkeletonTop__DOT__ram_ext__DOT__R0_en = 1U;
}

VL_ATTR_COLD void VSkeletonTop___024root___eval_final(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_final\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSkeletonTop___024root___dump_triggers__stl(VSkeletonTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSkeletonTop___024root___eval_phase__stl(VSkeletonTop___024root* vlSelf);

VL_ATTR_COLD void VSkeletonTop___024root___eval_settle(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_settle\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VSkeletonTop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/david.e.freeman/Projects/chisel-6502/sim/../generated/SkeletonTop.sv", 2077, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSkeletonTop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSkeletonTop___024root___dump_triggers__stl(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___dump_triggers__stl\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VSkeletonTop___024root___ico_sequent__TOP__0(VSkeletonTop___024root* vlSelf);

VL_ATTR_COLD void VSkeletonTop___024root___eval_stl(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_stl\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VSkeletonTop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VSkeletonTop___024root___eval_triggers__stl(VSkeletonTop___024root* vlSelf);

VL_ATTR_COLD bool VSkeletonTop___024root___eval_phase__stl(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___eval_phase__stl\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSkeletonTop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VSkeletonTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSkeletonTop___024root___dump_triggers__ico(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___dump_triggers__ico\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VSkeletonTop___024root___dump_triggers__act(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___dump_triggers__act\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VSkeletonTop___024root___dump_triggers__nba(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___dump_triggers__nba\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VSkeletonTop___024root___ctor_var_reset(VSkeletonTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSkeletonTop___024root___ctor_var_reset\n"); );
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_testEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14533764798647965253ull);
    vlSelf->io_testPc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11491943063704958592ull);
    vlSelf->io_testA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16718876916888274190ull);
    vlSelf->io_testX = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7363172678030237956ull);
    vlSelf->io_testY = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4549607813730108077ull);
    vlSelf->io_testS = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5138740521616648151ull);
    vlSelf->io_testP = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6891666498800929409ull);
    vlSelf->io_debugCharOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2302237002427841620ull);
    vlSelf->io_debugCharValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16138840937297265938ull);
    vlSelf->io_debugHalt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6692770815765495031ull);
    vlSelf->io_cpuPc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9601577532700728229ull);
    vlSelf->io_cpuA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14434501956761230745ull);
    vlSelf->io_cpuX = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11003047491838500673ull);
    vlSelf->io_cpuY = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13390820913753900097ull);
    vlSelf->io_cpuS = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5770706085952310549ull);
    vlSelf->io_cpuP = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3105119712523160251ull);
    vlSelf->io_cpuState = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13189593366713793041ull);
    vlSelf->SkeletonTop__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7397593746496770708ull);
    vlSelf->SkeletonTop__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13087699975209422887ull);
    vlSelf->SkeletonTop__DOT__io_testEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11678688207212546425ull);
    vlSelf->SkeletonTop__DOT__io_testPc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11674051535555584994ull);
    vlSelf->SkeletonTop__DOT__io_testA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6232638248752753502ull);
    vlSelf->SkeletonTop__DOT__io_testX = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12968098924276158156ull);
    vlSelf->SkeletonTop__DOT__io_testY = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7953047907092980198ull);
    vlSelf->SkeletonTop__DOT__io_testS = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4063681740685833407ull);
    vlSelf->SkeletonTop__DOT__io_testP = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11231051254487430427ull);
    vlSelf->SkeletonTop__DOT__io_debugCharOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1612173649532655332ull);
    vlSelf->SkeletonTop__DOT__io_debugCharValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5540058324999756862ull);
    vlSelf->SkeletonTop__DOT__io_debugHalt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9444599674737944739ull);
    vlSelf->SkeletonTop__DOT__io_cpuPc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17920337209138693141ull);
    vlSelf->SkeletonTop__DOT__io_cpuA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2142290350139655914ull);
    vlSelf->SkeletonTop__DOT__io_cpuX = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5471617093882391684ull);
    vlSelf->SkeletonTop__DOT__io_cpuY = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7401179601952779504ull);
    vlSelf->SkeletonTop__DOT__io_cpuS = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5451603999987942310ull);
    vlSelf->SkeletonTop__DOT__io_cpuP = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6941825300336444679ull);
    vlSelf->SkeletonTop__DOT__io_cpuState = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13999529348356236000ull);
    vlSelf->SkeletonTop__DOT___ram_ext_R0_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6142891114445644135ull);
    vlSelf->SkeletonTop__DOT___debug_io_dataOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8014766889128829509ull);
    vlSelf->SkeletonTop__DOT___bus_io_cpuDataIn = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17648961238707971169ull);
    vlSelf->SkeletonTop__DOT___bus_io_ramAddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16930678776441684421ull);
    vlSelf->SkeletonTop__DOT___bus_io_ramDataIn = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11986431801201636543ull);
    vlSelf->SkeletonTop__DOT___bus_io_ramWe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2409742997976935920ull);
    vlSelf->SkeletonTop__DOT___bus_io_debugAddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17088086077203192184ull);
    vlSelf->SkeletonTop__DOT___bus_io_debugDataIn = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13079377239281790125ull);
    vlSelf->SkeletonTop__DOT___bus_io_debugCs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4244124969087429361ull);
    vlSelf->SkeletonTop__DOT___bus_io_debugWe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11334582743429227130ull);
    vlSelf->SkeletonTop__DOT___cpu_io_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2255381864887055862ull);
    vlSelf->SkeletonTop__DOT___cpu_io_dataOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18081068074610290151ull);
    vlSelf->SkeletonTop__DOT___cpu_io_writeEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1022381302227603574ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1137156725306040527ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16524735274692772693ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9724932892907587398ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_dataIn = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6142743608208221211ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_dataOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17740879056103764081ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_writeEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4444354298321578493ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_test_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18235110787326139824ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_test_pc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6576739328732082026ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_test_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11885669768978083726ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_test_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9912682848732435985ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_test_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1735040829463366427ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_test_s = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7690401960817167043ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_test_p = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15089235860854666368ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_debug_pc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2766267967816583777ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_debug_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16664729551709880871ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_debug_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13308983130610167219ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_debug_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10471949670509475671ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_debug_sp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12349827533765636889ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_debug_p = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4044066630408392550ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__io_debug_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14019940282957688689ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___alu_io_result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13192819860366999705ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___alu_io_carryOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5639813459996921929ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___alu_io_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8108031337724223110ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___alu_io_negative = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1031648067814123559ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___alu_io_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13900381987601452304ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___decoder_io_aluOp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10243939088687835720ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___decoder_io_addressMode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6051586012725813397ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___decoder_io_instrType = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7254543564616531967ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___decoder_io_writeA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3008609386950942312ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___decoder_io_writeX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6153873590918985740ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___decoder_io_writeY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11640312107118534505ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___decoder_io_updateFlags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4381566257427681953ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__regA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18309049879264970210ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__regX = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8890399445057947277ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__regY = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6684840717633628376ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__regSP = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5590585363329745841ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__regPC = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6632051112934543306ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__flagN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4204576809380786893ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__flagV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17150587655163196644ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__flagB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9974370120351564645ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__flagD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14481793367434002134ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__flagI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2045880242455365999ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__flagZ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4217479333866244294ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__flagC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10910906524391625743ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7262316516806393204ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__cycle = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1353203998806298669ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__opcode = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16495268069015833077ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__operand = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15936033026460847445ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__addrLo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5985481823381026408ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__addrHi = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2336190900868073781ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__effectiveAddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1806287833449958130ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__zpAddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11647814030110814428ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___alu_io_a_T = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4375833532146106064ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3754959409479559956ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7821423980600633492ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12808521022132725217ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6797459160833750334ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10622839498573170151ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2752783836893447780ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12949812265306686706ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 777584530465440837ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8129037949538111473ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10842134484774151624ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10461968444619507057ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17076409381988109905ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11397438470088272271ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11640101916491748825ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11663094759034109771ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8667313605817734078ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14613424944582996410ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8934454032682948009ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8957446875225419802ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2942891726250147608ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6204329168412476316ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1811763695178232948ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1834756537720708739ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17285719458213842279ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17528382904617317649ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___io_address_T_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7890336482454821707ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17551375747159924451ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11872404835259842161ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12115068281663301803ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9119287128446935559ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9142279970989537522ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9384943417392906819ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10323909042611441551ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___io_address_T_7 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1905108928154912483ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7329612027314275398ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10591049469476730333ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10614042312019071171ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7618261158802690047ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5177734846522718920ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5200727689065139177ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_37 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2204946535848787153ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2447609982252253499ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17898572902745463247ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_40 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9762800826331014236ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3748245677355645150ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT___GEN_42 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7345267356593398295ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15635832343778033332ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_44 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3806475723919428462ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16300121583866917502ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_46 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12463932451174841135ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3628294148732981592ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_48 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14444018823303856607ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2614662203445373984ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4260624801110901101ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5939099704974555310ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1738347926903382477ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT___GEN_53 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16160119012114855863ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_54 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6861303728794207846ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16418223452548204250ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12919675676596759429ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_57 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16092790647108995086ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_58 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12594242871157481409ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6491365250532173067ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_60 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 819830002397850369ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_61 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7687481636184455788ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_62 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4188933860232924824ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_63 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16418370818022024157ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_64 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9566948947155483025ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15768026300156067020ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1610246473526378296ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_66 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17972926416566200269ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1777635086990569837ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_67 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11760213494010302703ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15786258836792557268ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_68 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17647493611126989696ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___incDecResult_T_6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1802399121856673906ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_69 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6068401171203986348ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_70 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2225832151294825115ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14455269109083916760ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_72 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7603847238217250708ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_73 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13804924591217738435ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_74 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9690519254509261863ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_75 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14392362347496413834ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_76 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11412249592632120033ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_77 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17024474523634454545ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_78 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4092664336633674584ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_79 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9429166265980576361ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_80 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 46827540876018277ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5197092587379233584ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_82 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3305318582919256400ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_83 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 741598590447154758ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_84 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16731241528241875491ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16515127057377943620ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___GEN_86 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10121873370900964757ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__transferValue = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17783242903806080717ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk6__DOT__incDecResult = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13234980431763564297ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk7__DOT___GEN_87 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10157703522782522409ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk8__DOT___GEN_88 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16471190572148532503ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_89 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17913227769522814191ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_90 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 100602546311036554ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_91 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11406792788982327725ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_92 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12696756806098713860ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_93 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17820330075472507968ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8124362742128842870ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_95, __VscopeHash, 15337456872646170143ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk9__DOT___GEN_96, __VscopeHash, 11146682766903963625ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_97 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12081595309071116330ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_98 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 737371722193866866ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_99 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14174859483216375430ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_100 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15420070724632673212ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT___GEN_101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14346069982059076976ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk11__DOT__indexedAddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5851903461709728558ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT__indexedAddr_1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11198745960764264851ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7673205081583166218ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_103 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6039765749353434093ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_104 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2867352606291807679ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk12__DOT___GEN_105 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5414651235184580760ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk10__DOT__unnamedblk13__DOT___GEN_106 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5454583947685051880ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk14__DOT___GEN_107 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6934823417044510347ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk1__DOT__unnamedblk15__DOT___GEN_108 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17146641899033187933ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->SkeletonTop__DOT__cpu__DOT__unnamedblk16__DOT___RANDOM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13056191968044861581ull);
    }
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_opcode = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18260323681932782637ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_aluOp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12610186400848345619ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_addressMode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9465275903508406487ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_instrType = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12867910059838350252ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1693854188991601080ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9889356864416943924ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_writeY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7358164701403729806ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT__io_updateFlags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12555933996270359249ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 89115518743829834ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17901490234978613595ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12726811053334599720ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13127187536652877897ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13440879836874141133ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12415906876941431849ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10360648606257440372ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14929288236756016681ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 588451765904831219ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13068518425623234365ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4431129847133582670ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6912908301127457339ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5541685710045250694ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14139746747409799028ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6730976164809813152ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7665975854929718330ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7798803999402751227ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7125466638994206365ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8988094454167297234ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16523601225551321131ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7375842585522020126ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15925427889307980561ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8516657306708004069ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12479019145186081437ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14341646960359052572ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16792924938405360501ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10773775596065293495ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8698589443025657494ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7327366851943459851ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13346595335401177812ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3759495487649764431ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8520399746076531623ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14212561255254717614ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4625461407503272487ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14848081007001878829ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3235919308360995618ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7198281146839059686ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9060908962012036611ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_37 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8387571601603619973ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5493037597718348380ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3417851444678640825ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_40 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12837877670815989910ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3690119030786687965ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_42 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14027168125580728501ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17288605567742902536ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_44 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18118364149297184062ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7686225377573518907ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_46 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13155677117248598684ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 993738674825044766ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_48 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14672034546292755503ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13300811955210609581ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15812849267478647056ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 627542635931597197ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 62485549730862234ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_53 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12050739073378509706ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_54 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14941358259146798969ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10661196974236223863ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14623558812714236731ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_57 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5475800172684802096ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_58 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 490720532223992347ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9789705965904117711ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_60 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14550610224331079654ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_61 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11921653368274115408ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_62 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10655671885757585767ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_63 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6958966336225666230ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_64 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13793548711294217611ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13228491625093468326ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_66 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1066553182669833668ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_67 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14417782079857944708ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_68 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5380458975889149020ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_69 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9342820814367152660ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_70 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16574347334332486433ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12877641784800551805ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_72 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5468871202200529480ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_73 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3279255553865548664ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_74 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6985228631244699967ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_75 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1889713454723312987ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_76 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2022541599196312729ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_77 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7275361900652369882ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_78 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13995514780425691842ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_79 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16450786717706730105ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_80 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13961282588220077013ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12590059997137926838ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_82 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16218321736459807271ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_83 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18080949551632766859ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_84 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14828779637317464889ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2772082303459817999ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_86 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2207025217259069048ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_87 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5363221550855666288ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_88 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17085897926674918879ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_89 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9677127344075039695ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_90 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11572030268838196657ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_91 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5552880926498216140ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_92 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10917091557607567007ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_93 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12894148868075766989ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8125700665834005041ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_95 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11281896999430452745ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_96 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9314991120598564447ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_97 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 61991372003297791ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_98 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7368639152797181524ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_99 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2974048372591384808ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_100 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8883816748933425836ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3436459307284191600ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 586299055634103376ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_103 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10621928253929238790ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_104 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6331925859111725518ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_105 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4809855222498195375ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_106 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 397930527900441213ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_107 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9786371876228549544ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_108 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6484147023199906082ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_109 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7881319084082070424ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_110 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14876283574429867109ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_111 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3785419313624573424ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_112 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1743104801476081899ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_113 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10889383089440342215ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_114 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9649660167872808971ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_115 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5550574659859371947ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_116 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8134912035286422795ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_117 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5229453017821180197ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_118 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11283139554252097859ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_119 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10527016417822455224ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_120 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2861354622855797973ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_121 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7185310440003544635ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_122 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1332292750702573496ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_123 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12506688628971827869ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_124 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15397553720672667684ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_125 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17431678123644956342ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_126 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 254518984656743592ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_127 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3691922652579836719ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_128 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2173438268982472567ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_129 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8801784074651218373ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_130 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15339239517500399859ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_131 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3932094888223570088ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_132 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5929764134175799130ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_133 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10736962606160582808ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_134 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10595855871499542736ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_135 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15030783154609812788ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_136 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6940702653229135127ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_137 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3420402858097789201ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_138 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4550672430829879219ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_139 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13773157598524743428ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_140 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1427050094570469747ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_141 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15127849276366457776ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_142 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7749193092442800246ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_143 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6813396894157158137ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_144 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11152022999242495422ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_145 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16810447938493492642ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_146 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2653467906769481386ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_147 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9010796165240345743ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_148 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15032884487712642833ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_149 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9392800181097346532ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_150 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5261904734739218338ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_151 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 847163698924808811ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_152 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2118152376414932913ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_153 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15118693413118559260ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_154 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2414087466574221873ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_155 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12595901557011571539ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_156 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5077632263974445827ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_157 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8997444186598183178ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_158 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7926563572848977429ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_159 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6708009553152065158ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_160 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7165867486970769995ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_161 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12556096962593359820ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_162 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4806787449466181442ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_163 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11706676902653940018ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_164 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5645308978640783878ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_165 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15310941915773555935ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_166 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3902861978772990748ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_167 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11277343008780630779ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__decoder__DOT___GEN_168 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10774421676858580028ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT__io_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4787967365292447017ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT__io_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 280177670789254157ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryIn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7799612689900004818ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT__io_operation = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11386243645884945613ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT__io_result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 52215864723889452ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT__io_carryOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4076193602511703683ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT__io_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003731965765344840ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT__io_negative = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8581098830796909119ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT__io_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7362480422079124152ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6828554650957150505ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13954055081917435031ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___sum_T_1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15554007717696097458ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT__cmpDiff = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8436202393403083784ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___diff_T_4 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16471249869751354839ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8333326159044890132ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6746542362827192484ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8361477801659134406ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10416574669530963101ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6331207432101178841ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7845432612730335800ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1050158860094041179ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10058769365641183080ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15897663116480000331ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16840346126909673450ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4995404637663551939ull);
    vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15951285949274972132ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->SkeletonTop__DOT__cpu__DOT__alu__DOT___GEN_13, __VscopeHash, 8076352942448993366ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_cpuAddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13318716979883412503ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_cpuDataOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12722988493351299918ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_cpuDataIn = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6663488689910801245ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_cpuRw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14655013567354679314ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_ramAddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9190175697250335379ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_ramDataOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1605694892767077298ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_ramDataIn = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12881703534496732648ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_ramWe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 593407780959453053ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_debugAddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11474145072054100660ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_debugDataOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17299202702278414674ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_debugDataIn = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6409909783345735735ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_debugCs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14887014983620123640ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__io_debugWe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6787341982345974740ull);
    vlSelf->SkeletonTop__DOT__bus__DOT__isDebugRange = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3603623357103176478ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 729995099736104777ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13822362696557825522ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__io_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14164156372189800923ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__io_dataIn = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13809379732717757243ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__io_dataOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4249413456338867543ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__io_cs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17261300380062690034ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__io_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12944532118273753158ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__io_charOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2504585596747090919ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__io_charValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1651970863347273795ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__io_halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7628585796000481874ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__regCharOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11570305733196967648ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__regCharValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9816594697254741772ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__regHalt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10212256712673336414ull);
    vlSelf->SkeletonTop__DOT__debug__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9736824702301554680ull);
    vlSelf->SkeletonTop__DOT__debug__DOT__unnamedblk1__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11040808323145345799ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->SkeletonTop__DOT__debug__DOT__unnamedblk2__DOT___RANDOM[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12593882197799567611ull);
    }
    vlSelf->SkeletonTop__DOT__ram_ext__DOT__R0_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8148728139308680919ull);
    vlSelf->SkeletonTop__DOT__ram_ext__DOT__R0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4608479105169314977ull);
    vlSelf->SkeletonTop__DOT__ram_ext__DOT__R0_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2316286054527733820ull);
    vlSelf->SkeletonTop__DOT__ram_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7573898036902976673ull);
    vlSelf->SkeletonTop__DOT__ram_ext__DOT__W0_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13960008463894775166ull);
    vlSelf->SkeletonTop__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6176244456265296539ull);
    vlSelf->SkeletonTop__DOT__ram_ext__DOT__W0_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9172876133590692518ull);
    vlSelf->SkeletonTop__DOT__ram_ext__DOT__W0_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6613075359278663511ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->SkeletonTop__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12360706073503688830ull);
    }
    vlSelf->SkeletonTop__DOT__ram_ext__DOT___RANDOM_MEM = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1155811340667644292ull);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272892335938733197ull);
}
