module top #(
    parameter DW=32
) (
    input logic clk,
    input logic rst,
    output logic [DW-1:0] a0out,
    output logic [DW-1:0] InstructionWire,
    output logic [DW-1:0] ImmOpWire 
);

    logic PCsrsWire;
    
    logic [DW-1:0] PCWire;
    
    logic [DW-1:0] ALUoutWire;
    logic [DW-1:0] RD1Wire;
    logic [DW-1:0] RD2Wire;
    logic EQWire;
    logic RegWriteWire;
    logic ALUsrcWire;
    logic [2:0] ALUctrlWire;
    logic [2:0] ImmSrcWire;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] rd;
    
    PC PC(
        .clk(clk),
        .rst(rst),
        .PCsrc(PCsrsWire),
        .ImmOp(ImmOpWire),
        .PCC(PCWire)
    );
    
    romF romF(
        .a(PCWire),
        
        .rd(InstructionWire)
    );
   
    assign rs1 = InstructionWire[19:15];
    assign rs2 = InstructionWire[24:20];
    assign rd = InstructionWire[11:7];
    
    control control(
        .Eq(EQWire),
        .instr(InstructionWire),
        .RegWrite(RegWriteWire),
        .ALUctrl(ALUctrlWire),
        .ALUsrc(ALUsrcWire),
        .ImmSrc(ImmSrcWire),
        .PCsrc(PCsrsWire)
    );

    register_file RegFile(
        .clk(clk),
        .AD1(rs1),
        .AD2(rs2),
        .AD3(rd),
        .WE3(RegWriteWire),
        .WD3(ALUoutWire),

        .a0(a0out),
        .RD1(RD1Wire),
        .RD2(RD2Wire)
    );
    signextendo extendo(
        .instr(InstructionWire),
        .ImmSrc(ImmSrcWire),

        .ImmOp(ImmOpWire)
    );
    ALU aluCPU(
        .ALUop1(RD1Wire),
        .ALUctrl(ALUctrlWire),
        .ALUsrc(ALUsrcWire),
        .regOp2(RD2Wire), //register
        .ImmOp(ImmOpWire), //immediate comparison done inside alu

        .ALUout(ALUoutWire),
        .Eq(EQWire)
    );
    

    
endmodule
