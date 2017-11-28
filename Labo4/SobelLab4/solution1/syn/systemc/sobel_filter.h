// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.3
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sobel_filter_HH_
#define _sobel_filter_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sobel_filter_mux_fYi.h"
#include "sobel_filter_linebkb.h"
#include "sobel_filter_linedEe.h"
#include "sobel_filter_AXILiteS_s_axi.h"
#include "sobel_filter_gmem_m_axi.h"
#include "sobel_filter_gmem2_m_axi.h"

namespace ap_rtl {

template<unsigned int C_M_AXI_GMEM_ADDR_WIDTH = 32,
         unsigned int C_M_AXI_GMEM_ID_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_DATA_WIDTH = 32,
         unsigned int C_M_AXI_GMEM_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM_BUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_ADDR_WIDTH = 32,
         unsigned int C_M_AXI_GMEM2_ID_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_DATA_WIDTH = 32,
         unsigned int C_M_AXI_GMEM2_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_GMEM2_BUSER_WIDTH = 1,
         unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 5,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct sobel_filter : public sc_module {
    // Port declarations 110
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_logic > m_axi_gmem_AWVALID;
    sc_in< sc_logic > m_axi_gmem_AWREADY;
    sc_out< sc_uint<C_M_AXI_GMEM_ADDR_WIDTH> > m_axi_gmem_AWADDR;
    sc_out< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_AWID;
    sc_out< sc_lv<8> > m_axi_gmem_AWLEN;
    sc_out< sc_lv<3> > m_axi_gmem_AWSIZE;
    sc_out< sc_lv<2> > m_axi_gmem_AWBURST;
    sc_out< sc_lv<2> > m_axi_gmem_AWLOCK;
    sc_out< sc_lv<4> > m_axi_gmem_AWCACHE;
    sc_out< sc_lv<3> > m_axi_gmem_AWPROT;
    sc_out< sc_lv<4> > m_axi_gmem_AWQOS;
    sc_out< sc_lv<4> > m_axi_gmem_AWREGION;
    sc_out< sc_uint<C_M_AXI_GMEM_AWUSER_WIDTH> > m_axi_gmem_AWUSER;
    sc_out< sc_logic > m_axi_gmem_WVALID;
    sc_in< sc_logic > m_axi_gmem_WREADY;
    sc_out< sc_uint<C_M_AXI_GMEM_DATA_WIDTH> > m_axi_gmem_WDATA;
    sc_out< sc_uint<C_M_AXI_GMEM_DATA_WIDTH/8> > m_axi_gmem_WSTRB;
    sc_out< sc_logic > m_axi_gmem_WLAST;
    sc_out< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_WID;
    sc_out< sc_uint<C_M_AXI_GMEM_WUSER_WIDTH> > m_axi_gmem_WUSER;
    sc_out< sc_logic > m_axi_gmem_ARVALID;
    sc_in< sc_logic > m_axi_gmem_ARREADY;
    sc_out< sc_uint<C_M_AXI_GMEM_ADDR_WIDTH> > m_axi_gmem_ARADDR;
    sc_out< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_ARID;
    sc_out< sc_lv<8> > m_axi_gmem_ARLEN;
    sc_out< sc_lv<3> > m_axi_gmem_ARSIZE;
    sc_out< sc_lv<2> > m_axi_gmem_ARBURST;
    sc_out< sc_lv<2> > m_axi_gmem_ARLOCK;
    sc_out< sc_lv<4> > m_axi_gmem_ARCACHE;
    sc_out< sc_lv<3> > m_axi_gmem_ARPROT;
    sc_out< sc_lv<4> > m_axi_gmem_ARQOS;
    sc_out< sc_lv<4> > m_axi_gmem_ARREGION;
    sc_out< sc_uint<C_M_AXI_GMEM_ARUSER_WIDTH> > m_axi_gmem_ARUSER;
    sc_in< sc_logic > m_axi_gmem_RVALID;
    sc_out< sc_logic > m_axi_gmem_RREADY;
    sc_in< sc_uint<C_M_AXI_GMEM_DATA_WIDTH> > m_axi_gmem_RDATA;
    sc_in< sc_logic > m_axi_gmem_RLAST;
    sc_in< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_RID;
    sc_in< sc_uint<C_M_AXI_GMEM_RUSER_WIDTH> > m_axi_gmem_RUSER;
    sc_in< sc_lv<2> > m_axi_gmem_RRESP;
    sc_in< sc_logic > m_axi_gmem_BVALID;
    sc_out< sc_logic > m_axi_gmem_BREADY;
    sc_in< sc_lv<2> > m_axi_gmem_BRESP;
    sc_in< sc_uint<C_M_AXI_GMEM_ID_WIDTH> > m_axi_gmem_BID;
    sc_in< sc_uint<C_M_AXI_GMEM_BUSER_WIDTH> > m_axi_gmem_BUSER;
    sc_out< sc_logic > m_axi_gmem2_AWVALID;
    sc_in< sc_logic > m_axi_gmem2_AWREADY;
    sc_out< sc_uint<C_M_AXI_GMEM2_ADDR_WIDTH> > m_axi_gmem2_AWADDR;
    sc_out< sc_uint<C_M_AXI_GMEM2_ID_WIDTH> > m_axi_gmem2_AWID;
    sc_out< sc_lv<8> > m_axi_gmem2_AWLEN;
    sc_out< sc_lv<3> > m_axi_gmem2_AWSIZE;
    sc_out< sc_lv<2> > m_axi_gmem2_AWBURST;
    sc_out< sc_lv<2> > m_axi_gmem2_AWLOCK;
    sc_out< sc_lv<4> > m_axi_gmem2_AWCACHE;
    sc_out< sc_lv<3> > m_axi_gmem2_AWPROT;
    sc_out< sc_lv<4> > m_axi_gmem2_AWQOS;
    sc_out< sc_lv<4> > m_axi_gmem2_AWREGION;
    sc_out< sc_uint<C_M_AXI_GMEM2_AWUSER_WIDTH> > m_axi_gmem2_AWUSER;
    sc_out< sc_logic > m_axi_gmem2_WVALID;
    sc_in< sc_logic > m_axi_gmem2_WREADY;
    sc_out< sc_uint<C_M_AXI_GMEM2_DATA_WIDTH> > m_axi_gmem2_WDATA;
    sc_out< sc_uint<C_M_AXI_GMEM2_DATA_WIDTH/8> > m_axi_gmem2_WSTRB;
    sc_out< sc_logic > m_axi_gmem2_WLAST;
    sc_out< sc_uint<C_M_AXI_GMEM2_ID_WIDTH> > m_axi_gmem2_WID;
    sc_out< sc_uint<C_M_AXI_GMEM2_WUSER_WIDTH> > m_axi_gmem2_WUSER;
    sc_out< sc_logic > m_axi_gmem2_ARVALID;
    sc_in< sc_logic > m_axi_gmem2_ARREADY;
    sc_out< sc_uint<C_M_AXI_GMEM2_ADDR_WIDTH> > m_axi_gmem2_ARADDR;
    sc_out< sc_uint<C_M_AXI_GMEM2_ID_WIDTH> > m_axi_gmem2_ARID;
    sc_out< sc_lv<8> > m_axi_gmem2_ARLEN;
    sc_out< sc_lv<3> > m_axi_gmem2_ARSIZE;
    sc_out< sc_lv<2> > m_axi_gmem2_ARBURST;
    sc_out< sc_lv<2> > m_axi_gmem2_ARLOCK;
    sc_out< sc_lv<4> > m_axi_gmem2_ARCACHE;
    sc_out< sc_lv<3> > m_axi_gmem2_ARPROT;
    sc_out< sc_lv<4> > m_axi_gmem2_ARQOS;
    sc_out< sc_lv<4> > m_axi_gmem2_ARREGION;
    sc_out< sc_uint<C_M_AXI_GMEM2_ARUSER_WIDTH> > m_axi_gmem2_ARUSER;
    sc_in< sc_logic > m_axi_gmem2_RVALID;
    sc_out< sc_logic > m_axi_gmem2_RREADY;
    sc_in< sc_uint<C_M_AXI_GMEM2_DATA_WIDTH> > m_axi_gmem2_RDATA;
    sc_in< sc_logic > m_axi_gmem2_RLAST;
    sc_in< sc_uint<C_M_AXI_GMEM2_ID_WIDTH> > m_axi_gmem2_RID;
    sc_in< sc_uint<C_M_AXI_GMEM2_RUSER_WIDTH> > m_axi_gmem2_RUSER;
    sc_in< sc_lv<2> > m_axi_gmem2_RRESP;
    sc_in< sc_logic > m_axi_gmem2_BVALID;
    sc_out< sc_logic > m_axi_gmem2_BREADY;
    sc_in< sc_lv<2> > m_axi_gmem2_BRESP;
    sc_in< sc_uint<C_M_AXI_GMEM2_ID_WIDTH> > m_axi_gmem2_BID;
    sc_in< sc_uint<C_M_AXI_GMEM2_BUSER_WIDTH> > m_axi_gmem2_BUSER;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_logic > ap_var_for_const6;
    sc_signal< sc_lv<32> > ap_var_for_const7;
    sc_signal< sc_lv<1> > ap_var_for_const1;
    sc_signal< sc_lv<2> > ap_var_for_const4;
    sc_signal< sc_lv<32> > ap_var_for_const2;
    sc_signal< sc_lv<3> > ap_var_for_const3;
    sc_signal< sc_lv<4> > ap_var_for_const5;
    sc_signal< sc_lv<4> > ap_var_for_const9;
    sc_signal< sc_lv<8> > ap_var_for_const8;


    // Module declarations
    sobel_filter(sc_module_name name);
    SC_HAS_PROCESS(sobel_filter);

    ~sobel_filter();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sobel_filter_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* sobel_filter_AXILiteS_s_axi_U;
    sobel_filter_gmem_m_axi<8,32,5,16,16,16,16,C_M_AXI_GMEM_ID_WIDTH,C_M_AXI_GMEM_ADDR_WIDTH,C_M_AXI_GMEM_DATA_WIDTH,C_M_AXI_GMEM_AWUSER_WIDTH,C_M_AXI_GMEM_ARUSER_WIDTH,C_M_AXI_GMEM_WUSER_WIDTH,C_M_AXI_GMEM_RUSER_WIDTH,C_M_AXI_GMEM_BUSER_WIDTH,C_M_AXI_GMEM_USER_VALUE,C_M_AXI_GMEM_PROT_VALUE,C_M_AXI_GMEM_CACHE_VALUE>* sobel_filter_gmem_m_axi_U;
    sobel_filter_gmem2_m_axi<32,32,5,16,16,16,16,C_M_AXI_GMEM2_ID_WIDTH,C_M_AXI_GMEM2_ADDR_WIDTH,C_M_AXI_GMEM2_DATA_WIDTH,C_M_AXI_GMEM2_AWUSER_WIDTH,C_M_AXI_GMEM2_ARUSER_WIDTH,C_M_AXI_GMEM2_WUSER_WIDTH,C_M_AXI_GMEM2_RUSER_WIDTH,C_M_AXI_GMEM2_BUSER_WIDTH,C_M_AXI_GMEM2_USER_VALUE,C_M_AXI_GMEM2_PROT_VALUE,C_M_AXI_GMEM2_CACHE_VALUE>* sobel_filter_gmem2_m_axi_U;
    sobel_filter_linebkb* lineBuffer_0_U;
    sobel_filter_linebkb* lineBuffer_1_U;
    sobel_filter_linedEe* lineBuffer_2_U;
    sobel_filter_linedEe* lineBuffer_3_U;
    sobel_filter_mux_fYi<1,1,8,8,8,8,2,8>* sobel_filter_mux_fYi_U1;
    sobel_filter_mux_fYi<1,1,8,8,8,8,2,8>* sobel_filter_mux_fYi_U2;
    sobel_filter_mux_fYi<1,1,8,8,8,8,2,8>* sobel_filter_mux_fYi_U3;
    sobel_filter_mux_fYi<1,1,8,8,8,8,2,8>* sobel_filter_mux_fYi_U4;
    sobel_filter_mux_fYi<1,1,8,8,8,8,2,8>* sobel_filter_mux_fYi_U5;
    sobel_filter_mux_fYi<1,1,8,8,8,8,2,8>* sobel_filter_mux_fYi_U6;
    sobel_filter_mux_fYi<1,1,8,8,8,8,2,8>* sobel_filter_mux_fYi_U7;
    sobel_filter_mux_fYi<1,1,8,8,8,8,2,8>* sobel_filter_mux_fYi_U8;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<26> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<32> > inter_pix;
    sc_signal< sc_lv<32> > out_pix;
    sc_signal< sc_logic > gmem_blk_n_AR;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > gmem_blk_n_R;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<1> > tmp_4_fu_485_p2;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<1> > tmp_s_reg_1204;
    sc_signal< sc_logic > gmem2_blk_n_AW;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > gmem2_blk_n_W;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > gmem2_blk_n_B;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > gmem_AWREADY;
    sc_signal< sc_logic > gmem_WREADY;
    sc_signal< sc_logic > gmem_ARVALID;
    sc_signal< sc_logic > gmem_ARREADY;
    sc_signal< sc_lv<32> > gmem_ARADDR;
    sc_signal< sc_logic > gmem_RVALID;
    sc_signal< sc_logic > gmem_RREADY;
    sc_signal< sc_lv<8> > gmem_RDATA;
    sc_signal< sc_logic > gmem_RLAST;
    sc_signal< sc_lv<1> > gmem_RID;
    sc_signal< sc_lv<1> > gmem_RUSER;
    sc_signal< sc_lv<2> > gmem_RRESP;
    sc_signal< sc_logic > gmem_BVALID;
    sc_signal< sc_lv<2> > gmem_BRESP;
    sc_signal< sc_lv<1> > gmem_BID;
    sc_signal< sc_lv<1> > gmem_BUSER;
    sc_signal< sc_logic > gmem2_AWVALID;
    sc_signal< sc_logic > gmem2_AWREADY;
    sc_signal< sc_logic > gmem2_WVALID;
    sc_signal< sc_logic > gmem2_WREADY;
    sc_signal< sc_lv<32> > gmem2_WDATA;
    sc_signal< sc_logic > gmem2_ARREADY;
    sc_signal< sc_logic > gmem2_RVALID;
    sc_signal< sc_lv<32> > gmem2_RDATA;
    sc_signal< sc_logic > gmem2_RLAST;
    sc_signal< sc_lv<1> > gmem2_RID;
    sc_signal< sc_lv<1> > gmem2_RUSER;
    sc_signal< sc_lv<2> > gmem2_RRESP;
    sc_signal< sc_logic > gmem2_BVALID;
    sc_signal< sc_logic > gmem2_BREADY;
    sc_signal< sc_lv<2> > gmem2_BRESP;
    sc_signal< sc_lv<1> > gmem2_BID;
    sc_signal< sc_lv<1> > gmem2_BUSER;
    sc_signal< sc_lv<11> > row_assign_reg_381;
    sc_signal< sc_lv<33> > tmp_20_cast_fu_402_p1;
    sc_signal< sc_lv<33> > tmp_20_cast_reg_1095;
    sc_signal< sc_lv<34> > tmp_22_cast_fu_406_p1;
    sc_signal< sc_lv<34> > tmp_22_cast_reg_1100;
    sc_signal< sc_lv<2> > tmp_11_fu_416_p2;
    sc_signal< sc_lv<2> > tmp_11_reg_1109;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > cond_fu_456_p2;
    sc_signal< sc_lv<1> > cond_reg_1114;
    sc_signal< sc_lv<1> > tmp_fu_410_p2;
    sc_signal< sc_lv<32> > gmem_addr_reg_1118;
    sc_signal< sc_lv<11> > i_1_fu_491_p2;
    sc_signal< sc_lv<11> > i_1_reg_1127;
    sc_signal< bool > ap_block_state10;
    sc_signal< sc_lv<8> > gmem_addr_read_reg_1132;
    sc_signal< sc_lv<11> > lineBuffer_0_addr_reg_1138;
    sc_signal< sc_lv<11> > lineBuffer_1_addr_reg_1143;
    sc_signal< sc_lv<11> > i_2_fu_509_p2;
    sc_signal< sc_lv<11> > i_2_reg_1151;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<2> > tmp_26_fu_607_p1;
    sc_signal< sc_lv<2> > tmp_26_reg_1156;
    sc_signal< sc_lv<1> > tmp_3_fu_503_p2;
    sc_signal< sc_lv<1> > tmp1_fu_627_p2;
    sc_signal< sc_lv<1> > tmp1_reg_1164;
    sc_signal< sc_lv<32> > gmem2_addr_reg_1169;
    sc_signal< sc_lv<32> > gmem_addr_1_reg_1175;
    sc_signal< sc_lv<2> > tmp_23_fu_663_p1;
    sc_signal< sc_lv<2> > tmp_23_reg_1181;
    sc_signal< sc_logic > ap_sig_ioackin_gmem2_AWREADY;
    sc_signal< sc_lv<2> > tmp_28_0_t_fu_667_p2;
    sc_signal< sc_lv<2> > tmp_28_0_t_reg_1185;
    sc_signal< sc_lv<2> > tmp_28_2_t_fu_672_p2;
    sc_signal< sc_lv<2> > tmp_28_2_t_reg_1192;
    sc_signal< sc_lv<12> > row_assign_cast_fu_677_p1;
    sc_signal< sc_lv<12> > row_assign_cast_reg_1199;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state20_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state22_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state24_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > tmp_s_fu_681_p2;
    sc_signal< sc_lv<11> > j_fu_687_p2;
    sc_signal< sc_lv<11> > j_reg_1208;
    sc_signal< sc_lv<1> > or_cond2_fu_711_p2;
    sc_signal< sc_lv<1> > or_cond2_reg_1214;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_or_cond2_reg_1214;
    sc_signal< sc_lv<11> > lineBuffer_0_addr_2_reg_1220;
    sc_signal< sc_lv<11> > lineBuffer_1_addr_2_reg_1226;
    sc_signal< sc_lv<11> > lineBuffer_2_addr_1_reg_1232;
    sc_signal< sc_lv<11> > lineBuffer_3_addr_1_reg_1238;
    sc_signal< bool > ap_block_state21_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state23_pp0_stage1_iter1;
    sc_signal< bool > ap_block_state25_pp0_stage1_iter2;
    sc_signal< sc_logic > ap_sig_ioackin_gmem2_WREADY;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<8> > tmp_33_fu_741_p6;
    sc_signal< sc_lv<8> > tmp_33_reg_1264;
    sc_signal< sc_lv<8> > tmp_43_fu_761_p6;
    sc_signal< sc_lv<8> > tmp_43_reg_1289;
    sc_signal< sc_lv<8> > gmem_addr_1_read_reg_1294;
    sc_signal< sc_lv<8> > lineBuffer_0_q0;
    sc_signal< sc_lv<8> > lineBuffer_0_load_2_reg_1302;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<8> > lineBuffer_1_q0;
    sc_signal< sc_lv<8> > lineBuffer_1_load_2_reg_1308;
    sc_signal< sc_lv<8> > lineBuffer_2_q1;
    sc_signal< sc_lv<8> > lineBuffer_2_load_2_reg_1314;
    sc_signal< sc_lv<8> > lineBuffer_3_q1;
    sc_signal< sc_lv<8> > lineBuffer_3_load_2_reg_1320;
    sc_signal< sc_lv<9> > x_weight_0_2_fu_808_p2;
    sc_signal< sc_lv<9> > x_weight_0_2_reg_1326;
    sc_signal< sc_lv<8> > tmp_40_fu_814_p6;
    sc_signal< sc_lv<8> > tmp_40_reg_1331;
    sc_signal< sc_lv<9> > tmp3_fu_827_p2;
    sc_signal< sc_lv<9> > tmp3_reg_1336;
    sc_signal< sc_lv<8> > tmp_42_fu_833_p6;
    sc_signal< sc_lv<8> > tmp_42_reg_1341;
    sc_signal< sc_lv<11> > x_weight_2_2_fu_966_p2;
    sc_signal< sc_lv<11> > x_weight_2_2_reg_1346;
    sc_signal< sc_lv<11> > y_weight_2_2_fu_972_p2;
    sc_signal< sc_lv<11> > y_weight_2_2_reg_1351;
    sc_signal< sc_lv<8> > tmp_34_fu_978_p2;
    sc_signal< sc_lv<8> > tmp_34_reg_1356;
    sc_signal< sc_lv<8> > tmp_47_fu_984_p1;
    sc_signal< sc_lv<8> > tmp_47_reg_1362;
    sc_signal< sc_lv<8> > val_fu_1072_p3;
    sc_signal< sc_lv<8> > val_reg_1368;
    sc_signal< sc_lv<11> > lastLine_2_fu_1089_p2;
    sc_signal< sc_lv<11> > lastLine_2_reg_1376;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state20;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< sc_lv<11> > lineBuffer_0_address0;
    sc_signal< sc_logic > lineBuffer_0_ce0;
    sc_signal< sc_logic > lineBuffer_0_we0;
    sc_signal< sc_lv<11> > lineBuffer_0_address1;
    sc_signal< sc_logic > lineBuffer_0_ce1;
    sc_signal< sc_logic > lineBuffer_0_we1;
    sc_signal< sc_lv<8> > lineBuffer_0_q1;
    sc_signal< sc_lv<11> > lineBuffer_1_address0;
    sc_signal< sc_logic > lineBuffer_1_ce0;
    sc_signal< sc_logic > lineBuffer_1_we0;
    sc_signal< sc_lv<11> > lineBuffer_1_address1;
    sc_signal< sc_logic > lineBuffer_1_ce1;
    sc_signal< sc_logic > lineBuffer_1_we1;
    sc_signal< sc_lv<8> > lineBuffer_1_q1;
    sc_signal< sc_lv<11> > lineBuffer_2_address0;
    sc_signal< sc_logic > lineBuffer_2_ce0;
    sc_signal< sc_lv<8> > lineBuffer_2_q0;
    sc_signal< sc_lv<11> > lineBuffer_2_address1;
    sc_signal< sc_logic > lineBuffer_2_ce1;
    sc_signal< sc_logic > lineBuffer_2_we1;
    sc_signal< sc_lv<11> > lineBuffer_3_address0;
    sc_signal< sc_logic > lineBuffer_3_ce0;
    sc_signal< sc_lv<8> > lineBuffer_3_q0;
    sc_signal< sc_lv<11> > lineBuffer_3_address1;
    sc_signal< sc_logic > lineBuffer_3_ce1;
    sc_signal< sc_logic > lineBuffer_3_we1;
    sc_signal< sc_lv<2> > lastLine_reg_336;
    sc_signal< sc_lv<11> > i_reg_347;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<11> > lastLine_1_reg_358;
    sc_signal< sc_lv<11> > i1_reg_370;
    sc_signal< sc_lv<11> > ap_phi_mux_row_assign_phi_fu_385_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > tmp_14_fu_497_p1;
    sc_signal< sc_lv<64> > tmp_35_0_1_fu_716_p1;
    sc_signal< sc_lv<64> > tmp_30_fu_733_p1;
    sc_signal< sc_lv<64> > tmp_35_0_2_fu_754_p1;
    sc_signal< sc_lv<64> > inter_pix2_sum_cast_fu_475_p1;
    sc_signal< sc_lv<64> > out_pix4_sum_cast_fu_638_p1;
    sc_signal< sc_lv<64> > inter_pix2_sum6_cast_fu_653_p1;
    sc_signal< sc_logic > ap_reg_ioackin_gmem_ARREADY;
    sc_signal< sc_logic > ap_sig_ioackin_gmem_ARREADY;
    sc_signal< sc_logic > ap_reg_ioackin_gmem2_AWREADY;
    sc_signal< sc_logic > ap_reg_ioackin_gmem2_WREADY;
    sc_signal< bool > ap_block_pp0_stage1_01001;
    sc_signal< sc_lv<30> > tmp_12_fu_392_p4;
    sc_signal< sc_lv<1> > tmp_13_fu_422_p1;
    sc_signal< sc_lv<12> > p_shl_fu_426_p3;
    sc_signal< sc_lv<8> > p_shl2_fu_438_p3;
    sc_signal< sc_lv<13> > p_shl_cast_fu_434_p1;
    sc_signal< sc_lv<13> > p_shl2_cast_fu_446_p1;
    sc_signal< sc_lv<13> > tmp_1_fu_450_p2;
    sc_signal< sc_lv<32> > tmp_19_fu_462_p1;
    sc_signal< sc_lv<34> > tmp_26_cast_fu_466_p1;
    sc_signal< sc_lv<34> > inter_pix2_sum_fu_470_p2;
    sc_signal< sc_lv<22> > p_shl5_fu_527_p3;
    sc_signal< sc_lv<18> > p_shl6_fu_539_p3;
    sc_signal< sc_lv<23> > p_shl5_cast_fu_535_p1;
    sc_signal< sc_lv<23> > p_shl6_cast_fu_547_p1;
    sc_signal< sc_lv<1> > tmp_20_fu_557_p2;
    sc_signal< sc_lv<11> > tmp_22_fu_563_p2;
    sc_signal< sc_lv<11> > tmp_8_fu_569_p3;
    sc_signal< sc_lv<22> > p_shl3_fu_577_p3;
    sc_signal< sc_lv<18> > p_shl4_fu_589_p3;
    sc_signal< sc_lv<23> > p_shl3_cast_fu_585_p1;
    sc_signal< sc_lv<23> > p_shl4_cast_fu_597_p1;
    sc_signal< sc_lv<23> > tmp_7_fu_551_p2;
    sc_signal< sc_lv<32> > tmp_27_fu_611_p1;
    sc_signal< sc_lv<23> > tmp_9_fu_601_p2;
    sc_signal< sc_lv<32> > tmp_28_fu_619_p1;
    sc_signal< sc_lv<1> > tmp_5_fu_515_p2;
    sc_signal< sc_lv<1> > tmp_6_fu_521_p2;
    sc_signal< sc_lv<33> > tmp_30_cast_fu_615_p1;
    sc_signal< sc_lv<33> > out_pix4_sum_fu_633_p2;
    sc_signal< sc_lv<34> > tmp_42_cast_fu_623_p1;
    sc_signal< sc_lv<34> > inter_pix2_sum6_fu_648_p2;
    sc_signal< sc_lv<1> > tmp_16_fu_693_p2;
    sc_signal< sc_lv<1> > tmp_17_fu_699_p2;
    sc_signal< sc_lv<1> > tmp2_fu_705_p2;
    sc_signal< sc_lv<12> > tmp_29_fu_724_p2;
    sc_signal< sc_lv<32> > tmp_341_cast_fu_729_p1;
    sc_signal< sc_lv<8> > tmp_32_fu_774_p6;
    sc_signal< sc_lv<8> > tmp_37_fu_791_p6;
    sc_signal< sc_lv<9> > tmp_36_0_2_cast_fu_804_p1;
    sc_signal< sc_lv<9> > tmp_361_cast_fu_787_p1;
    sc_signal< sc_lv<9> > tmp_41_0_1_fu_846_p3;
    sc_signal< sc_lv<9> > p_shl1_fu_860_p3;
    sc_signal< sc_lv<11> > x_weight_0_2_cast_fu_857_p1;
    sc_signal< sc_lv<11> > p_shl1_cast_fu_867_p1;
    sc_signal< sc_lv<8> > tmp_41_fu_877_p6;
    sc_signal< sc_lv<9> > tmp_39_1_2_fu_886_p3;
    sc_signal< sc_lv<11> > x_weight_1_1_fu_871_p2;
    sc_signal< sc_lv<11> > tmp_39_1_2_cast_fu_894_p1;
    sc_signal< sc_lv<10> > tmp_41_0_1_cast_fu_853_p1;
    sc_signal< sc_lv<10> > tmp3_cast_fu_904_p1;
    sc_signal< sc_lv<10> > y_weight_1_2_fu_907_p2;
    sc_signal< sc_lv<11> > x_weight_1_2_fu_898_p2;
    sc_signal< sc_lv<11> > tmp_36_2_cast_fu_917_p1;
    sc_signal< sc_lv<11> > y_weight_1_2_cast_fu_913_p1;
    sc_signal< sc_lv<9> > p_shl7_fu_932_p3;
    sc_signal< sc_lv<11> > y_weight_2_fu_926_p2;
    sc_signal< sc_lv<11> > p_shl7_cast_fu_939_p1;
    sc_signal< sc_lv<8> > tmp_44_fu_949_p6;
    sc_signal< sc_lv<11> > x_weight_2_fu_920_p2;
    sc_signal< sc_lv<11> > tmp_36_2_2_cast_fu_958_p1;
    sc_signal< sc_lv<11> > y_weight_2_1_fu_943_p2;
    sc_signal< sc_lv<8> > tmp_46_fu_962_p1;
    sc_signal< sc_lv<1> > tmp_18_fu_988_p2;
    sc_signal< sc_lv<8> > tmp_35_fu_993_p2;
    sc_signal< sc_lv<1> > tmp_21_fu_1005_p2;
    sc_signal< sc_lv<8> > tmp_38_fu_1010_p2;
    sc_signal< sc_lv<8> > tmp_39_fu_1015_p3;
    sc_signal< sc_lv<8> > tmp_36_fu_998_p3;
    sc_signal< sc_lv<8> > tmp_24_fu_1022_p2;
    sc_signal< sc_lv<1> > tmp_31_fu_1040_p2;
    sc_signal< sc_lv<8> > edge_val_fu_1028_p2;
    sc_signal< sc_lv<1> > not_or_cond2_fu_1054_p2;
    sc_signal< sc_lv<1> > tmp_25_fu_1034_p2;
    sc_signal< sc_lv<1> > tmp_48_fu_1067_p2;
    sc_signal< sc_lv<8> > edge_val_1_i_cast_fu_1059_p3;
    sc_signal< sc_lv<8> > p_i_fu_1046_p3;
    sc_signal< sc_lv<26> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<26> ap_ST_fsm_state1;
    static const sc_lv<26> ap_ST_fsm_state2;
    static const sc_lv<26> ap_ST_fsm_state3;
    static const sc_lv<26> ap_ST_fsm_state4;
    static const sc_lv<26> ap_ST_fsm_state5;
    static const sc_lv<26> ap_ST_fsm_state6;
    static const sc_lv<26> ap_ST_fsm_state7;
    static const sc_lv<26> ap_ST_fsm_state8;
    static const sc_lv<26> ap_ST_fsm_state9;
    static const sc_lv<26> ap_ST_fsm_state10;
    static const sc_lv<26> ap_ST_fsm_state11;
    static const sc_lv<26> ap_ST_fsm_state12;
    static const sc_lv<26> ap_ST_fsm_state13;
    static const sc_lv<26> ap_ST_fsm_state14;
    static const sc_lv<26> ap_ST_fsm_state15;
    static const sc_lv<26> ap_ST_fsm_state16;
    static const sc_lv<26> ap_ST_fsm_state17;
    static const sc_lv<26> ap_ST_fsm_state18;
    static const sc_lv<26> ap_ST_fsm_state19;
    static const sc_lv<26> ap_ST_fsm_pp0_stage0;
    static const sc_lv<26> ap_ST_fsm_pp0_stage1;
    static const sc_lv<26> ap_ST_fsm_state26;
    static const sc_lv<26> ap_ST_fsm_state27;
    static const sc_lv<26> ap_ST_fsm_state28;
    static const sc_lv<26> ap_ST_fsm_state29;
    static const sc_lv<26> ap_ST_fsm_state30;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_14;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_19;
    static const int C_S_AXI_DATA_WIDTH;
    static const int C_M_AXI_GMEM_USER_VALUE;
    static const int C_M_AXI_GMEM_PROT_VALUE;
    static const int C_M_AXI_GMEM_CACHE_VALUE;
    static const int C_M_AXI_DATA_WIDTH;
    static const int C_M_AXI_GMEM2_USER_VALUE;
    static const int C_M_AXI_GMEM2_PROT_VALUE;
    static const int C_M_AXI_GMEM2_CACHE_VALUE;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<11> ap_const_lv11_2;
    static const sc_lv<32> ap_const_lv32_780;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<11> ap_const_lv11_780;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<11> ap_const_lv11_438;
    static const sc_lv<11> ap_const_lv11_437;
    static const sc_lv<11> ap_const_lv11_3C8;
    static const sc_lv<11> ap_const_lv11_77F;
    static const sc_lv<12> ap_const_lv12_FFF;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<8> ap_const_lv8_37;
    static const sc_lv<8> ap_const_lv8_9B;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const6();
    void thread_ap_var_for_const7();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const9();
    void thread_ap_var_for_const8();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_01001();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_state10();
    void thread_ap_block_state20_pp0_stage0_iter0();
    void thread_ap_block_state21_pp0_stage1_iter0();
    void thread_ap_block_state22_pp0_stage0_iter1();
    void thread_ap_block_state23_pp0_stage1_iter1();
    void thread_ap_block_state24_pp0_stage0_iter2();
    void thread_ap_block_state25_pp0_stage1_iter2();
    void thread_ap_condition_pp0_exit_iter0_state20();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_row_assign_phi_fu_385_p4();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_ioackin_gmem2_AWREADY();
    void thread_ap_sig_ioackin_gmem2_WREADY();
    void thread_ap_sig_ioackin_gmem_ARREADY();
    void thread_cond_fu_456_p2();
    void thread_edge_val_1_i_cast_fu_1059_p3();
    void thread_edge_val_fu_1028_p2();
    void thread_gmem2_AWVALID();
    void thread_gmem2_BREADY();
    void thread_gmem2_WDATA();
    void thread_gmem2_WVALID();
    void thread_gmem2_blk_n_AW();
    void thread_gmem2_blk_n_B();
    void thread_gmem2_blk_n_W();
    void thread_gmem_ARADDR();
    void thread_gmem_ARVALID();
    void thread_gmem_RREADY();
    void thread_gmem_blk_n_AR();
    void thread_gmem_blk_n_R();
    void thread_i_1_fu_491_p2();
    void thread_i_2_fu_509_p2();
    void thread_inter_pix2_sum6_cast_fu_653_p1();
    void thread_inter_pix2_sum6_fu_648_p2();
    void thread_inter_pix2_sum_cast_fu_475_p1();
    void thread_inter_pix2_sum_fu_470_p2();
    void thread_j_fu_687_p2();
    void thread_lastLine_2_fu_1089_p2();
    void thread_lineBuffer_0_address0();
    void thread_lineBuffer_0_address1();
    void thread_lineBuffer_0_ce0();
    void thread_lineBuffer_0_ce1();
    void thread_lineBuffer_0_we0();
    void thread_lineBuffer_0_we1();
    void thread_lineBuffer_1_address0();
    void thread_lineBuffer_1_address1();
    void thread_lineBuffer_1_ce0();
    void thread_lineBuffer_1_ce1();
    void thread_lineBuffer_1_we0();
    void thread_lineBuffer_1_we1();
    void thread_lineBuffer_2_address0();
    void thread_lineBuffer_2_address1();
    void thread_lineBuffer_2_ce0();
    void thread_lineBuffer_2_ce1();
    void thread_lineBuffer_2_we1();
    void thread_lineBuffer_3_address0();
    void thread_lineBuffer_3_address1();
    void thread_lineBuffer_3_ce0();
    void thread_lineBuffer_3_ce1();
    void thread_lineBuffer_3_we1();
    void thread_not_or_cond2_fu_1054_p2();
    void thread_or_cond2_fu_711_p2();
    void thread_out_pix4_sum_cast_fu_638_p1();
    void thread_out_pix4_sum_fu_633_p2();
    void thread_p_i_fu_1046_p3();
    void thread_p_shl1_cast_fu_867_p1();
    void thread_p_shl1_fu_860_p3();
    void thread_p_shl2_cast_fu_446_p1();
    void thread_p_shl2_fu_438_p3();
    void thread_p_shl3_cast_fu_585_p1();
    void thread_p_shl3_fu_577_p3();
    void thread_p_shl4_cast_fu_597_p1();
    void thread_p_shl4_fu_589_p3();
    void thread_p_shl5_cast_fu_535_p1();
    void thread_p_shl5_fu_527_p3();
    void thread_p_shl6_cast_fu_547_p1();
    void thread_p_shl6_fu_539_p3();
    void thread_p_shl7_cast_fu_939_p1();
    void thread_p_shl7_fu_932_p3();
    void thread_p_shl_cast_fu_434_p1();
    void thread_p_shl_fu_426_p3();
    void thread_row_assign_cast_fu_677_p1();
    void thread_tmp1_fu_627_p2();
    void thread_tmp2_fu_705_p2();
    void thread_tmp3_cast_fu_904_p1();
    void thread_tmp3_fu_827_p2();
    void thread_tmp_11_fu_416_p2();
    void thread_tmp_12_fu_392_p4();
    void thread_tmp_13_fu_422_p1();
    void thread_tmp_14_fu_497_p1();
    void thread_tmp_16_fu_693_p2();
    void thread_tmp_17_fu_699_p2();
    void thread_tmp_18_fu_988_p2();
    void thread_tmp_19_fu_462_p1();
    void thread_tmp_1_fu_450_p2();
    void thread_tmp_20_cast_fu_402_p1();
    void thread_tmp_20_fu_557_p2();
    void thread_tmp_21_fu_1005_p2();
    void thread_tmp_22_cast_fu_406_p1();
    void thread_tmp_22_fu_563_p2();
    void thread_tmp_23_fu_663_p1();
    void thread_tmp_24_fu_1022_p2();
    void thread_tmp_25_fu_1034_p2();
    void thread_tmp_26_cast_fu_466_p1();
    void thread_tmp_26_fu_607_p1();
    void thread_tmp_27_fu_611_p1();
    void thread_tmp_28_0_t_fu_667_p2();
    void thread_tmp_28_2_t_fu_672_p2();
    void thread_tmp_28_fu_619_p1();
    void thread_tmp_29_fu_724_p2();
    void thread_tmp_30_cast_fu_615_p1();
    void thread_tmp_30_fu_733_p1();
    void thread_tmp_31_fu_1040_p2();
    void thread_tmp_341_cast_fu_729_p1();
    void thread_tmp_34_fu_978_p2();
    void thread_tmp_35_0_1_fu_716_p1();
    void thread_tmp_35_0_2_fu_754_p1();
    void thread_tmp_35_fu_993_p2();
    void thread_tmp_361_cast_fu_787_p1();
    void thread_tmp_36_0_2_cast_fu_804_p1();
    void thread_tmp_36_2_2_cast_fu_958_p1();
    void thread_tmp_36_2_cast_fu_917_p1();
    void thread_tmp_36_fu_998_p3();
    void thread_tmp_38_fu_1010_p2();
    void thread_tmp_39_1_2_cast_fu_894_p1();
    void thread_tmp_39_1_2_fu_886_p3();
    void thread_tmp_39_fu_1015_p3();
    void thread_tmp_3_fu_503_p2();
    void thread_tmp_41_0_1_cast_fu_853_p1();
    void thread_tmp_41_0_1_fu_846_p3();
    void thread_tmp_42_cast_fu_623_p1();
    void thread_tmp_46_fu_962_p1();
    void thread_tmp_47_fu_984_p1();
    void thread_tmp_48_fu_1067_p2();
    void thread_tmp_4_fu_485_p2();
    void thread_tmp_5_fu_515_p2();
    void thread_tmp_6_fu_521_p2();
    void thread_tmp_7_fu_551_p2();
    void thread_tmp_8_fu_569_p3();
    void thread_tmp_9_fu_601_p2();
    void thread_tmp_fu_410_p2();
    void thread_tmp_s_fu_681_p2();
    void thread_val_fu_1072_p3();
    void thread_x_weight_0_2_cast_fu_857_p1();
    void thread_x_weight_0_2_fu_808_p2();
    void thread_x_weight_1_1_fu_871_p2();
    void thread_x_weight_1_2_fu_898_p2();
    void thread_x_weight_2_2_fu_966_p2();
    void thread_x_weight_2_fu_920_p2();
    void thread_y_weight_1_2_cast_fu_913_p1();
    void thread_y_weight_1_2_fu_907_p2();
    void thread_y_weight_2_1_fu_943_p2();
    void thread_y_weight_2_2_fu_972_p2();
    void thread_y_weight_2_fu_926_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
