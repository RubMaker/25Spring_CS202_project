#include <verilated.h>
#include <cstdio>
#include <random>
#include "VALU.h"

const int SIM_TIME = 10000;
const int AluOperationS = 10;
const int MAX_VAL = 1 << 30;
const char* AluOperation_NAMES[AluOperationS] = {"AND", "OR", "XOR", "ADD", "SUB", "SLL", "SRL", "SRA", "SLT", "SLTU"};
std::random_device seed;
std::ranlux48 engine(seed());
std::uniform_int_distribution<> src_num(-MAX_VAL, MAX_VAL);
std::uniform_int_distribution<> AluOperation(0, AluOperationS - 1);
VerilatedContext* contextp = new VerilatedContext;

int main(int argc, char** argv) {
    contextp->commandArgs(argc, argv);
    VALU* alu = new VALU{contextp};
    int time = 0, Result;
    while (time < SIM_TIME) {
        alu->AluOperation = AluOperation(engine);
        alu->InputA   = src_num(engine);
        alu->InputB   = src_num(engine);
        switch (alu->AluOperation) {
            case 0: Result = ((uint32_t) alu->InputA) & ((uint32_t) alu->InputB); break;
            case 1: Result = ((uint32_t) alu->InputA) | ((uint32_t) alu->InputB); break;
            case 2: Result = ((uint32_t) alu->InputA) ^ ((uint32_t) alu->InputB); break;
            case 3: Result = alu->InputA + alu->InputB; break;
            case 4: Result = alu->InputA - alu->InputB; break;
            case 5: alu->InputB = alu->InputB % 32; Result = ((uint32_t) alu->InputA) << alu->InputB; break;
            case 6: alu->InputB = alu->InputB % 32; Result = ((uint32_t) alu->InputA) >> alu->InputB; break;
            case 7: alu->InputB = alu->InputB % 32; Result = ((int32_t)  alu->InputA) >> alu->InputB; break;
            case 8: Result = ((int32_t) alu->InputA) < ((int32_t) alu->InputB); break;
            case 9: Result = ((uint32_t) alu->InputA) < ((uint32_t) alu->InputB); break;
        }
        alu->eval();
        if (alu->Result != Result) {
            printf("InputA: %d, InputB: %d, AluOperation: %s, Result: %d\n", alu->InputA, alu->InputB, AluOperation_NAMES[alu->AluOperation], alu->Result);
            printf("Expected: %d\n", Result);
        }
        time++;
    }
    alu->final();
    delete alu;

    return 0;
}
