// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ID_EX.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_ID_EX___nba_sequent__TOP__CPU__id_ex_reg__0(VCPU_ID_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_ID_EX___nba_sequent__TOP__CPU__id_ex_reg__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__MemtoReg = vlSelfRef.__PVT__MemtoReg;
    vlSelfRef.__Vdly__RegWrite = vlSelfRef.__PVT__RegWrite;
    vlSelfRef.__Vdly__Rd = vlSelfRef.__PVT__Rd;
    vlSelfRef.__Vdly__Rs2 = vlSelfRef.__PVT__Rs2;
    vlSelfRef.__Vdly__MemRead = vlSelfRef.__PVT__MemRead;
    vlSelfRef.__Vdly__MemWrite = vlSelfRef.__PVT__MemWrite;
    vlSelfRef.__PVT__Branch = ((1U & (~ ((IData)(vlSymsp->TOP.rst) 
                                         | (IData)(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken)))) 
                               && ((IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall)
                                    ? (IData)(vlSelfRef.__PVT__Branch)
                                    : (IData)(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__Branch)));
    vlSelfRef.__Vdly__MemtoReg = ((1U & (~ ((IData)(vlSymsp->TOP.rst) 
                                            | (IData)(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken)))) 
                                  && ((IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall)
                                       ? (IData)(vlSelfRef.__PVT__MemtoReg)
                                       : (IData)(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__MemtoReg)));
    vlSelfRef.__Vdly__RegWrite = ((1U & (~ ((IData)(vlSymsp->TOP.rst) 
                                            | (IData)(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken)))) 
                                  && ((IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall)
                                       ? (IData)(vlSelfRef.__PVT__RegWrite)
                                       : (IData)(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__RegWrite)));
    vlSelfRef.__PVT__ALUSrc = ((1U & (~ ((IData)(vlSymsp->TOP.rst) 
                                         | (IData)(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken)))) 
                               && ((IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall)
                                    ? (IData)(vlSelfRef.__PVT__ALUSrc)
                                    : (IData)(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__ALUSrc)));
    if (((IData)(vlSymsp->TOP.rst) | (IData)(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken))) {
        vlSelfRef.__PVT__ALU_op = 0U;
        vlSelfRef.__PVT__BRU_op = 0U;
        vlSelfRef.__Vdly__Rd = 0U;
        vlSelfRef.__PVT__Imm = 0U;
        vlSelfRef.__PVT__rs2 = 0U;
        vlSelfRef.__PVT__rs1 = 0U;
        vlSelfRef.__PVT__Pc = 0U;
        vlSelfRef.__PVT__Rs1 = 0U;
        vlSelfRef.__PVT__LS_op = 0U;
        vlSelfRef.__Vdly__Rs2 = 0U;
    } else if (vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall) {
        vlSelfRef.__PVT__ALU_op = vlSelfRef.__PVT__ALU_op;
        vlSelfRef.__PVT__BRU_op = vlSelfRef.__PVT__BRU_op;
        vlSelfRef.__Vdly__Rd = (0x1fU & (IData)(vlSelfRef.__PVT__Rd));
        vlSelfRef.__PVT__Imm = vlSelfRef.__PVT__Imm;
        vlSelfRef.__PVT__rs2 = (0x1fU & (IData)(vlSelfRef.__PVT__rs2));
        vlSelfRef.__PVT__rs1 = (0x1fU & (IData)(vlSelfRef.__PVT__rs1));
        vlSelfRef.__PVT__Pc = vlSelfRef.__PVT__Pc;
        vlSelfRef.__PVT__Rs1 = vlSelfRef.__PVT__Rs1;
        vlSelfRef.__PVT__LS_op = vlSelfRef.__PVT__LS_op;
        vlSelfRef.__Vdly__Rs2 = vlSelfRef.__PVT__Rs2;
    } else {
        vlSelfRef.__PVT__ALU_op = vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__ALU_op;
        vlSelfRef.__PVT__BRU_op = vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__BRU_op;
        vlSelfRef.__Vdly__Rd = (0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                         >> 7U));
        vlSelfRef.__PVT__Imm = vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__Imm;
        vlSelfRef.__PVT__rs2 = (0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                         >> 0x14U));
        vlSelfRef.__PVT__rs1 = (0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                         >> 0xfU));
        vlSelfRef.__PVT__Pc = vlSymsp->TOP__CPU__id_stage.__PVT__PcOut;
        vlSelfRef.__PVT__Rs1 = ((0U == (0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                 >> 0xfU)))
                                 ? 0U : vlSymsp->TOP__CPU__reg_file.__PVT__regs
                                [(0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                           >> 0xfU))]);
        vlSelfRef.__PVT__LS_op = vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__LS_op;
        vlSelfRef.__Vdly__Rs2 = ((0U == (0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                                  >> 0x14U)))
                                  ? 0U : vlSymsp->TOP__CPU__reg_file.__PVT__regs
                                 [(0x1fU & (vlSymsp->TOP__CPU__if_id_reg.__PVT__inst 
                                            >> 0x14U))]);
    }
    vlSelfRef.__Vdly__MemRead = ((1U & (~ ((IData)(vlSymsp->TOP.rst) 
                                           | (IData)(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken)))) 
                                 && ((IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall)
                                      ? (IData)(vlSelfRef.__PVT__MemRead)
                                      : (IData)(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__MemRead)));
    vlSelfRef.__Vdly__MemWrite = ((1U & (~ ((IData)(vlSymsp->TOP.rst) 
                                            | (IData)(vlSymsp->TOP__CPU__ex_stage__BRU_Instance.__PVT__BranchTaken)))) 
                                  && ((IData)(vlSymsp->TOP__CPU__mem_stage__U_DCache.__PVT__DStall)
                                       ? (IData)(vlSelfRef.__PVT__MemWrite)
                                       : (IData)(vlSymsp->TOP__CPU__id_stage__controller_inst.__PVT__MemWrite)));
}
