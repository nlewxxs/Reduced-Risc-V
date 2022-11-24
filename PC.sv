module PC #(
    DW=32

) (
    input logic     clk,
    input logic     rst,
    input logic     PCsrc,
    input logic   [DW-1:0]  ImmOp,
    output logic  [DW-1:0]  PCC
);
    
    logic [DW-1:0] inc_PC;
    logic [DW-1:0] branch_PC;
    logic [DW-1:0] next_PC;

    assign branch_PC = PCC+ImmOp;
    assign inc_PC=PCC+4;
    assign next_PC=PCsrc ? branch_PC : inc_PC;
   
    always_comb begin
        
    end

    always_ff @(posedge clk ) begin
        // $display("PC= ",PCC);
        if (rst) PCC<=32'b0;
        else PCC<=next_PC;
    end

endmodule 
