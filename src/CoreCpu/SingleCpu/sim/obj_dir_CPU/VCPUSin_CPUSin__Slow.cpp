// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin_CPUSin.h"
#include "VCPUSin__Syms.h"

void VCPUSin_CPUSin___ctor_var_reset(VCPUSin_CPUSin* vlSelf);

VCPUSin_CPUSin::VCPUSin_CPUSin(VCPUSin__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPUSin_CPUSin___ctor_var_reset(this);
}

void VCPUSin_CPUSin::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPUSin_CPUSin::~VCPUSin_CPUSin() {
}
