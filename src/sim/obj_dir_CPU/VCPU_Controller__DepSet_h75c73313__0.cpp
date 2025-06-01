// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Controller.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_Controller___nba_sequent__TOP__CPU__id_stage__controller_inst__0(VCPU_Controller* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_Controller___nba_sequent__TOP__CPU__id_stage__controller_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ALU_op = 3U;
    vlSelfRef.__PVT__Branch = 0U;
    vlSelfRef.__PVT__MemWrite = 0U;
    vlSelfRef.__PVT__Imm = 0U;
    vlSelfRef.__PVT__RegWrite = 0U;
    vlSelfRef.__PVT__MemtoReg = 0U;
    vlSelfRef.__PVT__MemRead = 0U;
    vlSelfRef.__PVT__BRU_op = 0U;
    vlSelfRef.__PVT__LS_op = 0U;
    if ((0x40U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
        if ((0x20U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
            if ((0x10U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__ALU_op = 3U;
                if ((8U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                    vlSelfRef.__PVT__Branch = 0U;
                    vlSelfRef.__PVT__MemWrite = 0U;
                    vlSelfRef.__PVT__Imm = 0U;
                    vlSelfRef.__PVT__MemtoReg = 0U;
                    vlSelfRef.__PVT__MemRead = 0U;
                    vlSelfRef.__PVT__BRU_op = 0U;
                    vlSelfRef.__PVT__LS_op = 0U;
                } else if ((4U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                    vlSelfRef.__PVT__Branch = 0U;
                    vlSelfRef.__PVT__MemWrite = 0U;
                    vlSelfRef.__PVT__Imm = 0U;
                    vlSelfRef.__PVT__MemtoReg = 0U;
                    vlSelfRef.__PVT__MemRead = 0U;
                    vlSelfRef.__PVT__BRU_op = 0U;
                    vlSelfRef.__PVT__LS_op = 0U;
                } else if ((2U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                    if ((1U & (~ vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))) {
                        vlSelfRef.__PVT__Branch = 0U;
                        vlSelfRef.__PVT__MemWrite = 0U;
                        vlSelfRef.__PVT__Imm = 0U;
                        vlSelfRef.__PVT__MemtoReg = 0U;
                        vlSelfRef.__PVT__MemRead = 0U;
                        vlSelfRef.__PVT__BRU_op = 0U;
                        vlSelfRef.__PVT__LS_op = 0U;
                    }
                } else {
                    vlSelfRef.__PVT__Branch = 0U;
                    vlSelfRef.__PVT__MemWrite = 0U;
                    vlSelfRef.__PVT__Imm = 0U;
                    vlSelfRef.__PVT__MemtoReg = 0U;
                    vlSelfRef.__PVT__MemRead = 0U;
                    vlSelfRef.__PVT__BRU_op = 0U;
                    vlSelfRef.__PVT__LS_op = 0U;
                }
                vlSelfRef.__PVT__RegWrite = 0U;
            } else if ((8U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__ALU_op = 3U;
                if ((4U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                    if ((2U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                        if ((1U & (~ vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))) {
                            vlSelfRef.__PVT__Branch = 0U;
                            vlSelfRef.__PVT__MemWrite = 0U;
                            vlSelfRef.__PVT__MemtoReg = 0U;
                            vlSelfRef.__PVT__MemRead = 0U;
                            vlSelfRef.__PVT__BRU_op = 0U;
                            vlSelfRef.__PVT__LS_op = 0U;
                        }
                        vlSelfRef.__PVT__Imm = ((1U 
                                                 & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                 ? 
                                                ((((- (IData)(
                                                              (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                               >> 0x1fU))) 
                                                   << 0x15U) 
                                                  | (0x100000U 
                                                     & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                        >> 0xbU))) 
                                                 | (((0xff000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst) 
                                                     | (0x800U 
                                                        & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                           >> 9U))) 
                                                    | (0x7feU 
                                                       & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                          >> 0x14U))))
                                                 : 0U);
                    } else {
                        vlSelfRef.__PVT__Branch = 0U;
                        vlSelfRef.__PVT__MemWrite = 0U;
                        vlSelfRef.__PVT__Imm = 0U;
                        vlSelfRef.__PVT__MemtoReg = 0U;
                        vlSelfRef.__PVT__MemRead = 0U;
                        vlSelfRef.__PVT__BRU_op = 0U;
                        vlSelfRef.__PVT__LS_op = 0U;
                    }
                } else {
                    vlSelfRef.__PVT__Branch = 0U;
                    vlSelfRef.__PVT__MemWrite = 0U;
                    vlSelfRef.__PVT__Imm = 0U;
                    vlSelfRef.__PVT__MemtoReg = 0U;
                    vlSelfRef.__PVT__MemRead = 0U;
                    vlSelfRef.__PVT__BRU_op = 0U;
                    vlSelfRef.__PVT__LS_op = 0U;
                }
                vlSelfRef.__PVT__RegWrite = ((1U & 
                                              (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 2U)) 
                                             && ((1U 
                                                  & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)));
            } else if ((4U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__ALU_op = 3U;
                if ((2U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                    if ((1U & (~ vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))) {
                        vlSelfRef.__PVT__Branch = 0U;
                        vlSelfRef.__PVT__MemWrite = 0U;
                        vlSelfRef.__PVT__MemtoReg = 0U;
                        vlSelfRef.__PVT__MemRead = 0U;
                        vlSelfRef.__PVT__BRU_op = 0U;
                        vlSelfRef.__PVT__LS_op = 0U;
                    }
                    vlSelfRef.__PVT__Imm = ((1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                             ? (((- (IData)(
                                                            (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 0x14U))
                                             : 0U);
                } else {
                    vlSelfRef.__PVT__Branch = 0U;
                    vlSelfRef.__PVT__MemWrite = 0U;
                    vlSelfRef.__PVT__Imm = 0U;
                    vlSelfRef.__PVT__MemtoReg = 0U;
                    vlSelfRef.__PVT__MemRead = 0U;
                    vlSelfRef.__PVT__BRU_op = 0U;
                    vlSelfRef.__PVT__LS_op = 0U;
                }
                vlSelfRef.__PVT__RegWrite = ((1U & 
                                              (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 1U)) 
                                             && (1U 
                                                 & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst));
            } else {
                if ((2U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                    if ((1U & (~ vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))) {
                        vlSelfRef.__PVT__ALU_op = 3U;
                        vlSelfRef.__PVT__MemWrite = 0U;
                        vlSelfRef.__PVT__RegWrite = 0U;
                        vlSelfRef.__PVT__MemtoReg = 0U;
                        vlSelfRef.__PVT__MemRead = 0U;
                        vlSelfRef.__PVT__LS_op = 0U;
                    }
                    if ((1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                        vlSelfRef.__PVT__Imm = (((- (IData)(
                                                            (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                             >> 0x1fU))) 
                                                 << 0xdU) 
                                                | (((0x1000U 
                                                     & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                            >> 7U)))));
                        vlSelfRef.__PVT__BRU_op = (
                                                   (0x4000U 
                                                    & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                      ? 6U
                                                      : 5U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                      ? 4U
                                                      : 3U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                     ? 0U
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                      ? 2U
                                                      : 1U)));
                    } else {
                        vlSelfRef.__PVT__Imm = 0U;
                        vlSelfRef.__PVT__BRU_op = 0U;
                    }
                } else {
                    vlSelfRef.__PVT__ALU_op = 3U;
                    vlSelfRef.__PVT__MemWrite = 0U;
                    vlSelfRef.__PVT__Imm = 0U;
                    vlSelfRef.__PVT__RegWrite = 0U;
                    vlSelfRef.__PVT__MemtoReg = 0U;
                    vlSelfRef.__PVT__MemRead = 0U;
                    vlSelfRef.__PVT__BRU_op = 0U;
                    vlSelfRef.__PVT__LS_op = 0U;
                }
                vlSelfRef.__PVT__Branch = ((1U & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                  >> 1U)) 
                                           && (1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst));
            }
        } else {
            vlSelfRef.__PVT__ALU_op = 3U;
            vlSelfRef.__PVT__Branch = 0U;
            vlSelfRef.__PVT__MemWrite = 0U;
            vlSelfRef.__PVT__Imm = 0U;
            vlSelfRef.__PVT__RegWrite = 0U;
            vlSelfRef.__PVT__MemtoReg = 0U;
            vlSelfRef.__PVT__MemRead = 0U;
            vlSelfRef.__PVT__BRU_op = 0U;
            vlSelfRef.__PVT__LS_op = 0U;
        }
        vlSelfRef.__PVT__ALUSrc = ((1U & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                          >> 5U)) && 
                                   ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                              >> 4U))) 
                                    && ((8U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                         ? ((1U & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 2U)) 
                                            && ((1U 
                                                 & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)))
                                         : ((1U & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 2U)) 
                                            && ((1U 
                                                 & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))))));
    } else if ((0x20U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
        if ((0x10U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
            if ((8U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__ALU_op = 3U;
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__MemWrite = 0U;
                vlSelfRef.__PVT__Imm = 0U;
                vlSelfRef.__PVT__MemtoReg = 0U;
                vlSelfRef.__PVT__MemRead = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            } else if ((4U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__ALU_op = 3U;
                if ((2U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                    if ((1U & (~ vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))) {
                        vlSelfRef.__PVT__Branch = 0U;
                        vlSelfRef.__PVT__MemWrite = 0U;
                        vlSelfRef.__PVT__MemtoReg = 0U;
                        vlSelfRef.__PVT__MemRead = 0U;
                        vlSelfRef.__PVT__BRU_op = 0U;
                        vlSelfRef.__PVT__LS_op = 0U;
                    }
                    vlSelfRef.__PVT__Imm = ((1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                             ? (0xfffff000U 
                                                & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                             : 0U);
                } else {
                    vlSelfRef.__PVT__Branch = 0U;
                    vlSelfRef.__PVT__MemWrite = 0U;
                    vlSelfRef.__PVT__Imm = 0U;
                    vlSelfRef.__PVT__MemtoReg = 0U;
                    vlSelfRef.__PVT__MemRead = 0U;
                    vlSelfRef.__PVT__BRU_op = 0U;
                    vlSelfRef.__PVT__LS_op = 0U;
                }
            } else if ((2U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__ALU_op = ((1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                            ? ((1U 
                                                == 
                                                (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                 >> 0x19U))
                                                ? (
                                                   (0x4000U 
                                                    & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                      ? 3U
                                                      : 0xfU)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                      ? 3U
                                                      : 0xeU))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                      ? 0xdU
                                                      : 0xcU)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                      ? 0xbU
                                                      : 0xaU)))
                                                : (
                                                   (0x4000U 
                                                    & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                      ? 0U
                                                      : 1U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                      ? 
                                                     ((0x20U 
                                                       == 
                                                       (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                        >> 0x19U))
                                                       ? 7U
                                                       : 6U)
                                                      : 2U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                      ? 9U
                                                      : 8U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                      ? 5U
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                        >> 0x19U))
                                                       ? 4U
                                                       : 3U)))))
                                            : 3U);
                if ((1U & (~ vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))) {
                    vlSelfRef.__PVT__Branch = 0U;
                    vlSelfRef.__PVT__MemWrite = 0U;
                    vlSelfRef.__PVT__Imm = 0U;
                    vlSelfRef.__PVT__MemtoReg = 0U;
                    vlSelfRef.__PVT__MemRead = 0U;
                    vlSelfRef.__PVT__BRU_op = 0U;
                    vlSelfRef.__PVT__LS_op = 0U;
                }
            } else {
                vlSelfRef.__PVT__ALU_op = 3U;
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__MemWrite = 0U;
                vlSelfRef.__PVT__Imm = 0U;
                vlSelfRef.__PVT__MemtoReg = 0U;
                vlSelfRef.__PVT__MemRead = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            }
            vlSelfRef.__PVT__RegWrite = ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 3U))) 
                                         && ((4U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                              ? ((1U 
                                                  & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))
                                              : ((1U 
                                                  & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))));
            vlSelfRef.__PVT__ALUSrc = ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                 >> 3U))) 
                                       && ((1U & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                  >> 2U)) 
                                           && ((1U 
                                                & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 1U)) 
                                               && (1U 
                                                   & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))));
        } else {
            vlSelfRef.__PVT__ALU_op = 3U;
            if ((8U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__Imm = 0U;
                vlSelfRef.__PVT__RegWrite = 0U;
                vlSelfRef.__PVT__MemtoReg = 0U;
                vlSelfRef.__PVT__MemRead = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            } else if ((4U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__Imm = 0U;
                vlSelfRef.__PVT__RegWrite = 0U;
                vlSelfRef.__PVT__MemtoReg = 0U;
                vlSelfRef.__PVT__MemRead = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            } else if ((2U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                if ((1U & (~ vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))) {
                    vlSelfRef.__PVT__Branch = 0U;
                    vlSelfRef.__PVT__RegWrite = 0U;
                    vlSelfRef.__PVT__MemtoReg = 0U;
                    vlSelfRef.__PVT__MemRead = 0U;
                    vlSelfRef.__PVT__BRU_op = 0U;
                }
                if ((1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                    vlSelfRef.__PVT__Imm = (((- (IData)(
                                                        (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                     >> 7U))));
                    vlSelfRef.__PVT__LS_op = ((0U == 
                                               (7U 
                                                & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 0xcU)))
                                               ? 5U
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                       >> 0xcU)))
                                                   ? 6U
                                                   : 7U));
                } else {
                    vlSelfRef.__PVT__Imm = 0U;
                    vlSelfRef.__PVT__LS_op = 0U;
                }
            } else {
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__Imm = 0U;
                vlSelfRef.__PVT__RegWrite = 0U;
                vlSelfRef.__PVT__MemtoReg = 0U;
                vlSelfRef.__PVT__MemRead = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            }
            vlSelfRef.__PVT__MemWrite = ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 3U))) 
                                         && ((1U & 
                                              (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                  >> 2U))) 
                                             && ((1U 
                                                  & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))));
            vlSelfRef.__PVT__ALUSrc = ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                 >> 3U))) 
                                       && ((1U & (~ 
                                                  (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 2U))) 
                                           && ((1U 
                                                & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 1U)) 
                                               && (1U 
                                                   & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))));
        }
    } else if ((0x10U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
        if ((8U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
            vlSelfRef.__PVT__ALU_op = 3U;
            vlSelfRef.__PVT__Branch = 0U;
            vlSelfRef.__PVT__MemWrite = 0U;
            vlSelfRef.__PVT__Imm = 0U;
            vlSelfRef.__PVT__MemtoReg = 0U;
            vlSelfRef.__PVT__MemRead = 0U;
            vlSelfRef.__PVT__BRU_op = 0U;
            vlSelfRef.__PVT__LS_op = 0U;
        } else if ((4U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
            vlSelfRef.__PVT__ALU_op = 3U;
            if ((2U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                if ((1U & (~ vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))) {
                    vlSelfRef.__PVT__Branch = 0U;
                    vlSelfRef.__PVT__MemWrite = 0U;
                    vlSelfRef.__PVT__MemtoReg = 0U;
                    vlSelfRef.__PVT__MemRead = 0U;
                    vlSelfRef.__PVT__BRU_op = 0U;
                    vlSelfRef.__PVT__LS_op = 0U;
                }
                vlSelfRef.__PVT__Imm = ((1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                         ? (0xfffff000U 
                                            & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                         : 0U);
            } else {
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__MemWrite = 0U;
                vlSelfRef.__PVT__Imm = 0U;
                vlSelfRef.__PVT__MemtoReg = 0U;
                vlSelfRef.__PVT__MemRead = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            }
        } else if ((2U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
            if ((1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__ALU_op = ((0x4000U 
                                            & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                            ? ((0x2000U 
                                                & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                    ? 
                                                   ((0x20U 
                                                     == 
                                                     (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                      >> 0x19U))
                                                     ? 7U
                                                     : 6U)
                                                    : 2U))
                                            : ((0x2000U 
                                                & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                    ? 5U
                                                    : 3U)));
                vlSelfRef.__PVT__Imm = (((- (IData)(
                                                    (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                         >> 0x14U));
            } else {
                vlSelfRef.__PVT__ALU_op = 3U;
                vlSelfRef.__PVT__Imm = 0U;
            }
            if ((1U & (~ vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))) {
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__MemWrite = 0U;
                vlSelfRef.__PVT__MemtoReg = 0U;
                vlSelfRef.__PVT__MemRead = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            }
        } else {
            vlSelfRef.__PVT__ALU_op = 3U;
            vlSelfRef.__PVT__Branch = 0U;
            vlSelfRef.__PVT__MemWrite = 0U;
            vlSelfRef.__PVT__Imm = 0U;
            vlSelfRef.__PVT__MemtoReg = 0U;
            vlSelfRef.__PVT__MemRead = 0U;
            vlSelfRef.__PVT__BRU_op = 0U;
            vlSelfRef.__PVT__LS_op = 0U;
        }
        vlSelfRef.__PVT__RegWrite = ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 3U))) 
                                     && ((4U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                          ? ((1U & 
                                              (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 1U)) 
                                             && (1U 
                                                 & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))
                                          : ((1U & 
                                              (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 1U)) 
                                             && (1U 
                                                 & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))));
        vlSelfRef.__PVT__ALUSrc = ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                             >> 3U))) 
                                   && ((4U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                        ? ((1U & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                  >> 1U)) 
                                           && (1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))
                                        : ((1U & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                  >> 1U)) 
                                           && (1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))));
    } else {
        vlSelfRef.__PVT__ALU_op = 3U;
        if ((8U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
            if ((4U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__MemWrite = 0U;
                vlSelfRef.__PVT__Imm = 0U;
                vlSelfRef.__PVT__MemtoReg = 0U;
                vlSelfRef.__PVT__MemRead = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            } else if ((2U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__MemWrite = 0U;
                vlSelfRef.__PVT__Imm = 0U;
                vlSelfRef.__PVT__MemtoReg = 0U;
                vlSelfRef.__PVT__MemRead = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            } else if ((1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__MemWrite = 0U;
                vlSelfRef.__PVT__Imm = 0U;
                vlSelfRef.__PVT__MemtoReg = 0U;
                vlSelfRef.__PVT__MemRead = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            }
        } else {
            if ((4U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__MemWrite = 0U;
                vlSelfRef.__PVT__Imm = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            } else if ((2U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                if ((1U & (~ vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))) {
                    vlSelfRef.__PVT__Branch = 0U;
                    vlSelfRef.__PVT__MemWrite = 0U;
                    vlSelfRef.__PVT__BRU_op = 0U;
                }
                if ((1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)) {
                    vlSelfRef.__PVT__Imm = (((- (IData)(
                                                        (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 0x14U));
                    vlSelfRef.__PVT__LS_op = ((0x4000U 
                                               & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                               ? ((0x2000U 
                                                   & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                    ? 4U
                                                    : 3U))
                                               : ((0x2000U 
                                                   & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)
                                                    ? 1U
                                                    : 0U)));
                } else {
                    vlSelfRef.__PVT__Imm = 0U;
                    vlSelfRef.__PVT__LS_op = 0U;
                }
            } else {
                vlSelfRef.__PVT__Branch = 0U;
                vlSelfRef.__PVT__MemWrite = 0U;
                vlSelfRef.__PVT__Imm = 0U;
                vlSelfRef.__PVT__BRU_op = 0U;
                vlSelfRef.__PVT__LS_op = 0U;
            }
            vlSelfRef.__PVT__MemtoReg = ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 2U))) 
                                         && ((1U & 
                                              (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 1U)) 
                                             && (1U 
                                                 & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)));
            vlSelfRef.__PVT__MemRead = ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                  >> 2U))) 
                                        && ((1U & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst)));
        }
        vlSelfRef.__PVT__RegWrite = ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 3U))) 
                                     && ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                   >> 2U))) 
                                         && ((1U & 
                                              (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                               >> 1U)) 
                                             && (1U 
                                                 & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))));
        vlSelfRef.__PVT__ALUSrc = ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                             >> 3U))) 
                                   && ((1U & (~ (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                 >> 2U))) 
                                       && ((1U & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                  >> 1U)) 
                                           && (1U & vlSymsp->TOP__CPU__if_id_reg.__PVT__inst))));
    }
}
