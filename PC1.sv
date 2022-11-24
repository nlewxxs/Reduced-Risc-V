module PC #(
    WIDTH=32

) (
    input logic     clk,
    input logic     rst,
    input logic     PCsrc,
    input logic   [WIDTH-1:0]  ImmOp,
    output logic  [WIDTH-1:0]  PCC
);
    logic [WIDTH-1:0] next_PC;
    logic [WIDTH-1:0] inc_PC;
    logic [WIDTH-1:0] branch_PC;

    always_comb begin

    branch_PC = ImmOp + PCC;
    inc_PC=PCC+4;
    next_PC=PCsrc ? branch_PC : inc_PC;

    end
    
    always_ff @(posedge clk ) begin
        if (rst) PCC<=32'b0;
        else PCC<=next_PC;
    end


endmodule 