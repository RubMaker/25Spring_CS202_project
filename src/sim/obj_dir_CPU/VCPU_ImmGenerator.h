// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_IMMGENERATOR_H_
#define VERILATED_VCPU_IMMGENERATOR_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_ImmGenerator final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN(__PVT__Instruction,31,0);
    VL_OUT(__PVT__ImmData,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_ImmGenerator(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_ImmGenerator();
    VL_UNCOPYABLE(VCPU_ImmGenerator);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
