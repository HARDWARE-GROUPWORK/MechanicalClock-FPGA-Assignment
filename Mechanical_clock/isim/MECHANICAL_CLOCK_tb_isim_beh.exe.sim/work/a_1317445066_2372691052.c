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
static const char *ng0 = "C:/Users/ASUS/Desktop/FPGA_Project/Mechanical_clock/MECHANICAL_CLOCK_tb.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_1317445066_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1317445066_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t3 = (20 * 1000000000LL);
    t2 = (t0 + 4328);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5216);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);
    t3 = (200 * 1000000LL);
    t2 = (t0 + 4328);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5216);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);
    t3 = (20 * 1000000000LL);
    t2 = (t0 + 4328);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 5216);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(126, ng0);
    t3 = (200 * 1000000LL);
    t2 = (t0 + 4328);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 5216);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(129, ng0);
    t3 = (200 * 1000000LL);
    t2 = (t0 + 4328);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(133, ng0);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    goto LAB2;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

}

static void work_a_1317445066_2372691052_p_2(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int t8;
    int t9;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(143, ng0);
    t7 = (20 * 1000000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(145, ng0);
    t7 = (0.22500000000000001 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 8940);
    *((int *)t2) = 0;
    t3 = (t0 + 8944);
    *((int *)t3) = 16;
    t8 = 0;
    t9 = 16;

LAB12:    if (t8 <= t9)
        goto LAB13;

LAB15:    xsi_set_current_line(176, ng0);
    t7 = (100 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB59:    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 8940);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t10, *((int *)t4), 8);
    t6 = (t0 + 3048U);
    t11 = *((char **)t6);
    t6 = (t11 + 0);
    t12 = (t10 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    memcpy(t6, t5, t13);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(153, ng0);
    t7 = (104.15000000000001 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 8940);
    t8 = *((int *)t2);
    t3 = (t0 + 8944);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB15;

LAB56:    t14 = (t8 + 1);
    t8 = t14;
    t4 = (t0 + 8940);
    *((int *)t4) = t8;
    goto LAB12;

LAB16:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t14 = (0 - 7);
    t13 = (t14 * -1);
    t15 = (1U * t13);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(156, ng0);
    t7 = (104.15000000000001 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t14 = (1 - 7);
    t13 = (t14 * -1);
    t15 = (1U * t13);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(158, ng0);
    t7 = (104.15000000000001 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t14 = (2 - 7);
    t13 = (t14 * -1);
    t15 = (1U * t13);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(160, ng0);
    t7 = (104.15000000000001 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t14 = (3 - 7);
    t13 = (t14 * -1);
    t15 = (1U * t13);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(162, ng0);
    t7 = (104.15000000000001 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t14 = (4 - 7);
    t13 = (t14 * -1);
    t15 = (1U * t13);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(164, ng0);
    t7 = (104.15000000000001 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t14 = (5 - 7);
    t13 = (t14 * -1);
    t15 = (1U * t13);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(166, ng0);
    t7 = (104.15000000000001 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t14 = (6 - 7);
    t13 = (t14 * -1);
    t15 = (1U * t13);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(168, ng0);
    t7 = (104.15000000000001 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t14 = (7 - 7);
    t13 = (t14 * -1);
    t15 = (1U * t13);
    t16 = (0 + t15);
    t2 = (t3 + t16);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(170, ng0);
    t7 = (104.15000000000001 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(173, ng0);
    t7 = (104.15000000000001 * 1000000LL);
    t2 = (t0 + 4576);
    xsi_process_wait(t2, t7);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    goto LAB14;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB57:    xsi_set_current_line(177, ng0);

LAB63:    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB58:    goto LAB57;

LAB60:    goto LAB58;

LAB61:    goto LAB2;

LAB62:    goto LAB61;

LAB64:    goto LAB62;

}


extern void work_a_1317445066_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1317445066_2372691052_p_0,(void *)work_a_1317445066_2372691052_p_1,(void *)work_a_1317445066_2372691052_p_2};
	xsi_register_didat("work_a_1317445066_2372691052", "isim/MECHANICAL_CLOCK_tb_isim_beh.exe.sim/work/a_1317445066_2372691052.didat");
	xsi_register_executes(pe);
}
