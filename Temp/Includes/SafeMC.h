/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _SAFEMC_
#define _SAFEMC_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <acp10man.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Datatypes and datatypes of function blocks */
typedef enum SMC_SinCos_R19_OptsIndex_enum
{	S19_ENCODER_TYPE = 0,
	S19_FFS_ENC_ERR_MODE = 1,
	S19_MODE_BM = 2,
	S19_USE_SEM = 3,
	S19_NR_OF_SIGNAL_PERIODS = 4,
	S19_SCALE_REVO = 5,
	S19_SCALE_UNITS = 6,
	S19_SCALE_DIRECTION = 7,
	S19_SCALE_LENGTH = 8,
	S19_SCALE_NORMSPEEDMAX = 9,
	S19_ACCELERATION_MAX = 10,
	S19_HOMING_POS = 11,
	S19_HOMING_MAX_SPEED = 12,
	S19_HOMING_T_MON = 13,
	S19_HOMING_MODE = 14,
	S19_HOMING_REFSWEDGE = 15,
	S19_HOMING_TRIGGER_DIR = 16,
	S19_ALIGNMENT_BYTE_3 = 17,
	S19_DECELERATION_RAMP = 18,
	S19_USE_SMS = 19,
	S19_USE_AUTO_RESET_AT_STARTUP = 20,
	S19_SELECT_STO1_CHANNEL = 21,
	S19_USE_RAMPMONITORING_SS1 = 22,
	S19_USE_RAMPMONITORING_SS2 = 23,
	S19_USE_RAMPMONITORING_SLS = 24,
	S19_USE_EARLY_LIMIT_MON = 25,
	S19_USE_SMP = 26,
	S19_USE_ENC_POS_MON = 27,
	S19_USE_ENC_SPEED_MON = 28,
	S19_USE_SET_POS_ALIVE_TEST = 29,
	S19_FUNC_FAIL_SAFE_MODE = 30,
	S19_FUNC_FAIL_SAFE_DELAY_STO = 31,
	S19_FUNC_FAIL_SAFE_DELAY_BRK = 32,
	S19_ACCELERATION_LIM_POS = 33,
	S19_DECELERATION_LIM_POS = 34,
	S19_ACCELERATION_LIM_NEG = 35,
	S19_DECELERATION_LIM_NEG = 36,
	S19_SPEED_LIMIT_SMS = 37,
	S19_SPEED_LIMIT_SLS1 = 38,
	S19_SPEED_LIMIT_SLS2 = 39,
	S19_SPEED_LIMIT_SLS3 = 40,
	S19_SPEED_LIMIT_SLS4 = 41,
	S19_POS_LIMIT_MIN_SMP = 42,
	S19_POS_LIMIT_MAX_SMP = 43,
	S19_POS_LIMIT_MIN_SLP = 44,
	S19_POS_LIMIT_MAX_SLP = 45,
	S19_SPEED_TOLERANCE = 46,
	S19_POSITION_TOLERANCE = 47,
	S19_SLI_POSITION_WINDOW = 48,
	S19_SLI_T_OFF_DELAY = 49,
	S19_RAMP_MON_TIME_SS1 = 50,
	S19_RAMP_MON_TIME_SS2 = 51,
	S19_RAMP_MON_TIME_SLS1 = 52,
	S19_RAMP_MON_TIME_SLS2 = 53,
	S19_RAMP_MON_TIME_SLS3 = 54,
	S19_RAMP_MON_TIME_SLS4 = 55,
	S19_DELAY_RAMP_MONITORING = 56,
	S19_DELAY_SDI = 57,
	S19_DELAY_SBC = 58,
	S19_DELAY_SLP = 59,
	S19_DELAY_SBT = 60,
	S19_DELAY_SLA = 61,
	S19_EARLY_LIMIT_MON_TIME = 62,
	S19_ENC_MONITORING_POS_TOL = 63,
	S19_ENC_MONITORING_SPEED_TOL = 64,
	S19_SBT_INTERVAL = 65,
	S19_SBT_THRESHOLD = 66,
	S19_SBT_EXTERNAL_LOAD = 67,
	S19_SBT_DURATION = 68,
	S19_SBT_POSITION_TOLERANCE = 69,
	S19_DELAY_FFS_BM = 70,
	S19_CONFIGURED_SF_BM = 71
} SMC_SinCos_R19_OptsIndex_enum;

typedef enum SMC_EnDat22_R19_OptsIndex_enum
{	E19_ENCODER_TYPE = 0,
	E19_FFS_ENC_ERR_MODE = 1,
	E19_MODE_BM = 2,
	E19_USE_SEM = 3,
	E19_SCALE_REVO = 4,
	E19_SCALE_UNITS = 5,
	E19_SCALE_DIRECTION = 6,
	E19_SCALE_LENGTH = 7,
	E19_SCALE_NORMSPEEDMAX = 8,
	E19_ACCELERATION_MAX = 9,
	E19_HOMING_POS = 10,
	E19_HOMING_MAX_SPEED = 11,
	E19_HOMING_T_MON = 12,
	E19_HOMING_MODE = 13,
	E19_HOMING_REFSWEDGE = 14,
	E19_HOMING_TRIGGER_DIR = 15,
	E19_HOMING_REF_PULSE = 16,
	E19_HOMING_REMANENT_SAFE_POS = 17,
	E19_HOMING_REF_P_BLOCK = 18,
	E19_ALIGNMENT_BYTE_3 = 19,
	E19_ALIGNMENT_BYTE_4 = 20,
	E19_DECELERATION_RAMP = 21,
	E19_USE_SMS = 22,
	E19_USE_AUTO_RESET_AT_STARTUP = 23,
	E19_SELECT_STO1_CHANNEL = 24,
	E19_USE_RAMPMONITORING_SS1 = 25,
	E19_USE_RAMPMONITORING_SS2 = 26,
	E19_USE_RAMPMONITORING_SLS = 27,
	E19_USE_EARLY_LIMIT_MON = 28,
	E19_USE_SMP = 29,
	E19_USE_ENC_POS_MON = 30,
	E19_USE_ENC_SPEED_MON = 31,
	E19_USE_SET_POS_ALIVE_TEST = 32,
	E19_FUNC_FAIL_SAFE_MODE = 33,
	E19_FUNC_FAIL_SAFE_DELAY_STO = 34,
	E19_FUNC_FAIL_SAFE_DELAY_BRK = 35,
	E19_ACCELERATION_LIM_POS = 36,
	E19_DECELERATION_LIM_POS = 37,
	E19_ACCELERATION_LIM_NEG = 38,
	E19_DECELERATION_LIM_NEG = 39,
	E19_SPEED_LIMIT_SMS = 40,
	E19_SPEED_LIMIT_SLS1 = 41,
	E19_SPEED_LIMIT_SLS2 = 42,
	E19_SPEED_LIMIT_SLS3 = 43,
	E19_SPEED_LIMIT_SLS4 = 44,
	E19_POS_LIMIT_MIN_SMP = 45,
	E19_POS_LIMIT_MAX_SMP = 46,
	E19_POS_LIMIT_MIN_SLP = 47,
	E19_POS_LIMIT_MAX_SLP = 48,
	E19_SPEED_TOLERANCE = 49,
	E19_POSITION_TOLERANCE = 50,
	E19_SLI_POSITION_WINDOW = 51,
	E19_SLI_T_OFF_DELAY = 52,
	E19_RAMP_MON_TIME_SS1 = 53,
	E19_RAMP_MON_TIME_SS2 = 54,
	E19_RAMP_MON_TIME_SLS1 = 55,
	E19_RAMP_MON_TIME_SLS2 = 56,
	E19_RAMP_MON_TIME_SLS3 = 57,
	E19_RAMP_MON_TIME_SLS4 = 58,
	E19_DELAY_RAMP_MONITORING = 59,
	E19_DELAY_SDI = 60,
	E19_DELAY_SBC = 61,
	E19_DELAY_SLP = 62,
	E19_DELAY_SLA = 63,
	E19_EARLY_LIMIT_MON_TIME = 64,
	E19_ENC_MONITORING_POS_TOL = 65,
	E19_ENC_MONITORING_SPEED_TOL = 66,
	E19_DELAY_FFS_BM = 67,
	E19_CONFIGURED_SF_BM = 68
} SMC_EnDat22_R19_OptsIndex_enum;

