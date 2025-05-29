// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_DataCache.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_DataCache___ico_sequent__TOP__CPU__dcache_sl__0(VCPU_DataCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_DataCache___ico_sequent__TOP__CPU__dcache_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__DataOut = ((4U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemoryOperation))
                                 ? ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemoryOperation))
                                     ? ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemoryOperation))
                                         ? vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2
                                         : ((2U & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                             ? ((vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB))
                                             : ((0xffff0000U 
                                                 & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB) 
                                                | (0xffffU 
                                                   & vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))))
                                     : ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemoryOperation))
                                         ? ((2U & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                             ? ((1U 
                                                 & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                                 ? 
                                                ((vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2 
                                                  << 0x18U) 
                                                 | (0xffffffU 
                                                    & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB))
                                                 : 
                                                ((0xff000000U 
                                                  & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB) 
                                                 | ((0xff0000U 
                                                     & (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2 
                                                        << 0x10U)) 
                                                    | (0xffffU 
                                                       & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB))))
                                             : ((1U 
                                                 & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                                 ? 
                                                ((0xffff0000U 
                                                  & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB) 
                                                 | ((0xff00U 
                                                     & (vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB)))
                                                 : 
                                                ((0xffffff00U 
                                                  & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB) 
                                                 | (0xffU 
                                                    & vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))))
                                         : (0xffffU 
                                            & ((2U 
                                                & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                                ? (vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB 
                                                   >> 0x10U)
                                                : vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB))))
                                 : ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemoryOperation))
                                     ? ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemoryOperation))
                                         ? (0xffU & 
                                            ((2U & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                              ? ((1U 
                                                  & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                                  ? 
                                                 (vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB 
                                                  >> 0x18U)
                                                  : 
                                                 (vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB 
                                                  >> 0x10U))
                                              : ((1U 
                                                  & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                                  ? 
                                                 (vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB 
                                                  >> 8U)
                                                  : vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB)))
                                         : vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB)
                                     : ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__MemoryOperation))
                                         ? ((2U & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                             ? ((((vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB 
                                                   >> 0x1fU)
                                                   ? 0xffffU
                                                   : 0U) 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB 
                                                   >> 0x10U))
                                             : ((((0x8000U 
                                                   & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB)
                                                   ? 0xffffU
                                                   : 0U) 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB)))
                                         : ((2U & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                             ? ((1U 
                                                 & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                                 ? 
                                                ((((vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB 
                                                    >> 0x1fU)
                                                    ? 0xffffffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | (vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB 
                                                    >> 0x18U))
                                                 : 
                                                ((((0x800000U 
                                                    & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB)
                                                    ? 0xffffffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & (vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB 
                                                       >> 0x10U))))
                                             : ((1U 
                                                 & vlSymsp->TOP__CPU__alu_sl.__PVT__Result)
                                                 ? 
                                                ((((0x8000U 
                                                    & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB)
                                                    ? 0xffffffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & (vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB 
                                                       >> 8U)))
                                                 : 
                                                ((((0x80U 
                                                    & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB)
                                                    ? 0xffffffU
                                                    : 0U) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSymsp->TOP__CPU__memory_sl.__PVT__ReadDataB)))))));
}
