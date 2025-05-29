// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_InstCache.h"
#include "VCPU__Syms.h"

void VCPU_InstCache___ctor_var_reset(VCPU_InstCache* vlSelf);

VCPU_InstCache::VCPU_InstCache(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_InstCache___ctor_var_reset(this);
}

void VCPU_InstCache::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_InstCache::~VCPU_InstCache() {
}
