// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Mux3.h"
#include "VCPU__Syms.h"

void VCPU_Mux3___ctor_var_reset(VCPU_Mux3* vlSelf);

VCPU_Mux3::VCPU_Mux3(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_Mux3___ctor_var_reset(this);
}

void VCPU_Mux3::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_Mux3::~VCPU_Mux3() {
}