typedef enum SMC_Acp_P3_R110_OptsIndex_enum
{	AX1_P3_USE_AUTO_RESET_AT_STARTUP = 0,
	AX1_P3_FUNC_FAIL_SAFE_MODE = 1,
	AX1_P3_FFS_ENC_ERR_MODE = 2,
	AX1_P3_MODE_BM = 3,
	AX1_P3_FUNC_FAIL_SAFE_DELAY_STO = 4,
	AX1_P3_FUNC_FAIL_SAFE_DELAY_BRK = 5,
	AX1_P3_ENCODER_TYPE = 6,
	AX1_P3_ALIGNMENT_BYTE_2 = 7,
	AX1_P3_ALIGNMENT_BYTE_3 = 8,
	AX1_P3_ALIGNMENT_BYTE_4 = 9,
	AX1_P3_SCALE_REVO = 10,
	AX1_P3_SCALE_UNITS = 11,
	AX1_P3_SCALE_DIRECTION = 12,
	AX1_P3_SCALE_LENGTH = 13,
	AX1_P3_SCALE_NORMSPEEDMAX = 14,
	AX1_P3_ACCELERATION_MAX = 15,
	AX1_P3_USE_ENC_POS_MON = 16,
	AX1_P3_USE_ENC_SPEED_MON = 17,
	AX1_P3_USE_SET_POS_ALIVE_TEST = 18,
	AX1_P3_USE_SEM = 19,
	AX1_P3_ENC_MONITORING_POS_TOL = 20,
	AX1_P3_ENC_MONITORING_SPEED_TOL = 21,
	AX1_P3_POSITION_TOLERANCE = 22,
	AX1_P3_SPEED_TOLERANCE = 23,
	AX1_P3_USE_EARLY_LIMIT_MON = 24,
	AX1_P3_ALIGNMENT_BYTE_6 = 25,
	AX1_P3_ALIGNMENT_BYTE_7 = 26,
	AX1_P3_ALIGNMENT_BYTE_8 = 27,
	AX1_P3_EARLY_LIMIT_MON_TIME = 28,
	AX1_P3_DECELERATION_RAMP = 29,
	AX1_P3_DELAY_RAMP_MONITORING = 30,
	AX1_P3_SELECT_STO1_CHANNEL = 31,
	AX1_P3_ALIGNMENT_BYTE_9 = 32,
	AX1_P3_ALIGNMENT_BYTE_10 = 33,
	AX1_P3_ALIGNMENT_BYTE_11 = 34,
	AX1_P3_USE_RAMPMONITORING_SS1 = 35,
	AX1_P3_ALIGNMENT_BYTE_12 = 36,
	AX1_P3_ALIGNMENT_BYTE_13 = 37,
	AX1_P3_ALIGNMENT_BYTE_14 = 38,
	AX1_P3_RAMP_MON_TIME_SS1 = 39,
	AX1_P3_DELAY_SBC = 40,
	AX1_P3_USE_RAMPMONITORING_SS2 = 41,
	AX1_P3_ALIGNMENT_BYTE_15 = 42,
	AX1_P3_ALIGNMENT_BYTE_16 = 43,
	AX1_P3_ALIGNMENT_BYTE_17 = 44,
	AX1_P3_RAMP_MON_TIME_SS2 = 45,
	AX1_P3_ACCELERATION_LIM_POS = 46,
	AX1_P3_DECELERATION_LIM_POS = 47,
	AX1_P3_ACCELERATION_LIM_NEG = 48,
	AX1_P3_DECELERATION_LIM_NEG = 49,
	AX1_P3_DELAY_SLA = 50,
	AX1_P3_USE_SMS = 51,
	AX1_P3_ALIGNMENT_BYTE_18 = 52,
	AX1_P3_ALIGNMENT_BYTE_19 = 53,
	AX1_P3_ALIGNMENT_BYTE_20 = 54,
	AX1_P3_SPEED_LIMIT_SMS = 55,
	AX1_P3_SPEED_LIMIT_SLS1 = 56,
	AX1_P3_SPEED_LIMIT_SLS2 = 57,
	AX1_P3_SPEED_LIMIT_SLS3 = 58,
	AX1_P3_SPEED_LIMIT_SLS4 = 59,
	AX1_P3_USE_RAMPMONITORING_SLS = 60,
	AX1_P3_ALIGNMENT_BYTE_21 = 61,
	AX1_P3_ALIGNMENT_BYTE_22 = 62,
	AX1_P3_ALIGNMENT_BYTE_23 = 63,
	AX1_P3_RAMP_MON_TIME_SLS1 = 64,
	AX1_P3_RAMP_MON_TIME_SLS2 = 65,
	AX1_P3_RAMP_MON_TIME_SLS3 = 66,
	AX1_P3_RAMP_MON_TIME_SLS4 = 67,
	AX1_P3_DELAY_SDI = 68,
	AX1_P3_SLI_POSITION_WINDOW = 69,
	AX1_P3_SLI_T_OFF_DELAY = 70,
	AX1_P3_HOMING_MODE = 71,
	AX1_P3_ALIGNMENT_BYTE_24 = 72,
	AX1_P3_ALIGNMENT_BYTE_25 = 73,
	AX1_P3_ALIGNMENT_BYTE_26 = 74,
	AX1_P3_HOMING_POS = 75,
	AX1_P3_HOMING_REMANENT_SAFE_POS = 76,
	AX1_P3_HOMING_REFSWEDGE = 77,
	AX1_P3_HOMING_TRIGGER_DIR = 78,
	AX1_P3_HOMING_REF_PULSE = 79,
	AX1_P3_HOMING_REF_P_BLOCK = 80,
	AX1_P3_ALIGNMENT_BYTE_27 = 81,
	AX1_P3_ALIGNMENT_BYTE_28 = 82,
	AX1_P3_ALIGNMENT_BYTE_29 = 83,
	AX1_P3_HOMING_MAX_SPEED = 84,
	AX1_P3_HOMING_T_MON = 85,
	AX1_P3_USE_SMP = 86,
	AX1_P3_ALIGNMENT_BYTE_30 = 87,
	AX1_P3_ALIGNMENT_BYTE_31 = 88,
	AX1_P3_ALIGNMENT_BYTE_32 = 89,
	AX1_P3_POS_LIMIT_MIN_SMP = 90,
	AX1_P3_POS_LIMIT_MAX_SMP = 91,
	AX1_P3_POS_LIMIT_MIN_SLP = 92,
	AX1_P3_POS_LIMIT_MAX_SLP = 93,
	AX1_P3_DELAY_SLP = 94,
	AX2_P3_USE_AUTO_RESET_AT_STARTUP = 95,
	AX2_P3_FUNC_FAIL_SAFE_MODE = 96,
	AX2_P3_FFS_ENC_ERR_MODE = 97,
	AX2_P3_MODE_BM = 98,
	AX2_P3_FUNC_FAIL_SAFE_DELAY_STO = 99,
	AX2_P3_FUNC_FAIL_SAFE_DELAY_BRK = 100,
	AX2_P3_ENCODER_TYPE = 101,
	AX2_P3_ALIGNMENT_BYTE_2 = 102,
	AX2_P3_ALIGNMENT_BYTE_3 = 103,
	AX2_P3_ALIGNMENT_BYTE_4 = 104,
	AX2_P3_SCALE_REVO = 105,
	AX2_P3_SCALE_UNITS = 106,
	AX2_P3_SCALE_DIRECTION = 107,
	AX2_P3_SCALE_LENGTH = 108,
	AX2_P3_SCALE_NORMSPEEDMAX = 109,
	AX2_P3_ACCELERATION_MAX = 110,
	AX2_P3_USE_ENC_POS_MON = 111,
	AX2_P3_USE_ENC_SPEED_MON = 112,
	AX2_P3_USE_SET_POS_ALIVE_TEST = 113,
	AX2_P3_USE_SEM = 114,
	AX2_P3_ENC_MONITORING_POS_TOL = 115,
	AX2_P3_ENC_MONITORING_SPEED_TOL = 116,
	AX2_P3_POSITION_TOLERANCE = 117,
	AX2_P3_SPEED_TOLERANCE = 118,
	AX2_P3_USE_EARLY_LIMIT_MON = 119,
	AX2_P3_ALIGNMENT_BYTE_6 = 120,
	AX2_P3_ALIGNMENT_BYTE_7 = 121,
	AX2_P3_ALIGNMENT_BYTE_8 = 122,
	AX2_P3_EARLY_LIMIT_MON_TIME = 123,
	AX2_P3_DECELERATION_RAMP = 124,
	AX2_P3_DELAY_RAMP_MONITORING = 125,
	AX2_P3_SELECT_STO1_CHANNEL = 126,
	AX2_P3_ALIGNMENT_BYTE_9 = 127,
	AX2_P3_ALIGNMENT_BYTE_10 = 128,
	AX2_P3_ALIGNMENT_BYTE_11 = 129,
	AX2_P3_USE_RAMPMONITORING_SS1 = 130,
	AX2_P3_ALIGNMENT_BYTE_12 = 131,
	AX2_P3_ALIGNMENT_BYTE_13 = 132,
	AX2_P3_ALIGNMENT_BYTE_14 = 133,
	AX2_P3_RAMP_MON_TIME_SS1 = 134,
	AX2_P3_DELAY_SBC = 135,
	AX2_P3_USE_RAMPMONITORING_SS2 = 136,
	AX2_P3_ALIGNMENT_BYTE_15 = 137,
	AX2_P3_ALIGNMENT_BYTE_16 = 138,
	AX2_P3_ALIGNMENT_BYTE_17 = 139,
	AX2_P3_RAMP_MON_TIME_SS2 = 140,
	AX2_P3_ACCELERATION_LIM_POS = 141,
	AX2_P3_DECELERATION_LIM_POS = 142,
	AX2_P3_ACCELERATION_LIM_NEG = 143,
	AX2_P3_DECELERATION_LIM_NEG = 144,
	AX2_P3_DELAY_SLA = 145,
	AX2_P3_USE_SMS = 146,
	AX2_P3_ALIGNMENT_BYTE_18 = 147,
	AX2_P3_ALIGNMENT_BYTE_19 = 148,
	AX2_P3_ALIGNMENT_BYTE_20 = 149,
	AX2_P3_SPEED_LIMIT_SMS = 150,
	AX2_P3_SPEED_LIMIT_SLS1 = 151,
	AX2_P3_SPEED_LIMIT_SLS2 = 152,
	AX2_P3_SPEED_LIMIT_SLS3 = 153,
	AX2_P3_SPEED_LIMIT_SLS4 = 154,
	AX2_P3_USE_RAMPMONITORING_SLS = 155,
	AX2_P3_ALIGNMENT_BYTE_21 = 156,
	AX2_P3_ALIGNMENT_BYTE_22 = 157,
	AX2_P3_ALIGNMENT_BYTE_23 = 158,
	AX2_P3_RAMP_MON_TIME_SLS1 = 159,
	AX2_P3_RAMP_MON_TIME_SLS2 = 160,
	AX2_P3_RAMP_MON_TIME_SLS3 = 161,
	AX2_P3_RAMP_MON_TIME_SLS4 = 162,
	AX2_P3_DELAY_SDI = 163,
	AX2_P3_SLI_POSITION_WINDOW = 164,
	AX2_P3_SLI_T_OFF_DELAY = 165,
	AX2_P3_HOMING_MODE = 166,
	AX2_P3_ALIGNMENT_BYTE_24 = 167,
	AX2_P3_ALIGNMENT_BYTE_25 = 168,
	AX2_P3_ALIGNMENT_BYTE_26 = 169,
	AX2_P3_HOMING_POS = 170,
	AX2_P3_HOMING_REMANENT_SAFE_POS = 171,
	AX2_P3_HOMING_REFSWEDGE = 172,
	AX2_P3_HOMING_TRIGGER_DIR = 173,
	AX2_P3_HOMING_REF_PULSE = 174,
	AX2_P3_HOMING_REF_P_BLOCK = 175,
	AX2_P3_ALIGNMENT_BYTE_27 = 176,
	AX2_P3_ALIGNMENT_BYTE_28 = 177,
	AX2_P3_ALIGNMENT_BYTE_29 = 178,
	AX2_P3_HOMING_MAX_SPEED = 179,
	AX2_P3_HOMING_T_MON = 180,
	AX2_P3_USE_SMP = 181,
	AX2_P3_ALIGNMENT_BYTE_30 = 182,
	AX2_P3_ALIGNMENT_BYTE_31 = 183,
	AX2_P3_ALIGNMENT_BYTE_32 = 184,
	AX2_P3_POS_LIMIT_MIN_SMP = 185,
	AX2_P3_POS_LIMIT_MAX_SMP = 186,
	AX2_P3_POS_LIMIT_MIN_SLP = 187,
	AX2_P3_POS_LIMIT_MAX_SLP = 188,
	AX2_P3_DELAY_SLP = 189,
	AX3_P3_USE_AUTO_RESET_AT_STARTUP = 190,
	AX3_P3_FUNC_FAIL_SAFE_MODE = 191,
	AX3_P3_FFS_ENC_ERR_MODE = 192,
	AX3_P3_MODE_BM = 193,
	AX3_P3_FUNC_FAIL_SAFE_DELAY_STO = 194,
	AX3_P3_FUNC_FAIL_SAFE_DELAY_BRK = 195,
	AX3_P3_ENCODER_TYPE = 196,
	AX3_P3_ALIGNMENT_BYTE_2 = 197,
	AX3_P3_ALIGNMENT_BYTE_3 = 198,
	AX3_P3_ALIGNMENT_BYTE_4 = 199,
	AX3_P3_SCALE_REVO = 200,
	AX3_P3_SCALE_UNITS = 201,
	AX3_P3_SCALE_DIRECTION = 202,
	AX3_P3_SCALE_LENGTH = 203,
	AX3_P3_SCALE_NORMSPEEDMAX = 204,
	AX3_P3_ACCELERATION_MAX = 205,
	AX3_P3_USE_ENC_POS_MON = 206,
	AX3_P3_USE_ENC_SPEED_MON = 207,
	AX3_P3_USE_SET_POS_ALIVE_TEST = 208,
	AX3_P3_USE_SEM = 209,
	AX3_P3_ENC_MONITORING_POS_TOL = 210,
	AX3_P3_ENC_MONITORING_SPEED_TOL = 211,
	AX3_P3_POSITION_TOLERANCE = 212,
	AX3_P3_SPEED_TOLERANCE = 213,
	AX3_P3_USE_EARLY_LIMIT_MON = 214,
	AX3_P3_ALIGNMENT_BYTE_6 = 215,
	AX3_P3_ALIGNMENT_BYTE_7 = 216,
	AX3_P3_ALIGNMENT_BYTE_8 = 217,
	AX3_P3_EARLY_LIMIT_MON_TIME = 218,
	AX3_P3_DECELERATION_RAMP = 219,
	AX3_P3_DELAY_RAMP_MONITORING = 220,
	AX3_P3_SELECT_STO1_CHANNEL = 221,
	AX3_P3_ALIGNMENT_BYTE_9 = 222,
	AX3_P3_ALIGNMENT_BYTE_10 = 223,
	AX3_P3_ALIGNMENT_BYTE_11 = 224,
	AX3_P3_USE_RAMPMONITORING_SS1 = 225,
	AX3_P3_ALIGNMENT_BYTE_12 = 226,
	AX3_P3_ALIGNMENT_BYTE_13 = 227,
	AX3_P3_ALIGNMENT_BYTE_14 = 228,
	AX3_P3_RAMP_MON_TIME_SS1 = 229,
	AX3_P3_DELAY_SBC = 230,
	AX3_P3_USE_RAMPMONITORING_SS2 = 231,
	AX3_P3_ALIGNMENT_BYTE_15 = 232,
	AX3_P3_ALIGNMENT_BYTE_16 = 233,
	AX3_P3_ALIGNMENT_BYTE_17 = 234,
	AX3_P3_RAMP_MON_TIME_SS2 = 235,
	AX3_P3_ACCELERATION_LIM_POS = 236,
	AX3_P3_DECELERATION_LIM_POS = 237,
	AX3_P3_ACCELERATION_LIM_NEG = 238,
	AX3_P3_DECELERATION_LIM_NEG = 239,
	AX3_P3_DELAY_SLA = 240,
	AX3_P3_USE_SMS = 241,
	AX3_P3_ALIGNMENT_BYTE_18 = 242,
	AX3_P3_ALIGNMENT_BYTE_19 = 243,
	AX3_P3_ALIGNMENT_BYTE_20 = 244,
	AX3_P3_SPEED_LIMIT_SMS = 245,
	AX3_P3_SPEED_LIMIT_SLS1 = 246,
	AX3_P3_SPEED_LIMIT_SLS2 = 247,
	AX3_P3_SPEED_LIMIT_SLS3 = 248,
	AX3_P3_SPEED_LIMIT_SLS4 = 249,
	AX3_P3_USE_RAMPMONITORING_SLS = 250,
	AX3_P3_ALIGNMENT_BYTE_21 = 251,
	AX3_P3_ALIGNMENT_BYTE_22 = 252,
	AX3_P3_ALIGNMENT_BYTE_23 = 253,
	AX3_P3_RAMP_MON_TIME_SLS1 = 254,
	AX3_P3_RAMP_MON_TIME_SLS2 = 255,
	AX3_P3_RAMP_MON_TIME_SLS3 = 256,
	AX3_P3_RAMP_MON_TIME_SLS4 = 257,
	AX3_P3_DELAY_SDI = 258,
	AX3_P3_SLI_POSITION_WINDOW = 259,
	AX3_P3_SLI_T_OFF_DELAY = 260,
	AX3_P3_HOMING_MODE = 261,
	AX3_P3_ALIGNMENT_BYTE_24 = 262,
	AX3_P3_ALIGNMENT_BYTE_25 = 263,
	AX3_P3_ALIGNMENT_BYTE_26 = 264,
	AX3_P3_HOMING_POS = 265,
	AX3_P3_HOMING_REMANENT_SAFE_POS = 266,
	AX3_P3_HOMING_REFSWEDGE = 267,
	AX3_P3_HOMING_TRIGGER_DIR = 268,
	AX3_P3_HOMING_REF_PULSE = 269,
	AX3_P3_HOMING_REF_P_BLOCK = 270,
	AX3_P3_ALIGNMENT_BYTE_27 = 271,
	AX3_P3_ALIGNMENT_BYTE_28 = 272,
	AX3_P3_ALIGNMENT_BYTE_29 = 273,
	AX3_P3_HOMING_MAX_SPEED = 274,
	AX3_P3_HOMING_T_MON = 275,
	AX3_P3_USE_SMP = 276,
	AX3_P3_ALIGNMENT_BYTE_30 = 277,
	AX3_P3_ALIGNMENT_BYTE_31 = 278,
	AX3_P3_ALIGNMENT_BYTE_32 = 279,
	AX3_P3_POS_LIMIT_MIN_SMP = 280,
	AX3_P3_POS_LIMIT_MAX_SMP = 281,
	AX3_P3_POS_LIMIT_MIN_SLP = 282,
	AX3_P3_POS_LIMIT_MAX_SLP = 283,
	AX3_P3_DELAY_SLP = 284,
	P3_OFFSET_EXTENSION_V2 = 285,
	AX1_P3_V2_SBT_THRESHOLD = 285,
	AX1_P3_V2_SBT_EXTERNAL_LOAD = 286,
	AX1_P3_V2_SBT_POSITION_TOLERANCE = 287,
	AX1_P3_V2_SBT_DURATION = 288,
	AX1_P3_V2_SBT_INTERVAL = 289,
	AX1_P3_V2_DELAY_SBT = 290,
	AX1_P3_V2_POLEPAIRS_MOTOR = 291,
	AX1_P3_V2_DIRECTION_MOTOR = 292,
	AX1_P3_V2_STATOR_RESIST_MOTOR = 293,
	AX1_P3_V2_STATOR_INDUCT_MOTOR = 294,
	AX1_P3_V2_TORQUE_CONSTANT_MOTOR = 295,
	AX1_P3_V2_RATED_SPEED_MOTOR = 296,
	AX1_P3_V2_CURRENT_STALL_MOTOR = 297,
	AX1_P3_V2_CURRENT_RATED_MOTOR = 298,
	AX1_P3_V2_CURRENT_PEAK_MOTOR = 299,
	AX1_P3_V2_TORQUE_STALL_MOTOR = 300,
	AX1_P3_V2_TORQUE_PEAK_MOTOR = 301,
	AX1_P3_V2_MOM_OF_INERT_MOTOR = 302,
	AX1_P3_V2_EX_MOM_OF_INERT_MOTOR = 303,
	AX1_P3_V2_SPD_TOL_OBS_MODEL_SSO = 304,
	AX1_P3_V2_SPD_TOL_SAFE_SPEED_SSO = 305,
	AX1_P3_V2_INV_SWITCHING_FREQ_SSO = 306,
	AX1_P3_V2_INV_ADJ_AMP_FAC_SSO = 307,
	AX1_P3_V2_INV_ADJ_EXP_SSO = 308,
	AX1_P3_V2_EXT_LOAD_ENABLED_SSO = 309,
	AX1_P3_V2_TORQUE_LIMIT_SLT = 310,
	AX1_P3_V2_DELAY_SLT = 311,
	AX1_P3_V2_DELAY_FFS_BM = 312,
	AX1_P3_V2_CONFIGURED_SF_BM = 313,
	AX2_P3_V2_SBT_THRESHOLD = 314,
	AX2_P3_V2_SBT_EXTERNAL_LOAD = 315,
	AX2_P3_V2_SBT_POSITION_TOLERANCE = 316,
	AX2_P3_V2_SBT_DURATION = 317,
	AX2_P3_V2_SBT_INTERVAL = 318,
	AX2_P3_V2_DELAY_SBT = 319,
	AX2_P3_V2_POLEPAIRS_MOTOR = 320,
	AX2_P3_V2_DIRECTION_MOTOR = 321,
	AX2_P3_V2_STATOR_RESIST_MOTOR = 322,
	AX2_P3_V2_STATOR_INDUCT_MOTOR = 323,
	AX2_P3_V2_TORQUE_CONSTANT_MOTOR = 324,
	AX2_P3_V2_RATED_SPEED_MOTOR = 325,
	AX2_P3_V2_CURRENT_STALL_MOTOR = 326,
	AX2_P3_V2_CURRENT_RATED_MOTOR = 327,
	AX2_P3_V2_CURRENT_PEAK_MOTOR = 328,
	AX2_P3_V2_TORQUE_STALL_MOTOR = 329,
	AX2_P3_V2_TORQUE_PEAK_MOTOR = 330,
	AX2_P3_V2_MOM_OF_INERT_MOTOR = 331,
	AX2_P3_V2_EX_MOM_OF_INERT_MOTOR = 332,
	AX2_P3_V2_SPD_TOL_OBS_MODEL_SSO = 333,
	AX2_P3_V2_SPD_TOL_SAFE_SPEED_SSO = 334,
	AX2_P3_V2_INV_SWITCHING_FREQ_SSO = 335,
	AX2_P3_V2_INV_ADJ_AMP_FAC_SSO = 336,
	AX2_P3_V2_INV_ADJ_EXP_SSO = 337,
	AX2_P3_V2_EXT_LOAD_ENABLED_SSO = 338,
	AX2_P3_V2_TORQUE_LIMIT_SLT = 339,
	AX2_P3_V2_DELAY_SLT = 340,
	AX2_P3_V2_DELAY_FFS_BM = 341,
	AX2_P3_V2_CONFIGURED_SF_BM = 342,
	AX3_P3_V2_SBT_THRESHOLD = 343,
	AX3_P3_V2_SBT_EXTERNAL_LOAD = 344,
	AX3_P3_V2_SBT_POSITION_TOLERANCE = 345,
	AX3_P3_V2_SBT_DURATION = 346,
	AX3_P3_V2_SBT_INTERVAL = 347,
	AX3_P3_V2_DELAY_SBT = 348,
	AX3_P3_V2_POLEPAIRS_MOTOR = 349,
	AX3_P3_V2_DIRECTION_MOTOR = 350,
	AX3_P3_V2_STATOR_RESIST_MOTOR = 351,
	AX3_P3_V2_STATOR_INDUCT_MOTOR = 352,
	AX3_P3_V2_TORQUE_CONSTANT_MOTOR = 353,
	AX3_P3_V2_RATED_SPEED_MOTOR = 354,
	AX3_P3_V2_CURRENT_STALL_MOTOR = 355,
	AX3_P3_V2_CURRENT_RATED_MOTOR = 356,
	AX3_P3_V2_CURRENT_PEAK_MOTOR = 357,
	AX3_P3_V2_TORQUE_STALL_MOTOR = 358,
	AX3_P3_V2_TORQUE_PEAK_MOTOR = 359,
	AX3_P3_V2_MOM_OF_INERT_MOTOR = 360,
	AX3_P3_V2_EX_MOM_OF_INERT_MOTOR = 361,
	AX3_P3_V2_SPD_TOL_OBS_MODEL_SSO = 362,
	AX3_P3_V2_SPD_TOL_SAFE_SPEED_SSO = 363,
	AX3_P3_V2_INV_SWITCHING_FREQ_SSO = 364,
	AX3_P3_V2_INV_ADJ_AMP_FAC_SSO = 365,
	AX3_P3_V2_INV_ADJ_EXP_SSO = 366,
	AX3_P3_V2_EXT_LOAD_ENABLED_SSO = 367,
	AX3_P3_V2_TORQUE_LIMIT_SLT = 368,
	AX3_P3_V2_DELAY_SLT = 369,
	AX3_P3_V2_DELAY_FFS_BM = 370,
	AX3_P3_V2_CONFIGURED_SF_BM = 371
} SMC_Acp_P3_R110_OptsIndex_enum;

