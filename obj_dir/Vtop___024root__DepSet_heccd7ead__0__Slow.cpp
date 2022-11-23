// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hb0c16d65__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_hb0c16d65__0[0U] = 0x2e6d656dU;
    __Vtemp_hb0c16d65__0[1U] = 0x5f726f6dU;
    __Vtemp_hb0c16d65__0[2U] = 0x6d706c65U;
    __Vtemp_hb0c16d65__0[3U] = 0x657861U;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hb0c16d65__0)
                 ,  &(vlSelf->top__DOT__ROM__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0out = vlSelf->top__DOT__RegFile__DOT__register_array
        [0xaU];
    VL_WRITEF("%x\n%3#\n",32,((vlSelf->top__DOT__ROM__DOT__rom_array
                               [(0xffU & vlSelf->top__DOT__PCWire)] 
                               << 0x18U) | ((vlSelf->top__DOT__ROM__DOT__rom_array
                                             [(0xffU 
                                               & ((IData)(1U) 
                                                  + vlSelf->top__DOT__PCWire))] 
                                             << 0x10U) 
                                            | ((vlSelf->top__DOT__ROM__DOT__rom_array
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->top__DOT__PCWire))] 
                                                << 8U) 
                                               | vlSelf->top__DOT__ROM__DOT__rom_array
                                               [(0xffU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->top__DOT__PCWire))]))),
              8,(0xffU & vlSelf->top__DOT__PCWire));
    vlSelf->InstructionWire = ((vlSelf->top__DOT__ROM__DOT__rom_array
                                [(0xffU & vlSelf->top__DOT__PCWire)] 
                                << 0x18U) | ((vlSelf->top__DOT__ROM__DOT__rom_array
                                              [(0xffU 
                                                & ((IData)(1U) 
                                                   + vlSelf->top__DOT__PCWire))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__ROM__DOT__rom_array
                                                 [(0xffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__PCWire))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__ROM__DOT__rom_array
                                                [(0xffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->top__DOT__PCWire))])));
    vlSelf->top__DOT__RD1Wire = vlSelf->top__DOT__RegFile__DOT__register_array
        [(0x1fU & (vlSelf->InstructionWire >> 0xfU))];
    vlSelf->top__DOT__control__DOT__opcode = (0x7fU 
                                              & vlSelf->InstructionWire);
    if ((0x13U == (IData)(vlSelf->top__DOT__control__DOT__opcode))) {
        vlSelf->top__DOT__ImmSrcWire = 0U;
        vlSelf->top__DOT__RegWriteWire = 1U;
        vlSelf->top__DOT__PCsrsWire = 0U;
        vlSelf->top__DOT__ALUsrcWire = 1U;
    } else if ((0x63U == (IData)(vlSelf->top__DOT__control__DOT__opcode))) {
        vlSelf->top__DOT__ImmSrcWire = 1U;
        vlSelf->top__DOT__RegWriteWire = 0U;
        vlSelf->top__DOT__PCsrsWire = (vlSelf->top__DOT__RD1Wire 
                                       != vlSelf->top__DOT__aluCPU__DOT__ALUop2);
        vlSelf->top__DOT__ALUsrcWire = 0U;
    } else {
        vlSelf->top__DOT__ImmSrcWire = 0U;
        vlSelf->top__DOT__RegWriteWire = 0U;
        vlSelf->top__DOT__PCsrsWire = 0U;
    }
    vlSelf->ImmOpWire = ((0U == (IData)(vlSelf->top__DOT__ImmSrcWire))
                          ? (((- (IData)((vlSelf->InstructionWire 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->InstructionWire 
                                          >> 0x14U))
                          : ((1U == (IData)(vlSelf->top__DOT__ImmSrcWire))
                              ? (((- (IData)((vlSelf->InstructionWire 
                                              >> 0x1fU))) 
                                  << 0x14U) | (vlSelf->InstructionWire 
                                               >> 0xcU))
                              : 0U));
    vlSelf->top__DOT__PC__DOT__next_PC = ((IData)(vlSelf->top__DOT__PCsrsWire)
                                           ? (vlSelf->top__DOT__PCWire 
                                              + vlSelf->ImmOpWire)
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__PCWire));
    vlSelf->top__DOT__aluCPU__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrcWire)
                                              ? vlSelf->ImmOpWire
                                              : vlSelf->top__DOT__RegFile__DOT__register_array
                                             [(0x1fU 
                                               & (vlSelf->InstructionWire 
                                                  >> 0x14U))]);
    vlSelf->top__DOT__ALUoutWire = ((0x4000U & vlSelf->InstructionWire)
                                     ? ((0x2000U & vlSelf->InstructionWire)
                                         ? ((0x1000U 
                                             & vlSelf->InstructionWire)
                                             ? 0U : 0U)
                                         : 0U) : ((0x2000U 
                                                   & vlSelf->InstructionWire)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->InstructionWire)
                                                    ? 
                                                   (vlSelf->top__DOT__RD1Wire 
                                                    | vlSelf->top__DOT__aluCPU__DOT__ALUop2)
                                                    : 
                                                   (vlSelf->top__DOT__RD1Wire 
                                                    & vlSelf->top__DOT__aluCPU__DOT__ALUop2))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->InstructionWire)
                                                    ? 
                                                   (vlSelf->top__DOT__RD1Wire 
                                                    - vlSelf->top__DOT__aluCPU__DOT__ALUop2)
                                                    : 
                                                   (vlSelf->top__DOT__RD1Wire 
                                                    + vlSelf->top__DOT__aluCPU__DOT__ALUop2))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0out = VL_RAND_RESET_I(32);
    vlSelf->InstructionWire = VL_RAND_RESET_I(32);
    vlSelf->ImmOpWire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCsrsWire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PCWire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUoutWire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD1Wire = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWriteWire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUsrcWire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrcWire = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__PC__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__ROM__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__control__DOT__opcode = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__RegFile__DOT__register_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__aluCPU__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__top__DOT__aluCPU__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
