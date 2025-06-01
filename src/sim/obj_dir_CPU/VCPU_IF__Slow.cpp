// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_IF.h"
#include "VCPU__Syms.h"

void VCPU_IF___ctor_var_reset(VCPU_IF* vlSelf);

VCPU_IF::VCPU_IF(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_IF___ctor_var_reset(this);
}

void VCPU_IF::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_IF::~VCPU_IF() {
}