typedef struct SMC_SinCos_R19_Opts_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	unsigned char EncoderType;
	unsigned char FuncFailSafeEncErrMode;
	unsigned char AlignmentByte1;
	unsigned char AlignmentByte2;
	unsigned long NrOfSignalperiods;
	signed long ScaleRevo;
	signed long ScaleUnits;
	signed long ScaleDirection;
	signed long ScaleLength;
	signed long ScaleNormSpeedMax;
	signed long AccelerationMax;
	signed long HomingPos;
	signed long HomingMaxSpeed;
	signed long HomingTMon;
	unsigned char HomingMode;
	unsigned char HomingRefSwEdge;
	unsigned char HomingTriggerDir;
	unsigned char AlignmentByte3;
	signed long DecelerationRamp;
	unsigned char UseSMS;
	unsigned char UseAutoResetAtStartup;
	unsigned char SelectSTO1channel;
	unsigned char UseRampMonitoringSS1;
	unsigned char UseRampMonitoringSS2;
	unsigned char UseRampMonitoringSLS;
	unsigned char UseEarlyLimitMon;
	unsigned char UseSMP;
	unsigned char UseEncPosMon;
	unsigned char UseEncSpeedMon;
	unsigned char UseSetPosAliveTest;
	unsigned char FuncFailSafeMode;
	signed long FuncFailSafeDelaySTO;
	signed long FuncFailSafeDelayBrk;
	signed long AccelerationLimPos;
	signed long DecelerationLimPos;
	signed long AccelerationLimNeg;
	signed long DecelerationLimNeg;
	signed long SpeedLimitSMS;
	signed long SpeedLimitSLS1;
	signed long SpeedLimitSLS2;
	signed long SpeedLimitSLS3;
	signed long SpeedLimitSLS4;
	signed long PosLimitMinSMP;
	signed long PosLimitMaxSMP;
	signed long PosLimitMinSLP;
	signed long PosLimitMaxSLP;
	signed long SpeedTolerance;
	signed long PositionTolerance;
	signed long SliPositionWindow;
	signed long SliToffDelay;
	signed long RampMonTimeSS1;
	signed long RampMonTimeSS2;
	signed long RampMonTimeSLS1;
	signed long RampMonTimeSLS2;
	signed long RampMonTimeSLS3;
	signed long RampMonTimeSLS4;
	signed long DelayRampMonitoring;
	signed long DelaySDI;
	signed long DelaySBC;
	signed long DelaySLP;
	signed long DelaySBT;
	signed long DelaySLA;
	signed long EarlyLimitMonTime;
	signed long EncMonitoringPosTol;
	signed long EncMonitoringSpeedTol;
	signed long SbtInterval;
	signed long SbtThreshold;
	signed long SbtExternalLoad;
	signed long SbtDuration;
	signed long SbtPositionTolerance;
} SMC_SinCos_R19_Opts_typ;

