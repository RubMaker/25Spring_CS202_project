#include <verilated.h>
#include <verilated_vpi.h>
#include "verilated_vcd_c.h"
#include <random>
#include "VMemory.h"

const char* LDST_OP[8] = {"lb", "lh", "lw", "lbu", "lhu", "sb", "sh", "sw"};
const int SIM_TIME = 20;
const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
vpiHandle vpi_mem;

vpiHandle get_handle(const char *name) {
    vpiHandle vh = vpi_handle_by_name((PLI_BYTE8*)name, NULL);
    if (vh == NULL) {
        printf("name: %s\n", name);
        vl_fatal(__FILE__, __LINE__, "get_handle", "No handle found");
    }
    return vh;
}

int get_value(vpiHandle vh) {
	s_vpi_value v; v.format = vpiIntVal;
	vpi_get_value(vh, &v);
	return v.value.integer;
}

int main(int argc, char* argv[]) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    VMemory *top = new VMemory(contextp.get());
    top->trace(tfp, 1);
    tfp->open("Memory_Sim.vcd");

	int time = 0, mem_addr = 0;
    // top->ldst = 7;
    top->EnableWriteB = 1;

	while(time < SIM_TIME) {
        top->clkA = top->clkB = 0;
        top->AddressB = mem_addr;
        top->WriteData = 0x12345678 + time;
        top->eval();
        contextp->timeInc(1);
        tfp->dump(contextp->time());
        top->clkA = top->clkB = 1;
        top->eval();
        contextp->timeInc(1);
        tfp->dump(contextp->time());
        top->clkA = top->clkB = 0;
        top->eval();
        contextp->timeInc(1);
        tfp->dump(contextp->time());
        top->clkA = top->clkB = 1;
        top->eval();
        contextp->timeInc(1);
        tfp->dump(contextp->time());
        top->clkA = top->clkB = 0;
        top->eval();
        contextp->timeInc(1);
        tfp->dump(contextp->time());
        top->clkA = top->clkB = 1;
        top->eval();
        contextp->timeInc(1);
        tfp->dump(contextp->time());
        top->clkA = top->clkB = 0;
        top->eval();
        contextp->timeInc(1);
        tfp->dump(contextp->time());
        top->clkA = top->clkB = 1;
        top->eval();
        contextp->timeInc(1);
        tfp->dump(contextp->time());
    	VerilatedVpi::callValueCbs();
        vpi_mem = get_handle("TOP.Memory.mem_inst.mem");
        printf("0x%x\n", get_value(vpi_handle_by_index(vpi_mem, time)));
        mem_addr += 4;
		time++;
	}

	top->final();
    tfp->close();
    delete top;
	return 0;
}