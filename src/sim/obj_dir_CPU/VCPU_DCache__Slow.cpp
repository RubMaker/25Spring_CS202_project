// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_DCache.h"
#include "VCPU__Syms.h"

void VCPU_DCache___ctor_var_reset(VCPU_DCache* vlSelf);

VCPU_DCache::VCPU_DCache(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_DCache___ctor_var_reset(this);
}

void VCPU_DCache::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_DCache::~VCPU_DCache() {
}
