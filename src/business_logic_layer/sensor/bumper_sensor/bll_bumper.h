/******************************************************************************

  版权所有 (C), 2017-2028 惠州市蓝微电子有限公司

 ******************************************************************************
  文件名称: bll_bumper.h
  版本编号: 初稿
  作     者: Leon
  生成日期: 2017年12月21日
  最近修改:
  功能描述: bll_bumper.cpp 的头文件
  函数列表:
  修改历史:
  1.日     期: 2017年12月21日
    作     者: Leon
    修改内容: 创建文件
******************************************************************************/
#ifndef __BLL_BUMPER_H__
#define __BLL_BUMPER_H__

/******************************************************************************
 * 包含头文件
 ******************************************************************************/
#include <pthread.h>
#include "base_type.h"

/******************************************************************************
 * 外部变量声明
 ******************************************************************************/

/******************************************************************************
 * 外部函数声明
 ******************************************************************************/

/******************************************************************************
 * 全局变量
 ******************************************************************************/

/******************************************************************************
 * 宏定义
 ******************************************************************************/

/******************************************************************************
 * 常量声明
 ******************************************************************************/

/******************************************************************************
 * 枚举类型
 ******************************************************************************/

/******************************************************************************
 * 结构体类型
 ******************************************************************************/

/******************************************************************************
 * 类声明
 ******************************************************************************/
class bll_bumper
{
protected:
	bll_bumper();
	~bll_bumper();
	
public:
	static bll_bumper* get_instance(void);
	static void release_instance(void);
	void upate_bumper_state(uint8_t id, uint8_t value);

	void monitor_angle_left_bumper_deal(void);
	void monitor_angle_right_bumper_deal(void);
	void bumper_sensor_respond_deal(void);
private:
	bll_bumper(const bll_bumper&){};
	bll_bumper& operator=(const bll_bumper&){};

	static constexpr double collide_adjusted_angle_ = 30.0;        //碰撞调节角度
	
	static bll_bumper* p_instance_;
	static pthread_mutex_t mutex_;
};


/******************************************************************************
 * 内部函数声明
 ******************************************************************************/


/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */
/*****************************************************************************/

/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */
/*****************************************************************************/

#endif /* __BLL_BUMPER_H__ */