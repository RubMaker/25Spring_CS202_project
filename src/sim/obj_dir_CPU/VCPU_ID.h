// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_ID_H_
#define VERILATED_VCPU_ID_H_  // guard

#include "verilated.h"
class VCPU_Controller;
class VCPU_Hazard;


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_ID final : public VerilatedModule {
  public:
    // CELLS
    VCPU_Controller* __PVT__controller_inst;
    VCPU_Hazard* __PVT__hazard_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__Rd,4,0);
    VL_OUT8(__PVT__RegWrite,0,0);
    VL_OUT8(__PVT__ALUSrc,0,0);
    VL_OUT8(__PVT__MemtoReg,0,0);
    VL_OUT8(__PVT__MemRead,0,0);
    VL_OUT8(__PVT__MemWrite,0,0);
    VL_OUT8(__PVT__Branch,0,0);
    VL_OUT8(__PVT__PcWrite,0,0);
    VL_OUT8(__PVT__ALU_op,3,0);
    VL_OUT8(__PVT__BRU_op,2,0);
    VL_OUT8(__PVT__LS_op,2,0);
    VL_IN8(__PVT__ID_EX_MemRead,0,0);
    VL_IN8(__PVT__ID_EX_Rd,4,0);
    VL_OUT8(__PVT__IF_ID_Write,0,0);
    VL_OUT8(__PVT__Rs1Addr,4,0);
    VL_OUT8(__PVT__Rs2Addr,4,0);
    VL_OUT8(__PVT__Stall,0,0);
    VL_IN(__PVT__Inst,31,0);
    VL_IN(__PVT__PcIn,31,0);
    VL_OUT(__PVT__PcOut,31,0);
    VL_OUT(__PVT__Imm,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_ID(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_ID();
    VL_UNCOPYABLE(VCPU_ID);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
