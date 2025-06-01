// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_EX_MEM.h"
#include "VCPU__Syms.h"

void VCPU_EX_MEM___ctor_var_reset(VCPU_EX_MEM* vlSelf);

VCPU_EX_MEM::VCPU_EX_MEM(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_EX_MEM___ctor_var_reset(this);
}

void VCPU_EX_MEM::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_EX_MEM::~VCPU_EX_MEM() {
}
