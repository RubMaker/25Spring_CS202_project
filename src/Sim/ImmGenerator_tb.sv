`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/13/2025 09:20:52 PM
// Design Name: 
// Module Name: ImmGenerator_tb
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

module ImmGenerator_tb;

logic [`DATA_WIDTH] Instruction;
logic [`DATA_WIDTH] ImmData;

// Define operation codes (replace with actual defines from your environment)
parameter ART_IMM_OPERATION = 7'b0010011;
parameter LOAD_OPERATION = 7'b0000011;
parameter JALR_OPERATION = 7'b1100111;
parameter STORE_OPERATION = 7'b0100011;
parameter BRANCH_OPERATION = 7'b1100011;
parameter LUI_OPERATION = 7'b0110111;
parameter AUIPC_OPERATION = 7'b0010111;
parameter JAL_OPERATION = 7'b1101111;

// Instantiate DUT
ImmGenerator dut (
    .Instruction(Instruction),
    .ImmData(ImmData)
);

initial begin
    $display("Starting ImmGenerator tests...");
    
    // Test I-type instructions
    test_i_type();
    
    // Test S-type instructions
    test_s_type();
    
    // Test B-type instructions
    test_b_type();
    
    // Test U-type instructions
    test_u_type();
    
    // Test J-type instructions
    test_j_type();
    
    // Test R-type/undefined instructions
    test_undefined_type();
    
    $display("All tests completed");
    $finish;
end

task test_i_type();
    $display("\nTesting I-type instructions...");
    
    // Test positive immediate
    Instruction = {12'hABC, 5'b0, 3'b0, 5'b0, ART_IMM_OPERATION};
    #10;
    assert(ImmData === 32'hFFFFFABC) else $error("I-type positive immediate failed");
    
    // Test negative immediate (sign extension)
    Instruction = {12'hFED, 5'b0, 3'b0, 5'b0, LOAD_OPERATION};
    #10;
    assert(ImmData === 32'hFFFFFFED) else $error("I-type negative immediate failed");
    
    // Test JALR with zero immediate
    Instruction = {12'h000, 5'b0, 3'b0, 5'b0, JALR_OPERATION};
    #10;
    assert(ImmData === 32'h00000000) else $error("I-type zero immediate failed");
endtask

task test_s_type();
    $display("\nTesting S-type instructions...");
    
    // Test positive immediate
    Instruction = {7'h12, 5'b0, 5'h3, 3'b0, 7'h34, STORE_OPERATION};
    #10;
    assert(ImmData === 32'hfffff914) else $error("S-type positive immediate failed");
    
    // Test negative immediate (sign extension)
    Instruction = {7'hFF, 5'b0, 5'hF, 3'b0, 7'h80, STORE_OPERATION};
    #10;
    assert(ImmData === 32'hFFFFFF80) else $error("S-type negative immediate failed");
endtask

task test_b_type();
    $display("\nTesting B-type instructions...");
    
    // Test positive branch offset
    Instruction = {1'b0, 6'h12, 5'b0, 3'b0, 4'h3, 1'b1, 7'h00, BRANCH_OPERATION};
    #10;
    assert(ImmData === 32'hfffff100) else $error("B-type positive offset failed");
    
    // Test negative branch offset (sign extension)
    Instruction = {1'b1, 6'h3F, 5'b0, 3'b0, 4'hF, 1'b1, 7'h00, BRANCH_OPERATION};
    #10;
    assert(ImmData === 32'hFFFFF780) else $error("B-type negative offset failed");
endtask

task test_u_type();
    $display("\nTesting U-type instructions...");
    
    // Test LUI with upper immediate
    Instruction = {20'hABCDE, 5'b0, LUI_OPERATION};
    #10;
    assert(ImmData === 32'hABCDE000) else $error("LUI immediate failed");
    
    // Test AUIPC with upper immediate
    Instruction = {20'h12345, 5'b0, AUIPC_OPERATION};
    #10;
    assert(ImmData === 32'h12345000) else $error("AUIPC immediate failed");
endtask

task test_j_type();
    $display("\nTesting J-type instructions...");
    
    // Test positive jump offset
    Instruction = {1'b0, 10'h123, 1'b1, 8'h45, 1'b0, 11'h000, JAL_OPERATION};
    #10;
    assert(ImmData === 32'h00803a2) else $error("J-type positive offset failed");
    
    // Test negative jump offset (sign extension)
    Instruction = {1'b1, 10'h3FF, 1'b1, 8'hFF, 1'b0, 11'h000, JAL_OPERATION};
    #10;
    assert(ImmData === 32'hfff80ffe) else $error("J-type negative offset failed");
endtask

task test_undefined_type();
    $display("\nTesting undefined/R-type instructions...");
    
    // Test R-type instruction (should produce zero immediate)
    Instruction = {12'hABC, 5'b0, 5'b0, 3'b0, 7'b0110011}; // ADD operation
    #10;
    assert(ImmData === 32'h00000000) else $error("R-type immediate not zero");
    
    // Test undefined opcode
    Instruction = {32'hFFFFFFFF};
    #10;
    assert(ImmData === 32'h00000000) else $error("Undefined instruction immediate not zero");
endtask

endmodule
