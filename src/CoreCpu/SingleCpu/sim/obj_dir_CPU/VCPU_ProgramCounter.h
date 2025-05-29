// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_PROGRAMCOUNTER_H_
#define VERILATED_VCPU_PROGRAMCOUNTER_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_ProgramCounter final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    CData/*0:0*/ __PVT__reset_done;
    VL_IN(__PVT__PcInput,31,0);
    VL_OUT(__PVT__PcOutput,31,0);
    IData/*31:0*/ PcReg;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_ProgramCounter(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_ProgramCounter();
    VL_UNCOPYABLE(VCPU_ProgramCounter);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
