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


static void work_a_0793170802_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    unsigned char t14;
    int t15;
    unsigned char t16;
    int t17;
    int t18;

LAB0:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 11930);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB2;

LAB3:    t4 = (t0 + 6752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_delta(t4, 80U, 8U, 0LL);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 11938);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB4;

LAB5:    t4 = (t0 + 6752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_delta(t4, 88U, 8U, 0LL);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 11946);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB6;

LAB7:    t4 = (t0 + 6752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_delta(t4, 96U, 8U, 0LL);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 11954);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 6752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_delta(t4, 104U, 8U, 0LL);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2432U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    t1 = (t0 + 6592);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB3;

LAB4:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB5;

LAB6:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB7;

LAB8:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB13:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3272U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 11962);
    t11 = (8U != 8U);
    if (t11 == 1)
        goto LAB19;

LAB20:    t6 = (t0 + 6752);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_delta(t6, 112U, 8U, 0LL);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 11970);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB21;

LAB22:    t4 = (t0 + 6752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_delta(t4, 120U, 8U, 0LL);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 11978);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB23;

LAB24:    t4 = (t0 + 6752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_delta(t4, 128U, 8U, 0LL);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)2);
    if (t10 == 1)
        goto LAB28;

LAB29:    t3 = (unsigned char)0;

LAB30:    if (t3 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB17;

LAB19:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3432U);
    t5 = *((char **)t1);
    t15 = *((int *)t5);
    t16 = (t15 < 16);
    if (t16 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 6880);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 6816);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB32:    goto LAB26;

LAB28:    t1 = (t0 + 3752U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t14 = (t11 == (unsigned char)3);
    t3 = t14;
    goto LAB30;

LAB31:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 3432U);
    t6 = *((char **)t1);
    t17 = *((int *)t6);
    t18 = (t17 + 1);
    t1 = (t0 + 6880);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t18;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

}

static void work_a_0793170802_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(143, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6944);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6608);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0793170802_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(144, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7008);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6624);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0793170802_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(145, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 7072);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6640);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0793170802_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(146, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7136);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6656);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0793170802_3212880686_p_5(char *t0)
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

LAB0:    xsi_set_current_line(147, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t4);
    t7 = (8U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 7200);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 6672);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0793170802_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0793170802_3212880686_p_0,(void *)work_a_0793170802_3212880686_p_1,(void *)work_a_0793170802_3212880686_p_2,(void *)work_a_0793170802_3212880686_p_3,(void *)work_a_0793170802_3212880686_p_4,(void *)work_a_0793170802_3212880686_p_5};
	xsi_register_didat("work_a_0793170802_3212880686", "isim/MECHANICAL_CLOCK_isim_beh.exe.sim/work/a_0793170802_3212880686.didat");
	xsi_register_executes(pe);
}
