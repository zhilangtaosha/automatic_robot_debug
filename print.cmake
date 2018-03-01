#/******************************************************************************
# 文件名称: print.cmake
# 版本编号: 初稿
# 作     者: Leon
# 生成日期: 2018年01月30日
# 最近修改:
# 功能描述: 定义打印调试相关功能宏
# 函数列表:
# 
# 修改历史:
# 1.日     期: 2018年01月30日
#   作     者: Leon
#   修改内容: 创建文件
#*****************************************************************************/

#/*****************************************************************************
# 函 数 名: blank_line
# 功能描述: 打印空行
# 输入参数: 无
# 输出参数: 无
# 返 回 值: 无
# 
# 修改历史:
#  1.日     期: 2018年01月30日
#    作     者: Leon
#    修改内容: 新生成宏
#*****************************************************************************/
macro(blank_line)
	message(STATUS "")
endmacro()

#/*****************************************************************************
# 函 数 名: cut_off_rule
# 功能描述: 打印单行分割线
# 输入参数: 无
# 输出参数: 无
# 返 回 值: 无
# 
# 修改历史:
#  1.日     期: 2018年01月30日
#    作     者: Leon
#    修改内容: 新生成宏
#*****************************************************************************/
macro(cut_off_rule)
	message(STATUS "|--------------------------------------------------------------")
endmacro()

#/*****************************************************************************
# 函 数 名: parallel_lines
# 功能描述: 打印双行行分割线
# 输入参数: 无
# 输出参数: 无
# 返 回 值: 无
# 
# 修改历史:
#  1.日     期: 2018年01月30日
#    作     者: Leon
#    修改内容: 新生成宏
#*****************************************************************************/
macro(parallel_lines)
	message(STATUS "|==============================================================")
endmacro()

#/*****************************************************************************
# 函 数 名: print_variate
# 功能描述: 打印变量的值
# 输入参数: arg:变量名
# 输出参数: 无
# 返 回 值: 无
# 
# 修改历史:
#  1.日     期: 2018年01月30日
#    作     者: Leon
#    修改内容: 新生成宏
#*****************************************************************************/
macro(print_variate arg)
	message(STATUS "| ${arg} is \"${${arg}}\"")
endmacro()

#/*****************************************************************************
# 函 数 名: print_info
# 功能描述  : 打印信息与变量的值
# 输入参数: 
#      info:信息
#      arg:变量
# 输出参数: 无
# 返 回 值: 无
# 
# 修改历史:
#  1.日     期: 2018年01月30日
#    作     者: Leon
#    修改内容: 新生成宏
#*****************************************************************************/
macro(print_info info arg)
	message(STATUS "| info : \"${arg}\"")
endmacro()

#/*****************************************************************************
# 函 数 名: print_string
# 功能描述  : 打印信息
# 输入参数: 
#      info:信息
# 输出参数: 无
# 返 回 值: 无
# 
# 修改历史:
#  1.日     期: 2018年01月30日
#    作     者: Leon
#    修改内容: 新生成宏
#*****************************************************************************/
macro(print_string str)
	message(STATUS "|[INFO]\"${str}\"")
endmacro()

macro(print_info_variate arg)
	message(STATUS "|[INFO] ${arg} is \"${${arg}}\"")
endmacro()

macro(print_function_name arg)
	message(STATUS "|[INFO] @@@@@@@@@@@@@@@@> ${arg}() <@@@@@@@@@@@@@@@@@@")
endmacro()


macro(print_function_name_begin arg)
	message(STATUS "|[INFO] ======================[begin]>>>>>> ${arg}()====================== ")
endmacro()

macro(print_function_name_end arg)
	message(STATUS "|[INFO] ======================[ end ]<<<<<< ${arg}()====================== ")
endmacro()
