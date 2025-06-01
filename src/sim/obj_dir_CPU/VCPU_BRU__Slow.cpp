// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_BRU.h"
#include "VCPU__Syms.h"

void VCPU_BRU___ctor_var_reset(VCPU_BRU* vlSelf);

VCPU_BRU::VCPU_BRU(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_BRU___ctor_var_reset(this);
}

void VCPU_BRU::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_BRU::~VCPU_BRU() {
}
