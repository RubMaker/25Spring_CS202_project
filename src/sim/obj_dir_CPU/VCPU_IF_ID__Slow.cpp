// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_IF_ID.h"
#include "VCPU__Syms.h"

void VCPU_IF_ID___ctor_var_reset(VCPU_IF_ID* vlSelf);

VCPU_IF_ID::VCPU_IF_ID(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_IF_ID___ctor_var_reset(this);
}

void VCPU_IF_ID::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_IF_ID::~VCPU_IF_ID() {
}
