// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin_CPUSin.h"
#include "VCPUSin__Syms.h"

VL_INLINE_OPT void VCPUSin_CPUSin___ico_sequent__TOP__CPUSin__0(VCPUSin_CPUSin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPUSin_CPUSin___ico_sequent__TOP__CPUSin__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.UartOver) {
        vlSelfRef.__PVT__UartMemData = ((IData)(vlSelfRef.__PVT__MemWriteEn)
                                         ? vlSelfRef.__PVT__Reg2Data
                                         : 0U);
        vlSelfRef.__PVT__UartMemAddress = vlSelfRef.__PVT__AluResult;
    } else {
        vlSelfRef.__PVT__UartMemData = vlSymsp->TOP.UartData;
        vlSelfRef.__PVT__UartMemAddress = vlSymsp->TOP.UartAddress;
    }
}

VL_INLINE_OPT void VCPUSin_CPUSin___ico_sequent__TOP__CPUSin__1(VCPUSin_CPUSin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPUSin_CPUSin___ico_sequent__TOP__CPUSin__1\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__DataFromCache = ((4U & (IData)(vlSelfRef.__PVT__MemoryOperation))
                                       ? ((2U & (IData)(vlSelfRef.__PVT__MemoryOperation))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__MemoryOperation))
                                               ? vlSelfRef.__PVT__Reg2Data
                                               : ((2U 
                                                   & vlSelfRef.__PVT__AluResult)
                                                   ? 
                                                  ((vlSelfRef.__PVT__Reg2Data 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & ((0xfU 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelfRef.__PVT__AluResult 
                                                              >> 0x10U)))
                                                          ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                          : 
                                                         (((IData)(
                                                                   (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                    [
                                                                    (0xfU 
                                                                     & (vlSelfRef.__PVT__AluResult 
                                                                        >> 2U))] 
                                                                    >> 0x2bU)) 
                                                           & ((0x3ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                          [
                                                                          (0xfU 
                                                                           & (vlSelfRef.__PVT__AluResult 
                                                                              >> 2U))] 
                                                                          >> 0x20U))) 
                                                              == 
                                                              (0x3ffU 
                                                               & (vlSelfRef.__PVT__AluResult 
                                                                  >> 6U))))
                                                           ? (IData)(
                                                                     vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                     [
                                                                     (0xfU 
                                                                      & (vlSelfRef.__PVT__AluResult 
                                                                         >> 2U))])
                                                           : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB))))
                                                   : 
                                                  ((0xffff0000U 
                                                    & ((0xfU 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelfRef.__PVT__AluResult 
                                                            >> 0x10U)))
                                                        ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                        : 
                                                       (((IData)(
                                                                 (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                  [
                                                                  (0xfU 
                                                                   & (vlSelfRef.__PVT__AluResult 
                                                                      >> 2U))] 
                                                                  >> 0x2bU)) 
                                                         & ((0x3ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                        [
                                                                        (0xfU 
                                                                         & (vlSelfRef.__PVT__AluResult 
                                                                            >> 2U))] 
                                                                        >> 0x20U))) 
                                                            == 
                                                            (0x3ffU 
                                                             & (vlSelfRef.__PVT__AluResult 
                                                                >> 6U))))
                                                         ? (IData)(
                                                                   vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__AluResult 
                                                                       >> 2U))])
                                                         : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB))) 
                                                   | (0xffffU 
                                                      & vlSelfRef.__PVT__Reg2Data))))
                                           : ((1U & (IData)(vlSelfRef.__PVT__MemoryOperation))
                                               ? ((2U 
                                                   & vlSelfRef.__PVT__AluResult)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.__PVT__AluResult)
                                                    ? 
                                                   ((vlSelfRef.__PVT__Reg2Data 
                                                     << 0x18U) 
                                                    | (0xffffffU 
                                                       & ((0xfU 
                                                           == 
                                                           (0xfU 
                                                            & (vlSelfRef.__PVT__AluResult 
                                                               >> 0x10U)))
                                                           ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                           : 
                                                          (((IData)(
                                                                    (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                     [
                                                                     (0xfU 
                                                                      & (vlSelfRef.__PVT__AluResult 
                                                                         >> 2U))] 
                                                                     >> 0x2bU)) 
                                                            & ((0x3ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                           [
                                                                           (0xfU 
                                                                            & (vlSelfRef.__PVT__AluResult 
                                                                               >> 2U))] 
                                                                           >> 0x20U))) 
                                                               == 
                                                               (0x3ffU 
                                                                & (vlSelfRef.__PVT__AluResult 
                                                                   >> 6U))))
                                                            ? (IData)(
                                                                      vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                      [
                                                                      (0xfU 
                                                                       & (vlSelfRef.__PVT__AluResult 
                                                                          >> 2U))])
                                                            : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB))))
                                                    : 
                                                   ((0xff000000U 
                                                     & ((0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelfRef.__PVT__AluResult 
                                                             >> 0x10U)))
                                                         ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                         : 
                                                        (((IData)(
                                                                  (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__AluResult 
                                                                       >> 2U))] 
                                                                   >> 0x2bU)) 
                                                          & ((0x3ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                         [
                                                                         (0xfU 
                                                                          & (vlSelfRef.__PVT__AluResult 
                                                                             >> 2U))] 
                                                                         >> 0x20U))) 
                                                             == 
                                                             (0x3ffU 
                                                              & (vlSelfRef.__PVT__AluResult 
                                                                 >> 6U))))
                                                          ? (IData)(
                                                                    vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                    [
                                                                    (0xfU 
                                                                     & (vlSelfRef.__PVT__AluResult 
                                                                        >> 2U))])
                                                          : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB))) 
                                                    | ((0xff0000U 
                                                        & (vlSelfRef.__PVT__Reg2Data 
                                                           << 0x10U)) 
                                                       | (0xffffU 
                                                          & ((0xfU 
                                                              == 
                                                              (0xfU 
                                                               & (vlSelfRef.__PVT__AluResult 
                                                                  >> 0x10U)))
                                                              ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                              : 
                                                             (((IData)(
                                                                       (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                        [
                                                                        (0xfU 
                                                                         & (vlSelfRef.__PVT__AluResult 
                                                                            >> 2U))] 
                                                                        >> 0x2bU)) 
                                                               & ((0x3ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                              [
                                                                              (0xfU 
                                                                               & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                              >> 0x20U))) 
                                                                  == 
                                                                  (0x3ffU 
                                                                   & (vlSelfRef.__PVT__AluResult 
                                                                      >> 6U))))
                                                               ? (IData)(
                                                                         vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                         [
                                                                         (0xfU 
                                                                          & (vlSelfRef.__PVT__AluResult 
                                                                             >> 2U))])
                                                               : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB))))))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.__PVT__AluResult)
                                                    ? 
                                                   ((0xffff0000U 
                                                     & ((0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelfRef.__PVT__AluResult 
                                                             >> 0x10U)))
                                                         ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                         : 
                                                        (((IData)(
                                                                  (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__AluResult 
                                                                       >> 2U))] 
                                                                   >> 0x2bU)) 
                                                          & ((0x3ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                         [
                                                                         (0xfU 
                                                                          & (vlSelfRef.__PVT__AluResult 
                                                                             >> 2U))] 
                                                                         >> 0x20U))) 
                                                             == 
                                                             (0x3ffU 
                                                              & (vlSelfRef.__PVT__AluResult 
                                                                 >> 6U))))
                                                          ? (IData)(
                                                                    vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                    [
                                                                    (0xfU 
                                                                     & (vlSelfRef.__PVT__AluResult 
                                                                        >> 2U))])
                                                          : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB))) 
                                                    | ((0xff00U 
                                                        & (vlSelfRef.__PVT__Reg2Data 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & ((0xfU 
                                                              == 
                                                              (0xfU 
                                                               & (vlSelfRef.__PVT__AluResult 
                                                                  >> 0x10U)))
                                                              ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                              : 
                                                             (((IData)(
                                                                       (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                        [
                                                                        (0xfU 
                                                                         & (vlSelfRef.__PVT__AluResult 
                                                                            >> 2U))] 
                                                                        >> 0x2bU)) 
                                                               & ((0x3ffU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                              [
                                                                              (0xfU 
                                                                               & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                              >> 0x20U))) 
                                                                  == 
                                                                  (0x3ffU 
                                                                   & (vlSelfRef.__PVT__AluResult 
                                                                      >> 6U))))
                                                               ? (IData)(
                                                                         vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                         [
                                                                         (0xfU 
                                                                          & (vlSelfRef.__PVT__AluResult 
                                                                             >> 2U))])
                                                               : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)))))
                                                    : 
                                                   ((0xffffff00U 
                                                     & ((0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelfRef.__PVT__AluResult 
                                                             >> 0x10U)))
                                                         ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                         : 
                                                        (((IData)(
                                                                  (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__AluResult 
                                                                       >> 2U))] 
                                                                   >> 0x2bU)) 
                                                          & ((0x3ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                         [
                                                                         (0xfU 
                                                                          & (vlSelfRef.__PVT__AluResult 
                                                                             >> 2U))] 
                                                                         >> 0x20U))) 
                                                             == 
                                                             (0x3ffU 
                                                              & (vlSelfRef.__PVT__AluResult 
                                                                 >> 6U))))
                                                          ? (IData)(
                                                                    vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                    [
                                                                    (0xfU 
                                                                     & (vlSelfRef.__PVT__AluResult 
                                                                        >> 2U))])
                                                          : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB))) 
                                                    | (0xffU 
                                                       & vlSelfRef.__PVT__Reg2Data))))
                                               : ((2U 
                                                   & vlSelfRef.__PVT__AluResult)
                                                   ? 
                                                  (((0xfU 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelfRef.__PVT__AluResult 
                                                         >> 0x10U)))
                                                     ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                     : 
                                                    (((IData)(
                                                              (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                               [
                                                               (0xfU 
                                                                & (vlSelfRef.__PVT__AluResult 
                                                                   >> 2U))] 
                                                               >> 0x2bU)) 
                                                      & ((0x3ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                     [
                                                                     (0xfU 
                                                                      & (vlSelfRef.__PVT__AluResult 
                                                                         >> 2U))] 
                                                                     >> 0x20U))) 
                                                         == 
                                                         (0x3ffU 
                                                          & (vlSelfRef.__PVT__AluResult 
                                                             >> 6U))))
                                                      ? (IData)(
                                                                vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                [
                                                                (0xfU 
                                                                 & (vlSelfRef.__PVT__AluResult 
                                                                    >> 2U))])
                                                      : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                   >> 0x10U)
                                                   : 
                                                  (0xffffU 
                                                   & ((0xfU 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelfRef.__PVT__AluResult 
                                                           >> 0x10U)))
                                                       ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                       : 
                                                      (((IData)(
                                                                (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                 [
                                                                 (0xfU 
                                                                  & (vlSelfRef.__PVT__AluResult 
                                                                     >> 2U))] 
                                                                 >> 0x2bU)) 
                                                        & ((0x3ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                       [
                                                                       (0xfU 
                                                                        & (vlSelfRef.__PVT__AluResult 
                                                                           >> 2U))] 
                                                                       >> 0x20U))) 
                                                           == 
                                                           (0x3ffU 
                                                            & (vlSelfRef.__PVT__AluResult 
                                                               >> 6U))))
                                                        ? (IData)(
                                                                  vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                  [
                                                                  (0xfU 
                                                                   & (vlSelfRef.__PVT__AluResult 
                                                                      >> 2U))])
                                                        : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB))))))
                                       : ((2U & (IData)(vlSelfRef.__PVT__MemoryOperation))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__MemoryOperation))
                                               ? ((2U 
                                                   & vlSelfRef.__PVT__AluResult)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.__PVT__AluResult)
                                                    ? 
                                                   (((0xfU 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelfRef.__PVT__AluResult 
                                                          >> 0x10U)))
                                                      ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                      : 
                                                     (((IData)(
                                                               (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                [
                                                                (0xfU 
                                                                 & (vlSelfRef.__PVT__AluResult 
                                                                    >> 2U))] 
                                                                >> 0x2bU)) 
                                                       & ((0x3ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                      [
                                                                      (0xfU 
                                                                       & (vlSelfRef.__PVT__AluResult 
                                                                          >> 2U))] 
                                                                      >> 0x20U))) 
                                                          == 
                                                          (0x3ffU 
                                                           & (vlSelfRef.__PVT__AluResult 
                                                              >> 6U))))
                                                       ? (IData)(
                                                                 vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                 [
                                                                 (0xfU 
                                                                  & (vlSelfRef.__PVT__AluResult 
                                                                     >> 2U))])
                                                       : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                    >> 0x18U)
                                                    : 
                                                   (0xffU 
                                                    & (((0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelfRef.__PVT__AluResult 
                                                             >> 0x10U)))
                                                         ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                         : 
                                                        (((IData)(
                                                                  (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__AluResult 
                                                                       >> 2U))] 
                                                                   >> 0x2bU)) 
                                                          & ((0x3ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                         [
                                                                         (0xfU 
                                                                          & (vlSelfRef.__PVT__AluResult 
                                                                             >> 2U))] 
                                                                         >> 0x20U))) 
                                                             == 
                                                             (0x3ffU 
                                                              & (vlSelfRef.__PVT__AluResult 
                                                                 >> 6U))))
                                                          ? (IData)(
                                                                    vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                    [
                                                                    (0xfU 
                                                                     & (vlSelfRef.__PVT__AluResult 
                                                                        >> 2U))])
                                                          : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                       >> 0x10U)))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.__PVT__AluResult)
                                                    ? 
                                                   (0xffU 
                                                    & (((0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelfRef.__PVT__AluResult 
                                                             >> 0x10U)))
                                                         ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                         : 
                                                        (((IData)(
                                                                  (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__AluResult 
                                                                       >> 2U))] 
                                                                   >> 0x2bU)) 
                                                          & ((0x3ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                         [
                                                                         (0xfU 
                                                                          & (vlSelfRef.__PVT__AluResult 
                                                                             >> 2U))] 
                                                                         >> 0x20U))) 
                                                             == 
                                                             (0x3ffU 
                                                              & (vlSelfRef.__PVT__AluResult 
                                                                 >> 6U))))
                                                          ? (IData)(
                                                                    vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                    [
                                                                    (0xfU 
                                                                     & (vlSelfRef.__PVT__AluResult 
                                                                        >> 2U))])
                                                          : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & ((0xfU 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelfRef.__PVT__AluResult 
                                                            >> 0x10U)))
                                                        ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                        : 
                                                       (((IData)(
                                                                 (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                  [
                                                                  (0xfU 
                                                                   & (vlSelfRef.__PVT__AluResult 
                                                                      >> 2U))] 
                                                                  >> 0x2bU)) 
                                                         & ((0x3ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                        [
                                                                        (0xfU 
                                                                         & (vlSelfRef.__PVT__AluResult 
                                                                            >> 2U))] 
                                                                        >> 0x20U))) 
                                                            == 
                                                            (0x3ffU 
                                                             & (vlSelfRef.__PVT__AluResult 
                                                                >> 6U))))
                                                         ? (IData)(
                                                                   vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__AluResult 
                                                                       >> 2U))])
                                                         : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)))))
                                               : ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelfRef.__PVT__AluResult 
                                                       >> 0x10U)))
                                                   ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                   : 
                                                  (((IData)(
                                                            (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                             [
                                                             (0xfU 
                                                              & (vlSelfRef.__PVT__AluResult 
                                                                 >> 2U))] 
                                                             >> 0x2bU)) 
                                                    & ((0x3ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__AluResult 
                                                                       >> 2U))] 
                                                                   >> 0x20U))) 
                                                       == 
                                                       (0x3ffU 
                                                        & (vlSelfRef.__PVT__AluResult 
                                                           >> 6U))))
                                                    ? (IData)(
                                                              vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                              [
                                                              (0xfU 
                                                               & (vlSelfRef.__PVT__AluResult 
                                                                  >> 2U))])
                                                    : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)))
                                           : ((1U & (IData)(vlSelfRef.__PVT__MemoryOperation))
                                               ? ((2U 
                                                   & vlSelfRef.__PVT__AluResult)
                                                   ? 
                                                  (((- (IData)(
                                                               (((0xfU 
                                                                  == 
                                                                  (0xfU 
                                                                   & (vlSelfRef.__PVT__AluResult 
                                                                      >> 0x10U)))
                                                                  ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                                  : 
                                                                 (((IData)(
                                                                           (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                            [
                                                                            (0xfU 
                                                                             & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                            >> 0x2bU)) 
                                                                   & ((0x3ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                                >> 0x20U))) 
                                                                      == 
                                                                      (0x3ffU 
                                                                       & (vlSelfRef.__PVT__AluResult 
                                                                          >> 6U))))
                                                                   ? (IData)(
                                                                             vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                             [
                                                                             (0xfU 
                                                                              & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))])
                                                                   : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                                >> 0x1fU))) 
                                                    << 0x10U) 
                                                   | (((0xfU 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelfRef.__PVT__AluResult 
                                                            >> 0x10U)))
                                                        ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                        : 
                                                       (((IData)(
                                                                 (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                  [
                                                                  (0xfU 
                                                                   & (vlSelfRef.__PVT__AluResult 
                                                                      >> 2U))] 
                                                                  >> 0x2bU)) 
                                                         & ((0x3ffU 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                        [
                                                                        (0xfU 
                                                                         & (vlSelfRef.__PVT__AluResult 
                                                                            >> 2U))] 
                                                                        >> 0x20U))) 
                                                            == 
                                                            (0x3ffU 
                                                             & (vlSelfRef.__PVT__AluResult 
                                                                >> 6U))))
                                                         ? (IData)(
                                                                   vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__AluResult 
                                                                       >> 2U))])
                                                         : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                      >> 0x10U))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (((0xfU 
                                                                     == 
                                                                     (0xfU 
                                                                      & (vlSelfRef.__PVT__AluResult 
                                                                         >> 0x10U)))
                                                                     ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                                     : 
                                                                    (((IData)(
                                                                              (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                               [
                                                                               (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                               >> 0x2bU)) 
                                                                      & ((0x3ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                                >> 0x20U))) 
                                                                         == 
                                                                         (0x3ffU 
                                                                          & (vlSelfRef.__PVT__AluResult 
                                                                             >> 6U))))
                                                                      ? (IData)(
                                                                                vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))])
                                                                      : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & ((0xfU 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelfRef.__PVT__AluResult 
                                                              >> 0x10U)))
                                                          ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                          : 
                                                         (((IData)(
                                                                   (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                    [
                                                                    (0xfU 
                                                                     & (vlSelfRef.__PVT__AluResult 
                                                                        >> 2U))] 
                                                                    >> 0x2bU)) 
                                                           & ((0x3ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                          [
                                                                          (0xfU 
                                                                           & (vlSelfRef.__PVT__AluResult 
                                                                              >> 2U))] 
                                                                          >> 0x20U))) 
                                                              == 
                                                              (0x3ffU 
                                                               & (vlSelfRef.__PVT__AluResult 
                                                                  >> 6U))))
                                                           ? (IData)(
                                                                     vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                     [
                                                                     (0xfU 
                                                                      & (vlSelfRef.__PVT__AluResult 
                                                                         >> 2U))])
                                                           : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)))))
                                               : ((2U 
                                                   & vlSelfRef.__PVT__AluResult)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.__PVT__AluResult)
                                                    ? 
                                                   (((- (IData)(
                                                                (((0xfU 
                                                                   == 
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__AluResult 
                                                                       >> 0x10U)))
                                                                   ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                                   : 
                                                                  (((IData)(
                                                                            (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                             [
                                                                             (0xfU 
                                                                              & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                             >> 0x2bU)) 
                                                                    & ((0x3ffU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                                >> 0x20U))) 
                                                                       == 
                                                                       (0x3ffU 
                                                                        & (vlSelfRef.__PVT__AluResult 
                                                                           >> 6U))))
                                                                    ? (IData)(
                                                                              vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                              [
                                                                              (0xfU 
                                                                               & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))])
                                                                    : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                                 >> 0x1fU))) 
                                                     << 8U) 
                                                    | (((0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelfRef.__PVT__AluResult 
                                                             >> 0x10U)))
                                                         ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                         : 
                                                        (((IData)(
                                                                  (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelfRef.__PVT__AluResult 
                                                                       >> 2U))] 
                                                                   >> 0x2bU)) 
                                                          & ((0x3ffU 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                         [
                                                                         (0xfU 
                                                                          & (vlSelfRef.__PVT__AluResult 
                                                                             >> 2U))] 
                                                                         >> 0x20U))) 
                                                             == 
                                                             (0x3ffU 
                                                              & (vlSelfRef.__PVT__AluResult 
                                                                 >> 6U))))
                                                          ? (IData)(
                                                                    vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                    [
                                                                    (0xfU 
                                                                     & (vlSelfRef.__PVT__AluResult 
                                                                        >> 2U))])
                                                          : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                       >> 0x18U))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (((0xfU 
                                                                      == 
                                                                      (0xfU 
                                                                       & (vlSelfRef.__PVT__AluResult 
                                                                          >> 0x10U)))
                                                                      ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                                      : 
                                                                     (((IData)(
                                                                               (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                                >> 0x2bU)) 
                                                                       & ((0x3ffU 
                                                                           & (IData)(
                                                                                (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                                >> 0x20U))) 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (vlSelfRef.__PVT__AluResult 
                                                                              >> 6U))))
                                                                       ? (IData)(
                                                                                vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))])
                                                                       : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                                    >> 0x17U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (((0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (vlSelfRef.__PVT__AluResult 
                                                                >> 0x10U)))
                                                            ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                            : 
                                                           (((IData)(
                                                                     (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                      [
                                                                      (0xfU 
                                                                       & (vlSelfRef.__PVT__AluResult 
                                                                          >> 2U))] 
                                                                      >> 0x2bU)) 
                                                             & ((0x3ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                            [
                                                                            (0xfU 
                                                                             & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                            >> 0x20U))) 
                                                                == 
                                                                (0x3ffU 
                                                                 & (vlSelfRef.__PVT__AluResult 
                                                                    >> 6U))))
                                                             ? (IData)(
                                                                       vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                       [
                                                                       (0xfU 
                                                                        & (vlSelfRef.__PVT__AluResult 
                                                                           >> 2U))])
                                                             : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                          >> 0x10U))))
                                                   : 
                                                  ((1U 
                                                    & vlSelfRef.__PVT__AluResult)
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (((0xfU 
                                                                      == 
                                                                      (0xfU 
                                                                       & (vlSelfRef.__PVT__AluResult 
                                                                          >> 0x10U)))
                                                                      ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                                      : 
                                                                     (((IData)(
                                                                               (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                                >> 0x2bU)) 
                                                                       & ((0x3ffU 
                                                                           & (IData)(
                                                                                (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                                >> 0x20U))) 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (vlSelfRef.__PVT__AluResult 
                                                                              >> 6U))))
                                                                       ? (IData)(
                                                                                vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))])
                                                                       : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                                    >> 0xfU)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (((0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (vlSelfRef.__PVT__AluResult 
                                                                >> 0x10U)))
                                                            ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                            : 
                                                           (((IData)(
                                                                     (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                      [
                                                                      (0xfU 
                                                                       & (vlSelfRef.__PVT__AluResult 
                                                                          >> 2U))] 
                                                                      >> 0x2bU)) 
                                                             & ((0x3ffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                            [
                                                                            (0xfU 
                                                                             & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                            >> 0x20U))) 
                                                                == 
                                                                (0x3ffU 
                                                                 & (vlSelfRef.__PVT__AluResult 
                                                                    >> 6U))))
                                                             ? (IData)(
                                                                       vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                       [
                                                                       (0xfU 
                                                                        & (vlSelfRef.__PVT__AluResult 
                                                                           >> 2U))])
                                                             : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                          >> 8U)))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (((0xfU 
                                                                      == 
                                                                      (0xfU 
                                                                       & (vlSelfRef.__PVT__AluResult 
                                                                          >> 0x10U)))
                                                                      ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                                      : 
                                                                     (((IData)(
                                                                               (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                                >> 0x2bU)) 
                                                                       & ((0x3ffU 
                                                                           & (IData)(
                                                                                (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))] 
                                                                                >> 0x20U))) 
                                                                          == 
                                                                          (0x3ffU 
                                                                           & (vlSelfRef.__PVT__AluResult 
                                                                              >> 6U))))
                                                                       ? (IData)(
                                                                                vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelfRef.__PVT__AluResult 
                                                                                >> 2U))])
                                                                       : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)) 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & ((0xfU 
                                                           == 
                                                           (0xfU 
                                                            & (vlSelfRef.__PVT__AluResult 
                                                               >> 0x10U)))
                                                           ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB
                                                           : 
                                                          (((IData)(
                                                                    (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                     [
                                                                     (0xfU 
                                                                      & (vlSelfRef.__PVT__AluResult 
                                                                         >> 2U))] 
                                                                     >> 0x2bU)) 
                                                            & ((0x3ffU 
                                                                & (IData)(
                                                                          (vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                           [
                                                                           (0xfU 
                                                                            & (vlSelfRef.__PVT__AluResult 
                                                                               >> 2U))] 
                                                                           >> 0x20U))) 
                                                               == 
                                                               (0x3ffU 
                                                                & (vlSelfRef.__PVT__AluResult 
                                                                   >> 6U))))
                                                            ? (IData)(
                                                                      vlSelfRef.__PVT__dcache_sl__DOT__cache
                                                                      [
                                                                      (0xfU 
                                                                       & (vlSelfRef.__PVT__AluResult 
                                                                          >> 2U))])
                                                            : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataB)))))))));
}

