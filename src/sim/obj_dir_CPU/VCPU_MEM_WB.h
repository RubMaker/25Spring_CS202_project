// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_MEM_WB_H_
#define VERILATED_VCPU_MEM_WB_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_MEM_WB final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__stall,0,0);
    VL_IN8(__PVT__MemRegWrite,0,0);
    VL_IN8(__PVT__MemRd,4,0);
    VL_OUT8(__PVT__WbRegWrite,0,0);
    VL_OUT8(__PVT__WbRd,4,0);
    CData/*4:0*/ __PVT__Rd;
    CData/*0:0*/ __PVT__RegWrite;
    VL_IN(__PVT__MemResult,31,0);
    VL_OUT(__PVT__WbData,31,0);
    IData/*31:0*/ __PVT__Data;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_MEM_WB(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_MEM_WB();
    VL_UNCOPYABLE(VCPU_MEM_WB);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
