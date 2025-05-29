// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_CONTROLLER_H_
#define VERILATED_VCPU_CONTROLLER_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_Controller final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__JumpLink,0,0);
    VL_OUT8(__PVT__BranchOperation,2,0);
    VL_OUT8(__PVT__AluOperation,3,0);
    VL_OUT8(__PVT__AluSrc1,0,0);
    VL_OUT8(__PVT__AluSrc2,0,0);
    VL_OUT8(__PVT__MemoryOperation,2,0);
    VL_OUT8(__PVT__MemWriteEn,0,0);
    VL_OUT8(__PVT__MemReadEn,0,0);
    VL_OUT8(__PVT__RegWriteEn,0,0);
    VL_OUT8(__PVT__Mem2Reg,1,0);
    VL_IN8(__PVT__CpuStart,0,0);
    VL_IN(__PVT__Instruction,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_Controller(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_Controller();
    VL_UNCOPYABLE(VCPU_Controller);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
