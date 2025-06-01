// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_EX.h"

VL_ATTR_COLD void VCPU_EX___ctor_var_reset(VCPU_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_EX___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__Rs1Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9501844586541972087ull);
    vlSelf->__PVT__Rs2Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5509325145560023827ull);
    vlSelf->__PVT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10211807078052224816ull);
    vlSelf->__PVT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 392999376545494891ull);
    vlSelf->__PVT__ex_mem_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15488483898575448744ull);
    vlSelf->__PVT__ex_mem_regwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3272993195976075607ull);
    vlSelf->__PVT__ex_mem_aluresult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13728808669230154063ull);
    vlSelf->__PVT__mem_wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8506654544299532341ull);
    vlSelf->__PVT__mem_wb_regwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16500995905940006519ull);
    vlSelf->__PVT__wb_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12566421596463412480ull);
    vlSelf->__PVT__Imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13463656139135615001ull);
    vlSelf->__PVT__ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18256335879219815609ull);
    vlSelf->__PVT__ALUOp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13831474586500990162ull);
    vlSelf->__PVT__Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17011070356470955563ull);
    vlSelf->__PVT__BRU_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4782715685465598811ull);
    vlSelf->__PVT__Pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13336631297988802748ull);
    vlSelf->__PVT__ALU_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13980410541298907990ull);
    vlSelf->__PVT__BranchTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11755471588695498047ull);
    vlSelf->__PVT__OldPc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14395524403238895593ull);
}
