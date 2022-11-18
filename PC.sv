module PCReg #(
    AW=32,

) (
    input logic     clk,
    input logic     rst,
    input logic     PCsrc,
    input logic   [AW-1:0]  ImmOp,
    output logic  [AW-1:0]  PC
);
    
    logic [AW-1:0] inc_PC;
    logic [AW-1:0] branch_PC;
    logic [AW-1:0] next_PC;
    assign branch_PC = PC+ImmOp;
    assign inc_PC=PC+4;
    assign next_PC=PCsrc ? branch_PC : inc_PC;

    always_ff @(posedge clk ) begin
        if (rst) PC<=32'b0;
        else PC<=next_PC;
    end

endmodule 