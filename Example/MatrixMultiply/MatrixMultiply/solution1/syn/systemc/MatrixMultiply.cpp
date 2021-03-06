// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "MatrixMultiply.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic MatrixMultiply::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic MatrixMultiply::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<7> MatrixMultiply::ap_ST_fsm_state1 = "1";
const sc_lv<7> MatrixMultiply::ap_ST_fsm_state2 = "10";
const sc_lv<7> MatrixMultiply::ap_ST_fsm_state3 = "100";
const sc_lv<7> MatrixMultiply::ap_ST_fsm_state4 = "1000";
const sc_lv<7> MatrixMultiply::ap_ST_fsm_state5 = "10000";
const sc_lv<7> MatrixMultiply::ap_ST_fsm_state6 = "100000";
const sc_lv<7> MatrixMultiply::ap_ST_fsm_state7 = "1000000";
const sc_lv<32> MatrixMultiply::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> MatrixMultiply::ap_const_lv32_1 = "1";
const sc_lv<1> MatrixMultiply::ap_const_lv1_0 = "0";
const sc_lv<32> MatrixMultiply::ap_const_lv32_2 = "10";
const sc_lv<32> MatrixMultiply::ap_const_lv32_3 = "11";
const sc_lv<32> MatrixMultiply::ap_const_lv32_5 = "101";
const sc_lv<3> MatrixMultiply::ap_const_lv3_0 = "000";
const sc_lv<32> MatrixMultiply::ap_const_lv32_6 = "110";
const sc_lv<3> MatrixMultiply::ap_const_lv3_3 = "11";
const sc_lv<3> MatrixMultiply::ap_const_lv3_2 = "10";
const sc_lv<3> MatrixMultiply::ap_const_lv3_1 = "1";
const sc_lv<3> MatrixMultiply::ap_const_lv3_5 = "101";
const sc_lv<2> MatrixMultiply::ap_const_lv2_0 = "00";
const sc_lv<5> MatrixMultiply::ap_const_lv5_0 = "00000";
const sc_lv<5> MatrixMultiply::ap_const_lv5_5 = "101";
const sc_lv<5> MatrixMultiply::ap_const_lv5_A = "1010";
const sc_lv<5> MatrixMultiply::ap_const_lv5_F = "1111";
const sc_lv<1> MatrixMultiply::ap_const_lv1_1 = "1";
const bool MatrixMultiply::ap_const_boolean_1 = true;

