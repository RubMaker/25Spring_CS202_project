// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Mux2.h"
#include "VCPU__Syms.h"

void VCPU_Mux2___ctor_var_reset(VCPU_Mux2* vlSelf);

VCPU_Mux2::VCPU_Mux2(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_Mux2___ctor_var_reset(this);
}

void VCPU_Mux2::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_Mux2::~VCPU_Mux2() {
}
