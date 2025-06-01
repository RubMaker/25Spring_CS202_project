// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Hazard.h"

VL_ATTR_COLD void VCPU_Hazard___ctor_var_reset(VCPU_Hazard* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_Hazard___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__ID_EX_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16513073935628751843ull);
    vlSelf->__PVT__ID_EX_Rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10098872371444371184ull);
    vlSelf->__PVT__IF_Rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10217947575951596583ull);
    vlSelf->__PVT__IF_Rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2215329695340350319ull);
    vlSelf->__PVT__Stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1599611266478152007ull);
    vlSelf->__PVT__PcWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17539943729614734864ull);
    vlSelf->__PVT__IF_ID_Write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17895099397535942678ull);
}
