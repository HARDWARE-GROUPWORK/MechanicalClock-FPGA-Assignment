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

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0215656310_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6096);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 3592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(98, ng0);
    t6 = (t0 + 2312U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 6288);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 6224);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB5;

LAB7:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = (unsigned char)0;

LAB22:    if (t2 != 0)
        goto LAB17;

LAB19:    t1 = (t0 + 3112U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB23;

LAB24:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 6224);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB5;

LAB8:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 11497);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB25;

LAB26:    t4 = (t0 + 6416);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, 0LL);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 11505);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB27;

LAB28:    t4 = (t0 + 6416);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 80U, 8U, 0LL);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 11513);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB29;

LAB30:    t4 = (t0 + 6416);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 88U, 8U, 0LL);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 11521);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB31;

LAB32:    t4 = (t0 + 6416);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 96U, 8U, 0LL);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 11529);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB33;

LAB34:    t4 = (t0 + 6416);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 104U, 8U, 0LL);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 11537);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB35;

LAB36:    t4 = (t0 + 6416);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 112U, 8U, 0LL);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 11545);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB37;

LAB38:    t4 = (t0 + 6416);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 120U, 8U, 0LL);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 11553);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB39;

LAB40:    t4 = (t0 + 6416);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 128U, 8U, 0LL);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 6224);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t8 = (t5 == (unsigned char)2);
    if (t8 == 1)
        goto LAB44;

LAB45:    t2 = (unsigned char)0;

LAB46:    if (t2 != 0)
        goto LAB41;

LAB43:
LAB42:    goto LAB5;

LAB9:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 6352);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 6224);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t17 = *((int *)t4);
    t18 = (t17 - 0);
    t20 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t17);
    t21 = (8U * t20);
    t22 = (0 + t21);
    t1 = (t3 + t22);
    t6 = (t0 + 6544);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB5;

LAB10:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 6224);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB11:    xsi_set_current_line(99, ng0);
    t6 = (t0 + 3752U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    if (t12 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 6224);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(100, ng0);
    t6 = (t0 + 6224);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 6288);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 6224);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t9 = *((unsigned char *)t4);
    t11 = (t9 == (unsigned char)3);
    t2 = t11;
    goto LAB22;

LAB23:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 6224);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 6352);
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

LAB41:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 2952U);
    t6 = *((char **)t1);
    t17 = *((int *)t6);
    t12 = (t17 < 16);
    if (t12 != 0)
        goto LAB47;

LAB49:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 6480);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 6224);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB48:    goto LAB42;

LAB44:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t9 = *((unsigned char *)t4);
    t11 = (t9 == (unsigned char)3);
    t2 = t11;
    goto LAB46;

LAB47:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 2952U);
    t7 = *((char **)t1);
    t18 = *((int *)t7);
    t19 = (t18 + 1);
    t1 = (t0 + 6480);
    t10 = (t1 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = t19;
    xsi_driver_first_trans_fast(t1);
    goto LAB48;

}

static void work_a_0215656310_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(170, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6608);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6112);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0215656310_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(171, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6128);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0215656310_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(172, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6736);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6144);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0215656310_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0215656310_3212880686_p_0,(void *)work_a_0215656310_3212880686_p_1,(void *)work_a_0215656310_3212880686_p_2,(void *)work_a_0215656310_3212880686_p_3};
	xsi_register_didat("work_a_0215656310_3212880686", "isim/MECHANICAL_CLOCK_tb_isim_beh.exe.sim/work/a_0215656310_3212880686.didat");
	xsi_register_executes(pe);
}
