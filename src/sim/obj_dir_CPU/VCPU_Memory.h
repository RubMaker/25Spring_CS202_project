// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_MEMORY_H_
#define VERILATED_VCPU_MEMORY_H_  // guard

#include "verilated.h"
class VCPU_ExpAddressHandler;
class VCPU_MMIO;
class VCPU_MemorySim;


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_Memory final : public VerilatedModule {
  public:
    // CELLS
    VCPU_MemorySim* mem_inst;
    VCPU_ExpAddressHandler* __PVT__exp_inst;
    VCPU_MMIO* __PVT__mmio_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__clkA,0,0);
    VL_IN8(__PVT__clkB,0,0);
    VL_IN8(__PVT__EnableWriteB,0,0);
    VL_IN8(__PVT__Switch1,7,0);
    VL_IN8(__PVT__Switch2,7,0);
    VL_IN8(__PVT__Button1,0,0);
    VL_IN8(__PVT__Button2,0,0);
    VL_IN8(__PVT__Button3,0,0);
    VL_IN8(__PVT__Button4,0,0);
    VL_IN8(__PVT__Button5,0,0);
    VL_OUT8(__PVT__Led1Out,7,0);
    VL_OUT8(__PVT__Led2Out,7,0);
    VL_OUT8(__PVT__CharOut,7,0);
    VL_OUT8(__PVT__ColorOut,7,0);
    CData/*0:0*/ __PVT__EnWB;
    VL_IN16(__PVT__VgaAddress,11,0);
    VL_IN(__PVT__AddressA,31,0);
    VL_IN(__PVT__AddressB,31,0);
    VL_IN(__PVT__WriteData,31,0);
    VL_OUT(__PVT__Seg1Out,31,0);
    VL_OUT(__PVT__ReadDataA,31,0);
    VL_OUT(__PVT__ReadDataB,31,0);
    IData/*31:0*/ __Vcellinp__mem_inst__write_datab;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_Memory(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_Memory();
    VL_UNCOPYABLE(VCPU_Memory);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
