`timescale 1ns / 1ps
`include "Constants.vh"

//////////////////////////////////////////////////////////////////////////////////
// Module: Controller
// Description:
//   This module decodes a 32-bit instruction to extract the destination register,
//   immediate value (with sign extension), and the control signals required for the
//   rest of the pipeline.
//////////////////////////////////////////////////////////////////////////////////

module Controller(
    input  wire [31:0] Inst,         // 32-bit instruction input
    output reg  [4:0]  Rd,           // Destination register address
    output reg  [31:0] Imm,          // Sign-extended immediate value
    output reg         RegWrite,     // Register write enable
    output reg         ALUSrc,       // Second ALU operand select: 0 for Rs2, 1 for immediate
    output reg         MemtoReg,     // Write-back source select: 0 for ALU result, 1 for memory data
    output reg         MemRead,      // Memory read enable
    output reg         MemWrite,     // Memory write enable
    output reg         Branch,       // Branch instruction flag
    output reg [3:0]   ALU_op,       // ALU operation control signal
    output reg [2:0]   BRU_op,       // Branch unit control signal
    output reg [2:0]   LS_op         // Load/Store operation code
);

  always @(*) begin
    // Default assignments
    Rd        = Inst[11:7];
    Imm       = 32'd0;
    RegWrite  = 1'b0;
    ALUSrc    = 1'b0;
    MemtoReg  = 1'b0;
    MemRead   = 1'b0;
    MemWrite  = 1'b0;
    Branch    = 1'b0;
    ALU_op    = `ALU_ADD;
    BRU_op    = `BRU_NOP;
    LS_op     = 3'd0;
    
    case (Inst[6:0])
      // R-type: Arithmetic/Logic operations
      `ART_LOG_OPERATION: begin
        RegWrite = 1'b1;
        ALUSrc   = 1'b0;
        if (Inst[31:25] == 7'b0000001) begin  // Multiply/Divide operations
          case (Inst[14:12])
            `MUL_FUNC3:    ALU_op = `ALU_MUL;
            `MULH_FUNC3:   ALU_op = `ALU_MULH;
            `MULHSU_FUNC3: ALU_op = `ALU_MULHSU;
            `MULHU_FUNC3:  ALU_op = `ALU_MULHU;
            `DIV_FUNC3:    ALU_op = `ALU_DIV;
            `REM_FUNC3:    ALU_op = `ALU_REM;
            default:       ALU_op = `ALU_ADD;
          endcase
        end else begin
          case (Inst[14:12])
            `ADD_FUNC3: begin
              if (Inst[31:25] == 7'b0100000)
                ALU_op = `ALU_SUB;
              else
                ALU_op = `ALU_ADD;
            end
            `SLL_FUNC3: ALU_op = `ALU_SLL;
            `SLT_FUNC3: ALU_op = `ALU_SLT;
            `SLTU_FUNC3: ALU_op = `ALU_SLTU;
            `XOR_FUNC3: ALU_op = `ALU_XOR;
            `SRL_FUNC3: begin
              if (Inst[31:25] == 7'b0100000)
                ALU_op = `ALU_SRA;
              else
                ALU_op = `ALU_SRL;
            end
            `OR_FUNC3:  ALU_op = `ALU_OR;
            `AND_FUNC3: ALU_op = `ALU_AND;
            default:    ALU_op = `ALU_ADD;
          endcase
        end 
      end

      // I-type: Arithmetic Immediate Instructions
      `ART_IMM_OPERATION: begin
        RegWrite = 1'b1;
        ALUSrc   = 1'b1;
        Imm = {{20{Inst[31]}}, Inst[31:20]};
        case (Inst[14:12])
            `ADD_FUNC3: ALU_op = `ALU_ADD;
            `SLL_FUNC3: ALU_op = `ALU_SLL;
            `SLT_FUNC3: ALU_op = `ALU_SLT;
            `SLTU_FUNC3: ALU_op = `ALU_SLTU;
            `XOR_FUNC3: ALU_op = `ALU_XOR;
            `SRL_FUNC3: begin
              if (Inst[31:25] == 7'b0100000)
                ALU_op = `ALU_SRA;
              else
                ALU_op = `ALU_SRL;
            end
            `OR_FUNC3:  ALU_op = `ALU_OR;
            `AND_FUNC3: ALU_op = `ALU_AND;
            default:    ALU_op = `ALU_ADD;
        endcase
      end

      // Load Instruction (I-type)
      `LOAD_OPERATION: begin
        RegWrite = 1'b1;
        ALUSrc   = 1'b1;
        MemtoReg = 1'b1;
        MemRead  = 1'b1;
        Imm = {{20{Inst[31]}}, Inst[31:20]};
        ALU_op = `ALU_ADD;  // Used for address calculation
        case (Inst[14:12])
          `LB_FUNC3:  LS_op = `LB_OPERATION;
          `LH_FUNC3:  LS_op = `LH_OPERATION;
          `LW_FUNC3:  LS_op = `LW_OPERATION;
          `LBU_FUNC3: LS_op = `LBU_OPERATION;
          `LHU_FUNC3: LS_op = `LHU_OPERATION;
          default:    LS_op = `LW_OPERATION;
        endcase
      end

      // Store Instruction (S-type)
      `STORE_OPERATION: begin
        ALUSrc   = 1'b1;
        MemWrite = 1'b1;
        Imm = {{20{Inst[31]}}, Inst[31:25], Inst[11:7]};
        ALU_op = `ALU_ADD;  // For address calculation
        case (Inst[14:12])
          `SB_FUNC3: LS_op = `SB_OPERATION;
          `SH_FUNC3: LS_op = `SH_OPERATION;
          `SW_FUNC3: LS_op = `SW_OPERATION;
          default:   LS_op = `SW_OPERATION;
        endcase
      end

      // Branch Instruction (B-type)
      `BRANCH_OPERATION: begin
        Branch   = 1'b1;
        ALUSrc   = 1'b0;
        Imm = {{19{Inst[31]}}, Inst[31], Inst[7], Inst[30:25], Inst[11:8], 1'b0};
        case (Inst[14:12])
          `BEQ_FUNC3:  BRU_op = `BRU_EQ;
          `BNE_FUNC3:  BRU_op = `BRU_NE;
          `BLT_FUNC3:  BRU_op = `BRU_LT;
          `BGE_FUNC3:  BRU_op = `BRU_GE;
          `BLTU_FUNC3: BRU_op = `BRU_LTU;
          `BGEU_FUNC3: BRU_op = `BRU_GEU;
          default:     BRU_op = `BRU_NOP;
        endcase
      end

      // JAL Instruction (J-type)
      `JAL_OPERATION: begin
        RegWrite = 1'b1;
        ALUSrc = 1'b1;
        Imm = {{11{Inst[31]}}, Inst[31], Inst[19:12], Inst[20], Inst[30:21], 1'b0};
        ALU_op = `ALU_ADD;
      end

      // JALR Instruction (I-type)
      `JALR_OPERATION: begin
        RegWrite = 1'b1;
        ALUSrc = 1'b1;
        Imm = {{20{Inst[31]}}, Inst[31:20]};
        ALU_op = `ALU_ADD;
      end

      // LUI Instruction (U-type)
      `LUI_OPERATION: begin
        RegWrite = 1'b1;
        ALUSrc = 1'b1;
        Imm = {Inst[31:12], 12'b0};
        ALU_op = `ALU_ADD;
      end

      // AUIPC Instruction (U-type)
      `AUIPC_OPERATION: begin
        RegWrite = 1'b1;
        ALUSrc = 1'b1;
        Imm = {Inst[31:12], 12'b0};
        ALU_op = `ALU_ADD;
      end

      // ECALL Instruction
      `ECALL_OPERATION: begin
        RegWrite = 1'b0;
        ALUSrc = 1'b0;
        ALU_op = `ALU_ADD;
      end

      // SRET Instruction
      `SRET_OPERATION: begin
        RegWrite = 1'b0;
        ALUSrc = 1'b0;
        ALU_op = `ALU_ADD;
      end

      default: begin
        RegWrite  = 1'b0;
        ALUSrc    = 1'b0;
        MemtoReg  = 1'b0;
        MemRead   = 1'b0;
        MemWrite  = 1'b0;
        Branch    = 1'b0;
        ALU_op    = `ALU_ADD;
        BRU_op    = `BRU_NOP;
        LS_op     = 3'd0;
        Imm       = 32'd0;
      end
    endcase
  end
endmodule
