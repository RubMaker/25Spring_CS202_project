`timescale 1ns / 1ps
`include "Constants.vh"

module Uart (
    input                    clk, reset, rx,
    output logic [`DATA_WIDTH] DataOut,
    output logic [`DATA_WIDTH] Address,
    output logic             Done
);

    logic       RxDone;
    logic [7:0] RxData;

    Queue queue (
        .clk(clk),
        .reset(reset),
        .DataIn(RxData),
        .Ready(RxDone),
        .DataOut(DataOut),
        .Address(Address)
    );

    // timeout detection
    logic [15:0] IdleCnt;
    logic [9:0]  IdleCnt0;
    logic        Received;

    // filter unexpected noise
    logic RxdT0, RxdT1, RxdT2;

    // detect start bit
    logic  EnState;
    logic nedge;
    assign nedge = !RxdT1 & RxdT2;

    assign Done = (Address >= `MAX_DATA) | (Received & (IdleCnt == `MAX_IDLE));
    always_ff @(posedge clk) begin
        if (reset | EnState) begin
            IdleCnt0 <= 10'h0;
        end else begin
            IdleCnt0 <= (IdleCnt0 == `BPS_CNT - 1) ? 0 : IdleCnt0 + 1'b1;
        end
    end

    always_ff @(posedge clk) begin
        if (reset | EnState) begin
            IdleCnt <= 16'h0;
        end else if (IdleCnt == `MAX_IDLE) begin
            IdleCnt <= IdleCnt;
        end else begin
            IdleCnt <= (IdleCnt0 == `BPS_CNT - 1) ? IdleCnt + 1'b1 : IdleCnt;
        end
    end
    
    
    always_ff @(posedge clk) begin
        if (reset) begin
            RxdT0 <= 1'b1;
            RxdT1 <= 1'b1;
            RxdT2 <= 1'b1;
        end else begin
            RxdT0 <= rx;
            RxdT1 <= RxdT0;
            RxdT2 <= RxdT1;
        end
    end

    
    always_ff @(posedge clk) begin
        if (reset) EnState <= 1'b0;
        else if (nedge) EnState <= 1'b1;
        else if (RxDone) EnState <= 1'b0;
        else EnState <= EnState;
    end
    
    // count baud
    logic [9:0] BandCnt;
    always_ff @(posedge clk) begin
        if (reset) BandCnt <= 10'b0;
        else if (EnState) begin
            if(BandCnt == `BPS_CNT - 1) BandCnt <= 10'b0;
            else BandCnt <= BandCnt + 1'b1;
        end else BandCnt <= 10'b0;
    end
    
    // count bits
    logic [3:0] BitCnt;
    always_ff @(posedge clk) begin
        if (reset) BitCnt <= 4'd0;
        else if (EnState) begin
            if(BitCnt == 4'd0) BitCnt <= BitCnt + 1'b1;
            else if(BandCnt == `BPS_CNT - 1) BitCnt <= BitCnt + 1'b1;
            else BitCnt <= BitCnt;
        end else BitCnt <= 4'b0;
    end

    // receive data
    always_ff @(posedge clk) begin
        if (reset) begin
            RxData <= 8'd0;
            Received <= 1'b0;
        end else if (EnState) begin
            Received <= 1'b1;
            case (BitCnt)
                4'd1: RxData[0] <= RxdT2;
                4'd2: RxData[1] <= RxdT2;
                4'd3: RxData[2] <= RxdT2;
                4'd4: RxData[3] <= RxdT2;
                4'd5: RxData[4] <= RxdT2;
                4'd6: RxData[5] <= RxdT2;
                4'd7: RxData[6] <= RxdT2;
                4'd8: RxData[7] <= RxdT2;
             default: RxData <= RxData;
            endcase
        end else begin
            RxData <= RxData;
            Received <= Received;
        end
    end

    // receive Done logic
    always_ff @(posedge clk) begin
        if (reset) begin
            RxDone <= 1'b0;
        end else if (EnState) begin
            if(BitCnt == 0) RxDone <= 1'b0;
            else if(BitCnt == 9 && BandCnt == `BPS_CNT - 1) RxDone <= 1'b1;
            else if(RxDone == 1'b1) RxDone <= 1'b0;
            else RxDone <= RxDone;
        end else if(RxDone == 1'b1) RxDone <= 1'b0;
        else RxDone <= RxDone;
    end
        
endmodule
