// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_DCACHE_H_
#define VERILATED_VCPU_DCACHE_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_DCache final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__MemRead,0,0);
    VL_IN8(__PVT__MemWrite,0,0);
    VL_IN8(__PVT__LS_op,2,0);
    VL_OUT8(__PVT__DStall,0,0);
    VL_OUT8(__PVT__MemWb,0,0);
    CData/*1:0*/ __PVT__state;
    CData/*0:0*/ __PVT__hit;
    CData/*7:0*/ __VdfgRegularize_hc4d58fb9_0_0;
    CData/*7:0*/ __VdfgRegularize_hc4d58fb9_0_1;
    CData/*7:0*/ __VdfgRegularize_hc4d58fb9_0_2;
    VL_IN(__PVT__Addr,31,0);
    VL_IN(__PVT__WriteData,31,0);
    VL_OUT(__PVT__DataOut,31,0);
    VL_IN(__PVT__MemData,31,0);
    VL_OUT(__PVT__MemAddr,31,0);
    VL_OUT(__PVT__MemWriteData,31,0);
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ __PVT__cache_data;
    IData/*31:0*/ __PVT__proc_MemData;
    IData/*31:0*/ __PVT__updated_data;
    VlUnpacked<QData/*58:0*/, 16> __PVT__Cache;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_DCache(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_DCache();
    VL_UNCOPYABLE(VCPU_DCache);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
