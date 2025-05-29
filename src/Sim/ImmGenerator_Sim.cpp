#include <verilated.h>
#include <iostream>
#include <bitset>
#include <random>
#include "VImmGenerator.h"
using namespace std;

const int SIM_TIME = 1e6;
const int OP_NUMS = 9;
const int MAX_VAL = (1 << 26) - 1;
const int OP_CODES[OP_NUMS] = {51, 19, 3, 35, 99, 103, 111, 55, 23};
const string OP_NAMES[OP_NUMS] = {"R-type", "I-type", "I-type", "S-type", "B-type", "I-type", "J-type", "U-type", "U-type"};
std::random_device seed;
std::ranlux48 engine(seed());
std::uniform_int_distribution<> Instruction_res(0, MAX_VAL);
std::uniform_int_distribution<> Instruction_op(0, OP_NUMS - 1);
VerilatedContext* contextp = new VerilatedContext;

unsigned int itype(int Instruction) {
	unsigned int imm = (Instruction >> 20) & 0xfff;
	if (imm & 0x800) imm |= 0xfffff000;
	return imm;
}

unsigned int stype(int Instruction) {
	unsigned int imm = ((Instruction >> 25) << 5) | ((Instruction >> 7) & 0x1f);
	if (imm & 0x800) imm |= 0xfffff000;
	return imm;
}

unsigned int btype(int Instruction) {
	bitset<32> bits(Instruction), res(0);
	res[12] = bits[31];
	for(int i = 5; i <= 10; i++) res[i] = bits[i + 20];
	for(int i = 1; i <= 4; i++) res[i] = bits[i + 7];
	res[11] = bits[7];
	for(int i = 13; i <= 31; i++) res[i] = res[12];
	return (unsigned int) res.to_ulong();
}

unsigned int utype(int Instruction) {
	return Instruction & 0xfffff000;
}

unsigned int jtype(int Instruction) {
	bitset<32> bits(Instruction), res(0);
	res[20] = bits[31];
	for(int i = 1; i <= 10; i++) res[i] = bits[i + 20];
	res[11] = bits[20];
	for(int i = 12; i <= 19; i++) res[i] = bits[i];
	for(int i = 21; i <= 31; i++) res[i] = res[20];
	return (unsigned int) res.to_ulong();
}

int main(int argc, char** argv) {
    contextp->commandArgs(argc, argv);
    VImmGenerator* immgen = new VImmGenerator{contextp};
    uint64_t time = 0, ImmData, imm, op;
    while (time < SIM_TIME) {
		imm = Instruction_res(engine);
		op = Instruction_op(engine);
		immgen->Instruction = (imm << 7) + OP_CODES[op];
        switch (op) {
            case 0: ImmData = 0; break; // R-type
            case 1: ImmData = itype(immgen->Instruction); break;
            case 2: ImmData = itype(immgen->Instruction); break;
            case 3: ImmData = stype(immgen->Instruction); break;
            case 4: ImmData = btype(immgen->Instruction); break;
            case 5: ImmData = itype(immgen->Instruction); break;
            case 6: ImmData = jtype(immgen->Instruction); break;
            case 7: ImmData = utype(immgen->Instruction); break;
            case 8: ImmData = utype(immgen->Instruction); break;
        }
        immgen->eval();
        if (immgen->ImmData != (unsigned int) ImmData) {
			for(int i = 0; i < OP_NUMS; i++) if(OP_CODES[i] == (immgen->Instruction & 0x7f)) cout << "Op: " << OP_NAMES[i] << endl;
			cout << "Instruction: " << bitset<32>(immgen->Instruction).to_string() << endl;
			cout << "Immediate: " << bitset<32>(immgen->ImmData).to_string() << endl;
			cout << " Expected: " << bitset<32>(ImmData).to_string() << endl;
			break;
        }
        time++;
    }
    immgen->final();
    delete immgen;

    return 0;
}