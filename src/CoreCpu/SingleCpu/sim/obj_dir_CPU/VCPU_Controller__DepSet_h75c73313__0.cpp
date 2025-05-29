// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_Controller.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_Controller___ico_sequent__TOP__CPU__constrol_sl__0(VCPU_Controller* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU_Controller___ico_sequent__TOP__CPU__constrol_sl__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__MemReadEn = 0U;
    vlSelfRef.__PVT__RegWriteEn = 0U;
    vlSelfRef.__PVT__Mem2Reg = 0U;
    vlSelfRef.__PVT__MemWriteEn = 0U;
    vlSelfRef.__PVT__JumpLink = 0U;
    vlSelfRef.__PVT__BranchOperation = 0U;
    vlSelfRef.__PVT__MemoryOperation = 0U;
    vlSelfRef.__PVT__AluSrc1 = 0U;
    vlSelfRef.__PVT__AluOperation = 0U;
    vlSelfRef.__PVT__AluSrc2 = 1U;
    if (vlSymsp->TOP.UartOver) {
        if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                      >> 6U)))) {
            if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                          >> 5U)))) {
                if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                    vlSelfRef.__PVT__MemReadEn = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x20U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                    vlSelfRef.__PVT__MemWriteEn = 1U;
                                    vlSelfRef.__PVT__MemoryOperation 
                                        = ((0U == (7U 
                                                   & (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                                      >> 0xcU)))
                                            ? 5U : 
                                           ((1U == 
                                             (7U & 
                                              (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                               >> 0xcU)))
                                             ? 6U : 
                                            ((2U == 
                                              (7U & 
                                               (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                                >> 0xcU)))
                                              ? 7U : 0U)));
                                }
                            }
                        }
                    }
                }
                if ((0x10U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                    if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                    vlSelfRef.__PVT__AluSrc2 = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                 >> 4U)))) {
                if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                  >> 2U)))) {
                        if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                            if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                vlSelfRef.__PVT__MemoryOperation 
                                    = ((0x4000U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                        ? ((0x2000U 
                                            & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                            ? 0U : 
                                           ((0x1000U 
                                             & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                             ? 4U : 3U))
                                        : ((0x2000U 
                                            & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                            ? ((0x1000U 
                                                & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                ? 0U
                                                : 2U)
                                            : ((0x1000U 
                                                & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                ? 1U
                                                : 0U)));
                            }
                        }
                    }
                }
            }
        }
        if ((0x40U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
            if ((0x20U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                              >> 4U)))) {
                    if ((8U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                        if ((4U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                            if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                    vlSelfRef.__PVT__RegWriteEn = 1U;
                                    vlSelfRef.__PVT__Mem2Reg = 2U;
                                    vlSelfRef.__PVT__BranchOperation = 7U;
                                    vlSelfRef.__PVT__AluSrc1 = 1U;
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                            if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                    vlSelfRef.__PVT__RegWriteEn = 1U;
                                    vlSelfRef.__PVT__Mem2Reg = 2U;
                                    vlSelfRef.__PVT__BranchOperation = 7U;
                                }
                            }
                        } else if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                            if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                vlSelfRef.__PVT__BranchOperation 
                                    = ((0x4000U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                        ? ((0x2000U 
                                            & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                            ? ((0x1000U 
                                                & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                ? 6U
                                                : 5U)
                                            : ((0x1000U 
                                                & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                ? 4U
                                                : 3U))
                                        : ((0x2000U 
                                            & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                            ? 0U : 
                                           ((0x1000U 
                                             & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                             ? 2U : 1U)));
                            }
                        }
                        if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                    vlSelfRef.__PVT__AluSrc1 = 1U;
                                }
                            }
                        }
                    }
                    if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                            if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                    vlSelfRef.__PVT__JumpLink = 1U;
                                }
                            }
                        }
                    }
                }
            }
            vlSelfRef.__PVT__AluOperation = 3U;
        } else {
            if ((0x20U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                if ((0x10U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                    if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                            if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                    vlSelfRef.__PVT__RegWriteEn = 1U;
                                }
                            }
                        } else if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                            if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                vlSelfRef.__PVT__RegWriteEn = 1U;
                            }
                        }
                    }
                    vlSelfRef.__PVT__AluOperation = 
                        ((8U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                          ? 3U : ((4U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                   ? 3U : ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                            ? ((1U 
                                                & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                ? (
                                                   (1U 
                                                    == 
                                                    (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                                     >> 0x19U))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                       ? 0U
                                                       : 0xfU)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                       ? 0U
                                                       : 0xeU))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                       ? 0xdU
                                                       : 0xcU)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                       ? 0xbU
                                                       : 0xaU)))
                                                    : 
                                                   ((0x4000U 
                                                     & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                       ? 0U
                                                       : 1U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                       ? 
                                                      ((0x20U 
                                                        == 
                                                        (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                                         >> 0x19U))
                                                        ? 7U
                                                        : 6U)
                                                       : 2U))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                       ? 9U
                                                       : 8U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                       ? 5U
                                                       : 
                                                      ((0x20U 
                                                        == 
                                                        (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                                         >> 0x19U))
                                                        ? 4U
                                                        : 3U)))))
                                                : 3U)
                                            : 3U)));
                } else {
                    vlSelfRef.__PVT__AluOperation = 3U;
                }
            } else if ((0x10U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                              >> 3U)))) {
                    if ((4U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                        if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                            if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                vlSelfRef.__PVT__RegWriteEn = 1U;
                            }
                        }
                    } else if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                        if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                            vlSelfRef.__PVT__RegWriteEn = 1U;
                        }
                    }
                }
                vlSelfRef.__PVT__AluOperation = ((8U 
                                                  & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                  ? 3U
                                                  : 
                                                 ((4U 
                                                   & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                   ? 3U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                        ? 
                                                       ((0x20U 
                                                         == 
                                                         (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                                          >> 0x19U))
                                                         ? 7U
                                                         : 6U)
                                                        : 2U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                        ? 9U
                                                        : 8U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)
                                                        ? 5U
                                                        : 3U)))
                                                     : 3U)
                                                    : 3U)));
            } else {
                if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                  >> 2U)))) {
                        if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                            if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                vlSelfRef.__PVT__RegWriteEn = 1U;
                            }
                        }
                    }
                }
                vlSelfRef.__PVT__AluOperation = 3U;
            }
            if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                          >> 5U)))) {
                if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                              >> 4U)))) {
                    if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                    vlSelfRef.__PVT__Mem2Reg = 1U;
                                }
                            }
                        }
                    }
                }
                if ((0x10U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                    if ((1U & (~ (vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                            if ((2U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                if ((1U & vlSymsp->TOP__CPU__icache_sl.__PVT__Instruction)) {
                                    vlSelfRef.__PVT__AluSrc1 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
