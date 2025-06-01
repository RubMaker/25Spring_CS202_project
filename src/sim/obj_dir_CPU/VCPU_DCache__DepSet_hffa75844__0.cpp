// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_DCache.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_DCache___ico_sequent__TOP__CPU__mem_stage__U_DCache__0(VCPU_DCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_DCache___ico_sequent__TOP__CPU__mem_stage__U_DCache__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__DStall = ((1U & (~ (IData)(vlSymsp->TOP.rst))) 
                               && (1U & ((0U == (IData)(vlSelfRef.__PVT__state))
                                          ? ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead)
                                              ? (~ (IData)(vlSelfRef.__PVT__hit))
                                              : ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) 
                                                 && (1U 
                                                     & (~ (IData)(vlSelfRef.__PVT__hit)))))
                                          : (1U == (IData)(vlSelfRef.__PVT__state)))));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__MemWb = 0U;
        vlSelfRef.__PVT__updated_data = 0U;
        vlSelfRef.__PVT__MemAddr = 0U;
        vlSelfRef.__PVT__MemWriteData = 0U;
    } else {
        vlSelfRef.__PVT__updated_data = (((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) 
                                          & (IData)(vlSelfRef.__PVT__hit))
                                          ? ((7U == (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                              ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2
                                              : ((6U 
                                                  == (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                  ? 
                                                 ((2U 
                                                   & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                   ? 
                                                  ((vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelfRef.__PVT__cache_data))
                                                   : 
                                                  ((0xffff0000U 
                                                    & vlSelfRef.__PVT__cache_data) 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2)))
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    ((vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2 
                                                      << 0x18U) 
                                                     | (0xffffffU 
                                                        & vlSelfRef.__PVT__cache_data))
                                                     : 
                                                    ((0xff000000U 
                                                      & vlSelfRef.__PVT__cache_data) 
                                                     | ((0xff0000U 
                                                         & (vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2 
                                                            << 0x10U)) 
                                                        | (0xffffU 
                                                           & vlSelfRef.__PVT__cache_data))))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSelfRef.__PVT__cache_data) 
                                                     | ((0xff00U 
                                                         & (vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & vlSelfRef.__PVT__cache_data)))
                                                     : 
                                                    ((0xffffff00U 
                                                      & vlSelfRef.__PVT__cache_data) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2))))
                                                   : vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2)))
                                          : vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2);
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead)))) {
                if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) {
                    if (vlSelfRef.__PVT__hit) {
                        vlSelfRef.__PVT__MemWb = 1U;
                        vlSelfRef.__PVT__MemWriteData 
                            = vlSelfRef.__PVT__updated_data;
                    }
                }
            }
            if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__hit)))) {
                    vlSelfRef.__PVT__MemAddr = vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres;
                }
            } else if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) {
                vlSelfRef.__PVT__MemAddr = vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres;
            }
        } else {
            if ((1U != (IData)(vlSelfRef.__PVT__state))) {
                if ((2U == (IData)(vlSelfRef.__PVT__state))) {
                    if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) {
                        vlSelfRef.__PVT__MemWb = 1U;
                        vlSelfRef.__PVT__MemWriteData 
                            = vlSelfRef.__PVT__updated_data;
                    }
                }
            }
            if ((1U == (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__MemAddr = vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres;
            } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__MemAddr = vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres;
            }
        }
    }
}

