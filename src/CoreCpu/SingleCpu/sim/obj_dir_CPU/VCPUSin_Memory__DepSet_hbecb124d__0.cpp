// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPUSin.h for the primary calling header

#include "VCPUSin__pch.h"
#include "VCPUSin_Memory.h"
#include "VCPUSin__Syms.h"

VL_INLINE_OPT void VCPUSin_Memory___ico_sequent__TOP__CPUSin__memory_sl__0(VCPUSin_Memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPUSin_Memory___ico_sequent__TOP__CPUSin__memory_sl__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xffffU == (vlSymsp->TOP__CPUSin.__PVT__UartMemAddress 
                     >> 0x10U))) {
        vlSelfRef.__Vcellinp__mem_inst__write_datab = 0U;
        vlSelfRef.__PVT__ReadDataB = ((0xffffff00U 
                                       == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                       ? (IData)(vlSymsp->TOP.Switch1)
                                       : ((0xffffff04U 
                                           == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                           ? (IData)(vlSymsp->TOP.Switch2)
                                           : ((0xffffff14U 
                                               == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                               ? ((IData)(vlSymsp->TOP.Button1)
                                                   ? 1U
                                                   : 0U)
                                               : ((0xffffff18U 
                                                   == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                                   ? 
                                                  ((IData)(vlSymsp->TOP.Button2)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xffffff1cU 
                                                    == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.Button3)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0xffffff20U 
                                                     == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP.Button4)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((0xffffff24U 
                                                      == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP.Button5)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)))))));
    } else {
        vlSelfRef.__Vcellinp__mem_inst__write_datab 
            = vlSymsp->TOP__CPUSin.__PVT__UartMemData;
        vlSelfRef.__PVT__ReadDataB = vlSymsp->TOP__CPUSin__memory_sl__mem_inst.__PVT__datab;
    }
    vlSelfRef.__PVT__EnWB = ((0xffffU != (vlSymsp->TOP__CPUSin.__PVT__UartMemAddress 
                                          >> 0x10U)) 
                             & ((~ (IData)(vlSymsp->TOP.UartOver)) 
                                | (IData)(vlSymsp->TOP__CPUSin.__PVT__MemWriteEn)));
}

