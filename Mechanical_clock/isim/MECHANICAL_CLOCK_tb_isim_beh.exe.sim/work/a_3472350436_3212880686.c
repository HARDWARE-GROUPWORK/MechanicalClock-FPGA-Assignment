/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ASUS/Desktop/FPGA_Project/Mechanical_clock/MECHANICAL_CLOCK.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3472350436_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8, &&LAB9};

LAB0:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 4232U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(110, ng0);
    t6 = (t0 + 2472U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 8768);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 8704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB5;

LAB7:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = (unsigned char)0;

LAB22:    if (t2 != 0)
        goto LAB17;

LAB19:    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB23;

LAB24:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 8704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB5;

LAB8:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 16121);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB25;

LAB26:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, 0LL);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 16129);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB27;

LAB28:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 8U, 8U, 0LL);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 16137);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB29;

LAB30:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 16U, 8U, 0LL);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 16145);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB31;

LAB32:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 16153);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB33;

LAB34:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 32U, 8U, 0LL);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 16161);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB35;

LAB36:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 40U, 8U, 0LL);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 16169);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB37;

LAB38:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 48U, 8U, 0LL);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 16177);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB39;

LAB40:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 56U, 8U, 0LL);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 16185);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB41;

LAB42:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 64U, 8U, 0LL);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 16193);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB43;

LAB44:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 72U, 8U, 0LL);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 16201);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB45;

LAB46:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 80U, 8U, 0LL);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 16209);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB47;

LAB48:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 88U, 8U, 0LL);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 16217);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB49;

LAB50:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 96U, 8U, 0LL);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 16225);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB51;

LAB52:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 104U, 8U, 0LL);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 16233);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB53;

LAB54:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 112U, 8U, 0LL);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 16241);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB55;

LAB56:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 120U, 8U, 0LL);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 16249);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB57;

LAB58:    t4 = (t0 + 8896);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 128U, 8U, 0LL);
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 8704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t8 = (t5 == (unsigned char)2);
    if (t8 == 1)
        goto LAB62;

LAB63:    t2 = (unsigned char)0;

LAB64:    if (t2 != 0)
        goto LAB59;

LAB61:
LAB60:    goto LAB5;

LAB9:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 8832);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(162, ng0);
    t1 = (t0 + 8704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 3112U);
    t3 = *((char **)t1);
    t1 = (t0 + 3592U);
    t4 = *((char **)t1);
    t17 = *((int *)t4);
    t18 = (t17 - 0);
    t20 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t17);
    t21 = (8U * t20);
    t22 = (0 + t21);
    t1 = (t3 + t22);
    t6 = (t0 + 9024);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB5;

LAB10:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 8704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB11:    xsi_set_current_line(111, ng0);
    t6 = (t0 + 4392U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    if (t12 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 8704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(112, ng0);
    t6 = (t0 + 8704);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 8768);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 8704);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    t1 = (t0 + 4072U);
    t4 = *((char **)t1);
    t9 = *((unsigned char *)t4);
    t11 = (t9 == (unsigned char)3);
    t2 = t11;
    goto LAB22;

LAB23:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 8704);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 8832);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB25:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB40;

LAB41:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB46;

LAB47:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB48;

LAB49:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB50;

LAB51:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB52;

LAB53:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB54;

LAB55:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB56;

LAB57:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB58;

LAB59:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 3592U);
    t6 = *((char **)t1);
    t17 = *((int *)t6);
    t12 = (t17 < 16);
    if (t12 != 0)
        goto LAB65;

LAB67:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 8960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 8704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB66:    goto LAB60;

LAB62:    t1 = (t0 + 4072U);
    t4 = *((char **)t1);
    t9 = *((unsigned char *)t4);
    t11 = (t9 == (unsigned char)3);
    t2 = t11;
    goto LAB64;

LAB65:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 3592U);
    t7 = *((char **)t1);
    t18 = *((int *)t7);
    t19 = (t18 + 1);
    t1 = (t0 + 8960);
    t10 = (t1 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = t19;
    xsi_driver_first_trans_fast(t1);
    goto LAB66;

}

static void work_a_3472350436_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8};

LAB0:    xsi_set_current_line(174, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8512);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(175, ng0);
    t3 = (t0 + 5032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(177, ng0);
    t6 = (t0 + 1832U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 9088);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB5;

LAB7:    xsi_set_current_line(184, ng0);
    t1 = (t0 + 4712U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(188, ng0);
    t1 = (t0 + 9088);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB5;

LAB8:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 4552U);
    t3 = *((char **)t1);
    t1 = (t0 + 3592U);
    t4 = *((char **)t1);
    t14 = *((int *)t4);
    t15 = (t14 - 0);
    t16 = (t15 * 1);
    t17 = (8U * t16);
    t18 = (0U + t17);
    t1 = (t0 + 9152);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_delta(t1, t18, 8U, 0LL);
    xsi_set_current_line(193, ng0);
    t1 = (t0 + 4872U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t2 = (t14 < 3);
    if (t2 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 9280);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);

LAB17:    xsi_set_current_line(199, ng0);
    t1 = (t0 + 9088);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB9:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 9088);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB10:    xsi_set_current_line(178, ng0);
    t6 = (t0 + 9088);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    goto LAB11;

LAB13:    xsi_set_current_line(186, ng0);
    t1 = (t0 + 9088);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 9216);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(195, ng0);
    t1 = (t0 + 4872U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t15 = (t14 + 1);
    t1 = (t0 + 9280);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = t15;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

}

static void work_a_3472350436_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(225, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9344);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8528);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(226, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9408);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8544);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(227, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 9472);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8560);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(230, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 15636U);
    t4 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t4);
    t7 = (8U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 9536);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 8U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 8576);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(231, ng0);

LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9600);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8592);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(232, ng0);

LAB3:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 9664);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8608);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(233, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9728);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8624);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3472350436_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3472350436_3212880686_p_0,(void *)work_a_3472350436_3212880686_p_1,(void *)work_a_3472350436_3212880686_p_2,(void *)work_a_3472350436_3212880686_p_3,(void *)work_a_3472350436_3212880686_p_4,(void *)work_a_3472350436_3212880686_p_5,(void *)work_a_3472350436_3212880686_p_6,(void *)work_a_3472350436_3212880686_p_7,(void *)work_a_3472350436_3212880686_p_8};
	xsi_register_didat("work_a_3472350436_3212880686", "isim/MECHANICAL_CLOCK_tb_isim_beh.exe.sim/work/a_3472350436_3212880686.didat");
	xsi_register_executes(pe);
}
