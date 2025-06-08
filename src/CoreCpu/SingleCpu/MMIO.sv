`timescale 1ns / 1ps
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
    input logic Button_Confirm,
    
    
    // Output device signals
    output logic [`DATA_WIDTH] Seg1Out,
    output logic [`LED_WIDTH ] Led1Out, Led2Out,
    // VGA-related signals
    output logic [`LED_WIDTH] VGA1Out,
    // Signals interacting with Memory module
    output logic [`DATA_WIDTH] DataIo  // MMIO read data output
);

    // Internal signal declarations (original MMIO-related logic)
    logic [`LED_WIDTH] Led1, Led2;
    logic [`DATA_WIDTH] Seg1;
    logic [`LED_WIDTH] VGA1;

    // Combinational logic for reading input devices (original always_comb block)
    always_comb begin
        unique case (Address)
            32'hffff_ff00: DataIo = {24'h000000, Switch1};  // Switch1_case
            32'hffff_ff04: DataIo = {24'h000000, Switch2};  // Switch2_data
            32'hffff_ff08: DataIo = Button_Confirm ? 32'h00000001 : 32'h00000000;  // Button_Confirm (middle)
            default:       DataIo = 0;
        endcase
    end

    // Sequential logic for writing output devices (original always_ff @posedge clk block)
    always_ff @(posedge clk) begin
        if (reset) begin
            Led1 <= 8'b0;//0;
            Led2 <= 8'b0;//0;
            Seg1 <= 32'h01abcdef;//0;
            VGA1 <= 8'b0;
        end else begin
            unique case (Address)
                32'hffff_ff0c: Led1 <= WriteData[7:0];  // Led1 write
                32'hffff_ff10: Led2 <= WriteData[7:0];  // Led2 write
                32'hffff_ff14: Seg1 <= WriteData;       // Seg write
                32'hffff_ff18: VGA1 <= WriteData[7:0];  //VGA write
                default:;/*begin Led1 <= 8'b11111111;//0;
                            Led2 <= 8'b11111111;//0;
                            Seg1 <= 32'h88888888;//0; 
                            end*/ 
            endcase
        end
    end

    // Output assignments (original assign statements)
    assign Led1Out = Led1;
    assign Led2Out = Led2;
    assign Seg1Out = Seg1;
    assign VGA1Out = VGA1;
    //assign CharOut = chars[VgaAddress];
    //assign ColorOut = color[VgaAddress];
endmodule

