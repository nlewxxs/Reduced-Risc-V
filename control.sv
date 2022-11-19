module control#(
    parameter INSTRUCTION_WIDTH = 32
)(
    input logic [INSTRUCTION_WIDTH-1:0]     instr,      // the instruction
    input logic                             eq,         // equal flag used for BNE 
    output logic                            regwrite,   // register write enable 
    output logic [2:0]                      aluctrl,    // alu opcode
    output logic                            alusrc,     // selects between reg and imm
    output logic [IMMSRC_WIDTH-1:0]         immsrc,     // sign extend control
    output logic                            pcsrc       // branch  
);

always_comb begin
    case ({instr[6:0], instr[14:12]})

        10'b0010011000:     immsrc = 3'b0;
                            aluctrl = 3'b0;
                            alusrc = 1'b1;
                            pcsrc = 1'b0;
                            regwrite = 1'b1;

        10'b1100011001:     alusrc = 1'b0;
                            regwrite = 1'b0;
                            if (eq) begin // check aluop1 and aluop2 were equal in previous clk cycle
                                pcsrc = 1'b1;
                            end
                            else begin
                                pcsrc = 1'b0;
                            end
                            // don't need to worry about the others for this case

        default:    pcsrc = 1'b0;
                    regwrite = 1'b0;
                    alusrc = 1'b0; // just in case
    endcase
    
endmodule
