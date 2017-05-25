// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "simple_lfsr_next_random_bits.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic simple_lfsr_next_random_bits::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic simple_lfsr_next_random_bits::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<1> simple_lfsr_next_random_bits::ap_ST_fsm_state1 = "1";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> simple_lfsr_next_random_bits::ap_const_lv1_1 = "1";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_19 = "11001";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_18 = "11000";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_1D = "11101";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_1F = "11111";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_1C = "11100";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_1E = "11110";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_17 = "10111";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_16 = "10110";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_1B = "11011";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_1A = "11010";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_15 = "10101";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_14 = "10100";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_13 = "10011";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_12 = "10010";
const sc_lv<32> simple_lfsr_next_random_bits::ap_const_lv32_11 = "10001";

simple_lfsr_next_random_bits::simple_lfsr_next_random_bits(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( tmp_8_7_i_cast_fu_340_p9 );

    SC_METHOD(thread_tmp10_fu_254_p2);
    sensitive << ( tmp_18_fu_210_p3 );
    sensitive << ( tmp_19_fu_236_p3 );

    SC_METHOD(thread_tmp11_fu_274_p2);
    sensitive << ( tmp_4_fu_50_p3 );
    sensitive << ( tmp_13_fu_98_p3 );

    SC_METHOD(thread_tmp12_fu_280_p2);
    sensitive << ( tmp_19_fu_236_p3 );
    sensitive << ( tmp_21_fu_266_p3 );

    SC_METHOD(thread_tmp13_fu_300_p2);
    sensitive << ( tmp_7_fu_58_p3 );
    sensitive << ( tmp_14_fu_142_p3 );

    SC_METHOD(thread_tmp14_fu_306_p2);
    sensitive << ( tmp_21_fu_266_p3 );
    sensitive << ( tmp_22_fu_292_p3 );

    SC_METHOD(thread_tmp1_fu_198_p2);
    sensitive << ( tmp_14_fu_142_p3 );
    sensitive << ( tmp_17_fu_184_p3 );

    SC_METHOD(thread_tmp2_fu_218_p2);
    sensitive << ( tmp_4_fu_50_p3 );
    sensitive << ( tmp_15_fu_150_p3 );

    SC_METHOD(thread_tmp3_fu_124_p2);
    sensitive << ( tmp_11_fu_82_p3 );
    sensitive << ( tmp_12_fu_90_p3 );

    SC_METHOD(thread_tmp4_fu_130_p2);
    sensitive << ( tmp_7_fu_58_p3 );
    sensitive << ( tmp_13_fu_98_p3 );

    SC_METHOD(thread_tmp5_fu_224_p2);
    sensitive << ( tmp_17_fu_184_p3 );
    sensitive << ( tmp_18_fu_210_p3 );

    SC_METHOD(thread_tmp6_fu_158_p2);
    sensitive << ( tmp_9_fu_66_p3 );
    sensitive << ( tmp_15_fu_150_p3 );

    SC_METHOD(thread_tmp7_fu_164_p2);
    sensitive << ( tmp_13_fu_98_p3 );
    sensitive << ( tmp_14_fu_142_p3 );

    SC_METHOD(thread_tmp8_fu_248_p2);
    sensitive << ( tmp_7_fu_58_p3 );
    sensitive << ( tmp_16_fu_176_p3 );

    SC_METHOD(thread_tmp9_fu_192_p2);
    sensitive << ( tmp_11_fu_82_p3 );
    sensitive << ( tmp_16_fu_176_p3 );

    SC_METHOD(thread_tmp_10_fu_74_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_11_fu_82_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_12_fu_90_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_13_fu_98_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_14_fu_142_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_15_fu_150_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_16_fu_176_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_17_fu_184_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_18_fu_210_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_19_fu_236_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_1_fu_112_p2);
    sensitive << ( tmp_4_fu_50_p3 );
    sensitive << ( tmp_7_fu_58_p3 );

    SC_METHOD(thread_tmp_20_fu_244_p1);
    sensitive << ( r );

    SC_METHOD(thread_tmp_21_fu_266_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_22_fu_292_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_2_fu_118_p2);
    sensitive << ( tmp_1_fu_112_p2 );
    sensitive << ( tmp_fu_106_p2 );

    SC_METHOD(thread_tmp_3_fu_230_p2);
    sensitive << ( tmp5_fu_224_p2 );
    sensitive << ( tmp2_fu_218_p2 );

    SC_METHOD(thread_tmp_4_fu_50_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_5_fu_136_p2);
    sensitive << ( tmp4_fu_130_p2 );
    sensitive << ( tmp3_fu_124_p2 );

    SC_METHOD(thread_tmp_6_fu_260_p2);
    sensitive << ( tmp10_fu_254_p2 );
    sensitive << ( tmp8_fu_248_p2 );

    SC_METHOD(thread_tmp_6_i_fu_312_p2);
    sensitive << ( tmp14_fu_306_p2 );
    sensitive << ( tmp13_fu_300_p2 );

    SC_METHOD(thread_tmp_77_i_fu_286_p2);
    sensitive << ( tmp12_fu_280_p2 );
    sensitive << ( tmp11_fu_274_p2 );

    SC_METHOD(thread_tmp_7_fu_58_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_8_7_i_cast_fu_340_p9);
    sensitive << ( tmp_2_fu_118_p2 );
    sensitive << ( tmp_5_fu_136_p2 );
    sensitive << ( tmp_8_fu_170_p2 );
    sensitive << ( tmp_s_fu_204_p2 );
    sensitive << ( tmp_3_fu_230_p2 );
    sensitive << ( tmp_6_fu_260_p2 );
    sensitive << ( tmp_77_i_fu_286_p2 );
    sensitive << ( tmp_6_i_fu_312_p2 );

    SC_METHOD(thread_tmp_8_7_i_fu_318_p10);
    sensitive << ( tmp_20_fu_244_p1 );
    sensitive << ( tmp_2_fu_118_p2 );
    sensitive << ( tmp_5_fu_136_p2 );
    sensitive << ( tmp_8_fu_170_p2 );
    sensitive << ( tmp_s_fu_204_p2 );
    sensitive << ( tmp_3_fu_230_p2 );
    sensitive << ( tmp_6_fu_260_p2 );
    sensitive << ( tmp_77_i_fu_286_p2 );
    sensitive << ( tmp_6_i_fu_312_p2 );

    SC_METHOD(thread_tmp_8_fu_170_p2);
    sensitive << ( tmp7_fu_164_p2 );
    sensitive << ( tmp6_fu_158_p2 );

    SC_METHOD(thread_tmp_9_fu_66_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_fu_106_p2);
    sensitive << ( tmp_9_fu_66_p3 );
    sensitive << ( tmp_10_fu_74_p3 );

    SC_METHOD(thread_tmp_s_fu_204_p2);
    sensitive << ( tmp1_fu_198_p2 );
    sensitive << ( tmp9_fu_192_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "1";
    r = "11000101011100000101101000011001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "simple_lfsr_next_random_bits_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, r, "r");
    sc_trace(mVcdFile, tmp_8_7_i_fu_318_p10, "tmp_8_7_i_fu_318_p10");
    sc_trace(mVcdFile, tmp_9_fu_66_p3, "tmp_9_fu_66_p3");
    sc_trace(mVcdFile, tmp_10_fu_74_p3, "tmp_10_fu_74_p3");
    sc_trace(mVcdFile, tmp_4_fu_50_p3, "tmp_4_fu_50_p3");
    sc_trace(mVcdFile, tmp_7_fu_58_p3, "tmp_7_fu_58_p3");
    sc_trace(mVcdFile, tmp_1_fu_112_p2, "tmp_1_fu_112_p2");
    sc_trace(mVcdFile, tmp_fu_106_p2, "tmp_fu_106_p2");
    sc_trace(mVcdFile, tmp_11_fu_82_p3, "tmp_11_fu_82_p3");
    sc_trace(mVcdFile, tmp_12_fu_90_p3, "tmp_12_fu_90_p3");
    sc_trace(mVcdFile, tmp_13_fu_98_p3, "tmp_13_fu_98_p3");
    sc_trace(mVcdFile, tmp4_fu_130_p2, "tmp4_fu_130_p2");
    sc_trace(mVcdFile, tmp3_fu_124_p2, "tmp3_fu_124_p2");
    sc_trace(mVcdFile, tmp_15_fu_150_p3, "tmp_15_fu_150_p3");
    sc_trace(mVcdFile, tmp_14_fu_142_p3, "tmp_14_fu_142_p3");
    sc_trace(mVcdFile, tmp7_fu_164_p2, "tmp7_fu_164_p2");
    sc_trace(mVcdFile, tmp6_fu_158_p2, "tmp6_fu_158_p2");
    sc_trace(mVcdFile, tmp_16_fu_176_p3, "tmp_16_fu_176_p3");
    sc_trace(mVcdFile, tmp_17_fu_184_p3, "tmp_17_fu_184_p3");
    sc_trace(mVcdFile, tmp1_fu_198_p2, "tmp1_fu_198_p2");
    sc_trace(mVcdFile, tmp9_fu_192_p2, "tmp9_fu_192_p2");
    sc_trace(mVcdFile, tmp_18_fu_210_p3, "tmp_18_fu_210_p3");
    sc_trace(mVcdFile, tmp5_fu_224_p2, "tmp5_fu_224_p2");
    sc_trace(mVcdFile, tmp2_fu_218_p2, "tmp2_fu_218_p2");
    sc_trace(mVcdFile, tmp_19_fu_236_p3, "tmp_19_fu_236_p3");
    sc_trace(mVcdFile, tmp10_fu_254_p2, "tmp10_fu_254_p2");
    sc_trace(mVcdFile, tmp8_fu_248_p2, "tmp8_fu_248_p2");
    sc_trace(mVcdFile, tmp_21_fu_266_p3, "tmp_21_fu_266_p3");
    sc_trace(mVcdFile, tmp12_fu_280_p2, "tmp12_fu_280_p2");
    sc_trace(mVcdFile, tmp11_fu_274_p2, "tmp11_fu_274_p2");
    sc_trace(mVcdFile, tmp_22_fu_292_p3, "tmp_22_fu_292_p3");
    sc_trace(mVcdFile, tmp14_fu_306_p2, "tmp14_fu_306_p2");
    sc_trace(mVcdFile, tmp13_fu_300_p2, "tmp13_fu_300_p2");
    sc_trace(mVcdFile, tmp_20_fu_244_p1, "tmp_20_fu_244_p1");
    sc_trace(mVcdFile, tmp_2_fu_118_p2, "tmp_2_fu_118_p2");
    sc_trace(mVcdFile, tmp_5_fu_136_p2, "tmp_5_fu_136_p2");
    sc_trace(mVcdFile, tmp_8_fu_170_p2, "tmp_8_fu_170_p2");
    sc_trace(mVcdFile, tmp_s_fu_204_p2, "tmp_s_fu_204_p2");
    sc_trace(mVcdFile, tmp_3_fu_230_p2, "tmp_3_fu_230_p2");
    sc_trace(mVcdFile, tmp_6_fu_260_p2, "tmp_6_fu_260_p2");
    sc_trace(mVcdFile, tmp_77_i_fu_286_p2, "tmp_77_i_fu_286_p2");
    sc_trace(mVcdFile, tmp_6_i_fu_312_p2, "tmp_6_i_fu_312_p2");
    sc_trace(mVcdFile, tmp_8_7_i_cast_fu_340_p9, "tmp_8_7_i_cast_fu_340_p9");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("simple_lfsr_next_random_bits.hdltvin.dat");
    mHdltvoutHandle.open("simple_lfsr_next_random_bits.hdltvout.dat");
}

