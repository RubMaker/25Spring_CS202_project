module IFetch(
    input
        clk,
        rst,
        branch,
        zero,
        signed [31:0] imm32,
        [31:0] inst_i,
    output 
        [31:0] inst_o,
        [13:0] rom_adr_o
    );
    reg [31:0] pc = 32'h0;
    //prgrom urom(.clka(clk), .addra(pc[15:2]), .douta(inst));
    assign rom_adr_o = pc[15:2];
    always@ (negedge clk) begin
        if(rst) //initialize
            pc<=32'h00000000;
        else begin//update
            if(branch && zero) //branch
                pc<=pc+imm32;
            else //Sequential execution
                pc<=pc+32'h4;
        end
    end
    assign inst_o = inst_i;
endmodule