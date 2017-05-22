// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "next_byte.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic next_byte::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic next_byte::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<2> next_byte::ap_ST_fsm_state1 = "1";
const sc_lv<2> next_byte::ap_ST_fsm_state2 = "10";
const sc_lv<32> next_byte::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> next_byte::ap_const_lv1_1 = "1";
const sc_lv<32> next_byte::ap_const_lv32_1 = "1";
const sc_lv<4> next_byte::ap_const_lv4_0 = "0000";
const sc_lv<1> next_byte::ap_const_lv1_0 = "0";
const sc_lv<4> next_byte::ap_const_lv4_8 = "1000";
const sc_lv<4> next_byte::ap_const_lv4_1 = "1";
const sc_lv<32> next_byte::ap_const_lv32_1F = "11111";
const sc_lv<32> next_byte::ap_const_lv32_1D = "11101";
const sc_lv<32> next_byte::ap_const_lv32_19 = "11001";
const sc_lv<32> next_byte::ap_const_lv32_18 = "11000";

next_byte::next_byte(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_47_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_47_p2 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_47_p2 );
    sensitive << ( tmp_fu_127_p1 );

    SC_METHOD(thread_exitcond_fu_47_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_32 );

    SC_METHOD(thread_i_1_fu_53_p2);
    sensitive << ( i_reg_32 );

    SC_METHOD(thread_newbit_fu_103_p2);
    sensitive << ( p_lobit1_fu_97_p2 );
    sensitive << ( tmp1_fu_91_p2 );

    SC_METHOD(thread_p_lobit1_fu_97_p2);
    sensitive << ( tmp_3_fu_75_p3 );
    sensitive << ( tmp_4_fu_83_p3 );

    SC_METHOD(thread_tmp1_fu_91_p2);
    sensitive << ( tmp_2_fu_67_p3 );
    sensitive << ( tmp_1_fu_59_p3 );

    SC_METHOD(thread_tmp_1_fu_59_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_2_fu_67_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_3_fu_75_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_4_fu_83_p3);
    sensitive << ( r );

    SC_METHOD(thread_tmp_5_fu_109_p1);
    sensitive << ( r );

    SC_METHOD(thread_tmp_7_fu_113_p3);
    sensitive << ( tmp_5_fu_109_p1 );
    sensitive << ( newbit_fu_103_p2 );

    SC_METHOD(thread_tmp_fu_127_p1);
    sensitive << ( r );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_fu_47_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "01";
    r = "11000101011100000101101000011001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "next_byte_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, i_1_fu_53_p2, "i_1_fu_53_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, i_reg_32, "i_reg_32");
    sc_trace(mVcdFile, exitcond_fu_47_p2, "exitcond_fu_47_p2");
    sc_trace(mVcdFile, tmp_7_fu_113_p3, "tmp_7_fu_113_p3");
    sc_trace(mVcdFile, tmp_2_fu_67_p3, "tmp_2_fu_67_p3");
    sc_trace(mVcdFile, tmp_1_fu_59_p3, "tmp_1_fu_59_p3");
    sc_trace(mVcdFile, tmp_3_fu_75_p3, "tmp_3_fu_75_p3");
    sc_trace(mVcdFile, tmp_4_fu_83_p3, "tmp_4_fu_83_p3");
    sc_trace(mVcdFile, p_lobit1_fu_97_p2, "p_lobit1_fu_97_p2");
    sc_trace(mVcdFile, tmp1_fu_91_p2, "tmp1_fu_91_p2");
    sc_trace(mVcdFile, tmp_5_fu_109_p1, "tmp_5_fu_109_p1");
    sc_trace(mVcdFile, newbit_fu_103_p2, "newbit_fu_103_p2");
    sc_trace(mVcdFile, tmp_fu_127_p1, "tmp_fu_127_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("next_byte.hdltvin.dat");
    mHdltvoutHandle.open("next_byte.hdltvout.dat");
}

next_byte::~next_byte() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void next_byte::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_47_p2.read(), ap_const_lv1_0))) {
        i_reg_32 = i_1_fu_53_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_CS_fsm_state1.read(), ap_const_lv1_1) && 
                !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        i_reg_32 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_47_p2.read(), ap_const_lv1_0))) {
        r = tmp_7_fu_113_p3.read();
    }
}

void next_byte::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read().range(0, 0);
}

void next_byte::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read().range(1, 1);
}

void next_byte::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state2.read()) && 
         !esl_seteq<1,1,1>(exitcond_fu_47_p2.read(), ap_const_lv1_0))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void next_byte::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_CS_fsm_state1.read(), ap_const_lv1_1))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void next_byte::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state2.read()) && 
         !esl_seteq<1,1,1>(exitcond_fu_47_p2.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void next_byte::thread_ap_return() {
    ap_return = esl_zext<32,8>(tmp_fu_127_p1.read());
}

void next_byte::thread_exitcond_fu_47_p2() {
    exitcond_fu_47_p2 = (!i_reg_32.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_32.read() == ap_const_lv4_8);
}

void next_byte::thread_i_1_fu_53_p2() {
    i_1_fu_53_p2 = (!i_reg_32.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_reg_32.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void next_byte::thread_newbit_fu_103_p2() {
    newbit_fu_103_p2 = (p_lobit1_fu_97_p2.read() ^ tmp1_fu_91_p2.read());
}

void next_byte::thread_p_lobit1_fu_97_p2() {
    p_lobit1_fu_97_p2 = (tmp_3_fu_75_p3.read() ^ tmp_4_fu_83_p3.read());
}

void next_byte::thread_tmp1_fu_91_p2() {
    tmp1_fu_91_p2 = (tmp_2_fu_67_p3.read() ^ tmp_1_fu_59_p3.read());
}

void next_byte::thread_tmp_1_fu_59_p3() {
    tmp_1_fu_59_p3 = r.read().range(31, 31);
}

void next_byte::thread_tmp_2_fu_67_p3() {
    tmp_2_fu_67_p3 = r.read().range(29, 29);
}

void next_byte::thread_tmp_3_fu_75_p3() {
    tmp_3_fu_75_p3 = r.read().range(25, 25);
}

void next_byte::thread_tmp_4_fu_83_p3() {
    tmp_4_fu_83_p3 = r.read().range(24, 24);
}

void next_byte::thread_tmp_5_fu_109_p1() {
    tmp_5_fu_109_p1 = r.read().range(31-1, 0);
}

void next_byte::thread_tmp_7_fu_113_p3() {
    tmp_7_fu_113_p3 = esl_concat<31,1>(tmp_5_fu_109_p1.read(), newbit_fu_103_p2.read());
}

void next_byte::thread_tmp_fu_127_p1() {
    tmp_fu_127_p1 = r.read().range(8-1, 0);
}

void next_byte::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if (!esl_seteq<1,1,1>(exitcond_fu_47_p2.read(), ap_const_lv1_0)) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        default : 
            ap_NS_fsm = "XX";
            break;
    }
}

void next_byte::thread_hdltv_gen() {
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
