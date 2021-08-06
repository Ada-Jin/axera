/**********************************************************************************
 *
 * Copyright (c) 2019-2020 Beijing AXera Technology Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Beijing AXera Technology Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Beijing AXera Technology Co., Ltd.
 *
 * Auther: ZhiJun Zhou
 * Data: 2021-06-05
 * Mail: zhijunzhou@axera-tech.com
 *
 **********************************************************************************/

#ifndef __AX_ISP_IQ_API_H__
#define __AX_ISP_IQ_API_H__

#include "ax_base_type.h"
#include "ax_global_type.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define AX_ISP_AUTO_TABLE_MAX_NUM           (16)
#define AX_ISP_GAIN_GRP_NUM                 (16)
#define AX_ISP_EXPOSE_TIME_GRP_NUM          (10)

#define AX_ISP_BLC_SBL_VAL_NUM              (16)
#define AX_ISP_BLC_SBL_WIN_NUM              (4)

#define AX_ISP_BLC_MESH_SIZE_H              (24)
#define AX_ISP_BLC_MESH_SIZE_V              (24)

#define AX_ISP_BLC_GBL_IIR_SIZE             (8)

#define AX_ISP_DPC_NOISE_PARAM_NUM          (4)
#define AX_ISP_PDAF_LUT_NUM                 (128)
#define AX_ISP_DPC_SBPC_BUFFER_MAX          (8192)
#define AX_ISP_DPC_QUICK_DET_TH_NUM         (3)

#define AX_ISP_CAC_FOCUS_LENG               (2)
#define AX_ISP_CAC_COLOR_TEMP               (4)
#define AX_ISP_CAC_LUT_SIZE                 (32)

#define AX_ISP_RLTM_AUTO_TABLE_MAX_NUM      (64)

#define AX_ISP_LSC_MESH_SIZE_V              (15)
#define AX_ISP_LSC_MESH_SIZE_H              (19)
#define AX_ISP_LSC_COLOR_TEMP_GRP_NUM       (5)
#define AX_ISP_LSC_COMP_RATIO_GRP_NUM       (10)

#define AX_ISP_YUV_CSC0_OFFSET_SIZE         (3)
#define AX_ISP_YUV_CSC0_MATRIX_SIZE         (3)
#define AX_ISP_YUV_CSC0_DECIMATION_NUM      (7)

#define AX_ISP_GAMMA_LUT_SIZE               (65)

#define AX_ISP_BYAER_NUM                    (4)

#define AX_ISP_WNR_STRENGTH_LUT_SIZE        (128)
#define AX_ISP_WNR_WEIGHT_SIZE              (16)

#define AX_ISP_CLC_LUMA_RATIO_LUT_SIZE      (8)
#define AX_ISP_CLC_ANGLE_RATIO_LUT_SIZE     (16)
#define AX_ISP_CLC_LUMA_RATIO_SIZE          (3)
#define AX_ISP_CLC_MATRIX_H_SIZE            (3)
#define AX_ISP_CLC_MATRIX_V_SIZE            (3)
#define AX_ISP_CLC_MATRIX_LIST_ANGLE_SIZE   (16)
#define AX_ISP_CLC_ANGLE_MATRIX_H_SIZE      (2)
#define AX_ISP_CLC_ANGLE_MATRIX_V_SIZE      (3)
#define AX_ISP_CLC_MATRIX_COLOR_TEMP_SIZE   (16)
#define AX_ISP_CLC_MATRIX_SATURAT_MAX_SIZE  (16)
#define AX_ISP_CLC_HR_LPF_SIZE              (3)

#define AX_ISP_SHP_LIMIT_SIZE           (2)
#define AX_ISP_SHP_OS_LIMIT_SIZE        (2)
#define AX_ISP_SHP_CMASK_CENTER_UV_SIZE (2)
#define AX_ISP_SHP_CMASK_SIZE           (3)
#define AX_ISP_SHP_LEVEL_SIZE           (2)
#define AX_ISP_SHP_GAIN_SIZE            (2)
#define AX_ISP_SHP_HPF_LUT_SIZE_H       (3)
#define AX_ISP_SHP_HPF_LUT_SIZE_V       (3)

#define AX_ISP_YNR_CMASK_CENTER_UV_SIZE (2)
#define AX_ISP_YNR_CMASK_SIZE           (3)
#define AX_ISP_YNR_LEVEL_SIZE           (2)
#define AX_ISP_YNR_SF_LUT_SIZE          (4)
#define AX_ISP_YNR_INV_LUT_SIZE         (4)
#define AX_ISP_DBPC_ED_LUT_SIZE         (4)

#define AX_ISP_CNR_INV_LUT_SIZE         (4)
#define AX_ISP_CCMP_Y_LUT_SIZE          (8)
#define AX_ISP_CCMP_SAT_LUT_SIZE        (8)

#define AX_ISP_CSET_COLOR_SIZE          (2)
#define AX_ISP_CSET_MASK_CENTER_UV_SIZE (2)
#define AX_ISP_CSET_MASK_SIZE           (3)

#define AX_ISP_CLIP_SIZE         (2)

#define AX_ISP_DEMOSAIC_GAMMA_LUT_SIZE      (8)
#define AX_ISP_DEMOSAIC_RES_GR_P_NUM        (2)

#define AX_ISP_AWB_GRID_NUM_MAX             (4096)
#define AX_ISP_AWB_ILLUM_NAME_LEN_MAX       (32)
#define AX_ISP_AWB_POLY_NUM_MAX             (32)
#define AX_ISP_AWB_POLY_PNT_NUM_MAX         (64)
#define AX_ISP_AWB_ILLUM_NUM_MAX            (16)
#define AX_ISP_AWB_EXT_ILLUM_NUM_MAX        (32)
#define AX_ISP_AWB_ALL_ILLUM_NUM_MAX        (AX_ISP_AWB_ILLUM_NUM_MAX + AX_ISP_AWB_EXT_ILLUM_NUM_MAX)
#define AX_ISP_AWB_CTRL_PNT_PART_NUM_MAX    (32)
#define AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX     (AX_ISP_AWB_CTRL_PNT_PART_NUM_MAX * AX_ISP_AWB_ILLUM_NUM_MAX)

#define AX_ISP_AE_LUX_MAX_PAIR_NUM          (10)

#define AX_ISP_AF_CORING_LUT_NUM            (17)
#define AX_ISP_AF_IIR_COEF_NUM              (10)
#define AX_ISP_AF_FIR_COEF_NUM              (13)
#define AX_ISP_AF_IIR_REF_LIST_SIZE         (32)

#define AX_ISP_MAX_PATH_SIZE                (256)
#define AX_ISP_NPU_ISO_MODEL_MAX_NUM        (16)
#define AX_ISP_NPU_MODEL_MAX_NUM            (AX_ISP_NPU_ISO_MODEL_MAX_NUM * 2)
#define AX_ISP_NPU_RAW_TYPE_NUM             (2)
#define AX_ISP_NPU_HDR_MODE_NUM             (3)

typedef struct {
    AX_U32 nSblRValue[AX_ISP_BLC_SBL_WIN_NUM];     /* Accuracy: U8.12 Range: [0, 0xFFFFF] */
    AX_U32 nSblGrValue[AX_ISP_BLC_SBL_WIN_NUM];    /* Accuracy: U8.12 Range: [0, 0xFFFFF] */
    AX_U32 nSblGbValue[AX_ISP_BLC_SBL_WIN_NUM];    /* Accuracy: U8.12 Range: [0, 0xFFFFF] */
    AX_U32 nSblBValue[AX_ISP_BLC_SBL_WIN_NUM];     /* Accuracy: U8.12 Range: [0, 0xFFFFF] */
} AX_ISP_IQ_BLC_MANUAL_T;

typedef struct {
    AX_U8  nGainGrpNum;                   /* Gain dimension num. Accuracy: U8.0 Range: [0, AX_ISP_GAIN_GRP_NUM] */
    AX_U8  nExposeTimeGrpNum;             /* ExposeTime dimension num. Accuracy: U8.0 Range: [0, AX_ISP_EXPOSE_TIME_GRP_NUM] */
    AX_U32 nGain[AX_ISP_GAIN_GRP_NUM];    /* Again value for sbl tunning. Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF] */
    AX_U32 nExposeTime[AX_ISP_EXPOSE_TIME_GRP_NUM];    /* ExposeTime value for sbl tunning. Accuracy: U32 Range: [0x0, 0xFFFFFFFF] */
    AX_U32 nAutoSblRValue[AX_ISP_GAIN_GRP_NUM][AX_ISP_EXPOSE_TIME_GRP_NUM];    /* offline sbl tunning value for R channel.  Accuracy: U8.12 Range: [0, 0xFFFFF] */
    AX_U32 nAutoSblGrValue[AX_ISP_GAIN_GRP_NUM][AX_ISP_EXPOSE_TIME_GRP_NUM];   /* offline sbl tunning value for Gr channel. Accuracy: U8.12 Range: [0, 0xFFFFF] */
    AX_U32 nAutoSblGbValue[AX_ISP_GAIN_GRP_NUM][AX_ISP_EXPOSE_TIME_GRP_NUM];   /* offline sbl tunning value for Gb channel. Accuracy: U8.12 Range: [0, 0xFFFFF] */
    AX_U32 nAutoSblBValue[AX_ISP_GAIN_GRP_NUM][AX_ISP_EXPOSE_TIME_GRP_NUM];    /* offline sbl tunning value for B channel.  Accuracy: U8.12 Range: [0, 0xFFFFF] */
} AX_ISP_IQ_BLC_AUTO_TABLE_T;

typedef struct {
    AX_ISP_IQ_BLC_AUTO_TABLE_T      tHcgAutoTable;
    AX_ISP_IQ_BLC_AUTO_TABLE_T      tLcgAutoTable;
} AX_ISP_IQ_BLC_AUTO_T;

typedef struct {
    AX_U8                           nBlcEnable;     /* sbl correction enable */
    AX_U8                           nAutoMode;      /* 0: manual, 1: auto */
    AX_ISP_IQ_BLC_MANUAL_T          tManualParam;
    AX_ISP_IQ_BLC_AUTO_T            tAutoParam;
} AX_ISP_IQ_BLC_PARAM_T;

typedef struct {
    AX_S32 nRangeMax;               /* max threshold of saturation for VOB pixel. Accuracy: S8.8 Range: [-65535, 65535] */
    AX_S32 nRangeMin;               /* min threshold of saturation for VOB pixel. Accuracy: S8.8 Range: [-65535, 65535] */
    AX_U32 nIirRate;                /* smooth ratio. Accuracy: U1.8 Range: [0, 0x1FF] */
} AX_ISP_IQ_FPN_CTRL_T;

typedef struct {
    AX_U8                           nFpnEnable; /* FPN enable */
    AX_ISP_IQ_FPN_CTRL_T            tCtrlParam; /* FPN control parameters */
} AX_ISP_IQ_FPN_PARAM_T;

typedef struct {
    AX_U8                           nGblEnable; /* GBL enable */
    AX_U8                           nBlcDetSel; /* 0: use det0 win0 result 1: use det1 win0 result */
    AX_U8                           nGblIirRate[AX_ISP_BLC_GBL_IIR_SIZE]; /* Accuracy: U1.6  Range: [0, 0x7F] */
    AX_U16                          nGblIirTh[AX_ISP_BLC_GBL_IIR_SIZE];   /* Accuracy: U4.12 Range: [0, 0xFFFF] */
} AX_ISP_IQ_GBL_PARAM_T;

typedef struct {
    AX_U32 nMeshLut[AX_ISP_BLC_MESH_SIZE_H][AX_ISP_BLC_MESH_SIZE_V];    /* mesh lut for the specific Again and ExposeTime. Accuracy: U8.8 Range: [0, 0xFFFF] */
} AX_ISP_IQ_DS_MESH_LUT_T;

typedef struct {
    AX_U8  nGainGrpNum;                               /* Gain dimension num. Accuracy: U8.0 Range: [0, AX_ISP_GAIN_GRP_NUM] */
    AX_U8  nExposeTimeGrpNum;                         /* ExposeTime dimension num. Accuracy: U8.0 Range: [0, AX_ISP_EXPOSE_TIME_GRP_NUM] */
    AX_U32 nGain[AX_ISP_GAIN_GRP_NUM];                /* Again value for sbl tunning. Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF] */
    AX_U32 nExposeTime[AX_ISP_EXPOSE_TIME_GRP_NUM];   /* ExposeTime value for sbl tunning. Accuracy: U32 Range: [0x0, 0xFFFFFFFF] */
    AX_ISP_IQ_DS_MESH_LUT_T tMeshTab[AX_ISP_GAIN_GRP_NUM][AX_ISP_EXPOSE_TIME_GRP_NUM];    /* Dark Shading mesh table */
} AX_ISP_IQ_DS_AUTO_TABLE_T;

