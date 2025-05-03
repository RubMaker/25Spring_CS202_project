`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/03/2025 01:29:51 AM
// Design Name: 
// Module Name: ALU_tb
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


module ALU_tb ();
    
// Define signals
logic [31:0] src1, src2;
logic [3:0] ALU_op;
logic [31:0] result;

// Instantiate the ALU module
ALU alu_inst (
    .a(src1),
    .b(src2),
    .aluop(ALU_op),
    .result(result)
);

// Task: Execute a test and print the result
task test_operation;
    input [31:0] input_src1;
    input [31:0] input_src2;
    input [3:0] input_ALU_op;
    input [31:0] expected_result;
    begin
        src1 = input_src1;
        src2 = input_src2;
        ALU_op = input_ALU_op;
        #10; // Wait for a while to let the circuit stabilize

        // Assertion to check if the result is as expected
        assert (result === expected_result)
            $display("Test Passed: ALU_op = %b, src1 = %h, src2 = %h, result = %h", 
                     input_ALU_op, input_src1, input_src2, result);
        else
            $error("Test Failed: ALU_op = %b, src1 = %h, src2 = %h, expected = %h, got = %h", 
                   input_ALU_op, input_src1, input_src2, expected_result, result);
    end
endtask

initial begin
    // Initialize signals
    src1 = 32'b0;
    src2 = 32'b0;
    ALU_op = 4'b0;
    #10; // Initial delay

    // // Test ADD operation
    // test_operation(32'h00000005, 32'h00000003, `ALU_ADD, 32'h00000008);
    // // Test SUB operation
    // test_operation(32'h00000008, 32'h00000003, `ALU_SUB, 32'h00000005);
    // // Test AND operation
    // test_operation(32'h0000000F, 32'h000000F0, `ALU_AND, 32'h00000000);
    // // Test OR operation
    // test_operation(32'h0000000F, 32'h000000F0, `ALU_OR, 32'h000000FF);
    // // Test XOR operation
    // test_operation(32'h0000000F, 32'h000000F0, `ALU_XOR, 32'h000000FF);
    // // Test SLL operation
    // test_operation(32'h00000001, 32'd2, `ALU_SLL, 32'h00000004);
    // // Test SRL operation
    // test_operation(32'h00000004, 32'd2, `ALU_SRL, 32'h00000001);
    // // Test SRA operation
    // test_operation(32'h80000000, 32'd2, `ALU_SRA, 32'hE0000000);
    // // Test SLT operation
    // test_operation(32'h00000003, 32'h00000005, `ALU_SLT, 32'h00000001);
    // // Test SLTU operation
    // test_operation(32'h00000003, 32'h00000005, `ALU_SLTU, 32'h00000001);
    // // Test MUL operation
    // test_operation(32'h00000003, 32'h00000005, `ALU_MUL, 32'h0000000F);
    // // Test MULH operation
    // test_operation(32'h80000000, 32'h80000000, `ALU_MULH, 32'h40000000);
    // // Test MULHSU operation
    // test_operation(32'h80000000, 32'h80000000, `ALU_MULHSU, 32'hC0000000);
    // // Test MULHU operation
    // test_operation(32'h80000000, 32'h80000000, `ALU_MULHU, 32'h40000000);
    // // Test DIV operation
    // test_operation(32'h00000008, 32'h00000002, `ALU_DIV, 32'h00000004);
    // // Test REM operation
    // test_operation(32'h00000008, 32'h00000003, `ALU_REM, 32'h00000002);



    // Test MULHSU operation with various cases
    test_operation(32'h80000000, 32'h80000000, `ALU_MULHSU, 32'hC0000000);
    test_operation(32'h00000007, 32'h7FFFFFFF, `ALU_MULHSU, 32'h00000003);
// (7) × (2³¹-1) = 0x00000003_7FFFFFF9
    test_operation(32'hFFFF_FFF9, 32'h0000_000F, `ALU_MULHSU, 32'hFFFF_FFFF);
// (-7) × 15 = -105   0xFFFF_FFFF_FFFF_FF97 
    test_operation(32'h80000000, 32'hFFFFFFFF, `ALU_MULHSU, 32'h80000000);
// (-2³¹) × (2³²-1) = -2⁶³ + 2³¹   0x80007FFF_80000000 
    test_operation(32'hFFFFFFFE, 32'h00000002, `ALU_MULHSU, 32'hFFFF_FFFF);
// (-2) × 2 = -4   0xFFFF_FFFF_FFFF_FFFC 
    test_operation(32'h7FFFFFFF, 32'h80000000, `ALU_MULHSU, 32'h3FFFFFFF);
// (2³¹-1) × 2³¹ = 0x3FFFFFFF_80000000 
    test_operation(32'h00000000, 32'hFFFFFFFF, `ALU_MULHSU, 32'h00000000);  
    test_operation(32'h80000000, 32'h00000000, `ALU_MULHSU, 32'h00000000); 

    // End the simulation
    $finish;
end

endmodule
