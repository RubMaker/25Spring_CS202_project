`timescale 1ns / 1ps
`include "Constants.vh"

module CPU(
    input  wire clk,mem_clk,          // Clock signal
    input  wire rst,          // Reset signal (active high) 
    input  wire [`SWCH_WIDTH] Switch1, Switch2,
    input  wire Button1, Button2, Button3, Button4, Button5,
    input  wire [`VGA_ADDRESS] VgaAddress,

    output wire [31:0] pc_out,   // Current program counter
    output wire [31:0] inst_out, // Current instruction being executed
    output wire [`LED_WIDTH] Led1Out, Led2Out,
    output wire [`DATA_WIDTH] Seg1Out, 
    output wire [`INFO_WIDTH] CharOut,   // VGA character output (MMIO)
    output wire [`INFO_WIDTH] ColorOut  // VGA color output (MMIO)
);

    // Pipeline control signals
    wire IF_ID_Write;
    wire Stall;
    wire ICacheStall;
    wire DCacheStall;
    wire PC_Write;
    
    // PC signals
    wire [31:0] new_pc;
    wire [31:0] current_pc;
    // Flush signal: When branch taken, force immediate PC update.
    wire flush;
    
    // IF stage signals
    wire [31:0] IF_PcOut;
    wire [31:0] IF_InstOut;
    
    // IF/ID pipeline signals
    wire [31:0] IF_ID_PcOut;
    wire [31:0] IF_ID_InstOut;
    wire [31:0] ID_PcOut;
    
    // ID stage signals
    wire [4:0] ID_Rd;
    wire [31:0] ID_Imm;
    wire ID_RegWrite;
    wire ID_ALUSrc;
    wire ID_MemtoReg;
    wire ID_MemRead;
    wire ID_MemWrite;
    wire ID_Branch;
    wire [3:0] ID_ALU_op;
    wire [2:0] ID_BRU_op;
    wire [2:0] ID_LS_op;
    wire [4:0] ID_Rs1Addr;
    wire [4:0] ID_Rs2Addr;
    
    // ID/EX pipeline signals
    wire [31:0] ID_EX_PcOut;
    wire [31:0] ID_EX_Rs1Out;
    wire [31:0] ID_EX_Rs2Out;
    wire [4:0]  ID_EX_RdOut;
    wire [31:0] ID_EX_ImmOut;
    wire [4:0]  ID_EX_rs1_out;
    wire [4:0]  ID_EX_rs2_out;
    wire        ID_EX_RegWriteOut;
    wire        ID_EX_ALUSrcOut;
    wire        ID_EX_MemtoRegOut;
    wire        ID_EX_MemReadOut;
    wire        ID_EX_MemWriteOut;
    wire        ID_EX_BranchOut;
    wire [3:0]  ID_EX_ALU_opOut;
    wire [2:0]  ID_EX_BRU_opOut;
    wire [2:0]  ID_EX_LS_opOut;
    
    // EX stage signals
    wire [31:0] EX_ALU_result;
    wire        EX_BranchTaken;
    wire [31:0] EX_OldPc;
    
    // EX/MEM pipeline signals
    wire [31:0] EX_MEM_ALU_result;
    wire [4:0]  EX_MEM_RdOut;
    wire        EX_MEM_RegWriteOut;
    wire        EX_MEM_MemtoRegOut;
    
    // MEM stage signals
    wire [31:0] MEM_Result;
    wire [31:0] MEM_MemAddr;
    wire [31:0] MEM_MemWriteData;
    wire        MEM_MemWb;
    
    // MEM/WB pipeline signals
    wire [31:0] MEM_WB_Result;
    wire        MEM_WB_RegWrite;
    wire [4:0]  MEM_WB_Rd;
    
    // Register file signals
    wire [31:0] Rs1Data;
    wire [31:0] Rs2Data;
    
    // External memory interface signals
    // These signals come from the Memory module.
    wire [31:0] ExtMemInst;
    wire [31:0] MemData;
    
    // Connect top-level outputs
    assign pc_out = current_pc;
    assign inst_out = IF_ID_InstOut;
    
    // Next PC selection:
    // When EX stage indicates branch taken, new_pc becomes EX_OldPc;
    // otherwise, new_pc = current_pc + 4.
    assign new_pc = EX_BranchTaken ? EX_OldPc : (current_pc + 4);
    
    // Program Counter:
    PC pc_module(
        .clk(clk),
        .rst(rst),
        .PC_Write(PC_Write),
        .icache_stall(ICacheStall),
        .dcache_stall(DCacheStall),
        .flush(EX_BranchTaken),  // Flush = branch taken
        .new_pc(new_pc),
        .pc_out(current_pc)
    );
    
    // Instruction Fetch stage:
    IF if_stage(
        .clk(clk),
        .rst(rst),
        .pc_in(current_pc),
        .IF_ID_Write(IF_ID_Write),
        .Branch(EX_BranchTaken),
        .IStall(ICacheStall),
        .ExtMemInst(ExtMemInst),
        .PcOut(IF_PcOut),
        .InstOut(IF_InstOut)
    );
    
    // IF/ID Pipeline Register:
    IF_ID if_id_reg(
        .clk(clk),
        .rst(rst),
        .IF_ID_Write(IF_ID_Write),
        .stall(Stall),
        .inst_in(IF_InstOut),
        .pc_in(IF_PcOut),
        .inst_out(IF_ID_InstOut),
        .pc_out(IF_ID_PcOut)
    );
    
    // Instruction Decode stage:
    ID id_stage(
        .clk(clk),
        .rst(rst),
        .Inst(IF_ID_InstOut),
        .PcIn(IF_ID_PcOut),
        .PcOut(ID_PcOut),
        .Rd(ID_Rd),
        .Imm(ID_Imm),
        .RegWrite(ID_RegWrite),
        .ALUSrc(ID_ALUSrc),
        .MemtoReg(ID_MemtoReg),
        .MemRead(ID_MemRead),
        .MemWrite(ID_MemWrite),
        .Branch(ID_Branch),
        .PcWrite(PC_Write),
        .ALU_op(ID_ALU_op),
        .BRU_op(ID_BRU_op),
        .LS_op(ID_LS_op),
        .ID_EX_MemRead(ID_EX_MemReadOut),
        .ID_EX_Rd(ID_EX_RdOut),
        .IF_ID_Write(IF_ID_Write),
        .Rs1Addr(ID_Rs1Addr),
        .Rs2Addr(ID_Rs2Addr),
        .Stall(Stall)
    );
    
    // ID/EX Pipeline Register:
    ID_EX id_ex_reg(
        .clk(clk),
        .rst(rst),
        .PcIn(ID_PcOut),
        .Rs1In(Rs1Data),
        .Rs2In(Rs2Data),
        .RdIn(ID_Rd),
        .ImmIn(ID_Imm),
        .rs1_in(ID_Rs1Addr),
        .rs2_in(ID_Rs2Addr),
        .RegWriteIn(ID_RegWrite),
        .ALUSrcIn(ID_ALUSrc),
        .MemtoRegIn(ID_MemtoReg),
        .MemReadIn(ID_MemRead),
        .MemWriteIn(ID_MemWrite),
        .BranchIn(ID_Branch),
        .ALU_opIn(ID_ALU_op),
        .BRU_opIn(ID_BRU_op),
        .LS_opIn(ID_LS_op),
        .stall(Stall),
        .flush(EX_BranchTaken),
        .PcOut(ID_EX_PcOut),
        .Rs1Out(ID_EX_Rs1Out),
        .Rs2Out(ID_EX_Rs2Out),
        .RdOut(ID_EX_RdOut),
        .ImmOut(ID_EX_ImmOut),
        .rs1_out(ID_EX_rs1_out),
        .rs2_out(ID_EX_rs2_out),
        .RegWriteOut(ID_EX_RegWriteOut),
        .ALUSrcOut(ID_EX_ALUSrcOut),
        .MemtoRegOut(ID_EX_MemtoRegOut),
        .MemReadOut(ID_EX_MemReadOut),
        .MemWriteOut(ID_EX_MemWriteOut),
        .BranchOut(ID_EX_BranchOut),
        .ALU_opOut(ID_EX_ALU_opOut),
        .BRU_opOut(ID_EX_BRU_opOut),
        .LS_opOut(ID_EX_LS_opOut)
    );
    
    // Execution stage:
    EX ex_stage(
        .Rs1Data(ID_EX_Rs1Out),
        .Rs2Data(ID_EX_Rs2Out),
        .rs1(ID_EX_rs1_out),
        .rs2(ID_EX_rs2_out),
        .ex_mem_rd(EX_MEM_RdOut),
        .ex_mem_regwrite(EX_MEM_RegWriteOut),
        .ex_mem_aluresult(EX_MEM_ALU_result),
        .mem_wb_rd(MEM_WB_Rd),
        .mem_wb_regwrite(MEM_WB_RegWrite),
        .wb_result(MEM_WB_Result),
        .Imm(ID_EX_ImmOut),
        .ALUSrc(ID_EX_ALUSrcOut),
        .ALUOp(ID_EX_ALU_opOut),
        .Branch(ID_EX_BranchOut),
        .BRU_op(ID_EX_BRU_opOut),
        .Pc(ID_EX_PcOut),
        .ALU_result(EX_ALU_result),
        .BranchTaken(EX_BranchTaken),
        .OldPc(EX_OldPc)
    );
    
    assign EX_MEM_RdOut       = ID_EX_RdOut;
    assign EX_MEM_RegWriteOut = ID_EX_RegWriteOut;
    assign EX_MEM_MemtoRegOut = ID_EX_MemtoRegOut;
    
    // EX/MEM Pipeline Register:
    MEM ex_mem_reg(
        .clk(clk),
        .rst(rst),
        .AluResult(EX_ALU_result),
        .WriteData(ID_EX_Rs2Out),
        .MemRead(ID_EX_MemReadOut),
        .MemWrite(ID_EX_MemWriteOut),
        .LS_op(ID_EX_LS_opOut),
        .Result(EX_MEM_ALU_result),
        .DStall(DCacheStall),
        .MemData(MemData),
        .MemAddr(MEM_MemAddr),
        .MemWriteData(MEM_MemWriteData),
        .MemWb(MEM_MemWb)
    );
    
    assign MEM_Result = EX_MEM_ALU_result;
    
    // MEM/WB Pipeline Register:
    MEM_WB mem_wb_reg(
        .clk(clk),
        .rst(rst),
        .stall(1'b0),
        .MemResult(MEM_Result),
        .MemRegWrite(EX_MEM_RegWriteOut),
        .MemRd(EX_MEM_RdOut),
        .WbData(MEM_WB_Result),
        .WbRegWrite(MEM_WB_RegWrite),
        .WbRd(MEM_WB_Rd)
    );
    
    // Register File:
    Registers reg_file(
        .clk(clk),
        .rst(rst),
        .rs1_addr(ID_Rs1Addr),
        .rs2_addr(ID_Rs2Addr),
        .rs1_data(Rs1Data),
        .rs2_data(Rs2Data),
        .RegWrite(MEM_WB_RegWrite),
        .rd_addr(MEM_WB_Rd),
        .rd_data(MEM_WB_Result)
    );
    
    // -----------------------------------------------------------------
    // Instantiate the Memory module:
    //
    // Port A is used for instruction memory access (with the current PC address).
    // Port B is used for data memory access (with the MEM stage address and write data).
    // All MMIO signals are connected to the corresponding input ports from the top module.
    // -----------------------------------------------------------------
    Memory memory_inst(
        .reset(rst),
        .clkA(mem_clk),
        .clkB(mem_clk),
        .AddressA(current_pc),         // Instruction fetch address.
        .AddressB(MEM_MemAddr),          // Data memory address.
        .WriteData(MEM_MemWriteData),    // Write data for data memory.
        .EnableWriteB(MEM_MemWb),        // Write enable for data memory.
        .Switch1(Switch1),
        .Switch2(Switch2),
        .Button1(Button1),
        .Button2(Button2),
        .Button3(Button3),
        .Button4(Button4),
        .Button5(Button5),
        .VgaAddress(VgaAddress),
        .Seg1Out(Seg1Out),
        .Led1Out(Led1Out),
        .Led2Out(Led2Out),
        .CharOut(CharOut),
        .ColorOut(ColorOut),
        .ReadDataA(ExtMemInst),         // Instruction memory read data.
        .ReadDataB(MemData)             // Data memory read data.
    );
    
endmodule
