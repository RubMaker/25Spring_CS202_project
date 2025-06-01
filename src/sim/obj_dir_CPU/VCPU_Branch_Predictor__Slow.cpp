// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Branch_Predictor.h"
#include "VCPU__Syms.h"

void VCPU_Branch_Predictor___ctor_var_reset(VCPU_Branch_Predictor* vlSelf);

VCPU_Branch_Predictor::VCPU_Branch_Predictor(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_Branch_Predictor___ctor_var_reset(this);
}

void VCPU_Branch_Predictor::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_Branch_Predictor::~VCPU_Branch_Predictor() {
}