MatrixMultiply::MatrixMultiply(sc_module_name name) : sc_module(name), mVcdFile(0) {
    MatrixMultiply_mubkb_U0 = new MatrixMultiply_mubkb<1,3,32,32,32>("MatrixMultiply_mubkb_U0");
    MatrixMultiply_mubkb_U0->clk(ap_clk);
    MatrixMultiply_mubkb_U0->reset(ap_rst);
    MatrixMultiply_mubkb_U0->din0(newSel3_reg_638);
    MatrixMultiply_mubkb_U0->din1(bb_0);
    MatrixMultiply_mubkb_U0->ce(ap_var_for_const0);
    MatrixMultiply_mubkb_U0->dout(grp_fu_551_p2);
    MatrixMultiply_mubkb_U1 = new MatrixMultiply_mubkb<1,3,32,32,32>("MatrixMultiply_mubkb_U1");
    MatrixMultiply_mubkb_U1->clk(ap_clk);
    MatrixMultiply_mubkb_U1->reset(ap_rst);
    MatrixMultiply_mubkb_U1->din0(newSel7_reg_643);
    MatrixMultiply_mubkb_U1->din1(bb_1);
    MatrixMultiply_mubkb_U1->ce(ap_var_for_const0);
    MatrixMultiply_mubkb_U1->dout(grp_fu_556_p2);
    MatrixMultiply_mubkb_U2 = new MatrixMultiply_mubkb<1,3,32,32,32>("MatrixMultiply_mubkb_U2");
    MatrixMultiply_mubkb_U2->clk(ap_clk);
    MatrixMultiply_mubkb_U2->reset(ap_rst);
    MatrixMultiply_mubkb_U2->din0(newSel11_reg_648);
    MatrixMultiply_mubkb_U2->din1(bb_2);
    MatrixMultiply_mubkb_U2->ce(ap_var_for_const0);
    MatrixMultiply_mubkb_U2->dout(grp_fu_561_p2);
    MatrixMultiply_mubkb_U3 = new MatrixMultiply_mubkb<1,3,32,32,32>("MatrixMultiply_mubkb_U3");
    MatrixMultiply_mubkb_U3->clk(ap_clk);
    MatrixMultiply_mubkb_U3->reset(ap_rst);
    MatrixMultiply_mubkb_U3->din0(newSel15_reg_653);
    MatrixMultiply_mubkb_U3->din1(bb_3);
    MatrixMultiply_mubkb_U3->ce(ap_var_for_const0);
    MatrixMultiply_mubkb_U3->dout(grp_fu_566_p2);
    MatrixMultiply_mubkb_U4 = new MatrixMultiply_mubkb<1,3,32,32,32>("MatrixMultiply_mubkb_U4");
    MatrixMultiply_mubkb_U4->clk(ap_clk);
    MatrixMultiply_mubkb_U4->reset(ap_rst);
    MatrixMultiply_mubkb_U4->din0(newSel19_reg_658);
    MatrixMultiply_mubkb_U4->din1(bb_4);
    MatrixMultiply_mubkb_U4->ce(ap_var_for_const0);
    MatrixMultiply_mubkb_U4->dout(grp_fu_571_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_333_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_333_p2 );

    SC_METHOD(thread_cc_0);
    sensitive << ( i_reg_321 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( sum_1_4_fu_589_p2 );

    SC_METHOD(thread_cc_0_ap_vld);
    sensitive << ( i_reg_321 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_cc_1);
    sensitive << ( i_reg_321 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( sum_1_4_fu_589_p2 );

    SC_METHOD(thread_cc_1_ap_vld);
    sensitive << ( i_reg_321 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_cc_2);
    sensitive << ( i_reg_321 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( sum_1_4_fu_589_p2 );

    SC_METHOD(thread_cc_2_ap_vld);
    sensitive << ( i_reg_321 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_cc_3);
    sensitive << ( i_reg_321 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( sum_1_4_fu_589_p2 );

    SC_METHOD(thread_cc_3_ap_vld);
    sensitive << ( i_reg_321 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_cc_4);
    sensitive << ( i_reg_321 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( sum_1_4_fu_589_p2 );

    SC_METHOD(thread_cc_4_ap_vld);
    sensitive << ( i_reg_321 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_exitcond1_fu_333_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_321 );

    SC_METHOD(thread_i_1_fu_339_p2);
    sensitive << ( i_reg_321 );

    SC_METHOD(thread_newSel10_fu_475_p3);
    sensitive << ( or_cond_fu_394_p2 );
    sensitive << ( newSel8_fu_461_p3 );
    sensitive << ( newSel9_fu_468_p3 );

    SC_METHOD(thread_newSel11_fu_483_p3);
    sensitive << ( AA_22 );
    sensitive << ( or_cond2_fu_417_p2 );
    sensitive << ( newSel10_fu_475_p3 );

    SC_METHOD(thread_newSel12_fu_491_p3);
    sensitive << ( AA_13 );
    sensitive << ( AA_18 );
    sensitive << ( sel_tmp6_reg_628 );

    SC_METHOD(thread_newSel13_fu_498_p3);
    sensitive << ( AA_3 );
    sensitive << ( AA_8 );
    sensitive << ( sel_tmp2_reg_613 );

    SC_METHOD(thread_newSel14_fu_505_p3);
    sensitive << ( or_cond_fu_394_p2 );
    sensitive << ( newSel12_fu_491_p3 );
    sensitive << ( newSel13_fu_498_p3 );

    SC_METHOD(thread_newSel15_fu_513_p3);
    sensitive << ( AA_23 );
    sensitive << ( or_cond2_fu_417_p2 );
    sensitive << ( newSel14_fu_505_p3 );

    SC_METHOD(thread_newSel16_fu_521_p3);
    sensitive << ( AA_14 );
    sensitive << ( AA_19 );
    sensitive << ( sel_tmp6_reg_628 );

    SC_METHOD(thread_newSel17_fu_528_p3);
    sensitive << ( AA_4 );
    sensitive << ( AA_9 );
    sensitive << ( sel_tmp2_reg_613 );

    SC_METHOD(thread_newSel18_fu_535_p3);
    sensitive << ( or_cond_fu_394_p2 );
    sensitive << ( newSel16_fu_521_p3 );
    sensitive << ( newSel17_fu_528_p3 );

    SC_METHOD(thread_newSel19_fu_543_p3);
    sensitive << ( AA_24 );
    sensitive << ( or_cond2_fu_417_p2 );
    sensitive << ( newSel18_fu_535_p3 );

    SC_METHOD(thread_newSel1_fu_398_p3);
    sensitive << ( AA_0 );
    sensitive << ( AA_5 );
    sensitive << ( sel_tmp2_reg_613 );

    SC_METHOD(thread_newSel2_fu_409_p3);
    sensitive << ( or_cond_fu_394_p2 );
    sensitive << ( newSel_fu_387_p3 );
    sensitive << ( newSel1_fu_398_p3 );

    SC_METHOD(thread_newSel3_fu_423_p3);
    sensitive << ( AA_20 );
    sensitive << ( or_cond2_fu_417_p2 );
    sensitive << ( newSel2_fu_409_p3 );

    SC_METHOD(thread_newSel4_fu_431_p3);
    sensitive << ( AA_11 );
    sensitive << ( AA_16 );
    sensitive << ( sel_tmp6_reg_628 );

    SC_METHOD(thread_newSel5_fu_438_p3);
    sensitive << ( AA_1 );
    sensitive << ( AA_6 );
    sensitive << ( sel_tmp2_reg_613 );

    SC_METHOD(thread_newSel6_fu_445_p3);
    sensitive << ( or_cond_fu_394_p2 );
    sensitive << ( newSel4_fu_431_p3 );
    sensitive << ( newSel5_fu_438_p3 );

    SC_METHOD(thread_newSel7_fu_453_p3);
    sensitive << ( AA_21 );
    sensitive << ( or_cond2_fu_417_p2 );
    sensitive << ( newSel6_fu_445_p3 );

    SC_METHOD(thread_newSel8_fu_461_p3);
    sensitive << ( AA_12 );
    sensitive << ( AA_17 );
    sensitive << ( sel_tmp6_reg_628 );

    SC_METHOD(thread_newSel9_fu_468_p3);
    sensitive << ( AA_2 );
    sensitive << ( AA_7 );
    sensitive << ( sel_tmp2_reg_613 );

    SC_METHOD(thread_newSel_fu_387_p3);
    sensitive << ( AA_10 );
    sensitive << ( AA_15 );
    sensitive << ( sel_tmp6_reg_628 );

    SC_METHOD(thread_or_cond1_fu_405_p2);
    sensitive << ( sel_tmp_reg_608 );
    sensitive << ( sel_tmp2_reg_613 );

    SC_METHOD(thread_or_cond2_fu_417_p2);
    sensitive << ( or_cond_fu_394_p2 );
    sensitive << ( or_cond1_fu_405_p2 );

    SC_METHOD(thread_or_cond_fu_394_p2);
    sensitive << ( sel_tmp4_reg_623 );
    sensitive << ( sel_tmp6_reg_628 );

    SC_METHOD(thread_sel_tmp2_fu_369_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_333_p2 );
    sensitive << ( tmp_t_fu_357_p2 );

    SC_METHOD(thread_sel_tmp4_fu_375_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_333_p2 );
    sensitive << ( tmp_t_fu_357_p2 );

    SC_METHOD(thread_sel_tmp6_fu_381_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_333_p2 );
    sensitive << ( tmp_t_fu_357_p2 );

    SC_METHOD(thread_sel_tmp_fu_363_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_333_p2 );
    sensitive << ( tmp_t_fu_357_p2 );

    SC_METHOD(thread_sum_1_4_fu_589_p2);
    sensitive << ( tmp1_fu_576_p2 );
    sensitive << ( tmp3_fu_584_p2 );

    SC_METHOD(thread_tmp1_fu_576_p2);
    sensitive << ( tmp_3_2_reg_698 );
    sensitive << ( tmp_3_3_reg_703 );

    SC_METHOD(thread_tmp2_fu_580_p2);
    sensitive << ( tmp_3_1_reg_693 );
    sensitive << ( tmp_3_4_reg_708 );

    SC_METHOD(thread_tmp3_fu_584_p2);
    sensitive << ( tmp_3_reg_688 );
    sensitive << ( tmp2_fu_580_p2 );

    SC_METHOD(thread_tmp_1_fu_345_p1);
    sensitive << ( i_reg_321 );

    SC_METHOD(thread_tmp_fu_349_p3);
    sensitive << ( i_reg_321 );

    SC_METHOD(thread_tmp_t_fu_357_p2);
    sensitive << ( tmp_1_fu_345_p1 );
    sensitive << ( tmp_fu_349_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_333_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "0000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "MatrixMultiply_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, AA_0, "(port)AA_0");
    sc_trace(mVcdFile, AA_1, "(port)AA_1");
    sc_trace(mVcdFile, AA_2, "(port)AA_2");
    sc_trace(mVcdFile, AA_3, "(port)AA_3");
    sc_trace(mVcdFile, AA_4, "(port)AA_4");
    sc_trace(mVcdFile, AA_5, "(port)AA_5");
    sc_trace(mVcdFile, AA_6, "(port)AA_6");
    sc_trace(mVcdFile, AA_7, "(port)AA_7");
    sc_trace(mVcdFile, AA_8, "(port)AA_8");
    sc_trace(mVcdFile, AA_9, "(port)AA_9");
    sc_trace(mVcdFile, AA_10, "(port)AA_10");
    sc_trace(mVcdFile, AA_11, "(port)AA_11");
    sc_trace(mVcdFile, AA_12, "(port)AA_12");
    sc_trace(mVcdFile, AA_13, "(port)AA_13");
    sc_trace(mVcdFile, AA_14, "(port)AA_14");
    sc_trace(mVcdFile, AA_15, "(port)AA_15");
    sc_trace(mVcdFile, AA_16, "(port)AA_16");
    sc_trace(mVcdFile, AA_17, "(port)AA_17");
    sc_trace(mVcdFile, AA_18, "(port)AA_18");
    sc_trace(mVcdFile, AA_19, "(port)AA_19");
    sc_trace(mVcdFile, AA_20, "(port)AA_20");
    sc_trace(mVcdFile, AA_21, "(port)AA_21");
    sc_trace(mVcdFile, AA_22, "(port)AA_22");
    sc_trace(mVcdFile, AA_23, "(port)AA_23");
    sc_trace(mVcdFile, AA_24, "(port)AA_24");
    sc_trace(mVcdFile, bb_0, "(port)bb_0");
    sc_trace(mVcdFile, bb_1, "(port)bb_1");
    sc_trace(mVcdFile, bb_2, "(port)bb_2");
    sc_trace(mVcdFile, bb_3, "(port)bb_3");
    sc_trace(mVcdFile, bb_4, "(port)bb_4");
    sc_trace(mVcdFile, cc_0, "(port)cc_0");
    sc_trace(mVcdFile, cc_0_ap_vld, "(port)cc_0_ap_vld");
    sc_trace(mVcdFile, cc_1, "(port)cc_1");
    sc_trace(mVcdFile, cc_1_ap_vld, "(port)cc_1_ap_vld");
    sc_trace(mVcdFile, cc_2, "(port)cc_2");
    sc_trace(mVcdFile, cc_2_ap_vld, "(port)cc_2_ap_vld");
    sc_trace(mVcdFile, cc_3, "(port)cc_3");
    sc_trace(mVcdFile, cc_3_ap_vld, "(port)cc_3_ap_vld");
    sc_trace(mVcdFile, cc_4, "(port)cc_4");
    sc_trace(mVcdFile, cc_4_ap_vld, "(port)cc_4_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_1_fu_339_p2, "i_1_fu_339_p2");
    sc_trace(mVcdFile, i_1_reg_603, "i_1_reg_603");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, sel_tmp_fu_363_p2, "sel_tmp_fu_363_p2");
    sc_trace(mVcdFile, sel_tmp_reg_608, "sel_tmp_reg_608");
    sc_trace(mVcdFile, exitcond1_fu_333_p2, "exitcond1_fu_333_p2");
    sc_trace(mVcdFile, sel_tmp2_fu_369_p2, "sel_tmp2_fu_369_p2");
    sc_trace(mVcdFile, sel_tmp2_reg_613, "sel_tmp2_reg_613");
    sc_trace(mVcdFile, sel_tmp4_fu_375_p2, "sel_tmp4_fu_375_p2");
    sc_trace(mVcdFile, sel_tmp4_reg_623, "sel_tmp4_reg_623");
    sc_trace(mVcdFile, sel_tmp6_fu_381_p2, "sel_tmp6_fu_381_p2");
    sc_trace(mVcdFile, sel_tmp6_reg_628, "sel_tmp6_reg_628");
    sc_trace(mVcdFile, newSel3_fu_423_p3, "newSel3_fu_423_p3");
    sc_trace(mVcdFile, newSel3_reg_638, "newSel3_reg_638");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, newSel7_fu_453_p3, "newSel7_fu_453_p3");
    sc_trace(mVcdFile, newSel7_reg_643, "newSel7_reg_643");
    sc_trace(mVcdFile, newSel11_fu_483_p3, "newSel11_fu_483_p3");
    sc_trace(mVcdFile, newSel11_reg_648, "newSel11_reg_648");
    sc_trace(mVcdFile, newSel15_fu_513_p3, "newSel15_fu_513_p3");
    sc_trace(mVcdFile, newSel15_reg_653, "newSel15_reg_653");
    sc_trace(mVcdFile, newSel19_fu_543_p3, "newSel19_fu_543_p3");
    sc_trace(mVcdFile, newSel19_reg_658, "newSel19_reg_658");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, grp_fu_551_p2, "grp_fu_551_p2");
    sc_trace(mVcdFile, tmp_3_reg_688, "tmp_3_reg_688");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, grp_fu_556_p2, "grp_fu_556_p2");
    sc_trace(mVcdFile, tmp_3_1_reg_693, "tmp_3_1_reg_693");
    sc_trace(mVcdFile, grp_fu_561_p2, "grp_fu_561_p2");
    sc_trace(mVcdFile, tmp_3_2_reg_698, "tmp_3_2_reg_698");
    sc_trace(mVcdFile, grp_fu_566_p2, "grp_fu_566_p2");
    sc_trace(mVcdFile, tmp_3_3_reg_703, "tmp_3_3_reg_703");
    sc_trace(mVcdFile, grp_fu_571_p2, "grp_fu_571_p2");
    sc_trace(mVcdFile, tmp_3_4_reg_708, "tmp_3_4_reg_708");
    sc_trace(mVcdFile, i_reg_321, "i_reg_321");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, sum_1_4_fu_589_p2, "sum_1_4_fu_589_p2");
    sc_trace(mVcdFile, tmp_1_fu_345_p1, "tmp_1_fu_345_p1");
    sc_trace(mVcdFile, tmp_fu_349_p3, "tmp_fu_349_p3");
    sc_trace(mVcdFile, tmp_t_fu_357_p2, "tmp_t_fu_357_p2");
    sc_trace(mVcdFile, or_cond_fu_394_p2, "or_cond_fu_394_p2");
    sc_trace(mVcdFile, newSel_fu_387_p3, "newSel_fu_387_p3");
    sc_trace(mVcdFile, newSel1_fu_398_p3, "newSel1_fu_398_p3");
    sc_trace(mVcdFile, or_cond1_fu_405_p2, "or_cond1_fu_405_p2");
    sc_trace(mVcdFile, or_cond2_fu_417_p2, "or_cond2_fu_417_p2");
    sc_trace(mVcdFile, newSel2_fu_409_p3, "newSel2_fu_409_p3");
    sc_trace(mVcdFile, newSel4_fu_431_p3, "newSel4_fu_431_p3");
    sc_trace(mVcdFile, newSel5_fu_438_p3, "newSel5_fu_438_p3");
    sc_trace(mVcdFile, newSel6_fu_445_p3, "newSel6_fu_445_p3");
    sc_trace(mVcdFile, newSel8_fu_461_p3, "newSel8_fu_461_p3");
    sc_trace(mVcdFile, newSel9_fu_468_p3, "newSel9_fu_468_p3");
    sc_trace(mVcdFile, newSel10_fu_475_p3, "newSel10_fu_475_p3");
    sc_trace(mVcdFile, newSel12_fu_491_p3, "newSel12_fu_491_p3");
    sc_trace(mVcdFile, newSel13_fu_498_p3, "newSel13_fu_498_p3");
    sc_trace(mVcdFile, newSel14_fu_505_p3, "newSel14_fu_505_p3");
    sc_trace(mVcdFile, newSel16_fu_521_p3, "newSel16_fu_521_p3");
    sc_trace(mVcdFile, newSel17_fu_528_p3, "newSel17_fu_528_p3");
    sc_trace(mVcdFile, newSel18_fu_535_p3, "newSel18_fu_535_p3");
    sc_trace(mVcdFile, tmp2_fu_580_p2, "tmp2_fu_580_p2");
    sc_trace(mVcdFile, tmp1_fu_576_p2, "tmp1_fu_576_p2");
    sc_trace(mVcdFile, tmp3_fu_584_p2, "tmp3_fu_584_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("MatrixMultiply.hdltvin.dat");
    mHdltvoutHandle.open("MatrixMultiply.hdltvout.dat");
}

MatrixMultiply::~MatrixMultiply() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete MatrixMultiply_mubkb_U0;
    delete MatrixMultiply_mubkb_U1;
    delete MatrixMultiply_mubkb_U2;
    delete MatrixMultiply_mubkb_U3;
    delete MatrixMultiply_mubkb_U4;
}

void MatrixMultiply::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void MatrixMultiply::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        i_reg_321 = i_1_reg_603.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_321 = ap_const_lv3_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_1_reg_603 = i_1_fu_339_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        newSel11_reg_648 = newSel11_fu_483_p3.read();
        newSel15_reg_653 = newSel15_fu_513_p3.read();
        newSel19_reg_658 = newSel19_fu_543_p3.read();
        newSel3_reg_638 = newSel3_fu_423_p3.read();
        newSel7_reg_643 = newSel7_fu_453_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond1_fu_333_p2.read(), ap_const_lv1_0))) {
        sel_tmp2_reg_613 = sel_tmp2_fu_369_p2.read();
        sel_tmp4_reg_623 = sel_tmp4_fu_375_p2.read();
        sel_tmp6_reg_628 = sel_tmp6_fu_381_p2.read();
        sel_tmp_reg_608 = sel_tmp_fu_363_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        tmp_3_1_reg_693 = grp_fu_556_p2.read();
        tmp_3_2_reg_698 = grp_fu_561_p2.read();
        tmp_3_3_reg_703 = grp_fu_566_p2.read();
        tmp_3_4_reg_708 = grp_fu_571_p2.read();
        tmp_3_reg_688 = grp_fu_551_p2.read();
    }
}

