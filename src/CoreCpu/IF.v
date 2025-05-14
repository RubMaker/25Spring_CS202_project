`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module: IF
// Description: Instruction Fetch stage.
//              Uses the ICache module to obtain instructions.
//              Updates the Program Counter (PC) based on branch signals and predictions.
//////////////////////////////////////////////////////////////////////////////////

module IF (
    input  wire          clk,           // Clock signal
    input  wire          rst,           // Reset signal, active low
    // Pipeline control:
    input  wire          IF_ID_Write,   // Enable writing to the IF/ID pipeline register
    input  wire          Branch,        // Branch signal from EX stage
    input  wire          Zero,          // Comparison result for branch decision
    input  wire [31:0]   Imm32,         // Branch immediate value
    // Branch prediction interface:
    input  wire          PredictFail,   // Branch prediction failure flag
    input  wire [31:0]   NewPc,         // Corrected PC from branch prediction module
    // Outputs to next pipeline stage:
    output reg  [31:0]   PcOut,         // Program Counter passed to IF/ID pipeline register
    output reg  [31:0]   InstOut,       // Fetched instruction
    // ICache interface:
    output wire [31:0]   MemPc,         // Address passed to ICache module
    input  wire [31:0]   MemInst,       // Instruction returned from ICache
    output wire          ICacheStall    // Stall signal from ICache module
);

    // Internal PC register.
    reg [31:0] Pc;

    /**
     * @brief PC update logic:
     *        - On branch prediction failure, use NewPc.
     *        - If Branch is triggered (and Zero is high), update PC with Imm32.
     *        - Otherwise, increment PC by 4.
     *        Active low reset is used.
     */
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            Pc <= 32'b0;
        end else if (IF_ID_Write) begin
            if (PredictFail)
                Pc <= NewPc;
            else if (Branch && Zero)
                Pc <= Pc + Imm32;
            else
                Pc <= Pc + 32'd4;
        end
    end

    // Instantiate ICache to fetch instruction.
    ICache U_Cache (
        .clk(clk),
        .rst(rst),
        .Addr(Pc),
        .Inst(MemInst),
        .ICacheStall(ICacheStall),
        .MemPc(MemPc)
    );

    /**
     * @brief Pipeline register update:
     *        Updates InstOut and PcOut when IF_ID_Write is asserted.
     */
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            InstOut <= 32'd0;
            PcOut   <= 32'd0;
        end else if (IF_ID_Write) begin
            InstOut <= MemInst;
            PcOut   <= Pc;
        end
    end

endmodule