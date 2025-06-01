// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_IF_ID_H_
#define VERILATED_VCPU_IF_ID_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_IF_ID final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__IF_ID_Write,0,0);
    VL_IN8(__PVT__DStall,0,0);
    VL_IN8(__PVT__IStall,0,0);
    VL_IN(__PVT__inst_in,31,0);
    VL_IN(__PVT__pc_in,31,0);
    VL_OUT(__PVT__inst_out,31,0);
    VL_OUT(__PVT__pc_out,31,0);
    IData/*31:0*/ __PVT__inst;
    IData/*31:0*/ __PVT__pc;
    IData/*31:0*/ __Vdly__pc;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_IF_ID(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_IF_ID();
    VL_UNCOPYABLE(VCPU_IF_ID);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
