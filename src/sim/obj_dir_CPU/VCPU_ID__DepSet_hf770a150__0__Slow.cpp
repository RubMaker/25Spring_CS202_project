// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ID.h"

VL_ATTR_COLD void VCPU_ID___ctor_var_reset(VCPU_ID* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_ID___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__Inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6741923410542025115ull);
    vlSelf->__PVT__PcIn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 499042939154661063ull);
    vlSelf->__PVT__PcOut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5478066477895183844ull);
    vlSelf->__PVT__Rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5129377351112949026ull);
    vlSelf->__PVT__Imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13463656139135615001ull);
    vlSelf->__PVT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3806711693106967809ull);
    vlSelf->__PVT__ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18256335879219815609ull);
    vlSelf->__PVT__MemtoReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17900773327691581164ull);
    vlSelf->__PVT__MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434942013124915871ull);
    vlSelf->__PVT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6222392603918024337ull);
    vlSelf->__PVT__Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17011070356470955563ull);
    vlSelf->__PVT__PcWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17539943729614734864ull);
    vlSelf->__PVT__ALU_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6668319976152363782ull);
    vlSelf->__PVT__BRU_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4782715685465598811ull);
    vlSelf->__PVT__LS_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12618763082606707403ull);
    vlSelf->__PVT__ID_EX_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16513073935628751843ull);
    vlSelf->__PVT__ID_EX_Rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10098872371444371184ull);
    vlSelf->__PVT__IF_ID_Write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17895099397535942678ull);
    vlSelf->__PVT__Rs1Addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1865156212874184987ull);
    vlSelf->__PVT__Rs2Addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9022508400732062330ull);
    vlSelf->__PVT__Stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1599611266478152007ull);
}
