// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ExpAddressHandler.h"
#include "VCPU__Syms.h"

void VCPU_ExpAddressHandler___ctor_var_reset(VCPU_ExpAddressHandler* vlSelf);

VCPU_ExpAddressHandler::VCPU_ExpAddressHandler(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_ExpAddressHandler___ctor_var_reset(this);
}

void VCPU_ExpAddressHandler::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_ExpAddressHandler::~VCPU_ExpAddressHandler() {
}
