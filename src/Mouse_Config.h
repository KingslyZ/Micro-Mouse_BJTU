


#ifndef __MOUSE_CONFIG_H
#define __MOUSE_CONFIG_H


/*********************************************************************************************************
  �����궨�� -- �Թ�����
*********************************************************************************************************/
#define MAZETYPE        16                                               /*  8: �ķ�֮һ�Թ���16: ȫ�Թ� */


/*********************************************************************************************************
  �����궨�� -- �趨�ķ�֮һ�Թ����յ�����
*********************************************************************************************************/
#if MAZETYPE == 8
#define XDST0           6
#define XDST1           6
#define YDST0           6
#define YDST1           6
#endif


/*********************************************************************************************************
  �����궨�� -- �趨ȫ�Թ����յ�����
*********************************************************************************************************/
#if MAZETYPE == 16
#define XDST0           7
#define XDST1           8
#define YDST0           7
#define YDST1           8
#endif


/*********************************************************************************************************
  �����궨�� -- �����Թ���������
  ����ʹ�õķ���:
  RIGHTMETHOD           -- ���ַ���
  LEFTMETHOD            -- ���ַ���
  CENTRALMETHOD         -- ���ķ���
  FRONTRIGHTMETHOD      -- ���ҷ���
  FRONTLEFTMETHOD       -- ������
*********************************************************************************************************/
//#define SEARCHMETHOD   FRONTLEFTMETHOD                                   /*  �����Թ���������Ϊ���ַ���  */


/*********************************************************************************************************
  �����궨��--��������ٶ�            
*********************************************************************************************************/
#define MAXSPEED        150                                             /*  �����������ʱ������ٶ�    */
#define SEARCHSPEED     68                                              /*  ��������Թ�ʱ������ٶ�    */


/*********************************************************************************************************
  �����궨��--ǰ��һ���Թ��񲽽������Ҫ�ߵĲ���
*********************************************************************************************************/
#define ONEBLOCK        125


#endif
/*********************************************************************************************************
  END FILE
*********************************************************************************************************/