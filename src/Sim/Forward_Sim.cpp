#include <verilated.h>
#include <iostream>
#include "VForward.h"

// Assembly code from textbook
// sub x2, x1, x3
// and x12, x2, x5
// or x13, x6, x2
// add x14, x2, x2
// sd x15, 100(x2)
// sd x2, 10(x11)

const int SIM_TIME = 6;
VerilatedContext* contextp = new VerilatedContext;
const char* FW_SEL[] = {"no fwd", "from MEM/WB", "from EX/MEM"};
const int rs1[] = {1, 2, 6, 2, 2, 11};
const int rs2[] = {3, 5, 2, 2, 15, 2};
const int MEM_rd[] = {0, 2, 12, 13, 14, 0};
const int WB_rd[] = {0, 0, 2, 12, 13, 14};
const int MEM_RegWrite[] = {0, 1, 1, 1, 1, 0};
const int WB_RegWrite[] = {0, 0, 1, 1, 1, 1};
const int Forwarded_A[] = {0, 2, 0, 0, 0, 0};
const int Forwarded_B[] = {0, 0, 1, 0, 0, 0};

int main(int argc, char** argv) {
	contextp->commandArgs(argc, argv);
    VForward* forward = new VForward{contextp};
	uint64_t time = 0;
	while (time < SIM_TIME) {
		forward->EX_rs1 = rs1[time];
		forward->EX_rs2 = rs2[time];
		forward->MEM_rd = MEM_rd[time];
		forward->WB_rd = WB_rd[time];
		forward->MEM_RegWrite = MEM_RegWrite[time];
		forward->WB_RegWrite = WB_RegWrite[time];
		forward->eval();
		if (forward->Forwarded_A != Forwarded_A[time] || forward->Forwarded_B != Forwarded_B[time]) {
			std::cout << "Time: " << time << std::endl;
			std::cout << "Expected: Forwarded_A: " << FW_SEL[Forwarded_A[time]] << ", Forwarded_B: " << FW_SEL[Forwarded_B[time]] << std::endl;
			std::cout << "     Got: Forwarded_A: " << FW_SEL[forward->Forwarded_A] << ", Forwarded_B: " << FW_SEL[forward->Forwarded_B] << std::endl;
			break;
		}
		time++;
	}
	forward->final();
	delete forward;
	
	return 0;
}
