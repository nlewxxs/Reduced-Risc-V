// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ top__DOT__PCsrsWire;
    CData/*0:0*/ top__DOT__RegWriteWire;
    CData/*0:0*/ top__DOT__ALUsrcWire;
    CData/*2:0*/ top__DOT__ImmSrcWire;
    CData/*6:0*/ top__DOT__control__DOT__opcode;
    CData/*0:0*/ top__DOT__extendo__DOT__msb;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*11:0*/ top__DOT__extendo__DOT__immediate;
    VL_OUT(a0out,31,0);
    VL_OUT(InstructionWire,31,0);
    VL_OUT(ImmOpWire,31,0);
    IData/*31:0*/ top__DOT__PCWire;
    IData/*31:0*/ top__DOT__ALUoutWire;
    IData/*31:0*/ top__DOT__RD1Wire;
    IData/*31:0*/ top__DOT__PC__DOT__next_PC;
    IData/*31:0*/ top__DOT__RegFile__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__aluCPU__DOT__ALUop2;
    IData/*31:0*/ __Vchglast__TOP__top__DOT__aluCPU__DOT__ALUop2;
    VlUnpacked<CData/*7:0*/, 31> top__DOT__ROM__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__RegFile__DOT__register_array;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
