// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_HAZARD_H_
#define VERILATED_VCPU_HAZARD_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_Hazard final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ID_EX_MemRead,0,0);
    VL_IN8(__PVT__ID_EX_Rd,4,0);
    VL_IN8(__PVT__IF_Rs1,4,0);
    VL_IN8(__PVT__IF_Rs2,4,0);
    VL_OUT8(__PVT__Stall,0,0);
    VL_OUT8(__PVT__PcWrite,0,0);
    VL_OUT8(__PVT__IF_ID_Write,0,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_Hazard(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_Hazard();
    VL_UNCOPYABLE(VCPU_Hazard);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
