// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_BRANCH_PREDICTOR_H_
#define VERILATED_VCPU_BRANCH_PREDICTOR_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_Branch_Predictor final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__stall,0,0);
    VL_IN8(__PVT__branch,0,0);
    VL_IN8(__PVT__predict,0,0);
    VL_IN8(__PVT__excp,0,0);
    VL_IN8(__PVT__sret,0,0);
    VL_IN8(__PVT__rs1,4,0);
    VL_IN8(__PVT__rd,4,0);
    VL_IN8(__PVT__old_predict,0,0);
    VL_IN8(__PVT__old_actual,0,0);
    VL_IN8(__PVT__old_branch,0,0);
    VL_OUT8(__PVT__predict_result,0,0);
    VL_OUT8(__PVT__predict_fail,0,0);
    CData/*3:0*/ __PVT__RASTop;
    CData/*0:0*/ __PVT__StartFlag;
    CData/*0:0*/ __PVT__PredictResultReg;
    VL_IN(__PVT__pc,31,0);
    VL_IN(__PVT__imm,31,0);
    VL_IN(__PVT__old_pc,31,0);
    VL_IN(__PVT__old_branch_pc,31,0);
    VL_IN(__PVT__old_predict_pc,31,0);
    VL_OUT(__PVT__target_pc,31,0);
    IData/*31:0*/ __PVT__Sepc;
    IData/*31:0*/ __PVT__TargetPCInt;
    IData/*31:0*/ __PVT__i;
    VlUnpacked<CData/*1:0*/, 16> __PVT__History_Table;
    VlUnpacked<IData/*31:0*/, 16> __PVT__Return_Addr;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_Branch_Predictor(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_Branch_Predictor();
    VL_UNCOPYABLE(VCPU_Branch_Predictor);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
