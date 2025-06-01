// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ID.h"
#include "VCPU__Syms.h"

void VCPU_ID___ctor_var_reset(VCPU_ID* vlSelf);

VCPU_ID::VCPU_ID(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_ID___ctor_var_reset(this);
}

void VCPU_ID::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_ID::~VCPU_ID() {
}