void MatrixMultiply::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void MatrixMultiply::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void MatrixMultiply::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void MatrixMultiply::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void MatrixMultiply::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void MatrixMultiply::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void MatrixMultiply::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond1_fu_333_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void MatrixMultiply::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void MatrixMultiply::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond1_fu_333_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void MatrixMultiply::thread_cc_0() {
    cc_0 = sum_1_4_fu_589_p2.read();
}

void MatrixMultiply::thread_cc_0_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,3,3>(ap_const_lv3_0, i_reg_321.read()))) {
        cc_0_ap_vld = ap_const_logic_1;
    } else {
        cc_0_ap_vld = ap_const_logic_0;
    }
}

void MatrixMultiply::thread_cc_1() {
    cc_1 = sum_1_4_fu_589_p2.read();
}

void MatrixMultiply::thread_cc_1_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,3,3>(i_reg_321.read(), ap_const_lv3_1))) {
        cc_1_ap_vld = ap_const_logic_1;
    } else {
        cc_1_ap_vld = ap_const_logic_0;
    }
}

void MatrixMultiply::thread_cc_2() {
    cc_2 = sum_1_4_fu_589_p2.read();
}

void MatrixMultiply::thread_cc_2_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,3,3>(i_reg_321.read(), ap_const_lv3_2))) {
        cc_2_ap_vld = ap_const_logic_1;
    } else {
        cc_2_ap_vld = ap_const_logic_0;
    }
}

