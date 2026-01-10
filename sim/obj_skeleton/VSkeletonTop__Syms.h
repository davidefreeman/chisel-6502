// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSKELETONTOP__SYMS_H_
#define VERILATED_VSKELETONTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSkeletonTop.h"

// INCLUDE MODULE CLASSES
#include "VSkeletonTop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VSkeletonTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSkeletonTop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSkeletonTop___024root         TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_SkeletonTop;
    VerilatedScope __Vscope_SkeletonTop__bus;
    VerilatedScope __Vscope_SkeletonTop__cpu;
    VerilatedScope __Vscope_SkeletonTop__cpu__alu;
    VerilatedScope __Vscope_SkeletonTop__cpu__decoder;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk16;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk14;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk15;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2__unnamedblk10;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2__unnamedblk10__unnamedblk11;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2__unnamedblk10__unnamedblk12;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2__unnamedblk10__unnamedblk13;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2__unnamedblk3;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk4;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk4__unnamedblk5;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk4__unnamedblk6;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk4__unnamedblk7;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2__unnamedblk3__unnamedblk8;
    VerilatedScope __Vscope_SkeletonTop__cpu__unnamedblk1__unnamedblk2__unnamedblk9;
    VerilatedScope __Vscope_SkeletonTop__debug;
    VerilatedScope __Vscope_SkeletonTop__debug__unnamedblk1;
    VerilatedScope __Vscope_SkeletonTop__debug__unnamedblk2;
    VerilatedScope __Vscope_SkeletonTop__ram_ext;
    VerilatedScope __Vscope_TOP;

    // CONSTRUCTORS
    VSkeletonTop__Syms(VerilatedContext* contextp, const char* namep, VSkeletonTop* modelp);
    ~VSkeletonTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
