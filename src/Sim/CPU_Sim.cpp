#include <unicorn/unicorn.h>
#include <verilated.h>
#include <verilated_vpi.h>
#include "verilated_vcd_c.h"
#include <vector>
#include <fstream>
#include "VCPU.h"

using std::vector;
const char *REG_NAMES[32] = {"x0", "ra", "sp", "gp", "tp", "t0", "t1", "t2", "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7", "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};
const int SIM_TIME = 1000;

// verilator
const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
VCPU *top = new VCPU(contextp.get());
VerilatedVcdC* tfp = new VerilatedVcdC;

// unicorn simulator
uc_engine *uc;

// vpi handles
vpiHandle pc;
vpiHandle regs[32];
vpiHandle mem[16383];

// from Monad's code
vector<char> read_binary(const char *name) {
    std::ifstream f;
    f.open(name, std::ios::binary);
    f.seekg(0, std::ios::end);
    size_t size = f.tellg();

    std::vector<char> data;
    data.resize(size);
    f.seekg(0, std::ios::beg);
    f.read(&data[0], size);
    return data;
}

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

// void run_one_cycle() {
//     top->clk = 1;
//     top->memclk = 1;
//     top->eval();
//     contextp->timeInc(20);
//     tfp->dump(contextp->time());
//     top->clk = 0;
//     top->memclk = 0;
//     top->eval();
//     contextp->timeInc(1);
//     tfp->dump(contextp->time());
// }
void run_one_cycle() {
    // 主时钟（clk）高电平期间（10ns），内存时钟（memclk）翻转10次（周期2ns）
    top->clk = 1;
    for (int i = 0; i < 10; i++) {  // 10次memclk周期（总10ns）
        top->memclk = 1;            // memclk上升沿
        top->eval();
        contextp->timeInc(1);       // 1ns后翻转
        top->memclk = 0;            // memclk下降沿
        top->eval();
        tfp->dump(contextp->time());
        contextp->timeInc(1);       // 每个memclk周期2ns
    }

    // 主时钟（clk）低电平期间（10ns），内存时钟（memclk）继续翻转10次
    top->clk = 0;
    for (int i = 0; i < 10; i++) {  // 10次memclk周期（总10ns）
        top->memclk = 1;            // memclk上升沿
        top->eval();
        contextp->timeInc(1);       // 1ns后翻转
        top->memclk = 0;            // memclk下降沿
        top->eval();
        tfp->dump(contextp->time());
        contextp->timeInc(1);       // 每个memclk周期2ns
    }

    contextp->timeInc(1);  // 小延迟用于信号稳定
}

vector<uint32_t> load_program() {
    vector<char> data = read_binary("/home/wgx/computre_org/project/25Spring_CS202_project/src/assembly/test_sim/test7.bin"); // modify the path to the binary file
    vector<unsigned int> inst;
    uint32_t concat_data, size = data.size() / 4;

    if (uc_mem_write(uc, 0x0, data.data(), data.size())) {
        printf("Failed to write emulation code to memory, quit!\n");
        return vector<uint32_t>();
    }

    for(int i = 0; i < size; i++) {
        concat_data = 0;
        for(int j = 3; j >= 0; j--) concat_data = (concat_data << 8) | ((data[4 * i + j]) & 0xff);
        top->UartAddress = i * 4;
        top->UartData = concat_data;
        inst.push_back(concat_data);
        run_one_cycle();
        run_one_cycle();
    }

    return inst;
}

bool diff_check() {
    bool pass = true;
    for (int i = 0, v; i < 32; i++) {
        uc_reg_read(uc, i + 1, &v);
        if (v != get_value(regs[i])) {
            pass = false;
            printf("regs: uc, cpu\n");
            printf("%4s: 0x%x, 0x%x\n", REG_NAMES[i], v, get_value(regs[i]));
        }
    }
    return pass;
}

void set_device() {
    top->Switch1 = 7;
    top->Switch2 = 4;
    top->Button_Confirm = 1;
}
void print_all_handles() {
    // 尝试常见的可能路径
    const char* possible_paths[] = {
        "TOP.CPU.pc_sl",
        "TOP.CPU.pc_sl.pc", 
        "TOP.CPU.pc_sl.PcReg",
        "TOP.CPU.PcReg",
        "VCPU.CPU.pc",
        "VCPU.CPU.pc_sl.pc",
        "VCPU.CPU.pc_sl.PcReg",
        NULL
    };
    
    for(int i = 0; possible_paths[i] != NULL; i++) {
        vpiHandle vh = vpi_handle_by_name((PLI_BYTE8*)possible_paths[i], NULL);
        printf("Path: %s -> %s\n", possible_paths[i], vh ? "FOUND" : "NOT FOUND");
    }
}
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    top->trace(tfp, 1);
    tfp->open("cpu_sim.vcd");

    // initialize unicorn

    uc_err err;
    if ((err = uc_open(UC_ARCH_RISCV, UC_MODE_32, &uc)) != UC_ERR_OK) {
        printf("Failed on uc_open() with error returned: %u\n", err);
        return -1;
    }
    uc_mem_map(uc, 0x00000000, (1 << 28) * 4, UC_PROT_ALL);
    uc_mem_map(uc, 0xffff0000, (1 << 16) * 4, UC_PROT_ALL);
    int uc_sp = 0x7ffc, uc_gp = 0xffffff00;
    uc_reg_write(uc, UC_RISCV_REG_SP, &uc_sp);
    uc_reg_write(uc, UC_RISCV_REG_GP, &uc_gp);

    // initialize vpi handles
    //print_all_handles();
    for(int i = 0; i < 16383; i++) mem[i] = vpi_handle_by_index(get_handle("TOP.CPU.memory_sl.mem_inst.mem"), i);
    pc = get_handle("TOP.CPU.pc_sl.PcReg");
    for(int i = 0; i < 32; i++) regs[i] = vpi_handle_by_index(get_handle("TOP.CPU.regf_sl.Registers"), i);
    long long time = 0, uc_pc = 0;
    // load program
    top->reset = 0;
    top->UartOver = 0;
    vector<uint32_t> inst = load_program();
    top->UartOver = 1;

    while (uc_pc != inst.size() * 4){
        if(time++ > SIM_TIME) break;
        if(time == 100) set_device();
        run_one_cycle();
    	VerilatedVpi::callValueCbs();
        // run one instruction on unicorn
        if ((err = uc_emu_start(uc, uc_pc, 0xFFFFFFFF, 0, 1))) {
            printf("pc: 0x%llx\n", uc_pc);
            printf("Failed on uc_emu_start() with error returned %u: %s\n", err, uc_strerror(err));
            break;
        }
        uc_reg_read(uc, UC_RISCV_REG_PC, &uc_pc);
    }
    
    while(get_value(pc) <= inst.size() * 4 + 10 && time++ < SIM_TIME) run_one_cycle();

    diff_check();
    printf("pc: 0x%x\n", get_value(pc));

	top->final(), tfp->close();
    delete top;

	return 0;
}
