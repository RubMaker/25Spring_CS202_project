// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_MMIO_H_
#define VERILATED_VCPU_MMIO_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_MMIO final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
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
    CData/*7:0*/ __PVT__Led1;
    CData/*7:0*/ __PVT__Led2;
    CData/*7:0*/ __Vlvbound_h1410888b__0;
    CData/*7:0*/ __Vlvbound_hf13a2a6e__0;
    CData/*7:0*/ __Vlvbound_h37617fa1__0;
    CData/*7:0*/ __Vlvbound_h45e5c314__0;
    VL_IN16(__PVT__VgaAddress,11,0);
    VL_IN(__PVT__Address,31,0);
    VL_IN(__PVT__WriteData,31,0);
    VL_OUT(__PVT__Seg1Out,31,0);
    VL_OUT(__PVT__DataIo,31,0);
    IData/*31:0*/ __PVT__Seg1;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    VlUnpacked<CData/*7:0*/, 3072> __PVT__chars;
    VlUnpacked<CData/*7:0*/, 3072> __PVT__color;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 3072>, false, CData/*7:0*/, 1> __VdlyCommitQueuechars;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 3072>, false, CData/*7:0*/, 1> __VdlyCommitQueuecolor;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_MMIO(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_MMIO();
    VL_UNCOPYABLE(VCPU_MMIO);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
