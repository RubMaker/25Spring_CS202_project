// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_CPU.h"
#include "VCPU__Syms.h"

void VCPU_CPU___ctor_var_reset(VCPU_CPU* vlSelf);

VCPU_CPU::VCPU_CPU(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_CPU___ctor_var_reset(this);
}

void VCPU_CPU::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_CPU::~VCPU_CPU() {
}
