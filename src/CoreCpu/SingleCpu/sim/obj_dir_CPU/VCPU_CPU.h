// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_CPU_H_
#define VERILATED_VCPU_CPU_H_  // guard

#include "verilated.h"
class VCPU_ALU;
class VCPU_BRUSin;
class VCPU_Controller;
class VCPU_DataCache;
class VCPU_ImmGenerator;
class VCPU_InstCache;
class VCPU_Memory;
class VCPU_Mux2;
class VCPU_Mux3;
class VCPU_ProgramCounter;
class VCPU_RegisterFile;


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_CPU final : public VerilatedModule {
  public:
    // CELLS
    VCPU_ProgramCounter* pc_sl;
    VCPU_InstCache* __PVT__icache_sl;
    VCPU_ImmGenerator* __PVT__imm_sl;
    VCPU_Controller* __PVT__constrol_sl;
    VCPU_RegisterFile* regf_sl;
    VCPU_Mux2* __PVT__Src1ForAlu_sl;
    VCPU_Mux2* __PVT__Src2ForAlu_sl;
    VCPU_ALU* __PVT__alu_sl;
    VCPU_BRUSin* __PVT__Bru_sl;
    VCPU_DataCache* __PVT__dcache_sl;
    VCPU_Mux3* __PVT__WriteBack_sl;
    VCPU_Memory* memory_sl;

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
    CData/*0:0*/ __PVT__RealReset;
    VL_IN16(VgaAddress,11,0);
    VL_IN(UartData,31,0);
    VL_IN(UartAddress,31,0);
    VL_OUT(Seg1Out,31,0);
    VL_OUT(Pc_test,31,0);
    VL_OUT(Inst_test,31,0);
    IData/*31:0*/ __PVT__UartMemAddress;
    IData/*31:0*/ __PVT__UartMemData;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU_CPU(VCPU__Syms* symsp, const char* v__name);
    ~VCPU_CPU();
    VL_UNCOPYABLE(VCPU_CPU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
