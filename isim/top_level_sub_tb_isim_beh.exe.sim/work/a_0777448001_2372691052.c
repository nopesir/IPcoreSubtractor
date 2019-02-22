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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/luigiferrettino/Desktop/subtractor_s_8/top_level_sub_tb.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_2863756418437601506_91900896(char *, char *, char *, char *, char *);


static void work_a_0777448001_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 3976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(66, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 3784);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(68, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 3784);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0777448001_2372691052_p_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    int t16;

LAB0:    t1 = (t0 + 4224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2976U);
    t3 = (t0 + 8833);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 11;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (11 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);

LAB4:    t2 = (t0 + 2976U);
    t10 = std_textio_endfile(t2);
    t11 = (!(t10));
    if (t11 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2976U);
    std_textio_file_close(t2);
    xsi_set_current_line(98, ng0);

LAB20:    *((char **)t1) = &&LAB21;

LAB1:    return;
LAB5:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 2288U);
    t4 = *((char **)t3);
    t8 = *((int *)t4);
    t12 = (t8 == 6);
    if (t12 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(87, ng0);

LAB13:    t2 = (t0 + 5040);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 5232);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB9;

LAB11:    t6 = (t0 + 5040);
    *((int *)t6) = 0;
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4032);
    t3 = (t0 + 2976U);
    t4 = (t0 + 3256U);
    std_textio_readline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4032);
    t3 = (t0 + 3256U);
    t4 = (t0 + 2408U);
    t6 = *((char **)t4);
    t4 = (t0 + 8584U);
    ieee_p_3564397177_sub_2863756418437601506_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t2 = (t0 + 5296);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4032);
    t3 = (t0 + 2976U);
    t4 = (t0 + 3256U);
    std_textio_readline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4032);
    t3 = (t0 + 3256U);
    t4 = (t0 + 2408U);
    t6 = *((char **)t4);
    t4 = (t0 + 8584U);
    ieee_p_3564397177_sub_2863756418437601506_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t2 = (t0 + 5360);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t16 = (t8 + 1);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t16;
    goto LAB4;

LAB12:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB15;

LAB16:    t10 = (unsigned char)0;

LAB17:    if (t10 == 1)
        goto LAB11;
    else
        goto LAB13;

LAB14:    goto LAB12;

LAB15:    t3 = (t0 + 1312U);
    t15 = xsi_signal_has_event(t3);
    t10 = t15;
    goto LAB17;

LAB18:    goto LAB2;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

}

static void work_a_0777448001_2372691052_p_2(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;

LAB0:    t1 = (t0 + 4472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3080U);
    t3 = (t0 + 8844);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 12;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (12 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 8856);
    t4 = (t0 + 5424);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(111, ng0);

LAB6:    t2 = (t0 + 5056);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t6 = (t0 + 5056);
    *((int *)t6) = 0;
    xsi_set_current_line(112, ng0);

LAB11:    t2 = (t0 + 3080U);
    t12 = std_textio_endfile(t2);
    t13 = (!(t12));
    if (t13 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3080U);
    std_textio_file_close(t2);
    xsi_set_current_line(120, ng0);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB5:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB8;

LAB9:    t12 = (unsigned char)0;

LAB10:    if (t12 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t3 = (t0 + 1312U);
    t15 = xsi_signal_has_event(t3);
    t12 = t15;
    goto LAB10;

LAB12:    xsi_set_current_line(113, ng0);

LAB17:    t3 = (t0 + 5072);
    *((int *)t3) = 1;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB13:;
LAB15:    t7 = (t0 + 5072);
    *((int *)t7) = 0;
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4280);
    t3 = (t0 + 3080U);
    t4 = (t0 + 3328U);
    std_textio_readline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4280);
    t3 = (t0 + 3328U);
    t4 = (t0 + 2528U);
    t6 = *((char **)t4);
    t4 = (t0 + 8600U);
    ieee_p_3564397177_sub_2863756418437601506_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    t2 = (t0 + 5424);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    memcpy(t10, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB16:    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB19;

LAB20:    t14 = (unsigned char)0;

LAB21:    if (t14 == 1)
        goto LAB15;
    else
        goto LAB17;

LAB18:    goto LAB16;

LAB19:    t4 = (t0 + 1312U);
    t17 = xsi_signal_has_event(t4);
    t14 = t17;
    goto LAB21;

LAB22:    goto LAB2;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

}

static void work_a_0777448001_2372691052_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int64 t16;

LAB0:    t1 = (t0 + 4720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);

LAB6:    t2 = (t0 + 5088);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t9 = (t0 + 5088);
    *((int *)t9) = 0;
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t3 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t3 = 0;

LAB16:    if ((!(t3)) != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 5488);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB12:    xsi_set_current_line(135, ng0);
    t16 = (1 * 1000LL);
    t2 = (t0 + 4528);
    xsi_process_wait(t2, t16);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB5:    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 1312U);
    t8 = xsi_signal_has_event(t4);
    t3 = t8;
    goto LAB10;

LAB11:    xsi_set_current_line(130, ng0);
    t11 = (t0 + 5488);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    goto LAB12;

LAB14:    t10 = 0;

LAB17:    if (t10 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t2 = (t4 + t10);
    t9 = (t5 + t10);
    if (*((unsigned char *)t2) != *((unsigned char *)t9))
        goto LAB15;

LAB19:    t10 = (t10 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 != (unsigned char)3);
    if (t6 == 0)
        goto LAB24;

LAB25:    goto LAB2;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    t2 = (t0 + 8864);
    xsi_report(t2, 20U, (unsigned char)2);
    goto LAB25;

}


extern void work_a_0777448001_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0777448001_2372691052_p_0,(void *)work_a_0777448001_2372691052_p_1,(void *)work_a_0777448001_2372691052_p_2,(void *)work_a_0777448001_2372691052_p_3};
	xsi_register_didat("work_a_0777448001_2372691052", "isim/top_level_sub_tb_isim_beh.exe.sim/work/a_0777448001_2372691052.didat");
	xsi_register_executes(pe);
}
