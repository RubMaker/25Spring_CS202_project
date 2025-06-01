// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_EX_H_
#define VERILATED_VCPU_EX_H_  // guard

#include "verilated.h"
class VCPU_ALU;
class VCPU_BRU;
class VCPU_Forwarding;


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_EX final : public VerilatedModule {
  public:
    // CELLS
    VCPU_Forwarding* __PVT__forward_inst;
    VCPU_ALU* __PVT__ALU_Instance;
    VCPU_BRU* __PVT__BRU_Instance;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__rs1,4,0);
    VL_IN8(__PVT__rs2,4,0);
    VL_IN8(__PVT__ex_mem_rd,4,0);
    VL_IN8(__PVT__ex_mem_regwrite,0,0);
    VL_IN8(__PVT__mem_wb_rd,4,0);
    VL_IN8(__PVT__mem_wb_regwrite,0,0);
    VL_IN8(__PVT__ALUSrc,0,0);
    VL_IN8(__PVT__ALUOp,3,0);
    VL_IN8(__PVT__Branch,0,0);
    VL_IN8(__PVT__BRU_op,2,0);
    VL_OUT8(__PVT__BranchTaken,0,0);
    VL_IN(__PVT__Rs1Data,31,0);
    VL_IN(__PVT__Rs2Data,31,0);
    VL_IN(__PVT__ex_mem_aluresult,31,0);
    VL_IN(__PVT__wb_result,31,0);
    VL_IN(__PVT__Imm,31,0);
    VL_IN(__PVT__Pc,31,0);
    VL_OUT(__PVT__ALU_result,31,0);
    VL_OUT(__PVT__OldPc,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_EX(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_EX();
    VL_UNCOPYABLE(VCPU_EX);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
