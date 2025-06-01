// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_MMIO.h"
#include "VCPU__Syms.h"

void VCPU_MMIO___ctor_var_reset(VCPU_MMIO* vlSelf);

VCPU_MMIO::VCPU_MMIO(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_MMIO___ctor_var_reset(this);
}

void VCPU_MMIO::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_MMIO::~VCPU_MMIO() {
}
