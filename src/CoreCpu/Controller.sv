`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/03/2025 02:23:51 AM
// Design Name: 
// Module Name: Controller
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module Controller(
    input  logic [`DATA_WIDTH] Instruction,        // 32-bit Instructionuction input
    output logic [`CTRL_WIDTH] CtrlBus      // Composite control signal bus
);
    // Internal control signals
    logic        JumpLink;                  // JALR Instructionuction flag
    logic [`ALUOP_WIDTH]  AluOperation;     // ALU control code
    logic [`BRUOP_WIDTH]  BranchOperation;  // Branch unit control
    logic [`ALUSRC_WIDTH] AluSourceSelector;       // ALU operand2 selector    //0 reg, 1 imm, 3 pc+imm, 4 special
    logic [`LDST_WIDTH]   MemoryOperation;     // Memory access type
    logic        MemWriteEn;                  // Memory write enable
    logic        MemReadEn;                  // Memory read enable 
    logic        RegWriteEn;                  // Register write enable
    logic        Mem2Reg;                 // Data memory to register flag

    // Stage control bundles
    logic [`EX_CTRL_WIDTH]  ExStageCtrl;
    logic [`MEM_CTRL_WIDTH] MemStageCtrl;
    logic [`WB_CTRL_WIDTH]  WriteBackStageCtrl;

    // Instructionuction decoding logic
    always_comb begin : Instruction_decoder
        // Default control values
        {AluOperation, JumpLink, AluSourceSelector,MemWriteEn, MemReadEn, RegWriteEn, Mem2Reg, MemoryOperation} = 0;
        BranchOperation = `BRU_NOP; // Default branch operation
        unique case (Instruction[`OP_WIDTH])
            // Arithmetic/Logical Operations (R-type)
            `ART_LOG_OPERATION: begin
                RegWriteEn = 1'b1;
                handle_r_type_operation(Instruction);
            end
            
            // Immediate Arithmetic Operations (I-type)
            `ART_IMM_OPERATION: begin
                RegWriteEn = 1'b1;
                AluSourceSelector = 1;
                decode_imm_arithmetic(Instruction);
            end
            
            // Load Instructionuctions
            `LOAD_OPERATION: begin
                RegWriteEn = 1'b1;
                MemReadEn = 1'b1;
                Mem2Reg = 1'b1;
                AluOperation = `ALU_ADD;
                AluSourceSelector = 1;
                decode_load_type(Instruction);
            end
            
            // Store Instructionuctions
            `STORE_OPERATION: begin
                MemWriteEn = 1'b1;
                AluOperation = `ALU_ADD;
                AluSourceSelector = 1;
                decode_store_type(Instruction);
            end
            
            // Branch Instructionuctions
            `BRANCH_OPERATION: begin
                decode_branch_type(Instruction);
                AluOperation = `ALU_ADD;
            end
            
            // Jump and Link Register
            `JALR_OPERATION: begin
                RegWriteEn = 1'b1;
                BranchOperation = `BRU_JMP;
                JumpLink = 1'b1;
                AluOperation = `ALU_ADD;
                AluSourceSelector = 1;
            end
            
            // Jump and Link
            `JAL_OPERATION: begin
                RegWriteEn = 1'b1;
                BranchOperation = `BRU_JMP;
                AluOperation = `ALU_ADD;
                AluSourceSelector = 2;
            end
            
            // Load Upper Immediate
            `LUI_OPERATION: begin
                RegWriteEn = 1'b1;
                AluOperation = `ALU_ADD;
                AluSourceSelector = 1;
            end
            
            // Add Upper Immediate to PC
            `AUIPC_OPERATION: begin
                RegWriteEn = 1'b1;
                AluOperation = `ALU_ADD;
                AluSourceSelector = 3;
            end
            
            // Environment Call
            `ECALL_OPERATION: begin
                // System call handling (no register/memory updates)
                AluOperation = `ALU_ADD;
            end
            
            default: begin // Undefined opcode handled by default values
                AluOperation = `ALU_ADD;
            end
        endcase
    end

    // Helper function for R-type Instructionuction decoding
    function void handle_r_type_operation(input logic [`DATA_WIDTH] Instruction);
        if(Instruction[`FUNC7_WIDTH] == 7'h01) begin
            // M-extension operations
            unique case(Instruction[`FUNC3_WIDTH])
                `MUL_FUNC3:  AluOperation = `ALU_MUL;
                `MULH_FUNC3: AluOperation = `ALU_MULH;
                `MULHSU_FUNC3: AluOperation = `ALU_MULHSU;
                `MULHU_FUNC3: AluOperation = `ALU_MULHU;
                `DIV_FUNC3:   AluOperation = `ALU_DIV;
                `REM_FUNC3:   AluOperation = `ALU_REM;
                default: AluOperation = 0;
            endcase
        end else begin
            // Base R-type operations
            unique case(Instruction[`FUNC3_WIDTH])
                `ADD_FUNC3: AluOperation = (Instruction[`FUNC7_WIDTH] == 7'h20) ? 
                                           `ALU_SUB : `ALU_ADD;
                `SLL_FUNC3: AluOperation = `ALU_SLL;
                `SLT_FUNC3: AluOperation = `ALU_SLT;
                `SLTU_FUNC3: AluOperation = `ALU_SLTU;
                `XOR_FUNC3: AluOperation = `ALU_XOR;
                `SRL_FUNC3: AluOperation = (Instruction[`FUNC7_WIDTH] == 7'h20) ? 
                                          `ALU_SRA : `ALU_SRL;
                `OR_FUNC3:  AluOperation = `ALU_OR;
                `AND_FUNC3: AluOperation = `ALU_AND;
                default: AluOperation = 0;
            endcase
        end
    endfunction

    // Immediate arithmetic decoding helper
    function void decode_imm_arithmetic(input logic [`DATA_WIDTH] Instruction);
        unique case(Instruction[`FUNC3_WIDTH])
            `ADD_FUNC3: AluOperation = `ALU_ADD;
            `SLL_FUNC3: AluOperation = `ALU_SLL;
            `SLT_FUNC3: AluOperation = `ALU_SLT;
            `SLTU_FUNC3: AluOperation = `ALU_SLTU;
            `XOR_FUNC3: AluOperation = `ALU_XOR;
            `SRL_FUNC3: AluOperation = (Instruction[`FUNC7_WIDTH] == 7'h20) ? 
                                      `ALU_SRA : `ALU_SRL;
            `OR_FUNC3:  AluOperation = `ALU_OR;
            `AND_FUNC3: AluOperation = `ALU_AND;
        endcase
    endfunction

    // Memory access type decoders
    function void decode_load_type(input logic [`DATA_WIDTH] Instruction);
        unique case(Instruction[`FUNC3_WIDTH])
            `LB_FUNC3:  MemoryOperation = `LB_OPERATION;
            `LH_FUNC3:  MemoryOperation = `LH_OPERATION;
            `LW_FUNC3:  MemoryOperation = `LW_OPERATION;
            `LBU_FUNC3: MemoryOperation = `LBU_OPERATION;
            `LHU_FUNC3: MemoryOperation = `LHU_OPERATION;
        endcase
    endfunction

    function void decode_store_type(input logic [`DATA_WIDTH] Instruction);
        unique case(Instruction[`FUNC3_WIDTH])
            `SB_FUNC3: MemoryOperation = `SB_OPERATION;
            `SH_FUNC3: MemoryOperation = `SH_OPERATION;
            `SW_FUNC3: MemoryOperation = `SW_OPERATION;
        endcase
    endfunction

    // Branch Instructionuction decoder
    function void decode_branch_type(input logic [`DATA_WIDTH] Instruction);
        unique case(Instruction[`FUNC3_WIDTH])
            `BEQ_FUNC3: BranchOperation = `BRU_EQ;
            `BNE_FUNC3: BranchOperation = `BRU_NE;
            `BLT_FUNC3: BranchOperation = `BRU_LT;
            `BGE_FUNC3: BranchOperation = `BRU_GE;
            `BLTU_FUNC3: BranchOperation = `BRU_LTU;
            `BGEU_FUNC3: BranchOperation = `BRU_GEU;
            default: BranchOperation = `BRU_NOP;
        endcase
    endfunction

    // Control bus composition
    assign ExStageCtrl  = {JumpLink, BranchOperation, AluOperation, AluSourceSelector};
    assign MemStageCtrl = {MemoryOperation, MemWriteEn, MemReadEn};
    assign WriteBackStageCtrl  = {RegWriteEn, Mem2Reg};
    assign CtrlBus       = {ExStageCtrl, MemStageCtrl, WriteBackStageCtrl};

endmodule

