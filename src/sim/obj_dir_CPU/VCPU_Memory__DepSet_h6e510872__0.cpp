// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Memory.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_Memory___ico_sequent__TOP__CPU__memory_inst__0(VCPU_Memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_Memory___ico_sequent__TOP__CPU__memory_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__EnWB = ((0xffffU != (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                          >> 0x10U)) 
                             & (IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemWb));
    if ((0xffffU == (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                     >> 0x10U))) {
        vlSelfRef.__PVT__ReadDataB = ((0xffffff00U 
                                       == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                       ? (IData)(vlSymsp->TOP.Switch1)
                                       : ((0xffffff04U 
                                           == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                           ? (IData)(vlSymsp->TOP.Switch2)
                                           : ((0xffffff14U 
                                               == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                               ? ((IData)(vlSymsp->TOP.Button1)
                                                   ? 1U
                                                   : 0U)
                                               : ((0xffffff18U 
                                                   == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.Button2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xffffff1cU 
                                                    == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.Button3)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0xffffff20U 
                                                     == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP.Button4)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((0xffffff24U 
                                                      == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.Button5)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)))))));
        vlSelfRef.__Vcellinp__mem_inst__write_datab = 0U;
    } else {
        vlSelfRef.__PVT__ReadDataB = vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__datab;
        vlSelfRef.__Vcellinp__mem_inst__write_datab 
            = vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemWriteData;
    }
}

VL_INLINE_OPT void VCPU_Memory___nba_sequent__TOP__CPU__memory_inst__0(VCPU_Memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_Memory___nba_sequent__TOP__CPU__memory_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__mem_inst__write_datab = (
                                                   (0xffffU 
                                                    == 
                                                    (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                                     >> 0x10U))
                                                    ? 0U
                                                    : vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemWriteData);
    vlSelfRef.__PVT__EnWB = ((0xffffU != (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                          >> 0x10U)) 
                             & (IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemWb));
}

VL_INLINE_OPT void VCPU_Memory___nba_comb__TOP__CPU__memory_inst__0(VCPU_Memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_Memory___nba_comb__TOP__CPU__memory_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ReadDataB = ((0xffffU == (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr 
                                               >> 0x10U))
                                   ? ((0xffffff00U 
                                       == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                       ? (IData)(vlSymsp->TOP.Switch1)
                                       : ((0xffffff04U 
                                           == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                           ? (IData)(vlSymsp->TOP.Switch2)
                                           : ((0xffffff14U 
                                               == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                               ? ((IData)(vlSymsp->TOP.Button1)
                                                   ? 1U
                                                   : 0U)
                                               : ((0xffffff18U 
                                                   == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.Button2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xffffff1cU 
                                                    == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.Button3)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0xffffff20U 
                                                     == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP.Button4)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((0xffffff24U 
                                                      == vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__MemAddr)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.Button5)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)))))))
                                   : vlSymsp->TOP__CPU__memory_inst__mem_inst.__PVT__datab);
}
