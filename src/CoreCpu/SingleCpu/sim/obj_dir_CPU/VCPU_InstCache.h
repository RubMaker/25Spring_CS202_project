// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_INSTCACHE_H_
#define VERILATED_VCPU_INSTCACHE_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_InstCache final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN(__PVT__Address,31,0);
    VL_OUT(__PVT__Instruction,31,0);
    VL_IN(__PVT__MemInstruction,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_InstCache(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_InstCache();
    VL_UNCOPYABLE(VCPU_InstCache);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
