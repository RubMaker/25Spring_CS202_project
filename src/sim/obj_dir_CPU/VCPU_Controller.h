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
    VL_OUT8(__PVT__Rd,4,0);
    VL_OUT8(__PVT__RegWrite,0,0);
    VL_OUT8(__PVT__ALUSrc,0,0);
    VL_OUT8(__PVT__MemtoReg,0,0);
    VL_OUT8(__PVT__MemRead,0,0);
    VL_OUT8(__PVT__MemWrite,0,0);
    VL_OUT8(__PVT__Branch,0,0);
    VL_OUT8(__PVT__ALU_op,3,0);
    VL_OUT8(__PVT__BRU_op,2,0);
    VL_OUT8(__PVT__LS_op,2,0);
    VL_IN(__PVT__Inst,31,0);
    VL_OUT(__PVT__Imm,31,0);

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