typedef struct SMC_SinCos_V02_Opts_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	unsigned char EncoderType;
	unsigned char FuncFailSafeEncErrMode;
	unsigned char ModeBM;
	unsigned char UseSEM;
	unsigned long NrOfSignalperiods;
	signed long ScaleRevo;
	signed long ScaleUnits;
	signed long ScaleDirection;
	signed long ScaleLength;
	signed long ScaleNormSpeedMax;
	signed long AccelerationMax;
	signed long HomingPos;
	signed long HomingMaxSpeed;
	signed long HomingTMon;
	unsigned char HomingMode;
	unsigned char HomingRefSwEdge;
	unsigned char HomingTriggerDir;
	unsigned char AlignmentByte3;
	signed long DecelerationRamp;
	unsigned char UseSMS;
	unsigned char UseAutoResetAtStartup;
	unsigned char SelectSTO1channel;
	unsigned char UseRampMonitoringSS1;
	unsigned char UseRampMonitoringSS2;
	unsigned char UseRampMonitoringSLS;
	unsigned char UseEarlyLimitMon;
	unsigned char UseSMP;
	unsigned char UseEncPosMon;
	unsigned char UseEncSpeedMon;
	unsigned char UseSetPosAliveTest;
	unsigned char FuncFailSafeMode;
	signed long FuncFailSafeDelaySTO;
	signed long FuncFailSafeDelayBrk;
	signed long AccelerationLimPos;
	signed long DecelerationLimPos;
	signed long AccelerationLimNeg;
	signed long DecelerationLimNeg;
	signed long SpeedLimitSMS;
	signed long SpeedLimitSLS1;
	signed long SpeedLimitSLS2;
	signed long SpeedLimitSLS3;
	signed long SpeedLimitSLS4;
	signed long PosLimitMinSMP;
	signed long PosLimitMaxSMP;
	signed long PosLimitMinSLP;
	signed long PosLimitMaxSLP;
	signed long SpeedTolerance;
	signed long PositionTolerance;
	signed long SliPositionWindow;
	signed long SliToffDelay;
	signed long RampMonTimeSS1;
	signed long RampMonTimeSS2;
	signed long RampMonTimeSLS1;
	signed long RampMonTimeSLS2;
	signed long RampMonTimeSLS3;
	signed long RampMonTimeSLS4;
	signed long DelayRampMonitoring;
	signed long DelaySDI;
	signed long DelaySBC;
	signed long DelaySLP;
	signed long DelaySBT;
	signed long DelaySLA;
	signed long EarlyLimitMonTime;
	signed long EncMonitoringPosTol;
	signed long EncMonitoringSpeedTol;
	signed long SbtInterval;
	signed long SbtThreshold;
	signed long SbtExternalLoad;
	signed long SbtDuration;
	signed long SbtPositionTolerance;
	signed long DelayFFSBM;
	unsigned long ConfiguredSFBM;
} SMC_SinCos_V02_Opts_typ;

