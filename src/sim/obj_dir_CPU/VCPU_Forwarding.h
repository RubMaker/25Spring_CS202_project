// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_FORWARDING_H_
#define VERILATED_VCPU_FORWARDING_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_Forwarding final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__EX_rs1,4,0);
    VL_IN8(__PVT__EX_rs2,4,0);
    VL_IN8(__PVT__MEM_rd,4,0);
    VL_IN8(__PVT__MEM_RegWrite,0,0);
    VL_IN8(__PVT__WB_rd,4,0);
    VL_IN8(__PVT__WB_RegWrite,0,0);
    VL_IN(__PVT__EX_MEM_AluResult,31,0);
    VL_IN(__PVT__WB_Result,31,0);
    VL_IN(__PVT__Rs1Data,31,0);
    VL_IN(__PVT__Rs2Data,31,0);
    VL_OUT(__PVT__Forwarded_A,31,0);
    VL_OUT(__PVT__Forwarded_B,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_Forwarding(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_Forwarding();
    VL_UNCOPYABLE(VCPU_Forwarding);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
