/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */
#ifndef __IMGSENSOR_PLATFORM_H__
#define __IMGSENSOR_PLATFORM_H__


enum IMGSENSOR_HW_ID {
	IMGSENSOR_HW_ID_MCLK,
	IMGSENSOR_HW_ID_REGULATOR,
	IMGSENSOR_HW_ID_GPIO,
/* N17 code for HQ-293742 by miaozhongshu at 2023/05/08 start */
	IMGSENSOR_HW_ID_SMARTLDO,
/* N17 code for HQ-293742 by miaozhongshu at 2023/05/08 end */
	IMGSENSOR_HW_ID_MAX_NUM,
	IMGSENSOR_HW_ID_NONE = -1
};
#endif
