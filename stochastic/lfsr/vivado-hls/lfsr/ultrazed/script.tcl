############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lfsr
set_top simple_lfsr_next_random_bits
add_files ../src/cpp/simple_lfsr_tb.cpp
add_files ../src/cpp/simple_lfsr.h
add_files -tb ../src/cpp/simple_lfsr_tb.cpp
open_solution "ultrazed"
set_part {xczu3eg-sfva625-1-i-es1} -tool vivado
create_clock -period 10 -name default
source "./lfsr/ultrazed/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