typedef struct SMC_EnDat22_R19_Opts_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	unsigned char EncoderType;
	unsigned char FuncFailSafeEncErrMode;
	unsigned char AlignmentByte1;
	unsigned char AlignmentByte2;
	signed long ScaleRevo;
	signed long ScaleUnits;
	signed long ScaleDirection;
	signed long ScaleLength;
	signed long ScaleNormSpeedMax;
	signed long AccelerationMax;
	signed long HomingPos;
	signed long HomingMaxSpeed;
	signed long HomingTMon;
	unsigned char HomingMode;
	unsigned char HomingRefSwEdge;
	unsigned char HomingTriggerDir;
	unsigned char HomingRefPulse;
	unsigned char HomingRemanentSafePosition;
	unsigned char HomingRefPBlock;
	unsigned char AlignmentByte3;
	unsigned char AlignmentByte4;
	signed long DecelerationRamp;
	unsigned char UseSMS;
	unsigned char UseAutoResetAtStartup;
	unsigned char SelectSTO1channel;
	unsigned char UseRampMonitoringSS1;
	unsigned char UseRampMonitoringSS2;
	unsigned char UseRampMonitoringSLS;
	unsigned char UseEarlyLimitMon;
	unsigned char UseSMP;
	unsigned char UseEncPosMon;
	unsigned char UseEncSpeedMon;
	unsigned char UseSetPosAliveTest;
	unsigned char FuncFailSafeMode;
	signed long FuncFailSafeDelaySTO;
	signed long FuncFailSafeDelayBrk;
	signed long AccelerationLimPos;
	signed long DecelerationLimPos;
	signed long AccelerationLimNeg;
	signed long DecelerationLimNeg;
	signed long SpeedLimitSMS;
	signed long SpeedLimitSLS1;
	signed long SpeedLimitSLS2;
	signed long SpeedLimitSLS3;
	signed long SpeedLimitSLS4;
	signed long PosLimitMinSMP;
	signed long PosLimitMaxSMP;
	signed long PosLimitMinSLP;
	signed long PosLimitMaxSLP;
	signed long SpeedTolerance;
	signed long PositionTolerance;
	signed long SliPositionWindow;
	signed long SliToffDelay;
	signed long RampMonTimeSS1;
	signed long RampMonTimeSS2;
	signed long RampMonTimeSLS1;
	signed long RampMonTimeSLS2;
	signed long RampMonTimeSLS3;
	signed long RampMonTimeSLS4;
	signed long DelayRampMonitoring;
	signed long DelaySDI;
	signed long DelaySBC;
	signed long DelaySLP;
	signed long DelaySLA;
	signed long EarlyLimitMonTime;
	signed long EncMonitoringPosTol;
	signed long EncMonitoringSpeedTol;
} SMC_EnDat22_R19_Opts_typ;

