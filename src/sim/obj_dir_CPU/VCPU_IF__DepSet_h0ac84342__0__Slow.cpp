// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_IF.h"

VL_ATTR_COLD void VCPU_IF___ctor_var_reset(VCPU_IF* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_IF___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__pc_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4451962802771921047ull);
    vlSelf->__PVT__IF_ID_Write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17895099397535942678ull);
    vlSelf->__PVT__Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17011070356470955563ull);
    vlSelf->__PVT__IStall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17213618993558672001ull);
    vlSelf->__PVT__ExtMemInst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4535742080766185893ull);
    vlSelf->__PVT__PcOut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5478066477895183844ull);
    vlSelf->__PVT__InstOut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14758167407944889559ull);
    vlSelf->__PVT__Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10584496081580859644ull);
    vlSelf->__PVT__BranchInst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12777763190556816835ull);
    vlSelf->__PVT__Predict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1934432483985162891ull);
    vlSelf->__Vcellinp__BP__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4426847355856436713ull);
}
