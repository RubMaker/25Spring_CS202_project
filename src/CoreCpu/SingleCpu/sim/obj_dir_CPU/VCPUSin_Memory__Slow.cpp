// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin_Memory.h"
#include "VCPUSin__Syms.h"

void VCPUSin_Memory___ctor_var_reset(VCPUSin_Memory* vlSelf);

VCPUSin_Memory::VCPUSin_Memory(VCPUSin__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPUSin_Memory___ctor_var_reset(this);
}

void VCPUSin_Memory::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPUSin_Memory::~VCPUSin_Memory() {
}
