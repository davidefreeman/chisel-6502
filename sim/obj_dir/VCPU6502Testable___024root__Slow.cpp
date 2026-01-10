// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU6502Testable.h for the primary calling header

#include "VCPU6502Testable__pch.h"
#include "VCPU6502Testable__Syms.h"
#include "VCPU6502Testable___024root.h"

void VCPU6502Testable___024root___ctor_var_reset(VCPU6502Testable___024root* vlSelf);

VCPU6502Testable___024root::VCPU6502Testable___024root(VCPU6502Testable__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU6502Testable___024root___ctor_var_reset(this);
}

void VCPU6502Testable___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU6502Testable___024root::~VCPU6502Testable___024root() {
}
