// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCPU6502Testable__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCPU6502Testable::VCPU6502Testable(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCPU6502Testable__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_dataIn{vlSymsp->TOP.io_dataIn}
    , io_dataOut{vlSymsp->TOP.io_dataOut}
    , io_writeEnable{vlSymsp->TOP.io_writeEnable}
    , io_irq{vlSymsp->TOP.io_irq}
    , io_nmi{vlSymsp->TOP.io_nmi}
    , io_rdy{vlSymsp->TOP.io_rdy}
    , io_test_enable{vlSymsp->TOP.io_test_enable}
    , io_test_a{vlSymsp->TOP.io_test_a}
    , io_test_x{vlSymsp->TOP.io_test_x}
    , io_test_y{vlSymsp->TOP.io_test_y}
    , io_test_s{vlSymsp->TOP.io_test_s}
    , io_test_p{vlSymsp->TOP.io_test_p}
    , io_debug_a{vlSymsp->TOP.io_debug_a}
    , io_debug_x{vlSymsp->TOP.io_debug_x}
    , io_debug_y{vlSymsp->TOP.io_debug_y}
    , io_debug_sp{vlSymsp->TOP.io_debug_sp}
    , io_debug_p{vlSymsp->TOP.io_debug_p}
    , io_debug_opcode{vlSymsp->TOP.io_debug_opcode}
    , io_debug_state{vlSymsp->TOP.io_debug_state}
    , io_cycleCount{vlSymsp->TOP.io_cycleCount}
    , io_address{vlSymsp->TOP.io_address}
    , io_test_pc{vlSymsp->TOP.io_test_pc}
    , io_debug_pc{vlSymsp->TOP.io_debug_pc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VCPU6502Testable::VCPU6502Testable(const char* _vcname__)
    : VCPU6502Testable(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCPU6502Testable::~VCPU6502Testable() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCPU6502Testable___024root___eval_debug_assertions(VCPU6502Testable___024root* vlSelf);
#endif  // VL_DEBUG
void VCPU6502Testable___024root___eval_static(VCPU6502Testable___024root* vlSelf);
void VCPU6502Testable___024root___eval_initial(VCPU6502Testable___024root* vlSelf);
void VCPU6502Testable___024root___eval_settle(VCPU6502Testable___024root* vlSelf);
void VCPU6502Testable___024root___eval(VCPU6502Testable___024root* vlSelf);

void VCPU6502Testable::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCPU6502Testable::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCPU6502Testable___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCPU6502Testable___024root___eval_static(&(vlSymsp->TOP));
        VCPU6502Testable___024root___eval_initial(&(vlSymsp->TOP));
        VCPU6502Testable___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCPU6502Testable___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCPU6502Testable::eventsPending() { return false; }

uint64_t VCPU6502Testable::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCPU6502Testable::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCPU6502Testable___024root___eval_final(VCPU6502Testable___024root* vlSelf);

VL_ATTR_COLD void VCPU6502Testable::final() {
    VCPU6502Testable___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCPU6502Testable::hierName() const { return vlSymsp->name(); }
const char* VCPU6502Testable::modelName() const { return "VCPU6502Testable"; }
unsigned VCPU6502Testable::threads() const { return 1; }
void VCPU6502Testable::prepareClone() const { contextp()->prepareClone(); }
void VCPU6502Testable::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VCPU6502Testable::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCPU6502Testable___024root__trace_decl_types(VerilatedVcd* tracep);

void VCPU6502Testable___024root__trace_init_top(VCPU6502Testable___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCPU6502Testable___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU6502Testable___024root*>(voidSelf);
    VCPU6502Testable__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU6502Testable___024root__trace_decl_types(tracep);
    VCPU6502Testable___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU6502Testable___024root__trace_register(VCPU6502Testable___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU6502Testable::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCPU6502Testable::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCPU6502Testable___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
