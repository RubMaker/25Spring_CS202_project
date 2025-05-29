// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ALU.h"

VL_ATTR_COLD void VCPU_ALU___ctor_var_reset(VCPU_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_ALU___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__InputA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10921647887398267179ull);
    vlSelf->__PVT__InputB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1665218471773712244ull);
    vlSelf->__PVT__AluOperation = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1322679058490821605ull);
    vlSelf->__PVT__Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9792351497816924968ull);
    vlSelf->__PVT__Mul = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6151635078612787364ull);
    vlSelf->__PVT__SignedInputAExt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13278869363012127691ull);
    vlSelf->__PVT__UnsignedInputBExt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8850024619033991032ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__FullMul, __VscopeHash, 13555940477816457287ull);
}
