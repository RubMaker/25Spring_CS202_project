// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Registers.h"
#include "VCPU__Syms.h"

void VCPU_Registers___ctor_var_reset(VCPU_Registers* vlSelf);

VCPU_Registers::VCPU_Registers(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_Registers___ctor_var_reset(this);
}

void VCPU_Registers::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_Registers::~VCPU_Registers() {
}
