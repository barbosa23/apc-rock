/*++ 
 * linux/drivers/video/wmt/hw/wmt-govm-reg.h
 * WonderMedia video post processor (VPP) driver
 *
 * Copyright c 2012  WonderMedia  Technologies, Inc.
 *
 * This program is free software: you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 2 of the License, or 
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU General Public License for more details. 
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * WonderMedia Technologies, Inc.
 * 4F, 533, Chung-Cheng Road, Hsin-Tien, Taipei 231, R.O.C
--*/

#ifndef WMT_GOVM_REG_H
#define WMT_GOVM_REG_H

#define WMT_FTBLK_GOVM
#define WMT_FTBLK_GE

#define REG_GOVM_BEGIN				(GOVM_BASE_ADDR+0x00)
#define REG_GOVM_TV_MOD				(GOVM_BASE_ADDR+0x00)
#define REG_GOVM_BNK				(GOVM_BASE_ADDR+0x04)
#define REG_GOVM_GE_STS				(GOVM_BASE_ADDR+0x08)
#define REG_GOVM_VPU_STS			(GOVM_BASE_ADDR+0x0c)
#define REG_GOVM_DISP_CR			(GOVM_BASE_ADDR+0x1c)
#define REG_GOVM_VPU_X_CR			(GOVM_BASE_ADDR+0x20)
#define REG_GOVM_VPU_Y_CR			(GOVM_BASE_ADDR+0x24)
#define REG_GOVM_IND_MOD			(GOVM_BASE_ADDR+0x40)
#define REG_GOVM_IND_APA			(GOVM_BASE_ADDR+0x44)
#define REG_GOVM_COLBAR_EN			(GOVM_BASE_ADDR+0x48)
#define REG_GOVM_INT				(GOVM_BASE_ADDR+0x4c)
#define REG_GOVM_SRC_FMT			(GOVM_BASE_ADDR+0x50)
#define REG_GOVM_PIP_Y_ADDR			(GOVM_BASE_ADDR+0x54)
#define REG_GOVM_PIP_C_ADDR			(GOVM_BASE_ADDR+0x58)
#define REG_GOVM_PIP_FB_CFG			(GOVM_BASE_ADDR+0x5C)
#define REG_GOVM_PIP_HDE			(GOVM_BASE_ADDR+0x60)
#define REG_GOVM_PIP_CROP			(GOVM_BASE_ADDR+0x78)
#define REG_GOVM_PIP_FMT			(GOVM_BASE_ADDR+0xAC)
#define REG_GOVM_REG_UPDATE			(GOVM_BASE_ADDR+0xc0)
#define REG_GOVM_REG_LEVEL			(GOVM_BASE_ADDR+0xc4)
#define REG_GOVM_GAMMA_MOD			(GOVM_BASE_ADDR+0xe8)
#define REG_GOVM_CLMP_MOD			(GOVM_BASE_ADDR+0xec)
#define REG_GOVM_END				(GOVM_BASE_ADDR+0xec)

//REG_GOVM_TV_MOD,0x00
#define GOVM_BLUE_SCREEN_ENABLE		REG_GOVM_TV_MOD,BIT8,8

//REG_GOVM_BNK,0x04
#define GOVM_BNK_Y					REG_GOVM_BNK, 0xFF0000,16
#define GOVM_BNK_CB					REG_GOVM_BNK, 0xFF00, 8
#define GOVM_BNK_CR					REG_GOVM_BNK, 0xFF, 0

//REG_GOVM_GE_STS,0x08
#define GOVM_GE_SOURCE				REG_GOVM_GE_STS,BIT0,0

//REG_GOVM_VPU_STS,0x0c
#define GOVM_VPU_SOURCE				REG_GOVM_VPU_STS,BIT0,0

//REG_GOVM_DISP_CR,0x1c
#define GOVM_DISP_Y_CR				REG_GOVM_DISP_CR, 0x7FF0000, 16
#define GOVM_DISP_X_CR				REG_GOVM_DISP_CR, 0x7FF, 0

//REG_GOVM_VPU_X_CR,0x20
#define GOVM_VPU_X_END_CR			REG_GOVM_VPU_X_CR, 0x7FF0000, 16
#define GOVM_VPU_X_STA_CR			REG_GOVM_VPU_X_CR, 0x7FF, 0

//REG_GOVM_VPU_Y_CR,0x24
#define GOVM_VPU_Y_END_CR			REG_GOVM_VPU_Y_CR, 0x7FF0000, 16
#define GOVM_VPU_Y_STA_CR			REG_GOVM_VPU_Y_CR, 0x7FF, 0

