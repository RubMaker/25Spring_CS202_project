// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU_ExpAddressHandler.h"
#include "VCPU__Syms.h"

VL_INLINE_OPT void VCPU_ExpAddressHandler___ico_sequent__TOP__CPU__memory_sl__exp_inst__0(VCPU_ExpAddressHandler* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VCPU_ExpAddressHandler___ico_sequent__TOP__CPU__memory_sl__exp_inst__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ExpData = (((((((((0x1c090000U 
                                        == vlSymsp->TOP__CPU__pc_sl.PcReg) 
                                       | (0x1c090004U 
                                          == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                      | (0x1c090008U 
                                         == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                     | (0x1c09000cU 
                                        == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                    | (0x1c090010U 
                                       == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                   | (0x1c090014U == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                  | (0x1c090018U == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                 | (0x1c09001cU == vlSymsp->TOP__CPU__pc_sl.PcReg))
                                 ? ((0x1c090000U == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                     ? 0xff810113U : 
                                    ((0x1c090004U == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                      ? 0x512223U : 
                                     ((0x1c090008U 
                                       == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                       ? 0x612023U : 
                                      ((0x1c09000cU 
                                        == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                        ? 0xa00293U
                                        : ((0x1c090010U 
                                            == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                            ? 0x2588c63U
                                            : ((0x1c090014U 
                                                == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                ? 0x100293U
                                                : (
                                                   (0x1c090018U 
                                                    == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                    ? 0x4588663U
                                                    : 0x200293U)))))))
                                 : (((((((((0x1c090020U 
                                            == vlSymsp->TOP__CPU__pc_sl.PcReg) 
                                           | (0x1c090024U 
                                              == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                          | (0x1c090028U 
                                             == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                         | (0x1c09002cU 
                                            == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                        | (0x1c090030U 
                                           == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                       | (0x1c090034U 
                                          == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                      | (0x1c090038U 
                                         == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                     | (0x1c09003cU 
                                        == vlSymsp->TOP__CPU__pc_sl.PcReg))
                                     ? ((0x1c090020U 
                                         == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                         ? 0x4588663U
                                         : ((0x1c090024U 
                                             == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                             ? 0x300293U
                                             : ((0x1c090028U 
                                                 == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                 ? 0x4588663U
                                                 : 
                                                ((0x1c09002cU 
                                                  == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                  ? 0x500293U
                                                  : 
                                                 ((0x1c090030U 
                                                   == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                   ? 0x588e63U
                                                   : 
                                                  ((0x1c090034U 
                                                    == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                    ? 0x600293U
                                                    : 
                                                   ((0x1c090038U 
                                                     == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                     ? 0x588e63U
                                                     : 0x700293U)))))))
                                     : (((((((((0x1c090040U 
                                                == vlSymsp->TOP__CPU__pc_sl.PcReg) 
                                               | (0x1c090044U 
                                                  == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                              | (0x1c090048U 
                                                 == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                             | (0x1c09004cU 
                                                == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                            | (0x1c090050U 
                                               == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                           | (0x1c090054U 
                                              == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                          | (0x1c090058U 
                                             == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                         | (0x1c09005cU 
                                            == vlSymsp->TOP__CPU__pc_sl.PcReg))
                                         ? ((0x1c090040U 
                                             == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                             ? 0x588e63U
                                             : ((0x1c090044U 
                                                 == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                 ? 0x380006fU
                                                 : 
                                                ((0x1c090048U 
                                                  == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                  ? 0x6fU
                                                  : 
                                                 ((0x1c09004cU 
                                                   == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                   ? 0x1a503U
                                                   : 
                                                  ((0x1c090050U 
                                                    == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                    ? 0x2c0006fU
                                                    : 
                                                   ((0x1c090054U 
                                                     == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                     ? 0x41a503U
                                                     : 
                                                    ((0x1c090058U 
                                                      == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                      ? 0x240006fU
                                                      : 0x81a503U)))))))
                                         : ((((((((
                                                   (0x1c090060U 
                                                    == vlSymsp->TOP__CPU__pc_sl.PcReg) 
                                                   | (0x1c090064U 
                                                      == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                                  | (0x1c090068U 
                                                     == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                                 | (0x1c09006cU 
                                                    == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                                | (0x1c090070U 
                                                   == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                               | (0x1c090074U 
                                                  == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                              | (0x1c090078U 
                                                 == vlSymsp->TOP__CPU__pc_sl.PcReg)) 
                                             | (0x1c09007cU 
                                                == vlSymsp->TOP__CPU__pc_sl.PcReg))
                                             ? ((0x1c090060U 
                                                 == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                 ? 0x1c0006fU
                                                 : 
                                                ((0x1c090064U 
                                                  == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                  ? 0xa1a623U
                                                  : 
                                                 ((0x1c090068U 
                                                   == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                   ? 0x140006fU
                                                   : 
                                                  ((0x1c09006cU 
                                                    == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                    ? 0xa1a823U
                                                    : 
                                                   ((0x1c090070U 
                                                     == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                     ? 0xc0006fU
                                                     : 
                                                    ((0x1c090074U 
                                                      == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                      ? 0x2a1a423U
                                                      : 
                                                     ((0x1c090078U 
                                                       == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                       ? 0x40006fU
                                                       : 0x12303U)))))))
                                             : ((0x1c090080U 
                                                 == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                 ? 0x412283U
                                                 : 
                                                ((0x1c090084U 
                                                  == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                  ? 0x810113U
                                                  : 
                                                 ((0x1c090088U 
                                                   == vlSymsp->TOP__CPU__pc_sl.PcReg)
                                                   ? 0x10200073U
                                                   : 0U)))))));
}
