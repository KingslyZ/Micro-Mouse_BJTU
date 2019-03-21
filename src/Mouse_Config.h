


#ifndef __MOUSE_CONFIG_H
#define __MOUSE_CONFIG_H


/*********************************************************************************************************
  常量宏定义 -- 迷宫类型
*********************************************************************************************************/
#define MAZETYPE        16                                               /*  8: 四分之一迷宫；16: 全迷宫 */


/*********************************************************************************************************
  常量宏定义 -- 设定四分之一迷宫的终点坐标
*********************************************************************************************************/
#if MAZETYPE == 8
#define XDST0           6
#define XDST1           6
#define YDST0           6
#define YDST1           6
#endif


/*********************************************************************************************************
  常量宏定义 -- 设定全迷宫的终点坐标
*********************************************************************************************************/
#if MAZETYPE == 16
#define XDST0           7
#define XDST1           8
#define YDST0           7
#define YDST1           8
#endif


/*********************************************************************************************************
  常量宏定义 -- 设置迷宫搜索法则
  可以使用的法则:
  RIGHTMETHOD           -- 右手法则
  LEFTMETHOD            -- 左手法则
  CENTRALMETHOD         -- 中心法则
  FRONTRIGHTMETHOD      -- 中右法则
  FRONTLEFTMETHOD       -- 中左法则
*********************************************************************************************************/
//#define SEARCHMETHOD   FRONTLEFTMETHOD                                   /*  设置迷宫搜索法则为右手法则  */


/*********************************************************************************************************
  常量宏定义--电机运行速度            
*********************************************************************************************************/
#define MAXSPEED        150                                             /*  电机加速运行时的最大速度    */
#define SEARCHSPEED     68                                              /*  电机搜索迷宫时的最大速度    */


/*********************************************************************************************************
  常量宏定义--前进一个迷宫格步进电机需要走的步数
*********************************************************************************************************/
#define ONEBLOCK        125


#endif
/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
