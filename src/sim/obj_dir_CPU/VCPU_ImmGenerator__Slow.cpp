// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ImmGenerator.h"
#include "VCPU__Syms.h"

void VCPU_ImmGenerator___ctor_var_reset(VCPU_ImmGenerator* vlSelf);

VCPU_ImmGenerator::VCPU_ImmGenerator(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_ImmGenerator___ctor_var_reset(this);
}

void VCPU_ImmGenerator::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_ImmGenerator::~VCPU_ImmGenerator() {
}