typedef struct {
    AX_ISP_IQ_DS_AUTO_TABLE_T       tHcgAutoTable;
    AX_ISP_IQ_DS_AUTO_TABLE_T       tLcgAutoTable;
} AX_ISP_IQ_DS_AUTO_T;

typedef struct {
    AX_ISP_IQ_DS_MESH_LUT_T         tMeshTab;       /* Dark Shading mesh table */
} AX_ISP_IQ_DS_MANUAL_T;

typedef struct {
    AX_U8  nDsEnable;                               /* Dark Shading enable */
    AX_U8  nAutoMode;                               /* 0: manual, 1: auto */
    AX_ISP_IQ_DS_MANUAL_T           tManualParam;
    AX_ISP_IQ_DS_AUTO_T             tAutoParam;
} AX_ISP_IQ_DS_PARAM_T;

typedef struct {
    AX_U8  nDpcStrength;                                      /* bad pixel detection strength. Accuracy: U8.0 Range: [0, 100] */
    AX_U16 nQuickDetThreshold[AX_ISP_DPC_QUICK_DET_TH_NUM];   /* Accuracy: U8.6 Range: [0, 0x3FFF] */
} AX_ISP_IQ_DPC_MANUAL_T;

typedef struct {
    AX_U8  nParamGrpNum;                               /* Accuracy: U8.0 Range: [0, AX_ISP_AUTO_TABLE_MAX_NUM] */
    AX_U32 nRefVal[AX_ISP_AUTO_TABLE_MAX_NUM];         /* Gain: Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF]; Lux: Accuracy: U20.12 Range: [0, 0xFFFFFFFF] */
    AX_U8  nDpcStrength[AX_ISP_AUTO_TABLE_MAX_NUM];    /* bad pixel detection strength. Accuracy: U8.0 Range: [0, 100] */
    AX_U16 nQuickDetThreshold[AX_ISP_AUTO_TABLE_MAX_NUM][AX_ISP_DPC_QUICK_DET_TH_NUM];    /* Accuracy: U8.6 Range: [0, 0x3FFF] */
} AX_ISP_IQ_DPC_AUTO_T;

typedef struct {
    AX_U32 nSbpcLength;                                      /* Accuracy: U32 Range: [0, AX_ISP_DPC_SBPC_BUFFER_MAX] */
    AX_U32 nSbpcBuffer[AX_ISP_DPC_SBPC_BUFFER_MAX];          /* Accuracy: U32 Range: [0, 0xFFFFFFFF] */
    AX_U16 nShotNoiseCoeffsA[AX_ISP_DPC_NOISE_PARAM_NUM]; /* Accuracy: U0.16 Range: [0, 0x4000] */
    AX_S8  nShotNoiseCoeffsB[AX_ISP_DPC_NOISE_PARAM_NUM]; /* Accuracy: S0.3  Range: [-7, 7] */
    AX_U32 nReadNoiseCoeffsA[AX_ISP_DPC_NOISE_PARAM_NUM]; /* Accuracy: U0.32 Range: [0, 0x10000000] */
    AX_U16 nReadNoiseCoeffsB[AX_ISP_DPC_NOISE_PARAM_NUM]; /* Accuracy: U0.16 Range: [0, 0x4000] */
    AX_S8  nReadNoiseCoeffsC[AX_ISP_DPC_NOISE_PARAM_NUM]; /* Accuracy: S0.3  Range: [-7, 7] */
} AX_ISP_DPC_NOISE_SBPC_T;

typedef struct {
    AX_ISP_DPC_NOISE_SBPC_T         tHcgTable;
    AX_ISP_DPC_NOISE_SBPC_T         tLcgTable;
} AX_ISP_DPC_TABLE_T;

typedef struct {
    AX_U8  nDpcEnable;                                  /* dpc enable */
    AX_U8  nSbpcEnable;                                 /* sbpc enable */
    AX_U8  nQuickDetEnable;                             /* QuickDet enable */
    AX_ISP_DPC_TABLE_T              tDpcParam;
    AX_U8  nAutoMode;      /* for ref auto or manual adjust mode, Range: [0,1], 0: manual, 1:auto, default:1 */
    AX_U8  nRefMode;       /* choose ref mode, Range: [0,1], 0:use lux as ref, 1:use gain as ref */
    AX_ISP_IQ_DPC_MANUAL_T          tManualParam;
    AX_ISP_IQ_DPC_AUTO_T            tAutoParam;
} AX_ISP_IQ_DPC_PARAM_T;

typedef struct {
    AX_U32 nScaler[AX_ISP_CAC_LUT_SIZE]; /* pixel position shift lut. Accuracy: U1.28 Range: [214748365, 322122547] */
} AX_ISP_IQ_CAC_LUT_T;

typedef struct {
    AX_U32 nRXCoord;              /* ellipse center x_coord. Accuracy: U12.8 Range: [0x8000, 0x100000)*/
    AX_U32 nRYCoord;              /* ellipse center y_coord. Accuracy: U12.8 Range: [0x8000, 0x100000)*/
    AX_S32 nRAParam;              /* ellipse parameter A. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_S32 nRBParam;              /* ellipse parameter B. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_S32 nRCParam;              /* ellipse parameter C. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_U32 nRMaxRadInv;           /* inv of bound value in lut. Accuracy: U3.18 Range: [52429, 2097152) */
    AX_ISP_IQ_CAC_LUT_T tRScaler; /* pixel position shift lut. Accuracy: U1.28 Range: [214748365, 322122547] */
    AX_U32 nBXCoord;              /* ellipse center x_coord. Accuracy: U12.8 Range: [0x8000, 0x100000)*/
    AX_U32 nBYCoord;              /* ellipse center y_coord. Accuracy: U12.8 Range: [0x8000, 0x100000)*/
    AX_S32 nBAParam;              /* ellipse parameter A. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_S32 nBBParam;              /* ellipse parameter B. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_S32 nBCParam;              /* ellipse parameter C. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_U32 nBMaxRadInv;           /* inv of bound value in lut. Accuracy: U3.18 Range: [52429, 2097152) */
    AX_ISP_IQ_CAC_LUT_T tBScaler; /* pixel position shift lut. Accuracy: U1.28 Range: [214748365, 322122547] */
    AX_U8  nAParamLeftShift;      /* left bit shift for ellipse parameter A. Accuracy: U5 Range: [0x10, 0x18] */
    AX_U8  nBParamLeftShift;      /* left bit shift for ellipse parameter B. Accuracy: U5 Range: [0x10, 0x18] */
    AX_U8  nCParamLeftShift;      /* left bit shift for ellipse parameter C. Accuracy: U5 Range: [0x10, 0x18] */
} AX_ISP_IQ_CAC_MANUAL_T;

typedef struct {
    AX_U8  nFocusGrpNum;                                                     /* Accuacy: U8 Range: [0, AX_ISP_CAC_FOCUS_LENG] */
    AX_U8  nColorGrpNum;                                                     /* Accuacy: U8 Range: [0, AX_ISP_CAC_COLOR_TEMP] */
    AX_U8  nFocusVal[AX_ISP_CAC_FOCUS_LENG];                                 /* The normalized value by focus value. Accuacy: U8 Range: [0, 100] */
    AX_U32 nColorTemp[AX_ISP_CAC_COLOR_TEMP];                                /* Accuracy: U32.0 Range: [0, 100000] */
    AX_U32 nRXCoord[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];           /* ellipse center x_coord. Accuracy: U12.8 Range: [0x8000, 0x100000) */
    AX_U32 nRYCoord[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];           /* ellipse center y_coord. Accuracy: U12.8 Range: [0x8000, 0x100000) */
    AX_S32 nRAParam[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];           /* ellipse parameter A. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_S32 nRBParam[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];           /* ellipse parameter B. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_S32 nRCParam[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];           /* ellipse parameter C. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_U32 nRMaxRadInv[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];        /* inv of bound value in lut. Accuracy: U3.18 Range: [52429, 2097152)*/
    AX_ISP_IQ_CAC_LUT_T tRLut[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP]; /* pixel position shift lut. Accuracy: U1.28 Range: [214748365, 322122547] */
    AX_U32 nBXCoord[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];           /* ellipse center x_coord. Accuracy: U12.8 Range: [0x8000, 0x100000) */
    AX_U32 nBYCoord[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];           /* ellipse center y_coord. Accuracy: U12.8 Range: [0x8000, 0x100000) */
    AX_S32 nBAParam[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];           /* ellipse parameter A. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_S32 nBBParam[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];           /* ellipse parameter B. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_S32 nBCParam[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];           /* ellipse parameter C. Accuracy: S0.22 Range: (-4194304, 4194304) */
    AX_U32 nBMaxRadInv[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];        /* inv of bound value in lut. Accuracy: U3.18 Range: [52429, 2097152) */
    AX_ISP_IQ_CAC_LUT_T tBLut[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP]; /* pixel position shift lut. Accuracy: U1.28 Range: [214748365, 322122547] */
    AX_U8  nAParamLeftShift[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];   /* left bit shift for ellipse parameter A. Accuracy: U5 Range: [0x10, 0x18] */
    AX_U8  nBParamLeftShift[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];   /* left bit shift for ellipse parameter B. Accuracy: U5 Range: [0x10, 0x18] */
    AX_U8  nCParamLeftShift[AX_ISP_CAC_FOCUS_LENG][AX_ISP_CAC_COLOR_TEMP];   /* left bit shift for ellipse parameter C. Accuracy: U5 Range: [0x10, 0x18] */
} AX_ISP_IQ_CAC_AUTO_T;

typedef struct {
    AX_U8                           nCacEnable;  /* Accuracy: U8 Range: [0, 1] */
    AX_U8                           nAutoMode;   /* Accuracy: U8 Range: [0, 1]; 0: manual, 1: auto */
    AX_ISP_IQ_CAC_MANUAL_T          tManualCtrl;
    AX_ISP_IQ_CAC_AUTO_T            tAutoParam;
} AX_ISP_IQ_CAC_PARAM_T;

typedef struct {
    AX_U8  nLocalFactor;        /* Accuracy: U1.7 Range: [0, 128], default 90 */
    AX_U8  nHighlightSup;       /* highlight suppress. Accuracy: U5.3 Range: [0, 255], default 50 */
    AX_U16 nKMax;               /* limit brightness. Accuracy: U8.8 Range: [256, 65535], default 1024 */
    AX_U8  nPreGamma;           /* for gamma lut. Accuracy: U3.5 Range: [32, 255], default 32 */
    AX_U8  nPostGamma;          /* for invgamma lut. Accuracy: U3.5 Range: [32, 255], default 64 */
    AX_U8  nDynamicRangeUpper;  /* for dynamic range upper, not dependence on effect_strength. Accuracy: U1.7 Range: [90, 128], default 128 */
    AX_U8  nDynamicRangeLower;  /* for dynamic range lower, not dependence on effect_strength. Accuracy: U1.7 Range: [0, 40], default 0 */
    AX_U16 nExtraDgain;         /* for invgamma lut. Accuracy: U4.4 Range: [16, 255], default 16 */
    AX_U16 nWinSize;            /* for hist. Accuracy: U16.0 Range: [64, 128, 256, 512, 1024], default 256 */
    AX_U8  nRltmStrength;       /* Accuracy: U1.7 Range: [0, 128], default 64 */
    AX_U8  nDitherMode;         /* 0: no-dither, 1: before pre-gamma, 2: after pre-gamma 0. Accuracy: U2.0 Range: [0, 2], default 0 */
    AX_U16 nDitherScaler;       /* for dither strength. Accuracy: U10.6 Range: [0, 65535], default 64 */
    AX_U8  nDitherSeedEn;       /* Accuracy: U1.0 Range: [0, 1], default 0 */
    AX_U8  nGtmSwEn;            /* gtm software switch. Accuracy: U1.0 Range: [0, 1], default 0 */
    AX_U16 nGtmSwDgain;         /* gtm dgain for software gtm curve. Accuracy: U8.8 Range: [256, 65535], default 256 */
} AX_ISP_IQ_RLTM_MANUAL_T;

