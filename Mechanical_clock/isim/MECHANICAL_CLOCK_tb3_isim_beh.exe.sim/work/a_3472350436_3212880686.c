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

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
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

LAB0:    xsi_set_current_line(230, ng0);

LAB3:    t2 = (t0 + 8392U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, t4, 2);
    t5 = (t0 + 16536);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 2U);
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 16200);
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
    int t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t24;
    unsigned char t25;

LAB0:    xsi_set_current_line(234, ng0);
    t1 = (t0 + 6912U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 16216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(237, ng0);
    t3 = (t0 + 8872U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 8872U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = (unsigned char)0;

LAB21:    if (t2 != 0)
        goto LAB17;

LAB18:    t1 = (t0 + 8872U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = (unsigned char)0;

LAB35:    if (t2 != 0)
        goto LAB31;

LAB32:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(238, ng0);
    t3 = (t0 + 8552U);
    t7 = *((char **)t3);
    t3 = (t0 + 31562);
    t9 = xsi_mem_cmp(t3, t7, 2U);
    if (t9 == 1)
        goto LAB9;

LAB13:    t10 = (t0 + 31564);
    t12 = xsi_mem_cmp(t10, t7, 2U);
    if (t12 == 1)
        goto LAB10;

LAB14:    t13 = (t0 + 31566);
    t15 = xsi_mem_cmp(t13, t7, 2U);
    if (t15 == 1)
        goto LAB11;

LAB15:
LAB12:    xsi_set_current_line(256, ng0);
    t1 = (t0 + 31580);
    t4 = (t0 + 16600);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(257, ng0);
    t1 = (t0 + 16664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(258, ng0);
    t1 = (t0 + 7432U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (t9 / 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB8:    goto LAB6;

LAB9:    xsi_set_current_line(241, ng0);
    t16 = (t0 + 31568);
    t18 = (t0 + 16600);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t16, 4U);
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(242, ng0);
    t1 = (t0 + 16664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(243, ng0);
    t1 = (t0 + 7272U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = xsi_vhdl_mod(t9, 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB8;

LAB10:    xsi_set_current_line(246, ng0);
    t1 = (t0 + 31572);
    t4 = (t0 + 16600);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(247, ng0);
    t1 = (t0 + 16664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(248, ng0);
    t1 = (t0 + 7272U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (t9 / 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB8;

LAB11:    xsi_set_current_line(251, ng0);
    t1 = (t0 + 31576);
    t4 = (t0 + 16600);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(252, ng0);
    t1 = (t0 + 8232U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 16664);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(253, ng0);
    t1 = (t0 + 7432U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = xsi_vhdl_mod(t9, 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB8;

LAB16:;
LAB17:    xsi_set_current_line(264, ng0);
    t1 = (t0 + 8552U);
    t7 = *((char **)t1);
    t1 = (t0 + 31584);
    t9 = xsi_mem_cmp(t1, t7, 2U);
    if (t9 == 1)
        goto LAB23;

LAB27:    t10 = (t0 + 31586);
    t12 = xsi_mem_cmp(t10, t7, 2U);
    if (t12 == 1)
        goto LAB24;

LAB28:    t13 = (t0 + 31588);
    t15 = xsi_mem_cmp(t13, t7, 2U);
    if (t15 == 1)
        goto LAB25;

LAB29:
LAB26:    xsi_set_current_line(282, ng0);
    t1 = (t0 + 31602);
    t4 = (t0 + 16600);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(283, ng0);
    t1 = (t0 + 8232U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 16664);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(284, ng0);
    t1 = (t0 + 7912U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (t9 / 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB22:    goto LAB6;

LAB19:    t1 = (t0 + 9032U);
    t4 = *((char **)t1);
    t24 = *((unsigned char *)t4);
    t25 = (t24 == (unsigned char)2);
    t2 = t25;
    goto LAB21;

LAB23:    xsi_set_current_line(267, ng0);
    t16 = (t0 + 31590);
    t18 = (t0 + 16600);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t16, 4U);
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(268, ng0);
    t1 = (t0 + 16664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(269, ng0);
    t1 = (t0 + 7752U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = xsi_vhdl_mod(t9, 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB22;

LAB24:    xsi_set_current_line(272, ng0);
    t1 = (t0 + 31594);
    t4 = (t0 + 16600);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(273, ng0);
    t1 = (t0 + 16664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(274, ng0);
    t1 = (t0 + 7752U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (t9 / 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB22;

LAB25:    xsi_set_current_line(277, ng0);
    t1 = (t0 + 31598);
    t4 = (t0 + 16600);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(278, ng0);
    t1 = (t0 + 8232U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 16664);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(279, ng0);
    t1 = (t0 + 7912U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = xsi_vhdl_mod(t9, 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB22;

LAB30:;
LAB31:    xsi_set_current_line(287, ng0);
    t1 = (t0 + 8552U);
    t7 = *((char **)t1);
    t1 = (t0 + 31606);
    t9 = xsi_mem_cmp(t1, t7, 2U);
    if (t9 == 1)
        goto LAB37;

LAB41:    t10 = (t0 + 31608);
    t12 = xsi_mem_cmp(t10, t7, 2U);
    if (t12 == 1)
        goto LAB38;

LAB42:    t13 = (t0 + 31610);
    t15 = xsi_mem_cmp(t13, t7, 2U);
    if (t15 == 1)
        goto LAB39;

LAB43:
LAB40:    xsi_set_current_line(305, ng0);
    t1 = (t0 + 31624);
    t4 = (t0 + 16600);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(306, ng0);
    t1 = (t0 + 16664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(307, ng0);
    t1 = (t0 + 7912U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (t9 / 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB36:    goto LAB6;

LAB33:    t1 = (t0 + 9032U);
    t4 = *((char **)t1);
    t24 = *((unsigned char *)t4);
    t25 = (t24 == (unsigned char)3);
    t2 = t25;
    goto LAB35;

LAB37:    xsi_set_current_line(290, ng0);
    t16 = (t0 + 31612);
    t18 = (t0 + 16600);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t16, 4U);
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(291, ng0);
    t1 = (t0 + 8232U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 16664);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(292, ng0);
    t1 = (t0 + 7752U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = xsi_vhdl_mod(t9, 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB36;

LAB38:    xsi_set_current_line(295, ng0);
    t1 = (t0 + 31616);
    t4 = (t0 + 16600);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(296, ng0);
    t1 = (t0 + 8232U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 16664);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(297, ng0);
    t1 = (t0 + 7752U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = (t9 / 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB36;

LAB39:    xsi_set_current_line(300, ng0);
    t1 = (t0 + 31620);
    t4 = (t0 + 16600);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(301, ng0);
    t1 = (t0 + 16664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(302, ng0);
    t1 = (t0 + 7912U);
    t3 = *((char **)t1);
    t9 = *((int *)t3);
    t12 = xsi_vhdl_mod(t9, 10);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t23, t12, 4);
    t4 = (t0 + 16728);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB36;

LAB44:;
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

LAB0:    xsi_set_current_line(316, ng0);
    t1 = (t0 + 6912U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 16232);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(318, ng0);
    t3 = (t0 + 8392U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 + 1);
    t3 = (t0 + 16792);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t6;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(319, ng0);
    t1 = (t0 + 8392U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 3);
    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(320, ng0);
    t1 = (t0 + 16792);
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

LAB0:    xsi_set_current_line(329, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 16248);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(330, ng0);
    t3 = (t0 + 9968U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(333, ng0);
    t6 = (t0 + 3592U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(354, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB5;

LAB7:    xsi_set_current_line(360, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t8 = (t5 == (unsigned char)2);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = (unsigned char)0;

LAB29:    if (t2 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB5;

LAB8:    xsi_set_current_line(335, ng0);
    t6 = (t0 + 8872U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    if (t12 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 8872U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB14;

LAB15:
LAB12:    xsi_set_current_line(350, ng0);
    t1 = (t0 + 9968U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB9;

LAB11:    xsi_set_current_line(336, ng0);
    t6 = (t0 + 16856);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(337, ng0);
    t1 = (t0 + 16920);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(341, ng0);
    t1 = (t0 + 9032U);
    t4 = *((char **)t1);
    t8 = *((unsigned char *)t4);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 9032U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB19;

LAB20:
LAB17:    goto LAB12;

LAB16:    xsi_set_current_line(342, ng0);
    t1 = (t0 + 16920);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(345, ng0);
    t1 = (t0 + 16856);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(346, ng0);
    t1 = (t0 + 16920);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB21:    xsi_set_current_line(355, ng0);
    t1 = (t0 + 16856);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(356, ng0);
    t1 = (t0 + 16920);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB24:    xsi_set_current_line(361, ng0);
    t1 = (t0 + 9968U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB25;

LAB27:    t1 = (t0 + 3752U);
    t4 = *((char **)t1);
    t9 = *((unsigned char *)t4);
    t11 = (t9 == (unsigned char)2);
    t2 = t11;
    goto LAB29;

}

static void work_a_3472350436_3212880686_p_4(char *t0)
{
    char t49[16];
    char t61[16];
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
    unsigned char t13;
    unsigned char t14;
    int t15;
    int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    int t54;
    int t55;
    int t56;
    char *t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    char *t62;
    char *t63;
    int t64;
    unsigned int t65;
    int t66;
    int t67;
    int t68;
    char *t69;

LAB0:    xsi_set_current_line(386, ng0);
    t1 = (t0 + 6592U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(392, ng0);
    t1 = (t0 + 6592U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(435, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB44;

LAB46:
LAB45:    xsi_set_current_line(453, ng0);
    t1 = (t0 + 6432U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB58;

LAB60:
LAB59:    xsi_set_current_line(481, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB70;

LAB72:
LAB71:    xsi_set_current_line(521, ng0);
    t1 = (t0 + 10088U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t1 = (t0 + 17112);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(522, ng0);
    t1 = (t0 + 10208U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t1 = (t0 + 17176);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(523, ng0);
    t1 = (t0 + 10328U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t1 = (t0 + 17240);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(525, ng0);
    t1 = (t0 + 10448U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t1 = (t0 + 17304);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(526, ng0);
    t1 = (t0 + 10568U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t1 = (t0 + 17368);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(527, ng0);
    t1 = (t0 + 10688U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t1 = (t0 + 17432);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(530, ng0);
    t1 = (t0 + 10928U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 17496);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 16264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(387, ng0);
    t3 = (t0 + 10928U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t3 = (t0 + 10928U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((unsigned char *)t3) = t6;
    xsi_set_current_line(388, ng0);
    t1 = (t0 + 10928U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 16984);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(393, ng0);
    t3 = (t0 + 3912U);
    t4 = *((char **)t3);
    t6 = *((unsigned char *)t4);
    t10 = (t6 == (unsigned char)3);
    if (t10 == 1)
        goto LAB11;

LAB12:    t5 = (unsigned char)0;

LAB13:    if (t5 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = (unsigned char)0;

LAB23:    if (t2 != 0)
        goto LAB19;

LAB20:
LAB9:    xsi_set_current_line(413, ng0);
    t1 = (t0 + 10448U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 >= 60);
    if (t2 != 0)
        goto LAB29;

LAB31:    t1 = (t0 + 10448U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t16 = (-(1));
    t2 = (t15 <= t16);
    if (t2 != 0)
        goto LAB32;

LAB33:
LAB30:    xsi_set_current_line(420, ng0);
    t1 = (t0 + 10568U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 >= 60);
    if (t2 != 0)
        goto LAB34;

LAB36:    t1 = (t0 + 10568U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t16 = (-(1));
    t2 = (t15 <= t16);
    if (t2 != 0)
        goto LAB37;

LAB38:
LAB35:    xsi_set_current_line(427, ng0);
    t1 = (t0 + 10688U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 >= 24);
    if (t2 != 0)
        goto LAB39;

LAB41:    t1 = (t0 + 10688U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t16 = (-(1));
    t2 = (t15 <= t16);
    if (t2 != 0)
        goto LAB42;

LAB43:
LAB40:    goto LAB6;

LAB8:    xsi_set_current_line(395, ng0);
    t3 = (t0 + 9032U);
    t8 = *((char **)t3);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    if (t14 != 0)
        goto LAB14;

LAB16:    t1 = (t0 + 9032U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB17;

LAB18:
LAB15:    goto LAB9;

LAB11:    t3 = (t0 + 8872U);
    t7 = *((char **)t3);
    t11 = *((unsigned char *)t7);
    t12 = (t11 == (unsigned char)3);
    t5 = t12;
    goto LAB13;

LAB14:    xsi_set_current_line(396, ng0);
    t3 = (t0 + 10688U);
    t9 = *((char **)t3);
    t15 = *((int *)t9);
    t16 = (t15 - 1);
    t3 = (t0 + 10688U);
    t17 = *((char **)t3);
    t3 = (t17 + 0);
    *((int *)t3) = t16;
    goto LAB15;

LAB17:    xsi_set_current_line(399, ng0);
    t1 = (t0 + 10568U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t16 = (t15 - 1);
    t1 = (t0 + 10568U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int *)t1) = t16;
    goto LAB15;

LAB19:    xsi_set_current_line(403, ng0);
    t1 = (t0 + 9032U);
    t7 = *((char **)t1);
    t12 = *((unsigned char *)t7);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB24;

LAB26:    t1 = (t0 + 9032U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB27;

LAB28:
LAB25:    goto LAB9;

LAB21:    t1 = (t0 + 8872U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t2 = t11;
    goto LAB23;

LAB24:    xsi_set_current_line(404, ng0);
    t1 = (t0 + 10688U);
    t8 = *((char **)t1);
    t15 = *((int *)t8);
    t16 = (t15 + 1);
    t1 = (t0 + 10688U);
    t9 = *((char **)t1);
    t1 = (t9 + 0);
    *((int *)t1) = t16;
    goto LAB25;

LAB27:    xsi_set_current_line(407, ng0);
    t1 = (t0 + 10568U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t16 = (t15 + 1);
    t1 = (t0 + 10568U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int *)t1) = t16;
    goto LAB25;

LAB29:    xsi_set_current_line(414, ng0);
    t1 = (t0 + 10448U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    goto LAB30;

LAB32:    xsi_set_current_line(416, ng0);
    t1 = (t0 + 10448U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 59;
    goto LAB30;

LAB34:    xsi_set_current_line(421, ng0);
    t1 = (t0 + 10568U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    goto LAB35;

LAB37:    xsi_set_current_line(423, ng0);
    t1 = (t0 + 10568U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 59;
    goto LAB35;

LAB39:    xsi_set_current_line(428, ng0);
    t1 = (t0 + 10688U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    goto LAB40;

LAB42:    xsi_set_current_line(430, ng0);
    t1 = (t0 + 10688U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 23;
    goto LAB40;

LAB44:    xsi_set_current_line(438, ng0);
    t3 = (t0 + 8872U);
    t4 = *((char **)t3);
    t6 = *((unsigned char *)t4);
    t10 = (t6 == (unsigned char)3);
    if (t10 == 1)
        goto LAB50;

LAB51:    t5 = (unsigned char)0;

LAB52:    if (t5 != 0)
        goto LAB47;

LAB49:    t1 = (t0 + 8872U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = (unsigned char)0;

LAB57:    if (t2 != 0)
        goto LAB53;

LAB54:
LAB48:    goto LAB45;

LAB47:    xsi_set_current_line(439, ng0);
    t3 = (t0 + 10088U);
    t8 = *((char **)t3);
    t15 = *((int *)t8);
    t3 = (t0 + 10448U);
    t9 = *((char **)t3);
    t3 = (t9 + 0);
    *((int *)t3) = t15;
    xsi_set_current_line(440, ng0);
    t1 = (t0 + 10208U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t1 = (t0 + 10568U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t15;
    xsi_set_current_line(441, ng0);
    t1 = (t0 + 10328U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t1 = (t0 + 10688U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t15;
    xsi_set_current_line(443, ng0);
    t1 = (t0 + 10808U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB48;

LAB50:    t3 = (t0 + 10808U);
    t7 = *((char **)t3);
    t11 = *((unsigned char *)t7);
    t12 = (t11 == (unsigned char)2);
    t5 = t12;
    goto LAB52;

LAB53:    xsi_set_current_line(447, ng0);
    t1 = (t0 + 10808U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB48;

LAB55:    t1 = (t0 + 10808U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t2 = t11;
    goto LAB57;

LAB58:    xsi_set_current_line(455, ng0);
    t3 = (t0 + 10088U);
    t4 = *((char **)t3);
    t15 = *((int *)t4);
    t16 = (t15 + 1);
    t3 = (t0 + 10088U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((int *)t3) = t16;
    xsi_set_current_line(456, ng0);
    t1 = (t0 + 17048);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(459, ng0);
    t1 = (t0 + 10088U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 == 60);
    if (t2 != 0)
        goto LAB61;

LAB63:
LAB62:    xsi_set_current_line(468, ng0);
    t1 = (t0 + 10208U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 == 60);
    if (t2 != 0)
        goto LAB64;

LAB66:
LAB65:    xsi_set_current_line(474, ng0);
    t1 = (t0 + 10328U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t2 = (t15 == 24);
    if (t2 != 0)
        goto LAB67;

LAB69:
LAB68:    goto LAB59;

LAB61:    xsi_set_current_line(460, ng0);
    t1 = (t0 + 10088U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(461, ng0);
    t1 = (t0 + 10208U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t16 = (t15 + 1);
    t1 = (t0 + 10208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t16;
    xsi_set_current_line(464, ng0);
    t1 = (t0 + 17048);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB62;

LAB64:    xsi_set_current_line(469, ng0);
    t1 = (t0 + 10208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(470, ng0);
    t1 = (t0 + 10328U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t16 = (t15 + 1);
    t1 = (t0 + 10328U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t16;
    goto LAB65;

LAB67:    xsi_set_current_line(475, ng0);
    t1 = (t0 + 10328U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    goto LAB68;

LAB70:    xsi_set_current_line(483, ng0);
    t3 = (t0 + 3272U);
    t4 = *((char **)t3);
    t6 = *((unsigned char *)t4);
    t10 = (t6 == (unsigned char)3);
    if (t10 == 1)
        goto LAB76;

LAB77:    t5 = (unsigned char)0;

LAB78:    if (t5 != 0)
        goto LAB73;

LAB75:
LAB74:    xsi_set_current_line(496, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB82;

LAB83:    t2 = (unsigned char)0;

LAB84:    if (t2 != 0)
        goto LAB79;

LAB81:
LAB80:    xsi_set_current_line(505, ng0);
    t1 = (t0 + 8872U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB88;

LAB89:    t2 = (unsigned char)0;

LAB90:    if (t2 != 0)
        goto LAB85;

LAB87:
LAB86:    xsi_set_current_line(512, ng0);
    t1 = (t0 + 9512U);
    t3 = *((char **)t1);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB100;

LAB101:    t6 = (unsigned char)0;

LAB102:    if (t6 == 1)
        goto LAB97;

LAB98:    t5 = (unsigned char)0;

LAB99:    if (t5 == 1)
        goto LAB94;

LAB95:    t2 = (unsigned char)0;

LAB96:    if (t2 != 0)
        goto LAB91;

LAB93:
LAB92:    goto LAB71;

LAB73:    xsi_set_current_line(484, ng0);
    t3 = (t0 + 10928U);
    t8 = *((char **)t3);
    t3 = (t8 + 0);
    *((unsigned char *)t3) = (unsigned char)2;
    xsi_set_current_line(490, ng0);
    t1 = (t0 + 10448U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(491, ng0);
    t1 = (t0 + 10568U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(492, ng0);
    t1 = (t0 + 10688U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB74;

LAB76:    t3 = (t0 + 8872U);
    t7 = *((char **)t3);
    t11 = *((unsigned char *)t7);
    t12 = (t11 == (unsigned char)3);
    t5 = t12;
    goto LAB78;

LAB79:    xsi_set_current_line(497, ng0);
    t1 = (t0 + 10928U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(501, ng0);
    t1 = (t0 + 10448U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB80;

LAB82:    t1 = (t0 + 8872U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t2 = t11;
    goto LAB84;

LAB85:    xsi_set_current_line(506, ng0);
    t1 = (t0 + 10448U);
    t7 = *((char **)t1);
    t15 = *((int *)t7);
    t1 = (t0 + 10088U);
    t8 = *((char **)t1);
    t1 = (t8 + 0);
    *((int *)t1) = t15;
    xsi_set_current_line(507, ng0);
    t1 = (t0 + 10568U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t1 = (t0 + 10208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t15;
    xsi_set_current_line(508, ng0);
    t1 = (t0 + 10688U);
    t3 = *((char **)t1);
    t15 = *((int *)t3);
    t1 = (t0 + 10328U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t15;
    goto LAB86;

LAB88:    t1 = (t0 + 3752U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t2 = t11;
    goto LAB90;

LAB91:    xsi_set_current_line(513, ng0);
    t43 = (t0 + 4552U);
    t44 = *((char **)t43);
    t45 = (0 - 0);
    t46 = (t45 * 1);
    t47 = (8U * t46);
    t48 = (0 + t47);
    t43 = (t44 + t48);
    t50 = (t49 + 0U);
    t51 = (t50 + 0U);
    *((int *)t51) = 7;
    t51 = (t50 + 4U);
    *((int *)t51) = 0;
    t51 = (t50 + 8U);
    *((int *)t51) = -1;
    t52 = (0 - 7);
    t53 = (t52 * -1);
    t53 = (t53 + 1);
    t51 = (t50 + 12U);
    *((unsigned int *)t51) = t53;
    t54 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t43, t49);
    t55 = (t54 - 48);
    t56 = (t55 * 10);
    t51 = (t0 + 4552U);
    t57 = *((char **)t51);
    t58 = (1 - 0);
    t53 = (t58 * 1);
    t59 = (8U * t53);
    t60 = (0 + t59);
    t51 = (t57 + t60);
    t62 = (t61 + 0U);
    t63 = (t62 + 0U);
    *((int *)t63) = 7;
    t63 = (t62 + 4U);
    *((int *)t63) = 0;
    t63 = (t62 + 8U);
    *((int *)t63) = -1;
    t64 = (0 - 7);
    t65 = (t64 * -1);
    t65 = (t65 + 1);
    t63 = (t62 + 12U);
    *((unsigned int *)t63) = t65;
    t66 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t51, t61);
    t67 = (t66 - 48);
    t68 = (t56 + t67);
    t63 = (t0 + 10328U);
    t69 = *((char **)t63);
    t63 = (t69 + 0);
    *((int *)t63) = t68;
    xsi_set_current_line(514, ng0);
    t1 = (t0 + 4552U);
    t3 = *((char **)t1);
    t15 = (2 - 0);
    t18 = (t15 * 1);
    t19 = (8U * t18);
    t20 = (0 + t19);
    t1 = (t3 + t20);
    t4 = (t49 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 7;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t16 = (0 - 7);
    t21 = (t16 * -1);
    t21 = (t21 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t21;
    t34 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t1, t49);
    t45 = (t34 - 48);
    t52 = (t45 * 10);
    t7 = (t0 + 4552U);
    t8 = *((char **)t7);
    t54 = (3 - 0);
    t21 = (t54 * 1);
    t24 = (8U * t21);
    t25 = (0 + t24);
    t7 = (t8 + t25);
    t9 = (t61 + 0U);
    t17 = (t9 + 0U);
    *((int *)t17) = 7;
    t17 = (t9 + 4U);
    *((int *)t17) = 0;
    t17 = (t9 + 8U);
    *((int *)t17) = -1;
    t55 = (0 - 7);
    t26 = (t55 * -1);
    t26 = (t26 + 1);
    t17 = (t9 + 12U);
    *((unsigned int *)t17) = t26;
    t56 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t61);
    t58 = (t56 - 48);
    t64 = (t52 + t58);
    t17 = (t0 + 10208U);
    t22 = *((char **)t17);
    t17 = (t22 + 0);
    *((int *)t17) = t64;
    xsi_set_current_line(515, ng0);
    t1 = (t0 + 4552U);
    t3 = *((char **)t1);
    t15 = (4 - 0);
    t18 = (t15 * 1);
    t19 = (8U * t18);
    t20 = (0 + t19);
    t1 = (t3 + t20);
    t4 = (t49 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 7;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t16 = (0 - 7);
    t21 = (t16 * -1);
    t21 = (t21 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t21;
    t34 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t1, t49);
    t45 = (t34 - 48);
    t52 = (t45 * 10);
    t7 = (t0 + 4552U);
    t8 = *((char **)t7);
    t54 = (5 - 0);
    t21 = (t54 * 1);
    t24 = (8U * t21);
    t25 = (0 + t24);
    t7 = (t8 + t25);
    t9 = (t61 + 0U);
    t17 = (t9 + 0U);
    *((int *)t17) = 7;
    t17 = (t9 + 4U);
    *((int *)t17) = 0;
    t17 = (t9 + 8U);
    *((int *)t17) = -1;
    t55 = (0 - 7);
    t26 = (t55 * -1);
    t26 = (t26 + 1);
    t17 = (t9 + 12U);
    *((unsigned int *)t17) = t26;
    t56 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t61);
    t58 = (t56 - 48);
    t64 = (t52 + t58);
    t17 = (t0 + 10088U);
    t22 = *((char **)t17);
    t17 = (t22 + 0);
    *((int *)t17) = t64;
    goto LAB92;

LAB94:    t32 = (t0 + 4552U);
    t33 = *((char **)t32);
    t34 = (8 - 0);
    t35 = (t34 * 1);
    t36 = (8U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = (t0 + 31644);
    t14 = 1;
    if (8U == 8U)
        goto LAB115;

LAB116:    t14 = 0;

LAB117:    t2 = t14;
    goto LAB96;

LAB97:    t22 = (t0 + 4552U);
    t23 = *((char **)t22);
    t16 = (7 - 0);
    t24 = (t16 * 1);
    t25 = (8U * t24);
    t26 = (0 + t25);
    t22 = (t23 + t26);
    t27 = (t0 + 31636);
    t13 = 1;
    if (8U == 8U)
        goto LAB109;

LAB110:    t13 = 0;

LAB111:    t5 = t13;
    goto LAB99;

LAB100:    t1 = (t0 + 4552U);
    t4 = *((char **)t1);
    t15 = (6 - 0);
    t18 = (t15 * 1);
    t19 = (8U * t18);
    t20 = (0 + t19);
    t1 = (t4 + t20);
    t7 = (t0 + 31628);
    t12 = 1;
    if (8U == 8U)
        goto LAB103;

LAB104:    t12 = 0;

LAB105:    t6 = t12;
    goto LAB102;

LAB103:    t21 = 0;

LAB106:    if (t21 < 8U)
        goto LAB107;
    else
        goto LAB105;

LAB107:    t9 = (t1 + t21);
    t17 = (t7 + t21);
    if (*((unsigned char *)t9) != *((unsigned char *)t17))
        goto LAB104;

LAB108:    t21 = (t21 + 1);
    goto LAB106;

LAB109:    t29 = 0;

LAB112:    if (t29 < 8U)
        goto LAB113;
    else
        goto LAB111;

LAB113:    t30 = (t22 + t29);
    t31 = (t27 + t29);
    if (*((unsigned char *)t30) != *((unsigned char *)t31))
        goto LAB110;

LAB114:    t29 = (t29 + 1);
    goto LAB112;

LAB115:    t40 = 0;

LAB118:    if (t40 < 8U)
        goto LAB119;
    else
        goto LAB117;

LAB119:    t41 = (t32 + t40);
    t42 = (t38 + t40);
    if (*((unsigned char *)t41) != *((unsigned char *)t42))
        goto LAB116;

LAB120:    t40 = (t40 + 1);
    goto LAB118;

}

static void work_a_3472350436_3212880686_p_5(char *t0)
{
    char t17[16];
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
    int t18;
    int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8, &&LAB9};

LAB0:    xsi_set_current_line(544, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 16280);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(546, ng0);
    t3 = (t0 + 5672U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(548, ng0);
    t6 = (t0 + 9192U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(556, ng0);
    t1 = (t0 + 17624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(557, ng0);
    t1 = (t0 + 17560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB5;

LAB7:    xsi_set_current_line(561, ng0);
    t1 = (t0 + 5192U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t8 = (t5 == (unsigned char)3);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = (unsigned char)0;

LAB22:    if (t2 != 0)
        goto LAB17;

LAB19:    t1 = (t0 + 5032U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB23;

LAB24:    xsi_set_current_line(567, ng0);
    t1 = (t0 + 17560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB5;

LAB8:    xsi_set_current_line(571, ng0);
    t1 = (t0 + 7432U);
    t3 = *((char **)t1);
    t18 = *((int *)t3);
    t19 = (t18 / 10);
    t20 = (t19 + 48);
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, t20, ((t22)));
    t4 = (t0 + 17752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 0U, 8U, 0LL);
    xsi_set_current_line(572, ng0);
    t1 = (t0 + 7432U);
    t3 = *((char **)t1);
    t18 = *((int *)t3);
    t19 = xsi_vhdl_mod(t18, 10);
    t20 = (t19 + 48);
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, t20, ((t22)));
    t4 = (t0 + 17752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 8U, 8U, 0LL);
    xsi_set_current_line(573, ng0);
    t1 = (t0 + 7272U);
    t3 = *((char **)t1);
    t18 = *((int *)t3);
    t19 = (t18 / 10);
    t20 = (t19 + 48);
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, t20, ((t22)));
    t4 = (t0 + 17752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 16U, 8U, 0LL);
    xsi_set_current_line(574, ng0);
    t1 = (t0 + 7272U);
    t3 = *((char **)t1);
    t18 = *((int *)t3);
    t19 = xsi_vhdl_mod(t18, 10);
    t20 = (t19 + 48);
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, t20, ((t22)));
    t4 = (t0 + 17752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    xsi_set_current_line(575, ng0);
    t1 = (t0 + 7112U);
    t3 = *((char **)t1);
    t18 = *((int *)t3);
    t19 = (t18 / 10);
    t20 = (t19 + 48);
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, t20, ((t22)));
    t4 = (t0 + 17752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 32U, 8U, 0LL);
    xsi_set_current_line(576, ng0);
    t1 = (t0 + 7112U);
    t3 = *((char **)t1);
    t18 = *((int *)t3);
    t19 = xsi_vhdl_mod(t18, 10);
    t20 = (t19 + 48);
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, t20, ((t22)));
    t4 = (t0 + 17752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 40U, 8U, 0LL);
    xsi_set_current_line(578, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB25;

LAB27:    t1 = (t0 + 9352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB34;

LAB35:
LAB26:    xsi_set_current_line(588, ng0);
    t1 = (t0 + 17560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(589, ng0);
    t1 = (t0 + 5192U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t8 = (t5 == (unsigned char)2);
    if (t8 == 1)
        goto LAB45;

LAB46:    t2 = (unsigned char)0;

LAB47:    if (t2 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB5;

LAB9:    xsi_set_current_line(599, ng0);
    t1 = (t0 + 17688);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(600, ng0);
    t1 = (t0 + 17560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(601, ng0);
    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t1 = (t0 + 4872U);
    t4 = *((char **)t1);
    t18 = *((int *)t4);
    t19 = (t18 - 0);
    t22 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t18);
    t23 = (8U * t22);
    t24 = (0 + t23);
    t1 = (t3 + t24);
    t6 = (t0 + 17880);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB5;

LAB10:    xsi_set_current_line(604, ng0);
    t1 = (t0 + 17560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB11:    xsi_set_current_line(549, ng0);
    t6 = (t0 + 5512U);
    t10 = *((char **)t6);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    if (t12 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(553, ng0);
    t1 = (t0 + 17560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(550, ng0);
    t6 = (t0 + 17560);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(551, ng0);
    t1 = (t0 + 17624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(562, ng0);
    t1 = (t0 + 17560);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    t1 = (t0 + 5352U);
    t4 = *((char **)t1);
    t9 = *((unsigned char *)t4);
    t11 = (t9 == (unsigned char)3);
    t2 = t11;
    goto LAB22;

LAB23:    xsi_set_current_line(564, ng0);
    t1 = (t0 + 17560);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(565, ng0);
    t1 = (t0 + 17688);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB25:    xsi_set_current_line(579, ng0);
    t1 = (t0 + 31652);
    t8 = (8U != 8U);
    if (t8 == 1)
        goto LAB28;

LAB29:    t6 = (t0 + 17752);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_delta(t6, 48U, 8U, 0LL);
    xsi_set_current_line(580, ng0);
    t1 = (t0 + 31660);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB30;

LAB31:    t4 = (t0 + 17752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 56U, 8U, 0LL);
    xsi_set_current_line(581, ng0);
    t1 = (t0 + 31668);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB32;

LAB33:    t4 = (t0 + 17752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 64U, 8U, 0LL);
    goto LAB26;

LAB28:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB29;

LAB30:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB31;

LAB32:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB33;

LAB34:    xsi_set_current_line(583, ng0);
    t1 = (t0 + 31676);
    t8 = (8U != 8U);
    if (t8 == 1)
        goto LAB36;

LAB37:    t6 = (t0 + 17752);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_delta(t6, 48U, 8U, 0LL);
    xsi_set_current_line(584, ng0);
    t1 = (t0 + 31684);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB38;

LAB39:    t4 = (t0 + 17752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 56U, 8U, 0LL);
    xsi_set_current_line(585, ng0);
    t1 = (t0 + 31692);
    t2 = (8U != 8U);
    if (t2 == 1)
        goto LAB40;

LAB41:    t4 = (t0 + 17752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t4, 64U, 8U, 0LL);
    goto LAB26;

LAB36:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB37;

LAB38:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB39;

LAB40:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB41;

LAB42:    xsi_set_current_line(590, ng0);
    t1 = (t0 + 4872U);
    t6 = *((char **)t1);
    t18 = *((int *)t6);
    t12 = (t18 < 8);
    if (t12 != 0)
        goto LAB48;

LAB50:    xsi_set_current_line(593, ng0);
    t1 = (t0 + 17816);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(594, ng0);
    t1 = (t0 + 17560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB49:    goto LAB43;

LAB45:    t1 = (t0 + 5352U);
    t4 = *((char **)t1);
    t9 = *((unsigned char *)t4);
    t11 = (t9 == (unsigned char)3);
    t2 = t11;
    goto LAB47;

LAB48:    xsi_set_current_line(591, ng0);
    t1 = (t0 + 4872U);
    t7 = *((char **)t1);
    t19 = *((int *)t7);
    t20 = (t19 + 1);
    t1 = (t0 + 17816);
    t10 = (t1 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = t20;
    xsi_driver_first_trans_fast(t1);
    goto LAB49;

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

LAB0:    xsi_set_current_line(613, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 16296);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(614, ng0);
    t3 = (t0 + 6312U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(616, ng0);
    t6 = (t0 + 1832U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    if (t9 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(619, ng0);
    t1 = (t0 + 17944);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(620, ng0);
    t1 = (t0 + 18008);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB5;

LAB7:    xsi_set_current_line(624, ng0);
    t1 = (t0 + 5992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(627, ng0);
    t1 = (t0 + 17944);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB5;

LAB8:    xsi_set_current_line(631, ng0);
    t1 = (t0 + 5832U);
    t3 = *((char **)t1);
    t1 = (t0 + 6152U);
    t4 = *((char **)t1);
    t14 = *((int *)t4);
    t15 = (t14 - 0);
    t16 = (t15 * 1);
    t17 = (8U * t16);
    t18 = (0U + t17);
    t1 = (t0 + 18072);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_delta(t1, t18, 8U, 0LL);
    xsi_set_current_line(632, ng0);
    t1 = (t0 + 6152U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t2 = (t14 < 8);
    if (t2 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(636, ng0);
    t1 = (t0 + 18008);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(638, ng0);
    t1 = (t0 + 18136);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);

LAB17:    xsi_set_current_line(640, ng0);
    t1 = (t0 + 17944);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB9:    xsi_set_current_line(643, ng0);
    t1 = (t0 + 17944);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB10:    xsi_set_current_line(617, ng0);
    t6 = (t0 + 17944);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    goto LAB11;

LAB13:    xsi_set_current_line(625, ng0);
    t1 = (t0 + 17944);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(633, ng0);
    t1 = (t0 + 6152U);
    t4 = *((char **)t1);
    t15 = *((int *)t4);
    t19 = (t15 + 1);
    t1 = (t0 + 18136);
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

LAB0:    xsi_set_current_line(650, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 8872U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t6, t8);
    t1 = (t0 + 18200);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 16312);
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

LAB0:    xsi_set_current_line(653, ng0);

LAB3:    t1 = (t0 + 8872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 18264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 16328);
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

LAB0:    xsi_set_current_line(656, ng0);

LAB3:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 18328);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 16344);
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

LAB0:    xsi_set_current_line(657, ng0);

LAB3:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 18392);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 16360);
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

LAB0:    xsi_set_current_line(658, ng0);

LAB3:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 18456);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 16376);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(661, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9352U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 18520);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 16392);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_13(char *t0)
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

LAB0:    xsi_set_current_line(664, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 30848U);
    t4 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 8, 1, t4);
    t7 = (8U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 18584);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 8U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 16408);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(665, ng0);

LAB3:    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 18648);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 16424);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_15(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(666, ng0);

LAB3:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 18712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 16440);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3472350436_3212880686_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(667, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 18776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 16456);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3472350436_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3472350436_3212880686_p_0,(void *)work_a_3472350436_3212880686_p_1,(void *)work_a_3472350436_3212880686_p_2,(void *)work_a_3472350436_3212880686_p_3,(void *)work_a_3472350436_3212880686_p_4,(void *)work_a_3472350436_3212880686_p_5,(void *)work_a_3472350436_3212880686_p_6,(void *)work_a_3472350436_3212880686_p_7,(void *)work_a_3472350436_3212880686_p_8,(void *)work_a_3472350436_3212880686_p_9,(void *)work_a_3472350436_3212880686_p_10,(void *)work_a_3472350436_3212880686_p_11,(void *)work_a_3472350436_3212880686_p_12,(void *)work_a_3472350436_3212880686_p_13,(void *)work_a_3472350436_3212880686_p_14,(void *)work_a_3472350436_3212880686_p_15,(void *)work_a_3472350436_3212880686_p_16};
	xsi_register_didat("work_a_3472350436_3212880686", "isim/MECHANICAL_CLOCK_tb3_isim_beh.exe.sim/work/a_3472350436_3212880686.didat");
	xsi_register_executes(pe);
}
