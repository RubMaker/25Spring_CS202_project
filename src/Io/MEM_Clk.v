module MEM_Clk (
    input clk,
    output clk0
);

    reg [15:0] cnt;
    reg t;
    assign clk0 = t;

    always @(posedge clk) begin
        if (cnt == 40) begin
            cnt <= 0;
        end
        else begin
           cnt <= cnt + 1'b1; 
        end
    end

    always @(posedge clk) begin
        if (cnt == 40) begin
            t <= ~t;
        end 
    end
    
endmodule
