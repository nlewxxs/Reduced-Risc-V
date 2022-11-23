module data_memory #(
    PARAMETER       ADDRESS_WIDTH = 32,
                    DATA_WIDTH = 32
)(
    input logic [ADDRESS_WIDTH-1:0]         A,
    input logic [DATA_WIDTH-1:0]            WD,
    input logic                             CLK,
    input logic                             WE,

    output logic [DATA_WIDTH-1:0]           RD
);

logic [DATA_WIDTH-1:0] data_array [2**ADDRESS_WIDTH-1:0];

always_ff @(negedge CLK) begin
    if(WE) data_array[A] <= RD;
end

assign data_array[A] = RD;

endmodule