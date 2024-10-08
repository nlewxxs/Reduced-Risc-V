// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"rst", false,-1);
    tracep->declBus(c+75,"a0out", false,-1, 31,0);
    tracep->declBus(c+76,"InstructionWire", false,-1, 31,0);
    tracep->declBus(c+77,"ImmOpWire", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+86,"DW", false,-1, 31,0);
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"rst", false,-1);
    tracep->declBus(c+75,"a0out", false,-1, 31,0);
    tracep->declBus(c+76,"InstructionWire", false,-1, 31,0);
    tracep->declBus(c+77,"ImmOpWire", false,-1, 31,0);
    tracep->declBit(c+64,"PCsrsWire", false,-1);
    tracep->declBus(c+29,"PCWire", false,-1, 31,0);
    tracep->declBus(c+65,"ALUoutWire", false,-1, 31,0);
    tracep->declBus(c+30,"RD1Wire", false,-1, 31,0);
    tracep->declBus(c+78,"RD2Wire", false,-1, 31,0);
    tracep->declBit(c+79,"EQWire", false,-1);
    tracep->declBit(c+66,"RegWriteWire", false,-1);
    tracep->declBit(c+67,"ALUsrcWire", false,-1);
    tracep->declBus(c+80,"ALUctrlWire", false,-1, 2,0);
    tracep->declBus(c+68,"ImmSrcWire", false,-1, 2,0);
    tracep->declBus(c+81,"rs1", false,-1, 4,0);
    tracep->declBus(c+82,"rs2", false,-1, 4,0);
    tracep->declBus(c+83,"rd", false,-1, 4,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+86,"DW", false,-1, 31,0);
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBit(c+74,"rst", false,-1);
    tracep->declBit(c+64,"PCsrc", false,-1);
    tracep->declBus(c+77,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+29,"PCC", false,-1, 31,0);
    tracep->declBus(c+31,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+84,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+85,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFile ");
    tracep->declBus(c+87,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+73,"clk", false,-1);
    tracep->declBus(c+81,"AD1", false,-1, 4,0);
    tracep->declBus(c+82,"AD2", false,-1, 4,0);
    tracep->declBus(c+83,"AD3", false,-1, 4,0);
    tracep->declBit(c+66,"WE3", false,-1);
    tracep->declBus(c+65,"WD3", false,-1, 31,0);
    tracep->declBus(c+30,"RD1", false,-1, 31,0);
    tracep->declBus(c+78,"RD2", false,-1, 31,0);
    tracep->declBus(c+75,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+32+i*1,"register_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluCPU ");
    tracep->declBus(c+86,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+30,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+80,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+67,"ALUsrc", false,-1);
    tracep->declBus(c+78,"regOp2", false,-1, 31,0);
    tracep->declBus(c+77,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+65,"ALUout", false,-1, 31,0);
    tracep->declBit(c+79,"Eq", false,-1);
    tracep->declBus(c+69,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+86,"AW", false,-1, 31,0);
    tracep->declBit(c+79,"Eq", false,-1);
    tracep->declBus(c+76,"instr", false,-1, 31,0);
    tracep->declBit(c+66,"RegWrite", false,-1);
    tracep->declBus(c+80,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+67,"ALUsrc", false,-1);
    tracep->declBus(c+68,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+64,"PCsrc", false,-1);
    tracep->declBus(c+70,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("extendo ");
    tracep->declBus(c+86,"DW", false,-1, 31,0);
    tracep->declBus(c+68,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+76,"instr", false,-1, 31,0);
    tracep->declBus(c+77,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+71,"immediate", false,-1, 11,0);
    tracep->declBit(c+72,"msb", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rom ");
    tracep->declBus(c+86,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+88,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"a", false,-1, 31,0);
    tracep->declBus(c+76,"rd", false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__rom__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__rom__DOT__rom_array[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__rom__DOT__rom_array[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__rom__DOT__rom_array[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__rom__DOT__rom_array[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__rom__DOT__rom_array[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__rom__DOT__rom_array[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__rom__DOT__rom_array[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__rom__DOT__rom_array[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__rom__DOT__rom_array[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__rom__DOT__rom_array[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__rom__DOT__rom_array[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__rom__DOT__rom_array[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__rom__DOT__rom_array[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__rom__DOT__rom_array[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__rom__DOT__rom_array[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__rom__DOT__rom_array[16]),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__rom__DOT__rom_array[17]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__rom__DOT__rom_array[18]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__rom__DOT__rom_array[19]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__rom__DOT__rom_array[20]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__rom__DOT__rom_array[21]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__rom__DOT__rom_array[22]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__rom__DOT__rom_array[23]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__rom__DOT__rom_array[24]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__rom__DOT__rom_array[25]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__rom__DOT__rom_array[26]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__rom__DOT__rom_array[27]),8);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__PCWire),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__RD1Wire),32);
    bufp->fullIData(oldp+31,(((IData)(4U) + vlSelf->top__DOT__PCWire)),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__RegFile__DOT__register_array[0]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__RegFile__DOT__register_array[1]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__RegFile__DOT__register_array[2]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__RegFile__DOT__register_array[3]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__RegFile__DOT__register_array[4]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__RegFile__DOT__register_array[5]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__RegFile__DOT__register_array[6]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__RegFile__DOT__register_array[7]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__RegFile__DOT__register_array[8]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__RegFile__DOT__register_array[9]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__RegFile__DOT__register_array[10]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__RegFile__DOT__register_array[11]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__RegFile__DOT__register_array[12]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__RegFile__DOT__register_array[13]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__RegFile__DOT__register_array[14]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__RegFile__DOT__register_array[15]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__RegFile__DOT__register_array[16]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__RegFile__DOT__register_array[17]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__RegFile__DOT__register_array[18]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__RegFile__DOT__register_array[19]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__RegFile__DOT__register_array[20]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__RegFile__DOT__register_array[21]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__RegFile__DOT__register_array[22]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__RegFile__DOT__register_array[23]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__RegFile__DOT__register_array[24]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__RegFile__DOT__register_array[25]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__RegFile__DOT__register_array[26]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__RegFile__DOT__register_array[27]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__RegFile__DOT__register_array[28]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__RegFile__DOT__register_array[29]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__RegFile__DOT__register_array[30]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__RegFile__DOT__register_array[31]),32);
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__PCsrsWire));
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__ALUoutWire),32);
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__RegWriteWire));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__ALUsrcWire));
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__ImmSrcWire),3);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__aluCPU__DOT__ALUop2),32);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__control__DOT__opcode),7);
    bufp->fullSData(oldp+71,(vlSelf->top__DOT__extendo__DOT__immediate),12);
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__extendo__DOT__msb));
    bufp->fullBit(oldp+73,(vlSelf->clk));
    bufp->fullBit(oldp+74,(vlSelf->rst));
    bufp->fullIData(oldp+75,(vlSelf->a0out),32);
    bufp->fullIData(oldp+76,(vlSelf->InstructionWire),32);
    bufp->fullIData(oldp+77,(vlSelf->ImmOpWire),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__RegFile__DOT__register_array
                             [(0x1fU & (vlSelf->InstructionWire 
                                        >> 0x14U))]),32);
    bufp->fullBit(oldp+79,((vlSelf->top__DOT__RD1Wire 
                            == vlSelf->top__DOT__aluCPU__DOT__ALUop2)));
    bufp->fullCData(oldp+80,((7U & (vlSelf->InstructionWire 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+81,((0x1fU & (vlSelf->InstructionWire 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+82,((0x1fU & (vlSelf->InstructionWire 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+83,((0x1fU & (vlSelf->InstructionWire 
                                       >> 7U))),5);
    bufp->fullIData(oldp+84,((vlSelf->top__DOT__PCWire 
                              + vlSelf->ImmOpWire)),32);
    bufp->fullIData(oldp+85,(((IData)(vlSelf->top__DOT__PCsrsWire)
                               ? (vlSelf->top__DOT__PCWire 
                                  + vlSelf->ImmOpWire)
                               : ((IData)(4U) + vlSelf->top__DOT__PCWire))),32);
    bufp->fullIData(oldp+86,(0x20U),32);
    bufp->fullIData(oldp+87,(5U),32);
    bufp->fullIData(oldp+88,(8U),32);
}
