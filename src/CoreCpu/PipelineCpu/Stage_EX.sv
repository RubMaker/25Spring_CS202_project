`timescale 1ns / 1ps
`include "Constants.vh"

module Stage_EX (
	// control signals
	input  logic [`EX_CTRL_WIDTH ] EX_ctrl_in,
	input  logic [`MEM_CTRL_WIDTH] MEM_ctrl_in,
	input  logic [`WB_CTRL_WIDTH ] WB_ctrl_in,
	// data and forwarding signals
	input  logic [`DATA_WIDTH    ] reg_data1, reg_data2, imm, pc,
	input  logic [`DATA_WIDTH    ] EX_MEM_data, MEM_WB_data,
	input  logic [`REGS_WIDTH    ] ID_EX_rs1, ID_EX_rs2, ID_EX_rd, EX_MEM_rd, MEM_WB_rd,
	input  logic              	 EX_MEM_RegWrite, MEM_WB_RegWrite,
	input  logic                 old_predict_in,
	// signals for MEM stage
	output logic [`DATA_WIDTH    ] data_out,
	output logic [`DATA_WIDTH    ] write_addr,
	output logic [`REGS_WIDTH    ] EX_rd_out,
	output logic [`MEM_CTRL_WIDTH] MEM_ctrl_out,
	output logic [`WB_CTRL_WIDTH ] WB_ctrl_out,
	// signals to pass back to ID stage
	output logic [`REGS_WIDTH    ] ID_EX_rd_out,
	output logic              	 ID_EX_MemRead,
	output logic                 branch_result, old_branch, old_predict,
	output logic [`DATA_WIDTH    ] old_pc
);

	logic [`ALUOP_WIDTH ] ALU_op;
	logic [`ALUSRC_WIDTH] ALU_src;
	logic [`BRUOP_WIDTH ] BRU_op;
	logic [`DATA_WIDTH  ] src1, src2, src1_mux, src2_mux;
	logic [`FW_WIDTH    ] fwA, fwB;
	logic Jalr;
	assign Jalr = EX_ctrl_in[9];

	// control signals
	assign BRU_op = EX_ctrl_in[8:6];
	assign ALU_op = EX_ctrl_in[5:2];
	assign ALU_src = EX_ctrl_in[1:0];

	// pass control signals to EX_MEM reg
	assign MEM_ctrl_out = MEM_ctrl_in;
	assign WB_ctrl_out = WB_ctrl_in;
	assign EX_rd_out = ID_EX_rd;

	// pass back to ID stage
	assign ID_EX_MemRead = MEM_ctrl_in[0];
	assign old_predict = old_predict_in;
	assign ID_EX_rd_out = ID_EX_rd;

	// determine whether to forward
	always_comb begin : Mux_A
		unique case (fwA)
			2'b00: src1_mux = reg_data1;
			2'b01: src1_mux = MEM_WB_data;
			2'b10: src1_mux = EX_MEM_data;
		  default: src1_mux = 0;
		endcase
	end

	always_comb begin : Mux_B
		unique case (fwB)
			2'b00: src2_mux = reg_data2;
			2'b01: src2_mux = MEM_WB_data;
			2'b10: src2_mux = EX_MEM_data;
		  default: src2_mux = 0;
		endcase
	end

	assign src1 = ALU_src[1] ? pc : src1_mux;

	// source of ALU and write address
	always_comb begin  
		unique case (ALU_src)
			2'b00: src2 = src2_mux;
			2'b01: src2 = imm;
			2'b10: src2 = 4;
		    2'b11: src2 = imm;
		endcase
	end

	assign data_out = src2_mux;

	Forward forward_unit (
		.ID_EX_rs1,
		.ID_EX_rs2,
		.EX_MEM_rd,
		.MEM_WB_rd,
		.EX_MEM_RegWrite,
		.MEM_WB_RegWrite,
		.fwA,
		.fwB
	);

	ALU alu_unit (
		.src1,
		.src2,
		.ALU_op,
		.result(write_addr)
	);

	BRU bru_unit (
		.src1,
		.src2(src2_mux),
		.pc,
		.imm,
		.Jalr,
		.BRU_op,
		.result(branch_result),
		.old_pc,
		.old_branch
	);

endmodule  
