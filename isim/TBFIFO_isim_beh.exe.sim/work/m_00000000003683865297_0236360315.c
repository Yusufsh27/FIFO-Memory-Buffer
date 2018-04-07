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
static const char *ng0 = "C:/Users/sani/Dropbox/School/College/4.Senior/First Semester/CompE470/Homeowrks/HomeWork4/FIFO.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};



static void Always_45_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t11[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 4560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5624);
    *((int *)t2) = 1;
    t3 = (t0 + 4592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t6 = (t0 + 3480);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 608);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t9 = (t8 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t10);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB9;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    memset(t5, 0, 8);
    t26 = (t11 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t11);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t26) != 0)
        goto LAB12;

LAB13:    t33 = (t5 + 4);
    t34 = *((unsigned int *)t5);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB14;

LAB15:    t38 = *((unsigned int *)t5);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t33) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t5) > 0)
        goto LAB20;

LAB21:    memcpy(t4, t42, 8);

LAB22:    t43 = (t0 + 2360);
    xsi_vlogvar_assign_value(t43, t4, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB26;

LAB23:    if (t22 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t11) = 1;

LAB26:    memset(t5, 0, 8);
    t12 = (t11 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t11);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t12) != 0)
        goto LAB29;

LAB30:    t26 = (t5 + 4);
    t34 = *((unsigned int *)t5);
    t35 = *((unsigned int *)t26);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB31;

LAB32:    t38 = *((unsigned int *)t5);
    t39 = (~(t38));
    t40 = *((unsigned int *)t26);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t26) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t5) > 0)
        goto LAB37;

LAB38:    memcpy(t4, t33, 8);

LAB39:    t37 = (t0 + 2520);
    xsi_vlogvar_assign_value(t37, t4, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 608);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t8, 32, t7, 32);
    memset(t44, 0, 8);
    t9 = (t6 + 4);
    t10 = (t11 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t11);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t10);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB43;

LAB40:    if (t22 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t44) = 1;

LAB43:    memset(t5, 0, 8);
    t25 = (t44 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    t29 = *((unsigned int *)t44);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t25) != 0)
        goto LAB46;

LAB47:    t32 = (t5 + 4);
    t34 = *((unsigned int *)t5);
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB48;

LAB49:    t38 = *((unsigned int *)t5);
    t39 = (~(t38));
    t40 = *((unsigned int *)t32);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t32) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t5) > 0)
        goto LAB54;

LAB55:    memcpy(t4, t37, 8);

LAB56:    t42 = (t0 + 2680);
    xsi_vlogvar_assign_value(t42, t4, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB60;

LAB57:    if (t22 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t11) = 1;

LAB60:    memset(t5, 0, 8);
    t12 = (t11 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t11);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t12) != 0)
        goto LAB63;

LAB64:    t26 = (t5 + 4);
    t34 = *((unsigned int *)t5);
    t35 = *((unsigned int *)t26);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB65;

LAB66:    t38 = *((unsigned int *)t5);
    t39 = (~(t38));
    t40 = *((unsigned int *)t26);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t26) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t5) > 0)
        goto LAB71;

LAB72:    memcpy(t4, t33, 8);

LAB73:    t37 = (t0 + 2840);
    xsi_vlogvar_assign_value(t37, t4, 0, 0, 1);
    goto LAB2;

LAB8:    t25 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t5) = 1;
    goto LAB13;

LAB12:    t32 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB13;

LAB14:    t37 = ((char*)((ng1)));
    goto LAB15;

LAB16:    t42 = ((char*)((ng2)));
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t4, 32, t37, 32, t42, 32);
    goto LAB22;

LAB20:    memcpy(t4, t37, 8);
    goto LAB22;

LAB25:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t5) = 1;
    goto LAB30;

LAB29:    t25 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB30;

LAB31:    t32 = ((char*)((ng1)));
    goto LAB32;

LAB33:    t33 = ((char*)((ng2)));
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t4, 32, t32, 32, t33, 32);
    goto LAB39;

LAB37:    memcpy(t4, t32, 8);
    goto LAB39;

LAB42:    t12 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t5) = 1;
    goto LAB47;

LAB46:    t26 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB47;

LAB48:    t33 = ((char*)((ng1)));
    goto LAB49;

LAB50:    t37 = ((char*)((ng2)));
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t4, 32, t33, 32, t37, 32);
    goto LAB56;

LAB54:    memcpy(t4, t33, 8);
    goto LAB56;

LAB59:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB60;

LAB61:    *((unsigned int *)t5) = 1;
    goto LAB64;

LAB63:    t25 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB64;

LAB65:    t32 = ((char*)((ng1)));
    goto LAB66;