void MatrixMultiply::thread_cc_3() {
    cc_3 = sum_1_4_fu_589_p2.read();
}

void MatrixMultiply::thread_cc_3_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,3,3>(i_reg_321.read(), ap_const_lv3_3))) {
        cc_3_ap_vld = ap_const_logic_1;
    } else {
        cc_3_ap_vld = ap_const_logic_0;
    }
}

void MatrixMultiply::thread_cc_4() {
    cc_4 = sum_1_4_fu_589_p2.read();
}

void MatrixMultiply::thread_cc_4_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         !esl_seteq<1,3,3>(ap_const_lv3_0, i_reg_321.read()) && 
         !esl_seteq<1,3,3>(i_reg_321.read(), ap_const_lv3_1) && 
         !esl_seteq<1,3,3>(i_reg_321.read(), ap_const_lv3_2) && 
         !esl_seteq<1,3,3>(i_reg_321.read(), ap_const_lv3_3))) {
        cc_4_ap_vld = ap_const_logic_1;
    } else {
        cc_4_ap_vld = ap_const_logic_0;
    }
}

void MatrixMultiply::thread_exitcond1_fu_333_p2() {
    exitcond1_fu_333_p2 = (!i_reg_321.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_321.read() == ap_const_lv3_5);
}

void MatrixMultiply::thread_i_1_fu_339_p2() {
    i_1_fu_339_p2 = (!i_reg_321.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_reg_321.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void MatrixMultiply::thread_newSel10_fu_475_p3() {
    newSel10_fu_475_p3 = (!or_cond_fu_394_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond_fu_394_p2.read()[0].to_bool())? newSel8_fu_461_p3.read(): newSel9_fu_468_p3.read());
}

void MatrixMultiply::thread_newSel11_fu_483_p3() {
    newSel11_fu_483_p3 = (!or_cond2_fu_417_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond2_fu_417_p2.read()[0].to_bool())? newSel10_fu_475_p3.read(): AA_22.read());
}

