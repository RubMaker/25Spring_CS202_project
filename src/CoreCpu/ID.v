`timescale 1ns / 1ps
`include "Constants.vh" 

//////////////////////////////////////////////////////////////////////////////////
// Module: ID
// Description: Instruction Decode stage for a RISC-V CPU.
//              Decodes the 32-bit instruction to extract register addresses, immediates,
//              and generates control signals for ALU, Branch, and Load/Store units.
//////////////////////////////////////////////////////////////////////////////////

module ID (
    input  wire [31:0] Inst,        // 32-bit instruction from IF stage
    input  wire [31:0] PcIn,        // Current PC value from IF stage
    output reg  [4:0]  Rs1,         // Source register 1 address
    output reg  [4:0]  Rs2,         // Source register 2 address
    output reg  [4:0]  Rd,          // Destination register address
    output reg  [31:0] Imm,         // Sign-extended immediate value
    output reg  [31:0] PcOut,       // PC value forwarded to next stage
    // Control signals:
    output reg         RegWrite,    // Register write enable
    output reg         ALUSrc,      // ALU second operand source: 0=Rs2; 1=immediate
    output reg         MemtoReg,    // Selects write-back source: 0=ALU; 1=memory
    output reg         MemRead,     // Memory read enable
    output reg         MemWrite,    // Memory write enable
    output reg         Branch,      // Branch instruction flag
    output reg [3:0]   AluOperation,      // ALU operation control signal
    output reg [2:0]   BruOperation,      // Branch unit control signal
    output reg [2:0]   LoadStoreOperation        // Load/Store operation control signal
);

    always @(*) begin
        // Extract fields from Inst
        Rs1   = Inst[19:15];
        Rs2   = Inst[24:20];
        Rd    = Inst[11:7];
        Imm   = 32'd0;
        PcOut = PcIn;  // Forward input PC

        // Control signals
        RegWrite  = 1'b0;
        ALUSrc    = 1'b0;
        MemtoReg  = 1'b0;
        MemRead   = 1'b0;
        MemWrite  = 1'b0;
        Branch    = 1'b0;
        AluOperation    = `ALU_ADD;  
        BruOperation    = `BRU_NOP;
        LoadStoreOperation     = 3'd0;      

        // Decode instruction based on opcode (Inst[6:0])
        case (Inst[6:0])
            // R-type: Arithmetic/Logical operations
            `ART_LOG_OPERATION: begin
                RegWrite = 1'b1;
                ALUSrc   = 1'b0;
                if (Inst[31:25] == 7'b0000001) begin  // Multiply/Divide instructions
                    case (Inst[14:12])
                        `MUL_FUNC3:    AluOperation = `ALU_MUL;
                        `MULH_FUNC3:   AluOperation = `ALU_MULH;
                        `MULHSU_FUNC3: AluOperation = `ALU_MULHSU;
                        `MULHU_FUNC3:  AluOperation = `ALU_MULHU;
                        `DIV_FUNC3:    AluOperation = `ALU_DIV;
                        `REM_FUNC3:    AluOperation = `ALU_REM;
                        default:       AluOperation = `ALU_ADD;
                    endcase
                end else begin
                    case (Inst[14:12])
                        `ADD_FUNC3: begin
                            if (Inst[31:25] == 7'b0100000)
                                AluOperation = `ALU_SUB;
                            else
                                AluOperation = `ALU_ADD;
                        end
                        `SLL_FUNC3: AluOperation = `ALU_SLL;
                        `SLT_FUNC3: AluOperation = `ALU_SLT;
                        `SLTU_FUNC3: AluOperation = `ALU_SLTU;
                        `XOR_FUNC3: AluOperation = `ALU_XOR;
                        `SRL_FUNC3: begin
                            if (Inst[31:25] == 7'b0100000)
                                AluOperation = `ALU_SRA;
                            else
                                AluOperation = `ALU_SRL;
                        end
                        `OR_FUNC3:  AluOperation = `ALU_OR;
                        `AND_FUNC3: AluOperation = `ALU_AND;
                        default:    AluOperation = `ALU_ADD;
                    endcase
                end
            end
            // I-type Arithmetic immediate instructions
            `ART_IMM_OPERATION: begin
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                Imm = {{20{Inst[31]}}, Inst[31:20]};
                case (Inst[14:12])
                    `ADD_FUNC3: AluOperation = `ALU_ADD;
                    `SLL_FUNC3: AluOperation = `ALU_SLL;
                    `SLT_FUNC3: AluOperation = `ALU_SLT;
                    `SLTU_FUNC3: AluOperation = `ALU_SLTU;
                    `XOR_FUNC3: AluOperation = `ALU_XOR;
                    `SRL_FUNC3: begin
                        if (Inst[31:25] == 7'b0100000)
                            AluOperation = `ALU_SRA;
                        else
                            AluOperation = `ALU_SRL;
                    end
                    `OR_FUNC3:  AluOperation = `ALU_OR;
                    `AND_FUNC3: AluOperation = `ALU_AND;
                    default:    AluOperation = `ALU_ADD;
                endcase
            end
            // I-type Load instructions
            `LOAD_OPERATION: begin
                RegWrite  = 1'b1;
                ALUSrc    = 1'b1;
                MemtoReg  = 1'b1;
                MemRead   = 1'b1;
                Imm = {{20{Inst[31]}}, Inst[31:20]};
                AluOperation = `ALU_ADD;  // Address calculation
                case (Inst[14:12])
                    `LB_FUNC3:  LoadStoreOperation = `LB_OPERATION;
                    `LH_FUNC3:  LoadStoreOperation = `LH_OPERATION;
                    `LW_FUNC3:  LoadStoreOperation = `LW_OPERATION;
                    `LBU_FUNC3: LoadStoreOperation = `LBU_OPERATION;
                    `LHU_FUNC3: LoadStoreOperation = `LHU_OPERATION;
                    default:    LoadStoreOperation = `LW_OPERATION;
                endcase
            end
            // S-type Store instructions
            `STORE_OPERATION: begin
                ALUSrc   = 1'b1;
                MemWrite = 1'b1;
                Imm = {{20{Inst[31]}}, Inst[31:25], Inst[11:7]};
                AluOperation = `ALU_ADD;  // Address calculation
                case (Inst[14:12])
                    `SB_FUNC3: LoadStoreOperation = `SB_OPERATION;
                    `SH_FUNC3: LoadStoreOperation = `SH_OPERATION;
                    `SW_FUNC3: LoadStoreOperation = `SW_OPERATION;
                    default:   LoadStoreOperation = `SW_OPERATION;
                endcase
            end
            // B-type Branch instructions
            `BRANCH_OPERATION: begin
                Branch   = 1'b1;
                ALUSrc   = 1'b0;
                Imm = {{19{Inst[31]}}, Inst[31], Inst[7], Inst[30:25], Inst[11:8], 1'b0};
                case (Inst[14:12])
                    `BEQ_FUNC3:  BruOperation = `BRU_EQ;
                    `BNE_FUNC3:  BruOperation = `BRU_NE;
                    `BLT_FUNC3:  BruOperation = `BRU_LT;
                    `BGE_FUNC3:  BruOperation = `BRU_GE;
                    `BLTU_FUNC3: BruOperation = `BRU_LTU;
                    `BGEU_FUNC3: BruOperation = `BRU_GEU;
                    default:     BruOperation = `BRU_NOP;
                endcase
            end
            // J-type JAL instruction
            `JAL_OPERATION: begin
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                BruOperation   = `BRU_JMP;  // Unconditional jump
                Imm = {{11{Inst[31]}}, Inst[31], Inst[19:12], Inst[20], Inst[30:21], 1'b0};
                AluOperation   = `ALU_ADD;  // Return address calculation
            end
            // I-type JALR instruction
            `JALR_OPERATION: begin
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                BruOperation   = `BRU_JMP;
                Imm = {{20{Inst[31]}}, Inst[31:20]};
                AluOperation   = `ALU_ADD;  // Jump target calculation
            end
            // U-type LUI instruction
            `LUI_OPERATION: begin
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                Imm = {Inst[31:12], 12'b0};
                AluOperation   = `ALU_ADD;  // Data pass-through
            end
            // U-type AUIPC instruction
            `AUIPC_OPERATION: begin
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                Imm = {Inst[31:12], 12'b0};
                AluOperation   = `ALU_ADD;
            end
            // ECALL: system call, treated as NOP
            `ECALL_OPERATION: begin
                RegWrite = 1'b0;
                ALUSrc   = 1'b0;
                AluOperation   = `ALU_ADD;
            end
            // SRET: system return, treated as NOP
            `SRET_OPERATION: begin
                RegWrite = 1'b0;
                ALUSrc   = 1'b0;
                AluOperation   = `ALU_ADD;
            end
            default: begin
                // Default: No Operation
                RegWrite  = 1'b0;
                ALUSrc    = 1'b0;
                MemtoReg  = 1'b0;
                MemRead   = 1'b0;
                MemWrite  = 1'b0;
                Branch    = 1'b0;
                AluOperation    = `ALU_ADD;
                BruOperation    = `BRU_NOP;
                LoadStoreOperation     = 3'd0;
                Imm       = 32'd0;
            end
        endcase
    end

endmodule