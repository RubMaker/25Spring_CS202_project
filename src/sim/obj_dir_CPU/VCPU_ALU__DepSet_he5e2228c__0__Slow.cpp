// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ALU.h"

VL_ATTR_COLD void VCPU_ALU___ctor_var_reset(VCPU_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_ALU___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__ALU_in1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17492795932680508464ull);
    vlSelf->__PVT__ALU_in2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9738121900385391394ull);
    vlSelf->__PVT__ALUOp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13831474586500990162ull);
    vlSelf->__PVT__ALU_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13980410541298907990ull);
    vlSelf->__PVT__Mult = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11028393887117440943ull);
}
