// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_MEM_H_
#define VERILATED_VCPU_MEM_H_  // guard

#include "verilated.h"
class VCPU_DCache;


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_MEM final : public VerilatedModule {
  public:
    // CELLS
    VCPU_DCache* __PVT__U_DCache;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__MemRead,0,0);
    VL_IN8(__PVT__MemWrite,0,0);
    VL_IN8(__PVT__LS_op,2,0);
    VL_OUT8(__PVT__DStall,0,0);
    VL_OUT8(__PVT__MemWb,0,0);
    VL_IN(__PVT__AluResult,31,0);
    VL_IN(__PVT__WriteData,31,0);
    VL_OUT(__PVT__Result,31,0);
    VL_IN(__PVT__MemData,31,0);
    VL_OUT(__PVT__MemAddr,31,0);
    VL_OUT(__PVT__MemWriteData,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_MEM(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_MEM();
    VL_UNCOPYABLE(VCPU_MEM);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
