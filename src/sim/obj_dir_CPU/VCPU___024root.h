// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"
class VCPU_CPU;


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU___024root final : public VerilatedModule {
  public:
    // CELLS
    VCPU_CPU* CPU;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(mem_clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(Switch1,7,0);
    VL_IN8(Switch2,7,0);
    VL_IN8(Button1,0,0);
    VL_IN8(Button2,0,0);
    VL_IN8(Button3,0,0);
    VL_IN8(Button4,0,0);
    VL_IN8(Button5,0,0);
    VL_OUT8(Led1Out,7,0);
    VL_OUT8(Led2Out,7,0);
    VL_OUT8(CharOut,7,0);
    VL_OUT8(ColorOut,7,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mem_clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(VgaAddress,11,0);
    VL_OUT(pc_out,31,0);
    VL_OUT(inst_out,31,0);
    VL_OUT(Seg1Out,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU___024root(VCPU__Syms* symsp, const char* v__name);
    ~VCPU___024root();
    VL_UNCOPYABLE(VCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
