// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_DATACACHE_H_
#define VERILATED_VCPU_DATACACHE_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_DataCache final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__MemOperation,2,0);
    VL_IN8(__PVT__MemRead,0,0);
    VL_IN8(__PVT__MemWrite,0,0);
    VL_OUT8(__PVT__MemWriteEnB,0,0);
    VL_IN(__PVT__Address,31,0);
    VL_IN(__PVT__WriteData,31,0);
    VL_OUT(__PVT__DataOut,31,0);
    VL_IN(__PVT__MemData,31,0);
    VL_OUT(__PVT__MemAddress,31,0);
    VL_OUT(__PVT__MemWriteData,31,0);
    IData/*31:0*/ __PVT__Data1FF3;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_DataCache(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_DataCache();
    VL_UNCOPYABLE(VCPU_DataCache);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
