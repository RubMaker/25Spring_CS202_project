// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ID_EX.h"

VL_ATTR_COLD void VCPU_ID_EX___ctor_var_reset(VCPU_ID_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_ID_EX___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->__PVT__PcIn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 499042939154661063ull);
    vlSelf->__PVT__Rs1In = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4442191840618444212ull);
    vlSelf->__PVT__Rs2In = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12074896429908848878ull);
    vlSelf->__PVT__RdIn = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15282906728695359026ull);
    vlSelf->__PVT__ImmIn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16569219224775877010ull);
    vlSelf->__PVT__rs1_in = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13543927702068641516ull);
    vlSelf->__PVT__rs2_in = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11845026473881903871ull);
    vlSelf->__PVT__RegWriteIn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5539081885635638066ull);
    vlSelf->__PVT__ALUSrcIn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 809662045533442880ull);
    vlSelf->__PVT__MemtoRegIn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2144991362954480090ull);
    vlSelf->__PVT__MemReadIn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2996654560598286723ull);
    vlSelf->__PVT__MemWriteIn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 147291093099087995ull);
    vlSelf->__PVT__BranchIn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8489959221984280381ull);
    vlSelf->__PVT__ALU_opIn = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12156196622288056563ull);
    vlSelf->__PVT__BRU_opIn = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9669541434503950000ull);
    vlSelf->__PVT__LS_opIn = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16949125304257136754ull);
    vlSelf->__PVT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7179230919112499263ull);
    vlSelf->__PVT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8361382489806169962ull);
    vlSelf->__PVT__PcOut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5478066477895183844ull);
    vlSelf->__PVT__Rs1Out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9814785440086978891ull);
    vlSelf->__PVT__Rs2Out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17166834491950966279ull);
    vlSelf->__PVT__RdOut = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3362153219965334663ull);
    vlSelf->__PVT__ImmOut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12411393242025191572ull);
    vlSelf->__PVT__rs1_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8092479236763461277ull);
    vlSelf->__PVT__rs2_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2072742683039084026ull);
    vlSelf->__PVT__RegWriteOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13887972217806340514ull);
    vlSelf->__PVT__ALUSrcOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6714319409072297531ull);
    vlSelf->__PVT__MemtoRegOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10557337010494459004ull);
    vlSelf->__PVT__MemReadOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8608001570348364607ull);
    vlSelf->__PVT__MemWriteOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8681728678968791342ull);
    vlSelf->__PVT__BranchOut = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4790431089307130980ull);
    vlSelf->__PVT__ALU_opOut = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17764420836986625624ull);
    vlSelf->__PVT__BRU_opOut = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9330540107451634079ull);
    vlSelf->__PVT__LS_opOut = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18440155832277788808ull);
    vlSelf->__PVT__Pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13336631297988802748ull);
    vlSelf->__PVT__Rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3776051774964689599ull);
    vlSelf->__PVT__Rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16579071978838602716ull);
    vlSelf->__PVT__Rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5129377351112949026ull);
    vlSelf->__PVT__Imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13463656139135615001ull);
    vlSelf->__PVT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10211807078052224816ull);
    vlSelf->__PVT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 392999376545494891ull);
    vlSelf->__PVT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3806711693106967809ull);
    vlSelf->__PVT__ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18256335879219815609ull);
    vlSelf->__PVT__MemtoReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17900773327691581164ull);
    vlSelf->__PVT__MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434942013124915871ull);
    vlSelf->__PVT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6222392603918024337ull);
    vlSelf->__PVT__Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17011070356470955563ull);
    vlSelf->__PVT__ALU_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6668319976152363782ull);
    vlSelf->__PVT__BRU_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4782715685465598811ull);
    vlSelf->__PVT__LS_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12618763082606707403ull);
    vlSelf->__Vdly__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4792017708572098822ull);
    vlSelf->__Vdly__MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7929915274919567628ull);
    vlSelf->__Vdly__MemtoReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1842139352933226407ull);
    vlSelf->__Vdly__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5360462055094088624ull);
    vlSelf->__Vdly__Rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15819930222878902521ull);
    vlSelf->__Vdly__Rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17297246983557907593ull);
}
