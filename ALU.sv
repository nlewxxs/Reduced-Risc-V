module ALU #(
    parameter DATAWIDTH = 32
)(
    input logic [DATAWIDTH-1:0]         ALUop1,
    input logic [2:0]                   ALUctrl,
    input logic                         ALUsrc,
    input logic [DATAWIDTH-1:0]         regOp2,
    input logic [DATAWIDTH-1:0]         ImmOp,
    // input logic clk,

    output logic [DATAWIDTH-1:0]        ALUout,
    output logic Eq
);

    logic [DATAWIDTH-1:0] ALUop2;
     
always_comb begin
    ALUop2 = ALUsrc ? ImmOp : regOp2;
    case (ALUctrl)
        3'b000: ALUout = ALUop1 + ALUop2;
        3'b001: ALUout= 32'b0;
        3'b010: ALUout= 32'b0;
        3'b011: ALUout= 32'b0;
        3'b100: ALUout= 32'b0;
        3'b101: ALUout= 32'b0;
        3'b110: ALUout= 32'b0;
        default: ALUout = 0;
    endcase
    
end
assign Eq = (ALUop1==ALUop2);
// always_ff @(posedge clk) begin
//     $display("aluop1: ",ALUop1);
//     $display("aluop2: ",ALUop2);
//     $display("eq : ",Eq);
// end


endmodule 
