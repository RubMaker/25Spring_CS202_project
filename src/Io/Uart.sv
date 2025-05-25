`timescale 1ns / 1ps
`include "Constants.vh"

module UART (
    input                    clk, reset, rx,
    output logic [`DATA_WIDTH] DatoOut,
    output logic [`DATA_WIDTH] Address,
    output logic             Done
);

    logic       RxDone = 0;
    logic [7:0] RxData = 0;

    Queue queue (
        .clk(clk),
        .reset(reset),
        .data_in(RxData),
        .ready_in(RxDone),
        .DatoOut(DataOut),
        .Address(Address)
    );

    // timeout detection
    logic [15:0] IdleCnt = 0;
    logic [9:0]  IdleCnt0 = 0;
    logic        Received = 0;

    // filter unexpected noise
    logic RxdT0 = 1, RxdT1 = 1, RxdT2 = 1;

    // detect start bit
    logic  EnState = 0;
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
    logic [9:0] baud_cnt;
    always_ff @(posedge clk) begin
        if (reset) baud_cnt <= 10'b0;
        else if (EnState) begin
            if(baud_cnt == `BPS_CNT - 1) baud_cnt <= 10'b0;
            else baud_cnt <= baud_cnt + 1'b1;
        end else baud_cnt <= 10'b0;
    end
    
    // count bits
    logic [3:0] bit_cnt;
    always_ff @(posedge clk) begin
        if (reset) bit_cnt <= 4'd0;
        else if (EnState) begin
            if(bit_cnt == 4'd0) bit_cnt <= bit_cnt + 1'b1;
            else if(baud_cnt == `BPS_CNT - 1) bit_cnt <= bit_cnt + 1'b1;
            else bit_cnt <= bit_cnt;
        end else bit_cnt <= 4'b0;
    end

    // receive data
    always_ff @(posedge clk) begin
        if (reset) begin
            RxData <= 8'd0;
            Received <= 1'b0;
        end else if (EnState) begin
            Received <= 1'b1;
            case (bit_cnt)
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
            if(bit_cnt == 0) RxDone <= 1'b0;
            else if(bit_cnt == 9 && baud_cnt == `BPS_CNT - 1) RxDone <= 1'b1;
            else if(RxDone == 1'b1) RxDone <= 1'b0;
            else RxDone <= RxDone;
        end else if(RxDone == 1'b1) RxDone <= 1'b0;
        else RxDone <= RxDone;
    end
        
endmodule