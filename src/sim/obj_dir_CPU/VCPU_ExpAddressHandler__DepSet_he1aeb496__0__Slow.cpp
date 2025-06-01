// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ExpAddressHandler.h"

VL_ATTR_COLD void VCPU_ExpAddressHandler___ctor_var_reset(VCPU_ExpAddressHandler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_ExpAddressHandler___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__Address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 224589347255615128ull);
    vlSelf->__PVT__ExpData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4782245183224647954ull);
}
