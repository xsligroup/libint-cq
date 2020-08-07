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
void OSVRRP0InBra_aB_i__0__s__1___TwoPRep_unit__0__s010__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp143;
fp143 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * src3[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = inteval->WP_y[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp144 + fp142;
target[((hsi*28+1)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp140;
fp140 = inteval->WP_z[vi] * src0[((hsi*21+0)*1+lsi)*1];
target[((hsi*28+2)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp133;
fp133 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * src3[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->roz[vi] * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = src1[((hsi*15+0)*1+lsi)*1] - fp137;
LIBINT2_REALTYPE fp138;
fp138 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp138 * fp136;
LIBINT2_REALTYPE fp139;
fp139 = inteval->WP_y[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp139 + fp135;
LIBINT2_REALTYPE fp131;
fp131 = fp134 + fp132;
target[((hsi*28+3)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WP_z[vi] * src0[((hsi*21+1)*1+lsi)*1];
target[((hsi*28+4)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp127;
fp127 = inteval->roz[vi] * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src1[((hsi*15+0)*1+lsi)*1] - fp127;
LIBINT2_REALTYPE fp128;
fp128 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp128 * fp126;
LIBINT2_REALTYPE fp129;
fp129 = inteval->WP_z[vi] * src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp129 + fp125;
target[((hsi*28+5)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * src3[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->roz[vi] * src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src1[((hsi*15+1)*1+lsi)*1] - fp121;
LIBINT2_REALTYPE fp122;
fp122 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp119;
fp119 = fp122 * fp120;
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_y[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp123 + fp119;
LIBINT2_REALTYPE fp115;
fp115 = fp118 + fp116;
target[((hsi*28+6)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_z[vi] * src0[((hsi*21+3)*1+lsi)*1];
target[((hsi*28+7)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp111;
fp111 = inteval->roz[vi] * src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src1[((hsi*15+1)*1+lsi)*1] - fp111;
LIBINT2_REALTYPE fp112;
fp112 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp109;
fp109 = fp112 * fp110;
LIBINT2_REALTYPE fp113;
fp113 = inteval->WP_z[vi] * src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp113 + fp109;
target[((hsi*28+8)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp105;
fp105 = inteval->roz[vi] * src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src1[((hsi*15+2)*1+lsi)*1] - fp105;
LIBINT2_REALTYPE fp106;
fp106 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp106 * fp104;
LIBINT2_REALTYPE fp107;
fp107 = inteval->WP_z[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp107 + fp103;
target[((hsi*28+9)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp95 * src3[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->roz[vi] * src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src1[((hsi*15+3)*1+lsi)*1] - fp99;
LIBINT2_REALTYPE fp100;
fp100 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp97;
fp97 = fp100 * fp98;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_y[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp101 + fp97;
LIBINT2_REALTYPE fp93;
fp93 = fp96 + fp94;
target[((hsi*28+10)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_z[vi] * src0[((hsi*21+6)*1+lsi)*1];
target[((hsi*28+11)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp89;
fp89 = inteval->roz[vi] * src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src1[((hsi*15+3)*1+lsi)*1] - fp89;
LIBINT2_REALTYPE fp90;
fp90 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp90 * fp88;
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_z[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp91 + fp87;
target[((hsi*28+12)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp83;
fp83 = inteval->roz[vi] * src2[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src1[((hsi*15+4)*1+lsi)*1] - fp83;
LIBINT2_REALTYPE fp84;
fp84 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp84 * fp82;
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_z[vi] * src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp85 + fp81;
target[((hsi*28+13)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp148;
fp148 = inteval->roz[vi] * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = src1[((hsi*15+0)*1+lsi)*1] - fp148;
LIBINT2_REALTYPE fp149;
fp149 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp149 * fp147;
LIBINT2_REALTYPE fp150;
fp150 = inteval->WP_x[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp150 + fp146;
target[((hsi*28+0)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp66;
fp66 = fp67 * src3[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->roz[vi] * src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src1[((hsi*15+6)*1+lsi)*1] - fp71;
LIBINT2_REALTYPE fp72;
fp72 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp72 * fp70;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_y[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp73 + fp69;
LIBINT2_REALTYPE fp65;
fp65 = fp68 + fp66;
target[((hsi*28+15)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp64;
fp64 = inteval->WP_z[vi] * src0[((hsi*21+10)*1+lsi)*1];
target[((hsi*28+16)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp61;
fp61 = inteval->roz[vi] * src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src1[((hsi*15+6)*1+lsi)*1] - fp61;
LIBINT2_REALTYPE fp62;
fp62 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp62 * fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_z[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp63 + fp59;
target[((hsi*28+17)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp55;
fp55 = inteval->roz[vi] * src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src1[((hsi*15+7)*1+lsi)*1] - fp55;
LIBINT2_REALTYPE fp56;
fp56 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp56 * fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_z[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp57 + fp53;
target[((hsi*28+18)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp49;
fp49 = inteval->roz[vi] * src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src1[((hsi*15+8)*1+lsi)*1] - fp49;
LIBINT2_REALTYPE fp50;
fp50 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp50 * fp48;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp51 + fp47;
target[((hsi*28+19)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp43;
fp43 = inteval->roz[vi] * src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src1[((hsi*15+9)*1+lsi)*1] - fp43;
LIBINT2_REALTYPE fp44;
fp44 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp44 * fp42;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_z[vi] * src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp45 + fp41;
target[((hsi*28+20)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * src3[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->roz[vi] * src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = src1[((hsi*15+10)*1+lsi)*1] - fp37;
LIBINT2_REALTYPE fp38;
fp38 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp35;
fp35 = fp38 * fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_y[vi] * src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp39 + fp35;
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
target[((hsi*28+21)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * src0[((hsi*21+15)*1+lsi)*1];
target[((hsi*28+22)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp27;
fp27 = inteval->roz[vi] * src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src1[((hsi*15+10)*1+lsi)*1] - fp27;
LIBINT2_REALTYPE fp28;
fp28 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp28 * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_z[vi] * src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*28+23)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp21;
fp21 = inteval->roz[vi] * src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src1[((hsi*15+11)*1+lsi)*1] - fp21;
LIBINT2_REALTYPE fp22;
fp22 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp22 * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*28+24)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp15;
fp15 = inteval->roz[vi] * src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src1[((hsi*15+12)*1+lsi)*1] - fp15;
LIBINT2_REALTYPE fp16;
fp16 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp16 * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*28+25)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp9;
fp9 = inteval->roz[vi] * src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src1[((hsi*15+13)*1+lsi)*1] - fp9;
LIBINT2_REALTYPE fp10;
fp10 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp10 * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->WP_z[vi] * src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*28+26)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp3;
fp3 = inteval->roz[vi] * src2[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src1[((hsi*15+14)*1+lsi)*1] - fp3;
LIBINT2_REALTYPE fp4;
fp4 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src0[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp77;
fp77 = inteval->roz[vi] * src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src1[((hsi*15+5)*1+lsi)*1] - fp77;
LIBINT2_REALTYPE fp78;
fp78 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp78 * fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_z[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp79 + fp75;
target[((hsi*28+14)*1+lsi)*1] = fp74;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 151 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif