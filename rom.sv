module rom #(
    parameter   ADDRESS_WIDTH = 8,
                DATA_WIDTH = 8
)(
    input logic     [ADDRESS_WIDTH-1:0]         a,
    output logic    [ADDRESS_WIDTH-1:0]         rd
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
    $display("Loading rom.");
    $readmemh("example_rom.mem", rom_array);
end

always_comb begin
    //output is asynchronous
    rd <= rom_array[a];
end
endmodule