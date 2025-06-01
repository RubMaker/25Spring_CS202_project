// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_IF_ID.h"

VL_ATTR_COLD void VCPU_IF_ID___ctor_var_reset(VCPU_IF_ID* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_IF_ID___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__IF_ID_Write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17895099397535942678ull);
    vlSelf->__PVT__DStall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6319916911617467031ull);
    vlSelf->__PVT__IStall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17213618993558672001ull);
    vlSelf->__PVT__inst_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15544804360470151695ull);
    vlSelf->__PVT__pc_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4451962802771921047ull);
    vlSelf->__PVT__inst_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17653795111096142571ull);
    vlSelf->__PVT__pc_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4379395961601650806ull);
    vlSelf->__PVT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9812503827101699671ull);
    vlSelf->__PVT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->__Vdly__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11429183334564586508ull);
}
