// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Mux3.h"

VL_ATTR_COLD void VCPU_Mux3___ctor_var_reset(VCPU_Mux3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_Mux3___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__Select = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16914479330164474878ull);
    vlSelf->__PVT__Input0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1797395044436410521ull);
    vlSelf->__PVT__Input1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14006444757382711255ull);
    vlSelf->__PVT__Input2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5530135553519701433ull);
    vlSelf->__PVT__Output = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6829153458096087589ull);
}
