// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_EX.h"
#include "VCPU__Syms.h"

void VCPU_EX___ctor_var_reset(VCPU_EX* vlSelf);

VCPU_EX::VCPU_EX(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_EX___ctor_var_reset(this);
}

void VCPU_EX::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_EX::~VCPU_EX() {
}
