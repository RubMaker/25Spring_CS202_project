// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Hazard.h"
#include "VCPU__Syms.h"

void VCPU_Hazard___ctor_var_reset(VCPU_Hazard* vlSelf);

VCPU_Hazard::VCPU_Hazard(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_Hazard___ctor_var_reset(this);
}

void VCPU_Hazard::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_Hazard::~VCPU_Hazard() {
}