typedef struct SMC_EnDat22_V02_Opts_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	unsigned char EncoderType;
	unsigned char FuncFailSafeEncErrMode;
	unsigned char ModeBM;
	unsigned char UseSEM;
	signed long ScaleRevo;
	signed long ScaleUnits;
	signed long ScaleDirection;
	signed long ScaleLength;
	signed long ScaleNormSpeedMax;
	signed long AccelerationMax;
	signed long HomingPos;
	signed long HomingMaxSpeed;
	signed long HomingTMon;
	unsigned char HomingMode;
	unsigned char HomingRefSwEdge;
	unsigned char HomingTriggerDir;
	unsigned char HomingRefPulse;
	unsigned char HomingRemanentSafePosition;
	unsigned char HomingRefPBlock;
	unsigned char AlignmentByte3;
	unsigned char AlignmentByte4;
	signed long DecelerationRamp;
	unsigned char UseSMS;
	unsigned char UseAutoResetAtStartup;
	unsigned char SelectSTO1channel;
	unsigned char UseRampMonitoringSS1;
	unsigned char UseRampMonitoringSS2;
	unsigned char UseRampMonitoringSLS;
	unsigned char UseEarlyLimitMon;
	unsigned char UseSMP;
	unsigned char UseEncPosMon;
	unsigned char UseEncSpeedMon;
	unsigned char UseSetPosAliveTest;
	unsigned char FuncFailSafeMode;
	signed long FuncFailSafeDelaySTO;
	signed long FuncFailSafeDelayBrk;
	signed long AccelerationLimPos;
	signed long DecelerationLimPos;
	signed long AccelerationLimNeg;
	signed long DecelerationLimNeg;
	signed long SpeedLimitSMS;
	signed long SpeedLimitSLS1;
	signed long SpeedLimitSLS2;
	signed long SpeedLimitSLS3;
	signed long SpeedLimitSLS4;
	signed long PosLimitMinSMP;
	signed long PosLimitMaxSMP;
	signed long PosLimitMinSLP;
	signed long PosLimitMaxSLP;
	signed long SpeedTolerance;
	signed long PositionTolerance;
	signed long SliPositionWindow;
	signed long SliToffDelay;
	signed long RampMonTimeSS1;
	signed long RampMonTimeSS2;
	signed long RampMonTimeSLS1;
	signed long RampMonTimeSLS2;
	signed long RampMonTimeSLS3;
	signed long RampMonTimeSLS4;
	signed long DelayRampMonitoring;
	signed long DelaySDI;
	signed long DelaySBC;
	signed long DelaySLP;
	signed long DelaySLA;
	signed long EarlyLimitMonTime;
	signed long EncMonitoringPosTol;
	signed long EncMonitoringSpeedTol;
	signed long DelayFFSBM;
	unsigned long ConfiguredSFBM;
} SMC_EnDat22_V02_Opts_typ;

