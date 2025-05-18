// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin_CPUSin.h"

VL_ATTR_COLD void VCPUSin_CPUSin___eval_static__TOP__CPUSin(VCPUSin_CPUSin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPUSin_CPUSin___eval_static__TOP__CPUSin\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__icache_sl__DOT__hit = ((IData)(
                                                    (vlSelfRef.__PVT__icache_sl__DOT__cache
                                                     [
                                                     (0xfU 
                                                      & (vlSelfRef.__PVT__pc_sl__DOT__PcReg 
                                                         >> 2U))] 
                                                     >> 0x2aU)) 
                                            & ((0x3ffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__icache_sl__DOT__cache
                                                           [
                                                           (0xfU 
                                                            & (vlSelfRef.__PVT__pc_sl__DOT__PcReg 
                                                               >> 2U))] 
                                                           >> 0x20U))) 
                                               == (0x3ffU 
                                                   & (vlSelfRef.__PVT__pc_sl__DOT__PcReg 
                                                      >> 6U))));
}

VL_ATTR_COLD void VCPUSin_CPUSin___eval_initial__TOP__CPUSin(VCPUSin_CPUSin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPUSin_CPUSin___eval_initial__TOP__CPUSin\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__icache_sl__DOT__cache[0U] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[1U] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[2U] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[3U] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[4U] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[5U] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[6U] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[7U] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[8U] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[9U] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[0xaU] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[0xbU] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[0xcU] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[0xdU] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[0xeU] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__cache[0xfU] = 0ULL;
    vlSelfRef.__PVT__icache_sl__DOT__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[1U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[2U] = 0x7ffcU;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[3U] = 0xffffff00U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[4U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[5U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[6U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[7U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[8U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[9U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0xaU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0xbU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0xcU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0xdU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0xeU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0xfU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x10U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x11U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x12U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x13U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x14U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x15U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x16U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x17U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x18U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x19U] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x1aU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x1bU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x1cU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x1dU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x1eU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__Registers[0x1fU] = 0U;
    vlSelfRef.__PVT__regf_sl__DOT__unnamedblk1__DOT__i = 0x20U;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[0U] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[1U] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[2U] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[3U] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[4U] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[5U] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[6U] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[7U] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[8U] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[9U] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[0xaU] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[0xbU] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[0xcU] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[0xdU] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[0xeU] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__cache[0xfU] = 0ULL;
    vlSelfRef.__PVT__dcache_sl__DOT__unnamedblk1__DOT__i = 0x10U;
}

VL_ATTR_COLD void VCPUSin_CPUSin___ctor_var_reset(VCPUSin_CPUSin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPUSin_CPUSin___ctor_var_reset\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->memclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10349351081086712565ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->UartData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3571579159515240112ull);
    vlSelf->UartAddress = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6759084871031218071ull);
    vlSelf->UartOver = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9857322573290285699ull);
    vlSelf->Switch1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4485436964664171585ull);
    vlSelf->Switch2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3114214373581963742ull);
    vlSelf->Button1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17633132580082582429ull);
    vlSelf->Button2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5586330257011968540ull);
    vlSelf->Button3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6426938642945806753ull);
    vlSelf->Button4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4716315135285041578ull);
    vlSelf->Button5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1583275299557269326ull);
    vlSelf->Led1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7922926604351290714ull);
    vlSelf->Led2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18333335547205238031ull);
    vlSelf->Seg1Out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17693769927085233887ull);
    vlSelf->VgaAddress = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9329207576302704564ull);
    vlSelf->CharOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4076422713069510402ull);
    vlSelf->ColorOut = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16966566493434470373ull);
    vlSelf->Pc_test = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6835443492677354364ull);
    vlSelf->Inst_test = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7577123024841876526ull);
    vlSelf->__PVT__NextPc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16024415534037176069ull);
    vlSelf->__PVT__MemPc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10427989209190588699ull);
    vlSelf->__PVT__UartMemAddress = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11758991453112877566ull);
    vlSelf->__PVT__UartMemData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7940956678024607255ull);
    vlSelf->__PVT__FetchInstr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9958531844377485721ull);
    vlSelf->__PVT__ImmData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4918927323312069382ull);
    vlSelf->__PVT__TotalBus = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1472244925840705268ull);
    vlSelf->__PVT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3806711693106967809ull);
    vlSelf->__PVT__Reg1Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9847891908093008815ull);
    vlSelf->__PVT__Reg2Data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8093198805770330790ull);
    vlSelf->__PVT__JumpLink = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7605993951060768050ull);
    vlSelf->__PVT__BranchOperation = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 402487696388586532ull);
    vlSelf->__PVT__AluOperation = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1322679058490821605ull);
    vlSelf->__PVT__MemoryOperation = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9616295375275476819ull);
    vlSelf->__PVT__MemWriteEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1083109016743070886ull);
    vlSelf->__PVT__MemReadEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2410936158534757273ull);
    vlSelf->__PVT__RegWriteEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10161890702638847423ull);
    vlSelf->__PVT__Mem2Reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3225738768541059872ull);
    vlSelf->__PVT__AluSrc1Selector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10888919413870592777ull);
    vlSelf->__PVT__AluSrc2Selector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15747571971653821297ull);
    vlSelf->__PVT__AluSrc1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9988978378834034763ull);
    vlSelf->__PVT__AluSrc2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10003207036479681151ull);
    vlSelf->__PVT__AluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3388407518017186040ull);
    vlSelf->__PVT__DataFromCache = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11277959157216574757ull);
    vlSelf->__PVT__pc_sl__DOT__PcReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12128276358446416756ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__icache_sl__DOT__cache[__Vi0] = VL_SCOPED_RAND_RESET_Q(43, __VscopeHash, 16203728308997188022ull);
    }
    vlSelf->__PVT__icache_sl__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 562114690407881455ull);
    vlSelf->__PVT__icache_sl__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__icache_sl__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__regf_sl__DOT__Registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6446172132409114635ull);
    }
    vlSelf->__PVT__regf_sl__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__regf_sl__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__PVT__alu_sl__DOT__Mul = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 448308893496737655ull);
    vlSelf->__PVT__alu_sl__DOT__SignedInputAExt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14231341643963563444ull);
    vlSelf->__PVT__alu_sl__DOT__UnsignedInputBExt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8517228530652138692ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__alu_sl__DOT__FullMul, __VscopeHash, 7957975199170929440ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__dcache_sl__DOT__cache[__Vi0] = VL_SCOPED_RAND_RESET_Q(44, __VscopeHash, 17507088647296300443ull);
    }
    vlSelf->__PVT__dcache_sl__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__dcache_sl__DOT__unnamedblk2__DOT__i = 0;
}
