// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Forwarding.h"
#include "VCPU__Syms.h"

void VCPU_Forwarding___ctor_var_reset(VCPU_Forwarding* vlSelf);

VCPU_Forwarding::VCPU_Forwarding(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_Forwarding___ctor_var_reset(this);
}

void VCPU_Forwarding::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_Forwarding::~VCPU_Forwarding() {
}
