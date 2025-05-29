// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_REGISTERFILE_H_
#define VERILATED_VCPU_REGISTERFILE_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_RegisterFile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__ReadRegAddr1,4,0);
    VL_IN8(__PVT__ReadRegAddr2,4,0);
    VL_IN8(__PVT__WriteRegAddr,4,0);
    VL_IN8(__PVT__RegWrite,0,0);
    VL_IN(__PVT__WriteData,31,0);
    VL_OUT(__PVT__ReadData1,31,0);
    VL_OUT(__PVT__ReadData2,31,0);
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__unnamedblk2__DOT__i;
    VlUnpacked<IData/*31:0*/, 32> Registers;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_RegisterFile(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_RegisterFile();
    VL_UNCOPYABLE(VCPU_RegisterFile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
