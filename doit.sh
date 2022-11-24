#1/bin/sh
rm -rf ob_dir 
rm -f sm.vcd
verilator -Wall --cc --trace top.sv --exe top_tb.cpp
make -j -C obj_dir/ -f Vtop.mk Vtop
obj_dir/Vtop