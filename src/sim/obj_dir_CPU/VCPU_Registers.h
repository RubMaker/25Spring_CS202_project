// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_REGISTERS_H_
#define VERILATED_VCPU_REGISTERS_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_Registers final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__rs1_addr,4,0);
    VL_IN8(__PVT__rs2_addr,4,0);
    VL_IN8(__PVT__RegWrite,0,0);
    VL_IN8(__PVT__rd_addr,4,0);
    VL_OUT(__PVT__rs1_data,31,0);
    VL_OUT(__PVT__rs2_data,31,0);
    VL_IN(__PVT__rd_data,31,0);
    IData/*31:0*/ __PVT__i;
    VlUnpacked<IData/*31:0*/, 32> __PVT__regs;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_Registers(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_Registers();
    VL_UNCOPYABLE(VCPU_Registers);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
