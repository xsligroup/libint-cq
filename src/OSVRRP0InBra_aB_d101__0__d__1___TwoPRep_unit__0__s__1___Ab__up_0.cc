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
void OSVRRP0InBra_aB_d101__0__d__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp85;
fp85 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 1.0000000000000000e+00 * fp85;
LIBINT2_REALTYPE fp172;
fp172 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp172 * src3[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_z[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
LIBINT2_REALTYPE fp83;
fp83 = fp86 - fp84;
target[((hsi*36+17)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp91;
fp91 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 1.0000000000000000e+00 * fp91;
LIBINT2_REALTYPE fp161;
fp161 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp160;
fp160 = fp161 * src3[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_z[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp93 + fp160;
LIBINT2_REALTYPE fp89;
fp89 = fp92 - fp90;
target[((hsi*36+16)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp96;
fp96 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * fp96;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_z[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp97 - fp95;
target[((hsi*36+15)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp100;
fp100 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = 1.0000000000000000e+00 * fp100;
LIBINT2_REALTYPE fp119;
fp119 = fp161 * src3[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_z[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp102 + fp119;
LIBINT2_REALTYPE fp98;
fp98 = fp101 - fp99;
target[((hsi*36+14)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp105;
fp105 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 1.0000000000000000e+00 * fp105;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_z[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp106 - fp104;
target[((hsi*36+13)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp109;
fp109 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 1.0000000000000000e+00 * fp109;
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_z[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp110 - fp108;
target[((hsi*36+12)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp111;
fp111 = inteval->WP_y[vi] * src0[((hsi*18+5)*1+lsi)*1];
target[((hsi*36+11)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp150;
fp150 = fp161 * src3[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->WP_y[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp113 + fp150;
target[((hsi*36+10)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp169;
fp169 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = 1.0000000000000000e+00 * fp169;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * src3[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp176;
fp176 = inteval->roz[vi] * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = src1[((hsi*6+0)*1+lsi)*1] - fp176;
LIBINT2_REALTYPE fp174;
fp174 = fp177 * fp175;
LIBINT2_REALTYPE fp178;
fp178 = inteval->WP_x[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp178 + fp174;
LIBINT2_REALTYPE fp170;
fp170 = fp173 + fp171;
LIBINT2_REALTYPE fp167;
fp167 = fp170 - fp168;
target[((hsi*36+0)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp117;
fp117 = inteval->WP_y[vi] * src0[((hsi*18+2)*1+lsi)*1];
target[((hsi*36+8)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp120;
fp120 = inteval->WP_y[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
target[((hsi*36+7)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WP_y[vi] * src0[((hsi*18+0)*1+lsi)*1];
target[((hsi*36+6)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp124;
fp124 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * fp124;
LIBINT2_REALTYPE fp128;
fp128 = inteval->roz[vi] * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = src1[((hsi*6+5)*1+lsi)*1] - fp128;
LIBINT2_REALTYPE fp126;
fp126 = fp177 * fp127;
LIBINT2_REALTYPE fp129;
fp129 = inteval->WP_x[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp129 + fp126;
LIBINT2_REALTYPE fp122;
fp122 = fp125 - fp123;
target[((hsi*36+5)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp132;
fp132 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = 1.0000000000000000e+00 * fp132;
LIBINT2_REALTYPE fp136;
fp136 = inteval->roz[vi] * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = src1[((hsi*6+4)*1+lsi)*1] - fp136;
LIBINT2_REALTYPE fp134;
fp134 = fp177 * fp135;
LIBINT2_REALTYPE fp137;
fp137 = inteval->WP_x[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp137 + fp134;
LIBINT2_REALTYPE fp130;
fp130 = fp133 - fp131;
target[((hsi*36+4)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp140;
fp140 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 1.0000000000000000e+00 * fp140;
LIBINT2_REALTYPE fp144;
fp144 = inteval->roz[vi] * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = src1[((hsi*6+3)*1+lsi)*1] - fp144;
LIBINT2_REALTYPE fp142;
fp142 = fp177 * fp143;
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_x[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp145 + fp142;
LIBINT2_REALTYPE fp138;
fp138 = fp141 - fp139;
target[((hsi*36+3)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp148;
fp148 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * fp148;
LIBINT2_REALTYPE fp154;
fp154 = inteval->roz[vi] * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = src1[((hsi*6+2)*1+lsi)*1] - fp154;
LIBINT2_REALTYPE fp152;
fp152 = fp177 * fp153;
LIBINT2_REALTYPE fp155;
fp155 = inteval->WP_x[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp155 + fp152;
LIBINT2_REALTYPE fp149;
fp149 = fp151 + fp150;
LIBINT2_REALTYPE fp146;
fp146 = fp149 - fp147;
target[((hsi*36+2)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp158;
fp158 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = 1.0000000000000000e+00 * fp158;
LIBINT2_REALTYPE fp165;
fp165 = inteval->roz[vi] * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = src1[((hsi*6+1)*1+lsi)*1] - fp165;
LIBINT2_REALTYPE fp163;
fp163 = fp177 * fp164;
LIBINT2_REALTYPE fp166;
fp166 = inteval->WP_x[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp166 + fp163;
LIBINT2_REALTYPE fp159;
fp159 = fp162 + fp160;
LIBINT2_REALTYPE fp156;
fp156 = fp159 - fp157;
target[((hsi*36+1)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp115;
fp115 = fp172 * src3[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->WP_y[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
target[((hsi*36+9)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp2;
fp2 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * fp2;
LIBINT2_REALTYPE fp4;
fp4 = fp172 * src3[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src0[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp6 + fp126;
LIBINT2_REALTYPE fp3;
fp3 = fp5 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 - fp1;
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp9;
fp9 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 1.0000000000000000e+00 * fp9;
LIBINT2_REALTYPE fp11;
fp11 = fp161 * src3[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->WP_z[vi] * src0[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp13 + fp134;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
LIBINT2_REALTYPE fp7;
fp7 = fp10 - fp8;
target[((hsi*36+34)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp16;
fp16 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 1.0000000000000000e+00 * fp16;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_z[vi] * src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp18 + fp142;
LIBINT2_REALTYPE fp14;
fp14 = fp17 - fp15;
target[((hsi*36+33)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp21;
fp21 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 1.0000000000000000e+00 * fp21;
LIBINT2_REALTYPE fp23;
fp23 = fp161 * src3[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->WP_z[vi] * src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp25 + fp152;
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
LIBINT2_REALTYPE fp19;
fp19 = fp22 - fp20;
target[((hsi*36+32)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp28;
fp28 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * fp28;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp30 + fp163;
LIBINT2_REALTYPE fp26;
fp26 = fp29 - fp27;
target[((hsi*36+31)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp33;
fp33 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 1.0000000000000000e+00 * fp33;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_z[vi] * src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp35 + fp174;
LIBINT2_REALTYPE fp31;
fp31 = fp34 - fp32;
target[((hsi*36+30)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp38;
fp38 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * fp38;
LIBINT2_REALTYPE fp40;
fp40 = fp172 * src3[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_z[vi] * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
LIBINT2_REALTYPE fp36;
fp36 = fp39 - fp37;
target[((hsi*36+29)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp44;
fp44 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * fp44;
LIBINT2_REALTYPE fp46;
fp46 = fp161 * src3[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
LIBINT2_REALTYPE fp42;
fp42 = fp45 - fp43;
target[((hsi*36+28)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_y[vi] * src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp82 + fp174;
target[((hsi*36+18)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp54;
fp54 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * fp54;
LIBINT2_REALTYPE fp78;
fp78 = fp161 * src3[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_z[vi] * src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp56 + fp78;
LIBINT2_REALTYPE fp52;
fp52 = fp55 - fp53;
target[((hsi*36+26)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp59;
fp59 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * fp59;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WP_z[vi] * src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp60 - fp58;
target[((hsi*36+25)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp63;
fp63 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 1.0000000000000000e+00 * fp63;
LIBINT2_REALTYPE fp64;
fp64 = inteval->WP_z[vi] * src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp64 - fp62;
target[((hsi*36+24)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_y[vi] * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp66 + fp126;
target[((hsi*36+23)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp161 * src3[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_y[vi] * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp70 + fp134;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
target[((hsi*36+22)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp72;
fp72 = fp172 * src3[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->WP_y[vi] * src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp74 + fp142;
LIBINT2_REALTYPE fp71;
fp71 = fp73 + fp72;
target[((hsi*36+21)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_y[vi] * src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp76 + fp152;
target[((hsi*36+20)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_y[vi] * src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp80 + fp163;
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
target[((hsi*36+19)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp50;
fp50 = inteval->alpha1_rho_over_zeta2[vi] * src5[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * fp50;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp51 - fp49;
target[((hsi*36+27)*1+lsi)*1] = fp48;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 179 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif