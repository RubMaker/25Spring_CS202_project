// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin_MemorySim.h"
#include "VCPUSin__Syms.h"

void VCPUSin_MemorySim___ctor_var_reset(VCPUSin_MemorySim* vlSelf);

VCPUSin_MemorySim::VCPUSin_MemorySim(VCPUSin__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPUSin_MemorySim___ctor_var_reset(this);
}

void VCPUSin_MemorySim::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPUSin_MemorySim::~VCPUSin_MemorySim() {
}
