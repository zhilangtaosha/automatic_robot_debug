/******************************************************************************

  版权所有 (C), 2017-2028 惠州市蓝微电子有限公司

 ******************************************************************************
  文件名称: bll_wall_following.cpp
  版本编号: 初稿
  作     者: Leon
  生成日期: 2017年12月22日
  最近修改:
  功能描述   : 沿墙传感器类定义
  函数列表:
  修改历史:
  1.日     期: 2017年12月22日
    作     者: Leon
    修改内容: 创建文件
******************************************************************************/

/******************************************************************************
 * 包含头文件
 ******************************************************************************/
#include "bll_wall_following.h"

#include "cfg_if_mobile_robot.h"
#include "debug_function.h"

/******************************************************************************
 * 外部变量定义
 ******************************************************************************/

/******************************************************************************
 * 外部函数定义
 ******************************************************************************/

/******************************************************************************
 * 全局变量
 ******************************************************************************/

/******************************************************************************
 * 宏定义
 ******************************************************************************/

/******************************************************************************
 * 常量定义
 ******************************************************************************/

/******************************************************************************
 * 枚举类型
 ******************************************************************************/

/******************************************************************************
 * 结构体类型
 ******************************************************************************/

/******************************************************************************
 * 类定义
 ******************************************************************************/
pthread_mutex_t bll_wall_following::mutex_;
bll_wall_following* bll_wall_following::p_instance_ = nullptr;

/*****************************************************************************
 函 数 名: bll_wall_following.bll_wall_following
 功能描述  : 构造函数
 输入参数  : 无
 输出参数: 无
 返 回 值: bll_wall_following
 
 修改历史:
  1.日     期: 2017年12月22日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
bll_wall_following::bll_wall_following()
{

}

/*****************************************************************************
 函 数 名: bll_wall_following.~bll_wall_following
 功能描述  : 析构函数
 输入参数  : 无
 输出参数: 无
 返 回 值: bll_wall_following
 
 修改历史:
  1.日     期: 2017年12月22日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
bll_wall_following::~bll_wall_following()
{

}

/*****************************************************************************
 函 数 名: bll_wall_following.get_instance
 功能描述  : 获取实例
 输入参数: void  
 输出参数: 无
 返 回 值: bll_wall_following*
 
 修改历史:
  1.日     期: 2017年12月22日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
bll_wall_following* bll_wall_following::get_instance(void)
{
	if (nullptr == p_instance_)
	{
		pthread_mutex_lock(&mutex_);
		if (nullptr == p_instance_)
		{
			p_instance_ = new bll_wall_following();
		}
		pthread_mutex_unlock(&mutex_);
	}
	return p_instance_;
}

/*****************************************************************************
 函 数 名: bll_wall_following.release_instance
 功能描述  : 释放实例
 输入参数: void  
 输出参数: 无
 返 回 值: void
 
 修改历史:
  1.日     期: 2017年12月22日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
void bll_wall_following::release_instance(void)
{
	if (nullptr != p_instance_)
	{
		pthread_mutex_lock(&mutex_);
		if (nullptr != p_instance_)
		{
			delete p_instance_;
			p_instance_ = nullptr;
		}
		pthread_mutex_unlock(&mutex_);
	}
}

/*****************************************************************************
 函 数 名: bll_wall_following.update_wall_following_sensor_data
 功能描述  : 更新沿墙传感器数据信息状态
 输入参数: double value  
 输出参数: 无
 返 回 值: void
 
 修改历史:
  1.日     期: 2017年12月6日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
void bll_wall_following::update_wall_following_sensor_data (double value)
{
	WALL_FOLLOWING_SENSOR_STRU data;
	
	cfg_if_get_wall_following_sensor(data);
	if (( true == data.enable ) && (value > 0.0))
	{
		data.value = value;
		cfg_if_set_wall_following_sensor(data);
	}
	else
	{
		//debug_print_warnning("value=%lf", value);
	}
}


/******************************************************************************
 * 内部函数定义
 ******************************************************************************/


