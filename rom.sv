module rom #(
    parameter   ADDRESS_WIDTH = 32,
                DATA_WIDTH = 8
)(
    input logic     [ADDRESS_WIDTH-1:0]         a,
    output logic    [ADDRESS_WIDTH-1:0]         rd
);
// 28 bytes
logic [DATA_WIDTH-1:0] rom_array [27:0];

initial begin
    $display("Loading rom.");
    $readmemh("example_rom.mem", rom_array);
end

always_comb begin
    //output is asynchronous
    rd = {{rom_array[a]},{rom_array[a+1]},{rom_array[a+2]},{rom_array[a+3]}};
end
endmodule
