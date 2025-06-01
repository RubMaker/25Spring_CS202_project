// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Forwarding.h"

VL_ATTR_COLD void VCPU_Forwarding___ctor_var_reset(VCPU_Forwarding* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_Forwarding___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__EX_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15733686907238268397ull);
    vlSelf->__PVT__EX_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 940718153470227377ull);
    vlSelf->__PVT__MEM_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4677011968037571794ull);
    vlSelf->__PVT__MEM_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4638690130858514983ull);
    vlSelf->__PVT__EX_MEM_AluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4074895891763361870ull);
    vlSelf->__PVT__WB_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 128271659530050066ull);
    vlSelf->__PVT__WB_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8225988312967104264ull);
    vlSelf->__PVT__WB_Result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5210289467882631618ull);
    vlSelf->__PVT__Rs1Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9501844586541972087ull);
    vlSelf->__PVT__Rs2Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5509325145560023827ull);
    vlSelf->__PVT__Forwarded_A = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13684411041639471439ull);
    vlSelf->__PVT__Forwarded_B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11381333714347869079ull);
}
