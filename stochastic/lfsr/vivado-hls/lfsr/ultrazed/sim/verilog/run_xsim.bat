
call C:/Xilinx/Vivado/2016.4/bin/xelab xil_defaultlib.apatb_simple_lfsr_next_random_bits_top -prj simple_lfsr_next_random_bits.prj --initfile "C:/Xilinx/Vivado/2016.4/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s simple_lfsr_next_random_bits 
call C:/Xilinx/Vivado/2016.4/bin/xsim --noieeewarnings simple_lfsr_next_random_bits -tclbatch simple_lfsr_next_random_bits.tcl