VL_INLINE_OPT void VCPU_DCache___ico_sequent__TOP__CPU__mem_stage__U_DCache__1(VCPU_DCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_DCache___ico_sequent__TOP__CPU__mem_stage__U_DCache__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__proc_MemData = 0U;
        vlSelfRef.__PVT__DataOut = 0U;
    } else {
        vlSelfRef.__PVT__proc_MemData = ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead)
                                          ? ((4U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                              ? ((2U 
                                                  & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                  ? vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                   ? vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                    >> 0x10U)
                                                    : 
                                                   (0xffffU 
                                                    & vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB))))
                                              : ((2U 
                                                  & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                     >> 0x18U)
                                                     : 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                        >> 0x10U)))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                        >> 8U))
                                                     : 
                                                    (0xffU 
                                                     & vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB)))
                                                   : vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                                 >> 0x1fU))) 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                       >> 0x10U))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB)))
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                                  >> 0x1fU))) 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                        >> 0x18U))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                                     >> 0x17U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                                     >> 0xfU)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                           >> 8U)))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB)))))))
                                          : vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2);
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead) {
                if (vlSelfRef.__PVT__hit) {
                    vlSelfRef.__PVT__DataOut = ((4U 
                                                 & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                  ? vlSelfRef.__PVT__cache_data
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                   ? vlSelfRef.__PVT__cache_data
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   (vlSelfRef.__PVT__cache_data 
                                                    >> 0x10U)
                                                    : 
                                                   (0xffffU 
                                                    & vlSelfRef.__PVT__cache_data))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.__PVT__cache_data, 0x18U)
                                                     : (IData)(vlSelfRef.__VdfgRegularize_hc4d58fb9_0_0))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_hc4d58fb9_0_1)
                                                     : (IData)(vlSelfRef.__VdfgRegularize_hc4d58fb9_0_2)))
                                                   : vlSelfRef.__PVT__cache_data)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.__PVT__cache_data 
                                                                 >> 0x1fU))) 
                                                     << 0x10U) 
                                                    | (vlSelfRef.__PVT__cache_data 
                                                       >> 0x10U))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__cache_data 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelfRef.__PVT__cache_data)))
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__Cache
                                                                             [
                                                                             (0xfU 
                                                                              & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                                                >> 2U))] 
                                                                             >> 0x1fU))))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__Cache
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                                       >> 2U))] 
                                                                   >> 0x18U))))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__Cache
                                                                             [
                                                                             (0xfU 
                                                                              & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                                                >> 2U))] 
                                                                             >> 0x17U))))) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_hc4d58fb9_0_0)))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__Cache
                                                                             [
                                                                             (0xfU 
                                                                              & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                                                >> 2U))] 
                                                                             >> 0xfU))))) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_hc4d58fb9_0_1))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__Cache
                                                                             [
                                                                             (0xfU 
                                                                              & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                                                >> 2U))] 
                                                                             >> 7U))))) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_hc4d58fb9_0_2)))))));
                }
            } else if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) {
                if (vlSelfRef.__PVT__hit) {
                    vlSelfRef.__PVT__DataOut = vlSelfRef.__PVT__updated_data;
                }
            }
        } else if ((1U != (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__DataOut = ((2U == (IData)(vlSelfRef.__PVT__state))
                                         ? ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite)
                                             ? vlSelfRef.__PVT__updated_data
                                             : ((4U 
                                                 & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                  ? vlSelfRef.__PVT__proc_MemData
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                   ? vlSelfRef.__PVT__proc_MemData
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   (vlSelfRef.__PVT__proc_MemData 
                                                    >> 0x10U)
                                                    : 
                                                   (0xffffU 
                                                    & vlSelfRef.__PVT__proc_MemData))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    (vlSelfRef.__PVT__proc_MemData 
                                                     >> 0x18U)
                                                     : 
                                                    (0xffU 
                                                     & (vlSelfRef.__PVT__proc_MemData 
                                                        >> 0x10U)))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelfRef.__PVT__proc_MemData 
                                                        >> 8U))
                                                     : 
                                                    (0xffU 
                                                     & vlSelfRef.__PVT__proc_MemData)))
                                                   : vlSelfRef.__PVT__proc_MemData)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.__PVT__proc_MemData 
                                                                 >> 0x1fU))) 
                                                     << 0x10U) 
                                                    | (vlSelfRef.__PVT__proc_MemData 
                                                       >> 0x10U))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.__PVT__proc_MemData 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelfRef.__PVT__proc_MemData)))
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.__PVT__proc_MemData 
                                                                  >> 0x1fU))) 
                                                      << 8U) 
                                                     | (vlSelfRef.__PVT__proc_MemData 
                                                        >> 0x18U))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__proc_MemData 
                                                                     >> 0x17U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSelfRef.__PVT__proc_MemData 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__proc_MemData 
                                                                     >> 0xfU)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSelfRef.__PVT__proc_MemData 
                                                           >> 8U)))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.__PVT__proc_MemData 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelfRef.__PVT__proc_MemData))))))))
                                         : 0U);
        }
    }
}

