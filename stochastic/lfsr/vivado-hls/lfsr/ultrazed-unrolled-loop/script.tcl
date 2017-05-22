############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lfsr
set_top next_byte
add_files ../src/cpp/simple_lfsr.cpp
add_files -tb ../src/cpp/simple_lfsr.cpp
open_solution "ultrazed-unrolled-loop"
set_part {xczu3eg-sfva625-1-i-es1}
create_clock -period 10 -name default
source "./lfsr/ultrazed-unrolled-loop/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