LAB67:    t33 = ((char*)((ng2)));
    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t4, 32, t32, 32, t33, 32);
    goto LAB73;

LAB71:    memcpy(t4, t32, 8);
    goto LAB73;

}

static void Always_53_1(char *t0)
{
    char t4[8];
    char t21[8];
    char t36[8];
    char t44[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5640);
    *((int *)t2) = 1;
    t3 = (t0 + 4840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t5 = (t0 + 1480U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t2) != 0)
        goto LAB16;

LAB17:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB18;

LAB19:    memcpy(t44, t4, 8);

LAB20:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(54, ng0);

LAB13:    xsi_set_current_line(55, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB16:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB17;

LAB18:    t12 = (t0 + 2520);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t21, 0, 8);
    t20 = (t19 + 4);
    t17 = *((unsigned int *)t20);
    t18 = (~(t17));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t18);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t20) == 0)
        goto LAB21;

LAB23:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;

LAB24:    t26 = (t21 + 4);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    *((unsigned int *)t21) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB26;

LAB25:    t34 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    memset(t36, 0, 8);
    t37 = (t21 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t21);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t37) != 0)
        goto LAB29;

LAB30:    t45 = *((unsigned int *)t4);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t4 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB20;

LAB21:    *((unsigned int *)t21) = 1;
    goto LAB24;

LAB26:    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB25;

LAB27:    *((unsigned int *)t36) = 1;
    goto LAB30;

LAB29:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB30;

LAB31:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t4 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t4);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB33;

LAB34:    xsi_set_current_line(58, ng0);

LAB37:    xsi_set_current_line(59, ng0);
    t82 = (t0 + 3640);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    t86 = (t0 + 3640);
    t87 = (t86 + 72U);
    t88 = *((char **)t87);
    t89 = (t0 + 3640);
    t90 = (t89 + 64U);
    t91 = *((char **)t90);
    t92 = (t0 + 3320);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    xsi_vlog_generic_get_array_select_value(t85, 8, t84, t88, t91, 2, 1, t94, 8, 2);
    t95 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t95, t85, 0, 0, 8, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 8, t6, 32);
    t12 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 8, t6, 32);
    t12 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    goto LAB36;

}

static void Always_66_2(char *t0)
{
    char t4[8];
    char t21[8];
    char t36[8];
    char t44[8];
    char t84[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    int t97;
    char *t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    int t105;

LAB0:    t1 = (t0 + 5056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5656);
    *((int *)t2) = 1;
    t3 = (t0 + 5088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t5 = (t0 + 1480U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t2) != 0)
        goto LAB16;

LAB17:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB18;

LAB19:    memcpy(t44, t4, 8);

LAB20:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(67, ng0);

LAB13:    xsi_set_current_line(68, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB16:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB17;

LAB18:    t12 = (t0 + 2360);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t21, 0, 8);
    t20 = (t19 + 4);
    t17 = *((unsigned int *)t20);
    t18 = (~(t17));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t18);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t20) == 0)
        goto LAB21;

LAB23:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;

LAB24:    t26 = (t21 + 4);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    *((unsigned int *)t21) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB26;

LAB25:    t34 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    memset(t36, 0, 8);
    t37 = (t21 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t21);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t37) != 0)
        goto LAB29;

LAB30:    t45 = *((unsigned int *)t4);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t4 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB20;

LAB21:    *((unsigned int *)t21) = 1;
    goto LAB24;

LAB26:    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB25;

LAB27:    *((unsigned int *)t36) = 1;
    goto LAB30;

LAB29:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB30;

LAB31:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t4 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t4);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB33;

LAB34:    xsi_set_current_line(70, ng0);

LAB37:    xsi_set_current_line(71, ng0);
    t82 = (t0 + 1960U);
    t83 = *((char **)t82);
    t82 = (t0 + 3640);
    t86 = (t0 + 3640);
    t87 = (t86 + 72U);
    t88 = *((char **)t87);
    t89 = (t0 + 3640);
    t90 = (t89 + 64U);
    t91 = *((char **)t90);
    t92 = (t0 + 3160);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    xsi_vlog_generic_convert_array_indices(t84, t85, t88, t91, 2, 1, t94, 8, 2);
    t95 = (t84 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (!(t96));
    t98 = (t85 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (!(t99));
    t101 = (t97 && t100);
    if (t101 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 8, t6, 32);
    t12 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 8, t6, 32);
    t12 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    goto LAB36;

LAB38:    t102 = *((unsigned int *)t84);
    t103 = *((unsigned int *)t85);
    t104 = (t102 - t103);
    t105 = (t104 + 1);
    xsi_vlogvar_wait_assign_value(t82, t83, 0, *((unsigned int *)t85), t105, 0LL);
    goto LAB39;

}

static void Always_77_3(char *t0)
{
    char t4[8];
    char t21[8];
    char t36[8];
    char t44[8];
    char t76[8];
    char t90[8];
    char t101[8];
    char t122[8];
    char t130[8];
    char t162[8];
    char t170[8];
    char t211[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    int t194;
    int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    char *t210;
    char *t212;
    char *t213;
    char *t214;
    char *t215;
    char *t216;
    char *t217;
    char *t218;
    char *t219;
    char *t220;
    char *t221;

LAB0:    t1 = (t0 + 5304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5672);
    *((int *)t2) = 1;
    t3 = (t0 + 5336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    t5 = (t0 + 1480U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t2) != 0)
        goto LAB16;

LAB17:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB18;

LAB19:    memcpy(t44, t4, 8);

LAB20:    memset(t76, 0, 8);
    t77 = (t44 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t44);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t77) != 0)
        goto LAB36;

LAB37:    t84 = (t76 + 4);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t84);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB38;

LAB39:    memcpy(t170, t76, 8);

LAB40:    t202 = (t170 + 4);
    t203 = *((unsigned int *)t202);
    t204 = (~(t203));
    t205 = *((unsigned int *)t170);
    t206 = (t205 & t204);
    t207 = (t206 != 0);
    if (t207 > 0)
        goto LAB68;

LAB69:
LAB70:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(78, ng0);

LAB13:    xsi_set_current_line(79, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB16:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB17;

LAB18:    t12 = (t0 + 2360);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t21, 0, 8);
    t20 = (t19 + 4);
    t17 = *((unsigned int *)t20);
    t18 = (~(t17));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t18);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t20) == 0)
        goto LAB21;

LAB23:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;

LAB24:    t26 = (t21 + 4);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    *((unsigned int *)t21) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB26;

LAB25:    t34 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    memset(t36, 0, 8);
    t37 = (t21 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t21);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t37) != 0)
        goto LAB29;

LAB30:    t45 = *((unsigned int *)t4);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t4 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB20;

LAB21:    *((unsigned int *)t21) = 1;
    goto LAB24;

LAB26:    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB25;

LAB27:    *((unsigned int *)t36) = 1;
    goto LAB30;

LAB29:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB30;

LAB31:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t4 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t4);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB33;

LAB34:    *((unsigned int *)t76) = 1;
    goto LAB37;

LAB36:    t83 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB37;

LAB38:    t88 = (t0 + 1800U);
    t89 = *((char **)t88);
    memset(t90, 0, 8);
    t88 = (t89 + 4);
    t91 = *((unsigned int *)t88);
    t92 = (~(t91));
    t93 = *((unsigned int *)t89);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t88) != 0)
        goto LAB43;

LAB44:    t97 = (t90 + 4);
    t98 = *((unsigned int *)t90);
    t99 = *((unsigned int *)t97);
    t100 = (t98 || t99);
    if (t100 > 0)
        goto LAB45;

LAB46:    memcpy(t130, t90, 8);

LAB47:    memset(t162, 0, 8);
    t163 = (t130 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t130);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t163) != 0)
        goto LAB63;

LAB64:    t171 = *((unsigned int *)t76);
    t172 = *((unsigned int *)t162);
    t173 = (t171 & t172);
    *((unsigned int *)t170) = t173;
    t174 = (t76 + 4);
    t175 = (t162 + 4);
    t176 = (t170 + 4);
    t177 = *((unsigned int *)t174);
    t178 = *((unsigned int *)t175);
    t179 = (t177 | t178);
    *((unsigned int *)t176) = t179;
    t180 = *((unsigned int *)t176);
    t181 = (t180 != 0);
    if (t181 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB40;

LAB41:    *((unsigned int *)t90) = 1;
    goto LAB44;

LAB43:    t96 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB44;

LAB45:    t102 = (t0 + 2520);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t101, 0, 8);
    t105 = (t104 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t104);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t105) == 0)
        goto LAB48;

LAB50:    t111 = (t101 + 4);
    *((unsigned int *)t101) = 1;
    *((unsigned int *)t111) = 1;

LAB51:    t112 = (t101 + 4);
    t113 = (t104 + 4);
    t114 = *((unsigned int *)t104);
    t115 = (~(t114));
    *((unsigned int *)t101) = t115;
    *((unsigned int *)t112) = 0;
    if (*((unsigned int *)t113) != 0)
        goto LAB53;

LAB52:    t120 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t120 & 1U);
    t121 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t121 & 1U);
    memset(t122, 0, 8);
    t123 = (t101 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t101);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t123) != 0)
        goto LAB56;

