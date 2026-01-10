// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPU6502TESTABLE__SYMS_H_
#define VERILATED_VCPU6502TESTABLE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCPU6502Testable.h"

// INCLUDE MODULE CLASSES
#include "VCPU6502Testable___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VCPU6502Testable__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCPU6502Testable* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCPU6502Testable___024root     TOP;

    // CONSTRUCTORS
    VCPU6502Testable__Syms(VerilatedContext* contextp, const char* namep, VCPU6502Testable* modelp);
    ~VCPU6502Testable__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
