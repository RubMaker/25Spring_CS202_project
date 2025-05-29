// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ImmGenerator.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_ImmGenerator___ico_sequent__TOP__CPU__imm_sl__0(VCPU_ImmGenerator* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_ImmGenerator___ico_sequent__TOP__CPU__imm_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((0x13U == (0x7fU & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) 
          | (3U == (0x7fU & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction))) 
         | (0x67U == (0x7fU & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)))) {
        vlSelfRef.__PVT__ImmData = ((((vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                       >> 0x1fU) ? 0xfffffU
                                       : 0U) << 0xcU) 
                                    | (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                       >> 0x14U));
    } else if ((0x23U == (0x7fU & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction))) {
        vlSelfRef.__PVT__ImmData = ((((vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                       >> 0x1fU) ? 0xfffffU
                                       : 0U) << 0xcU) 
                                    | ((0xfe0U & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                                  >> 0x14U)) 
                                       | (0x1fU & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                                   >> 7U))));
    } else if ((0x63U == (0x7fU & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction))) {
        vlSelfRef.__PVT__ImmData = ((0xffffe000U & vlSelfRef.__PVT__ImmData) 
                                    | (((0x1000U & 
                                         (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                          >> 0x13U)) 
                                        | (0x800U & 
                                           (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                            << 4U))) 
                                       | ((0x7e0U & 
                                           (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                                >> 7U)))));
        vlSelfRef.__PVT__ImmData = ((0x1fffU & vlSelfRef.__PVT__ImmData) 
                                    | (((vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                         >> 0x1fU) ? 0x7ffffU
                                         : 0U) << 0xdU));
    } else if (((0x37U == (0x7fU & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) 
                | (0x17U == (0x7fU & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)))) {
        vlSelfRef.__PVT__ImmData = (0xfffff000U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction);
    } else if ((0x6fU == (0x7fU & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction))) {
        vlSelfRef.__PVT__ImmData = ((0xffe00000U & vlSelfRef.__PVT__ImmData) 
                                    | (((0x100000U 
                                         & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction) 
                                           | (0x800U 
                                              & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                                 >> 9U)))) 
                                       | (0x7feU & 
                                          (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                           >> 0x14U))));
        vlSelfRef.__PVT__ImmData = ((0x1fffffU & vlSelfRef.__PVT__ImmData) 
                                    | (((vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                         >> 0x1fU) ? 0x7ffU
                                         : 0U) << 0x15U));
    } else {
        vlSelfRef.__PVT__ImmData = 0U;
    }
}
