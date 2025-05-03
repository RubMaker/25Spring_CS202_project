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
    input  logic [`DATA_WIDTH] instruction,        // 32-bit instructionuction input
    output logic [`CTRL_WIDTH] ctrl_bus      // Composite control signal bus
);
    // Internal control signals
    logic        jump_link;                  // JALR instructionuction flag
    logic [`ALUOP_WIDTH]  alu_operation;     // ALU control code
    logic [`BRUOP_WIDTH]  branch_operation;  // Branch unit control
    logic [`ALUSRC_WIDTH] alu_src_sel;       // ALU operand2 selector    //0 reg, 1 imm, 3 pc+imm, 4 special
    logic [`LDST_WIDTH]   mem_operation;     // Memory access type
    logic        mem_wr_en;                  // Memory write enable
    logic        mem_rd_en;                  // Memory read enable 
    logic        reg_wr_en;                  // Register write enable
    logic        mem_to_reg;                 // Data memory to register flag

    // Stage control bundles
    logic [`EX_CTRL_WIDTH]  ex_stage_ctrl;
    logic [`MEM_CTRL_WIDTH] mem_stage_ctrl;
    logic [`WB_CTRL_WIDTH]  wb_stage_ctrl;

    // Control bus composition
    assign ex_stage_ctrl  = {jump_link, branch_operation, alu_operation, alu_src_sel};
    assign mem_stage_ctrl = {mem_operation, mem_wr_en, mem_rd_en};
    assign wb_stage_ctrl  = {reg_wr_en, mem_to_reg};
    assign ctrl_bus       = {ex_stage_ctrl, mem_stage_ctrl, wb_stage_ctrl};

    // instructionuction decoding logic
    always_comb begin : instruction_decoder
        // Default control values
        {alu_operation, branch_operation, jump_link, alu_src_sel,
         mem_wr_en, mem_rd_en, reg_wr_en, mem_to_reg, mem_operation} = '0;

        case (instruction[`OP_WIDTH])
            // Arithmetic/Logical Operations (R-type)
            `ART_LOG_OP: begin
                reg_wr_en = 1'b1;
                handle_r_type_ops(instruction);
            end
            
            // Immediate Arithmetic Operations (I-type)
            `ART_IMM_OP: begin
                reg_wr_en = 1'b1;
                alu_src_sel = 2'b01;
                decode_imm_arithmetic(instruction);
            end
            
            // Load instructionuctions
            `LOAD_OP: begin
                reg_wr_en = 1'b1;
                mem_rd_en = 1'b1;
                mem_to_reg = 1'b1;
                alu_operation = `ALU_ADD;
                alu_src_sel = 2'b01;
                decode_load_type(instruction);
            end
            
            // Store instructionuctions
            `STORE_OP: begin
                mem_wr_en = 1'b1;
                alu_operation = `ALU_ADD;
                alu_src_sel = 2'b01;
                decode_store_type(instruction);
            end
            
            // Branch instructionuctions
            `BRANCH_OP: begin
                decode_branch_type(instruction);
                alu_operation = `ALU_ADD;
            end
            
            // Jump and Link Register
            `JALR_OP: begin
                reg_wr_en = 1'b1;
                branch_operation = `BRU_JMP;
                jump_link = 1'b1;
                alu_operation = `ALU_ADD;
                alu_src_sel = 2'b01;
            end
            
            // Jump and Link
            `JAL_OP: begin
                reg_wr_en = 1'b1;
                branch_operation = `BRU_JMP;
                alu_operation = `ALU_ADD;
                alu_src_sel = 2'b10;
            end
            
            // Load Upper Immediate
            `LUI_OP: begin
                reg_wr_en = 1'b1;
                alu_operation = `ALU_ADD;
                alu_src_sel = 2'b01;
            end
            
            // Add Upper Immediate to PC
            `AUIPC_OP: begin
                reg_wr_en = 1'b1;
                alu_operation = `ALU_ADD;
                alu_src_sel = 2'b11;
            end
            
            // Environment Call
            `ECALL_OP: begin
                // System call handling (no register/memory updates)
                alu_operation = `ALU_ADD;
                branch_operation = `BRU_NOP;
                jump_link = 0;
                alu_src_sel   = 0;
                mem_wr_en = 0;
                mem_rd_en  = 0;
                reg_wr_en = 0;
                mem_to_reg = 0;
                mem_operation  = 0;
            end
            
            default: begin // Undefined opcode handled by default values
                alu_operation = `ALU_ADD;
                branch_operation = `BRU_NOP;
                jump_link = 0;
                alu_src_sel   = 0;
                mem_wr_en = 0;
                mem_rd_en  = 0;
                reg_wr_en = 0;
                mem_to_reg = 0;
                mem_operation  = 0;
            end
        endcase
    end

    // Helper function for R-type instructionuction decoding
    function void handle_r_type_ops(input logic [`DATA_WIDTH] instruction);
        if(instruction[`FUNC7_WIDTH] == 7'h01) begin
            // M-extension operations
            case(instruction[`FUNC3_WIDTH])
                `MUL_FUNC3:  alu_operation = `ALU_MUL;
                `MULH_FUNC3: alu_operation = `ALU_MULH;
                `MULHSU_FUNC3: alu_operation = `ALU_MULHSU;
                `MULHU_FUNC3: alu_operation = `ALU_MULHU;
                `DIV_FUNC3:   alu_operation = `ALU_DIV;
                `REM_FUNC3:   alu_operation = `ALU_REM;
            endcase
        end else begin
            // Base R-type operations
            case(instruction[`FUNC3_WIDTH])
                `ADD_FUNC3: alu_operation = (instruction[`FUNC7_WIDTH] == 7'h20) ? 
                                           `ALU_SUB : `ALU_ADD;
                `SLL_FUNC3: alu_operation = `ALU_SLL;
                `SLT_FUNC3: alu_operation = `ALU_SLT;
                `SLTU_FUNC3: alu_operation = `ALU_SLTU;
                `XOR_FUNC3: alu_operation = `ALU_XOR;
                `SRL_FUNC3: alu_operation = (instruction[`FUNC7_WIDTH] == 7'h20) ? 
                                          `ALU_SRA : `ALU_SRL;
                `OR_FUNC3:  alu_operation = `ALU_OR;
                `AND_FUNC3: alu_operation = `ALU_AND;
            endcase
        end
    endfunction

    // Immediate arithmetic decoding helper
    function void decode_imm_arithmetic(input logic [`DATA_WIDTH] instruction);
        case(instruction[`FUNC3_WIDTH])
            `ADD_FUNC3: alu_operation = `ALU_ADD;
            `SLL_FUNC3: alu_operation = `ALU_SLL;
            `SLT_FUNC3: alu_operation = `ALU_SLT;
            `SLTU_FUNC3: alu_operation = `ALU_SLTU;
            `XOR_FUNC3: alu_operation = `ALU_XOR;
            `SRL_FUNC3: alu_operation = (instruction[`FUNC7_WIDTH] == 7'h20) ? 
                                      `ALU_SRA : `ALU_SRL;
            `OR_FUNC3:  alu_operation = `ALU_OR;
            `AND_FUNC3: alu_operation = `ALU_AND;
        endcase
    endfunction

    // Memory access type decoders
    function void decode_load_type(input logic [`DATA_WIDTH] instruction);
        case(instruction[`FUNC3_WIDTH])
            `LB_FUNC3:  mem_operation = `LB_OP;
            `LH_FUNC3:  mem_operation = `LH_OP;
            `LW_FUNC3:  mem_operation = `LW_OP;
            `LBU_FUNC3: mem_operation = `LBU_OP;
            `LHU_FUNC3: mem_operation = `LHU_OP;
        endcase
    endfunction

    function void decode_store_type(input logic [`DATA_WIDTH] instruction);
        case(instruction[`FUNC3_WIDTH])
            `SB_FUNC3: mem_operation = `SB_OP;
            `SH_FUNC3: mem_operation = `SH_OP;
            `SW_FUNC3: mem_operation = `SW_OP;
        endcase
    endfunction

    // Branch instructionuction decoder
    function void decode_branch_type(input logic [`DATA_WIDTH] instruction);
        case(instruction[`FUNC3_WIDTH])
            `BEQ_FUNC3: branch_operation = `BRU_EQ;
            `BNE_FUNC3: branch_operation = `BRU_NE;
            `BLT_FUNC3: branch_operation = `BRU_LT;
            `BGE_FUNC3: branch_operation = `BRU_GE;
            `BLTU_FUNC3: branch_operation = `BRU_LTU;
            `BGEU_FUNC3: branch_operation = `BRU_GEU;
        endcase
    endfunction

endmodule

// `include "Const.svh"

// module Controller (
//     input  logic [`DATA_WIDTH] instruction, 
//     output logic [`CTRL_WIDTH] ctrl_bus
// );

//     // atom ctrl wire
//     logic Jalr;
//     logic [`ALUOP_WIDTH]  ALUOp;
//     logic [`BRUOP_WIDTH]  BRUOp;
//     logic [`ALUSRC_WIDTH] ALUSrc;       // 1: imm, 0: reg
//     logic [`LDST_WIDTH]   MEMOp;
//     logic MemWrite;     // 1: write to memory, 0: no write
//     logic MemRead;      // 1: read from memory, 0: no read
//     logic RegWrite;     // 1: write to regs, 0: no write
//     logic MemtoReg;     // 1: data from memory to regs, 0: ALU res to regs

//     // stage ctrl wire
//     logic [`EX_CTRL_WIDTH]  EX_ctrl;
//     logic [`MEM_CTRL_WIDTH] MEM_ctrl;
//     logic [`WB_CTRL_WIDTH]  WB_ctrl;

//     // part control signal
//     assign EX_ctrl  = {Jalr, BRUOp, ALUOp, ALUSrc};
//     assign MEM_ctrl = {MEMOp, MemWrite, MemRead};
//     assign WB_ctrl  = {RegWrite, MemtoReg};

//     // total control
//     assign ctrl_bus = {EX_ctrl, MEM_ctrl, WB_ctrl};

//     // control signal generate
//     always_comb begin : Ctrl_Signal_Gen
//         unique case (instruction[`OP_WIDTH])
//             `ART_LOG_OP: begin
//                 if (instruction[`FUNC7_WIDTH] == 7'h01) begin
//                     unique case (instruction[`FUNC3_WIDTH])
//                         `MUL_FUNC3: ALUOp = `ALU_MUL;
//                        `MULH_FUNC3: ALUOp = `ALU_MULH;
//                      `MULHSU_FUNC3: ALUOp = `ALU_MULHSU;
//                       `MULHU_FUNC3: ALUOp = `ALU_MULHU;
//                         `DIV_FUNC3: ALUOp = `ALU_DIV;
//                         `REM_FUNC3: ALUOp = `ALU_REM;
//                            default: ALUOp = 0;
//                     endcase
//                 end
//                 else begin
//                     unique case (instruction[`FUNC3_WIDTH])
//                         `ADD_FUNC3: ALUOp = instruction[`FUNC7_WIDTH] == 7'h20 ? `ALU_SUB : `ALU_ADD;
//                         `SLL_FUNC3: ALUOp = `ALU_SLL;
//                         `SLT_FUNC3: ALUOp = `ALU_SLT;
//                        `SLTU_FUNC3: ALUOp = `ALU_SLTU;
//                         `XOR_FUNC3: ALUOp = `ALU_XOR;
//                         `SRL_FUNC3: ALUOp = instruction[`FUNC7_WIDTH] == 7'h20 ? `ALU_SRA : `ALU_SRL;
//                          `OR_FUNC3: ALUOp = `ALU_OR;
//                         `AND_FUNC3: ALUOp = `ALU_AND;
//                            default: ALUOp = 0;
//                     endcase
//                 end
//                 BRUOp    = `BRU_NOP;
//                 Jalr     = 0;
//                 ALUSrc   = 0;
//                 MemWrite = 0;
//                 MemRead  = 0;
//                 RegWrite = 1;
//                 MemtoReg = 0;
//                 MEMOp    = 0;
//             end
//             `ART_IMM_OP: begin
//                 unique case (instruction[`FUNC3_WIDTH])
//                     `ADD_FUNC3: ALUOp = `ALU_ADD;
//                     `SLL_FUNC3: ALUOp = `ALU_SLL;
//                     `SLT_FUNC3: ALUOp = `ALU_SLT;
//                    `SLTU_FUNC3: ALUOp = `ALU_SLTU;
//                     `XOR_FUNC3: ALUOp = `ALU_XOR;
//                     `SRL_FUNC3: ALUOp = instruction[`FUNC7_WIDTH] == 7'h20 ? `ALU_SRA : `ALU_SRL;
//                      `OR_FUNC3: ALUOp = `ALU_OR;
//                     `AND_FUNC3: ALUOp = `ALU_AND;
//                        default: ALUOp = 0;
//                 endcase
//                 BRUOp    = `BRU_NOP;
//                 Jalr     = 0;
//                 ALUSrc   = 1;
//                 MemWrite = 0;
//                 MemRead  = 0;
//                 RegWrite = 1;
//                 MemtoReg = 0;
//                 MEMOp    = 0;
//             end
//             `LOAD_OP: begin
//                 ALUOp    = `ALU_ADD;
//                 BRUOp    = `BRU_NOP;
//                 Jalr     = 0;
//                 ALUSrc   = 1;
//                 MemWrite = 0;
//                 MemRead  = 1;
//                 RegWrite = 1;
//                 MemtoReg = 1;
//                 unique case (instruction[`FUNC3_WIDTH])
//                     `LB_FUNC3:  MEMOp = `LB_OP;
//                     `LH_FUNC3:  MEMOp = `LH_OP;
//                     `LW_FUNC3:  MEMOp = `LW_OP;
//                     `LBU_FUNC3: MEMOp = `LBU_OP;
//                     `LHU_FUNC3: MEMOp = `LHU_OP;  
//                     default:    MEMOp = 0;
//                 endcase
//             end
//             `STORE_OP: begin
//                 ALUOp    = `ALU_ADD;
//                 BRUOp    = `BRU_NOP;
//                 Jalr     = 0;
//                 ALUSrc   = 1;
//                 MemWrite = 1;
//                 MemRead  = 0;
//                 RegWrite = 0;
//                 MemtoReg = 0;
//                 unique case (instruction[`FUNC3_WIDTH])
//                     `SB_FUNC3 : MEMOp = `SB_OP; 
//                     `SH_FUNC3 : MEMOp = `SH_OP; 
//                     `SW_FUNC3 : MEMOp = `SW_OP; 
//                     default:    MEMOp = 0;
//                 endcase
//             end
//             `BRANCH_OP: begin
//                 unique case (instruction[`FUNC3_WIDTH])
//                     `BEQ_FUNC3: BRUOp = `BRU_EQ;
//                     `BNE_FUNC3: BRUOp = `BRU_NE;
//                     `BLT_FUNC3: BRUOp = `BRU_LT;
//                     `BGE_FUNC3: BRUOp = `BRU_GE;
//                    `BLTU_FUNC3: BRUOp = `BRU_LTU;
//                    `BGEU_FUNC3: BRUOp = `BRU_GEU;
//                        default: BRUOp = `BRU_NOP;
//                 endcase
//                 ALUOp    = `ALU_ADD;
//                 Jalr     = 0;
//                 ALUSrc   = 0;
//                 MemWrite = 0;
//                 MemRead  = 0;
//                 RegWrite = 0;
//                 MemtoReg = 0;
//                 MEMOp    = 0;
//             end
//             `JALR_OP: begin
//                 ALUOp    = `ALU_ADD;
//                 BRUOp    = `BRU_JMP;
//                 Jalr     = 1;
//                 ALUSrc   = 1;
//                 MemWrite = 0;
//                 MemRead  = 0;
//                 RegWrite = 1;
//                 MemtoReg = 0;
//                 MEMOp    = 0;
//             end
//             `JAL_OP: begin
//                 ALUOp    = `ALU_ADD;
//                 BRUOp    = `BRU_JMP;
//                 Jalr     = 0;
//                 ALUSrc   = 2;
//                 MemWrite = 0;
//                 MemRead  = 0;
//                 RegWrite = 1;
//                 MemtoReg = 0;
//                 MEMOp    = 0;
//             end
//             `LUI_OP: begin
//                 ALUOp    = `ALU_ADD;
//                 BRUOp    = `BRU_NOP;
//                 Jalr     = 0;
//                 ALUSrc   = 1;
//                 MemWrite = 0;
//                 MemRead  = 0;
//                 RegWrite = 1;
//                 MemtoReg = 0;
//                 MEMOp    = 0;
//             end
//             `AUIPC_OP: begin
//                 ALUOp    = `ALU_ADD;
//                 BRUOp    = `BRU_NOP;
//                 Jalr     = 0;
//                 ALUSrc   = 3;
//                 MemWrite = 0;
//                 MemRead  = 0;
//                 RegWrite = 1;
//                 MemtoReg = 0;
//                 MEMOp    = 0;
//             end
//             `ECALL_OP: begin
//                 ALUOp    = `ALU_ADD;
//                 BRUOp    = `BRU_NOP;
//                 Jalr     = 0;
//                 ALUSrc   = 0;
//                 MemWrite = 0;
//                 MemRead  = 0;
//                 RegWrite = 0;
//                 MemtoReg = 0;
//                 MEMOp    = 0;
//             end
//             default: begin
//                 ALUOp    = 0;
//                 BRUOp    = 0;
//                 Jalr     = 0;
//                 ALUSrc   = 0;
//                 MemWrite = 0;
//                 MemRead  = 0;
//                 RegWrite = 0;
//                 MemtoReg = 0;
//                 MEMOp    = 0;
//             end
//         endcase
//     end

// endmodule
