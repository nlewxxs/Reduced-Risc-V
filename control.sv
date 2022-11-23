module control #(
    parameter AW=32
) (
    input logic Eq,
    input logic [AW-1:0] instr,
    output logic RegWrite,
    output logic [2:0] ALUctrl,
    output logic ALUsrc,
    output logic [2:0] ImmSrc,
    output logic PCsrc 
);
    logic [6:0] opcode;
    
    always_comb begin
        opcode=instr[6:0];
        ALUctrl=instr[14:12];
        // ALUsrc=instr[5]? 0: 1;
        case (opcode)
            7'd19: begin //store inst
                 ImmSrc=3'b000;
                 RegWrite=1'b1;
                 PCsrc=1'b0;
                 ALUsrc=1'b1;
                end
            7'd99:begin //jump instr
                ImmSrc=3'b001;
                RegWrite=1'b0;
                PCsrc=Eq?1'b0:1'b1;
                ALUsrc=1'b0;
            end
         default: begin
            ImmSrc=3'b000;
            RegWrite=1'b0;
            PCsrc=1'b0;
        end
            
        endcase




    end
     



    
endmodule
