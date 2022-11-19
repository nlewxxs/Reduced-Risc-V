module sign_extend #(
    parameter IMMSRC_WIDTH = 3,
            DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0]        instr, // input instruction to extract immediate from 
    input logic [IMMSRC_WIDTH-1:0]      immsrc, // determines what type of immediate
    output logic [DATA_WIDTH-1:0]       immop // ImmOp, 32bits wide regardless
);

logic int imm_length = 12;
logic int upper_imm_length = DATA_WIDTH - imm_length; // vars to store imm length, easier than using DATA_WIDTH-X everywhere

always_comb begin
    //asynchronous
    case (immsrc)
        000:    immop = {{upper_imm_length{instr[DATA_WIDTH-1]}}, instr[DATA_WIDTH-1:upper_imm_length]};
                // regular immediate
                // 20*MSB concatenated with the 12-bit immediate
        001:    immop = {{imm_length{instr[DATA_WIDTH-1]}}, instr[DATA_WIDTH-1:imm_length]};
                // upper immediate
                // 12*MSB concatenated with the 20-bit immediate

                //TODO: Is the +1 for 32bit constants being considered here or in the ALU??

        010:    immop = {{12{instr[DATA_WIDTH-1]}}, instr[31:25], instr[11:7]};
                // store | load

        011:    immop = {{12{instr[DATA_WIDTH-1]}}, instr[31], instr[11], instr[30:25], instr[11:8]};
                // branch
    
        // 100: jump case, ignoring for now
        default: immop = DATA_WIDTH'b0;
    endcase
end
    
endmodule
