// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_BRUSIN_H_
#define VERILATED_VCPU_BRUSIN_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_BRUSin final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__BRUOperation,2,0);
    VL_IN8(__PVT__Jalr,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN(__PVT__Source1,31,0);
    VL_IN(__PVT__Source2,31,0);
    VL_IN(__PVT__Pc,31,0);
    VL_IN(__PVT__Immediate,31,0);
    VL_OUT(__PVT__NewPc,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_BRUSin(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_BRUSin();
    VL_UNCOPYABLE(VCPU_BRUSin);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
