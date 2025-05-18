// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCPUSin__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCPUSin::VCPUSin(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCPUSin__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , memclk{vlSymsp->TOP.memclk}
    , reset{vlSymsp->TOP.reset}
    , UartOver{vlSymsp->TOP.UartOver}
    , Switch1{vlSymsp->TOP.Switch1}
    , Switch2{vlSymsp->TOP.Switch2}
    , Button1{vlSymsp->TOP.Button1}
    , Button2{vlSymsp->TOP.Button2}
    , Button3{vlSymsp->TOP.Button3}
    , Button4{vlSymsp->TOP.Button4}
    , Button5{vlSymsp->TOP.Button5}
    , Led1{vlSymsp->TOP.Led1}
    , Led2{vlSymsp->TOP.Led2}
    , CharOut{vlSymsp->TOP.CharOut}
    , ColorOut{vlSymsp->TOP.ColorOut}
    , VgaAddress{vlSymsp->TOP.VgaAddress}
    , UartData{vlSymsp->TOP.UartData}
    , UartAddress{vlSymsp->TOP.UartAddress}
    , Seg1Out{vlSymsp->TOP.Seg1Out}
    , Pc_test{vlSymsp->TOP.Pc_test}
    , Inst_test{vlSymsp->TOP.Inst_test}
    , CPUSin{vlSymsp->TOP.CPUSin}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VCPUSin::VCPUSin(const char* _vcname__)
    : VCPUSin(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCPUSin::~VCPUSin() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCPUSin___024root___eval_debug_assertions(VCPUSin___024root* vlSelf);
#endif  // VL_DEBUG
void VCPUSin___024root___eval_static(VCPUSin___024root* vlSelf);
void VCPUSin___024root___eval_initial(VCPUSin___024root* vlSelf);
void VCPUSin___024root___eval_settle(VCPUSin___024root* vlSelf);
void VCPUSin___024root___eval(VCPUSin___024root* vlSelf);

void VCPUSin::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCPUSin::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCPUSin___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCPUSin___024root___eval_static(&(vlSymsp->TOP));
        VCPUSin___024root___eval_initial(&(vlSymsp->TOP));
        VCPUSin___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCPUSin___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCPUSin::eventsPending() { return false; }

uint64_t VCPUSin::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCPUSin::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCPUSin___024root___eval_final(VCPUSin___024root* vlSelf);

VL_ATTR_COLD void VCPUSin::final() {
    VCPUSin___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCPUSin::hierName() const { return vlSymsp->name(); }
const char* VCPUSin::modelName() const { return "VCPUSin"; }
unsigned VCPUSin::threads() const { return 1; }
void VCPUSin::prepareClone() const { contextp()->prepareClone(); }
void VCPUSin::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VCPUSin::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCPUSin___024root__trace_decl_types(VerilatedVcd* tracep);

void VCPUSin___024root__trace_init_top(VCPUSin___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCPUSin___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUSin___024root*>(voidSelf);
    VCPUSin__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VCPUSin___024root__trace_decl_types(tracep);
    VCPUSin___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VCPUSin___024root__trace_register(VCPUSin___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCPUSin::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCPUSin::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCPUSin___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
