`timescale 1ns/1ps
`include "Constants.vh"

module Controller_tb();
// Clock and reset signals
logic clk = 0;
logic rstN;

// DUT interface
logic [31:0] instruction;
wire [`CTRL_WIDTH] ctrlBus;

// Control signal decomposition
struct packed {
    logic        jalr;
    logic [2:0]  bruOp;
    logic [3:0]  aluOp;
    logic [1:0]  aluSrc;
} exCtrl;

struct packed {
    logic [2:0]  memOp;
    logic        memWr;
    logic        memRd;
} memCtrl;

struct packed {
    logic        regWr;
    logic        memToReg;
} wbCtrl;

// Instantiate DUT
Controller dut (
    .instruction(instruction),
    .ctrlBus(ctrlBus)
);

// Unpack control bus
assign {exCtrl, memCtrl, wbCtrl} = ctrlBus;

// Clock generation (100MHz)
always #5 clk = ~clk;

// Waveform recording initialization
initial begin
    $dumpfile("controller_wave.vcd");
    $dumpvars(0, Controller_tb);
end

// Main test flow
initial begin
    rstN = 0;
    #20 rstN = 1;
    
    // Test case 1: R-type ADD instruction
    testRtypeAdd: begin
        instruction = 32'h00c58633; // add x12,x11,x12
        #10 verifyControls(
            .expAluOp(`ALU_ADD),
            .expRegWr(1'b1),
            .expMemRd(1'b0)
        );
    end
    
    // Test case 2: I-type ADDI instruction
    testItypeAddi: begin
        instruction = 32'h00430313; // addi x6,x6,4
        #10 verifyControls(
            .expAluOp(`ALU_ADD),
            .expAluSrc(1'b1),
            .expRegWr(1'b1)
        );
    end
    
    // Test case 3: LOAD instruction (LW)
    testLoadLw: begin
        instruction = 32'h02832603; // lw x12,40(x6)
        #10 verifyControls(
            .expAluOp(`ALU_ADD),
            .expMemRd(1'b1),
            .expMemToReg(1'b1)
        );
    end
    
    // Test case 4: STORE instruction (SW)
    testStoreSw: begin
        instruction = 32'hfed42e23; // sw x13,-4(x8)
        #10 verifyControls(
            .expMemWr(1'b1),
            .expRegWr(1'b0)
        );
    end
    
    // Test case 5: BEQ branch instruction
    testBranchBeq: begin
        instruction = 32'hfe629ae3; // bne x5,x6,-12
        #10 verifyControls(
            .expBruOp(`BRU_NE),
            .expRegWr(1'b0)
        );
    end
    
    #50 $display("[%t] All tests passed!", $time);
    $finish;
end

// Automated verification task
task verifyControls(
    input logic [3:0] expAluOp = 4'b0000,
    input logic [2:0] expBruOp = `BRU_NOP,
    input logic [1:0] expAluSrc = 0,
    input logic expMemWr = 0,
    input logic expMemRd = 0,
    input logic expRegWr = 0,
    input logic expMemToReg = 0
);
    begin
        // printInstructionInfo();
        
        // ALU operation assertion
        assert (exCtrl.aluOp === expAluOp) 
        else $error("[ALU] Operation error: exp=%0h, act=%0h", 
            expAluOp, exCtrl.aluOp);
        
        // Branch operation assertion
        assert (exCtrl.bruOp === expBruOp) 
        else $error("[BRU] Operation error: exp=%0h, act=%0h", 
            expBruOp, exCtrl.bruOp);
        
        // Data path assertion
        assert (exCtrl.aluSrc === expAluSrc)
        else $error("[ALUSrc] Selection error: exp=%0h, act=%0h",
            expAluSrc, exCtrl.aluSrc);
            
        assert (memCtrl.memWr === expMemWr)
        else $error("[MemWr] Enable error: exp=%0h, act=%0h",
            expMemWr, memCtrl.memWr);
            
        assert (memCtrl.memRd === expMemRd)
        else $error("[MemRd] Enable error: exp=%0h, act=%0h",
            expMemRd, memCtrl.memRd);
            
        assert (wbCtrl.regWr === expRegWr)
        else $error("[RegWr] Enable error: exp=%0h, act=%0h",
            expRegWr, wbCtrl.regWr);
            
        assert (wbCtrl.memToReg === expMemToReg)
        else $error("[Mem2Reg] Selection error: exp=%0h, act=%0h",
            expMemToReg, wbCtrl.memToReg);
    end
endtask

// // Instruction information printing
// function void printInstructionInfo();
//     $display("\n[TESTCASE %0d]", $time/10);
//     $display("Instruction: %32h", instruction);
//     $display("Control Bus: %17b", ctrlBus);
//     $display("EX Stage: {jalr:%0d bruOp:%0d aluOp:%0d aluSrc:%0d}", 
//         exCtrl.jalr, exCtrl.bruOp, exCtrl.aluOp, exCtrl.aluSrc);
//     $display("MEM Stage: {memOp:%0d memWr:%0d memRd:%0d}",
//         memCtrl.memOp, memCtrl.memWr, memCtrl.memRd);
//     $display("WB Stage: {regWr:%0d memToReg:%0d}",
//         wbCtrl.regWr, wbCtrl.memToReg);
// endfunction
endmodule