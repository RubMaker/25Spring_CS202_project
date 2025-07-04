`timescale 1ns / 1ps
`include "Constants.vh"

module BRU (
	input  logic [`DATA_WIDTH ] src1, src2, pc, imm,
	input  logic [`BRUOP_WIDTH] BRU_op,
	input  logic              Jalr,
	output logic [`DATA_WIDTH ] old_pc,
	output logic              old_branch, result
);

	assign old_branch = (BRU_op != `BRU_NOP);

	always_comb begin : BRU
		unique case (BRU_op)
			`BRU_NOP: result = 0;
			 `BRU_EQ: result = (src1 == src2);
			 `BRU_NE: result = (src1 != src2);
			 `BRU_LT: result = ($signed(src1) < $signed(src2));
			 `BRU_GE: result = ($signed(src1) >= $signed(src2));
			`BRU_LTU: result = (src1 < src2);
			`BRU_GEU: result = (src1 >= src2);
			`BRU_JMP: result = 1;
		     default: result = 0;
		endcase
	end

	always_comb begin : Actual_PC
		unique case (result)
			1'b0: old_pc = pc + 4;   // not taken
			1'b1: old_pc = Jalr ? src1 + imm : pc + imm; // taken
		endcase
	end

endmodule  
