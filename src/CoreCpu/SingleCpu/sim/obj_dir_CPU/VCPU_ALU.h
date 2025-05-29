// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_ALU_H_
#define VERILATED_VCPU_ALU_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_ALU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__AluOperation,3,0);
    VL_IN(__PVT__InputA,31,0);
    VL_IN(__PVT__InputB,31,0);
    VL_OUT(__PVT__Result,31,0);
    VlWide<4>/*127:0*/ __PVT__FullMul;
    QData/*63:0*/ __PVT__Mul;
    QData/*63:0*/ __PVT__SignedInputAExt;
    QData/*63:0*/ __PVT__UnsignedInputBExt;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_ALU(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_ALU();
    VL_UNCOPYABLE(VCPU_ALU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
