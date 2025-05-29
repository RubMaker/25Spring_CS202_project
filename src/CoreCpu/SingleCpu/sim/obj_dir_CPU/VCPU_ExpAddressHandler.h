// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_EXPADDRESSHANDLER_H_
#define VERILATED_VCPU_EXPADDRESSHANDLER_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_ExpAddressHandler final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN(__PVT__Address,31,0);
    VL_OUT(__PVT__ExpData,31,0);

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_ExpAddressHandler(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_ExpAddressHandler();
    VL_UNCOPYABLE(VCPU_ExpAddressHandler);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
