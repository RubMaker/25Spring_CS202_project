// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_InstCache.h"

VL_ATTR_COLD void VCPU_InstCache___ctor_var_reset(VCPU_InstCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_InstCache___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__Address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 224589347255615128ull);
    vlSelf->__PVT__Instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6259496675603560950ull);
    vlSelf->__PVT__MemInstruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16365495665690063742ull);
}
