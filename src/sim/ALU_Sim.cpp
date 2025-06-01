#include <verilated.h>
#include <cstdio>
#include <random>
#include "VALU.h"

const int SIM_TIME = 10000;
const int ALUOpS = 10;
const int MAX_VAL = 1 << 30;
const char* ALUOp_NAMES[ALUOpS] = {"AND", "OR", "XOR", "ADD", "SUB", "SLL", "SRL", "SRA", "SLT", "SLTU"};
std::random_device seed;
std::ranlux48 engine(seed());
std::uniform_int_distribution<> src_num(-MAX_VAL, MAX_VAL);
std::uniform_int_distribution<> ALUOp(0, ALUOpS - 1);
VerilatedContext* contextp = new VerilatedContext;

int main(int argc, char** argv) {
    contextp->commandArgs(argc, argv);
    VALU* alu = new VALU{contextp};
    int time = 0, Result;
    while (time < SIM_TIME) {
        alu->ALUOp = ALUOp(engine);
        alu->ALU_in1   = src_num(engine);
        alu->ALU_in2   = src_num(engine);
        switch (alu->ALUOp) {
            case 0: Result = ((uint32_t) alu->ALU_in1) & ((uint32_t) alu->ALU_in2); break;
            case 1: Result = ((uint32_t) alu->ALU_in1) | ((uint32_t) alu->ALU_in2); break;
            case 2: Result = ((uint32_t) alu->ALU_in1) ^ ((uint32_t) alu->ALU_in2); break;
            case 3: Result = alu->ALU_in1 + alu->ALU_in2; break;
            case 4: Result = alu->ALU_in1 - alu->ALU_in2; break;
            case 5: alu->ALU_in2 = alu->ALU_in2 % 32; Result = ((uint32_t) alu->ALU_in1) << alu->ALU_in2; break;
            case 6: alu->ALU_in2 = alu->ALU_in2 % 32; Result = ((uint32_t) alu->ALU_in1) >> alu->ALU_in2; break;
            case 7: alu->ALU_in2 = alu->ALU_in2 % 32; Result = ((int32_t)  alu->ALU_in1) >> alu->ALU_in2; break;
            case 8: Result = ((int32_t) alu->ALU_in1) < ((int32_t) alu->ALU_in2); break;
            case 9: Result = ((uint32_t) alu->ALU_in1) < ((uint32_t) alu->ALU_in2); break;
        }
        alu->eval();
        if (alu->ALU_result != Result) {
            printf("ALU_in1: %d, ALU_in2: %d, ALUOp: %s, Result: %d\n", alu->ALU_in1, alu->ALU_in2, ALUOp_NAMES[alu->ALUOp], alu->ALU_result);
            printf("Expected: %d\n", Result);
        }
        time++;
    }
    alu->final();
    delete alu;

    return 0;
}
