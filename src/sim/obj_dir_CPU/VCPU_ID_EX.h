// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_ID_EX_H_
#define VERILATED_VCPU_ID_EX_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_ID_EX final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__RdIn,4,0);
    VL_IN8(__PVT__rs1_in,4,0);
    VL_IN8(__PVT__rs2_in,4,0);
    VL_IN8(__PVT__RegWriteIn,0,0);
    VL_IN8(__PVT__ALUSrcIn,0,0);
    VL_IN8(__PVT__MemtoRegIn,0,0);
    VL_IN8(__PVT__MemReadIn,0,0);
    VL_IN8(__PVT__MemWriteIn,0,0);
    VL_IN8(__PVT__BranchIn,0,0);
    VL_IN8(__PVT__ALU_opIn,3,0);
    VL_IN8(__PVT__BRU_opIn,2,0);
    VL_IN8(__PVT__LS_opIn,2,0);
    VL_IN8(__PVT__stall,0,0);
    VL_IN8(__PVT__flush,0,0);
    VL_OUT8(__PVT__RdOut,4,0);
    VL_OUT8(__PVT__rs1_out,4,0);
    VL_OUT8(__PVT__rs2_out,4,0);
    VL_OUT8(__PVT__RegWriteOut,0,0);
    VL_OUT8(__PVT__ALUSrcOut,0,0);
    VL_OUT8(__PVT__MemtoRegOut,0,0);
    VL_OUT8(__PVT__MemReadOut,0,0);
    VL_OUT8(__PVT__MemWriteOut,0,0);
    VL_OUT8(__PVT__BranchOut,0,0);
    VL_OUT8(__PVT__ALU_opOut,3,0);
    VL_OUT8(__PVT__BRU_opOut,2,0);
    VL_OUT8(__PVT__LS_opOut,2,0);
    CData/*4:0*/ __PVT__Rd;
    CData/*4:0*/ __PVT__rs1;
    CData/*4:0*/ __PVT__rs2;
    CData/*0:0*/ __PVT__RegWrite;
    CData/*0:0*/ __PVT__ALUSrc;
    CData/*0:0*/ __PVT__MemtoReg;
    CData/*0:0*/ __PVT__MemRead;
    CData/*0:0*/ __PVT__MemWrite;
    CData/*0:0*/ __PVT__Branch;
    CData/*3:0*/ __PVT__ALU_op;
    CData/*2:0*/ __PVT__BRU_op;
    CData/*2:0*/ __PVT__LS_op;
    CData/*0:0*/ __Vdly__MemWrite;
    CData/*0:0*/ __Vdly__MemRead;
    CData/*0:0*/ __Vdly__MemtoReg;
    CData/*0:0*/ __Vdly__RegWrite;
    CData/*4:0*/ __Vdly__Rd;
    VL_IN(__PVT__PcIn,31,0);
    VL_IN(__PVT__Rs1In,31,0);
    VL_IN(__PVT__Rs2In,31,0);
    VL_IN(__PVT__ImmIn,31,0);
    VL_OUT(__PVT__PcOut,31,0);
    VL_OUT(__PVT__Rs1Out,31,0);
    VL_OUT(__PVT__Rs2Out,31,0);
    VL_OUT(__PVT__ImmOut,31,0);
    IData/*31:0*/ __PVT__Pc;
    IData/*31:0*/ __PVT__Rs1;
    IData/*31:0*/ __PVT__Rs2;
    IData/*31:0*/ __PVT__Imm;
    IData/*31:0*/ __Vdly__Rs2;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_ID_EX(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_ID_EX();
    VL_UNCOPYABLE(VCPU_ID_EX);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