VL_INLINE_OPT void VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__0(VCPU_DCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__state;
    __Vdly__state = 0;
    CData/*0:0*/ __VdlySet__Cache__v0;
    __VdlySet__Cache__v0 = 0;
    QData/*58:0*/ __VdlyVal__Cache__v16;
    __VdlyVal__Cache__v16 = 0;
    CData/*3:0*/ __VdlyDim0__Cache__v16;
    __VdlyDim0__Cache__v16 = 0;
    CData/*0:0*/ __VdlySet__Cache__v16;
    __VdlySet__Cache__v16 = 0;
    QData/*58:0*/ __VdlyVal__Cache__v17;
    __VdlyVal__Cache__v17 = 0;
    CData/*3:0*/ __VdlyDim0__Cache__v17;
    __VdlyDim0__Cache__v17 = 0;
    CData/*0:0*/ __VdlySet__Cache__v17;
    __VdlySet__Cache__v17 = 0;
    QData/*58:0*/ __VdlyVal__Cache__v18;
    __VdlyVal__Cache__v18 = 0;
    CData/*3:0*/ __VdlyDim0__Cache__v18;
    __VdlyDim0__Cache__v18 = 0;
    CData/*0:0*/ __VdlySet__Cache__v18;
    __VdlySet__Cache__v18 = 0;
    // Body
    __Vdly__state = vlSelfRef.__PVT__state;
    __VdlySet__Cache__v0 = 0U;
    __VdlySet__Cache__v16 = 0U;
    __VdlySet__Cache__v17 = 0U;
    __VdlySet__Cache__v18 = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__i = 0x10U;
        __Vdly__state = 0U;
        __VdlySet__Cache__v0 = 1U;
    } else if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        if ((((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead) 
              | (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite)) 
             & (~ (IData)(vlSelfRef.__PVT__hit)))) {
            __Vdly__state = 1U;
        } else {
            if (((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) 
                 & (IData)(vlSelfRef.__PVT__hit))) {
                __VdlyVal__Cache__v16 = (0x400000000000000ULL 
                                         | (((QData)((IData)(
                                                             (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                              >> 6U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelfRef.__PVT__updated_data))));
                __VdlyDim0__Cache__v16 = (0xfU & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                  >> 2U));
                __VdlySet__Cache__v16 = 1U;
            }
            __Vdly__state = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__state))) {
        __Vdly__state = 2U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
        if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead) {
            __VdlyVal__Cache__v17 = (0x400000000000000ULL 
                                     | (((QData)((IData)(
                                                         (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                          >> 6U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__CPU__memory_inst.__PVT__ReadDataB))));
            __VdlyDim0__Cache__v17 = (0xfU & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                              >> 2U));
            __VdlySet__Cache__v17 = 1U;
        } else if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) {
            __VdlyVal__Cache__v18 = (0x400000000000000ULL 
                                     | (((QData)((IData)(
                                                         (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                          >> 6U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__updated_data))));
            __VdlyDim0__Cache__v18 = (0xfU & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                              >> 2U));
            __VdlySet__Cache__v18 = 1U;
        }
        __Vdly__state = 0U;
    } else {
        __Vdly__state = 0U;
    }
    vlSelfRef.__PVT__state = __Vdly__state;
    if (__VdlySet__Cache__v0) {
        vlSelfRef.__PVT__Cache[0U] = 0ULL;
        vlSelfRef.__PVT__Cache[1U] = 0ULL;
        vlSelfRef.__PVT__Cache[2U] = 0ULL;
        vlSelfRef.__PVT__Cache[3U] = 0ULL;
        vlSelfRef.__PVT__Cache[4U] = 0ULL;
        vlSelfRef.__PVT__Cache[5U] = 0ULL;
        vlSelfRef.__PVT__Cache[6U] = 0ULL;
        vlSelfRef.__PVT__Cache[7U] = 0ULL;
        vlSelfRef.__PVT__Cache[8U] = 0ULL;
        vlSelfRef.__PVT__Cache[9U] = 0ULL;
        vlSelfRef.__PVT__Cache[0xaU] = 0ULL;
        vlSelfRef.__PVT__Cache[0xbU] = 0ULL;
        vlSelfRef.__PVT__Cache[0xcU] = 0ULL;
        vlSelfRef.__PVT__Cache[0xdU] = 0ULL;
        vlSelfRef.__PVT__Cache[0xeU] = 0ULL;
        vlSelfRef.__PVT__Cache[0xfU] = 0ULL;
    }
    if (__VdlySet__Cache__v16) {
        vlSelfRef.__PVT__Cache[__VdlyDim0__Cache__v16] 
            = __VdlyVal__Cache__v16;
    }
    if (__VdlySet__Cache__v17) {
        vlSelfRef.__PVT__Cache[__VdlyDim0__Cache__v17] 
            = __VdlyVal__Cache__v17;
    }
    if (__VdlySet__Cache__v18) {
        vlSelfRef.__PVT__Cache[__VdlyDim0__Cache__v18] 
            = __VdlyVal__Cache__v18;
    }
}

