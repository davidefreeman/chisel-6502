// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSkeletonTop__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSkeletonTop::VSkeletonTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSkeletonTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_testEnable{vlSymsp->TOP.io_testEnable}
    , io_testA{vlSymsp->TOP.io_testA}
    , io_testX{vlSymsp->TOP.io_testX}
    , io_testY{vlSymsp->TOP.io_testY}
    , io_testS{vlSymsp->TOP.io_testS}
    , io_testP{vlSymsp->TOP.io_testP}
    , io_debugCharOut{vlSymsp->TOP.io_debugCharOut}
    , io_debugCharValid{vlSymsp->TOP.io_debugCharValid}
    , io_debugHalt{vlSymsp->TOP.io_debugHalt}
    , io_cpuA{vlSymsp->TOP.io_cpuA}
    , io_cpuX{vlSymsp->TOP.io_cpuX}
    , io_cpuY{vlSymsp->TOP.io_cpuY}
    , io_cpuS{vlSymsp->TOP.io_cpuS}
    , io_cpuP{vlSymsp->TOP.io_cpuP}
    , io_cpuState{vlSymsp->TOP.io_cpuState}
    , io_testPc{vlSymsp->TOP.io_testPc}
    , io_cpuPc{vlSymsp->TOP.io_cpuPc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VSkeletonTop::VSkeletonTop(const char* _vcname__)
    : VSkeletonTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSkeletonTop::~VSkeletonTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSkeletonTop___024root___eval_debug_assertions(VSkeletonTop___024root* vlSelf);
#endif  // VL_DEBUG
void VSkeletonTop___024root___eval_static(VSkeletonTop___024root* vlSelf);
void VSkeletonTop___024root___eval_initial(VSkeletonTop___024root* vlSelf);
void VSkeletonTop___024root___eval_settle(VSkeletonTop___024root* vlSelf);
void VSkeletonTop___024root___eval(VSkeletonTop___024root* vlSelf);

void VSkeletonTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSkeletonTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSkeletonTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSkeletonTop___024root___eval_static(&(vlSymsp->TOP));
        VSkeletonTop___024root___eval_initial(&(vlSymsp->TOP));
        VSkeletonTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSkeletonTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSkeletonTop::eventsPending() { return false; }

uint64_t VSkeletonTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSkeletonTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSkeletonTop___024root___eval_final(VSkeletonTop___024root* vlSelf);

VL_ATTR_COLD void VSkeletonTop::final() {
    VSkeletonTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSkeletonTop::hierName() const { return vlSymsp->name(); }
const char* VSkeletonTop::modelName() const { return "VSkeletonTop"; }
unsigned VSkeletonTop::threads() const { return 1; }
void VSkeletonTop::prepareClone() const { contextp()->prepareClone(); }
void VSkeletonTop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VSkeletonTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSkeletonTop___024root__trace_decl_types(VerilatedVcd* tracep);

void VSkeletonTop___024root__trace_init_top(VSkeletonTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSkeletonTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSkeletonTop___024root*>(voidSelf);
    VSkeletonTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VSkeletonTop___024root__trace_decl_types(tracep);
    VSkeletonTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VSkeletonTop___024root__trace_register(VSkeletonTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSkeletonTop::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSkeletonTop::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSkeletonTop___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
