// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_BRU_H_
#define VERILATED_VCPU_BRU_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_BRU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__BRUOp,2,0);
    VL_OUT8(__PVT__BranchTaken,0,0);
    VL_IN(__PVT__Rs1Data,31,0);
    VL_IN(__PVT__Rs2Data,31,0);
    VL_IN(__PVT__Pc,31,0);
    VL_IN(__PVT__Imm,31,0);
    VL_OUT(__PVT__OldPc,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_BRU(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_BRU();
    VL_UNCOPYABLE(VCPU_BRU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