VL_INLINE_OPT void VCPUSin_CPUSin___nba_sequent__TOP__CPUSin__0(VCPUSin_CPUSin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPUSin_CPUSin___nba_sequent__TOP__CPUSin__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__icache_sl__DOT__cache__v0;
    __VdlySet__icache_sl__DOT__cache__v0 = 0;
    QData/*42:0*/ __VdlyVal__icache_sl__DOT__cache__v16;
    __VdlyVal__icache_sl__DOT__cache__v16 = 0;
    CData/*3:0*/ __VdlyDim0__icache_sl__DOT__cache__v16;
    __VdlyDim0__icache_sl__DOT__cache__v16 = 0;
    CData/*0:0*/ __VdlySet__icache_sl__DOT__cache__v16;
    __VdlySet__icache_sl__DOT__cache__v16 = 0;
    CData/*0:0*/ __VdlySet__regf_sl__DOT__Registers__v0;
    __VdlySet__regf_sl__DOT__Registers__v0 = 0;
    IData/*31:0*/ __VdlyVal__regf_sl__DOT__Registers__v32;
    __VdlyVal__regf_sl__DOT__Registers__v32 = 0;
    CData/*4:0*/ __VdlyDim0__regf_sl__DOT__Registers__v32;
    __VdlyDim0__regf_sl__DOT__Registers__v32 = 0;
    CData/*0:0*/ __VdlySet__regf_sl__DOT__Registers__v32;
    __VdlySet__regf_sl__DOT__Registers__v32 = 0;
    CData/*0:0*/ __VdlySet__dcache_sl__DOT__cache__v0;
    __VdlySet__dcache_sl__DOT__cache__v0 = 0;
    QData/*43:0*/ __VdlyVal__dcache_sl__DOT__cache__v16;
    __VdlyVal__dcache_sl__DOT__cache__v16 = 0;
    CData/*3:0*/ __VdlyDim0__dcache_sl__DOT__cache__v16;
    __VdlyDim0__dcache_sl__DOT__cache__v16 = 0;
    CData/*0:0*/ __VdlySet__dcache_sl__DOT__cache__v16;
    __VdlySet__dcache_sl__DOT__cache__v16 = 0;
    // Body
    __VdlySet__dcache_sl__DOT__cache__v0 = 0U;
    __VdlySet__dcache_sl__DOT__cache__v16 = 0U;
    __VdlySet__regf_sl__DOT__Registers__v0 = 0U;
    __VdlySet__regf_sl__DOT__Registers__v32 = 0U;
    __VdlySet__icache_sl__DOT__cache__v0 = 0U;
    __VdlySet__icache_sl__DOT__cache__v16 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__icache_sl__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelfRef.__PVT__regf_sl__DOT__unnamedblk2__DOT__i = 0x20U;
        vlSelfRef.__PVT__dcache_sl__DOT__unnamedblk2__DOT__i = 0x10U;
        __VdlySet__dcache_sl__DOT__cache__v0 = 1U;
        __VdlySet__regf_sl__DOT__Registers__v0 = 1U;
        __VdlySet__icache_sl__DOT__cache__v0 = 1U;
        vlSelfRef.__PVT__pc_sl__DOT__PcReg = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__MemWriteEn) & 
             (0xfU != (0xfU & (vlSelfRef.__PVT__AluResult 
                               >> 0x10U))))) {
            __VdlyVal__dcache_sl__DOT__cache__v16 = 
                (0xc0000000000ULL | (((QData)((IData)(
                                                      (0x3ffU 
                                                       & (vlSelfRef.__PVT__AluResult 
                                                          >> 6U)))) 
                                      << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__Reg2Data))));
            __VdlyDim0__dcache_sl__DOT__cache__v16 
                = (0xfU & (vlSelfRef.__PVT__AluResult 
                           >> 2U));
            __VdlySet__dcache_sl__DOT__cache__v16 = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__RegWriteEn) & 
             (0U != (0x1fU & (vlSelfRef.__PVT__FetchInstr 
                              >> 7U))))) {
            __VdlyVal__regf_sl__DOT__Registers__v32 
                = ((IData)(vlSelfRef.__PVT__Mem2Reg)
                    ? vlSelfRef.__PVT__AluResult : vlSelfRef.__PVT__DataFromCache);
            __VdlyDim0__regf_sl__DOT__Registers__v32 
                = (0x1fU & (vlSelfRef.__PVT__FetchInstr 
                            >> 7U));
            __VdlySet__regf_sl__DOT__Registers__v32 = 1U;
        }
        if (((~ (IData)(vlSelfRef.__PVT__icache_sl__DOT__hit)) 
             & (0x1c09U != (vlSelfRef.__PVT__pc_sl__DOT__PcReg 
                            >> 0x10U)))) {
            __VdlyVal__icache_sl__DOT__cache__v16 = 
                (0x40000000000ULL | (((QData)((IData)(
                                                      (0x3ffU 
                                                       & (vlSelfRef.__PVT__pc_sl__DOT__PcReg 
                                                          >> 6U)))) 
                                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataA))));
            __VdlyDim0__icache_sl__DOT__cache__v16 
                = (0xfU & (vlSelfRef.__PVT__pc_sl__DOT__PcReg 
                           >> 2U));
            __VdlySet__icache_sl__DOT__cache__v16 = 1U;
        }
        vlSelfRef.__PVT__pc_sl__DOT__PcReg = vlSelfRef.__PVT__NextPc;
    }
    if (__VdlySet__dcache_sl__DOT__cache__v0) {
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
    }
    if (__VdlySet__dcache_sl__DOT__cache__v16) {
        vlSelfRef.__PVT__dcache_sl__DOT__cache[__VdlyDim0__dcache_sl__DOT__cache__v16] 
            = __VdlyVal__dcache_sl__DOT__cache__v16;
    }
    if (__VdlySet__regf_sl__DOT__Registers__v0) {
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
    }
    if (__VdlySet__regf_sl__DOT__Registers__v32) {
        vlSelfRef.__PVT__regf_sl__DOT__Registers[__VdlyDim0__regf_sl__DOT__Registers__v32] 
            = __VdlyVal__regf_sl__DOT__Registers__v32;
    }
    if (__VdlySet__icache_sl__DOT__cache__v0) {
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
    }
    if (__VdlySet__icache_sl__DOT__cache__v16) {
        vlSelfRef.__PVT__icache_sl__DOT__cache[__VdlyDim0__icache_sl__DOT__cache__v16] 
            = __VdlyVal__icache_sl__DOT__cache__v16;
    }
}