typedef struct SMC_Acp_P3_R110_Opts_Axis_typ
{	unsigned char UseAutoResetAtStartup;
	unsigned char FuncFailSafeMode;
	unsigned char FuncFailSafeEncErrMode;
	unsigned char ModeBM;
	signed long FuncFailSafeDelaySTO;
	signed long FuncFailSafeDelayBrk;
	unsigned char EncoderType;
	unsigned char AlignmentByte2;
	unsigned char AlignmentByte3;
	unsigned char AlignmentByte4;
	signed long ScaleRevo;
	signed long ScaleUnits;
	signed long ScaleDirection;
	signed long ScaleLength;
	signed long ScaleNormSpeedMax;
	signed long AccelerationMax;
	unsigned char UseEncPosMon;
	unsigned char UseEncSpeedMon;
	unsigned char UseSetPosAliveTest;
	unsigned char UseSEM;
	signed long EncMonitoringPosTol;
	signed long EncMonitoringSpeedTol;
	signed long PositionTolerance;
	signed long SpeedTolerance;
	unsigned char UseEarlyLimitMon;
	unsigned char AlignmentByte6;
	unsigned char AlignmentByte7;
	unsigned char AlignmentByte8;
	signed long EarlyLimitMonTime;
	signed long DecelerationRamp;
	signed long DelayRampMonitoring;
	unsigned char SelectSTO1channel;
	unsigned char AlignmentByte9;
	unsigned char AlignmentByte10;
	unsigned char AlignmentByte11;
	unsigned char UseRampMonitoringSS1;
	unsigned char AlignmentByte12;
	unsigned char AlignmentByte13;
	unsigned char AlignmentByte14;
	signed long RampMonTimeSS1;
	signed long DelaySBC;
	unsigned char UseRampMonitoringSS2;
	unsigned char AlignmentByte15;
	unsigned char AlignmentByte16;
	unsigned char AlignmentByte17;
	signed long RampMonTimeSS2;
	signed long AccelerationLimPos;
	signed long DecelerationLimPos;
	signed long AccelerationLimNeg;
	signed long DecelerationLimNeg;
	signed long DelaySLA;
	unsigned char UseSMS;
	unsigned char AlignmentByte18;
	unsigned char AlignmentByte19;
	unsigned char AlignmentByte20;
	signed long SpeedLimitSMS;
	signed long SpeedLimitSLS1;
	signed long SpeedLimitSLS2;
	signed long SpeedLimitSLS3;
	signed long SpeedLimitSLS4;
	unsigned char UseRampMonitoringSLS;
	unsigned char AlignmentByte21;
	unsigned char AlignmentByte22;
	unsigned char AlignmentByte23;
	signed long RampMonTimeSLS1;
	signed long RampMonTimeSLS2;
	signed long RampMonTimeSLS3;
	signed long RampMonTimeSLS4;
	signed long DelaySDI;
	signed long SliPositionWindow;
	signed long SliToffDelay;
	unsigned char HomingMode;
	unsigned char AlignmentByte24;
	unsigned char AlignmentByte25;
	unsigned char AlignmentByte26;
	signed long HomingPos;
	unsigned char HomingRemanentSafePos;
	unsigned char HomingRefSwEdge;
	unsigned char HomingTriggerDir;
	unsigned char HomingRefPulse;
	unsigned char HomingRefPBlock;
	unsigned char AlignmentByte27;
	unsigned char AlignmentByte28;
	unsigned char AlignmentByte29;
	signed long HomingMaxSpeed;
	signed long HomingTMon;
	unsigned char UseSMP;
	unsigned char AlignmentByte30;
	unsigned char AlignmentByte31;
	unsigned char AlignmentByte32;
	signed long PosLimitMinSMP;
	signed long PosLimitMaxSMP;
	signed long PosLimitMinSLP;
	signed long PosLimitMaxSLP;
	signed long DelaySLP;
} SMC_Acp_P3_R110_Opts_Axis_typ;

