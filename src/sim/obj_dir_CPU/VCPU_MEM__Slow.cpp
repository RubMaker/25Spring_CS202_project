// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_MEM.h"
#include "VCPU__Syms.h"

void VCPU_MEM___ctor_var_reset(VCPU_MEM* vlSelf);

VCPU_MEM::VCPU_MEM(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_MEM___ctor_var_reset(this);
}

void VCPU_MEM::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_MEM::~VCPU_MEM() {
}