typedef struct {
    AX_U8  nParamGrpNum;                                      /* Accuracy: U8 Range: [0, AX_ISP_RLTM_AUTO_TABLE_MAX_NUM]  */
    AX_U32 nRefVal[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];           /* Gain: Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF]; Lux: Accuracy: U20.12 Range: [0, 0xFFFFFFFF] */
    AX_U8  nLocalFactor[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];      /* Accuracy: U1.7 Range: [0, 128], default 90 */
    AX_U8  nHighlightSup[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];     /* highlight suppress. Accuracy: U5.3 Range: [0, 255], default 50 */
    AX_U16 nKMax[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];             /* limit brightness. Accuracy: U8.8 Range: [256, 65535], default 1024 */
    AX_U8  nPreGamma[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];         /* for gamma lut. Accuracy: U3.5 Range: [32, 255], default 32 */
    AX_U8  nPostGamma[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];        /* for invgamma lut. Accuracy: U3.5 Range: [32, 255], default 64 */
    AX_U8  nDynamicRangeUpper[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];/* for dynamic range upper, not dependence on effect_strength. Accuracy: U1.7 Range: [90, 128], default 128 */
    AX_U8  nDynamicRangeLower[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];/* for dynamic range lower, not dependence on effect_strength. Accuracy: U1.7 Range: [0, 40], default 0 */
    AX_U16 nExtraDgain[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];       /* for invgamma lut. Accuracy: U4.4 Range: [16, 255], default 16 */
    AX_U16 nWinSize[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];          /* for hist. Accuracy: U16.0 Range: [64, 128, 256, 512, 1024], default 256 */
    AX_U8  nRltmStrength[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];     /* Accuracy: U1.7 Range: [0, 128], default 64 */
    AX_U8  nDitherMode[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];       /* 0: no-dither, 1: before pre-gamma, 2: after pre-gamma 0. Accuracy: U2.0 Range: [0, 2], default 0 */
    AX_U16 nDitherScaler[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];     /* for dither strength. Accuracy: U10.6 Range: [0, 65535], default 64 */
    AX_U8  nDitherSeedEn[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];     /* Accuracy: U1.0 Range: [0, 1], default 0 */
    AX_U8  nGtmSwEn[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];          /* gtm software switch. Accuracy: U1.0 Range: [0, 1], default 0 */
    AX_U16 nGtmSwDgain[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];       /* gtm dgain for software gtm curve. Accuracy: U8.8 Range: [256, 65535], default 256 */
} AX_ISP_IQ_RLTM_AUTO_T;

typedef struct {
    AX_U8  nRltmEn;        /* rltm en -- module control */
    AX_U8  nAutoMode;      /* for ref auto or manual adjust mode, [0,1], 0: manual, 1:auto, default:1 */
    AX_U8  nRefMode;       /* choose ref mode, [0,1], 0:use lux as ref, 1:use gain as ref */
    AX_ISP_IQ_RLTM_MANUAL_T         tManualParam;
    AX_ISP_IQ_RLTM_AUTO_T           tAutoParam;
} AX_ISP_IQ_RLTM_PARAM_T;

typedef struct {
    AX_U8  nEffectStrength;                                    /* for effect enhence. Accuracy: U4.0 Range: [0,15], default 0 */
} AX_ISP_IQ_DEHAZE_MANUAL_T;

typedef struct {
    AX_U8  nParamGrpNum;                                       /* Accuracy: U8.0 Range: [0, AX_ISP_RLTM_AUTO_TABLE_MAX_NUM] */
    AX_U32 nRefVal[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];            /* Gain: Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF]; Lux: Accuracy: U20.12 Range: [0, 0xFFFFFFFF] */
    AX_U8  nEffectStrength[AX_ISP_RLTM_AUTO_TABLE_MAX_NUM];    /* for effect enhence. Accuracy: U4.0 Range: [0,15], default 0 */
} AX_ISP_IQ_DEHAZE_AUTO_T;

typedef struct {
    AX_U8  nDehazeEn;   /* dehaze enable */
    AX_U8  nAutoMode;   /* for lux auto or manual adjust mode, [0,1], 0: manual, 1:auto, default:1 */
    AX_U8  nRefMode;    /* choose ref mode, [0,1], 0:use lux as ref, 1:use gain as ref, must be follow rltm'suRefMode */
    AX_ISP_IQ_DEHAZE_MANUAL_T       tManualParam;
    AX_ISP_IQ_DEHAZE_AUTO_T         tAutoParam;
} AX_ISP_IQ_DEHAZE_PARAM_T;

typedef struct AX_ISP_IQ_LSC_MESH {
    AX_U32 nRRMeshLut[AX_ISP_LSC_MESH_SIZE_V][AX_ISP_LSC_MESH_SIZE_H]; /* Accuacy U4.14 Range: [0x4000, 0x44000] */
    AX_U32 nGRMeshLut[AX_ISP_LSC_MESH_SIZE_V][AX_ISP_LSC_MESH_SIZE_H]; /* Accuacy U4.14 Range: [0x4000, 0x44000] */
    AX_U32 nGBMeshLut[AX_ISP_LSC_MESH_SIZE_V][AX_ISP_LSC_MESH_SIZE_H]; /* Accuacy U4.14 Range: [0x4000, 0x44000] */
    AX_U32 nBBMeshLut[AX_ISP_LSC_MESH_SIZE_V][AX_ISP_LSC_MESH_SIZE_H]; /* Accuacy U4.14 Range: [0x4000, 0x44000] */
} AX_ISP_IQ_LSC_MESH_T;

typedef struct {
    AX_ISP_IQ_LSC_MESH_T            tMeshTab;       /* Dark Shading mesh table */
} AX_ISP_IQ_LSC_MANUAL_T;

typedef struct {
    AX_U32 nColorTemp;    /* Accuracy: U32.0 Range: [0, 100000] */
    AX_U8  nCompRatioNum; /* Accuacy: U8 Range: [0, AX_ISP_AUTO_TABLE_MAX_NUM] */
    AX_U32 nRefVal[AX_ISP_AUTO_TABLE_MAX_NUM];    /* Gain: Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF]; Lux: Accuracy: U20.12 Range: [0, 0xFFFFFFFF] */
    AX_U8  nCompRatio[AX_ISP_AUTO_TABLE_MAX_NUM]; /* Accuacy: U8 Range: [0, 100] */
    AX_U8  nCompRatioGrpNum;                             /* Accuacy: U8 Range: [0, AX_ISP_LSC_COMP_RATIO_GRP_NUM] */
    AX_U8  nCompRatioGrp[AX_ISP_LSC_COMP_RATIO_GRP_NUM]; /* Accuacy: U8 Range: [0, 100] */
    AX_ISP_IQ_LSC_MESH_T tMeshTab[AX_ISP_LSC_COMP_RATIO_GRP_NUM]; /* Dark Shading mesh table */
} AX_ISP_IQ_LSC_CT_PARAM_T;

typedef struct {
    AX_U8                            nColorTempNum; /* Accuracy: U8 Range: [0, AX_ISP_LSC_COLOR_TEMP_GRP_NUM] */
    AX_ISP_IQ_LSC_CT_PARAM_T         tColTempParam[AX_ISP_LSC_COLOR_TEMP_GRP_NUM];
} AX_ISP_IQ_LSC_AUTO_T;

typedef struct {
    AX_U8  nLscEn;    /* Acuracy: U8 Range: [0, 1] */
    AX_U8  nRefMode;  /* choose ref mode, Accuracy: U8 Range: [0, 1], 0:use lux as ref, 1:use gain as ref */
    AX_U8  nMeshMode; /* mesh mode, Accuracy: U8 Range: [0, 1] */
    AX_U8  nAutoMode; /* for ref auto or manual adjust mode, Accuracy: U8 Range: [0, 1]; 0: manual, 1:auto, default:1 */
    AX_ISP_IQ_LSC_MANUAL_T          tManualParam;
    AX_ISP_IQ_LSC_AUTO_T            tAutoParam;
} AX_ISP_IQ_LSC_PARAM_T;

typedef struct  {
    AX_S16 nRgbOffset[AX_ISP_YUV_CSC0_OFFSET_SIZE]; /* rgb offset. Accuracy: S8.2 Range: [-1024, 1023] */
    AX_S16 nYuvOffset[AX_ISP_YUV_CSC0_OFFSET_SIZE]; /* yuv offset. Accuracy: S8.2 Range: [-1024, 1023] */
    AX_S16 nMatrix[AX_ISP_YUV_CSC0_MATRIX_SIZE][AX_ISP_YUV_CSC0_MATRIX_SIZE]; /* color matrix. Accuracy: S1.8 Range: [-512, 511] */
    AX_S8  nDeciH[AX_ISP_YUV_CSC0_DECIMATION_NUM]; /* horizontal decimation filter. Accuracy: S1.5 Range: [-64, 63] */
    AX_U8  nUvSeqSel; /* U/V sequence select. Accuracy: U1 Range: [0, 1] */
} AX_ISP_IQ_YUV_CSC0_PARAM_T;

typedef struct  {
    AX_U8  nDeciV0; /* vertical decimation filter. Accuracy: U1.1 Range: [0, 3] */
    AX_U8  nDeciV1; /* vertical decimation filter. Accuracy: U1.1 Range: [0, 3] */
} AX_ISP_IQ_YUV_CSC1_PARAM_T;

typedef struct AX_ISP_IQ_GAMMA_LUT {
    AX_U16 nGammaLut[AX_ISP_GAMMA_LUT_SIZE];     /* Accuracy: U8.6 Range: [0, 0x3FFF] */
} AX_ISP_IQ_GAMMA_LUT_T;

typedef struct {
    AX_ISP_IQ_GAMMA_LUT_T           tGtmLut;     /* GTM  lut */
} AX_ISP_IQ_GAMMA_GTM_LUT_MANUAL_T;

typedef struct {
    AX_U8                           nParamGrpNum; /* Accuracy: U8.0 Range: [0, AX_ISP_AUTO_TABLE_MAX_NUM] */
    AX_U32                          nRefVal[AX_ISP_AUTO_TABLE_MAX_NUM];  /* Gain: Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF]; Lux: Accuracy: U20.12 Range: [0, 0xFFFFFFFF] */
    AX_ISP_IQ_GAMMA_LUT_T           tGtmLut[AX_ISP_AUTO_TABLE_MAX_NUM];  /* GTM  lut */
} AX_ISP_IQ_GAMMA_GTM_LUT_AUTO_T;

typedef struct {
    AX_U8                            nGammaEn;    /* Gamma module enable,  Range: [0, 1], 0: Disable, 1: Enable*/
    AX_U8                            nLutMode;    /*  mode, Range: [0, 1], 0: linear, 1: exponential */
    AX_U8                            nGammaLutEn; /* Gamma lut enable,  Range: [0, 1], 0: Disable, 1: Enable*/
    AX_ISP_IQ_GAMMA_LUT_T            tGammaLut;   /* Gamma lut */
    AX_U8                            nGtmLutEn;   /* Gtm lut enable ,   Range: [0, 1], 0: Disable, 1: Enable*/
    AX_U8                            nAutoMode;   /* for GTM_LUT, auto or manual adjust mode, Range: [0,1], 0: manual, 1:auto, default:1 */
    AX_U8                            nRefMode;    /* choose ref mode, Range: [0,1], 0:use lux as ref, 1:use gain as ref */
    AX_ISP_IQ_GAMMA_GTM_LUT_MANUAL_T tManualParam;
    AX_ISP_IQ_GAMMA_GTM_LUT_AUTO_T   tAutoParam;
} AX_ISP_IQ_GAMMA_PARAM_T;


typedef struct {
    AX_U16  nShrinkageStrength[AX_ISP_BYAER_NUM]; /* Shrinkage Strength. Accuracy: U8.8 Range: [1, 65535] */
    AX_U8   nShrinkageWeight[AX_ISP_WNR_WEIGHT_SIZE][AX_ISP_WNR_WEIGHT_SIZE]; /* Shrinkage Weight. Accuracy: U1.7 Range: [0, 128] */
} AX_ISP_IQ_WNR_2DNR_PARAM_T;


typedef struct {
    AX_U16  nSpatialStrength[AX_ISP_BYAER_NUM]; /* Spatial Strength. Accuracy: U8.8 Range: [1, 65535] */
    AX_U16  nBlendStrength[AX_ISP_BYAER_NUM]; /* Blend Strength. Accuracy: U8.8 Range: [1, 65535] */
    AX_U16  nShrinkageStrength[AX_ISP_BYAER_NUM]; /* Shrinkage Strength. Accuracy: U8.8 Range: [1, 65535] */
    AX_U16  nStrengthLut[AX_ISP_WNR_STRENGTH_LUT_SIZE]; /* Strength Lut. Accuracy: U8.8 Range: [1, 65535] */
    AX_U8   nBlendWeight[AX_ISP_WNR_WEIGHT_SIZE][AX_ISP_WNR_WEIGHT_SIZE]; /* Blend Weight. Accuracy: U1.7 Range: [0, 128] */
    AX_U8   nShrinkageWeight[AX_ISP_WNR_WEIGHT_SIZE][AX_ISP_WNR_WEIGHT_SIZE]; /* Shrinkage Weight. Accuracy: U1.7 Range: [0, 128] */
} AX_ISP_IQ_WNR_3DNR_PARAM_T;

