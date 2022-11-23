module ROM #(
    parameter   ADDRESS_WIDTH = 8,
                DATA_WIDTH = 8,
                INS_WIDTH = 32
)(
    input logic     [ADDRESS_WIDTH-1:0]         A,
    output logic    [INS_WIDTH-1:0]             RD
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
    $display("Loading rom.");
    $readmemh("example_rom.mem", rom_array);
end

always_comb begin
    //output is asynchronous
    RD = {rom_array[A], rom_array[A+1], rom_array[A+2], rom_array[A+3]}; //move along each word

    $display("next Cycle");
    $displayh({rom_array[A], rom_array[A+1], rom_array[A+2], rom_array[A+3]});
    $display(A);
end

endmodule