typedef struct SMC_Acp_P3_R110_OptsV2_Axis_typ
{	signed long SbtThreshold;
	signed long SbtExternalLoad;
	signed long SbtPositionTolerance;
	signed long SbtDuration;
	signed long SbtInterval;
	signed long DelaySBT;
	signed long PolePairsMotor;
	signed long DirectionMotor;
	signed long StatorResistanceMotor;
	signed long StatorInductanceMotor;
	signed long TorqueConstantMotor;
	signed long RatedSpeedMotor;
	signed long CurrentStallMotor;
	signed long CurrentRatedMotor;
	signed long CurrentPeakMotor;
	signed long TorqueStallMotor;
	signed long TorquePeakMotor;
	signed long MomentOfInertiaMotor;
	signed long ExternalMomentofInertiaMotor;
	signed long SpeedTolObservModelSSO;
	signed long SpeedTolSafeSpeedSSO;
	signed long InverterSwitchingFreqSSO;
	signed long InverterAdjAmplFactorSSO;
	signed long InverterAdjExponentSSO;
	signed long ExternalLoadEnabledSSO;
	signed long TorqueLimitSLT;
	signed long DelaySLT;
	signed long DelayFFSBM;
	unsigned long ConfiguredSFBM;
} SMC_Acp_P3_R110_OptsV2_Axis_typ;

typedef struct SMC_Acp_P3_3Ax_R110_Opts_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	struct SMC_Acp_P3_R110_Opts_Axis_typ par[3];
} SMC_Acp_P3_3Ax_R110_Opts_typ;

typedef struct SMC_Acp_P3_2Ax_R110_Opts_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	struct SMC_Acp_P3_R110_Opts_Axis_typ par[2];
} SMC_Acp_P3_2Ax_R110_Opts_typ;

typedef struct SMC_Acp_P3_1Ax_R110_Opts_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	struct SMC_Acp_P3_R110_Opts_Axis_typ par[1];
} SMC_Acp_P3_1Ax_R110_Opts_typ;

typedef struct SMC_Acp_P3_3Ax_R110_OptsV2_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	struct SMC_Acp_P3_R110_Opts_Axis_typ par[3];
	struct SMC_Acp_P3_R110_OptsV2_Axis_typ parV2[3];
} SMC_Acp_P3_3Ax_R110_OptsV2_typ;

typedef struct SMC_Acp_P3_2Ax_R110_OptsV2_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	struct SMC_Acp_P3_R110_Opts_Axis_typ par[2];
	struct SMC_Acp_P3_R110_OptsV2_Axis_typ parV2[2];
} SMC_Acp_P3_2Ax_R110_OptsV2_typ;

typedef struct SMC_Acp_P3_1Ax_R110_OptsV2_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	struct SMC_Acp_P3_R110_Opts_Axis_typ par[1];
	struct SMC_Acp_P3_R110_OptsV2_Axis_typ parV2[1];
} SMC_Acp_P3_1Ax_R110_OptsV2_typ;

typedef struct SafeMC_ReadSafeInData
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	struct ACP10SAFEINDAT_typ SafeInData;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} SafeMC_ReadSafeInData_typ;

typedef struct SafeMC_ReadSafeInData2
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	struct ACP10SAFEINDAT2_typ SafeInData;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} SafeMC_ReadSafeInData2_typ;

typedef struct SafeMC_ReadSafeInData3
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	struct ACP10SAFEINDAT3_typ SafeInData;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} SafeMC_ReadSafeInData3_typ;

typedef struct SafeMC_ReadSafeOutData
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	struct ACP10SAFEOUTDAT_typ SafeOutData;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} SafeMC_ReadSafeOutData_typ;

typedef struct SafeMC_ReadSafeOutData2
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	struct ACP10SAFEOUTDAT2_typ SafeOutData;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} SafeMC_ReadSafeOutData2_typ;

typedef struct SafeMC_ReadSafeOutData3
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	struct ACP10SAFEOUTDAT3_typ SafeOutData;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} SafeMC_ReadSafeOutData3_typ;



/* Prototyping of functions and function blocks */
void SafeMC_ReadSafeInData(struct SafeMC_ReadSafeInData* inst);
void SafeMC_ReadSafeInData2(struct SafeMC_ReadSafeInData2* inst);
void SafeMC_ReadSafeInData3(struct SafeMC_ReadSafeInData3* inst);
void SafeMC_ReadSafeOutData(struct SafeMC_ReadSafeOutData* inst);
void SafeMC_ReadSafeOutData2(struct SafeMC_ReadSafeOutData2* inst);
void SafeMC_ReadSafeOutData3(struct SafeMC_ReadSafeOutData3* inst);
unsigned short SafeMC_action(unsigned long nc_object, unsigned long action, void *par_ptr, unsigned long par_size);


#ifdef __cplusplus
};
#endif
#endif /* _SAFEMC_ */

