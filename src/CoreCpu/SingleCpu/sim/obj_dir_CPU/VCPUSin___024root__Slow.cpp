// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin__Syms.h"
#include "VCPUSin___024root.h"

void VCPUSin___024root___ctor_var_reset(VCPUSin___024root* vlSelf);

VCPUSin___024root::VCPUSin___024root(VCPUSin__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPUSin___024root___ctor_var_reset(this);
}

void VCPUSin___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPUSin___024root::~VCPUSin___024root() {
}