void MatrixMultiply::thread_newSel12_fu_491_p3() {
    newSel12_fu_491_p3 = (!sel_tmp6_reg_628.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_reg_628.read()[0].to_bool())? AA_18.read(): AA_13.read());
}

void MatrixMultiply::thread_newSel13_fu_498_p3() {
    newSel13_fu_498_p3 = (!sel_tmp2_reg_613.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_reg_613.read()[0].to_bool())? AA_8.read(): AA_3.read());
}

void MatrixMultiply::thread_newSel14_fu_505_p3() {
    newSel14_fu_505_p3 = (!or_cond_fu_394_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond_fu_394_p2.read()[0].to_bool())? newSel12_fu_491_p3.read(): newSel13_fu_498_p3.read());
}

void MatrixMultiply::thread_newSel15_fu_513_p3() {
    newSel15_fu_513_p3 = (!or_cond2_fu_417_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond2_fu_417_p2.read()[0].to_bool())? newSel14_fu_505_p3.read(): AA_23.read());
}

void MatrixMultiply::thread_newSel16_fu_521_p3() {
    newSel16_fu_521_p3 = (!sel_tmp6_reg_628.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_reg_628.read()[0].to_bool())? AA_19.read(): AA_14.read());
}

void MatrixMultiply::thread_newSel17_fu_528_p3() {
    newSel17_fu_528_p3 = (!sel_tmp2_reg_613.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_reg_613.read()[0].to_bool())? AA_9.read(): AA_4.read());
}

void MatrixMultiply::thread_newSel18_fu_535_p3() {
    newSel18_fu_535_p3 = (!or_cond_fu_394_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond_fu_394_p2.read()[0].to_bool())? newSel16_fu_521_p3.read(): newSel17_fu_528_p3.read());
}

void MatrixMultiply::thread_newSel19_fu_543_p3() {
    newSel19_fu_543_p3 = (!or_cond2_fu_417_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond2_fu_417_p2.read()[0].to_bool())? newSel18_fu_535_p3.read(): AA_24.read());
}

void MatrixMultiply::thread_newSel1_fu_398_p3() {
    newSel1_fu_398_p3 = (!sel_tmp2_reg_613.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_reg_613.read()[0].to_bool())? AA_5.read(): AA_0.read());
}

void MatrixMultiply::thread_newSel2_fu_409_p3() {
    newSel2_fu_409_p3 = (!or_cond_fu_394_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond_fu_394_p2.read()[0].to_bool())? newSel_fu_387_p3.read(): newSel1_fu_398_p3.read());
}

void MatrixMultiply::thread_newSel3_fu_423_p3() {
    newSel3_fu_423_p3 = (!or_cond2_fu_417_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond2_fu_417_p2.read()[0].to_bool())? newSel2_fu_409_p3.read(): AA_20.read());
}

