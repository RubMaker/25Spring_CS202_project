// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Memory.h"
#include "VCPU__Syms.h"

void VCPU_Memory___ctor_var_reset(VCPU_Memory* vlSelf);

VCPU_Memory::VCPU_Memory(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_Memory___ctor_var_reset(this);
}

void VCPU_Memory::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_Memory::~VCPU_Memory() {
}
