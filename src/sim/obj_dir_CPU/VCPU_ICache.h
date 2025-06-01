// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_ICACHE_H_
#define VERILATED_VCPU_ICACHE_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_ICache final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_OUT8(__PVT__IStall,0,0);
    CData/*0:0*/ __PVT__State;
    CData/*0:0*/ __PVT__Hit;
    CData/*0:0*/ __PVT__StallReg;
    CData/*0:0*/ __Vdly__State;
    CData/*0:0*/ __VdlySet__CacheValid__v0;
    CData/*0:0*/ __VdlySet__CacheValid__v1;
    CData/*0:0*/ __VdlySet__CacheData__v16;
    VL_IN(__PVT__Addr,31,0);
    VL_IN(__PVT__ExtMemInst,31,0);
    VL_OUT(__PVT__Inst,31,0);
    IData/*31:0*/ __PVT__InstReg;
    IData/*31:0*/ __PVT__I;
    VlUnpacked<IData/*31:0*/, 16> __PVT__CacheData;
    VlUnpacked<IData/*25:0*/, 16> __PVT__CacheTag;
    VlUnpacked<CData/*0:0*/, 16> __PVT__CacheValid;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_ICache(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_ICache();
    VL_UNCOPYABLE(VCPU_ICache);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
