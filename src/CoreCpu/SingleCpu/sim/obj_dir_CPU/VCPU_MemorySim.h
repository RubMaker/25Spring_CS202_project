// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_MEMORYSIM_H_
#define VERILATED_VCPU_MEMORYSIM_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_MemorySim final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clka,0,0);
    VL_IN8(__PVT__clkb,0,0);
    VL_IN8(__PVT__web,0,0);
    VL_IN16(__PVT__addra,13,0);
    VL_IN16(__PVT__addrb,13,0);
    VL_IN(__PVT__write_datab,31,0);
    VL_OUT(__PVT__dataa,31,0);
    VL_OUT(__PVT__datab,31,0);
    IData/*31:0*/ __PVT__dataa_temp;
    IData/*31:0*/ __PVT__datab_temp;
    VlUnpacked<IData/*31:0*/, 16384> mem;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_MemorySim(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_MemorySim();
    VL_UNCOPYABLE(VCPU_MemorySim);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