VL_INLINE_OPT void VCPUSin_CPUSin___nba_comb__TOP__CPUSin__0(VCPUSin_CPUSin* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VCPUSin_CPUSin___nba_comb__TOP__CPUSin__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__FetchInstr = ((0x1c09U == (vlSelfRef.__PVT__pc_sl__DOT__PcReg 
                                                >> 0x10U))
                                    ? vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataA
                                    : ((IData)(vlSelfRef.__PVT__icache_sl__DOT__hit)
                                        ? (IData)(vlSelfRef.__PVT__icache_sl__DOT__cache
                                                  [
                                                  (0xfU 
                                                   & (vlSelfRef.__PVT__pc_sl__DOT__PcReg 
                                                      >> 2U))])
                                        : vlSymsp->TOP__CPUSin__memory_sl.__PVT__ReadDataA));
    vlSelfRef.__PVT__MemReadEn = 0U;
    vlSelfRef.__PVT__RegWriteEn = 0U;
    vlSelfRef.__PVT__Mem2Reg = 0U;
    vlSelfRef.__PVT__MemoryOperation = 0U;
    vlSelfRef.__PVT__JumpLink = 0U;
    vlSelfRef.__PVT__BranchOperation = 0U;
    vlSelfRef.__PVT__MemWriteEn = 0U;
    vlSelfRef.__PVT__AluSrc1Selector = 0U;
    if ((0x40U & vlSelfRef.__PVT__FetchInstr)) {
        if ((0x20U & vlSelfRef.__PVT__FetchInstr)) {
            if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                          >> 4U)))) {
                if ((8U & vlSelfRef.__PVT__FetchInstr)) {
                    if ((4U & vlSelfRef.__PVT__FetchInstr)) {
                        if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                            if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                                vlSelfRef.__PVT__RegWriteEn = 1U;
                                vlSelfRef.__PVT__BranchOperation = 7U;
                                vlSelfRef.__PVT__AluSrc1Selector = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlSelfRef.__PVT__FetchInstr)) {
                        if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                            if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                                vlSelfRef.__PVT__RegWriteEn = 1U;
                                vlSelfRef.__PVT__BranchOperation = 7U;
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                        if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                            vlSelfRef.__PVT__BranchOperation 
                                = ((0x4000U & vlSelfRef.__PVT__FetchInstr)
                                    ? ((0x2000U & vlSelfRef.__PVT__FetchInstr)
                                        ? ((0x1000U 
                                            & vlSelfRef.__PVT__FetchInstr)
                                            ? 6U : 5U)
                                        : ((0x1000U 
                                            & vlSelfRef.__PVT__FetchInstr)
                                            ? 4U : 3U))
                                    : ((0x2000U & vlSelfRef.__PVT__FetchInstr)
                                        ? 0U : ((0x1000U 
                                                 & vlSelfRef.__PVT__FetchInstr)
                                                 ? 2U
                                                 : 1U)));
                        }
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                            if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                                vlSelfRef.__PVT__AluSrc1Selector = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.__PVT__FetchInstr)) {
                        if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                            if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                                vlSelfRef.__PVT__JumpLink = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.__PVT__AluOperation = 3U;
    } else {
        if ((0x20U & vlSelfRef.__PVT__FetchInstr)) {
            if ((0x10U & vlSelfRef.__PVT__FetchInstr)) {
                if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.__PVT__FetchInstr)) {
                        if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                            if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                                vlSelfRef.__PVT__RegWriteEn = 1U;
                            }
                        }
                    } else if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                        if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                            vlSelfRef.__PVT__RegWriteEn = 1U;
                        }
                    }
                }
                vlSelfRef.__PVT__AluOperation = ((8U 
                                                  & vlSelfRef.__PVT__FetchInstr)
                                                  ? 3U
                                                  : 
                                                 ((4U 
                                                   & vlSelfRef.__PVT__FetchInstr)
                                                   ? 3U
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.__PVT__FetchInstr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__FetchInstr)
                                                     ? 
                                                    ((1U 
                                                      == 
                                                      (vlSelfRef.__PVT__FetchInstr 
                                                       >> 0x19U))
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelfRef.__PVT__FetchInstr)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelfRef.__PVT__FetchInstr)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelfRef.__PVT__FetchInstr)
                                                         ? 0U
                                                         : 0xfU)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.__PVT__FetchInstr)
                                                         ? 0U
                                                         : 0xeU))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelfRef.__PVT__FetchInstr)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelfRef.__PVT__FetchInstr)
                                                         ? 0xdU
                                                         : 0xcU)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.__PVT__FetchInstr)
                                                         ? 0xbU
                                                         : 0xaU)))
                                                      : 
                                                     ((0x4000U 
                                                       & vlSelfRef.__PVT__FetchInstr)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelfRef.__PVT__FetchInstr)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelfRef.__PVT__FetchInstr)
                                                         ? 0U
                                                         : 1U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.__PVT__FetchInstr)
                                                         ? 
                                                        ((0x20U 
                                                          == 
                                                          (vlSelfRef.__PVT__FetchInstr 
                                                           >> 0x19U))
                                                          ? 7U
                                                          : 6U)
                                                         : 2U))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelfRef.__PVT__FetchInstr)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelfRef.__PVT__FetchInstr)
                                                         ? 9U
                                                         : 8U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelfRef.__PVT__FetchInstr)
                                                         ? 5U
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (vlSelfRef.__PVT__FetchInstr 
                                                           >> 0x19U))
                                                          ? 4U
                                                          : 3U)))))
                                                     : 3U)
                                                    : 3U)));
            } else {
                vlSelfRef.__PVT__AluOperation = 3U;
            }
        } else if ((0x10U & vlSelfRef.__PVT__FetchInstr)) {
            if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                          >> 3U)))) {
                if ((4U & vlSelfRef.__PVT__FetchInstr)) {
                    if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                        if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                            vlSelfRef.__PVT__RegWriteEn = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                    if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                        vlSelfRef.__PVT__RegWriteEn = 1U;
                    }
                }
            }
            vlSelfRef.__PVT__AluOperation = ((8U & vlSelfRef.__PVT__FetchInstr)
                                              ? 3U : 
                                             ((4U & vlSelfRef.__PVT__FetchInstr)
                                               ? 3U
                                               : ((2U 
                                                   & vlSelfRef.__PVT__FetchInstr)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.__PVT__FetchInstr)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelfRef.__PVT__FetchInstr)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelfRef.__PVT__FetchInstr)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelfRef.__PVT__FetchInstr)
                                                       ? 0U
                                                       : 1U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelfRef.__PVT__FetchInstr)
                                                       ? 
                                                      ((0x20U 
                                                        == 
                                                        (vlSelfRef.__PVT__FetchInstr 
                                                         >> 0x19U))
                                                        ? 7U
                                                        : 6U)
                                                       : 2U))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelfRef.__PVT__FetchInstr)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelfRef.__PVT__FetchInstr)
                                                       ? 9U
                                                       : 8U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelfRef.__PVT__FetchInstr)
                                                       ? 5U
                                                       : 3U)))
                                                    : 3U)
                                                   : 3U)));
        } else {
            if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                        if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                            vlSelfRef.__PVT__RegWriteEn = 1U;
                        }
                    }
                }
            }
            vlSelfRef.__PVT__AluOperation = 3U;
        }
        if ((1U & (~ (vlSelfRef.__PVT__FetchInstr >> 5U)))) {
            if ((0x10U & vlSelfRef.__PVT__FetchInstr)) {
                if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.__PVT__FetchInstr)) {
                        if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                            if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                                vlSelfRef.__PVT__AluSrc1Selector = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__AluSrc2Selector = 1U;
    if ((1U & (~ (vlSelfRef.__PVT__FetchInstr >> 6U)))) {
        if ((1U & (~ (vlSelfRef.__PVT__FetchInstr >> 5U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                            if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                                vlSelfRef.__PVT__MemReadEn = 1U;
                                vlSelfRef.__PVT__Mem2Reg = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & vlSelfRef.__PVT__FetchInstr)) {
            if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                            if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                                vlSelfRef.__PVT__MemoryOperation 
                                    = ((0U == (7U & 
                                               (vlSelfRef.__PVT__FetchInstr 
                                                >> 0xcU)))
                                        ? 5U : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.__PVT__FetchInstr 
                                                     >> 0xcU)))
                                                 ? 6U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.__PVT__FetchInstr 
                                                      >> 0xcU)))
                                                  ? 7U
                                                  : 0U)));
                                vlSelfRef.__PVT__MemWriteEn = 1U;
                            }
                        }
                    }
                }
            }
            if ((0x10U & vlSelfRef.__PVT__FetchInstr)) {
                if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                            if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                                vlSelfRef.__PVT__AluSrc2Selector = 0U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                             >> 4U)))) {
            if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.__PVT__FetchInstr 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.__PVT__FetchInstr)) {
                        if ((1U & vlSelfRef.__PVT__FetchInstr)) {
                            vlSelfRef.__PVT__MemoryOperation 
                                = ((0x4000U & vlSelfRef.__PVT__FetchInstr)
                                    ? ((0x2000U & vlSelfRef.__PVT__FetchInstr)
                                        ? 0U : ((0x1000U 
                                                 & vlSelfRef.__PVT__FetchInstr)
                                                 ? 4U
                                                 : 3U))
                                    : ((0x2000U & vlSelfRef.__PVT__FetchInstr)
                                        ? ((0x1000U 
                                            & vlSelfRef.__PVT__FetchInstr)
                                            ? 0U : 2U)
                                        : ((0x1000U 
                                            & vlSelfRef.__PVT__FetchInstr)
                                            ? 1U : 0U)));
                        }
                    }
                }
            }
        }
    }
    if ((((0x13U == (0x7fU & vlSelfRef.__PVT__FetchInstr)) 
          | (3U == (0x7fU & vlSelfRef.__PVT__FetchInstr))) 
         | (0x67U == (0x7fU & vlSelfRef.__PVT__FetchInstr)))) {
        vlSelfRef.__PVT__ImmData = ((((vlSelfRef.__PVT__FetchInstr 
                                       >> 0x1fU) ? 0xfffffU
                                       : 0U) << 0xcU) 
                                    | (vlSelfRef.__PVT__FetchInstr 
                                       >> 0x14U));
    } else if ((0x23U == (0x7fU & vlSelfRef.__PVT__FetchInstr))) {
        vlSelfRef.__PVT__ImmData = ((((vlSelfRef.__PVT__FetchInstr 
                                       >> 0x1fU) ? 0xfffffU
                                       : 0U) << 0xcU) 
                                    | ((0xfe0U & (vlSelfRef.__PVT__FetchInstr 
                                                  >> 0x14U)) 
                                       | (0x1fU & (vlSelfRef.__PVT__FetchInstr 
                                                   >> 7U))));
    } else if ((0x63U == (0x7fU & vlSelfRef.__PVT__FetchInstr))) {
        vlSelfRef.__PVT__ImmData = ((0xffffe000U & vlSelfRef.__PVT__ImmData) 
                                    | (((0x1000U & 
                                         (vlSelfRef.__PVT__FetchInstr 
                                          >> 0x13U)) 
                                        | (0x800U & 
                                           (vlSelfRef.__PVT__FetchInstr 
                                            << 4U))) 
                                       | ((0x7e0U & 
                                           (vlSelfRef.__PVT__FetchInstr 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelfRef.__PVT__FetchInstr 
                                                >> 7U)))));
        vlSelfRef.__PVT__ImmData = ((0x1fffU & vlSelfRef.__PVT__ImmData) 
                                    | (((vlSelfRef.__PVT__FetchInstr 
                                         >> 0x1fU) ? 0x7ffffU
                                         : 0U) << 0xdU));
    } else if (((0x37U == (0x7fU & vlSelfRef.__PVT__FetchInstr)) 
                | (0x17U == (0x7fU & vlSelfRef.__PVT__FetchInstr)))) {
        vlSelfRef.__PVT__ImmData = (0xfffff000U & vlSelfRef.__PVT__FetchInstr);
    } else if ((0x6fU == (0x7fU & vlSelfRef.__PVT__FetchInstr))) {
        vlSelfRef.__PVT__ImmData = ((0xffe00000U & vlSelfRef.__PVT__ImmData) 
                                    | (((0x100000U 
                                         & (vlSelfRef.__PVT__FetchInstr 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlSelfRef.__PVT__FetchInstr) 
                                           | (0x800U 
                                              & (vlSelfRef.__PVT__FetchInstr 
                                                 >> 9U)))) 
                                       | (0x7feU & 
                                          (vlSelfRef.__PVT__FetchInstr 
                                           >> 0x14U))));
        vlSelfRef.__PVT__ImmData = ((0x1fffffU & vlSelfRef.__PVT__ImmData) 
                                    | (((vlSelfRef.__PVT__FetchInstr 
                                         >> 0x1fU) ? 0x7ffU
                                         : 0U) << 0x15U));
    } else {
        vlSelfRef.__PVT__ImmData = 0U;
    }
    vlSelfRef.__PVT__Reg1Data = ((0U == (0x1fU & (vlSelfRef.__PVT__FetchInstr 
                                                  >> 0xfU)))
                                  ? 0U : vlSelfRef.__PVT__regf_sl__DOT__Registers
                                 [(0x1fU & (vlSelfRef.__PVT__FetchInstr 
                                            >> 0xfU))]);
    vlSelfRef.__PVT__Reg2Data = ((0U == (0x1fU & (vlSelfRef.__PVT__FetchInstr 
                                                  >> 0x14U)))
                                  ? 0U : vlSelfRef.__PVT__regf_sl__DOT__Registers
                                 [(0x1fU & (vlSelfRef.__PVT__FetchInstr 
                                            >> 0x14U))]);
    vlSelfRef.__PVT__AluSrc1 = ((IData)(vlSelfRef.__PVT__AluSrc1Selector)
                                 ? vlSelfRef.__PVT__pc_sl__DOT__PcReg
                                 : vlSelfRef.__PVT__Reg1Data);
    vlSelfRef.__PVT__NextPc = (((4U & (IData)(vlSelfRef.__PVT__BranchOperation))
                                 ? ((2U & (IData)(vlSelfRef.__PVT__BranchOperation))
                                     ? ((1U & (IData)(vlSelfRef.__PVT__BranchOperation)) 
                                        || (vlSelfRef.__PVT__Reg1Data 
                                            >= vlSelfRef.__PVT__Reg2Data))
                                     : ((1U & (IData)(vlSelfRef.__PVT__BranchOperation))
                                         ? (vlSelfRef.__PVT__Reg1Data 
                                            < vlSelfRef.__PVT__Reg2Data)
                                         : VL_GTES_III(32, vlSelfRef.__PVT__Reg1Data, vlSelfRef.__PVT__Reg2Data)))
                                 : ((2U & (IData)(vlSelfRef.__PVT__BranchOperation))
                                     ? ((1U & (IData)(vlSelfRef.__PVT__BranchOperation))
                                         ? VL_LTS_III(32, vlSelfRef.__PVT__Reg1Data, vlSelfRef.__PVT__Reg2Data)
                                         : (vlSelfRef.__PVT__Reg1Data 
                                            != vlSelfRef.__PVT__Reg2Data))
                                     : ((1U & (IData)(vlSelfRef.__PVT__BranchOperation)) 
                                        && (vlSelfRef.__PVT__Reg1Data 
                                            == vlSelfRef.__PVT__Reg2Data))))
                                ? ((IData)(vlSelfRef.__PVT__JumpLink)
                                    ? (vlSelfRef.__PVT__ImmData 
                                       + vlSelfRef.__PVT__Reg1Data)
                                    : (vlSelfRef.__PVT__ImmData 
                                       + vlSelfRef.__PVT__pc_sl__DOT__PcReg))
                                : ((IData)(4U) + vlSelfRef.__PVT__pc_sl__DOT__PcReg));
    vlSelfRef.__PVT__AluSrc2 = ((IData)(vlSelfRef.__PVT__AluSrc2Selector)
                                 ? vlSelfRef.__PVT__ImmData
                                 : vlSelfRef.__PVT__Reg2Data);
    vlSelfRef.__PVT__alu_sl__DOT__Mul = 0ULL;
    vlSelfRef.__PVT__AluResult = 0U;
    vlSelfRef.__PVT__alu_sl__DOT__SignedInputAExt = 0ULL;
    vlSelfRef.__PVT__alu_sl__DOT__UnsignedInputBExt = 0ULL;
    vlSelfRef.__PVT__alu_sl__DOT__FullMul[0U] = 0U;
    vlSelfRef.__PVT__alu_sl__DOT__FullMul[1U] = 0U;
    vlSelfRef.__PVT__alu_sl__DOT__FullMul[2U] = 0U;
    vlSelfRef.__PVT__alu_sl__DOT__FullMul[3U] = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__AluOperation))) {
        if ((4U & (IData)(vlSelfRef.__PVT__AluOperation))) {
            if ((2U & (IData)(vlSelfRef.__PVT__AluOperation))) {
                vlSelfRef.__PVT__AluResult = ((1U & (IData)(vlSelfRef.__PVT__AluOperation))
                                               ? VL_MODDIVS_III(32, vlSelfRef.__PVT__AluSrc1, vlSelfRef.__PVT__AluSrc2)
                                               : VL_DIVS_III(32, vlSelfRef.__PVT__AluSrc1, vlSelfRef.__PVT__AluSrc2));
            } else if ((1U & (IData)(vlSelfRef.__PVT__AluOperation))) {
                vlSelfRef.__PVT__alu_sl__DOT__Mul = 
                    ((QData)((IData)(vlSelfRef.__PVT__AluSrc1)) 
                     * (QData)((IData)(vlSelfRef.__PVT__AluSrc2)));
                vlSelfRef.__PVT__AluResult = (IData)(
                                                     (vlSelfRef.__PVT__alu_sl__DOT__Mul 
                                                      >> 0x20U));
            } else {
                vlSelfRef.__PVT__alu_sl__DOT__SignedInputAExt 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelfRef.__PVT__AluSrc1 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__AluSrc1)));
                vlSelfRef.__PVT__alu_sl__DOT__UnsignedInputBExt 
                    = (QData)((IData)(vlSelfRef.__PVT__AluSrc2));
                __Vtemp_1[0U] = (IData)(vlSelfRef.__PVT__alu_sl__DOT__SignedInputAExt);
                __Vtemp_1[1U] = (IData)((vlSelfRef.__PVT__alu_sl__DOT__SignedInputAExt 
                                         >> 0x20U));
                __Vtemp_1[2U] = 0U;
                __Vtemp_1[3U] = 0U;
                __Vtemp_2[0U] = (IData)(vlSelfRef.__PVT__alu_sl__DOT__UnsignedInputBExt);
                __Vtemp_2[1U] = (IData)((vlSelfRef.__PVT__alu_sl__DOT__UnsignedInputBExt 
                                         >> 0x20U));
                __Vtemp_2[2U] = 0U;
                __Vtemp_2[3U] = 0U;
                VL_MUL_W(4, vlSelfRef.__PVT__alu_sl__DOT__FullMul, __Vtemp_1, __Vtemp_2);
                vlSelfRef.__PVT__AluResult = vlSelfRef.__PVT__alu_sl__DOT__FullMul[1U];
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__AluOperation))) {
            if ((1U & (IData)(vlSelfRef.__PVT__AluOperation))) {
                vlSelfRef.__PVT__alu_sl__DOT__Mul = 
                    VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__PVT__AluSrc1), 
                                VL_EXTENDS_QI(64,32, vlSelfRef.__PVT__AluSrc2));
                vlSelfRef.__PVT__AluResult = (IData)(
                                                     (vlSelfRef.__PVT__alu_sl__DOT__Mul 
                                                      >> 0x20U));
            } else {
                vlSelfRef.__PVT__alu_sl__DOT__Mul = 
                    VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.__PVT__AluSrc1), 
                                VL_EXTENDS_QI(64,32, vlSelfRef.__PVT__AluSrc2));
                vlSelfRef.__PVT__AluResult = (IData)(vlSelfRef.__PVT__alu_sl__DOT__Mul);
            }
        } else {
            vlSelfRef.__PVT__AluResult = ((1U & (IData)(vlSelfRef.__PVT__AluOperation))
                                           ? ((vlSelfRef.__PVT__AluSrc1 
                                               < vlSelfRef.__PVT__AluSrc2)
                                               ? 1U
                                               : 0U)
                                           : (VL_LTS_III(32, vlSelfRef.__PVT__AluSrc1, vlSelfRef.__PVT__AluSrc2)
                                               ? 1U
                                               : 0U));
        }
    } else {
        vlSelfRef.__PVT__AluResult = ((4U & (IData)(vlSelfRef.__PVT__AluOperation))
                                       ? ((2U & (IData)(vlSelfRef.__PVT__AluOperation))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__AluOperation))
                                               ? VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__AluSrc1, 
                                                                (0x1fU 
                                                                 & vlSelfRef.__PVT__AluSrc2))
                                               : (vlSelfRef.__PVT__AluSrc1 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelfRef.__PVT__AluSrc2)))
                                           : ((1U & (IData)(vlSelfRef.__PVT__AluOperation))
                                               ? (vlSelfRef.__PVT__AluSrc1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.__PVT__AluSrc2))
                                               : (vlSelfRef.__PVT__AluSrc1 
                                                  - vlSelfRef.__PVT__AluSrc2)))
                                       : ((2U & (IData)(vlSelfRef.__PVT__AluOperation))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__AluOperation))
                                               ? (vlSelfRef.__PVT__AluSrc1 
                                                  + vlSelfRef.__PVT__AluSrc2)
                                               : (vlSelfRef.__PVT__AluSrc1 
                                                  ^ vlSelfRef.__PVT__AluSrc2))
                                           : ((1U & (IData)(vlSelfRef.__PVT__AluOperation))
                                               ? (vlSelfRef.__PVT__AluSrc1 
                                                  | vlSelfRef.__PVT__AluSrc2)
                                               : (vlSelfRef.__PVT__AluSrc1 
                                                  & vlSelfRef.__PVT__AluSrc2))));
    }
    if (vlSymsp->TOP.UartOver) {
        vlSelfRef.__PVT__UartMemData = ((IData)(vlSelfRef.__PVT__MemWriteEn)
                                         ? vlSelfRef.__PVT__Reg2Data
                                         : 0U);
        vlSelfRef.__PVT__UartMemAddress = vlSelfRef.__PVT__AluResult;
    } else {
        vlSelfRef.__PVT__UartMemData = vlSymsp->TOP.UartData;
        vlSelfRef.__PVT__UartMemAddress = vlSymsp->TOP.UartAddress;
    }
}
