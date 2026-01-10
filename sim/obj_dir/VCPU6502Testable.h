// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCPU6502TESTABLE_H_
#define VERILATED_VCPU6502TESTABLE_H_  // guard

#include "verilated.h"

class VCPU6502Testable__Syms;
class VCPU6502Testable___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VCPU6502Testable VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VCPU6502Testable__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_dataIn,7,0);
    VL_OUT8(&io_dataOut,7,0);
    VL_OUT8(&io_writeEnable,0,0);
    VL_IN8(&io_irq,0,0);
    VL_IN8(&io_nmi,0,0);
    VL_IN8(&io_rdy,0,0);
    VL_IN8(&io_test_enable,0,0);
    VL_IN8(&io_test_a,7,0);
    VL_IN8(&io_test_x,7,0);
    VL_IN8(&io_test_y,7,0);
    VL_IN8(&io_test_s,7,0);
    VL_IN8(&io_test_p,7,0);
    VL_OUT8(&io_debug_a,7,0);
    VL_OUT8(&io_debug_x,7,0);
    VL_OUT8(&io_debug_y,7,0);
    VL_OUT8(&io_debug_sp,7,0);
    VL_OUT8(&io_debug_p,7,0);
    VL_OUT8(&io_debug_opcode,7,0);
    VL_OUT8(&io_debug_state,3,0);
    VL_OUT8(&io_cycleCount,7,0);
    VL_OUT16(&io_address,15,0);
    VL_IN16(&io_test_pc,15,0);
    VL_OUT16(&io_debug_pc,15,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VCPU6502Testable___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VCPU6502Testable(VerilatedContext* contextp, const char* name = "TOP");
    explicit VCPU6502Testable(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VCPU6502Testable();
  private:
    VL_UNCOPYABLE(VCPU6502Testable);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
