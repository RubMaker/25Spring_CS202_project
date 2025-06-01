// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_EX_MEM_H_
#define VERILATED_VCPU_EX_MEM_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_EX_MEM final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__stall,0,0);
    VL_IN8(__PVT__rd_in,4,0);
    VL_IN8(__PVT__MEM_ctrl_in,4,0);
    VL_IN8(__PVT__WB_ctrl_in,0,0);
    VL_OUT8(__PVT__rd_out,4,0);
    VL_OUT8(__PVT__MEM_ctrl_out,4,0);
    VL_OUT8(__PVT__WB_ctrl_out,0,0);
    CData/*4:0*/ __PVT__rd;
    CData/*4:0*/ __PVT__MEM_ctrl;
    CData/*0:0*/ __PVT__WB_ctrl;
    CData/*4:0*/ __Vdly__rd;
    CData/*0:0*/ __Vdly__WB_ctrl;
    VL_IN(__PVT__ALUres_in,31,0);
    VL_IN(__PVT__data2_in,31,0);
    VL_OUT(__PVT__ALUres_out,31,0);
    VL_OUT(__PVT__data2_out,31,0);
    IData/*31:0*/ __PVT__ALUres;
    IData/*31:0*/ __PVT__data2;
    IData/*31:0*/ __Vdly__ALUres;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_EX_MEM(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_EX_MEM();
    VL_UNCOPYABLE(VCPU_EX_MEM);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