VL_INLINE_OPT void VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__1(VCPU_DCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__1\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hc4d58fb9_0_2 = (0xffU 
                                                & (IData)(
                                                          vlSelfRef.__PVT__Cache
                                                          [
                                                          (0xfU 
                                                           & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                              >> 2U))]));
    vlSelfRef.__VdfgRegularize_hc4d58fb9_0_1 = (0xffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Cache
                                                           [
                                                           (0xfU 
                                                            & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                               >> 2U))] 
                                                           >> 8U)));
    vlSelfRef.__VdfgRegularize_hc4d58fb9_0_0 = (0xffU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__Cache
                                                           [
                                                           (0xfU 
                                                            & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                               >> 2U))] 
                                                           >> 0x10U)));
    vlSelfRef.__PVT__cache_data = (IData)(vlSelfRef.__PVT__Cache
                                          [(0xfU & 
                                            (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                             >> 2U))]);
    vlSelfRef.__PVT__hit = ((IData)((vlSelfRef.__PVT__Cache
                                     [(0xfU & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                               >> 2U))] 
                                     >> 0x3aU)) & (
                                                   (0x3ffffffU 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__Cache
                                                               [
                                                               (0xfU 
                                                                & (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                                   >> 2U))] 
                                                               >> 0x20U))) 
                                                   == 
                                                   (vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres 
                                                    >> 6U)));
    vlSelfRef.__PVT__DStall = ((1U & (~ (IData)(vlSymsp->TOP.rst))) 
                               && (1U & ((0U == (IData)(vlSelfRef.__PVT__state))
                                          ? ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead)
                                              ? (~ (IData)(vlSelfRef.__PVT__hit))
                                              : ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) 
                                                 && (1U 
                                                     & (~ (IData)(vlSelfRef.__PVT__hit)))))
                                          : (1U == (IData)(vlSelfRef.__PVT__state)))));
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__MemWb = 0U;
        vlSelfRef.__PVT__updated_data = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead)))) {
                if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) {
                    if (vlSelfRef.__PVT__hit) {
                        vlSelfRef.__PVT__MemWb = 1U;
                    }
                }
            }
        } else if ((1U != (IData)(vlSelfRef.__PVT__state))) {
            if ((2U == (IData)(vlSelfRef.__PVT__state))) {
                if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) {
                    vlSelfRef.__PVT__MemWb = 1U;
                }
            }
        }
        vlSelfRef.__PVT__updated_data = (((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) 
                                          & (IData)(vlSelfRef.__PVT__hit))
                                          ? ((7U == (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                              ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2
                                              : ((6U 
                                                  == (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                  ? 
                                                 ((2U 
                                                   & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                   ? 
                                                  ((vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelfRef.__PVT__cache_data))
                                                   : 
                                                  ((0xffff0000U 
                                                    & vlSelfRef.__PVT__cache_data) 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2)))
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__LS_op))
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    ((vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2 
                                                      << 0x18U) 
                                                     | (0xffffffU 
                                                        & vlSelfRef.__PVT__cache_data))
                                                     : 
                                                    ((0xff000000U 
                                                      & vlSelfRef.__PVT__cache_data) 
                                                     | ((0xff0000U 
                                                         & (vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2 
                                                            << 0x10U)) 
                                                        | (0xffffU 
                                                           & vlSelfRef.__PVT__cache_data))))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres)
                                                     ? 
                                                    ((0xffff0000U 
                                                      & vlSelfRef.__PVT__cache_data) 
                                                     | ((0xff00U 
                                                         & (vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & vlSelfRef.__PVT__cache_data)))
                                                     : 
                                                    ((0xffffff00U 
                                                      & vlSelfRef.__PVT__cache_data) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2))))
                                                   : vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2)))
                                          : vlSymsp->TOP__CPU__id_ex_reg.__PVT__Rs2);
    }
}

VL_INLINE_OPT void VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__2(VCPU_DCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_DCache___nba_sequent__TOP__CPU__mem_stage__U_DCache__2\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__MemWriteData = 0U;
        vlSelfRef.__PVT__MemAddr = 0U;
    } else if ((0U == (IData)(vlSelfRef.__PVT__state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead)))) {
            if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) {
                if (vlSelfRef.__PVT__hit) {
                    vlSelfRef.__PVT__MemWriteData = vlSelfRef.__PVT__updated_data;
                }
            }
        }
        if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemRead) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__hit)))) {
                vlSelfRef.__PVT__MemAddr = vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres;
            }
        } else if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) {
            vlSelfRef.__PVT__MemAddr = vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres;
        }
    } else {
        if ((1U != (IData)(vlSelfRef.__PVT__state))) {
            if ((2U == (IData)(vlSelfRef.__PVT__state))) {
                if (vlSymsp->TOP__CPU__id_ex_reg.__PVT__MemWrite) {
                    vlSelfRef.__PVT__MemWriteData = vlSelfRef.__PVT__updated_data;
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__MemAddr = vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres;
        } else if ((2U == (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__MemAddr = vlSymsp->TOP__CPU__ex_mem_reg.__PVT__ALUres;
        }
    }
}
