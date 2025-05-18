// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPUSin.h for the primary calling header

#ifndef VERILATED_VCPUSIN___024ROOT_H_
#define VERILATED_VCPUSIN___024ROOT_H_  // guard

#include "verilated.h"
class VCPUSin_CPUSin;


class VCPUSin__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPUSin___024root final : public VerilatedModule {
  public:
    // CELLS
    VCPUSin_CPUSin* CPUSin;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(memclk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(UartOver,0,0);
    VL_IN8(Switch1,7,0);
    VL_IN8(Switch2,7,0);
    VL_IN8(Button1,0,0);
    VL_IN8(Button2,0,0);
    VL_IN8(Button3,0,0);
    VL_IN8(Button4,0,0);
    VL_IN8(Button5,0,0);
    VL_OUT8(Led1,7,0);
    VL_OUT8(Led2,7,0);
    VL_OUT8(CharOut,7,0);
    VL_OUT8(ColorOut,7,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__memclk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(VgaAddress,11,0);
    VL_IN(UartData,31,0);
    VL_IN(UartAddress,31,0);
    VL_OUT(Seg1Out,31,0);
    VL_OUT(Pc_test,31,0);
    VL_OUT(Inst_test,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCPUSin__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPUSin___024root(VCPUSin__Syms* symsp, const char* v__name);
    ~VCPUSin___024root();
    VL_UNCOPYABLE(VCPUSin___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