//REG_GOVM_IND_MOD,0x40
#define GOVM_IND_MODE				REG_GOVM_IND_MOD,BIT8,8
#define GOVM_IND_MODE_ENABLE		REG_GOVM_IND_MOD,BIT0,0

//REG_GOVM_IND_APA,0x44
#define GOVM_IND_ALPHA_B			REG_GOVM_IND_APA, 0x1FF0000, 16
#define GOVM_IND_ALPHA_A			REG_GOVM_IND_APA, 0x1FF, 0

//REG_GOVM_COLBAR_EN,0x48
#define GOVM_PIP_COLBAR_ENABLE		REG_GOVM_COLBAR_EN,BIT8,8
#define GOVM_COLBAR_MODE			REG_GOVM_COLBAR_EN,BIT2,2
#define GOVM_COLBAR_INVERSION		REG_GOVM_COLBAR_EN,BIT1,1
#define GOVM_COLBAR_ENABLE			REG_GOVM_COLBAR_EN,BIT0,0

//REG_GOVM_INT,0x4c
#define GOVM_INTSTS_VPU_READY		REG_GOVM_INT,BIT19,19
#define GOVM_INTSTS_GE_READY		REG_GOVM_INT,BIT17,17
#define GOVM_INTSTS_PIP_READY		REG_GOVM_INT,BIT16,16
#define GOVM_INT_PIP_C_ENABLE		REG_GOVM_INT,BIT11,11
#define GOVM_INT_PIP_Y_ENABLE		REG_GOVM_INT,BIT10,10
#define GOVM_INT_PIP_ENABLE			REG_GOVM_INT,BIT9,9
#define GOVM_INT_ENABLE				REG_GOVM_INT,BIT8,8
#define GOVM_INT_PIP_C_ERR			REG_GOVM_INT,BIT3,3
#define GOVM_INT_PIP_Y_ERR			REG_GOVM_INT,BIT2,2
#define GOVM_INT_PIP_ERR			REG_GOVM_INT,BIT1,1
#define GOVM_INTSTS_GOVM_STATUS		REG_GOVM_INT,BIT0,0

// REG_GOVM_SRC_FMT,0x50
#define GOVM_PIP_INTERLACE			REG_GOVM_SRC_FMT,BIT1,1	// 0-frame,1-field
#define GOVM_PIP_COLFMT_422			REG_GOVM_SRC_FMT,BIT0,0	// 0-422,1-420

// REG_GOVM_PIP_Y_ADDR,0x54
// REG_GOVM_PIP_C_ADDR,0x58

// REG_GOVM_PIP_FB_CFG,0x5C
#define GOVM_PIP_FBUF_WIDTH			REG_GOVM_PIP_FB_CFG,0x1FFF,0

// REG_GOVM_PIP_HDE,0x60
#define GOVM_PIP_XWIDTH				REG_GOVM_PIP_HDE,0x1FFF,0

// REG_GOVM_PIP_CROP,0x78
#define GOVM_PIP_HCROP				REG_GOVM_PIP_CROP,0x1FFF0000,16
#define GOVM_PIP_VCROP				REG_GOVM_PIP_CROP,0x1FFF,0

// REG_GOVM_PIP_FMT,0xAC
#define GOVM_PIP_SRC_H264			REG_GOVM_PIP_FMT,BIT3,3
#define GOVM_PIP_COLFMT_RGB			REG_GOVM_PIP_FMT,BIT2,2
#define GOVM_PIP_COLFMT_444			REG_GOVM_PIP_FMT,BIT1,1
#define GOVM_PIP_OUTFMT_FIELD		REG_GOVM_PIP_FMT,BIT0,0	// 0-frame, 1-field

//REG_GOVM_UPDATE,0xc0
#define GOVM_REG_UPDATE				REG_GOVM_REG_UPDATE,BIT0,0		// hw reg update in GOVW VBIE

//REG_GOVM_LEVEL_SEL,0xc4
#define GOVM_REG_LEVEL				REG_GOVM_REG_LEVEL,BIT0,0

//REG_GOVM_GAMMA_MOD,0xe8
#define GOVM_GAMMA_MODE				REG_GOVM_GAMMA_MOD, 0x3, 0

//REG_GOVM_CLMP_MOD,0xec
#define GOVM_CLAMPING_ENABLE		REG_GOVM_CLMP_MOD, BIT0, 0	// Y 16~235,C 16~240

#endif				/* WMT_GOVM_REG_H */