void MatrixMultiply::thread_newSel4_fu_431_p3() {
    newSel4_fu_431_p3 = (!sel_tmp6_reg_628.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_reg_628.read()[0].to_bool())? AA_16.read(): AA_11.read());
}

void MatrixMultiply::thread_newSel5_fu_438_p3() {
    newSel5_fu_438_p3 = (!sel_tmp2_reg_613.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_reg_613.read()[0].to_bool())? AA_6.read(): AA_1.read());
}

void MatrixMultiply::thread_newSel6_fu_445_p3() {
    newSel6_fu_445_p3 = (!or_cond_fu_394_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond_fu_394_p2.read()[0].to_bool())? newSel4_fu_431_p3.read(): newSel5_fu_438_p3.read());
}

void MatrixMultiply::thread_newSel7_fu_453_p3() {
    newSel7_fu_453_p3 = (!or_cond2_fu_417_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond2_fu_417_p2.read()[0].to_bool())? newSel6_fu_445_p3.read(): AA_21.read());
}

void MatrixMultiply::thread_newSel8_fu_461_p3() {
    newSel8_fu_461_p3 = (!sel_tmp6_reg_628.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_reg_628.read()[0].to_bool())? AA_17.read(): AA_12.read());
}

void MatrixMultiply::thread_newSel9_fu_468_p3() {
    newSel9_fu_468_p3 = (!sel_tmp2_reg_613.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_reg_613.read()[0].to_bool())? AA_7.read(): AA_2.read());
}

void MatrixMultiply::thread_newSel_fu_387_p3() {
    newSel_fu_387_p3 = (!sel_tmp6_reg_628.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_reg_628.read()[0].to_bool())? AA_15.read(): AA_10.read());
}

void MatrixMultiply::thread_or_cond1_fu_405_p2() {
    or_cond1_fu_405_p2 = (sel_tmp2_reg_613.read() | sel_tmp_reg_608.read());
}

void MatrixMultiply::thread_or_cond2_fu_417_p2() {
    or_cond2_fu_417_p2 = (or_cond_fu_394_p2.read() | or_cond1_fu_405_p2.read());
}

void MatrixMultiply::thread_or_cond_fu_394_p2() {
    or_cond_fu_394_p2 = (sel_tmp6_reg_628.read() | sel_tmp4_reg_623.read());
}

void MatrixMultiply::thread_sel_tmp2_fu_369_p2() {
    sel_tmp2_fu_369_p2 = (!tmp_t_fu_357_p2.read().is_01() || !ap_const_lv5_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_t_fu_357_p2.read() == ap_const_lv5_5);
}

