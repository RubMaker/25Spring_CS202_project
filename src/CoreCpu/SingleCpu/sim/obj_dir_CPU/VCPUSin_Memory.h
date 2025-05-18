// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPUSin.h for the primary calling header

#ifndef VERILATED_VCPUSIN_MEMORY_H_
#define VERILATED_VCPUSIN_MEMORY_H_  // guard

#include "verilated.h"
class VCPUSin_MemorySim;


class VCPUSin__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPUSin_Memory final : public VerilatedModule {
  public:
    // CELLS
    VCPUSin_MemorySim* mem_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clkB,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__clkA,0,0);
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
    CData/*7:0*/ __PVT__mmio_inst__DOT__Led1;
    CData/*7:0*/ __PVT__mmio_inst__DOT__Led2;
    CData/*7:0*/ mmio_inst__DOT____Vlvbound_h1410888b__0;
    CData/*7:0*/ mmio_inst__DOT____Vlvbound_hf13a2a6e__0;
    CData/*7:0*/ mmio_inst__DOT____Vlvbound_h37617fa1__0;
    CData/*7:0*/ mmio_inst__DOT____Vlvbound_h45e5c314__0;
    VL_IN16(__PVT__VgaAddress,11,0);
    VL_IN(__PVT__AddressA,31,0);
    VL_IN(__PVT__AddressB,31,0);
    VL_IN(__PVT__WriteData,31,0);
    VL_OUT(__PVT__Seg1Out,31,0);
    VL_OUT(__PVT__ReadDataA,31,0);
    VL_OUT(__PVT__ReadDataB,31,0);
    IData/*31:0*/ __PVT__ExpData;
    IData/*31:0*/ __Vcellinp__mem_inst__write_datab;
    IData/*31:0*/ __PVT__mmio_inst__DOT__Seg1;
    IData/*31:0*/ __PVT__mmio_inst__DOT__unnamedblk1__DOT__i;
    VlUnpacked<CData/*7:0*/, 3072> __PVT__mmio_inst__DOT__chars;
    VlUnpacked<CData/*7:0*/, 3072> __PVT__mmio_inst__DOT__color;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 3072>, false, CData/*7:0*/, 1> __VdlyCommitQueuemmio_inst__DOT__chars;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 3072>, false, CData/*7:0*/, 1> __VdlyCommitQueuemmio_inst__DOT__color;

    // INTERNAL VARIABLES
    VCPUSin__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPUSin_Memory(VCPUSin__Syms* symsp, const char* v__name);
    ~VCPUSin_Memory();
    VL_UNCOPYABLE(VCPUSin_Memory);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
