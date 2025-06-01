// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ALU.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_ALU___nba_sequent__TOP__CPU__ex_stage__ALU_Instance__0(VCPU_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_ALU___nba_sequent__TOP__CPU__ex_stage__ALU_Instance__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__Mult = 0ULL;
    vlSelfRef.__PVT__ALU_result = 0U;
    if ((8U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))) {
        if ((4U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))) {
            if ((2U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))) {
                vlSelfRef.__PVT__ALU_result = ((1U 
                                                & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))
                                                ? (
                                                   (0U 
                                                    == 
                                                    ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                      ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                      : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))
                                                    ? vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A
                                                    : 
                                                   VL_MODDIVS_III(32, vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A, 
                                                                  ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                                    ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                                    : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B)))
                                                : (
                                                   (0U 
                                                    == 
                                                    ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                      ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                      : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))
                                                    ? 0xffffffffU
                                                    : 
                                                   VL_DIVS_III(32, vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A, 
                                                               ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                                 ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                                 : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))));
            } else if ((1U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))) {
                vlSelfRef.__PVT__Mult = ((QData)((IData)(vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A)) 
                                         * (QData)((IData)(
                                                           ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                             ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                             : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))));
                vlSelfRef.__PVT__ALU_result = (IData)(
                                                      (vlSelfRef.__PVT__Mult 
                                                       >> 0x20U));
            } else {
                vlSelfRef.__PVT__Mult = ((QData)((IData)(vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A)) 
                                         * (QData)((IData)(
                                                           ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                             ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                             : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))));
                vlSelfRef.__PVT__ALU_result = (IData)(
                                                      (vlSelfRef.__PVT__Mult 
                                                       >> 0x20U));
            }
        } else if ((2U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))) {
            if ((1U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))) {
                vlSelfRef.__PVT__Mult = VL_MULS_QQQ(64, 
                                                    VL_EXTENDS_QI(64,32, vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A), 
                                                    VL_EXTENDS_QI(64,32, 
                                                                  ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                                    ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                                    : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B)));
                vlSelfRef.__PVT__ALU_result = (IData)(
                                                      (vlSelfRef.__PVT__Mult 
                                                       >> 0x20U));
            } else {
                vlSelfRef.__PVT__ALU_result = (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                               * ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                   ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                   : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B));
            }
        } else {
            vlSelfRef.__PVT__ALU_result = ((1U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))
                                            ? ((vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                < ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                    ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                    : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))
                                                ? 1U
                                                : 0U)
                                            : (VL_LTS_III(32, vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A, 
                                                          ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                            ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                            : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))
                                                ? 1U
                                                : 0U));
        }
    } else {
        vlSelfRef.__PVT__ALU_result = ((4U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))
                                        ? ((2U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))
                                                ? VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A, 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                                      ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                                      : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B)))
                                                : (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                        ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                        : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))))
                                            : ((1U 
                                                & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))
                                                ? (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                        ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                        : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B)))
                                                : (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                   - 
                                                   ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                     ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                     : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))))
                                        : ((2U & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))
                                            ? ((1U 
                                                & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))
                                                ? (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                     ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                     : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))
                                                : (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                     ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                     : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B)))
                                            : ((1U 
                                                & (IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALU_op))
                                                ? (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                   | ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                       ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                       : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B))
                                                : (vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_A 
                                                   & ((IData)(vlSymsp->TOP__CPU__id_ex_reg.__PVT__ALUSrc)
                                                       ? vlSymsp->TOP__CPU__id_ex_reg.__PVT__Imm
                                                       : vlSymsp->TOP__CPU__ex_stage__forward_inst.__PVT__Forwarded_B)))));
    }
}
