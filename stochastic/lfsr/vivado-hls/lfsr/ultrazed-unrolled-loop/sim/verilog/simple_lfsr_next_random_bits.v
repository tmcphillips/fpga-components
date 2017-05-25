// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="simple_lfsr_next_random_bits,hls_ip_2016_4,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xczu3eg-sfva625-1-i-es1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=0.840000,HLS_SYN_LAT=0,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=33,HLS_SYN_LUT=24}" *)

module simple_lfsr_next_random_bits (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        ap_return
);

parameter    ap_ST_fsm_state1 = 1'b1;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_19 = 32'b11001;
parameter    ap_const_lv32_18 = 32'b11000;
parameter    ap_const_lv32_1D = 32'b11101;
parameter    ap_const_lv32_1F = 32'b11111;
parameter    ap_const_lv32_1C = 32'b11100;
parameter    ap_const_lv32_1E = 32'b11110;
parameter    ap_const_lv32_17 = 32'b10111;
parameter    ap_const_lv32_16 = 32'b10110;
parameter    ap_const_lv32_1B = 32'b11011;
parameter    ap_const_lv32_1A = 32'b11010;
parameter    ap_const_lv32_15 = 32'b10101;
parameter    ap_const_lv32_14 = 32'b10100;
parameter    ap_const_lv32_13 = 32'b10011;
parameter    ap_const_lv32_12 = 32'b10010;
parameter    ap_const_lv32_11 = 32'b10001;

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

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire   [0:0] ap_CS_fsm_state1;
reg   [31:0] r;
wire   [31:0] tmp_8_7_i_fu_318_p10;
wire   [0:0] tmp_9_fu_66_p3;
wire   [0:0] tmp_10_fu_74_p3;
wire   [0:0] tmp_4_fu_50_p3;
wire   [0:0] tmp_7_fu_58_p3;
wire   [0:0] tmp_1_fu_112_p2;
wire   [0:0] tmp_fu_106_p2;
wire   [0:0] tmp_11_fu_82_p3;
wire   [0:0] tmp_12_fu_90_p3;
wire   [0:0] tmp_13_fu_98_p3;
wire   [0:0] tmp4_fu_130_p2;
wire   [0:0] tmp3_fu_124_p2;
wire   [0:0] tmp_15_fu_150_p3;
wire   [0:0] tmp_14_fu_142_p3;
wire   [0:0] tmp7_fu_164_p2;
wire   [0:0] tmp6_fu_158_p2;
wire   [0:0] tmp_16_fu_176_p3;
wire   [0:0] tmp_17_fu_184_p3;
wire   [0:0] tmp1_fu_198_p2;
wire   [0:0] tmp9_fu_192_p2;
wire   [0:0] tmp_18_fu_210_p3;
wire   [0:0] tmp5_fu_224_p2;
wire   [0:0] tmp2_fu_218_p2;
wire   [0:0] tmp_19_fu_236_p3;
wire   [0:0] tmp10_fu_254_p2;
wire   [0:0] tmp8_fu_248_p2;
wire   [0:0] tmp_21_fu_266_p3;
wire   [0:0] tmp12_fu_280_p2;
wire   [0:0] tmp11_fu_274_p2;
wire   [0:0] tmp_22_fu_292_p3;
wire   [0:0] tmp14_fu_306_p2;
wire   [0:0] tmp13_fu_300_p2;
wire   [23:0] tmp_20_fu_244_p1;
wire   [0:0] tmp_2_fu_118_p2;
wire   [0:0] tmp_5_fu_136_p2;
wire   [0:0] tmp_8_fu_170_p2;
wire   [0:0] tmp_s_fu_204_p2;
wire   [0:0] tmp_3_fu_230_p2;
wire   [0:0] tmp_6_fu_260_p2;
wire   [0:0] tmp_77_i_fu_286_p2;
wire   [0:0] tmp_6_i_fu_312_p2;
wire   [7:0] tmp_8_7_i_cast_fu_340_p9;
reg   [0:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'b1;
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
    if (((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0))) begin
        r <= tmp_8_7_i_fu_318_p10;
    end
end

always @ (*) begin
    if (((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0))) begin
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
    if (((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[ap_const_lv32_0];

assign ap_return = tmp_8_7_i_cast_fu_340_p9;

assign tmp10_fu_254_p2 = (tmp_18_fu_210_p3 ^ tmp_19_fu_236_p3);

assign tmp11_fu_274_p2 = (tmp_13_fu_98_p3 ^ tmp_4_fu_50_p3);

assign tmp12_fu_280_p2 = (tmp_19_fu_236_p3 ^ tmp_21_fu_266_p3);

assign tmp13_fu_300_p2 = (tmp_14_fu_142_p3 ^ tmp_7_fu_58_p3);

assign tmp14_fu_306_p2 = (tmp_21_fu_266_p3 ^ tmp_22_fu_292_p3);

assign tmp1_fu_198_p2 = (tmp_14_fu_142_p3 ^ tmp_17_fu_184_p3);

assign tmp2_fu_218_p2 = (tmp_4_fu_50_p3 ^ tmp_15_fu_150_p3);

assign tmp3_fu_124_p2 = (tmp_11_fu_82_p3 ^ tmp_12_fu_90_p3);

assign tmp4_fu_130_p2 = (tmp_7_fu_58_p3 ^ tmp_13_fu_98_p3);

assign tmp5_fu_224_p2 = (tmp_17_fu_184_p3 ^ tmp_18_fu_210_p3);

assign tmp6_fu_158_p2 = (tmp_15_fu_150_p3 ^ tmp_9_fu_66_p3);

assign tmp7_fu_164_p2 = (tmp_13_fu_98_p3 ^ tmp_14_fu_142_p3);

assign tmp8_fu_248_p2 = (tmp_7_fu_58_p3 ^ tmp_16_fu_176_p3);

assign tmp9_fu_192_p2 = (tmp_16_fu_176_p3 ^ tmp_11_fu_82_p3);

assign tmp_10_fu_74_p3 = r[ap_const_lv32_1F];

assign tmp_11_fu_82_p3 = r[ap_const_lv32_1C];

assign tmp_12_fu_90_p3 = r[ap_const_lv32_1E];

assign tmp_13_fu_98_p3 = r[ap_const_lv32_17];

assign tmp_14_fu_142_p3 = r[ap_const_lv32_16];

assign tmp_15_fu_150_p3 = r[ap_const_lv32_1B];

assign tmp_16_fu_176_p3 = r[ap_const_lv32_1A];

assign tmp_17_fu_184_p3 = r[ap_const_lv32_15];

assign tmp_18_fu_210_p3 = r[ap_const_lv32_14];

assign tmp_19_fu_236_p3 = r[ap_const_lv32_13];

assign tmp_1_fu_112_p2 = (tmp_4_fu_50_p3 ^ tmp_7_fu_58_p3);

assign tmp_20_fu_244_p1 = r[23:0];

assign tmp_21_fu_266_p3 = r[ap_const_lv32_12];

assign tmp_22_fu_292_p3 = r[ap_const_lv32_11];

assign tmp_2_fu_118_p2 = (tmp_1_fu_112_p2 ^ tmp_fu_106_p2);

assign tmp_3_fu_230_p2 = (tmp5_fu_224_p2 ^ tmp2_fu_218_p2);

assign tmp_4_fu_50_p3 = r[ap_const_lv32_19];

assign tmp_5_fu_136_p2 = (tmp4_fu_130_p2 ^ tmp3_fu_124_p2);

assign tmp_6_fu_260_p2 = (tmp10_fu_254_p2 ^ tmp8_fu_248_p2);

assign tmp_6_i_fu_312_p2 = (tmp14_fu_306_p2 ^ tmp13_fu_300_p2);

assign tmp_77_i_fu_286_p2 = (tmp12_fu_280_p2 ^ tmp11_fu_274_p2);

assign tmp_7_fu_58_p3 = r[ap_const_lv32_18];

assign tmp_8_7_i_cast_fu_340_p9 = {{{{{{{{tmp_2_fu_118_p2}, {tmp_5_fu_136_p2}}, {tmp_8_fu_170_p2}}, {tmp_s_fu_204_p2}}, {tmp_3_fu_230_p2}}, {tmp_6_fu_260_p2}}, {tmp_77_i_fu_286_p2}}, {tmp_6_i_fu_312_p2}};

assign tmp_8_7_i_fu_318_p10 = {{{{{{{{{tmp_20_fu_244_p1}, {tmp_2_fu_118_p2}}, {tmp_5_fu_136_p2}}, {tmp_8_fu_170_p2}}, {tmp_s_fu_204_p2}}, {tmp_3_fu_230_p2}}, {tmp_6_fu_260_p2}}, {tmp_77_i_fu_286_p2}}, {tmp_6_i_fu_312_p2}};

assign tmp_8_fu_170_p2 = (tmp7_fu_164_p2 ^ tmp6_fu_158_p2);

assign tmp_9_fu_66_p3 = r[ap_const_lv32_1D];

assign tmp_fu_106_p2 = (tmp_9_fu_66_p3 ^ tmp_10_fu_74_p3);

assign tmp_s_fu_204_p2 = (tmp1_fu_198_p2 ^ tmp9_fu_192_p2);

endmodule //simple_lfsr_next_random_bits