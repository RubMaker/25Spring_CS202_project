// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Branch_Predictor.h"

VL_ATTR_COLD void VCPU_Branch_Predictor___eval_initial__TOP__CPU__if_stage__BP(VCPU_Branch_Predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_Branch_Predictor___eval_initial__TOP__CPU__if_stage__BP\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Sepc = 0U;
    vlSelfRef.__PVT__RASTop = 0U;
    vlSelfRef.__PVT__StartFlag = 0U;
    vlSelfRef.__PVT__History_Table[0U] = 1U;
    vlSelfRef.__PVT__History_Table[1U] = 1U;
    vlSelfRef.__PVT__History_Table[2U] = 1U;
    vlSelfRef.__PVT__History_Table[3U] = 1U;
    vlSelfRef.__PVT__History_Table[4U] = 1U;
    vlSelfRef.__PVT__History_Table[5U] = 1U;
    vlSelfRef.__PVT__History_Table[6U] = 1U;
    vlSelfRef.__PVT__History_Table[7U] = 1U;
    vlSelfRef.__PVT__History_Table[8U] = 1U;
    vlSelfRef.__PVT__History_Table[9U] = 1U;
    vlSelfRef.__PVT__History_Table[0xaU] = 1U;
    vlSelfRef.__PVT__History_Table[0xbU] = 1U;
    vlSelfRef.__PVT__History_Table[0xcU] = 1U;
    vlSelfRef.__PVT__History_Table[0xdU] = 1U;
    vlSelfRef.__PVT__History_Table[0xeU] = 1U;
    vlSelfRef.__PVT__History_Table[0xfU] = 1U;
    vlSelfRef.__PVT__i = 0x10U;
}

VL_ATTR_COLD void VCPU_Branch_Predictor___ctor_var_reset(VCPU_Branch_Predictor* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_Branch_Predictor___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    vlSelf->__PVT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16985980692193088871ull);
    vlSelf->__PVT__predict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4739188830615447392ull);
    vlSelf->__PVT__excp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15653120384132045831ull);
    vlSelf->__PVT__sret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15480602451564511291ull);
    vlSelf->__PVT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10211807078052224816ull);
    vlSelf->__PVT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10303652599525973633ull);
    vlSelf->__PVT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4211327832146562899ull);
    vlSelf->__PVT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17436245599429385641ull);
    vlSelf->__PVT__old_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13801432725925070336ull);
    vlSelf->__PVT__old_branch_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1683588555017602166ull);
    vlSelf->__PVT__old_predict_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15130030067358624479ull);
    vlSelf->__PVT__old_predict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3643388117135967416ull);
    vlSelf->__PVT__old_actual = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1582975340450315750ull);
    vlSelf->__PVT__old_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6169712481936104857ull);
    vlSelf->__PVT__target_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4916940975175164863ull);
    vlSelf->__PVT__predict_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11642166788433993441ull);
    vlSelf->__PVT__predict_fail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9256326435409135810ull);
    vlSelf->__PVT__Sepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 69509082548390025ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__History_Table[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3787312201025016923ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__Return_Addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6078473845544271560ull);
    }
    vlSelf->__PVT__RASTop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11529227393139353651ull);
    vlSelf->__PVT__StartFlag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1520898834596164467ull);
    vlSelf->__PVT__TargetPCInt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7791112255837741517ull);
    vlSelf->__PVT__PredictResultReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 959946327406746911ull);
    vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
}
