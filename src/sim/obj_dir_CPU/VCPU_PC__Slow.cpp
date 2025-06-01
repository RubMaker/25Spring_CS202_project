// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_PC.h"
#include "VCPU__Syms.h"

void VCPU_PC___ctor_var_reset(VCPU_PC* vlSelf);

VCPU_PC::VCPU_PC(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_PC___ctor_var_reset(this);
}

void VCPU_PC::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_PC::~VCPU_PC() {
}
