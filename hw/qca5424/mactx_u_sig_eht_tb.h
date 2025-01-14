
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _MACTX_U_SIG_EHT_TB_H_
#define _MACTX_U_SIG_EHT_TB_H_
#if !defined(__ASSEMBLER__)
#endif

#include "u_sig_eht_tb_info.h"
#define NUM_OF_DWORDS_MACTX_U_SIG_EHT_TB 2

#define NUM_OF_QWORDS_MACTX_U_SIG_EHT_TB 1


struct mactx_u_sig_eht_tb {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   u_sig_eht_tb_info                                         mactx_u_sig_eht_tb_info_details;
#else
             struct   u_sig_eht_tb_info                                         mactx_u_sig_eht_tb_info_details;
#endif
};


 


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_PHY_VERSION_OFFSET       0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_PHY_VERSION_LSB          0
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_PHY_VERSION_MSB          2
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_PHY_VERSION_MASK         0x0000000000000007


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TRANSMIT_BW_OFFSET       0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TRANSMIT_BW_LSB          3
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TRANSMIT_BW_MSB          5
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TRANSMIT_BW_MASK         0x0000000000000038


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DL_UL_FLAG_OFFSET        0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DL_UL_FLAG_LSB           6
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DL_UL_FLAG_MSB           6
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DL_UL_FLAG_MASK          0x0000000000000040


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_BSS_COLOR_ID_OFFSET      0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_BSS_COLOR_ID_LSB         7
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_BSS_COLOR_ID_MSB         12
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_BSS_COLOR_ID_MASK        0x0000000000001f80


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TXOP_DURATION_OFFSET     0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TXOP_DURATION_LSB        13
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TXOP_DURATION_MSB        19
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TXOP_DURATION_MASK       0x00000000000fe000


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DISREGARD_0A_OFFSET      0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DISREGARD_0A_LSB         20
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DISREGARD_0A_MSB         25
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DISREGARD_0A_MASK        0x0000000003f00000


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RESERVED_0C_OFFSET       0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RESERVED_0C_LSB          26
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RESERVED_0C_MSB          31
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RESERVED_0C_MASK         0x00000000fc000000


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_EHT_PPDU_SIG_CMN_TYPE_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_EHT_PPDU_SIG_CMN_TYPE_LSB 32
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_EHT_PPDU_SIG_CMN_TYPE_MSB 33
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_EHT_PPDU_SIG_CMN_TYPE_MASK 0x0000000300000000


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_VALIDATE_1A_OFFSET       0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_VALIDATE_1A_LSB          34
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_VALIDATE_1A_MSB          34
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_VALIDATE_1A_MASK         0x0000000400000000


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_SPATIAL_REUSE_OFFSET     0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_SPATIAL_REUSE_LSB        35
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_SPATIAL_REUSE_MSB        42
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_SPATIAL_REUSE_MASK       0x000007f800000000


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DISREGARD_1B_OFFSET      0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DISREGARD_1B_LSB         43
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DISREGARD_1B_MSB         47
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_DISREGARD_1B_MASK        0x0000f80000000000


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_CRC_OFFSET               0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_CRC_LSB                  48
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_CRC_MSB                  51
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_CRC_MASK                 0x000f000000000000


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TAIL_OFFSET              0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TAIL_LSB                 52
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TAIL_MSB                 57
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_TAIL_MASK                0x03f0000000000000


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RESERVED_1C_OFFSET       0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RESERVED_1C_LSB          58
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RESERVED_1C_MSB          62
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RESERVED_1C_MASK         0x7c00000000000000


 

#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_OFFSET 0x0000000000000000
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_LSB 63
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MSB 63
#define MACTX_U_SIG_EHT_TB_MACTX_U_SIG_EHT_TB_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MASK 0x8000000000000000



#endif    
