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
void OSVRRP0InBra_aB_d__0__d__1___TwoPRep_s__0__s010__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp195;
fp195 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp195 * src4[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_z[vi] * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->PA_z[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
target[((hsi*36+17)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp185;
fp185 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp184;
fp184 = fp185 * src4[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_z[vi] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->PA_z[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp103 + fp102;
LIBINT2_REALTYPE fp100;
fp100 = fp101 + fp184;
target[((hsi*36+16)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_z[vi] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->PA_z[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp106 + fp105;
target[((hsi*36+15)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp143;
fp143 = fp185 * src4[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->WP_z[vi] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->PA_z[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
LIBINT2_REALTYPE fp107;
fp107 = fp108 + fp143;
target[((hsi*36+14)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp112;
fp112 = inteval->WP_z[vi] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->PA_z[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
target[((hsi*36+13)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_z[vi] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->PA_z[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
target[((hsi*36+12)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp149;
fp149 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp149 * src5[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->WP_y[vi] * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->PA_y[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp121 + fp120;
LIBINT2_REALTYPE fp117;
fp117 = fp119 + fp118;
target[((hsi*36+11)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp123;
fp123 = fp149 * src5[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp185 * src4[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = inteval->WP_y[vi] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->PA_y[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp127 + fp126;
LIBINT2_REALTYPE fp124;
fp124 = fp125 + fp175;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
target[((hsi*36+10)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * src4[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp199;
fp199 = inteval->roz[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = src2[((hsi*6+0)*1+lsi)*1] - fp199;
LIBINT2_REALTYPE fp197;
fp197 = fp200 * fp198;
LIBINT2_REALTYPE fp202;
fp202 = inteval->WP_x[vi] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = inteval->PA_x[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp203 + fp202;
LIBINT2_REALTYPE fp196;
fp196 = fp201 + fp197;
LIBINT2_REALTYPE fp193;
fp193 = fp196 + fp194;
target[((hsi*36+0)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp136;
fp136 = fp149 * src5[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = inteval->WP_y[vi] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->PA_y[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp139 + fp138;
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
target[((hsi*36+8)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp141;
fp141 = fp149 * src5[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_y[vi] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = inteval->PA_y[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
LIBINT2_REALTYPE fp142;
fp142 = fp144 + fp143;
LIBINT2_REALTYPE fp140;
fp140 = fp142 + fp141;
target[((hsi*36+7)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * src5[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->WP_y[vi] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = inteval->PA_y[vi] * src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = fp152 + fp151;
LIBINT2_REALTYPE fp147;
fp147 = fp150 + fp148;
target[((hsi*36+6)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp156;
fp156 = inteval->roz[vi] * src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = src2[((hsi*6+5)*1+lsi)*1] - fp156;
LIBINT2_REALTYPE fp154;
fp154 = fp200 * fp155;
LIBINT2_REALTYPE fp158;
fp158 = inteval->WP_x[vi] * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = inteval->PA_x[vi] * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp159 + fp158;
LIBINT2_REALTYPE fp153;
fp153 = fp157 + fp154;
target[((hsi*36+5)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp163;
fp163 = inteval->roz[vi] * src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = src2[((hsi*6+4)*1+lsi)*1] - fp163;
LIBINT2_REALTYPE fp161;
fp161 = fp200 * fp162;
LIBINT2_REALTYPE fp165;
fp165 = inteval->WP_x[vi] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->PA_x[vi] * src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
LIBINT2_REALTYPE fp160;
fp160 = fp164 + fp161;
target[((hsi*36+4)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp170;
fp170 = inteval->roz[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = src2[((hsi*6+3)*1+lsi)*1] - fp170;
LIBINT2_REALTYPE fp168;
fp168 = fp200 * fp169;
LIBINT2_REALTYPE fp172;
fp172 = inteval->WP_x[vi] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->PA_x[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp167;
fp167 = fp171 + fp168;
target[((hsi*36+3)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp179;
fp179 = inteval->roz[vi] * src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = src2[((hsi*6+2)*1+lsi)*1] - fp179;
LIBINT2_REALTYPE fp177;
fp177 = fp200 * fp178;
LIBINT2_REALTYPE fp181;
fp181 = inteval->WP_x[vi] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = inteval->PA_x[vi] * src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
LIBINT2_REALTYPE fp176;
fp176 = fp180 + fp177;
LIBINT2_REALTYPE fp174;
fp174 = fp176 + fp175;
target[((hsi*36+2)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp189;
fp189 = inteval->roz[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = src2[((hsi*6+1)*1+lsi)*1] - fp189;
LIBINT2_REALTYPE fp187;
fp187 = fp200 * fp188;
LIBINT2_REALTYPE fp191;
fp191 = inteval->WP_x[vi] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = inteval->PA_x[vi] * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp192 + fp191;
LIBINT2_REALTYPE fp186;
fp186 = fp190 + fp187;
LIBINT2_REALTYPE fp183;
fp183 = fp186 + fp184;
target[((hsi*36+1)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp129;
fp129 = fp149 * src5[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp195 * src4[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->WP_y[vi] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = inteval->PA_y[vi] * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp134 + fp133;
LIBINT2_REALTYPE fp130;
fp130 = fp132 + fp131;
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
target[((hsi*36+9)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp1;
fp1 = fp195 * src4[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->WP_z[vi] * src1[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + fp154;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp7;
fp7 = fp185 * src4[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_z[vi] * src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + fp161;
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
target[((hsi*36+34)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->PA_z[vi] * src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
LIBINT2_REALTYPE fp12;
fp12 = fp13 + fp168;
target[((hsi*36+33)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp17;
fp17 = fp185 * src4[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->PA_z[vi] * src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
LIBINT2_REALTYPE fp18;
fp18 = fp19 + fp177;
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
target[((hsi*36+32)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_z[vi] * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_z[vi] * src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
LIBINT2_REALTYPE fp22;
fp22 = fp23 + fp187;
target[((hsi*36+31)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp28;
fp28 = inteval->WP_z[vi] * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + fp197;
target[((hsi*36+30)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp31;
fp31 = fp195 * src4[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_z[vi] * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_z[vi] * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
target[((hsi*36+29)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp36;
fp36 = fp185 * src4[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->WP_z[vi] * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->PA_z[vi] * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
LIBINT2_REALTYPE fp35;
fp35 = fp37 + fp36;
target[((hsi*36+28)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp90;
fp90 = fp149 * src5[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_y[vi] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_y[vi] * src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
LIBINT2_REALTYPE fp91;
fp91 = fp92 + fp197;
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
target[((hsi*36+18)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp84;
fp84 = fp185 * src4[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_z[vi] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->PA_z[vi] * src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp43;
fp43 = fp44 + fp84;
target[((hsi*36+26)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_z[vi] * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->PA_z[vi] * src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp49 + fp48;
target[((hsi*36+25)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_z[vi] * src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
target[((hsi*36+24)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp54;
fp54 = fp149 * src5[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_y[vi] * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->PA_y[vi] * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
LIBINT2_REALTYPE fp55;
fp55 = fp56 + fp154;
LIBINT2_REALTYPE fp53;
fp53 = fp55 + fp54;
target[((hsi*36+23)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp60;
fp60 = fp149 * src5[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp185 * src4[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_y[vi] * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->PA_y[vi] * src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
LIBINT2_REALTYPE fp63;
fp63 = fp64 + fp161;
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
LIBINT2_REALTYPE fp59;
fp59 = fp61 + fp60;
target[((hsi*36+22)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp68;
fp68 = fp149 * src5[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp195 * src4[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_y[vi] * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->PA_y[vi] * src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
LIBINT2_REALTYPE fp71;
fp71 = fp72 + fp168;
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
target[((hsi*36+21)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp76;
fp76 = fp149 * src5[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_y[vi] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->PA_y[vi] * src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp80 + fp79;
LIBINT2_REALTYPE fp77;
fp77 = fp78 + fp177;
LIBINT2_REALTYPE fp75;
fp75 = fp77 + fp76;
target[((hsi*36+20)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp82;
fp82 = fp149 * src5[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_y[vi] * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->PA_y[vi] * src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
LIBINT2_REALTYPE fp85;
fp85 = fp86 + fp187;
LIBINT2_REALTYPE fp83;
fp83 = fp85 + fp84;
LIBINT2_REALTYPE fp81;
fp81 = fp83 + fp82;
target[((hsi*36+19)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_z[vi] * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->PA_z[vi] * src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
target[((hsi*36+27)*1+lsi)*1] = fp40;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 204 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
