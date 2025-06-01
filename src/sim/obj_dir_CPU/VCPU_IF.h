// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_IF_H_
#define VERILATED_VCPU_IF_H_  // guard

#include "verilated.h"
class VCPU_Branch_Predictor;
class VCPU_ICache;
class VCPU_ImmGenerator;


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_IF final : public VerilatedModule {
  public:
    // CELLS
    VCPU_Branch_Predictor* __PVT__BP;
    VCPU_ImmGenerator* __PVT__ImmGen;
    VCPU_ICache* __PVT__U_Cache;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__IF_ID_Write,0,0);
    VL_IN8(__PVT__Branch,0,0);
    VL_OUT8(__PVT__IStall,0,0);
    CData/*0:0*/ __PVT__Jump;
    CData/*0:0*/ __PVT__BranchInst;
    CData/*0:0*/ __PVT__Predict;
    CData/*4:0*/ __Vcellinp__BP__rs1;
    VL_IN(__PVT__pc_in,31,0);
    VL_IN(__PVT__ExtMemInst,31,0);
    VL_OUT(__PVT__PcOut,31,0);
    VL_OUT(__PVT__InstOut,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_IF(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_IF();
    VL_UNCOPYABLE(VCPU_IF);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
