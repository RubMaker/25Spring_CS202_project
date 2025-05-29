// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ProgramCounter.h"
#include "VCPU__Syms.h"

void VCPU_ProgramCounter___ctor_var_reset(VCPU_ProgramCounter* vlSelf);

VCPU_ProgramCounter::VCPU_ProgramCounter(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_ProgramCounter___ctor_var_reset(this);
}

void VCPU_ProgramCounter::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_ProgramCounter::~VCPU_ProgramCounter() {
}
