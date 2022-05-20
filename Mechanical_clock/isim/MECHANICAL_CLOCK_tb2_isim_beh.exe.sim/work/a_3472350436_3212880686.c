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
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void work_a_3472350436_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(222, ng0);

LAB3:    t2 = (t0 + 8232U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, t4, 2);
    t5 = (t0 + 15472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 15152);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_1(char *t0)
{
    char t23[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(226, ng0);
    t1 = (t0 + 6752U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 15168);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(229, ng0);
    t3 = (t0 + 8712U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 8712U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB17;

LAB18:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(230, ng0);
    t3 = (t0 + 8392U);
    t7 = *((char **)t3);
    t3 = (t0 + 29662);
    t9 = xsi_mem_cmp(t3, t7, 2U);
    if (t9 == 1)
        goto LAB9;

LAB13:    t10 = (t0 + 29664);
    t12 = xsi_mem_cmp(t10, t7, 2U);
    if (t12 == 1)
        goto LAB10;

LAB14:    t13 = (t0 + 29666);
    t15 = xsi_mem_cmp(t13, t7, 2U);
    if (t15 == 1)
        goto LAB11;

LAB15:
LAB12:    xsi_set_current_line(248, ng0);
    t1 = (t0 + 29680);
    t4 = (t0 + 15536);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(249, ng0);
    t1 = (t0 + 15600);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(250, ng0);
    t1 = (t0 + 7112U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (t9 / 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 15664);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB8:    goto LAB6;

LAB9:    xsi_set_current_line(233, ng0);
    t16 = (t0 + 29668);
    t18 = (t0 + 15536);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t16, 4U);
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(234, ng0);
    t1 = (t0 + 15600);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(235, ng0);
    t1 = (t0 + 6952U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = xsi_vhdl_mod(t9, 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 15664);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB8;

LAB10:    xsi_set_current_line(238, ng0);
    t1 = (t0 + 29672);
    t4 = (t0 + 15536);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(239, ng0);
    t1 = (t0 + 15600);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(240, ng0);
    t1 = (t0 + 6952U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (t9 / 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 15664);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB8;

LAB11:    xsi_set_current_line(243, ng0);
    t1 = (t0 + 29676);
    t4 = (t0 + 15536);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(244, ng0);
    t1 = (t0 + 8072U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 15600);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(245, ng0);
    t1 = (t0 + 7112U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = xsi_vhdl_mod(t9, 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 15664);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB8;

LAB16:;
LAB17:    xsi_set_current_line(256, ng0);
    t1 = (t0 + 8392U);
    t4 = *((char **)t1);
    t1 = (t0 + 29684);
    t9 = xsi_mem_cmp(t1, t4, 2U);
    if (t9 == 1)
        goto LAB20;

LAB24:    t8 = (t0 + 29686);
    t12 = xsi_mem_cmp(t8, t4, 2U);
    if (t12 == 1)
        goto LAB21;

LAB25:    t11 = (t0 + 29688);
    t15 = xsi_mem_cmp(t11, t4, 2U);
    if (t15 == 1)
        goto LAB22;

LAB26:
LAB23:    xsi_set_current_line(274, ng0);
    t1 = (t0 + 29702);
    t4 = (t0 + 15536);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(275, ng0);
    t1 = (t0 + 15600);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(276, ng0);
    t1 = (t0 + 7592U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (t9 / 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 15664);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB19:    goto LAB6;

LAB20:    xsi_set_current_line(259, ng0);
    t14 = (t0 + 29690);
    t17 = (t0 + 15536);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t14, 4U);
    xsi_driver_first_trans_fast_port(t17);
    xsi_set_current_line(260, ng0);
    t1 = (t0 + 15600);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(261, ng0);
    t1 = (t0 + 7432U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = xsi_vhdl_mod(t9, 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 15664);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB19;

LAB21:    xsi_set_current_line(264, ng0);
    t1 = (t0 + 29694);
    t4 = (t0 + 15536);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(265, ng0);
    t1 = (t0 + 15600);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(266, ng0);
    t1 = (t0 + 7432U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (t9 / 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 15664);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB19;

LAB22:    xsi_set_current_line(269, ng0);
    t1 = (t0 + 29698);
    t4 = (t0 + 15536);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(270, ng0);
    t1 = (t0 + 15600);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(271, ng0);
    t1 = (t0 + 7592U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = xsi_vhdl_mod(t9, 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 15664);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB19;

LAB27:;
}

static void work_a_3472350436_3212880686_p_2(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(286, ng0);
    t1 = (t0 + 6752U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 15184);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(288, ng0);
    t3 = (t0 + 8232U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 + 1);
    t3 = (t0 + 15728);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t6;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(289, ng0);
    t1 = (t0 + 8232U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 3);
    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(290, ng0);
    t1 = (t0 + 15728);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_3472350436_3212880686_p_3(char *t0)
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
    static char *nl0[] = {&&LAB7, &&LAB7, &&LAB6, &&LAB7, &&LAB7, &&LAB7, &&LAB7, &&LAB7, &&LAB7};

LAB0:    xsi_set_current_line(299, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 15200);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(300, ng0);
    t3 = (t0 + 9168U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(302, ng0);
    t6 = (t0 + 3752U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB5;

LAB7:    xsi_set_current_line(307, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB5;

LAB8:    xsi_set_current_line(303, ng0);
    t6 = (t0 + 8712U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t11);
    t6 = (t0 + 15792);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(304, ng0);
    t1 = (t0 + 9168U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB9;

LAB11:    xsi_set_current_line(308, ng0);
    t1 = (t0 + 9168U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB12;

}

static void work_a_3472350436_3212880686_p_4(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    int t13;
    int t14;

LAB0:    xsi_set_current_line(335, ng0);
    t1 = (t0 + 6432U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(341, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(371, ng0);
    t1 = (t0 + 6272U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB28;

LAB30:
LAB29:    xsi_set_current_line(397, ng0);
    t1 = (t0 + 9288U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t1 = (t0 + 15920);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(398, ng0);
    t1 = (t0 + 9408U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t1 = (t0 + 15984);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(399, ng0);
    t1 = (t0 + 9528U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t1 = (t0 + 16048);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(401, ng0);
    t1 = (t0 + 9648U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t1 = (t0 + 16112);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(402, ng0);
    t1 = (t0 + 9768U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t1 = (t0 + 16176);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(403, ng0);
    t1 = (t0 + 9888U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t1 = (t0 + 16240);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(406, ng0);
    t1 = (t0 + 10128U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 16304);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 15216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(336, ng0);
    t3 = (t0 + 10128U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t3 = (t0 + 10128U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((unsigned char *)t3) = t6;
    xsi_set_current_line(337, ng0);
    t1 = (t0 + 10128U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 15856);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(344, ng0);
    t3 = (t0 + 3432U);
    t4 = *((char **)t3);
    t6 = *((unsigned char *)t4);
    t10 = (t6 == (unsigned char)3);
    if (t10 == 1)
        goto LAB11;

LAB12:    t5 = (unsigned char)0;

LAB13:    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(352, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = (unsigned char)0;

LAB19:    if (t2 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(358, ng0);
    t1 = (t0 + 8712U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = (unsigned char)0;

LAB25:    if (t2 != 0)
        goto LAB20;

LAB22:    t1 = (t0 + 8712U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB26;

LAB27:
LAB21:    goto LAB6;

LAB8:    xsi_set_current_line(345, ng0);
    t3 = (t0 + 10128U);
    t8 = *((char **)t3);
    t3 = (t8 + 0);
    *((unsigned char *)t3) = (unsigned char)2;
    xsi_set_current_line(346, ng0);
    t1 = (t0 + 9288U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(347, ng0);
    t1 = (t0 + 9408U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(348, ng0);
    t1 = (t0 + 9528U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB9;

LAB11:    t3 = (t0 + 8712U);
    t7 = *((char **)t3);
    t11 = *((unsigned char *)t7);
    t12 = (t11 == (unsigned char)3);
    t5 = t12;
    goto LAB13;

LAB14:    xsi_set_current_line(353, ng0);
    t1 = (t0 + 10128U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(354, ng0);
    t1 = (t0 + 9288U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB15;

LAB17:    t1 = (t0 + 8712U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t2 = t11;
    goto LAB19;

LAB20:    xsi_set_current_line(359, ng0);
    t1 = (t0 + 9288U);
    t7 = *((char **)t1);
    t13 = *((int *)t7);
    t1 = (t0 + 9648U);
    t8 = *((char **)t1);
    t1 = (t8 + 0);
    *((int *)t1) = t13;
    xsi_set_current_line(360, ng0);
    t1 = (t0 + 9768U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 23;
    xsi_set_current_line(361, ng0);
    t1 = (t0 + 9888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 5;
    xsi_set_current_line(363, ng0);
    t1 = (t0 + 10008U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB21;

LAB23:    t1 = (t0 + 10008U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    t2 = t11;
    goto LAB25;

LAB26:    xsi_set_current_line(365, ng0);
    t1 = (t0 + 10008U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB21;

LAB28:    xsi_set_current_line(373, ng0);
    t3 = (t0 + 9288U);
    t4 = *((char **)t3);
    t13 = *((int *)t4);
    t14 = (t13 + 1);
    t3 = (t0 + 9288U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((int *)t3) = t14;
    xsi_set_current_line(376, ng0);
    t1 = (t0 + 9288U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t2 = (t13 == 60);
    if (t2 != 0)
        goto LAB31;

LAB33:
LAB32:    xsi_set_current_line(382, ng0);
    t1 = (t0 + 9408U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t2 = (t13 == 60);
    if (t2 != 0)
        goto LAB34;

LAB36:
LAB35:    xsi_set_current_line(388, ng0);
    t1 = (t0 + 7272U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t2 = (t13 == 24);
    if (t2 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB29;

LAB31:    xsi_set_current_line(377, ng0);
    t1 = (t0 + 9288U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(378, ng0);
    t1 = (t0 + 9408U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 + 1);
    t1 = (t0 + 9408U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t14;
    goto LAB32;

LAB34:    xsi_set_current_line(383, ng0);
    t1 = (t0 + 9408U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(384, ng0);
    t1 = (t0 + 9528U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 + 1);
    t1 = (t0 + 9528U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t14;
    goto LAB35;

LAB37:    xsi_set_current_line(389, ng0);
    t1 = (t0 + 9408U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(390, ng0);
    t1 = (t0 + 9528U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 + 1);
    t1 = (t0 + 9528U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t14;
    goto LAB38;

}

static void work_a_3472350436_3212880686_p_5(char *t0)
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

LAB0:    xsi_set_current_line(419, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 15232);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(421, ng0);
    t3 = (t0 + 5352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(423, ng0);
    t6 = (t0 + 3912U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(431, ng0);
    t1 = (t0 + 16432);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(432, ng0);
    t1 = (t0 + 16368);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB5;

LAB7:    xsi_set_current_line(436, ng0);
    t1 = (t0 + 5032U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = (unsigned char)0;

LAB22:    if (t2 != 0)
        goto LAB17;

LAB19:    t1 = (t0 + 4872U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB23;

LAB24:    xsi_set_current_line(442, ng0);
    t1 = (t0 + 16368);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB5;

LAB8:    xsi_set_current_line(446, ng0);
    t1 = (t0 + 29706);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB25;

LAB26:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, 0LL);
    xsi_set_current_line(447, ng0);
    t1 = (t0 + 29714);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB27;

LAB28:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 8U, 8U, 0LL);
    xsi_set_current_line(448, ng0);
    t1 = (t0 + 29722);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB29;

LAB30:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 16U, 8U, 0LL);
    xsi_set_current_line(449, ng0);
    t1 = (t0 + 29730);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB31;

LAB32:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    xsi_set_current_line(450, ng0);
    t1 = (t0 + 29738);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB33;

LAB34:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 32U, 8U, 0LL);
    xsi_set_current_line(451, ng0);
    t1 = (t0 + 29746);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB35;

LAB36:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 40U, 8U, 0LL);
    xsi_set_current_line(452, ng0);
    t1 = (t0 + 29754);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB37;

LAB38:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 48U, 8U, 0LL);
    xsi_set_current_line(453, ng0);
    t1 = (t0 + 29762);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB39;

LAB40:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 56U, 8U, 0LL);
    xsi_set_current_line(454, ng0);
    t1 = (t0 + 29770);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB41;

LAB42:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 64U, 8U, 0LL);
    xsi_set_current_line(455, ng0);
    t1 = (t0 + 29778);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB43;

LAB44:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 72U, 8U, 0LL);
    xsi_set_current_line(456, ng0);
    t1 = (t0 + 29786);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB45;

LAB46:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 80U, 8U, 0LL);
    xsi_set_current_line(457, ng0);
    t1 = (t0 + 29794);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB47;

LAB48:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 88U, 8U, 0LL);
    xsi_set_current_line(458, ng0);
    t1 = (t0 + 29802);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB49;

LAB50:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 96U, 8U, 0LL);
    xsi_set_current_line(459, ng0);
    t1 = (t0 + 29810);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB51;

LAB52:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 104U, 8U, 0LL);
    xsi_set_current_line(460, ng0);
    t1 = (t0 + 29818);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB53;

LAB54:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 112U, 8U, 0LL);
    xsi_set_current_line(461, ng0);
    t1 = (t0 + 29826);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB55;

LAB56:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 120U, 8U, 0LL);
    xsi_set_current_line(462, ng0);
    t1 = (t0 + 29834);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB57;

LAB58:    t4 = (t0 + 16560);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 128U, 8U, 0LL);
    xsi_set_current_line(463, ng0);
    t1 = (t0 + 16368);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(464, ng0);
    t1 = (t0 + 5032U);
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

LAB9:    xsi_set_current_line(474, ng0);
    t1 = (t0 + 16496);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(475, ng0);
    t1 = (t0 + 16368);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(476, ng0);
    t1 = (t0 + 4232U);
    t3 = *((char **)t1);
    t1 = (t0 + 4712U);
    t4 = *((char **)t1);
    t17 = *((int *)t4);
    t18 = (t17 - 0);
    t20 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t17);
    t21 = (8U * t20);
    t22 = (0 + t21);
    t1 = (t3 + t22);
    t6 = (t0 + 16688);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB5;

LAB10:    xsi_set_current_line(479, ng0);
    t1 = (t0 + 16368);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB11:    xsi_set_current_line(424, ng0);
    t6 = (t0 + 5512U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    if (t12 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(428, ng0);
    t1 = (t0 + 16368);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(425, ng0);
    t6 = (t0 + 16368);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(426, ng0);
    t1 = (t0 + 16432);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(437, ng0);
    t1 = (t0 + 16368);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    t1 = (t0 + 5192U);
    t4 = *((char **)t1);
    t9 = *((unsigned char *)t4);
    t11 = (t9 == (unsigned char)3);
    t2 = t11;
    goto LAB22;

LAB23:    xsi_set_current_line(439, ng0);
    t1 = (t0 + 16368);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(440, ng0);
    t1 = (t0 + 16496);
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

LAB59:    xsi_set_current_line(465, ng0);
    t1 = (t0 + 4712U);
    t6 = *((char **)t1);
    t17 = *((int *)t6);
    t12 = (t17 < 16);
    if (t12 != 0)
        goto LAB65;

LAB67:    xsi_set_current_line(468, ng0);
    t1 = (t0 + 16624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(469, ng0);
    t1 = (t0 + 16368);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB66:    goto LAB60;

LAB62:    t1 = (t0 + 5192U);
    t4 = *((char **)t1);
    t9 = *((unsigned char *)t4);
    t11 = (t9 == (unsigned char)3);
    t2 = t11;
    goto LAB64;

LAB65:    xsi_set_current_line(466, ng0);
    t1 = (t0 + 4712U);
    t7 = *((char **)t1);
    t18 = *((int *)t7);
    t19 = (t18 + 1);
    t1 = (t0 + 16624);
    t10 = (t1 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = t19;
    xsi_driver_first_trans_fast(t1);
    goto LAB66;

}

static void work_a_3472350436_3212880686_p_6(char *t0)
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
    int t19;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8};

LAB0:    xsi_set_current_line(488, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 15248);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(489, ng0);
    t3 = (t0 + 6152U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(491, ng0);
    t6 = (t0 + 1832U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(494, ng0);
    t1 = (t0 + 16752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB5;

LAB7:    xsi_set_current_line(498, ng0);
    t1 = (t0 + 5832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(501, ng0);
    t1 = (t0 + 16752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB5;

LAB8:    xsi_set_current_line(505, ng0);
    t1 = (t0 + 5672U);
    t3 = *((char **)t1);
    t1 = (t0 + 5992U);
    t4 = *((char **)t1);
    t14 = *((int *)t4);
    t15 = (t14 - 0);
    t16 = (t15 * 1);
    t17 = (8U * t16);
    t18 = (0U + t17);
    t1 = (t0 + 16816);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_delta(t1, t18, 8U, 0LL);
    xsi_set_current_line(506, ng0);
    t1 = (t0 + 5992U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t2 = (t14 < 16);
    if (t2 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(509, ng0);
    t1 = (t0 + 16880);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);

LAB17:    xsi_set_current_line(511, ng0);
    t1 = (t0 + 16752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB9:    xsi_set_current_line(514, ng0);
    t1 = (t0 + 16752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB10:    xsi_set_current_line(492, ng0);
    t6 = (t0 + 16752);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    goto LAB11;

LAB13:    xsi_set_current_line(499, ng0);
    t1 = (t0 + 16752);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(507, ng0);
    t1 = (t0 + 5992U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t19 = (t15 + 1);
    t1 = (t0 + 16880);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t19;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

}

static void work_a_3472350436_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(521, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3592U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 8712U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 16944);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 15264);
    *((int *)t14) = 1;

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

LAB0:    xsi_set_current_line(524, ng0);

LAB3:    t1 = (t0 + 8712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 17008);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 15280);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(527, ng0);

LAB3:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 17072);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 15296);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(528, ng0);

LAB3:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 17136);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 15312);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_11(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(529, ng0);

LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 17200);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 15328);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_12(char *t0)
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

LAB0:    xsi_set_current_line(532, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 28824U);
    t4 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, t4);
    t7 = (8U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 17264);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 8U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 15344);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(533, ng0);

LAB3:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 17328);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 15360);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_14(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(534, ng0);

LAB3:    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 17392);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 15376);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(535, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 17456);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 15392);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3472350436_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3472350436_3212880686_p_0,(void *)work_a_3472350436_3212880686_p_1,(void *)work_a_3472350436_3212880686_p_2,(void *)work_a_3472350436_3212880686_p_3,(void *)work_a_3472350436_3212880686_p_4,(void *)work_a_3472350436_3212880686_p_5,(void *)work_a_3472350436_3212880686_p_6,(void *)work_a_3472350436_3212880686_p_7,(void *)work_a_3472350436_3212880686_p_8,(void *)work_a_3472350436_3212880686_p_9,(void *)work_a_3472350436_3212880686_p_10,(void *)work_a_3472350436_3212880686_p_11,(void *)work_a_3472350436_3212880686_p_12,(void *)work_a_3472350436_3212880686_p_13,(void *)work_a_3472350436_3212880686_p_14,(void *)work_a_3472350436_3212880686_p_15};
	xsi_register_didat("work_a_3472350436_3212880686", "isim/MECHANICAL_CLOCK_tb2_isim_beh.exe.sim/work/a_3472350436_3212880686.didat");
	xsi_register_executes(pe);
}
