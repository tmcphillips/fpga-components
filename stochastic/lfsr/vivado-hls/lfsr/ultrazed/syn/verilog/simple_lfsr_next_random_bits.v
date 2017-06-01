// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="simple_lfsr_next_random_bits,hls_ip_2016_4,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xczu3eg-sfva625-1-i-es1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=1.235000,HLS_SYN_LAT=9,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=38,HLS_SYN_LUT=14}" *)

module simple_lfsr_next_random_bits (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        ap_return
);

parameter    ap_ST_fsm_state1 = 2'b1;
parameter    ap_ST_fsm_state2 = 2'b10;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv4_0 = 4'b0000;
parameter    ap_const_lv4_8 = 4'b1000;
parameter    ap_const_lv4_1 = 4'b1;
parameter    ap_const_lv32_1F = 32'b11111;
parameter    ap_const_lv32_1D = 32'b11101;
parameter    ap_const_lv32_19 = 32'b11001;
parameter    ap_const_lv32_18 = 32'b11000;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire   [0:0] ap_CS_fsm_state1;
reg   [31:0] r;
wire   [3:0] i_fu_57_p2;
wire   [0:0] ap_CS_fsm_state2;
reg   [3:0] i_i_reg_36;
wire   [0:0] exitcond_i_fu_51_p2;
wire   [31:0] tmp_8_i_fu_117_p3;
wire   [0:0] tmp_2_fu_63_p3;
wire   [0:0] tmp_3_fu_71_p3;
wire   [0:0] tmp_4_fu_79_p3;
wire   [0:0] tmp_5_fu_87_p3;
wire   [0:0] tmp1_fu_101_p2;
wire   [0:0] tmp_fu_95_p2;
wire   [30:0] tmp_6_fu_113_p1;
wire   [0:0] new_random_bit_i_fu_107_p2;
wire   [7:0] tmp_1_fu_131_p1;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'b1;
#0 r = 32'b11000101011100000101101000011001;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond_i_fu_51_p2 == 1'b0))) begin
        i_i_reg_36 <= i_fu_57_p2;
    end else if (((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0))) begin
        i_i_reg_36 <= ap_const_lv4_0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond_i_fu_51_p2 == 1'b0))) begin
        r <= tmp_8_i_fu_117_p3;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & ~(exitcond_i_fu_51_p2 == 1'b0))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (ap_CS_fsm_state1 == 1'b1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & ~(exitcond_i_fu_51_p2 == 1'b0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (~(ap_start == 1'b0)) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (~(exitcond_i_fu_51_p2 == 1'b0)) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[ap_const_lv32_0];

assign ap_CS_fsm_state2 = ap_CS_fsm[ap_const_lv32_1];

assign ap_return = tmp_1_fu_131_p1;

assign exitcond_i_fu_51_p2 = ((i_i_reg_36 == ap_const_lv4_8) ? 1'b1 : 1'b0);

assign i_fu_57_p2 = (i_i_reg_36 + ap_const_lv4_1);

assign new_random_bit_i_fu_107_p2 = (tmp1_fu_101_p2 ^ tmp_fu_95_p2);

assign tmp1_fu_101_p2 = (tmp_4_fu_79_p3 ^ tmp_5_fu_87_p3);

assign tmp_1_fu_131_p1 = r[7:0];

assign tmp_2_fu_63_p3 = r[ap_const_lv32_1F];

assign tmp_3_fu_71_p3 = r[ap_const_lv32_1D];

assign tmp_4_fu_79_p3 = r[ap_const_lv32_19];

assign tmp_5_fu_87_p3 = r[ap_const_lv32_18];

assign tmp_6_fu_113_p1 = r[30:0];

assign tmp_8_i_fu_117_p3 = {{tmp_6_fu_113_p1}, {new_random_bit_i_fu_107_p2}};

assign tmp_fu_95_p2 = (tmp_2_fu_63_p3 ^ tmp_3_fu_71_p3);

endmodule //simple_lfsr_next_random_bits
