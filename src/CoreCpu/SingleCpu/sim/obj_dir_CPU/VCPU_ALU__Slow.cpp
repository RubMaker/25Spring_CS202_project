// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ALU.h"
#include "VCPU__Syms.h"

void VCPU_ALU___ctor_var_reset(VCPU_ALU* vlSelf);

VCPU_ALU::VCPU_ALU(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_ALU___ctor_var_reset(this);
}

void VCPU_ALU::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_ALU::~VCPU_ALU() {
}
