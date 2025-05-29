// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_RegisterFile.h"
#include "VCPU__Syms.h"

void VCPU_RegisterFile___ctor_var_reset(VCPU_RegisterFile* vlSelf);

VCPU_RegisterFile::VCPU_RegisterFile(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_RegisterFile___ctor_var_reset(this);
}

void VCPU_RegisterFile::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_RegisterFile::~VCPU_RegisterFile() {
}