void MatrixMultiply::thread_sel_tmp4_fu_375_p2() {
    sel_tmp4_fu_375_p2 = (!tmp_t_fu_357_p2.read().is_01() || !ap_const_lv5_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_t_fu_357_p2.read() == ap_const_lv5_A);
}

void MatrixMultiply::thread_sel_tmp6_fu_381_p2() {
    sel_tmp6_fu_381_p2 = (!tmp_t_fu_357_p2.read().is_01() || !ap_const_lv5_F.is_01())? sc_lv<1>(): sc_lv<1>(tmp_t_fu_357_p2.read() == ap_const_lv5_F);
}

void MatrixMultiply::thread_sel_tmp_fu_363_p2() {
    sel_tmp_fu_363_p2 = (!tmp_t_fu_357_p2.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_t_fu_357_p2.read() == ap_const_lv5_0);
}

void MatrixMultiply::thread_sum_1_4_fu_589_p2() {
    sum_1_4_fu_589_p2 = (!tmp1_fu_576_p2.read().is_01() || !tmp3_fu_584_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp1_fu_576_p2.read()) + sc_biguint<32>(tmp3_fu_584_p2.read()));
}

void MatrixMultiply::thread_tmp1_fu_576_p2() {
    tmp1_fu_576_p2 = (!tmp_3_3_reg_703.read().is_01() || !tmp_3_2_reg_698.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_3_3_reg_703.read()) + sc_biguint<32>(tmp_3_2_reg_698.read()));
}

void MatrixMultiply::thread_tmp2_fu_580_p2() {
    tmp2_fu_580_p2 = (!tmp_3_4_reg_708.read().is_01() || !tmp_3_1_reg_693.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_3_4_reg_708.read()) + sc_biguint<32>(tmp_3_1_reg_693.read()));
}

void MatrixMultiply::thread_tmp3_fu_584_p2() {
    tmp3_fu_584_p2 = (!tmp_3_reg_688.read().is_01() || !tmp2_fu_580_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_3_reg_688.read()) + sc_biguint<32>(tmp2_fu_580_p2.read()));
}

void MatrixMultiply::thread_tmp_1_fu_345_p1() {
    tmp_1_fu_345_p1 = esl_zext<5,3>(i_reg_321.read());
}

void MatrixMultiply::thread_tmp_fu_349_p3() {
    tmp_fu_349_p3 = esl_concat<3,2>(i_reg_321.read(), ap_const_lv2_0);
}

void MatrixMultiply::thread_tmp_t_fu_357_p2() {
    tmp_t_fu_357_p2 = (!tmp_1_fu_345_p1.read().is_01() || !tmp_fu_349_p3.read().is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_1_fu_345_p1.read()) + sc_biguint<5>(tmp_fu_349_p3.read()));
}

void MatrixMultiply::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond1_fu_333_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm = "XXXXXXX";
            break;
    }
}

void MatrixMultiply::thread_hdltv_gen() {
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
        mHdltvinHandle << " , " <<  " \"AA_0\" :  \"" << AA_0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_1\" :  \"" << AA_1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_2\" :  \"" << AA_2.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_3\" :  \"" << AA_3.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_4\" :  \"" << AA_4.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_5\" :  \"" << AA_5.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_6\" :  \"" << AA_6.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_7\" :  \"" << AA_7.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_8\" :  \"" << AA_8.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_9\" :  \"" << AA_9.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_10\" :  \"" << AA_10.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_11\" :  \"" << AA_11.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_12\" :  \"" << AA_12.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_13\" :  \"" << AA_13.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_14\" :  \"" << AA_14.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_15\" :  \"" << AA_15.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_16\" :  \"" << AA_16.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_17\" :  \"" << AA_17.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_18\" :  \"" << AA_18.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_19\" :  \"" << AA_19.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_20\" :  \"" << AA_20.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_21\" :  \"" << AA_21.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_22\" :  \"" << AA_22.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_23\" :  \"" << AA_23.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"AA_24\" :  \"" << AA_24.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"bb_0\" :  \"" << bb_0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"bb_1\" :  \"" << bb_1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"bb_2\" :  \"" << bb_2.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"bb_3\" :  \"" << bb_3.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"bb_4\" :  \"" << bb_4.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"cc_0\" :  \"" << cc_0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"cc_0_ap_vld\" :  \"" << cc_0_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"cc_1\" :  \"" << cc_1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"cc_1_ap_vld\" :  \"" << cc_1_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"cc_2\" :  \"" << cc_2.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"cc_2_ap_vld\" :  \"" << cc_2_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"cc_3\" :  \"" << cc_3.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"cc_3_ap_vld\" :  \"" << cc_3_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"cc_4\" :  \"" << cc_4.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"cc_4_ap_vld\" :  \"" << cc_4_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

