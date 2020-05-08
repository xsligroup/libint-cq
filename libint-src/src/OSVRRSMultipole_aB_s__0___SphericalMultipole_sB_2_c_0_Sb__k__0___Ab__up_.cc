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
extern "C" {
#endif
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp114;
fp114 = 1.0000000000000000e+00 * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + fp114;
LIBINT2_REALTYPE fp112;
fp112 = fp113 + src4[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->oo2z[vi] * fp112;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PB_z[vi] * src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp115 + fp111;
target[((hsi*36+17)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src4[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PB_z[vi] * src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp119 + fp117;
target[((hsi*36+16)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp123;
fp123 = 5.0000000000000000e-01 * src3[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 5.0000000000000000e-01 * src3[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = 4.0000000000000000e+00 * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + fp127;
LIBINT2_REALTYPE fp124;
fp124 = fp126 + fp125;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
LIBINT2_REALTYPE fp121;
fp121 = inteval->oo2z[vi] * fp122;
LIBINT2_REALTYPE fp128;
fp128 = inteval->PB_y[vi] * src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp128 + fp121;
target[((hsi*36+15)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp133;
fp133 = 3.0000000000000000e+00 * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + fp133;
LIBINT2_REALTYPE fp131;
fp131 = fp132 + src4[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->oo2z[vi] * fp131;
LIBINT2_REALTYPE fp134;
fp134 = inteval->PB_z[vi] * src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp134 + fp130;
target[((hsi*36+14)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp139;
fp139 = 2.0000000000000000e+00 * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + fp139;
LIBINT2_REALTYPE fp137;
fp137 = fp138 + src4[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->oo2z[vi] * fp137;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PB_z[vi] * src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp140 + fp136;
target[((hsi*36+13)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp145;
fp145 = 1.0000000000000000e+00 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + fp145;
LIBINT2_REALTYPE fp143;
fp143 = fp144 + src4[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->oo2z[vi] * fp143;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PB_z[vi] * src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp146 + fp142;
target[((hsi*36+12)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src4[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp150;
fp150 = inteval->PB_z[vi] * src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp150 + fp148;
target[((hsi*36+11)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp154;
fp154 = 5.0000000000000000e-01 * src3[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = 5.0000000000000000e-01 * src3[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = 3.0000000000000000e+00 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + fp158;
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
LIBINT2_REALTYPE fp153;
fp153 = fp155 + fp154;
LIBINT2_REALTYPE fp152;
fp152 = inteval->oo2z[vi] * fp153;
LIBINT2_REALTYPE fp159;
fp159 = inteval->PB_y[vi] * src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp159 + fp152;
target[((hsi*36+10)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp218;
fp218 = -5.0000000000000000e-01 * src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = 5.0000000000000000e-01 * src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = 6.0000000000000000e+00 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = 0.0000000000000000e+00 + fp222;
LIBINT2_REALTYPE fp219;
fp219 = fp221 + fp220;
LIBINT2_REALTYPE fp217;
fp217 = fp219 - fp218;
LIBINT2_REALTYPE fp216;
fp216 = inteval->oo2z[vi] * fp217;
LIBINT2_REALTYPE fp223;
fp223 = inteval->PB_x[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp223 + fp216;
target[((hsi*36+0)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp170;
fp170 = 1.0000000000000000e+00 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = 0.0000000000000000e+00 + fp170;
LIBINT2_REALTYPE fp168;
fp168 = fp169 + src4[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = inteval->oo2z[vi] * fp168;
LIBINT2_REALTYPE fp171;
fp171 = inteval->PB_z[vi] * src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp171 + fp167;
target[((hsi*36+8)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + src4[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->oo2z[vi] * fp174;
LIBINT2_REALTYPE fp175;
fp175 = inteval->PB_z[vi] * src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp175 + fp173;
target[((hsi*36+7)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp179;
fp179 = 5.0000000000000000e-01 * src3[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = 5.0000000000000000e-01 * src3[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = 2.0000000000000000e+00 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = 0.0000000000000000e+00 + fp183;
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
LIBINT2_REALTYPE fp178;
fp178 = fp180 + fp179;
LIBINT2_REALTYPE fp177;
fp177 = inteval->oo2z[vi] * fp178;
LIBINT2_REALTYPE fp184;
fp184 = inteval->PB_y[vi] * src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp184 + fp177;
target[((hsi*36+6)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp189;
fp189 = 1.0000000000000000e+00 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = 0.0000000000000000e+00 + fp189;
LIBINT2_REALTYPE fp187;
fp187 = fp188 + src4[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = inteval->oo2z[vi] * fp187;
LIBINT2_REALTYPE fp190;
fp190 = inteval->PB_z[vi] * src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = fp190 + fp186;
target[((hsi*36+5)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp193;
fp193 = 0.0000000000000000e+00 + src4[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = inteval->oo2z[vi] * fp193;
LIBINT2_REALTYPE fp194;
fp194 = inteval->PB_z[vi] * src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp194 + fp192;
target[((hsi*36+4)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp198;
fp198 = 5.0000000000000000e-01 * src3[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = 5.0000000000000000e-01 * src3[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = 1.0000000000000000e+00 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = 0.0000000000000000e+00 + fp202;
LIBINT2_REALTYPE fp199;
fp199 = fp201 + fp200;
LIBINT2_REALTYPE fp197;
fp197 = fp199 + fp198;
LIBINT2_REALTYPE fp196;
fp196 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp203;
fp203 = inteval->PB_y[vi] * src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp203 + fp196;
target[((hsi*36+3)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp206;
fp206 = 0.0000000000000000e+00 + src4[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->oo2z[vi] * fp206;
LIBINT2_REALTYPE fp207;
fp207 = inteval->PB_z[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp207 + fp205;
target[((hsi*36+2)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp211;
fp211 = 5.0000000000000000e-01 * src3[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = 5.0000000000000000e-01 * src3[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = 0.0000000000000000e+00 + fp213;
LIBINT2_REALTYPE fp210;
fp210 = fp212 + fp211;
LIBINT2_REALTYPE fp209;
fp209 = inteval->oo2z[vi] * fp210;
LIBINT2_REALTYPE fp214;
fp214 = inteval->PB_y[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp214 + fp209;
target[((hsi*36+1)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp164;
fp164 = 2.0000000000000000e+00 * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + fp164;
LIBINT2_REALTYPE fp162;
fp162 = fp163 + src4[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = inteval->oo2z[vi] * fp162;
LIBINT2_REALTYPE fp165;
fp165 = inteval->PB_z[vi] * src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp165 + fp161;
target[((hsi*36+9)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp4;
fp4 = 6.0000000000000000e+00 * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src4[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PB_z[vi] * src0[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
fp10 = 5.0000000000000000e+00 * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src4[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PB_z[vi] * src0[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*36+34)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
fp16 = 4.0000000000000000e+00 * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src4[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PB_z[vi] * src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*36+33)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
fp22 = 3.0000000000000000e+00 * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src4[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PB_z[vi] * src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*36+32)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
fp28 = 2.0000000000000000e+00 * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src4[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PB_z[vi] * src0[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*36+31)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
fp34 = 1.0000000000000000e+00 * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src4[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PB_z[vi] * src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp35 + fp31;
target[((hsi*36+30)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src4[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PB_z[vi] * src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp39 + fp37;
target[((hsi*36+29)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp43;
fp43 = 5.0000000000000000e-01 * src3[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 5.0000000000000000e-01 * src3[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 6.0000000000000000e+00 * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + fp47;
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp48;
fp48 = inteval->PB_y[vi] * src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp48 + fp41;
target[((hsi*36+28)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp108;
fp108 = 2.0000000000000000e+00 * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + fp108;
LIBINT2_REALTYPE fp106;
fp106 = fp107 + src4[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->oo2z[vi] * fp106;
LIBINT2_REALTYPE fp109;
fp109 = inteval->PB_z[vi] * src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp109 + fp105;
target[((hsi*36+18)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp59;
fp59 = 4.0000000000000000e+00 * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + fp59;
LIBINT2_REALTYPE fp57;
fp57 = fp58 + src4[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PB_z[vi] * src0[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp60 + fp56;
target[((hsi*36+26)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp65;
fp65 = 3.0000000000000000e+00 * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + fp65;
LIBINT2_REALTYPE fp63;
fp63 = fp64 + src4[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PB_z[vi] * src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp66 + fp62;
target[((hsi*36+25)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp71;
fp71 = 2.0000000000000000e+00 * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + fp71;
LIBINT2_REALTYPE fp69;
fp69 = fp70 + src4[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->oo2z[vi] * fp69;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PB_z[vi] * src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp72 + fp68;
target[((hsi*36+24)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp77;
fp77 = 1.0000000000000000e+00 * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + fp77;
LIBINT2_REALTYPE fp75;
fp75 = fp76 + src4[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PB_z[vi] * src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp78 + fp74;
target[((hsi*36+23)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src4[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->oo2z[vi] * fp81;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PB_z[vi] * src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp82 + fp80;
target[((hsi*36+22)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp86;
fp86 = 5.0000000000000000e-01 * src3[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 5.0000000000000000e-01 * src3[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 5.0000000000000000e+00 * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + fp90;
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp85;
fp85 = fp87 + fp86;
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PB_y[vi] * src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp91 + fp84;
target[((hsi*36+21)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp96;
fp96 = 4.0000000000000000e+00 * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + fp96;
LIBINT2_REALTYPE fp94;
fp94 = fp95 + src4[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp94;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PB_z[vi] * src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp97 + fp93;
target[((hsi*36+20)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp102;
fp102 = 3.0000000000000000e+00 * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + fp102;
LIBINT2_REALTYPE fp100;
fp100 = fp101 + src4[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PB_z[vi] * src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp103 + fp99;
target[((hsi*36+19)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp53;
fp53 = 5.0000000000000000e+00 * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + fp53;
LIBINT2_REALTYPE fp51;
fp51 = fp52 + src4[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->oo2z[vi] * fp51;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PB_z[vi] * src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp54 + fp50;
target[((hsi*36+27)*1+lsi)*1] = fp49;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 224 */
}

#ifdef __cplusplus
};
#endif
