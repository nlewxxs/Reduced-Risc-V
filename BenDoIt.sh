#!/bin/bash

#cleanup
rm -rf obj_dir
rm -f sm.vcd

#run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace top.sv --exe top_tb.cpp

#build c++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vtop.mk Vtop

#run executable sim file
obj_dir/Vtop
