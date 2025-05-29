// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_MUX2_H_
#define VERILATED_VCPU_MUX2_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_Mux2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__Select,0,0);
    VL_IN(__PVT__Input0,31,0);
    VL_IN(__PVT__Input1,31,0);
    VL_OUT(__PVT__Output,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_Mux2(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_Mux2();
    VL_UNCOPYABLE(VCPU_Mux2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
