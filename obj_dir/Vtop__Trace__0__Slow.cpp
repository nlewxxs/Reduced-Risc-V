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
    tracep->declBit(c+44,"clk", false,-1);
    tracep->declBit(c+45,"rst", false,-1);
    tracep->declBus(c+46,"a0out", false,-1, 31,0);
    tracep->declBus(c+47,"InstructionWire", false,-1, 31,0);
    tracep->declBus(c+48,"ImmOpWire", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+57,"DW", false,-1, 31,0);
    tracep->declBit(c+44,"clk", false,-1);
    tracep->declBit(c+45,"rst", false,-1);
    tracep->declBus(c+46,"a0out", false,-1, 31,0);
    tracep->declBus(c+47,"InstructionWire", false,-1, 31,0);
    tracep->declBus(c+48,"ImmOpWire", false,-1, 31,0);
    tracep->declBit(c+37,"PCsrsWire", false,-1);
    tracep->declBus(c+1,"PCWire", false,-1, 31,0);
    tracep->declBus(c+38,"ALUoutWire", false,-1, 31,0);
    tracep->declBus(c+2,"RD1Wire", false,-1, 31,0);
    tracep->declBus(c+49,"RD2Wire", false,-1, 31,0);
    tracep->declBit(c+50,"EQWire", false,-1);
    tracep->declBit(c+39,"RegWriteWire", false,-1);
    tracep->declBit(c+40,"ALUsrcWire", false,-1);
    tracep->declBus(c+51,"ALUctrlWire", false,-1, 2,0);
    tracep->declBus(c+41,"ImmSrcWire", false,-1, 2,0);
    tracep->declBus(c+52,"rs1", false,-1, 4,0);
    tracep->declBus(c+53,"rs2", false,-1, 4,0);
    tracep->declBus(c+54,"rd", false,-1, 4,0);
    tracep->pushNamePrefix("PC ");
    tracep->declBus(c+57,"DW", false,-1, 31,0);
    tracep->declBit(c+44,"clk", false,-1);
    tracep->declBit(c+45,"rst", false,-1);
    tracep->declBit(c+37,"PCsrc", false,-1);
    tracep->declBus(c+48,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+1,"PCC", false,-1, 31,0);
    tracep->declBus(c+3,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+55,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+56,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ROM ");
    tracep->declBus(c+58,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+57,"INS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4,"A", false,-1, 7,0);
    tracep->declBus(c+47,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFile ");
    tracep->declBus(c+59,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+57,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+44,"clk", false,-1);
    tracep->declBus(c+52,"AD1", false,-1, 4,0);
    tracep->declBus(c+53,"AD2", false,-1, 4,0);
    tracep->declBus(c+54,"AD3", false,-1, 4,0);
    tracep->declBit(c+39,"WE3", false,-1);
    tracep->declBus(c+38,"WD3", false,-1, 31,0);
    tracep->declBus(c+2,"RD1", false,-1, 31,0);
    tracep->declBus(c+49,"RD2", false,-1, 31,0);
    tracep->declBus(c+46,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+5+i*1,"register_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluCPU ");
    tracep->declBus(c+57,"DATAWIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+51,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+40,"ALUsrc", false,-1);
    tracep->declBus(c+49,"regOp2", false,-1, 31,0);
    tracep->declBus(c+48,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+38,"ALUout", false,-1, 31,0);
    tracep->declBit(c+50,"Eq", false,-1);
    tracep->declBus(c+42,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+57,"AW", false,-1, 31,0);
    tracep->declBit(c+50,"Eq", false,-1);
    tracep->declBus(c+47,"instr", false,-1, 31,0);
    tracep->declBit(c+39,"RegWrite", false,-1);
    tracep->declBus(c+51,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+40,"ALUsrc", false,-1);
    tracep->declBus(c+41,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+37,"PCsrc", false,-1);
    tracep->declBus(c+43,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("extend ");
    tracep->declBus(c+60,"IMMSRC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+57,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"imm_length", false,-1, 31,0);
    tracep->declBus(c+47,"instr", false,-1, 31,0);
    tracep->declBus(c+41,"immsrc", false,-1, 2,0);
    tracep->declBus(c+48,"immop", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__PCWire),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__RD1Wire),32);
    bufp->fullIData(oldp+3,(((IData)(4U) + vlSelf->top__DOT__PCWire)),32);
    bufp->fullCData(oldp+4,((0xffU & vlSelf->top__DOT__PCWire)),8);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__RegFile__DOT__register_array[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__RegFile__DOT__register_array[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__RegFile__DOT__register_array[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__RegFile__DOT__register_array[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__RegFile__DOT__register_array[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__RegFile__DOT__register_array[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__RegFile__DOT__register_array[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__RegFile__DOT__register_array[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__RegFile__DOT__register_array[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__RegFile__DOT__register_array[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__RegFile__DOT__register_array[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__RegFile__DOT__register_array[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__RegFile__DOT__register_array[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__RegFile__DOT__register_array[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__RegFile__DOT__register_array[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__RegFile__DOT__register_array[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__RegFile__DOT__register_array[16]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__RegFile__DOT__register_array[17]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__RegFile__DOT__register_array[18]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__RegFile__DOT__register_array[19]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__RegFile__DOT__register_array[20]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__RegFile__DOT__register_array[21]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__RegFile__DOT__register_array[22]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__RegFile__DOT__register_array[23]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__RegFile__DOT__register_array[24]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__RegFile__DOT__register_array[25]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__RegFile__DOT__register_array[26]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__RegFile__DOT__register_array[27]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__RegFile__DOT__register_array[28]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__RegFile__DOT__register_array[29]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__RegFile__DOT__register_array[30]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__RegFile__DOT__register_array[31]),32);
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__PCsrsWire));
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__ALUoutWire),32);
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__RegWriteWire));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__ALUsrcWire));
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__ImmSrcWire),3);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__aluCPU__DOT__ALUop2),32);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__control__DOT__opcode),7);
    bufp->fullBit(oldp+44,(vlSelf->clk));
    bufp->fullBit(oldp+45,(vlSelf->rst));
    bufp->fullIData(oldp+46,(vlSelf->a0out),32);
    bufp->fullIData(oldp+47,(vlSelf->InstructionWire),32);
    bufp->fullIData(oldp+48,(vlSelf->ImmOpWire),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__RegFile__DOT__register_array
                             [(0x1fU & (vlSelf->InstructionWire 
                                        >> 0x14U))]),32);
    bufp->fullBit(oldp+50,((vlSelf->top__DOT__RD1Wire 
                            == vlSelf->top__DOT__aluCPU__DOT__ALUop2)));
    bufp->fullCData(oldp+51,((7U & (vlSelf->InstructionWire 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+52,((0x1fU & (vlSelf->InstructionWire 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->InstructionWire 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->InstructionWire 
                                       >> 7U))),5);
    bufp->fullIData(oldp+55,((vlSelf->top__DOT__PCWire 
                              + vlSelf->ImmOpWire)),32);
    bufp->fullIData(oldp+56,(((IData)(vlSelf->top__DOT__PCsrsWire)
                               ? (vlSelf->top__DOT__PCWire 
                                  + vlSelf->ImmOpWire)
                               : ((IData)(4U) + vlSelf->top__DOT__PCWire))),32);
    bufp->fullIData(oldp+57,(0x20U),32);
    bufp->fullIData(oldp+58,(8U),32);
    bufp->fullIData(oldp+59,(5U),32);
    bufp->fullIData(oldp+60,(3U),32);
    bufp->fullIData(oldp+61,(0xcU),32);
}
