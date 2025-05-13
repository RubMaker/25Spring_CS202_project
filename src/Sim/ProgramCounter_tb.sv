`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/13/2025 04:55:04 PM
// Design Name: 
// Module Name: ProgramCounter_tb
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


module ProgramCounter_tb;

// Testbench signals
logic clk;
logic reset;
logic PcWriteEn;
logic InstCacheEn;
logic DataCacheEn;
logic [`DATA_WIDTH] PcInput;
logic [`DATA_WIDTH] PcOutput;

// Instantiate the DUT
ProgramCounter dut (
    .clk(clk),
    .reset(reset),
    .PcWriteEn(PcWriteEn),
    .InstCacheEn(InstCacheEn),
    .DataCacheEn(DataCacheEn),
    .PcInput(PcInput),
    .PcOutput(PcOutput)
);

// Clock generation
initial begin
    clk = 0;
    forever #5 clk = ~clk;
end

// Test sequence
initial begin
    // Initialize signals
    reset = 0;
    PcWriteEn = 0;
    InstCacheEn = 0;
    DataCacheEn = 0;
    PcInput = 32'h0000_0000;
    
    // Start test
    #10;
    
    // Test 1: Reset functionality
    reset = 1;
    #10;
    reset = 0;
    assert(PcOutput === 32'h0000_0000) else $error("Test 1 Failed: Reset not working");
    
    // Test 2: Normal PC update
    PcInput = 32'h1234_5678;
    #10;
    assert(PcOutput === 32'h1234_5678) else $error("Test 2 Failed: PC not updated");
    
    // Test 3: PcWriteEn blocks update
    PcInput = 32'h8765_4321;
    PcWriteEn = 1;
    #10;
    assert(PcOutput === 32'h1234_5678) else $error("Test 3 Failed: PcWriteEn not blocking");
    PcWriteEn = 0;
    
    // Test 4: InstCacheEn blocks update
    PcInput = 32'hAAAA_BBBB;
    InstCacheEn = 1;
    #10;
    assert(PcOutput === 32'h1234_5678) else $error("Test 4 Failed: InstCacheEn not blocking");
    InstCacheEn = 0;
    
    // Test 5: DataCacheEn blocks update
    PcInput = 32'hCCCC_DDDD;
    DataCacheEn = 1;
    #10;
    assert(PcOutput === 32'h1234_5678) else $error("Test 5 Failed: DataCacheEn not blocking");
    DataCacheEn = 0;
    
    // Test 6: Priority of control signals
    PcInput = 32'h1111_2222;
    PcWriteEn = 1;
    InstCacheEn = 1;
    DataCacheEn = 1;
    #10;
    assert(PcOutput === 32'h1234_5678) else $error("Test 6 Failed: Priority handling incorrect");
    
    // Test 7: Multiple clock cycles
    PcWriteEn = 0;
    InstCacheEn = 0;
    DataCacheEn = 0;
    PcInput = 32'h0000_1111;
    #10;
    PcInput = 32'h0000_2222;
    #10;
    assert(PcOutput === 32'h0000_2222) else $error("Test 7 Failed: Multiple updates not working");
    
    $display("All tests passed!");
    $finish;
end

endmodule
