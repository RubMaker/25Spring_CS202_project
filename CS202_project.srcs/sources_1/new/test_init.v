module ALU(
    input [31:0] ReadData1,     
    input [31:0] ReadData2,     
    input [31:0] imm32,         
    input [1:0]  ALUOp,         
    input [2:0]  funct3,        
    input [6:0]  funct7,        
    input        ALUSrc,        
    output reg [31:0] ALUResult,
    output zero                 
);
wire [31:0] operand2;
reg [3:0] ALUControl;
assign operand2 = ALUSrc ? imm32 : ReadData2;

always @(*) begin
    case(ALUOp)
        2'b00: ALUControl = 4'b0010;    // lw/sw
        2'b01: ALUControl = 4'b0110;    // beq
        2'b10: begin                   // R-type
            case(funct3)
                3'b000: 
                    ALUControl = (funct7[5] ? 4'b0110 : 4'b0010); // ADD/SUB
                3'b111: ALUControl = 4'b0000;  // AND
                3'b110: ALUControl = 4'b0001;  // OR
                default: ALUControl = 4'b0010; 
            endcase
        end
        default: ALUControl = 4'b0010; 
    endcase
end

always @(*) begin
    case(ALUControl)
        4'b0010: ALUResult = ReadData1 + operand2;   
        4'b0110: ALUResult = ReadData1 - operand2;  
        4'b0000: ALUResult = ReadData1 & operand2;  
        4'b0001: ALUResult = ReadData1 | operand2;  
        default:  ALUResult = ReadData1 + operand2; 
    endcase
end

assign zero = (ALUResult == 32'b0) ? 1'b1 : 1'b0;

endmodule