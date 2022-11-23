// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__PCWire),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__RD1Wire),32);
        bufp->chgIData(oldp+2,(((IData)(4U) + vlSelf->top__DOT__PCWire)),32);
        bufp->chgCData(oldp+3,((0xffU & vlSelf->top__DOT__PCWire)),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__ROM__DOT__rom_array
                               [(0xffU & vlSelf->top__DOT__PCWire)]),8);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__RegFile__DOT__register_array[0]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__RegFile__DOT__register_array[1]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__RegFile__DOT__register_array[2]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__RegFile__DOT__register_array[3]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__RegFile__DOT__register_array[4]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__RegFile__DOT__register_array[5]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__RegFile__DOT__register_array[6]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__RegFile__DOT__register_array[7]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__RegFile__DOT__register_array[8]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__RegFile__DOT__register_array[9]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__RegFile__DOT__register_array[10]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__RegFile__DOT__register_array[11]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__RegFile__DOT__register_array[12]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__RegFile__DOT__register_array[13]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__RegFile__DOT__register_array[14]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__RegFile__DOT__register_array[15]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__RegFile__DOT__register_array[16]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__RegFile__DOT__register_array[17]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__RegFile__DOT__register_array[18]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__RegFile__DOT__register_array[19]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__RegFile__DOT__register_array[20]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__RegFile__DOT__register_array[21]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__RegFile__DOT__register_array[22]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__RegFile__DOT__register_array[23]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__RegFile__DOT__register_array[24]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__RegFile__DOT__register_array[25]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__RegFile__DOT__register_array[26]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__RegFile__DOT__register_array[27]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__RegFile__DOT__register_array[28]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__RegFile__DOT__register_array[29]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__RegFile__DOT__register_array[30]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__RegFile__DOT__register_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__PCsrsWire));
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__ALUoutWire),32);
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__RegWriteWire));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__ALUsrcWire));
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__ImmSrcWire),3);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__aluCPU__DOT__ALUop2),32);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__control__DOT__opcode),7);
        bufp->chgSData(oldp+44,(vlSelf->top__DOT__extendo__DOT__immediate),12);
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__extendo__DOT__msb));
    }
    bufp->chgBit(oldp+46,(vlSelf->clk));
    bufp->chgBit(oldp+47,(vlSelf->rst));
    bufp->chgIData(oldp+48,(vlSelf->a0out),32);
    bufp->chgIData(oldp+49,(vlSelf->InstructionWire),32);
    bufp->chgIData(oldp+50,(vlSelf->ImmOpWire),32);
    bufp->chgIData(oldp+51,(vlSelf->top__DOT__RegFile__DOT__register_array
                            [(0x1fU & (vlSelf->InstructionWire 
                                       >> 0x14U))]),32);
    bufp->chgBit(oldp+52,((vlSelf->top__DOT__RD1Wire 
                           == vlSelf->top__DOT__aluCPU__DOT__ALUop2)));
    bufp->chgCData(oldp+53,((7U & (vlSelf->InstructionWire 
                                   >> 0xcU))),3);
    bufp->chgCData(oldp+54,((0x1fU & (vlSelf->InstructionWire 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+55,((0x1fU & (vlSelf->InstructionWire 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+56,((0x1fU & (vlSelf->InstructionWire 
                                      >> 7U))),5);
    bufp->chgIData(oldp+57,((vlSelf->top__DOT__PCWire 
                             + vlSelf->ImmOpWire)),32);
    bufp->chgIData(oldp+58,(((IData)(vlSelf->top__DOT__PCsrsWire)
                              ? (vlSelf->top__DOT__PCWire 
                                 + vlSelf->ImmOpWire)
                              : ((IData)(4U) + vlSelf->top__DOT__PCWire))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
