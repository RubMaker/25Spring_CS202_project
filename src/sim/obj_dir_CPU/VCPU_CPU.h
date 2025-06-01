// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU_CPU_H_
#define VERILATED_VCPU_CPU_H_  // guard

#include "verilated.h"
class VCPU_EX;
class VCPU_EX_MEM;
class VCPU_ID;
class VCPU_ID_EX;
class VCPU_IF;
class VCPU_IF_ID;
class VCPU_MEM;
class VCPU_MEM_WB;
class VCPU_Memory;
class VCPU_PC;
class VCPU_Registers;


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU_CPU final : public VerilatedModule {
  public:
    // CELLS
    VCPU_PC* __PVT__pc_module;
    VCPU_IF* __PVT__if_stage;
    VCPU_IF_ID* __PVT__if_id_reg;
    VCPU_ID* __PVT__id_stage;
    VCPU_ID_EX* __PVT__id_ex_reg;
    VCPU_EX* __PVT__ex_stage;
    VCPU_EX_MEM* __PVT__ex_mem_reg;
    VCPU_MEM* __PVT__mem_stage;
    VCPU_MEM_WB* __PVT__mem_wb_reg;
    VCPU_Registers* __PVT__reg_file;
    VCPU_Memory* memory_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(mem_clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(Switch1,7,0);
    VL_IN8(Switch2,7,0);
    VL_IN8(Button1,0,0);
    VL_IN8(Button2,0,0);
    VL_IN8(Button3,0,0);
    VL_IN8(Button4,0,0);
    VL_IN8(Button5,0,0);
    VL_OUT8(Led1Out,7,0);
    VL_OUT8(Led2Out,7,0);
    VL_OUT8(CharOut,7,0);
    VL_OUT8(ColorOut,7,0);
    VL_IN16(VgaAddress,11,0);
    VL_OUT(pc_out,31,0);
    VL_OUT(inst_out,31,0);
    VL_OUT(Seg1Out,31,0);
    IData/*31:0*/ __PVT__new_pc;

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
