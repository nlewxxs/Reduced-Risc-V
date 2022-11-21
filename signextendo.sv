module signextendo #(
    DW=32
) (
    input logic[2:0] ImmSrc,
    input logic [DW-1:0] instr,
    output logic [DW-1:0] ImmOp
);
    logic [11:0] immediate;
    logic msb;
    always_comb begin
        case (ImmSrc)
        3'b000:begin //imm in bit[31:20] of inst
            immediate=instr[31:20];
            msb=immediate[11];
            ImmOp={{5'd20{msb}},{immediate[11:0]}};
        end
        3'b001:begin
            immediate={instr[31],instr[7],instr[30:25],instr[11:8]};
            msb=immediate[11];
            ImmOp={{5'd20{msb}},{immediate[11:0]}};
        end
        default:begin
            ImmOp=0;
        end
        endcase
    end
    
endmodule
