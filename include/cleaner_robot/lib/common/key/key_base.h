/******************************************************************************

  Copyright (C), 2017-2028, HUIZHOU BLUEWAY ELECTRONICS Co., Ltd.

 ******************************************************************************
  File Name     : key_base.h
  Version       : Initial Draft
  Author        : Leon
  Created       : 2018/2/11
  Last Modified :
  Description   : key basic data structure header file
  Function List :
  History       :
  1.Date        : 2018年2月11日
    Author      : Leon
    Modification: Created file
******************************************************************************/
#ifndef __KEY_BASE_H__
#define __KEY_BASE_H__

/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */
/*****************************************************************************/

/******************************************************************************
 * include header files list
 ******************************************************************************/
#include <stdint.h>

/******************************************************************************
 * external variables
 ******************************************************************************/

/******************************************************************************
 * external function prototypes
 ******************************************************************************/

/******************************************************************************
 * project-wide global variables
 ******************************************************************************/

/******************************************************************************
 * macros
 ******************************************************************************/

/******************************************************************************
 * constants
 ******************************************************************************/

/******************************************************************************
 * enum
 ******************************************************************************/
typedef enum KEY_STATUS
{
	KEY_RELEASED,
	KEY_PRESSED,
	KEY_STATUS_INVALID,
	KEY_STATUS_SUM,
}KEY_STATUS_ENUM;

/******************************************************************************
 * struct
 ******************************************************************************/
//长按数据结构
typedef struct LONG_PRESS
{
	bool enable_clocker;
	uint32_t valid_time;
	uint32_t keep_time;
}LONG_PRESS_STRU;

//按键数据类型
typedef struct KEY
{
	KEY_STATUS_ENUM status;            //按键当前状态
	bool single_click;                 //单击短按标志
	bool double_click;                 //双击短按标志
	bool long_click;                   //单击长按标志
	LONG_PRESS_STRU hold;              //状态保持数据
	uint8_t click_num;                 //连续短按几次
	uint64_t press_tick;               //按键按下的时刻
	uint64_t release_tick;             //按键释放的时刻
	uint64_t press_long;               //按键按下的保持的时间长度
	uint64_t release_long;             //按键释放的保持的时间长度
}KEY_STRU;

/******************************************************************************
 * class prototypes
 ******************************************************************************/

/******************************************************************************
 * internal function prototypes
 ******************************************************************************/



/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */
/*****************************************************************************/

#endif /* __KEY_BASE_H__ */
