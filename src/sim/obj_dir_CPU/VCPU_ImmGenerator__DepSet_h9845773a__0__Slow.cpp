// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ImmGenerator.h"

VL_ATTR_COLD void VCPU_ImmGenerator___ctor_var_reset(VCPU_ImmGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_ImmGenerator___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__Instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6259496675603560950ull);
    vlSelf->__PVT__ImmData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4918927323312069382ull);
}
