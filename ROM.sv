module ROM #(
    parameter   ADDRESS_WIDTH = 8,
                DATA_WIDTH = 8
)(
    input logic     [ADDRESS_WIDTH-1:0]         A,
    output logic    [ADDRESS_WIDTH-1:0]         RD
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
    $display("Loading rom.");
    $readmemh("example_rom.mem", rom_array);
end

always_comb begin
    //output is asynchronous
    RD = rom_array[A];
end
endmodule
