// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ALU.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_ALU___ico_sequent__TOP__CPU__alu_sl__0(VCPU_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_ALU___ico_sequent__TOP__CPU__alu_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__Mul = 0ULL;
    vlSelfRef.__PVT__Result = 0U;
    vlSelfRef.__PVT__SignedInputAExt = 0ULL;
    vlSelfRef.__PVT__UnsignedInputBExt = 0ULL;
    vlSelfRef.__PVT__FullMul[0U] = 0U;
    vlSelfRef.__PVT__FullMul[1U] = 0U;
    vlSelfRef.__PVT__FullMul[2U] = 0U;
    vlSelfRef.__PVT__FullMul[3U] = 0U;
    if ((8U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))) {
        if ((4U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))) {
            if ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))) {
                vlSelfRef.__PVT__Result = ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))
                                            ? VL_MODDIVS_III(32, 
                                                             ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                               ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                               : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1), 
                                                             ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                               ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                               : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))
                                            : VL_DIVS_III(32, 
                                                          ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                            ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                            : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1), 
                                                          ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                            ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                            : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)));
            } else if ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))) {
                vlSelfRef.__PVT__Mul = ((QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                          ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                          : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1))) 
                                        * (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                            ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                            : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))));
                vlSelfRef.__PVT__Result = (IData)((vlSelfRef.__PVT__Mul 
                                                   >> 0x20U));
            } else {
                vlSelfRef.__PVT__SignedInputAExt = 
                    (((QData)((IData)((- (IData)((((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                    ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                    : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1) 
                                                  >> 0x1fU))))) 
                      << 0x20U) | (QData)((IData)(((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                    ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                    : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1))));
                vlSelfRef.__PVT__UnsignedInputBExt 
                    = (QData)((IData)(((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                        ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                        : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)));
                __Vtemp_1[0U] = (IData)(vlSelfRef.__PVT__SignedInputAExt);
                __Vtemp_1[1U] = (IData)((vlSelfRef.__PVT__SignedInputAExt 
                                         >> 0x20U));
                __Vtemp_1[2U] = 0U;
                __Vtemp_1[3U] = 0U;
                __Vtemp_2[0U] = (IData)(vlSelfRef.__PVT__UnsignedInputBExt);
                __Vtemp_2[1U] = (IData)((vlSelfRef.__PVT__UnsignedInputBExt 
                                         >> 0x20U));
                __Vtemp_2[2U] = 0U;
                __Vtemp_2[3U] = 0U;
                VL_MUL_W(4, vlSelfRef.__PVT__FullMul, __Vtemp_1, __Vtemp_2);
                vlSelfRef.__PVT__Result = vlSelfRef.__PVT__FullMul[1U];
            }
        } else if ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))) {
            if ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))) {
                vlSelfRef.__PVT__Mul = VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, 
                                                                 ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                                   ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                                   : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1)), 
                                                   VL_EXTENDS_QI(64,32, 
                                                                 ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                                   ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                                   : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)));
                vlSelfRef.__PVT__Result = (IData)((vlSelfRef.__PVT__Mul 
                                                   >> 0x20U));
            } else {
                vlSelfRef.__PVT__Mul = VL_MULS_QQQ(64, 
                                                   VL_EXTENDS_QI(64,32, 
                                                                 ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                                   ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                                   : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1)), 
                                                   VL_EXTENDS_QI(64,32, 
                                                                 ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                                   ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                                   : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)));
                vlSelfRef.__PVT__Result = (IData)(vlSelfRef.__PVT__Mul);
            }
        } else {
            vlSelfRef.__PVT__Result = ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))
                                        ? ((((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                              ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                              : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1) 
                                            < ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))
                                            ? 1U : 0U)
                                        : (VL_LTS_III(32, 
                                                      ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                        ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                        : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1), 
                                                      ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                        ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                        : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))
                                            ? 1U : 0U));
        }
    } else {
        vlSelfRef.__PVT__Result = ((4U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))
                                    ? ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))
                                        ? ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))
                                            ? VL_SHIFTRS_III(32,32,5, 
                                                             ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                               ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                               : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1), 
                                                             (0x1fU 
                                                              & ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                                  ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                                  : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)))
                                            : (((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                 ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                 : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1) 
                                               >> (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                       ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                       : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))))
                                        : ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))
                                            ? (((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                 ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                 : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1) 
                                               << (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                       ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                       : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)))
                                            : (((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                 ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                 : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1) 
                                               - ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                   ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                   : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))))
                                    : ((2U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))
                                        ? ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))
                                            ? (((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                 ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                 : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1) 
                                               + ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                   ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                   : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))
                                            : (((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                 ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                 : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1) 
                                               ^ ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                   ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                   : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)))
                                        : ((1U & (IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluOperation))
                                            ? (((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                 ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                 : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1) 
                                               | ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                   ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                   : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2))
                                            : (((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc1)
                                                 ? vlSymsp->TOP__CPU__pc_sl.PcReg
                                                 : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData1) 
                                               & ((IData)(vlSymsp->TOP__CPU__constrol_sl.__PVT__AluSrc2)
                                                   ? vlSymsp->TOP__CPU__imm_sl.__PVT__ImmData
                                                   : vlSymsp->TOP__CPU__regf_sl.__PVT__ReadData2)))));
    }
}
