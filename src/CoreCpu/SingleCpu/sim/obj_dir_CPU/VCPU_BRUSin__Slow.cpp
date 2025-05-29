// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_BRUSin.h"
#include "VCPU__Syms.h"

void VCPU_BRUSin___ctor_var_reset(VCPU_BRUSin* vlSelf);

VCPU_BRUSin::VCPU_BRUSin(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_BRUSin___ctor_var_reset(this);
}

void VCPU_BRUSin::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_BRUSin::~VCPU_BRUSin() {
}
