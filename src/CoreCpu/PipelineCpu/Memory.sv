`timescale 1ns / 1ps
`include "Constants.vh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/11/2025 04:23:40 PM
// Design Name: 
// Module Name: Memory
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


module Memory(
    input logic reset,                          // Global reset signal (active high)
    input logic clkA, clkB,                     // Clock signals for port A and port B
    input logic [`DATA_WIDTH] AddressA, AddressB, // Address buses for port A and port B
    input logic [`DATA_WIDTH] WriteData,        // Write data for port B
    input logic EnableWriteB,                   // Write enable for port B (active high)
    input logic [`SWCH_WIDTH] Switch1, Switch2,  // Input switches (MMIO)
    /*input logic Button1, Button2,               // Input buttons (MMIO)
    input logic Button3, Button4, Button5,       // Input buttons (MMIO)*/
    input logic Button_Confirm,
    //input logic [`VGA_ADDRESS] VgaAddress,          // VGA display address (MMIO)
    output logic [`DATA_WIDTH] Seg1Out,          // 7-segment display output (MMIO)
    output logic [`LED_WIDTH] Led1Out, Led2Out,  // LED outputs (MMIO)
    //output logic [`INFO_WIDTH] CharOut,          // VGA character output (MMIO)
    //output logic [`INFO_WIDTH] ColorOut,         // VGA color output (MMIO)
    // output logic [`LED_WIDTH] VGA1Out,
    output logic [`DATA_WIDTH] ReadDataA,        // Read data output for port A
    output logic [`DATA_WIDTH] ReadDataB         // Read data output for port B
    // output logic IsMMIO,                     // Indicates if the address is MMIO
    // output logic IsExcept                     // Indicates if the address is an exception
);
    localparam ADDR_HIGH = 15;
    localparam ADDR_LOW = 2;
    logic [`DATA_WIDTH] ReDataA,ReDataB,DataIo,ExpData;
    logic IsMMIO;//1 MMIO, 0 Memory
    logic IsExcept;
    logic EnWB;
    
    //A only for read
    //B for read and write
    MemorySim test_inst(
        .clka(~clkA),
        .clkb(~clkB),
        .addra(AddressA[ADDR_HIGH:ADDR_LOW]),
        .addrb(AddressB[ADDR_HIGH:ADDR_LOW]),
        .write_datab(IsMMIO ? 0 : WriteData),
        .dataa(ReDataA),
        .datab(ReDataB),
        .web(EnWB)
    );

    // Mem mem_inst(
    //     .clka(~clkA),
    //     .clkb(~clkB),
    //     .addra(AddressA[ADDR_HIGH:ADDR_LOW]),
    //     .addrb(AddressB[ADDR_HIGH:ADDR_LOW]),
    //     .dina(0),
    //     .dinb(IsMMIO ? 0 : WriteData),
    //     .douta(ReDataA),
    //     .doutb(ReDataB),
    //     .ena(1),
    //     .enb(1),
    //     .wea(0),
    //     .web(EnWB)
    // );

    ExpAddressHandler exp_inst(
        .Address(AddressA),
        .ExpData(ExpData)
    );

    // MMIO
    MMIO mmio_inst(
        .reset(reset),
        .clk(clkB),
        .Address(AddressB),
        .WriteData(WriteData),
        .Switch1(Switch1),
        .Switch2(Switch2),
        .Button_Confirm(Button_Confirm),
        // .Button2(Button2),
        // .Button3(Button3),
        // .Button4(Button4),
        // .Button5(Button5),
        // .VgaAddress(VgaAddress),
        .DataIo(DataIo),
        .Seg1Out(Seg1Out),
        .Led1Out(Led1Out),
        .Led2Out(Led2Out)
        // .CharOut(CharOut),
        // .ColorOut(ColorOut)
    );

    assign IsMMIO = (AddressB[31:16] == 16'hffff);
    assign IsExcept = (AddressA[31:16] == 16'h1c09);
    assign ReadDataB = IsMMIO ? DataIo : ReDataB;
    assign ReadDataA = IsExcept ? ExpData : ReDataA;
    assign EnWB = EnableWriteB & ~IsMMIO;

    
endmodule