LAB57:    t131 = *((unsigned int *)t90);
    t132 = *((unsigned int *)t122);
    t133 = (t131 & t132);
    *((unsigned int *)t130) = t133;
    t134 = (t90 + 4);
    t135 = (t122 + 4);
    t136 = (t130 + 4);
    t137 = *((unsigned int *)t134);
    t138 = *((unsigned int *)t135);
    t139 = (t137 | t138);
    *((unsigned int *)t136) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 != 0);
    if (t141 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB47;

LAB48:    *((unsigned int *)t101) = 1;
    goto LAB51;

LAB53:    t116 = *((unsigned int *)t101);
    t117 = *((unsigned int *)t113);
    *((unsigned int *)t101) = (t116 | t117);
    t118 = *((unsigned int *)t112);
    t119 = *((unsigned int *)t113);
    *((unsigned int *)t112) = (t118 | t119);
    goto LAB52;

LAB54:    *((unsigned int *)t122) = 1;
    goto LAB57;

LAB56:    t129 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB57;

LAB58:    t142 = *((unsigned int *)t130);
    t143 = *((unsigned int *)t136);
    *((unsigned int *)t130) = (t142 | t143);
    t144 = (t90 + 4);
    t145 = (t122 + 4);
    t146 = *((unsigned int *)t90);
    t147 = (~(t146));
    t148 = *((unsigned int *)t144);
    t149 = (~(t148));
    t150 = *((unsigned int *)t122);
    t151 = (~(t150));
    t152 = *((unsigned int *)t145);
    t153 = (~(t152));
    t154 = (t147 & t149);
    t155 = (t151 & t153);
    t156 = (~(t154));
    t157 = (~(t155));
    t158 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t158 & t156);
    t159 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t159 & t157);
    t160 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t160 & t156);
    t161 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t161 & t157);
    goto LAB60;

LAB61:    *((unsigned int *)t162) = 1;
    goto LAB64;

LAB63:    t169 = (t162 + 4);
    *((unsigned int *)t162) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB64;

LAB65:    t182 = *((unsigned int *)t170);
    t183 = *((unsigned int *)t176);
    *((unsigned int *)t170) = (t182 | t183);
    t184 = (t76 + 4);
    t185 = (t162 + 4);
    t186 = *((unsigned int *)t76);
    t187 = (~(t186));
    t188 = *((unsigned int *)t184);
    t189 = (~(t188));
    t190 = *((unsigned int *)t162);
    t191 = (~(t190));
    t192 = *((unsigned int *)t185);
    t193 = (~(t192));
    t194 = (t187 & t189);
    t195 = (t191 & t193);
    t196 = (~(t194));
    t197 = (~(t195));
    t198 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t198 & t196);
    t199 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t199 & t197);
    t200 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t200 & t196);
    t201 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t201 & t197);
    goto LAB67;

LAB68:    xsi_set_current_line(85, ng0);

LAB71:    xsi_set_current_line(86, ng0);
    t208 = (t0 + 3640);
    t209 = (t208 + 56U);
    t210 = *((char **)t209);
    t212 = (t0 + 3640);
    t213 = (t212 + 72U);
    t214 = *((char **)t213);
    t215 = (t0 + 3640);
    t216 = (t215 + 64U);
    t217 = *((char **)t216);
    t218 = (t0 + 3320);
    t219 = (t218 + 56U);
    t220 = *((char **)t219);
    xsi_vlog_generic_get_array_select_value(t211, 8, t210, t214, t217, 2, 1, t220, 8, 2);
    t221 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t221, t211, 0, 0, 8, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 8, t6, 32);
    t12 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 3640);
    t5 = (t0 + 3640);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 3640);
    t19 = (t13 + 64U);
    t20 = *((char **)t19);
    t25 = (t0 + 3160);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t4, t21, t12, t20, 2, 1, t27, 8, 2);
    t37 = (t4 + 4);
    t7 = *((unsigned int *)t37);
    t68 = (!(t7));
    t43 = (t21 + 4);
    t8 = *((unsigned int *)t43);
    t69 = (!(t8));
    t154 = (t68 && t69);
    if (t154 == 1)
        goto LAB72;

LAB73:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 8, t6, 32);
    t12 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 8, t6, 32);
    t12 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    goto LAB70;

LAB72:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t21);
    t155 = (t9 - t10);
    t194 = (t155 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t21), t194, 0LL);
    goto LAB73;

}


extern void work_m_00000000003683865297_0236360315_init()
{
	static char *pe[] = {(void *)Always_45_0,(void *)Always_53_1,(void *)Always_66_2,(void *)Always_77_3};
	xsi_register_didat("work_m_00000000003683865297_0236360315", "isim/TBFIFO_isim_beh.exe.sim/work/m_00000000003683865297_0236360315.didat");
	xsi_register_executes(pe);
}
