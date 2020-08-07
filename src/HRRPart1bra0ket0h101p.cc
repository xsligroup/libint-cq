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
void HRRPart1bra0ket0h101p(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, int highdim) {

LIBINT2_REALTYPE*const  stack = target;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int hsi = 0; hsi<highdim; hsi++) {
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->CD_x[vi] * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*28+10)*1+lsi)*1] + fp109;
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
target[((hsi*63+30)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp111;
fp111 = 1.0000000000000000e+00 * src3[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->CD_z[vi] * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = src0[((hsi*28+14)*1+lsi)*1] + fp113;
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
target[((hsi*63+29)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp115;
fp115 = inteval->CD_y[vi] * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = src0[((hsi*28+13)*1+lsi)*1] + fp115;
target[((hsi*63+28)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->CD_x[vi] * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*28+9)*1+lsi)*1] + fp119;
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
target[((hsi*63+27)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp121;
fp121 = 1.0000000000000000e+00 * src3[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->CD_z[vi] * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = src0[((hsi*28+13)*1+lsi)*1] + fp123;
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
target[((hsi*63+26)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp125;
fp125 = inteval->CD_y[vi] * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*28+12)*1+lsi)*1] + fp125;
target[((hsi*63+25)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = 1.0000000000000000e+00 * src2[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->CD_x[vi] * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*28+8)*1+lsi)*1] + fp129;
LIBINT2_REALTYPE fp126;
fp126 = fp128 + fp127;
target[((hsi*63+24)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp131;
fp131 = 1.0000000000000000e+00 * src3[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->CD_z[vi] * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = src0[((hsi*28+12)*1+lsi)*1] + fp133;
LIBINT2_REALTYPE fp130;
fp130 = fp132 + fp131;
target[((hsi*63+23)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp135;
fp135 = inteval->CD_y[vi] * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = src0[((hsi*28+11)*1+lsi)*1] + fp135;
target[((hsi*63+22)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = 1.0000000000000000e+00 * src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->CD_x[vi] * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = src0[((hsi*28+7)*1+lsi)*1] + fp139;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
target[((hsi*63+21)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp141;
fp141 = 1.0000000000000000e+00 * src3[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->CD_z[vi] * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = src0[((hsi*28+11)*1+lsi)*1] + fp143;
LIBINT2_REALTYPE fp140;
fp140 = fp142 + fp141;
target[((hsi*63+20)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp145;
fp145 = inteval->CD_y[vi] * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*28+10)*1+lsi)*1] + fp145;
target[((hsi*63+19)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->CD_x[vi] * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = src0[((hsi*28+6)*1+lsi)*1] + fp149;
LIBINT2_REALTYPE fp146;
fp146 = fp148 + fp147;
target[((hsi*63+18)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp151;
fp151 = 1.0000000000000000e+00 * src3[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->CD_z[vi] * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*28+9)*1+lsi)*1] + fp153;
LIBINT2_REALTYPE fp150;
fp150 = fp152 + fp151;
target[((hsi*63+17)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp207;
fp207 = 1.0000000000000000e+00 * src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = inteval->CD_x[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = src0[((hsi*28+0)*1+lsi)*1] + fp209;
LIBINT2_REALTYPE fp206;
fp206 = fp208 + fp207;
target[((hsi*63+0)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp157;
fp157 = 1.0000000000000000e+00 * src2[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = inteval->CD_x[vi] * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*28+5)*1+lsi)*1] + fp159;
LIBINT2_REALTYPE fp156;
fp156 = fp158 + fp157;
target[((hsi*63+15)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp161;
fp161 = 1.0000000000000000e+00 * src3[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->CD_z[vi] * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = src0[((hsi*28+8)*1+lsi)*1] + fp163;
LIBINT2_REALTYPE fp160;
fp160 = fp162 + fp161;
target[((hsi*63+14)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp165;
fp165 = inteval->CD_y[vi] * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = src0[((hsi*28+7)*1+lsi)*1] + fp165;
target[((hsi*63+13)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = 1.0000000000000000e+00 * src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = inteval->CD_x[vi] * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = src0[((hsi*28+4)*1+lsi)*1] + fp169;
LIBINT2_REALTYPE fp166;
fp166 = fp168 + fp167;
target[((hsi*63+12)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp171;
fp171 = 1.0000000000000000e+00 * src3[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->CD_z[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = src0[((hsi*28+7)*1+lsi)*1] + fp173;
LIBINT2_REALTYPE fp170;
fp170 = fp172 + fp171;
target[((hsi*63+11)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp175;
fp175 = inteval->CD_y[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = src0[((hsi*28+6)*1+lsi)*1] + fp175;
target[((hsi*63+10)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = 1.0000000000000000e+00 * src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = inteval->CD_x[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = src0[((hsi*28+3)*1+lsi)*1] + fp179;
LIBINT2_REALTYPE fp176;
fp176 = fp178 + fp177;
target[((hsi*63+9)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp181;
fp181 = 1.0000000000000000e+00 * src3[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->CD_z[vi] * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = src0[((hsi*28+5)*1+lsi)*1] + fp183;
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
target[((hsi*63+8)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp185;
fp185 = inteval->CD_y[vi] * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = src0[((hsi*28+4)*1+lsi)*1] + fp185;
target[((hsi*63+7)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = 1.0000000000000000e+00 * src2[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->CD_x[vi] * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = src0[((hsi*28+2)*1+lsi)*1] + fp189;
LIBINT2_REALTYPE fp186;
fp186 = fp188 + fp187;
target[((hsi*63+6)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp191;
fp191 = 1.0000000000000000e+00 * src3[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = inteval->CD_z[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = src0[((hsi*28+4)*1+lsi)*1] + fp193;
LIBINT2_REALTYPE fp190;
fp190 = fp192 + fp191;
target[((hsi*63+5)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp195;
fp195 = inteval->CD_y[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = src0[((hsi*28+3)*1+lsi)*1] + fp195;
target[((hsi*63+4)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = 1.0000000000000000e+00 * src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = inteval->CD_x[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = src0[((hsi*28+1)*1+lsi)*1] + fp199;
LIBINT2_REALTYPE fp196;
fp196 = fp198 + fp197;
target[((hsi*63+3)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp201;
fp201 = 1.0000000000000000e+00 * src3[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = inteval->CD_z[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = src0[((hsi*28+2)*1+lsi)*1] + fp203;
LIBINT2_REALTYPE fp200;
fp200 = fp202 + fp201;
target[((hsi*63+2)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp205;
fp205 = inteval->CD_y[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*28+1)*1+lsi)*1] + fp205;
target[((hsi*63+1)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp155;
fp155 = inteval->CD_y[vi] * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = src0[((hsi*28+8)*1+lsi)*1] + fp155;
target[((hsi*63+16)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * src3[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->CD_z[vi] * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*28+27)*1+lsi)*1] + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*63+62)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = inteval->CD_y[vi] * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src0[((hsi*28+26)*1+lsi)*1] + fp5;
target[((hsi*63+61)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
fp7 = 1.0000000000000000e+00 * src2[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->CD_x[vi] * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*28+20)*1+lsi)*1] + fp9;
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
target[((hsi*63+60)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * src3[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->CD_z[vi] * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*28+26)*1+lsi)*1] + fp13;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*63+59)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp15;
fp15 = inteval->CD_y[vi] * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*28+25)*1+lsi)*1] + fp15;
target[((hsi*63+58)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = 1.0000000000000000e+00 * src2[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->CD_x[vi] * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*28+19)*1+lsi)*1] + fp19;
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
target[((hsi*63+57)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp21;
fp21 = 1.0000000000000000e+00 * src3[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->CD_z[vi] * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*28+25)*1+lsi)*1] + fp23;
LIBINT2_REALTYPE fp20;
fp20 = fp22 + fp21;
target[((hsi*63+56)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp25;
fp25 = inteval->CD_y[vi] * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src0[((hsi*28+24)*1+lsi)*1] + fp25;
target[((hsi*63+55)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * src2[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->CD_x[vi] * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*28+18)*1+lsi)*1] + fp29;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*63+54)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp31;
fp31 = 1.0000000000000000e+00 * src3[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->CD_z[vi] * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*28+24)*1+lsi)*1] + fp33;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
target[((hsi*63+53)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp35;
fp35 = inteval->CD_y[vi] * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*28+23)*1+lsi)*1] + fp35;
target[((hsi*63+52)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * src2[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_x[vi] * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*28+17)*1+lsi)*1] + fp39;
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
target[((hsi*63+51)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * src3[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->CD_z[vi] * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*28+23)*1+lsi)*1] + fp43;
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
target[((hsi*63+50)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp45;
fp45 = inteval->CD_y[vi] * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*28+22)*1+lsi)*1] + fp45;
target[((hsi*63+49)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->CD_x[vi] * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*28+16)*1+lsi)*1] + fp49;
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
target[((hsi*63+48)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp105;
fp105 = inteval->CD_y[vi] * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src0[((hsi*28+15)*1+lsi)*1] + fp105;
target[((hsi*63+31)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp55;
fp55 = inteval->CD_y[vi] * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*28+21)*1+lsi)*1] + fp55;
target[((hsi*63+46)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
fp57 = 1.0000000000000000e+00 * src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->CD_x[vi] * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src0[((hsi*28+15)*1+lsi)*1] + fp59;
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
target[((hsi*63+45)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * src3[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->CD_z[vi] * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*28+20)*1+lsi)*1] + fp63;
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
target[((hsi*63+44)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp65;
fp65 = inteval->CD_y[vi] * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = src0[((hsi*28+19)*1+lsi)*1] + fp65;
target[((hsi*63+43)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * src2[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->CD_x[vi] * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*28+14)*1+lsi)*1] + fp69;
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
target[((hsi*63+42)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp71;
fp71 = 1.0000000000000000e+00 * src3[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->CD_z[vi] * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = src0[((hsi*28+19)*1+lsi)*1] + fp73;
LIBINT2_REALTYPE fp70;
fp70 = fp72 + fp71;
target[((hsi*63+41)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp75;
fp75 = inteval->CD_y[vi] * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src0[((hsi*28+18)*1+lsi)*1] + fp75;
target[((hsi*63+40)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = 1.0000000000000000e+00 * src2[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->CD_x[vi] * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*28+13)*1+lsi)*1] + fp79;
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
target[((hsi*63+39)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * src3[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->CD_z[vi] * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src0[((hsi*28+18)*1+lsi)*1] + fp83;
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
target[((hsi*63+38)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp85;
fp85 = inteval->CD_y[vi] * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src0[((hsi*28+17)*1+lsi)*1] + fp85;
target[((hsi*63+37)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = 1.0000000000000000e+00 * src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->CD_x[vi] * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*28+12)*1+lsi)*1] + fp89;
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
target[((hsi*63+36)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * src3[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->CD_z[vi] * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*28+17)*1+lsi)*1] + fp93;
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
target[((hsi*63+35)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp95;
fp95 = inteval->CD_y[vi] * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = src0[((hsi*28+16)*1+lsi)*1] + fp95;
target[((hsi*63+34)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * src2[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->CD_x[vi] * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*28+11)*1+lsi)*1] + fp99;
LIBINT2_REALTYPE fp96;
fp96 = fp98 + fp97;
target[((hsi*63+33)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * src3[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->CD_z[vi] * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*28+16)*1+lsi)*1] + fp103;
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
target[((hsi*63+32)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp51;
fp51 = 1.0000000000000000e+00 * src3[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->CD_z[vi] * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = src0[((hsi*28+22)*1+lsi)*1] + fp53;
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
target[((hsi*63+47)*1+lsi)*1] = fp50;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 210 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif