// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCPU__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCPU::VCPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCPU__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , mem_clk{vlSymsp->TOP.mem_clk}
    , rst{vlSymsp->TOP.rst}
    , Switch1{vlSymsp->TOP.Switch1}
    , Switch2{vlSymsp->TOP.Switch2}
    , Button1{vlSymsp->TOP.Button1}
    , Button2{vlSymsp->TOP.Button2}
    , Button3{vlSymsp->TOP.Button3}
    , Button4{vlSymsp->TOP.Button4}
    , Button5{vlSymsp->TOP.Button5}
    , Led1Out{vlSymsp->TOP.Led1Out}
    , Led2Out{vlSymsp->TOP.Led2Out}
    , CharOut{vlSymsp->TOP.CharOut}
    , ColorOut{vlSymsp->TOP.ColorOut}
    , VgaAddress{vlSymsp->TOP.VgaAddress}
    , pc_out{vlSymsp->TOP.pc_out}
    , inst_out{vlSymsp->TOP.inst_out}
    , Seg1Out{vlSymsp->TOP.Seg1Out}
    , CPU{vlSymsp->TOP.CPU}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VCPU::VCPU(const char* _vcname__)
    : VCPU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCPU::~VCPU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCPU___024root___eval_debug_assertions(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
void VCPU___024root___eval_static(VCPU___024root* vlSelf);
void VCPU___024root___eval_initial(VCPU___024root* vlSelf);
void VCPU___024root___eval_settle(VCPU___024root* vlSelf);
void VCPU___024root___eval(VCPU___024root* vlSelf);

void VCPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCPU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCPU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCPU___024root___eval_static(&(vlSymsp->TOP));
        VCPU___024root___eval_initial(&(vlSymsp->TOP));
        VCPU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCPU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCPU::eventsPending() { return false; }

uint64_t VCPU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCPU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCPU___024root___eval_final(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU::final() {
    VCPU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCPU::hierName() const { return vlSymsp->name(); }
const char* VCPU::modelName() const { return "VCPU"; }
unsigned VCPU::threads() const { return 1; }
void VCPU::prepareClone() const { contextp()->prepareClone(); }
void VCPU::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VCPU::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCPU___024root__trace_decl_types(VerilatedVcd* tracep);

void VCPU___024root__trace_init_top(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VCPU___024root__trace_decl_types(tracep);
    VCPU___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPU___024root__trace_register(VCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPU::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCPU::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCPU___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
