/******************************************************************************

  版权所有 (C), 2017-2028 惠州市蓝微电子有限公司

 ******************************************************************************
  文件名称: base_type.h
  版本编号: 初稿
  作     者: Leon
  生成日期: 2017年9月1日
  最近修改:
  功能描述: base_type.h 的头文件
  函数列表:
  修改历史:
  1.日     期: 2017年9月1日
    作     者: Leon
    修改内容: 创建文件
******************************************************************************/
#ifndef __BASE_TYPE_H__
#define __BASE_TYPE_H__

/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
//extern "C"{
#endif
#endif /* __cplusplus */
/*****************************************************************************/

/******************************************************************************
 * 包含头文件
 ******************************************************************************/

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
#define GET_MAX(a, b) (((a) > (b)) ? (a) : (b))
#define GET_MIN(a, b) (((a) < (b)) ? (a) : (b))

/******************************************************************************
 * 常量声明
 ******************************************************************************/

/******************************************************************************
 * 枚举类型
 ******************************************************************************/

/******************************************************************************
 * 结构体类型
 ******************************************************************************/
typedef struct POSITION
{
	double x;
	double y;
	
	void init(double _x, double _y)
	{
		x = _x;
		y = _y;
	}
	
	POSITION()  //默认构造函数
	{
		x = 0.0;
		y = 0.0;
	}
	
	POSITION(double _x, double _y)//构造函数
	{
		x = _x;
		y = _y;
	}
	
	void set(POSITION* s1, POSITION* s2)//赋值函数
	{
		s1->x = s2->x;
		s1->y = s2->y;
	}
	
	POSITION& operator=(const POSITION& s)//重载运算符
	{
		set(this, (POSITION*)&s);
	}
	
	POSITION(const POSITION& s)//复制构造函数
	{
		*this = s;
	}
}POSITION_STRU;

typedef struct POSE
{
	POSITION_STRU point;
	double angle;

	void init(double _x, double _y, double _angle)//初始化函数
	{
		point.x = _x;
		point.y = _y;
		angle = _angle;
	}

	void set(POSE* s1, POSE* s2)//赋值函数
	{
		s1->point.x = s2->point.x;
		s1->point.y = s2->point.y;
		s1->angle = s2->angle;
	}
	
	POSE()  //默认构造函数
	{
		point.x = 0.0;
		point.y = 0.0;
		angle = 0.0;
	}
	/*
	POSE(double _x, double _y, double _angle)//构造函数
	{
		point.x = _x;
		point.y = _y;
		angle = _angle;
	}
	
	POSE& operator=(const POSE& s)//重载运算符
	{
		set(this, (POSE)&s);
	}
	
	POSE(const POSE& s)//复制构造函数
	{
		*this = s;
	}
	*/
}POSE_STRU;

/******************************************************************************
 * 类声明
 ******************************************************************************/

/******************************************************************************
 * 内部函数声明
 ******************************************************************************/



/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
//}
#endif
#endif /* __cplusplus */
/*****************************************************************************/

#endif /* __BASE_TYPE_H__ */
