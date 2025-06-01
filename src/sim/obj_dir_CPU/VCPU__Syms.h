// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPU__SYMS_H_
#define VERILATED_VCPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCPU.h"

// INCLUDE MODULE CLASSES
#include "VCPU___024root.h"
#include "VCPU_CPU.h"
#include "VCPU_PC.h"
#include "VCPU_IF.h"
#include "VCPU_IF_ID.h"
#include "VCPU_ID.h"
#include "VCPU_ID_EX.h"
#include "VCPU_EX.h"
#include "VCPU_EX_MEM.h"
#include "VCPU_MEM.h"
#include "VCPU_MEM_WB.h"
#include "VCPU_Registers.h"
#include "VCPU_Memory.h"
#include "VCPU_Branch_Predictor.h"
#include "VCPU_ImmGenerator.h"
#include "VCPU_ICache.h"
#include "VCPU_Controller.h"
#include "VCPU_Hazard.h"
#include "VCPU_Forwarding.h"
#include "VCPU_ALU.h"
#include "VCPU_BRU.h"
#include "VCPU_DCache.h"
#include "VCPU_MemorySim.h"
#include "VCPU_ExpAddressHandler.h"
#include "VCPU_MMIO.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VCPU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCPU* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCPU___024root                 TOP;
    VCPU_CPU                       TOP__CPU;
    VCPU_EX_MEM                    TOP__CPU__ex_mem_reg;
    VCPU_EX                        TOP__CPU__ex_stage;
    VCPU_ALU                       TOP__CPU__ex_stage__ALU_Instance;
    VCPU_BRU                       TOP__CPU__ex_stage__BRU_Instance;
    VCPU_Forwarding                TOP__CPU__ex_stage__forward_inst;
    VCPU_ID_EX                     TOP__CPU__id_ex_reg;
    VCPU_ID                        TOP__CPU__id_stage;
    VCPU_Controller                TOP__CPU__id_stage__controller_inst;
    VCPU_Hazard                    TOP__CPU__id_stage__hazard_inst;
    VCPU_IF_ID                     TOP__CPU__if_id_reg;
    VCPU_IF                        TOP__CPU__if_stage;
    VCPU_Branch_Predictor          TOP__CPU__if_stage__BP;
    VCPU_ImmGenerator              TOP__CPU__if_stage__ImmGen;
    VCPU_ICache                    TOP__CPU__if_stage__U_Cache;
    VCPU_MEM                       TOP__CPU__mem_stage;
    VCPU_DCache                    TOP__CPU__mem_stage__U_DCache;
    VCPU_MEM_WB                    TOP__CPU__mem_wb_reg;
    VCPU_PC                        TOP__CPU__pc_module;
    VCPU_Registers                 TOP__CPU__reg_file;
    VCPU_Memory                    TOP__CPU__memory_inst;
    VCPU_ExpAddressHandler         TOP__CPU__memory_inst__exp_inst;
    VCPU_MMIO                      TOP__CPU__memory_inst__mmio_inst;
    VCPU_MemorySim                 TOP__CPU__memory_inst__mem_inst;

    // SCOPE NAMES
    VerilatedScope __Vscope_CPU;
    VerilatedScope __Vscope_CPU__memory_inst;
    VerilatedScope __Vscope_CPU__memory_inst__mem_inst;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    VCPU__Syms(VerilatedContext* contextp, const char* namep, VCPU* modelp);
    ~VCPU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
