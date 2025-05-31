`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/13/2025 05:33:01 PM
// Design Name: 
// Module Name: MMIO
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



module MMIO(
    input                      reset,
    input                      clk,
    input  logic [`DATA_WIDTH] Address,
    input  logic [`DATA_WIDTH] WriteData,
    // Input device signals
    input  logic [`SWCH_WIDTH] Switch1, Switch2,
    input                      Button1, Button2, Button3, Button4, Button5,
    // input  logic [`KBCODE_WIDTH] kb_idx,
    // Output device signals
    output logic [`DATA_WIDTH] Seg1Out,
    output logic [`LED_WIDTH ] Led1Out, Led2Out,
    // VGA-related signals
    input  logic [`VGA_ADDRESS] VgaAddress,
    output logic [`INFO_WIDTH] CharOut,
    output logic [`INFO_WIDTH] ColorOut,
    // Signals interacting with Memory module
    output logic [`DATA_WIDTH] DataIo  // MMIO read data output
);

    // Internal signal declarations (original MMIO-related logic)
    logic [`LED_WIDTH] Led1, Led2;
    logic [`DATA_WIDTH] Seg1;
    logic [`INFO_WIDTH] chars [`INFO_NUM];
    logic [`INFO_WIDTH] color [`INFO_NUM]; 

    // Combinational logic for reading input devices (original always_comb block)
    always_comb begin
        unique case (Address)
            32'hffff_ff00: DataIo = {24'h000000, Switch1};  // Switch1
            32'hffff_ff04: DataIo = {24'h000000, Switch2};  // Switch2
            // 32'hffff_ff08: DataIo = {24'h000000, Switch3};  // Switch3
            32'hffff_ff14: DataIo = Button1 ? 32'h00000001 : 32'h00000000;  // Button1 (middle)
            32'hffff_ff18: DataIo = Button2 ? 32'h00000001 : 32'h00000000;  // Button2 (up)
            32'hffff_ff1c: DataIo = Button3 ? 32'h00000001 : 32'h00000000;  // Button3 (down)
            32'hffff_ff20: DataIo = Button4 ? 32'h00000001 : 32'h00000000;  // Button4 (left)
            32'hffff_ff24: DataIo = Button5 ? 32'h00000001 : 32'h00000000;  // Button5 (right)
            // 32'hffff_ff2c: DataIo = kb_idx[4] ? 32'h00000001 : 32'h00000000;  // Keyboard enable
            // 32'hffff_ff30: DataIo = {28'h0000000, kb_idx[3:0]};  // 4x4 keyboard
            default:       DataIo = 0;
        endcase
    end

    // Sequential logic for writing output devices (original always_ff @posedge clk block)
    always_ff @(posedge clk) begin
        if (reset) begin
            Led1 <= 0;
            Led2 <= 0;
            Seg1 <= 0;
        end else begin
            unique case (Address)
                32'hffff_ff0c: Led1 <= WriteData[7:0];  // Led1 write
                32'hffff_ff10: Led2 <= WriteData[7:0];  // Led2 write
                32'hffff_ff28: Seg1 <= WriteData;       // Seg write
                default: ;  // Maintain original value
            endcase
        end
    end

    // Sequential logic for VGA writing (original always_ff @negedge clk block)
    always_ff @(negedge clk) begin
        if (reset) begin
            for (int i = 0; i < 3072; i++) begin
                chars[i] <= 8'h00;
                color[i] <= 8'h00;
            end
        end else begin
            unique case (Address[31:12])
                20'hffffe: chars[Address[11:0]] <= WriteData[7:0];  // Character write
                20'hffffd: color[Address[11:0]] <= WriteData[7:0];  // Color write
                default: ;  // Maintain original value
            endcase
        end
    end

    // Output assignments (original assign statements)
    assign Led1Out = Led1;
    assign Led2Out = Led2;
    assign Seg1Out = Seg1;
    assign CharOut = chars[VgaAddress];
    assign ColorOut = color[VgaAddress];
endmodule
