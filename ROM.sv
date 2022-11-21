module ROM #(
    parameter DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0]   A,
    output logic [DATA_WIDTH-1:0]  dout1
);

logic [7:0] rom_array [30:0];

initial begin
    $display("Loading rom.");
    $readmemh("example_rom.mem", rom_array);
    $display("done loading rom.");
    $display(rom_array[27]);
end

always_comb begin
    //output is asynchronous
    assign dout1 = {{rom_array[A]}, {rom_array[A+1]}, {rom_array[A+2]}, {rom_array[A+3]}}; 
end
endmodule
