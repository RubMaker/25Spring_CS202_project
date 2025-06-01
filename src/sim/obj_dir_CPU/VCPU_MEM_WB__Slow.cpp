// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_MEM_WB.h"
#include "VCPU__Syms.h"

void VCPU_MEM_WB___ctor_var_reset(VCPU_MEM_WB* vlSelf);

VCPU_MEM_WB::VCPU_MEM_WB(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_MEM_WB___ctor_var_reset(this);
}

void VCPU_MEM_WB::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_MEM_WB::~VCPU_MEM_WB() {
}
