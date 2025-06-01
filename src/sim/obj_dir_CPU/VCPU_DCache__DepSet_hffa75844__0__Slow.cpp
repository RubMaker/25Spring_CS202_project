// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_DCache.h"
#include "VCPU__Syms.h"

VL_ATTR_COLD void VCPU_DCache___stl_sequent__TOP__CPU__mem_stage__U_DCache__0(VCPU_DCache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_DCache___stl_sequent__TOP__CPU__mem_stage__U_DCache__0\n"); );
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
