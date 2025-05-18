// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPUSin.h for the primary calling header

#ifndef VERILATED_VCPUSIN_CPUSIN_H_
#define VERILATED_VCPUSIN_CPUSIN_H_  // guard

#include "verilated.h"
class VCPUSin_Memory;


class VCPUSin__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPUSin_CPUSin final : public VerilatedModule {
  public:
    // CELLS
    VCPUSin_Memory* memory_sl;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(memclk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(UartOver,0,0);
    VL_IN8(Switch1,7,0);
    VL_IN8(Switch2,7,0);
    VL_IN8(Button1,0,0);
    VL_IN8(Button2,0,0);
    VL_IN8(Button3,0,0);
    VL_IN8(Button4,0,0);
    VL_IN8(Button5,0,0);
    VL_OUT8(Led1,7,0);
    VL_OUT8(Led2,7,0);
    VL_OUT8(CharOut,7,0);
    VL_OUT8(ColorOut,7,0);
    CData/*0:0*/ __PVT__RegWrite;
    CData/*0:0*/ __PVT__JumpLink;
    CData/*2:0*/ __PVT__BranchOperation;
    CData/*3:0*/ __PVT__AluOperation;
    CData/*2:0*/ __PVT__MemoryOperation;
    CData/*0:0*/ __PVT__MemWriteEn;
    CData/*0:0*/ __PVT__MemReadEn;
    CData/*0:0*/ __PVT__RegWriteEn;
    CData/*0:0*/ __PVT__Mem2Reg;
    CData/*0:0*/ __PVT__AluSrc1Selector;
    CData/*0:0*/ __PVT__AluSrc2Selector;
    CData/*0:0*/ __PVT__icache_sl__DOT__hit;
    VL_IN16(VgaAddress,11,0);
    VL_IN(UartData,31,0);
    VL_IN(UartAddress,31,0);
    VL_OUT(Seg1Out,31,0);
    VL_OUT(Pc_test,31,0);
    VL_OUT(Inst_test,31,0);
    IData/*31:0*/ __PVT__NextPc;
    IData/*31:0*/ __PVT__MemPc;
    IData/*31:0*/ __PVT__UartMemAddress;
    IData/*31:0*/ __PVT__UartMemData;
    IData/*31:0*/ __PVT__FetchInstr;
    IData/*31:0*/ __PVT__ImmData;
    IData/*16:0*/ __PVT__TotalBus;
    IData/*31:0*/ __PVT__Reg1Data;
    IData/*31:0*/ __PVT__Reg2Data;
    IData/*31:0*/ __PVT__AluSrc1;
    IData/*31:0*/ __PVT__AluSrc2;
    IData/*31:0*/ __PVT__AluResult;
    IData/*31:0*/ __PVT__DataFromCache;
    IData/*31:0*/ __PVT__pc_sl__DOT__PcReg;
    IData/*31:0*/ __PVT__icache_sl__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__icache_sl__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __PVT__regf_sl__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__regf_sl__DOT__unnamedblk2__DOT__i;
    VlWide<4>/*127:0*/ __PVT__alu_sl__DOT__FullMul;
    IData/*31:0*/ __PVT__dcache_sl__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__dcache_sl__DOT__unnamedblk2__DOT__i;
    QData/*63:0*/ __PVT__alu_sl__DOT__Mul;
    QData/*63:0*/ __PVT__alu_sl__DOT__SignedInputAExt;
    QData/*63:0*/ __PVT__alu_sl__DOT__UnsignedInputBExt;
    VlUnpacked<QData/*42:0*/, 16> __PVT__icache_sl__DOT__cache;
    VlUnpacked<IData/*31:0*/, 32> __PVT__regf_sl__DOT__Registers;
    VlUnpacked<QData/*43:0*/, 16> __PVT__dcache_sl__DOT__cache;

    // INTERNAL VARIABLES
    VCPUSin__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPUSin_CPUSin(VCPUSin__Syms* symsp, const char* v__name);
    ~VCPUSin_CPUSin();
    VL_UNCOPYABLE(VCPUSin_CPUSin);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
