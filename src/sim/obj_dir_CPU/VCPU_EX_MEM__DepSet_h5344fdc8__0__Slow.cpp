// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_EX_MEM.h"

VL_ATTR_COLD void VCPU_EX_MEM___ctor_var_reset(VCPU_EX_MEM* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_EX_MEM___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    vlSelf->__PVT__ALUres_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8497666241781428694ull);
    vlSelf->__PVT__data2_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5570762268676643645ull);
    vlSelf->__PVT__rd_in = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2360893122268051682ull);
    vlSelf->__PVT__MEM_ctrl_in = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10520720838898517782ull);
    vlSelf->__PVT__WB_ctrl_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15590402522185347282ull);
    vlSelf->__PVT__ALUres_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1147955758541095994ull);
    vlSelf->__PVT__data2_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6018226283180600803ull);
    vlSelf->__PVT__rd_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9524451679737905392ull);
    vlSelf->__PVT__MEM_ctrl_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6674280072471309671ull);
    vlSelf->__PVT__WB_ctrl_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6827274990433026492ull);
    vlSelf->__PVT__ALUres = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7896392219701686178ull);
    vlSelf->__PVT__data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2099290849777515148ull);
    vlSelf->__PVT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10303652599525973633ull);
    vlSelf->__PVT__MEM_ctrl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6090968309981442621ull);
    vlSelf->__PVT__WB_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3061049778848844510ull);
    vlSelf->__Vdly__ALUres = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7091833790764341749ull);
    vlSelf->__Vdly__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9114254097571245988ull);
    vlSelf->__Vdly__WB_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10486201505085479854ull);
}