typedef struct {
    AX_ISP_IQ_WNR_2DNR_PARAM_T      t2DNrParam;
    AX_ISP_IQ_WNR_3DNR_PARAM_T      t3DNrParam;
} AX_ISP_IQ_WNR_MANUAL_T;

typedef struct {
    AX_U8                           nParamGrpNum; /* Accuracy: U8.0 Range: [0, AX_ISP_AUTO_TABLE_MAX_NUM] */
    AX_U32                          nRefVal[AX_ISP_AUTO_TABLE_MAX_NUM]; /* Gain: Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF]; Lux: Accuracy: U20.12 Range: [0, 0xFFFFFFFF] */
    AX_ISP_IQ_WNR_2DNR_PARAM_T      t2DNrParam[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_WNR_3DNR_PARAM_T      t3DNrParam[AX_ISP_AUTO_TABLE_MAX_NUM];
} AX_ISP_IQ_WNR_AUTO_T;

typedef struct {
    AX_U8                           nWnrEn; /* Wnr enable. Accuracy: U1 Range: [0, 1] */
    AX_U8                           nWnrMode; /* Wnr mode. Accuracy: U1 Range: [0, 1] */
    AX_U8                           nAutoMode; /* for ref auto or manual adjust mode. Accuracy: U1 Range: [0, 1] */
    AX_U8                           nRefMode; /* choose ref mode. Accuracy: U1 Range: [0, 1] */
    AX_ISP_IQ_WNR_MANUAL_T    tManualParam;
    AX_ISP_IQ_WNR_AUTO_T       tAutoParam;
} AX_ISP_IQ_WNR_PARAM_T;


typedef struct {
    AX_U8                           nLumaRatioLut[AX_ISP_CLC_LUMA_RATIO_LUT_SIZE];    /* the luma ratio table. Accuracy: U1.7 Range: [0, 0xFF] */
    AX_U8                           nAngleRatioLut[AX_ISP_CLC_ANGLE_RATIO_LUT_SIZE];  /* angle ratio table. Accuracy: U1.7 Range: [0, 0xFF] */
} AX_ISP_IQ_CLC_RATIO_LUT_T;

typedef struct {
    AX_S16                          nClcMatrix[AX_ISP_CLC_MATRIX_V_SIZE][AX_ISP_CLC_MATRIX_H_SIZE];    /* Accuracy: S3.8 Range: [-2047, 2047] */
} AX_ISP_IQ_CLC_MATRIX_T;

typedef struct {
    AX_S16 nClcAngleMatrix[AX_ISP_CLC_ANGLE_MATRIX_V_SIZE][AX_ISP_CLC_ANGLE_MATRIX_H_SIZE];    /* Accuracy: S3.8 Range: [-2047, 2047] */
} AX_ISP_IQ_CLC_ANGLE_MATRIX_T;

typedef struct {
    AX_ISP_IQ_CLC_ANGLE_MATRIX_T      tClcAngleMatrixList[AX_ISP_CLC_MATRIX_LIST_ANGLE_SIZE];
} AX_ISP_IQ_CLC_MATRIX_LIST_T;

typedef struct {
    AX_ISP_IQ_CLC_MATRIX_T          tClcMatrix;        /* CLC 3*3 Matrix*/
    AX_ISP_IQ_CLC_MATRIX_LIST_T     tClcMatrixList;    /* transformation matrices corresponding to 16 different hue */
} AX_ISP_IQ_CLC_MANUAL_T;

typedef struct {
    AX_U32                      nColorTemp;      /* Accuracy: U32.0 Range: [0, 100000] */
    AX_U8                       nSaturationNum;  /* Accuracy: U8 Range: [0, AX_ISP_AUTO_TABLE_MAX_NUM]  */
    AX_U32                      nRefVal[AX_ISP_AUTO_TABLE_MAX_NUM];    /* Gain: Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF]; Lux: Accuracy: U20.12 Range: [0, 0xFFFFFFFF] */
    AX_U32                      nSaturation[AX_ISP_AUTO_TABLE_MAX_NUM];/* Accuracy: U8.10 Range: [0, 204800] */
    AX_U8                       nClcMatrixNum;                         /* Accuracy: U8 Range: [0, AX_ISP_CLC_MATRIX_SATURAT_MAX_SIZE]  */
    AX_U32                      nMatrixSaturation[AX_ISP_CLC_MATRIX_SATURAT_MAX_SIZE]; /* Accuracy: U8.10 Range: [0, 204800] */
    AX_ISP_IQ_CLC_MATRIX_T      tClcMatrix[AX_ISP_CLC_MATRIX_SATURAT_MAX_SIZE];
    AX_ISP_IQ_CLC_MATRIX_LIST_T tClcMatrixList[AX_ISP_CLC_MATRIX_SATURAT_MAX_SIZE];    /* transformation matrices corresponding to 16 different hue */
} AX_ISP_IQ_CLC_Col_Temp_Param_T;


typedef struct {
    AX_U8                            nColorTempNum; /* Accuracy: U8 Range: [0, AX_ISP_CLC_MATRIX_COLOR_TEMP_SIZE] */
    AX_ISP_IQ_CLC_Col_Temp_Param_T   tColTempParam[AX_ISP_CLC_MATRIX_COLOR_TEMP_SIZE];  /* CLC 3*3 clib Matrix*/
} AX_ISP_IQ_CLC_AUTO_T;

typedef struct {
    AX_U8  nCLcEn;    /* Clc lut enable,  Range: [0, 1], 0: Disable, 1: Enable*/
    AX_U8  nClcMode;  /*  mode, Range: [0, 1], 0: Low power mode,Do not do matrix interpolation, 1:  do matrix interpolation */
    AX_U8  nMskEn;    /* Clc mask en, Range: [0, 1], 0: Disable, 1: Enable, only could set to 1 when npu output clc mask*/
    AX_S16 nClcHrLpf[AX_ISP_CLC_HR_LPF_SIZE];       /*low pass filter. Accuracy: S1.7 Range: [-255, 255] */
    AX_ISP_IQ_CLC_RATIO_LUT_T tClcRatioLut;         /* the luma ratio table and the angle ratio table*/
    AX_U8  nLumaRatio[AX_ISP_CLC_LUMA_RATIO_SIZE];  /* Accuracy: U1.7 Range: [0, 0x80] */
    AX_U8  nAutoMode;           /* for ref auto or manual adjust mode, [0,1], 0: manual, 1:auto, default:1 */
    AX_U8  nRefMode;            /* choose ref mode, [0,1], 0:use lux as ref, 1:use gain as ref */
    AX_ISP_IQ_CLC_MANUAL_T          tManualParam;
    AX_ISP_IQ_CLC_AUTO_T            tAutoParam;
} AX_ISP_IQ_CLC_PARAM_T;

/* Y Sharpen */
typedef struct {
    AX_U8  nShpCmaskCenterY; /* sharpen cmask y center. Accuracy: U8 Range: [0, 255] */
    AX_S8  nShpCmaskCenterUv[AX_ISP_SHP_CMASK_CENTER_UV_SIZE]; /* sharpen cmask uv center. Accuracy: S7 Range: [-128, 127] */
} AX_ISP_IQ_SHP_CENTER_T;

typedef struct {
    AX_U16 nShpCmaskRadius[AX_ISP_SHP_CMASK_SIZE]; /* sharpen cmask radius. Accuracy: U7.2 Range: [0, 511] */
} AX_ISP_IQ_SHP_RADIUS_T;

typedef struct {
    AX_U16 nShpCmaskGrad[AX_ISP_SHP_CMASK_SIZE]; /* sharpen cmask grad. Accuracy: U4 Range: [0, 15] */
} AX_ISP_IQ_SHP_GRAD_T;

typedef struct {
    AX_U8 nShpLevel[AX_ISP_SHP_LEVEL_SIZE]; /* sharpen level. Accuracy: U2.6 Range: [0, 255] */
} AX_ISP_IQ_SHP_LEVEL_T;

typedef struct {
    AX_U8 nSlope; /* sharpen edge slop. Accuracy: U1.7 Range: [0, 128] */
    AX_S8 nOffset; /* sharpen edge offset. Accuracy: S1.6 Range: [-128, 127] */
    AX_U8 nLlimit; /* sharpen edge limit. Accuracy: U0.8 Range: [0, 255] */
} AX_ISP_IQ_SHP_ED_T;

typedef struct {
    AX_U8 nShpGain[AX_ISP_SHP_GAIN_SIZE]; /* sharpen gain. Accuracy: U4.4 Range: [0, 255] */
} AX_ISP_IQ_SHP_GAIN_T;

typedef struct {
    AX_S16 nShpHpfLut[AX_ISP_SHP_HPF_LUT_SIZE_H][AX_ISP_SHP_HPF_LUT_SIZE_V]; /* high pass filter lut. Accuracy: S1.8 Range: [-512, 511] */
} AX_ISP_IQ_SHP_HPF_LUT;

typedef struct {
    AX_ISP_IQ_SHP_CENTER_T tCenter;
    AX_ISP_IQ_SHP_RADIUS_T tRadius;
    AX_ISP_IQ_SHP_GRAD_T tGrad;
    AX_U8 nShpCmaskIoFlag; /* color mask in/out flag. Accuracy: U1 Range: [0, 1] */
    AX_ISP_IQ_SHP_LEVEL_T tLevel;
    AX_U8 nShpCoring; /* sharp coring. Accuracy: U4.4 Range: [0, 255] */
    AX_ISP_IQ_SHP_ED_T tShpEd;
    AX_ISP_IQ_SHP_GAIN_T tGain;
    AX_ISP_IQ_SHP_HPF_LUT tHpfLut;
} AX_ISP_IQ_SHARPEN_MANUAL_T;

typedef struct {
    AX_U8 nParamGrpNum; /* Accuracy: U8.0 Range: [0, AX_ISP_AUTO_TABLE_MAX_NUM] */
    AX_U32 nRefVal[AX_ISP_AUTO_TABLE_MAX_NUM]; /* Gain: Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF]; Lux: Accuracy: U20.12 Range: [0, 0xFFFFFFFF] */
    AX_ISP_IQ_SHP_CENTER_T tCenter[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_SHP_RADIUS_T tRadius[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_SHP_GRAD_T tGrad[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_U8 nShpCmaskIoFlag[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_SHP_LEVEL_T tLevel[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_U8 nShpCoring[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_SHP_ED_T tShpEd[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_SHP_GAIN_T tGain[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_SHP_HPF_LUT tHpfLut[AX_ISP_AUTO_TABLE_MAX_NUM];
} AX_ISP_IQ_SHARPEN_AUTO_T;

typedef struct {
    AX_U8 nShpEn; /* sharpen on-off. Accuracy: U1 Range: [0, 1] */
    AX_U8 nAutoMode; /* for lux auto or manual adjust mode. Accuracy: U1 Range: [0, 1] */
    AX_U8 nRefMode;   /* choose ref mode. Accuracy: U1 Range: [0, 1] */
    AX_U8 nShpMaskEn0; /* sharpen mask on-off. Accuracy: U1 Range: [0, 1] */
    AX_S16 nShpLimit[AX_ISP_SHP_LIMIT_SIZE]; /* sharpen limit. Accuracy: S8.2 Range: [-1024, 1023] */
    AX_S8 nShpOsLimit[AX_ISP_SHP_OS_LIMIT_SIZE]; /* sharpen over shot limit. Accuracy: S5.2 Range: [-128, 127] */
    AX_U8 nShpOsGain; /* sharpen over shot gain. Accuracy: U1.3 Range: [0, 8] */
    AX_ISP_IQ_SHARPEN_MANUAL_T tManualParam;
    AX_ISP_IQ_SHARPEN_AUTO_T    tAutoParam;
} AX_ISP_IQ_SHARPEN_PARAM_T;

/* Luma Noise Reduction : YNR + DBPC */
typedef struct {
    AX_U8 nYnrCmaskCenterY; /* color mask center Y. Accuracy: U8 Range: [0, 255] */
    AX_S8 nYnrCmaskCenterUv[AX_ISP_YNR_CMASK_CENTER_UV_SIZE]; /* color mask center [0]:U, [1]:V. Accuracy: S7 Range: [-128, 127] */
} AX_ISP_IQ_YNR_CENTER_T;

typedef struct {
    AX_U16 nYnrCmaskRadius[AX_ISP_YNR_CMASK_SIZE]; /* color mask radius [0]:Y, [1]:U, [2]:V. Accuracy: U7.2 Range: [0, 511] */
} AX_ISP_IQ_YNR_RADIUS_T;

typedef struct {
    AX_U16 nYnrCmaskGrad[AX_ISP_YNR_CMASK_SIZE]; /* color mask transition gradient. Accuracy: U4 Range: [0, 15] */
} AX_ISP_IQ_YNR_GRAD_T;

typedef struct {
    AX_U8 nYnrLevel[AX_ISP_YNR_LEVEL_SIZE]; /* ynr level. Accuracy: U0.8 Range: [0, 255] */
} AX_ISP_IQ_YNR_LEVEL_T;

typedef struct {
    AX_U8 nYnrSfLut[AX_ISP_YNR_SF_LUT_SIZE]; /* ynr sf lut. Accuracy: U0.8 Range: [0, 255] */
} AX_ISP_IQ_YNR_SF_LUT_T;

typedef struct {
    AX_U16 nYnrInvNrLut[AX_ISP_YNR_INV_LUT_SIZE]; /* ynr 1/noise lut. Accuracy: U1.10 Range: [0, 2047] */
} AX_ISP_IQ_YNR_INV_NOISE_LUT_T;

typedef struct {
    AX_U16 nDbpcEdOffsetLut[AX_ISP_DBPC_ED_LUT_SIZE]; /* dbpc edge level offset lut. Accuracy: U8.2 Range: [0, 1023] */
} AX_ISP_IQ_DBPC_ED_LUT_T;

typedef struct {
    AX_ISP_IQ_YNR_CENTER_T tCenter;
    AX_ISP_IQ_YNR_RADIUS_T tRadius;
    AX_ISP_IQ_YNR_GRAD_T tGrad;
    AX_U8 nYnrCmaskIoFlag; /* color mask in/out flag. Accuracy: U1 Range: [0, 1] */
    AX_ISP_IQ_YNR_LEVEL_T tLevel;
    AX_ISP_IQ_YNR_SF_LUT_T tSfLut;
    AX_ISP_IQ_YNR_INV_NOISE_LUT_T tNrLut;
    AX_U8 nDbpcEdSlope; /* dbpc edge level coefficient. Accuracy: U4.4 Range: [0, 255] */
    AX_ISP_IQ_DBPC_ED_LUT_T tDbpcEdLut;
} AX_ISP_IQ_LUMA_NR_MANUAL_T;

typedef struct {
    AX_U8 nParamGrpNum; /* Accuracy: U8.0 Range: [0, AX_ISP_AUTO_TABLE_MAX_NUM] */
    AX_U32 nRefVal[AX_ISP_AUTO_TABLE_MAX_NUM]; /* Gain: Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF]; Lux: Accuracy: U20.12 Range: [0, 0xFFFFFFFF] */
    AX_ISP_IQ_YNR_CENTER_T tCenter[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_YNR_RADIUS_T tRadius[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_YNR_GRAD_T tGrad[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_U8 nYnrCmaskIoFlag[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_YNR_LEVEL_T tLevel[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_YNR_SF_LUT_T tSfLut[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_YNR_INV_NOISE_LUT_T tNrLut[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_U8 nDbpcEdSlope[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_DBPC_ED_LUT_T tDbpcEdLut[AX_ISP_AUTO_TABLE_MAX_NUM];
} AX_ISP_IQ_LUMA_NR_AUTO_T;

typedef struct {
    AX_U8 nYnrEn; /* ynr on-off. Accuracy: U1 Range: [0, 1] */
    AX_U8 nYnrMaskEn0; /* ynr mask on-off. Accuracy: U1 Range: [0, 1] */
    AX_U8 nDbpcEn; /* dbpc on-off. Accuracy: U1 Range: [0, 1] */
    AX_U8 nAutoMode; /* for lux auto or manual adjust mode, [0,1], 0: manual, 1:auto, default:1. Accuracy: U1 Range: [0, 1] */
    AX_U8 nRefMode;   /* choose ref mode, [0,1], 0:use lux as ref, 1:use gain as ref. Accuracy: U1 Range: [0, 1] */
    AX_ISP_IQ_LUMA_NR_MANUAL_T tManualParam;
    AX_ISP_IQ_LUMA_NR_AUTO_T   tAutoParam;
} AX_ISP_IQ_LUMA_NR_PARAM_T;


/* Chroma Noise Reduction : CNR + CCMP */
typedef struct {
    AX_U16 nCnrInvNrLut[AX_ISP_CNR_INV_LUT_SIZE]; /* cnr 1/noise lut. Accuracy: U1.10 Range: [0, 2047] */
} AX_ISP_IQ_CNR_INV_NOISE_LUT_T;

typedef struct {
    AX_U16 nCcmpYLut[AX_ISP_CCMP_Y_LUT_SIZE]; /* ccmp y lut. Accuracy: U1.9 Range: [0, 1023] */
} AX_ISP_IQ_CCMP_Y_LUT_T;

typedef struct {
    AX_U16 nCcmpSatLut[AX_ISP_CCMP_SAT_LUT_SIZE]; /* ccmp sat lut. Accuracy: U1.9 Range: [0, 1023] */
} AX_ISP_IQ_CCMP_SAT_LUT_T;

typedef struct {
    AX_U8 nCnrLevel; /* cnr level. Accuracy: U1.4 Range: [0, 16] */
    AX_ISP_IQ_CNR_INV_NOISE_LUT_T tCnrLut;
    AX_ISP_IQ_CCMP_Y_LUT_T tYLut;
    AX_ISP_IQ_CCMP_SAT_LUT_T tSatLut;
} AX_ISP_IQ_CHROMA_NR_MANUAL_T;

typedef struct {
    AX_U8 nParamGrpNum; /* Accuracy: U8.0 Range: [0, AX_ISP_AUTO_TABLE_MAX_NUM] */
    AX_U32 nRefVal[AX_ISP_AUTO_TABLE_MAX_NUM]; /* Gain: Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF]; Lux: Accuracy: U20.12 Range: [0, 0xFFFFFFFF] */
    AX_U8 nCnrLevel[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_CNR_INV_NOISE_LUT_T tCnrLut[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_CCMP_Y_LUT_T tYLut[AX_ISP_AUTO_TABLE_MAX_NUM];
    AX_ISP_IQ_CCMP_SAT_LUT_T tSatLut[AX_ISP_AUTO_TABLE_MAX_NUM];
} AX_ISP_IQ_CHROMA_NR_AUTO_T;

typedef struct {
    AX_U8 nCnrEn; /* cnr on-off. Accuracy: U1 Range: [0, 1] */
    AX_U8 nCcmpEn; /* ccmp on-off. Accuracy: U1 Range: [0, 1] */
    AX_U8 nAutoMode; /* for lux auto or manual adjust mode, [0,1], 0: manual, 1:auto, default:1. Accuracy: U1 Range: [0, 1] */
    AX_U8 nRefMode;   /* choose ref mode, [0,1], 0:use lux as ref, 1:use gain as ref. Accuracy: U1 Range: [0, 1] */
    AX_ISP_IQ_CHROMA_NR_MANUAL_T tManualParam;
    AX_ISP_IQ_CHROMA_NR_AUTO_T   tAutoParam;
} AX_ISP_IQ_CHROMA_NR_PARAM_T;


/* CHROMA CONTROL: CSET */
typedef struct {
    AX_U8 nCsetEn; /* cset on-off. Accuracy: U1 Range: [0, 1] */
    AX_U8 nCsetIoFlag; /* cset color mask in/out flag. Accuracy: U1 Range: [0, 1] */
    AX_S16 nCsetColor[AX_ISP_CSET_COLOR_SIZE]; /* target color. Accuracy: S7.2 Range: [-512, 511] */
    AX_U16 nCsetCenterY; /* color mask center Y. Accuracy: U8.2 Range: [0, 1023] */
    AX_S16 nCsetCenterUv[AX_ISP_CSET_MASK_CENTER_UV_SIZE]; /* cset color mask center [0]:U, [1]:V. Accuracy: S7.2 Range: [-512, 511] */
    AX_U16 nSetRadius[AX_ISP_CSET_MASK_SIZE]; /* cset color mask radius [0]:Y, [1]:U, [2]:V. Accuracy: U7.2 Range: [0, 511] */
    AX_U8 nCsetGrad[AX_ISP_CSET_MASK_SIZE]; /* cset color mask transition gradient. Accuracy: U4 Range: [0, 15] */
} AX_ISP_IQ_CSET_PARAM_T;


/* COLOR PROCESS: YCLIP + CCLIP */
/* Note: Parameter split, then set to YCLIP and CLIP register */
typedef struct {
    AX_U8 nCprocEn; /* ycproc on-off. Accuracy: U1 Range: [0, 1] */
    AX_U16 nBrightness; /* adjust brightness. Accuracy: U8.8 Range: [0, 65535] */
    AX_U16 nContrast; /* adjust contrast. Accuracy: U8.8 Range: [0, 65535] */
    AX_U16 nSaturation; /* adjust saturation. Accuracy: U8.8 Range: [0, 65535] */
    AX_U16 nHue; /* adjust hue. Accuracy: U1.15 Range: [0, 65535] */
} AX_ISP_IQ_YCPROC_PARAM_T;


/* CLIP: YCLIP + CCLIP */
/* Note: Parameter split, then set to YCLIP and CLIP register */
typedef struct {
    AX_U8 nClipInputRange[AX_ISP_CLIP_SIZE]; /* clip matrix. Accuracy: U8.0 Range: [0, 255] */
    AX_U8 nClipOutputRange[AX_ISP_CLIP_SIZE]; /* clip matrix. Accuracy: U8.0 Range: [0, 255] */
} AX_Y_CLIP_RANGE_T;

typedef struct {
    AX_U8 nClipInputRange[AX_ISP_CLIP_SIZE]; /* clip matrix. Accuracy: U8.0 Range: [0, 255] */
    AX_U8 nClipOutputRange[AX_ISP_CLIP_SIZE]; /* clip matrix. Accuracy: U8.0 Range: [0, 255] */
} AX_CbCr_CLIP_RANGE_T;

typedef struct {
    AX_U8 nClipEn; /* clip on-off. Accuracy: U1 Range: [0, 1] */
    AX_Y_CLIP_RANGE_T tYRange;
    AX_CbCr_CLIP_RANGE_T tCbCrRange;
} AX_ISP_IQ_CLIP_PARAM_T;

typedef struct {
    AX_U8    nGradfRatio;    /* gradient filter frequency adjustment ratio. Accuracy: U1.4 Range: [0, 0x10], default 12 */
} AX_ISP_IQ_DEMOSAIC_MANUAL_T;

typedef struct {
    AX_U8    nParamGrpNum;                              /* Accuracy: U8 Range: [0, AX_ISP_AUTO_TABLE_MAX_NUM] */
    AX_U32   nRefVal[AX_ISP_AUTO_TABLE_MAX_NUM];        /* Gain: Accuracy: U22.10 Range: [0x400, 0xFFFFFFFF]; Lux: Accuracy: U20.12 Range: [0, 0xFFFFFFFF] */
    AX_U8    nGradfRatio[AX_ISP_AUTO_TABLE_MAX_NUM];    /* gradient filter frequency adjustment ratio. Accuracy: U1.4 Range: [0, 0x10], default 12  */
} AX_ISP_IQ_DEMOSAIC_AUTO_T;

typedef struct {
    AX_U8  nDemosaicEn;      /* Demosaic module enable,  Range: [0, 1], 0: Disable, 1: Enable */
    AX_U8  nMode;            /* U4, 0:diff ratio,1:copy to gray,2:copy to green,3:RGGB2RGB,4:divider ratio. set 4 at gain residual mode. default 4 */
    AX_U16 nGammaLut[AX_ISP_DEMOSAIC_GAMMA_LUT_SIZE];    /* set linear at gain residual mode. Accuracy: U8.6 Range: [0, 0x3FFF] */
    AX_U8  nClipLevel;       /* Accuracy: U0.4 Range: [0, 0xF], default 8 */
    AX_U8  nRbclipEnable;    /* 0: disable rbclip, 1:enable rbclip. set 1 at gain residual mode. */
    AX_U8  nResEnable;       /* 0: disable res/mask, 1: enable */
    AX_U8  nResFcsStrength;  /* mask strength, Accuracy: U1.7 Range: [0, 0xFF], default 96 */
    AX_U8  nResGrP0[AX_ISP_DEMOSAIC_RES_GR_P_NUM];  /* Accuracy: U1.1 Range: [0, 3], default [2, 2] */
    AX_U8  nResGrP1[AX_ISP_DEMOSAIC_RES_GR_P_NUM];  /* Accuracy: U2.2 Range: [0, 0xF], default [8, 4] */
    AX_U8  nResGrP2[AX_ISP_DEMOSAIC_RES_GR_P_NUM];  /* Accuracy: U1.4 Range: [0, 0x1F], default [8, 2] */
    AX_U8  nResGrP3[AX_ISP_DEMOSAIC_RES_GR_P_NUM];  /* Accuracy: U2.2 Range: [0, 0xF], default [8, 2] */
    AX_S16 nResGrP4[AX_ISP_DEMOSAIC_RES_GR_P_NUM];  /* Accuracy: S5.6 Range: [-2047, 2047], default [64, 16] */
    AX_U8  nResGrP5;         /* Accuracy: U1.7 Range: [0, 0xFF], default 141 */
    AX_U8  nResGrP6;         /* Accuracy: U2.5 Range: [0, 0x7F], default 3 */
    AX_U16 nResConfStrength; /* strength for confidence mask for ghv_ratio mode. Accuracy: U4.8 Range: [0, 0xFFF], default 256 */
    AX_S16 nResConfOffset;   /* offset for confidence mask for ghv_ratio mode. Accuracy: S4.8 Range: [-4095, 4095], default 0 */
    AX_U8  nFcsEnable;       /* enable false color suppression, Range: [0, 1], 0: Disable, 1: Enable, default 0 */
    AX_U8  nAutoMode;        /* for ref auto or manual adjust mode, [0,1], 0: manual, 1:auto, default:1 */
    AX_U8  nRefMode;         /* choose ref mode, [0,1], 0:use lux as ref, 1:use gain as ref */
    AX_ISP_IQ_DEMOSAIC_MANUAL_T     tManualParam;
    AX_ISP_IQ_DEMOSAIC_AUTO_T       tAutoParam;
} AX_ISP_IQ_DEMOSAIC_PARAM_T;


typedef struct {
    AX_U32 uRg;
    AX_U32 uBg;
} AX_ISP_IQ_AWB_PNT_T;

typedef struct {
    AX_U32 uK;
    AX_U32 uB;
} AX_ISP_IQ_AWB_LINE_KB_T;

typedef struct {

    /* Illum Calib Info */
    AX_CHAR  cName[AX_ISP_AWB_ILLUM_NAME_LEN_MAX];
    AX_U32   uCct;
    AX_U32   uRadius;
    AX_ISP_IQ_AWB_PNT_T sCoord;

    /* Lux Weights */
    AX_U32 uLowLuxWeight;
    AX_U32 uIndoorWeight;
    AX_U32 uTransitionWeight;
    AX_U32 uOutdoorWeight;
    AX_U32 uHighLuxWeight;

} AX_ISP_IQ_AWB_ILLUM_T;


typedef struct {
    AX_U32 uMinX;
    AX_U32 uMaxX;
    AX_U32 uMinY;
    AX_U32 uMaxY;
    AX_U32 uPntCnt;
    AX_ISP_IQ_AWB_PNT_T sPntArray[AX_ISP_AWB_POLY_PNT_NUM_MAX];          /*** uPntCnt ***/
} AX_ISP_IQ_AWB_POLY_T;


typedef struct {

    /*   Calibration Params  */

    /* Gray Zone Common Info */
    AX_ISP_IQ_AWB_PNT_T sCenterPnt;
    AX_U32 uCenterPntRadius;

    AX_U32 uLowCut;
    AX_U32 uHighCut;
    AX_U32 uCctMax;
    AX_U32 uCctMin;

    AX_U32 uPartCtrlPntNum;
    AX_U32 uCtrlPntNum;
    AX_U32 uCtrlSegKbNum;       /* Should Always be uCtrlPntNum-1 */

    AX_U32                  uCctList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX];                       /*** uCtrlPntNum ***/
    AX_ISP_IQ_AWB_LINE_KB_T sChordKB;
    AX_ISP_IQ_AWB_PNT_T     sChordPntList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX];                  /*** uCtrlPntNum ***/
    AX_ISP_IQ_AWB_PNT_T     sArcPointList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX];                  /*** uCtrlPntNum ***/
    AX_ISP_IQ_AWB_LINE_KB_T sRadiusLineList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX];                /*** uCtrlPntNum ***/

    /* Gray Zone Borders */
    AX_ISP_IQ_AWB_PNT_T     sInLeftBorderPntList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX];           /*** uCtrlPntNum ***/
    AX_ISP_IQ_AWB_LINE_KB_T sInLeftBorderLineList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX - 1];      /*** uCtrlSegKbNum ***/
    AX_ISP_IQ_AWB_PNT_T     sInRightBorderPntList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX];          /*** uCtrlPntNum ***/
    AX_ISP_IQ_AWB_LINE_KB_T sInRighttBorderLineList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX - 1];    /*** uCtrlSegKbNum ***/

    AX_ISP_IQ_AWB_PNT_T     sOutLeftBorderPntList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX];          /*** uCtrlPntNum ***/
    AX_ISP_IQ_AWB_LINE_KB_T sOutLeftBorderLineList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX - 1];     /*** uCtrlSegKbNum ***/
    AX_ISP_IQ_AWB_PNT_T     sOutRightBorderPntList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX];         /*** uCtrlPntNum ***/
    AX_ISP_IQ_AWB_LINE_KB_T sOutRighttBorderLineList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX - 1];   /*** uCtrlSegKbNum ***/

    AX_ISP_IQ_AWB_PNT_T     sMidBorderPntList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX];              /*** uCtrlPntNum ***/
    AX_ISP_IQ_AWB_LINE_KB_T sMidBorderLineList[AX_ISP_AWB_CTRL_PNT_ALL_NUM_MAX - 1];         /*** uCtrlSegKbNum ***/

    /* Illum Info */
    AX_U32 uIllumNum;
    AX_ISP_IQ_AWB_ILLUM_T sIllumList[AX_ISP_AWB_ILLUM_NUM_MAX];          /*** uIllumNum  ***/
    AX_U32 uExtIllumNum;
    AX_ISP_IQ_AWB_ILLUM_T sExtIllumList[AX_ISP_AWB_EXT_ILLUM_NUM_MAX];   /*** uExtIllumNum  ***/

    /* Poly Info */
    AX_U32 uPolyNum;
    AX_ISP_IQ_AWB_POLY_T  sPolyList[AX_ISP_AWB_POLY_NUM_MAX];            /*** uPolyNum  ***/


    /*   Tuning Params  */

    /* Common Settings */
    AX_U8  uMode;            /* INVALID=0, MANUAL=1, AUTO=2 */
    AX_U32 uIndex;
    AX_U32 uDampRatio;

    /* Lux Type Threshold */
    AX_U32 uLowLuxTh;
    AX_U32 uTransMinLuxTh;
    AX_U32 uTransMidLuxTh;
    AX_U32 uTransMaxLuxTh;
    AX_U32 uHighLuxTh;

    /* Decay Settings */
    AX_U32 uShadeOffset;
    AX_U32 uShadeRatio;
    AX_U32 uYellowOffset;
    AX_U32 uYellowRatio;
    AX_U32 uYClipMin;
    AX_U32 uYClipMax;
    AX_U32 uYDecayMinThr;
    AX_U32 uYDecayMinRatio;
    AX_U32 uYDecayMaxThr;
    AX_U32 uYDecayMaxRatio;
    AX_U32 uShadeMin;
    AX_U32 uYellowMax;

    /* Zone Weights */
    AX_U32 uZoneWeightHigh;
    AX_U32 uZoneWeightMedium;
    AX_U32 uZoneWeightLow;

} AX_ISP_IQ_AWB_ALG_CONFIG_T;


typedef struct {
    AX_U32 uLuxTypeInd;
    AX_U32 uOutdoorProba;
    AX_U32 uCct;
    AX_ISP_IQ_AWB_PNT_T sStats[AX_ISP_AWB_GRID_NUM_MAX];
    AX_ISP_IQ_AWB_PNT_T sAvgRgBg;
    AX_U32 uCountNum[AX_ISP_AWB_ALL_ILLUM_NUM_MAX];
    AX_U32 uSumWeight[AX_ISP_AWB_ALL_ILLUM_NUM_MAX];
    AX_U32 uSumY[AX_ISP_AWB_ALL_ILLUM_NUM_MAX];
    AX_U32 uWeight[AX_ISP_AWB_ALL_ILLUM_NUM_MAX];
    AX_U32 uLux;
    AX_U32 uSat;
    AX_U32 uShadeCount;
    AX_U32 uYellowCount;
    AX_U32 uYMinDecayNum;
    AX_U32 uYMaxDecayNum;
} AX_ISP_IQ_AWB_ALG_STATUS_T;


typedef struct {
    AX_U32 uGainR;    /* uGainR =fGainR*1000,  fGainR  [1.0, 15.99] */
    AX_U32 uGainGr;   /* uGainGr=fGainGr*1000, fGainGr [1.0, 15.99] */
    AX_U32 uGainGb;   /* uGainGb=fGainGb*1000, fGainGb [1.0, 15.99] */
    AX_U32 uGainB;    /* uGainB =fGainB*1000,  fGainR  [1.0, 15.99] */
} AX_ISP_IQ_AWB_GAIN_T;


typedef struct {
    AX_U8 uEnable;
    AX_ISP_IQ_AWB_GAIN_T       sManualParam;
    AX_ISP_IQ_AWB_ALG_CONFIG_T sAutoParam;
} AX_ISP_IQ_AWB_PARAM_T;


typedef struct {
    AX_ISP_IQ_AWB_GAIN_T       sGainStatus;
    AX_ISP_IQ_AWB_ALG_STATUS_T sAlgoStatus;
} AX_ISP_IQ_AWB_STATUS_T;


typedef struct {
    AX_U32 uSetPoint;            /* uSetPoint   = AeTarget   * 1000  [1, 255,000] */
    AX_U32 uTolerance;           /* uTolerance  = Tolerance  * 1000,000  [1, 100,000,000] */
    AX_U32 uAgainLcg2HcgTh;      /* uAgainLcg2HcgTh = Th * 1000  [1, 1000,000] */
    AX_U32 uAgainHcg2LcgTh;      /* uAgainHcg2LcgTh = Th * 1000  [1, 1000,000] */
    AX_U32 uAgainLcg2HcgRatio;   /* uAgainLcg2HcgRatio = Ratio  * 1000  [1, 1000,000] */
    AX_U32 uAgainHcg2LcgRatio;   /* uAgainHcg2LcgRatio = Ratio  * 1000  [1, 1000,000] */
    AX_U32 uSigma;               /* uSigma = Sigma * 1000,000  [1, 1000,000,000] */
    AX_U32 uLuxk;                /* uLuxk  = Luxk  * 1000,000  [1, 1000,000,000] */

    AX_U32 uMaxIspGain;     /* uMaxIspGain   = MaxIspGain   * 1000,000  [1, 1000,000,000] */
    AX_U32 uMinIspGain;     /* uMinIspGain   = MinIspGain   * 1000,000  [1, 1000,000,000] */
    AX_U32 uMaxUserDgain;   /* uMaxUserDgain = MaxUserDgain * 1000,000  [1, 1000,000,000] */
    AX_U32 uMinUserDgain;   /* uMinUserDgain = MinUserDgain * 1000,000  [1, 1000,000,000] */
    AX_U32 uMaxUserAgain;   /* uMaxUserAgain = MaxUserAgain * 1000,000  [1, 1000,000,000] */
    AX_U32 uMinUserAgain;   /* uMinUserAgain = MinUserAgain * 1000,000  [1, 1000,000,000] */
    AX_U32 uMaxShutter;     /* uMaxShutter   = MaxShutter   * 1000,000  [1, 1000,000,000] */
    AX_U32 uMinShutter;     /* uMinShutter   = MinShutter   * 1000,000  [1, 1000,000,000] */

    AX_U32 uRoiStartX;        /* uRoiStartX = RoiStartX * 1000  [0, 1000]  */
    AX_U32 uRoiStartY;        /* uRoiStartY = RoiStartY * 1000  [0, 1000]  */
    AX_U32 uRoiWidth;         /* uRoiWidth  = RoiWidth  * 1000  [0, 1000]  */
    AX_U32 uRoiHeight;        /* uRoiHeight = RoiHeight * 1000  [0, 1000]  */
    AX_U32 uWeightRoi;        /* uWeightRoi = WeightRoi * 1000  [0, 1000]  */
    AX_U32 uWeightBackgnd;    /* uWeightBackgnd = WeightBackgnd * 1000  [0, 1000]  */

    AX_U32 uFlickerPeriod;    /* OFF:0,  100Hz:1,  120Hz:2 */
} AX_ISP_IQ_AE_ALG_CONFIG_T;

typedef struct {
    AX_U32 uIspGain;       /* uIspGain = IspGain * 1000,000  [1, 1000,000,000] */
    AX_U32 uAGain;         /* uAGain   = AGain   * 1000,000  [1, 1000,000,000] */
    AX_U32 uDgain;         /* uDGain   = DGain   * 1000,000  [1, 1000,000,000] */
    AX_U8  uHcgLcg;        /* HCG:0, LCG:1 */
    AX_U32 uShutter;       /* uShutter = Shutter * 1000,000  [1, 1000,000,000] */

    /* Below Unused on Tool, first defined, not used */
    AX_U32 uShortAgain;    /* uShortAgain   = ShortAgain   * 1000,000  [1, 1000,000,000] */
    AX_U32 uShortDgain;    /* uShortDgain   = ShortDgain   * 1000,000  [1, 1000,000,000] */
    AX_U32 uShortShutter;  /* uShortShutter = ShortShutter * 1000,000  [1, 1000,000,000] */
    AX_U32 uVsAgain;       /* uVsAgain   = VsAgain   * 1000,000  [1, 1000,000,000] */
    AX_U32 uVsDgain;       /* uVsDgain   = VsDgain   * 1000,000  [1, 1000,000,000] */
    AX_U32 uVsShutter;     /* uVsShutter = VsShutter * 1000,000  [1, 1000,000,000] */
    AX_U32 uHdrRatio;      /* uHdrRatio  = HdrRatio * 1000  [1, 127,000] */
} AX_ISP_IQ_EXP_SETTING_T;


typedef struct {
    AX_U32 uMeanLuma;    /* uMeanLuma = MeanLuma * 1000    [1, 255,000]  */
    AX_U64 uLux;         /* uLux    = Lux * 100,000  */
    AX_U64 uExpVal;      /* uExpVal = IspGain * AGain * DGain * Shutter * 1000,000  */
} AX_ISP_IQ_AE_ALG_STATUS_T;


typedef struct {
    AX_U8 uEnable;
    AX_ISP_IQ_EXP_SETTING_T   sExpManual;
    AX_ISP_IQ_AE_ALG_CONFIG_T sAeAlgAuto;
} AX_ISP_IQ_AE_PARAM_T;

typedef struct {
    AX_ISP_IQ_AE_ALG_STATUS_T sAlgStatus;
    AX_ISP_IQ_EXP_SETTING_T   sExpStatus;
} AX_ISP_IQ_AE_STATUS_T;


typedef struct {
    AX_U32 uMax;
    AX_U32 uMin;
    AX_U32 uStep;
} AX_ISP_IQ_AE_UNIT_T;


typedef struct {

    AX_U8  uGainMode;   /* 0:AGain_Only,  1:AGain_DGain_Separate,  2: AGain_DGain_Combined */
    AX_U8  uDcgEn;      /* 1: support LCG/HCG switch,    0: Not Support */
    AX_U32 uDcgRatio;   /* uDcgRatio = (HCG/LCG) * 1000    [1000, 1000,000]  */

    AX_ISP_IQ_AE_UNIT_T sIspDgainLimit;
    AX_ISP_IQ_AE_UNIT_T sSnsShutterLimit;
    AX_ISP_IQ_AE_UNIT_T sSnsAgainLimit;
    AX_ISP_IQ_AE_UNIT_T sSnsDgainLimit;

    /*first defined, temp not used*/
    AX_ISP_IQ_AE_UNIT_T sShortAgainLimit;
    AX_ISP_IQ_AE_UNIT_T sShortDgainLimit;
    AX_ISP_IQ_AE_UNIT_T sShortShutterLimit;
    AX_ISP_IQ_AE_UNIT_T sVsAgainLimit;
    AX_ISP_IQ_AE_UNIT_T sVsDgainLimit;
    AX_ISP_IQ_AE_UNIT_T sVsShutterLimit;

} AX_ISP_IQ_EXP_HW_LIMIT_T;


typedef struct {
    AX_U64 uExpList[AX_ISP_AE_LUX_MAX_PAIR_NUM];     /* uExpList[i] = IspGain * AGain * DGain * Shutter * 1000,000  */
    AX_U64 uLuxList[AX_ISP_AE_LUX_MAX_PAIR_NUM];     /* uLuxList[i]  = Lux  * 100,000  */
    AX_U32 uLumaList[AX_ISP_AE_LUX_MAX_PAIR_NUM];    /* uLumaList[i] = Luma * 1000    [1, 255,000]  */
} AX_ISP_IQ_LUX_K_CALIB_INPUT_T;


typedef struct {
    AX_U8  uYSel;    /* 0:Disable Y, Use Green Channle.  1:Use RGB to Y */
    AX_U8  uGrgbSel; /* 0: Use Gr,  1:Use Gb */
    AX_U16 uCoeffR;  /* U0.12 */
    AX_U16 uCoeffG;  /* U0.12 */
    AX_U16 uCoeffB;  /* U0.12 */
} AX_ISP_IQ_AF_BAYER2Y_PARAM_T;

typedef struct {
    AX_U8  uGammaEnable;    /* 0:Disable Gamma,   1:Enable.  */
    AX_U32 uGammaVal;       /* uGammaVal = Gamma_Exp * 1000.   Default: Gamma_Exp=2.2  */
} AX_ISP_IQ_AF_GAMMA_PARAM_T;

typedef struct {
    AX_U8 uScaleEnable;   /* 0:Disable Downsample,   1:Enable Downsample.  */
    AX_U8 uScaleFactor;   /* Downsample Ratio.   */
} AX_ISP_IQ_AF_DOWNSCALE_PARAM_T;

typedef struct {
    AX_U32 uCoringTh;      /* U8.10 */
    AX_U16 uCoringGain;    /* U5.7 */
    AX_U8  uCoringLut[AX_ISP_AF_CORING_LUT_NUM];   /* U5, Range[0:31] */
} AX_ISP_IQ_AF_CORING_PARAM_T;

typedef struct {
    AX_U16 uRoiOffsetH;       /* horiOffset, max value 5184, must be even */
    AX_U16 uRoiOffsetV;       /* vertOffset, max value 3880, must be even */
    AX_U16 uRoiRegionNumH;    /* horiRegionNum, max value 72-1=71, suggest odd */
    AX_U16 uRoiRegionNumV;    /* vertRegionNum, max value 54-1=53, suggest odd */
    AX_U16 uRoiRegionW;       /* regionW, 1~1023, must be odd */
    AX_U16 uRoiRegionH;       /* regionH, 1~1023, must be odd */
} AX_ISP_IQ_AF_ROI_PARAM_T;


/* attention:
 * uViirTableIndex/uH1iirTableIndex/uH2iirTableIndex are used to
 * choose sViirFilterTable/sH1iirFilterTable/sH2iirFilterTable 's index starting with 1 (not 0).
 * if in range, then fViirLut/fH1iirLut/fH2iirLut will be set using index pointed to table's array.
 * if =0, then fViirLut/fH1iirLut/fH2iirLut will be set manually.
 */
typedef struct  {
    /* Range:[1, AX_ISP_AF_IIR_REF_LIST_SIZE], if =0 need manual set uManualViirCoefList */
    AX_U32 uVIirRefId;

    /* S2.14, Don't Use S32.  Gen by Tool, Don't Edit, Not Human Readable. */
    AX_U32 uManualViirCoefList[AX_ISP_AF_IIR_COEF_NUM];
} AX_ISP_IQ_AF_FLT_V_PARAM_T;


typedef struct {
    /* Range:[1, AX_ISP_AF_IIR_REF_LIST_SIZE], if =0 need manual set uManualH1iirCoefList*/
    AX_U32 uH1IirRefId;

    /* S2.14, Don't Use S32.  Gen by Tool, Don't Edit, Not Human Readable. */
    AX_U32 uManualH1iirCoefList[AX_ISP_AF_IIR_COEF_NUM];

    /* S6,  Gen by Tool, Don't Edit, Not Human Readable. */
    AX_U32 uManualH1firCoefList[AX_ISP_AF_FIR_COEF_NUM];
} AX_ISP_IQ_AF_FLT_H1_PARAM_T;


typedef struct {
    /* Range:[1, AX_ISP_AF_IIR_REF_LIST_SIZE], if =0 need manual set uManualH2iirCoefList*/
    AX_U32 uH2IirRefId;

    /* S2.14, Don't Use S32.  Gen by Tool, Don't Edit, Not Human Readable. */
    AX_U32 uManualH2iirCoefList[AX_ISP_AF_IIR_COEF_NUM];

    /* S6,  Gen by Tool, Don't Edit, Not Human Readable. */
    AX_U32 uManualH2firCoefList[AX_ISP_AF_FIR_COEF_NUM];
} AX_ISP_IQ_AF_FLT_H2_PARAM_T;


typedef struct {
    AX_U8 uFirEnable;                    /* 0:Disable FIR,  1:Enable FIR */
    AX_ISP_IQ_AF_FLT_V_PARAM_T  sFltV;   /* The V Filter Coef List to access Register */
    AX_ISP_IQ_AF_FLT_H1_PARAM_T sFltH1;  /* The H1 Filter Coef List to access Register */
    AX_ISP_IQ_AF_FLT_H2_PARAM_T sFltH2;  /* The H1 Filter Coef List to access Register */
} AX_ISP_IQ_AF_FLT_PARAM_T;


typedef struct {
    AX_U8 uAfEnable;
    AX_ISP_IQ_AF_BAYER2Y_PARAM_T   sAfBayer2Y;
    AX_ISP_IQ_AF_GAMMA_PARAM_T     sAfGamma;
    AX_ISP_IQ_AF_DOWNSCALE_PARAM_T sAfScaler;
    AX_ISP_IQ_AF_FLT_PARAM_T       sAfFilter;
    AX_ISP_IQ_AF_CORING_PARAM_T    sAfCoring;
    AX_ISP_IQ_AF_ROI_PARAM_T       sAfRoi;
} AX_ISP_IQ_AF_STAT_PARAM_T;


/* Bandpass Filter for Reference, with the Coefficients and Bandpass Info. */
typedef struct {
    AX_U32 uStartFreq;   /* uStartFreq = StartFreq * 1000,000    [1, 1000,000]   */
    AX_U32 uEndFreq;     /* uEndFreq   = EndFreq   * 1000,000    [1, 1000,000]   */

    /* S2.14, Don't Use S32.  Gen by Tool, Don't Edit, Not Human Readable. */
    AX_U32 uIirCoefList[AX_ISP_AF_IIR_COEF_NUM];
} AX_ISP_IQ_AF_IIR_REF_T;


/* Frequently Used Bandpass Filter List for Reference.  */
typedef struct {
    AX_ISP_IQ_AF_IIR_REF_T sVIirRefList[AX_ISP_AF_IIR_REF_LIST_SIZE];
    AX_ISP_IQ_AF_IIR_REF_T sH1IirRefList[AX_ISP_AF_IIR_REF_LIST_SIZE];
    AX_ISP_IQ_AF_IIR_REF_T sH2IirRefList[AX_ISP_AF_IIR_REF_LIST_SIZE];
} AX_ISP_IQ_AF_IIR_REF_LIST_T;


typedef struct {
    AX_CHAR szModelName[AX_ISP_MAX_PATH_SIZE];  /* model path, absolute path */
    // AX_U8 nIsoMode;
    AX_U8  nHcgMode;                            /* model param, based on the real param of model. Accuracy: U2 Range: [1, 2] */
    AX_U8  nNrMode;                             /* model param, based on the real param of model */
    AX_U8  nSfMode;                             /* model param, based on the real param of model */
    AX_U16 nNNStrength;                         /* NR de-noise strength. Accuracy: U8.8 Range: [0, 0xFFFF], default 0 */
} AX_ISP_NPU_MODEL_PARAM_T;

typedef struct {
    AX_U8  nModelNum;                           /* total number of models. Accuracy: U8.0 Range: [0, AX_ISP_NPU_MODEL_MAX_NUM] */
    AX_U8  nIsoThresholdNum;                    /* total number of thresholds. Accuracy: U8.0 Range: [0, AX_ISP_NPU_ISO_MODEL_MAX_NUM] */
    AX_U32 nIsoThresholdArr[AX_ISP_NPU_ISO_MODEL_MAX_NUM]; /* Accuracy: U16 Range: [0, 25600] */
    AX_ISP_NPU_MODEL_PARAM_T tModelTable[AX_ISP_NPU_MODEL_MAX_NUM];
} AX_ISP_NPU_AUTO_PARAM_T;

typedef struct {
    AX_CHAR szModelName[AX_ISP_MAX_PATH_SIZE];  /* model path, absolute path */
} AX_ISP_NPU_MANUAL_PARAM_T;

typedef struct {
    AX_CHAR szModelName[AX_ISP_MAX_PATH_SIZE];  /* model path, absolute path */
    AX_U8 nNrMode;                              /* model param, based on the real param of model */
    AX_U8 nSfMode;                              /* model param, based on the real param of model */
    AX_U8 nFtMode;                              /* model param, based on the real param of model */
} AX_ISP_NPU_DUMMY_PARAM_T;

typedef struct {
    AX_U8 bNrEnable;     /* for NR mode, 0: dummy mode, 1:nr mode, default:1. Accuracy: U1 Range: [0, 1] */
    AX_U8 bAutoMode;     /* for NR auto or manual adjust mode, 0: manual, 1:auto, default:1. Accuracy: U1 Range: [0, 1] */
    AX_U8 bUpdateTable;  /* for NR model table switch enable mode, 0: disable, 1:enable, default:0. Accuracy: U1 Range: [0, 1] */
    AX_U8 nHdrMode;      /* for NR model hdr mode get/set, 1: sdr, 2:hdr_2x, 3:hdr_3x, default:1. Accuracy: U2 Range: [1, 2, 3] */
    AX_U8 nNNEffort;      /* NR denosie effort. Accuracy: U8.8 Range: [0, 0xFFFF], default 0*/
    AX_CHAR szDefaultModelName[AX_ISP_MAX_PATH_SIZE];  /* default model, must be one of the tModelTable model */
    AX_ISP_NPU_DUMMY_PARAM_T  tDummyParam;             /* for NR dummy mode, just be setting when bUpdateTable = 1 */
    AX_ISP_NPU_MANUAL_PARAM_T tManualParam;            /* manual model, must be one of the tModelTable model */
    AX_ISP_NPU_AUTO_PARAM_T   tAutoParam;              /* auto mode param, just be setting when bUpdateTable = 1 */
} AX_ISP_IQ_NPU_PARAM_T;

/* BLC sbl sub function interface */
AX_S32 AX_ISP_IQ_SetBlcParam(AX_U8 pipe, AX_ISP_IQ_BLC_PARAM_T *pIspBlcParam);
AX_S32 AX_ISP_IQ_GetBlcParam(AX_U8 pipe, AX_ISP_IQ_BLC_PARAM_T *pIspBlcParam);

/* BLC FPN sub function interface (only enabled in sensor which has VOB area) */
AX_S32 AX_ISP_IQ_SetFpnParam(AX_U8 pipe, AX_ISP_IQ_FPN_PARAM_T  *pIspFpnParam);
AX_U32 AX_ISP_IQ_GetFpnParam(AX_U8 pipe, AX_ISP_IQ_FPN_PARAM_T  *pIspFpnParam);

/* BLC GBL sub function interface (only enabled in sensor which has VOB area) */
AX_S32 AX_ISP_IQ_SetGblParam(AX_U8 pipe, AX_ISP_IQ_GBL_PARAM_T  *pIspGblParam);
AX_U32 AX_ISP_IQ_GetGblParam(AX_U8 pipe, AX_ISP_IQ_GBL_PARAM_T  *pIspGblParam);

/* BLC DarkShading sub function interface */
AX_S32 AX_ISP_IQ_SetDarkShadingParam(AX_U8 pipe, AX_ISP_IQ_DS_PARAM_T  *pIspDSParam);
AX_U32 AX_ISP_IQ_GetDarkShadingParam(AX_U8 pipe, AX_ISP_IQ_DS_PARAM_T  *pIspDSParam);

AX_S32 AX_ISP_IQ_SetDpcParam(AX_U8 pipe, AX_ISP_IQ_DPC_PARAM_T *pIspDpcParam);
AX_S32 AX_ISP_IQ_GetDpcParam(AX_U8 pipe, AX_ISP_IQ_DPC_PARAM_T *pIspDpcParam);

AX_S32 AX_ISP_IQ_SetCacParam(AX_U8 pipe, AX_ISP_IQ_CAC_PARAM_T  *pIspCacParam);
AX_U32 AX_ISP_IQ_GetCacParam(AX_U8 pipe, AX_ISP_IQ_CAC_PARAM_T  *pIspCacParam);

AX_S32 AX_ISP_IQ_SetRltmParam(AX_U8 pipe, AX_ISP_IQ_RLTM_PARAM_T *pIspRltmParam);
AX_S32 AX_ISP_IQ_GetRltmParam(AX_U8 pipe, AX_ISP_IQ_RLTM_PARAM_T *pIspRltmParam);

AX_S32 AX_ISP_IQ_SetDehazeParam(AX_U8 pipe, AX_ISP_IQ_DEHAZE_PARAM_T *pIspDehazeParam);
AX_S32 AX_ISP_IQ_GetDehazeParam(AX_U8 pipe, AX_ISP_IQ_DEHAZE_PARAM_T *pIspDehazeParam);

AX_S32 AX_ISP_IQ_SetLscParam(AX_U8 pipe, AX_ISP_IQ_LSC_PARAM_T *pIspLscParam);
AX_S32 AX_ISP_IQ_GetLscParam(AX_U8 pipe, AX_ISP_IQ_LSC_PARAM_T *pIspLscParam);

AX_S32 AX_ISP_IQ_SetCsc0Param(AX_U8 pipe, AX_ISP_IQ_YUV_CSC0_PARAM_T *pIspCsc0Param);
AX_S32 AX_ISP_IQ_GetCsc0Param(AX_U8 pipe, AX_ISP_IQ_YUV_CSC0_PARAM_T *pIspCsc0Param);

AX_S32 AX_ISP_IQ_SetCsc1Param(AX_U8 pipe, AX_ISP_IQ_YUV_CSC1_PARAM_T *pIspCsc1Param);
AX_S32 AX_ISP_IQ_GetCsc1Param(AX_U8 pipe, AX_ISP_IQ_YUV_CSC1_PARAM_T *pIspCsc1Param);


AX_S32 AX_ISP_IQ_SetGammaParam(AX_U8 pipe, AX_ISP_IQ_GAMMA_PARAM_T *pIspGammaParam);
AX_S32 AX_ISP_IQ_GetGammaParam(AX_U8 pipe, AX_ISP_IQ_GAMMA_PARAM_T *pIspGammaParam);

AX_S32 AX_ISP_IQ_SetWnrParam(AX_U8 pipe, AX_ISP_IQ_WNR_PARAM_T *pIspWnrParam);
AX_S32 AX_ISP_IQ_GetWnrParam(AX_U8 pipe, AX_ISP_IQ_WNR_PARAM_T *pIspWnrParam);

AX_S32 AX_ISP_IQ_SetClcParam(AX_U8 pipe, AX_ISP_IQ_CLC_PARAM_T *pIspClcParam);
AX_S32 AX_ISP_IQ_GetClcParam(AX_U8 pipe, AX_ISP_IQ_CLC_PARAM_T *pIspClcParam);

AX_S32 AX_ISP_IQ_SetShpParam(AX_U8 pipe, AX_ISP_IQ_SHARPEN_PARAM_T *pIspShpParam);
AX_S32 AX_ISP_IQ_GetShpParam(AX_U8 pipe, AX_ISP_IQ_SHARPEN_PARAM_T *pIspShpParam);

AX_S32 AX_ISP_IQ_SetLumaNrParam(AX_U8 pipe, AX_ISP_IQ_LUMA_NR_PARAM_T *pIspLumaNrParam);
AX_S32 AX_ISP_IQ_GetLumaNrParam(AX_U8 pipe, AX_ISP_IQ_LUMA_NR_PARAM_T *pIspLumaNrParam);

AX_S32 AX_ISP_IQ_SetChromaNrParam(AX_U8 pipe, AX_ISP_IQ_CHROMA_NR_PARAM_T *pIspChromaNrParam);
AX_S32 AX_ISP_IQ_GetChromaNrParam(AX_U8 pipe, AX_ISP_IQ_CHROMA_NR_PARAM_T *pIspChromaNrParam);

AX_S32 AX_ISP_IQ_SetCsetParam(AX_U8 pipe, AX_ISP_IQ_CSET_PARAM_T *pIspCsetParam);
AX_S32 AX_ISP_IQ_GetCsetParam(AX_U8 pipe, AX_ISP_IQ_CSET_PARAM_T *pIspCsetParam);

AX_S32 AX_ISP_IQ_SetYcprocParam(AX_U8 pipe, AX_ISP_IQ_YCPROC_PARAM_T *pIspYcprocParam);
AX_S32 AX_ISP_IQ_GetYcprocParam(AX_U8 pipe, AX_ISP_IQ_YCPROC_PARAM_T *pIspYcprocParam);

AX_S32 AX_ISP_IQ_SetClipParam(AX_U8 pipe, AX_ISP_IQ_CLIP_PARAM_T *pIspClipParam);
AX_S32 AX_ISP_IQ_GetClipParam(AX_U8 pipe, AX_ISP_IQ_CLIP_PARAM_T *pIspClipParam);

AX_S32 AX_ISP_IQ_SetDemosaicParam(AX_U8 pipe, AX_ISP_IQ_DEMOSAIC_PARAM_T *pIspDemosaicParam);
AX_S32 AX_ISP_IQ_GetDemosaicParam(AX_U8 pipe, AX_ISP_IQ_DEMOSAIC_PARAM_T *pIspDemosaicParam);

AX_S32 AX_ISP_IQ_SetAwbParam(AX_U8 pipe, AX_ISP_IQ_AWB_PARAM_T *pIspAwbParam);
AX_S32 AX_ISP_IQ_GetAwbParam(AX_U8 pipe, AX_ISP_IQ_AWB_PARAM_T *pIspAwbParam);
AX_S32 AX_ISP_IQ_GetAwbStatus(AX_U8 pipe, AX_ISP_IQ_AWB_STATUS_T *pIspAwbStatus);

AX_S32 AX_ISP_IQ_SetAeParam(AX_U8 pipe, AX_ISP_IQ_AE_PARAM_T *pIspAeParam);
AX_S32 AX_ISP_IQ_GetAeParam(AX_U8 pipe, AX_ISP_IQ_AE_PARAM_T *pIspAeParam);
AX_S32 AX_ISP_IQ_GetAeStatus(AX_U8 pipe, AX_ISP_IQ_AE_STATUS_T *pIspAeStatus);
AX_S32 AX_ISP_IQ_GetAeHwLimit(AX_U8 pipe, AX_ISP_IQ_EXP_HW_LIMIT_T *pIspAeHwLimit);
AX_S32 AX_ISP_IQ_CalibrateAeLuxK(AX_U8 pipe, AX_ISP_IQ_LUX_K_CALIB_INPUT_T *pIspAeLuxk);
AX_U32 AX_ISP_IQ_GetAeLuxK(AX_U8 pipe);

AX_S32 AX_ISP_IQ_SetAfStatParam(AX_U8 pipe, AX_ISP_IQ_AF_STAT_PARAM_T *pAfStatParams);
AX_S32 AX_ISP_IQ_GetAfStatParam(AX_U8 pipe, AX_ISP_IQ_AF_STAT_PARAM_T *pAfStatParams);
AX_S32 AX_ISP_IQ_SetAFIirRefList(AX_U8 pipe, AX_ISP_IQ_AF_IIR_REF_LIST_T *pIirRefList);
AX_S32 AX_ISP_IQ_GetAFIirRefList(AX_U8 pipe, AX_ISP_IQ_AF_IIR_REF_LIST_T *pIirRefList);

AX_S32 AX_ISP_SetNpuParam(AX_U8 pipe, AX_ISP_IQ_NPU_PARAM_T *pIspNpuParam);
AX_S32 AX_ISP_GetNpuParam(AX_U8 pipe, AX_ISP_IQ_NPU_PARAM_T *pIspNpuParam);


#ifdef __cplusplus
}
#endif

#endif //_AX_ISP_IQ_API_H_