simple_lfsr_next_random_bits::~simple_lfsr_next_random_bits() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void simple_lfsr_next_random_bits::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_CS_fsm_state1.read(), ap_const_lv1_1) && !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        r = tmp_8_7_i_fu_318_p10.read();
    }
}

void simple_lfsr_next_random_bits::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read().range(0, 0);
}

void simple_lfsr_next_random_bits::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_state1.read(), ap_const_lv1_1) && 
         !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void simple_lfsr_next_random_bits::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_CS_fsm_state1.read(), ap_const_lv1_1))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void simple_lfsr_next_random_bits::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_CS_fsm_state1.read(), ap_const_lv1_1) && 
         !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void simple_lfsr_next_random_bits::thread_ap_return() {
    ap_return = esl_zext<32,8>(tmp_8_7_i_cast_fu_340_p9.read());
}

void simple_lfsr_next_random_bits::thread_tmp10_fu_254_p2() {
    tmp10_fu_254_p2 = (tmp_18_fu_210_p3.read() ^ tmp_19_fu_236_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp11_fu_274_p2() {
    tmp11_fu_274_p2 = (tmp_13_fu_98_p3.read() ^ tmp_4_fu_50_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp12_fu_280_p2() {
    tmp12_fu_280_p2 = (tmp_19_fu_236_p3.read() ^ tmp_21_fu_266_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp13_fu_300_p2() {
    tmp13_fu_300_p2 = (tmp_14_fu_142_p3.read() ^ tmp_7_fu_58_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp14_fu_306_p2() {
    tmp14_fu_306_p2 = (tmp_21_fu_266_p3.read() ^ tmp_22_fu_292_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp1_fu_198_p2() {
    tmp1_fu_198_p2 = (tmp_14_fu_142_p3.read() ^ tmp_17_fu_184_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp2_fu_218_p2() {
    tmp2_fu_218_p2 = (tmp_4_fu_50_p3.read() ^ tmp_15_fu_150_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp3_fu_124_p2() {
    tmp3_fu_124_p2 = (tmp_11_fu_82_p3.read() ^ tmp_12_fu_90_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp4_fu_130_p2() {
    tmp4_fu_130_p2 = (tmp_7_fu_58_p3.read() ^ tmp_13_fu_98_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp5_fu_224_p2() {
    tmp5_fu_224_p2 = (tmp_17_fu_184_p3.read() ^ tmp_18_fu_210_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp6_fu_158_p2() {
    tmp6_fu_158_p2 = (tmp_15_fu_150_p3.read() ^ tmp_9_fu_66_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp7_fu_164_p2() {
    tmp7_fu_164_p2 = (tmp_13_fu_98_p3.read() ^ tmp_14_fu_142_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp8_fu_248_p2() {
    tmp8_fu_248_p2 = (tmp_7_fu_58_p3.read() ^ tmp_16_fu_176_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp9_fu_192_p2() {
    tmp9_fu_192_p2 = (tmp_16_fu_176_p3.read() ^ tmp_11_fu_82_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp_10_fu_74_p3() {
    tmp_10_fu_74_p3 = r.read().range(31, 31);
}

void simple_lfsr_next_random_bits::thread_tmp_11_fu_82_p3() {
    tmp_11_fu_82_p3 = r.read().range(28, 28);
}

void simple_lfsr_next_random_bits::thread_tmp_12_fu_90_p3() {
    tmp_12_fu_90_p3 = r.read().range(30, 30);
}

void simple_lfsr_next_random_bits::thread_tmp_13_fu_98_p3() {
    tmp_13_fu_98_p3 = r.read().range(23, 23);
}

void simple_lfsr_next_random_bits::thread_tmp_14_fu_142_p3() {
    tmp_14_fu_142_p3 = r.read().range(22, 22);
}

void simple_lfsr_next_random_bits::thread_tmp_15_fu_150_p3() {
    tmp_15_fu_150_p3 = r.read().range(27, 27);
}

void simple_lfsr_next_random_bits::thread_tmp_16_fu_176_p3() {
    tmp_16_fu_176_p3 = r.read().range(26, 26);
}

void simple_lfsr_next_random_bits::thread_tmp_17_fu_184_p3() {
    tmp_17_fu_184_p3 = r.read().range(21, 21);
}

void simple_lfsr_next_random_bits::thread_tmp_18_fu_210_p3() {
    tmp_18_fu_210_p3 = r.read().range(20, 20);
}

void simple_lfsr_next_random_bits::thread_tmp_19_fu_236_p3() {
    tmp_19_fu_236_p3 = r.read().range(19, 19);
}

void simple_lfsr_next_random_bits::thread_tmp_1_fu_112_p2() {
    tmp_1_fu_112_p2 = (tmp_4_fu_50_p3.read() ^ tmp_7_fu_58_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp_20_fu_244_p1() {
    tmp_20_fu_244_p1 = r.read().range(24-1, 0);
}

void simple_lfsr_next_random_bits::thread_tmp_21_fu_266_p3() {
    tmp_21_fu_266_p3 = r.read().range(18, 18);
}

void simple_lfsr_next_random_bits::thread_tmp_22_fu_292_p3() {
    tmp_22_fu_292_p3 = r.read().range(17, 17);
}

void simple_lfsr_next_random_bits::thread_tmp_2_fu_118_p2() {
    tmp_2_fu_118_p2 = (tmp_1_fu_112_p2.read() ^ tmp_fu_106_p2.read());
}

void simple_lfsr_next_random_bits::thread_tmp_3_fu_230_p2() {
    tmp_3_fu_230_p2 = (tmp5_fu_224_p2.read() ^ tmp2_fu_218_p2.read());
}

void simple_lfsr_next_random_bits::thread_tmp_4_fu_50_p3() {
    tmp_4_fu_50_p3 = r.read().range(25, 25);
}

void simple_lfsr_next_random_bits::thread_tmp_5_fu_136_p2() {
    tmp_5_fu_136_p2 = (tmp4_fu_130_p2.read() ^ tmp3_fu_124_p2.read());
}

void simple_lfsr_next_random_bits::thread_tmp_6_fu_260_p2() {
    tmp_6_fu_260_p2 = (tmp10_fu_254_p2.read() ^ tmp8_fu_248_p2.read());
}

void simple_lfsr_next_random_bits::thread_tmp_6_i_fu_312_p2() {
    tmp_6_i_fu_312_p2 = (tmp14_fu_306_p2.read() ^ tmp13_fu_300_p2.read());
}

void simple_lfsr_next_random_bits::thread_tmp_77_i_fu_286_p2() {
    tmp_77_i_fu_286_p2 = (tmp12_fu_280_p2.read() ^ tmp11_fu_274_p2.read());
}

void simple_lfsr_next_random_bits::thread_tmp_7_fu_58_p3() {
    tmp_7_fu_58_p3 = r.read().range(24, 24);
}

void simple_lfsr_next_random_bits::thread_tmp_8_7_i_cast_fu_340_p9() {
    tmp_8_7_i_cast_fu_340_p9 = esl_concat<7,1>(esl_concat<6,1>(esl_concat<5,1>(esl_concat<4,1>(esl_concat<3,1>(esl_concat<2,1>(esl_concat<1,1>(tmp_2_fu_118_p2.read(), tmp_5_fu_136_p2.read()), tmp_8_fu_170_p2.read()), tmp_s_fu_204_p2.read()), tmp_3_fu_230_p2.read()), tmp_6_fu_260_p2.read()), tmp_77_i_fu_286_p2.read()), tmp_6_i_fu_312_p2.read());
}

void simple_lfsr_next_random_bits::thread_tmp_8_7_i_fu_318_p10() {
    tmp_8_7_i_fu_318_p10 = esl_concat<31,1>(esl_concat<30,1>(esl_concat<29,1>(esl_concat<28,1>(esl_concat<27,1>(esl_concat<26,1>(esl_concat<25,1>(esl_concat<24,1>(tmp_20_fu_244_p1.read(), tmp_2_fu_118_p2.read()), tmp_5_fu_136_p2.read()), tmp_8_fu_170_p2.read()), tmp_s_fu_204_p2.read()), tmp_3_fu_230_p2.read()), tmp_6_fu_260_p2.read()), tmp_77_i_fu_286_p2.read()), tmp_6_i_fu_312_p2.read());
}

void simple_lfsr_next_random_bits::thread_tmp_8_fu_170_p2() {
    tmp_8_fu_170_p2 = (tmp7_fu_164_p2.read() ^ tmp6_fu_158_p2.read());
}

void simple_lfsr_next_random_bits::thread_tmp_9_fu_66_p3() {
    tmp_9_fu_66_p3 = r.read().range(29, 29);
}

void simple_lfsr_next_random_bits::thread_tmp_fu_106_p2() {
    tmp_fu_106_p2 = (tmp_9_fu_66_p3.read() ^ tmp_10_fu_74_p3.read());
}

void simple_lfsr_next_random_bits::thread_tmp_s_fu_204_p2() {
    tmp_s_fu_204_p2 = (tmp1_fu_198_p2.read() ^ tmp9_fu_192_p2.read());
}

void simple_lfsr_next_random_bits::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_state1;
break;
        default : 
            ap_NS_fsm = "X";
            break;
    }
}

void simple_lfsr_next_random_bits::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return\" :  \"" << ap_return.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