VL_INLINE_OPT void VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__0(VCPUSin_Memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__mmio_inst__DOT__chars__v0;
    __VdlyVal__mmio_inst__DOT__chars__v0 = 0;
    SData/*11:0*/ __VdlyDim0__mmio_inst__DOT__chars__v0;
    __VdlyDim0__mmio_inst__DOT__chars__v0 = 0;
    CData/*7:0*/ __VdlyVal__mmio_inst__DOT__color__v0;
    __VdlyVal__mmio_inst__DOT__color__v0 = 0;
    SData/*11:0*/ __VdlyDim0__mmio_inst__DOT__color__v0;
    __VdlyDim0__mmio_inst__DOT__color__v0 = 0;
    CData/*7:0*/ __VdlyVal__mmio_inst__DOT__chars__v1;
    __VdlyVal__mmio_inst__DOT__chars__v1 = 0;
    SData/*11:0*/ __VdlyDim0__mmio_inst__DOT__chars__v1;
    __VdlyDim0__mmio_inst__DOT__chars__v1 = 0;
    CData/*7:0*/ __VdlyVal__mmio_inst__DOT__color__v1;
    __VdlyVal__mmio_inst__DOT__color__v1 = 0;
    SData/*11:0*/ __VdlyDim0__mmio_inst__DOT__color__v1;
    __VdlyDim0__mmio_inst__DOT__color__v1 = 0;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mmio_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0xc00U, vlSelfRef.__PVT__mmio_inst__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.mmio_inst__DOT____Vlvbound_h1410888b__0 = 0U;
            if (VL_LIKELY(((0xbffU >= (0xfffU & vlSelfRef.__PVT__mmio_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__mmio_inst__DOT__chars__v0 
                    = vlSelfRef.mmio_inst__DOT____Vlvbound_h1410888b__0;
                __VdlyDim0__mmio_inst__DOT__chars__v0 
                    = (0xfffU & vlSelfRef.__PVT__mmio_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuemmio_inst__DOT__chars.enqueue(__VdlyVal__mmio_inst__DOT__chars__v0, (IData)(__VdlyDim0__mmio_inst__DOT__chars__v0));
            }
            vlSelfRef.mmio_inst__DOT____Vlvbound_hf13a2a6e__0 = 0U;
            if (VL_LIKELY(((0xbffU >= (0xfffU & vlSelfRef.__PVT__mmio_inst__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__mmio_inst__DOT__color__v0 
                    = vlSelfRef.mmio_inst__DOT____Vlvbound_hf13a2a6e__0;
                __VdlyDim0__mmio_inst__DOT__color__v0 
                    = (0xfffU & vlSelfRef.__PVT__mmio_inst__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuemmio_inst__DOT__color.enqueue(__VdlyVal__mmio_inst__DOT__color__v0, (IData)(__VdlyDim0__mmio_inst__DOT__color__v0));
            }
            vlSelfRef.__PVT__mmio_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.__PVT__mmio_inst__DOT__unnamedblk1__DOT__i);
        }
    } else if ((0xffffeU == (vlSymsp->TOP__CPUSin.__PVT__UartMemAddress 
                             >> 0xcU))) {
        vlSelfRef.mmio_inst__DOT____Vlvbound_h37617fa1__0 
            = (0xffU & vlSymsp->TOP__CPUSin.__PVT__UartMemData);
        if ((0xbffU >= (0xfffU & vlSymsp->TOP__CPUSin.__PVT__UartMemAddress))) {
            __VdlyVal__mmio_inst__DOT__chars__v1 = vlSelfRef.mmio_inst__DOT____Vlvbound_h37617fa1__0;
            __VdlyDim0__mmio_inst__DOT__chars__v1 = 
                (0xfffU & vlSymsp->TOP__CPUSin.__PVT__UartMemAddress);
            vlSelfRef.__VdlyCommitQueuemmio_inst__DOT__chars.enqueue(__VdlyVal__mmio_inst__DOT__chars__v1, (IData)(__VdlyDim0__mmio_inst__DOT__chars__v1));
        }
    } else if ((0xffffdU == (vlSymsp->TOP__CPUSin.__PVT__UartMemAddress 
                             >> 0xcU))) {
        vlSelfRef.mmio_inst__DOT____Vlvbound_h45e5c314__0 
            = (0xffU & vlSymsp->TOP__CPUSin.__PVT__UartMemData);
        if ((0xbffU >= (0xfffU & vlSymsp->TOP__CPUSin.__PVT__UartMemAddress))) {
            __VdlyVal__mmio_inst__DOT__color__v1 = vlSelfRef.mmio_inst__DOT____Vlvbound_h45e5c314__0;
            __VdlyDim0__mmio_inst__DOT__color__v1 = 
                (0xfffU & vlSymsp->TOP__CPUSin.__PVT__UartMemAddress);
            vlSelfRef.__VdlyCommitQueuemmio_inst__DOT__color.enqueue(__VdlyVal__mmio_inst__DOT__color__v1, (IData)(__VdlyDim0__mmio_inst__DOT__color__v1));
        }
    }
    vlSelfRef.__VdlyCommitQueuemmio_inst__DOT__chars.commit(vlSelfRef.__PVT__mmio_inst__DOT__chars);
    vlSelfRef.__VdlyCommitQueuemmio_inst__DOT__color.commit(vlSelfRef.__PVT__mmio_inst__DOT__color);
}

VL_INLINE_OPT void VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__1(VCPUSin_Memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__1\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ExpData = (((((((((0x1c090000U 
                                        == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg) 
                                       | (0x1c090004U 
                                          == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                      | (0x1c090008U 
                                         == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                     | (0x1c09000cU 
                                        == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                    | (0x1c090010U 
                                       == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                   | (0x1c090014U == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                  | (0x1c090018U == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                 | (0x1c09001cU == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg))
                                 ? ((0x1c090000U == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                     ? 0xff810113U : 
                                    ((0x1c090004U == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                      ? 0x512223U : 
                                     ((0x1c090008U 
                                       == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                       ? 0x612023U : 
                                      ((0x1c09000cU 
                                        == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                        ? 0xa00293U
                                        : ((0x1c090010U 
                                            == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                            ? 0x2588c63U
                                            : ((0x1c090014U 
                                                == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                ? 0x100293U
                                                : (
                                                   (0x1c090018U 
                                                    == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                    ? 0x4588663U
                                                    : 0x200293U)))))))
                                 : (((((((((0x1c090020U 
                                            == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg) 
                                           | (0x1c090024U 
                                              == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                          | (0x1c090028U 
                                             == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                         | (0x1c09002cU 
                                            == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                        | (0x1c090030U 
                                           == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                       | (0x1c090034U 
                                          == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                      | (0x1c090038U 
                                         == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                     | (0x1c09003cU 
                                        == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg))
                                     ? ((0x1c090020U 
                                         == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                         ? 0x4588663U
                                         : ((0x1c090024U 
                                             == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                             ? 0x300293U
                                             : ((0x1c090028U 
                                                 == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                 ? 0x4588663U
                                                 : 
                                                ((0x1c09002cU 
                                                  == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                  ? 0x500293U
                                                  : 
                                                 ((0x1c090030U 
                                                   == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                   ? 0x588e63U
                                                   : 
                                                  ((0x1c090034U 
                                                    == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                    ? 0x600293U
                                                    : 
                                                   ((0x1c090038U 
                                                     == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                     ? 0x588e63U
                                                     : 0x700293U)))))))
                                     : (((((((((0x1c090040U 
                                                == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg) 
                                               | (0x1c090044U 
                                                  == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                              | (0x1c090048U 
                                                 == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                             | (0x1c09004cU 
                                                == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                            | (0x1c090050U 
                                               == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                           | (0x1c090054U 
                                              == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                          | (0x1c090058U 
                                             == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                         | (0x1c09005cU 
                                            == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg))
                                         ? ((0x1c090040U 
                                             == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                             ? 0x588e63U
                                             : ((0x1c090044U 
                                                 == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                 ? 0x380006fU
                                                 : 
                                                ((0x1c090048U 
                                                  == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                  ? 0x6fU
                                                  : 
                                                 ((0x1c09004cU 
                                                   == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                   ? 0x1a503U
                                                   : 
                                                  ((0x1c090050U 
                                                    == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                    ? 0x2c0006fU
                                                    : 
                                                   ((0x1c090054U 
                                                     == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                     ? 0x41a503U
                                                     : 
                                                    ((0x1c090058U 
                                                      == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                      ? 0x240006fU
                                                      : 0x81a503U)))))))
                                         : ((((((((
                                                   (0x1c090060U 
                                                    == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg) 
                                                   | (0x1c090064U 
                                                      == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                                  | (0x1c090068U 
                                                     == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                                 | (0x1c09006cU 
                                                    == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                                | (0x1c090070U 
                                                   == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                               | (0x1c090074U 
                                                  == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                              | (0x1c090078U 
                                                 == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)) 
                                             | (0x1c09007cU 
                                                == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg))
                                             ? ((0x1c090060U 
                                                 == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                 ? 0x1c0006fU
                                                 : 
                                                ((0x1c090064U 
                                                  == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                  ? 0xa1a623U
                                                  : 
                                                 ((0x1c090068U 
                                                   == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                   ? 0x140006fU
                                                   : 
                                                  ((0x1c09006cU 
                                                    == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                    ? 0xa1a823U
                                                    : 
                                                   ((0x1c090070U 
                                                     == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                     ? 0xc0006fU
                                                     : 
                                                    ((0x1c090074U 
                                                      == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                      ? 0x2a1a423U
                                                      : 
                                                     ((0x1c090078U 
                                                       == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                       ? 0x40006fU
                                                       : 0x12303U)))))))
                                             : ((0x1c090080U 
                                                 == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                 ? 0x412283U
                                                 : 
                                                ((0x1c090084U 
                                                  == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                  ? 0x810113U
                                                  : 
                                                 ((0x1c090088U 
                                                   == vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg)
                                                   ? 0x10200073U
                                                   : 0U)))))));
}

VL_INLINE_OPT void VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__2(VCPUSin_Memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPUSin_Memory___nba_sequent__TOP__CPUSin__memory_sl__2\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__mmio_inst__DOT__Led1 = 0U;
        vlSelfRef.__PVT__mmio_inst__DOT__Led2 = 0U;
        vlSelfRef.__PVT__mmio_inst__DOT__Seg1 = 0U;
    } else {
        if ((0xffffff0cU == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)) {
            vlSelfRef.__PVT__mmio_inst__DOT__Led1 = 
                (0xffU & vlSymsp->TOP__CPUSin.__PVT__UartMemData);
        }
        if ((0xffffff0cU != vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)) {
            if ((0xffffff10U == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)) {
                vlSelfRef.__PVT__mmio_inst__DOT__Led2 
                    = (0xffU & vlSymsp->TOP__CPUSin.__PVT__UartMemData);
            }
            if ((0xffffff10U != vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)) {
                if ((0xffffff28U == vlSymsp->TOP__CPUSin.__PVT__UartMemAddress)) {
                    vlSelfRef.__PVT__mmio_inst__DOT__Seg1 
                        = vlSymsp->TOP__CPUSin.__PVT__UartMemData;
                }
            }
        }
    }
}

VL_INLINE_OPT void VCPUSin_Memory___nba_comb__TOP__CPUSin__memory_sl__0(VCPUSin_Memory* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPUSin_Memory___nba_comb__TOP__CPUSin__memory_sl__0\n"); );
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ReadDataA = ((0x1c09U == (vlSymsp->TOP__CPUSin.__PVT__pc_sl__DOT__PcReg 
                                               >> 0x10U))
                                   ? vlSelfRef.__PVT__ExpData
                                   : vlSymsp->TOP__CPUSin__memory_sl__mem_inst.__PVT__dataa);
}
