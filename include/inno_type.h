/******************************************************************************
 *
 * 文件名  ： inno_type.h
 * 负责人  ： 彭鹏(pengp@innosilicon.com.cn)
 * 创建日期： 20170928
 * 版本号  ： v1.0
 * 文件描述： 矿机类型判断工具 头文件
 * 版权说明： Copyright (c) 2000-2020
 * 其    他： 无
 * 修改日志： 无
 *
 *******************************************************************************/

/*---------------------------------- 预处理区 ---------------------------------*/
#ifndef _INNO_TYPE_H_
#define _INNO_TYPE_H_

/************************************ 头文件 ***********************************/
#include <stdint.h>

/************************************ 宏定义 ***********************************/
/* 当前最大链数 单链最大芯片数 */
#define INNO_TYPE_MAX_CHAIN_NUM     (8)
#define INNO_TYPE_MAX_CHIP_NUM      (72)

#define INNO_TYPE_A5                ("T1")
#define INNO_TYPE_A6                ("T2")
#define INNO_TYPE_A7                ("T3")
#define INNO_TYPE_A8                ("T4")
#define INNO_TYPE_ERR               ("ERR")

/*********************************** 类型定义 **********************************/


/*--------------------------------- 接口声明区 --------------------------------*/

/*********************************** 全局变量 **********************************/

/*********************************** 接口函数 **********************************/

#endif // #ifndef _INNO_TYPE_H_

