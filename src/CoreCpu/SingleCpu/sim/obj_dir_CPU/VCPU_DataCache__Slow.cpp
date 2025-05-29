// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_DataCache.h"
#include "VCPU__Syms.h"

void VCPU_DataCache___ctor_var_reset(VCPU_DataCache* vlSelf);

VCPU_DataCache::VCPU_DataCache(VCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCPU_DataCache___ctor_var_reset(this);
}

void VCPU_DataCache::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCPU_DataCache::~VCPU_DataCache() {
}
