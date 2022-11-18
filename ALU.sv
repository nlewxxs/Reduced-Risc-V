module ALU #(
    PARAMETER DATAWIDTH = 32
)(
    input logic [DATAWIDTH-1:0]         ALUop1,
    // input logic [DATAWIDTH-1:0]         ALUop2,
    input logic [2:0]                   ALUctrl,
    input logic                         ALUsrc,
    input logic [DATAWIDTH-1:0]         regOp2,
    input logic [DATAWIDTH-1:0]         ImmOp

    output logic [DATAWIDTH-1:0]        ALUout,
    output logic                        EQ
);

logic ALUop2 [DATAWIDTH-1:0] ;
assign ALUop2= ALUsrc ? ImmOp : regOp2;
always_comb begin
    case (ALUctrl)
        3'b000      : ALUout = ALUop1 + ALUop2;
        3'b001      : ALUout = ALUop1 - ALUop2;
        3'b010      : ALUout = ALUop1 & ALUop2;
        3'b011      : ALUout = ALUop1 | ALUop2;
        3'b101      : ALUout = ALUop1 + ALUop2; //check how to inmplement SLT, TODO
        default: begin
            ALUout = 0;
        end
    endcase
end

always_comb begin
    if (ALUop1 == ALUop2) begin
        EQ = 1;
    end
    else begin
        EQ = 0;
    end
end

endmodule 
