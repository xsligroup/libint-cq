/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
 *
 *  This file is part of Libint.
 *
 *  Libint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void OSVRRP0InBra_aB_p__0__f__1___TwoPRep_s__0__s101__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp157;
fp157 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp148;
fp148 = fp157 * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp150;
fp150 = fp151 * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->WP_x[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->PA_x[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp154 + fp153;
LIBINT2_REALTYPE fp149;
fp149 = fp152 + fp150;
LIBINT2_REALTYPE fp147;
fp147 = fp149 + fp148;
target[((hsi*30+1)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp141;
fp141 = fp157 * src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp151 * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_x[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = inteval->PA_x[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
LIBINT2_REALTYPE fp142;
fp142 = fp144 + fp143;
LIBINT2_REALTYPE fp140;
fp140 = fp142 + fp141;
target[((hsi*30+2)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp133;
fp133 = fp157 * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = inteval->WP_x[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->PA_x[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp139 + fp138;
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
LIBINT2_REALTYPE fp132;
fp132 = fp134 + fp133;
target[((hsi*30+3)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp126;
fp126 = fp157 * src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp136 * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->WP_x[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->PA_x[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp131 + fp130;
LIBINT2_REALTYPE fp127;
fp127 = fp129 + fp128;
LIBINT2_REALTYPE fp125;
fp125 = fp127 + fp126;
target[((hsi*30+4)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp119;
fp119 = fp157 * src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp136 * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_x[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->PA_x[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
target[((hsi*30+5)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp114;
fp114 = fp157 * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->WP_x[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->PA_x[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp117 + fp116;
LIBINT2_REALTYPE fp113;
fp113 = fp115 + fp114;
target[((hsi*30+6)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp109;
fp109 = fp157 * src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->WP_x[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->PA_x[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
target[((hsi*30+7)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp104;
fp104 = fp157 * src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_x[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_x[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
LIBINT2_REALTYPE fp103;
fp103 = fp105 + fp104;
target[((hsi*30+8)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp99;
fp99 = fp157 * src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_x[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->PA_x[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
target[((hsi*30+9)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp96;
fp96 = inteval->WP_y[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->PA_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
target[((hsi*30+10)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp91;
fp91 = fp136 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_y[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
target[((hsi*30+11)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_y[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->PA_y[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
target[((hsi*30+12)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_y[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->PA_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
LIBINT2_REALTYPE fp83;
fp83 = fp84 + fp150;
target[((hsi*30+13)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp79;
fp79 = fp136 * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_y[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_y[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
LIBINT2_REALTYPE fp78;
fp78 = fp80 + fp79;
target[((hsi*30+14)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp160 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = inteval->WP_x[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->PA_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
LIBINT2_REALTYPE fp158;
fp158 = fp161 + fp159;
LIBINT2_REALTYPE fp155;
fp155 = fp158 + fp156;
target[((hsi*30+0)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp71;
fp71 = fp160 * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_y[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->PA_y[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
LIBINT2_REALTYPE fp70;
fp70 = fp72 + fp71;
target[((hsi*30+16)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp66;
fp66 = fp151 * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_y[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->PA_y[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp65;
fp65 = fp67 + fp66;
target[((hsi*30+17)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_y[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->PA_y[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
LIBINT2_REALTYPE fp61;
fp61 = fp62 + fp121;
target[((hsi*30+18)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_y[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->PA_y[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
target[((hsi*30+19)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp54;
fp54 = fp157 * src4[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_z[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->PA_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
LIBINT2_REALTYPE fp53;
fp53 = fp55 + fp54;
target[((hsi*30+20)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp49;
fp49 = fp157 * src4[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
target[((hsi*30+21)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp43;
fp43 = fp157 * src4[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp45 + fp91;
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
target[((hsi*30+22)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp38;
fp38 = fp157 * src4[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
target[((hsi*30+23)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp31;
fp31 = fp157 * src4[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp136 * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_z[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->PA_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
target[((hsi*30+24)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp25;
fp25 = fp157 * src4[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->WP_z[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + fp143;
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
target[((hsi*30+25)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp20;
fp20 = fp157 * src4[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_z[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
target[((hsi*30+26)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp14;
fp14 = fp157 * src4[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->PA_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
LIBINT2_REALTYPE fp15;
fp15 = fp16 + fp135;
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
target[((hsi*30+27)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp8;
fp8 = fp157 * src4[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->WP_z[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->PA_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
LIBINT2_REALTYPE fp9;
fp9 = fp10 + fp66;
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
target[((hsi*30+28)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp1;
fp1 = fp157 * src4[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp160 * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp6 + fp5;
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*30+29)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_y[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->PA_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp77 + fp76;
target[((hsi*30+15)*1+lsi)*1] = fp75;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 164 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
