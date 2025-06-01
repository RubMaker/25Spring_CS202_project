// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_PC_H_
#define VERILATED_VCPU_PC_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_PC final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__PC_Write,0,0);
    VL_IN8(__PVT__icache_stall,0,0);
    VL_IN8(__PVT__dcache_stall,0,0);
    VL_IN8(__PVT__flush,0,0);
    VL_IN(__PVT__new_pc,31,0);
    VL_OUT(__PVT__pc_out,31,0);
    IData/*31:0*/ __PVT__pc;
    IData/*31:0*/ __Vdly__pc;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_PC(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_PC();
    VL_UNCOPYABLE(VCPU_PC);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
