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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_1_Sb__m__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp131;
fp131 = 4.0000000000000000e+00 * src1[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + fp131;
LIBINT2_REALTYPE fp129;
fp129 = inteval->oo2z[vi] * fp130;
LIBINT2_REALTYPE fp132;
fp132 = inteval->PB_z[vi] * src0[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp132 + fp129;
target[((hsi*55+26)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp136;
fp136 = 3.0000000000000000e+00 * src1[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + fp136;
LIBINT2_REALTYPE fp134;
fp134 = inteval->oo2z[vi] * fp135;
LIBINT2_REALTYPE fp137;
fp137 = inteval->PB_z[vi] * src0[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp137 + fp134;
target[((hsi*55+25)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp141;
fp141 = 2.0000000000000000e+00 * src1[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + fp141;
LIBINT2_REALTYPE fp139;
fp139 = inteval->oo2z[vi] * fp140;
LIBINT2_REALTYPE fp142;
fp142 = inteval->PB_z[vi] * src0[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp142 + fp139;
target[((hsi*55+24)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp146;
fp146 = 1.0000000000000000e+00 * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + fp146;
LIBINT2_REALTYPE fp144;
fp144 = inteval->oo2z[vi] * fp145;
LIBINT2_REALTYPE fp147;
fp147 = inteval->PB_z[vi] * src0[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp147 + fp144;
target[((hsi*55+23)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp148;
fp148 = inteval->PB_z[vi] * src0[((hsi*45+15)*1+lsi)*1];
target[((hsi*55+22)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp152;
fp152 = 5.0000000000000000e+00 * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + fp152;
LIBINT2_REALTYPE fp150;
fp150 = inteval->oo2z[vi] * fp151;
LIBINT2_REALTYPE fp153;
fp153 = inteval->PB_y[vi] * src0[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp153 + fp150;
target[((hsi*55+21)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp157;
fp157 = 4.0000000000000000e+00 * src1[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + fp157;
LIBINT2_REALTYPE fp155;
fp155 = inteval->oo2z[vi] * fp156;
LIBINT2_REALTYPE fp158;
fp158 = inteval->PB_z[vi] * src0[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp158 + fp155;
target[((hsi*55+20)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp162;
fp162 = 3.0000000000000000e+00 * src1[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + fp162;
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp163;
fp163 = inteval->PB_z[vi] * src0[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp163 + fp160;
target[((hsi*55+19)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp167;
fp167 = 2.0000000000000000e+00 * src1[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + fp167;
LIBINT2_REALTYPE fp165;
fp165 = inteval->oo2z[vi] * fp166;
LIBINT2_REALTYPE fp168;
fp168 = inteval->PB_z[vi] * src0[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp168 + fp165;
target[((hsi*55+18)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp172;
fp172 = 1.0000000000000000e+00 * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + fp172;
LIBINT2_REALTYPE fp170;
fp170 = inteval->oo2z[vi] * fp171;
LIBINT2_REALTYPE fp173;
fp173 = inteval->PB_z[vi] * src0[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp173 + fp170;
target[((hsi*55+17)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp174;
fp174 = inteval->PB_z[vi] * src0[((hsi*45+10)*1+lsi)*1];
target[((hsi*55+16)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp178;
fp178 = 4.0000000000000000e+00 * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + fp178;
LIBINT2_REALTYPE fp176;
fp176 = inteval->oo2z[vi] * fp177;
LIBINT2_REALTYPE fp179;
fp179 = inteval->PB_y[vi] * src0[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp179 + fp176;
target[((hsi*55+15)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp233;
fp233 = 5.0000000000000000e-01 * src2[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = 8.0000000000000000e+00 * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = 0.0000000000000000e+00 + fp235;
LIBINT2_REALTYPE fp232;
fp232 = fp234 - fp233;
LIBINT2_REALTYPE fp231;
fp231 = inteval->oo2z[vi] * fp232;
LIBINT2_REALTYPE fp236;
fp236 = inteval->PB_x[vi] * src0[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = fp236 + fp231;
target[((hsi*55+0)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp188;
fp188 = 2.0000000000000000e+00 * src1[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = 0.0000000000000000e+00 + fp188;
LIBINT2_REALTYPE fp186;
fp186 = inteval->oo2z[vi] * fp187;
LIBINT2_REALTYPE fp189;
fp189 = inteval->PB_z[vi] * src0[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = fp189 + fp186;
target[((hsi*55+13)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp193;
fp193 = 1.0000000000000000e+00 * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = 0.0000000000000000e+00 + fp193;
LIBINT2_REALTYPE fp191;
fp191 = inteval->oo2z[vi] * fp192;
LIBINT2_REALTYPE fp194;
fp194 = inteval->PB_z[vi] * src0[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp194 + fp191;
target[((hsi*55+12)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp195;
fp195 = inteval->PB_z[vi] * src0[((hsi*45+6)*1+lsi)*1];
target[((hsi*55+11)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp199;
fp199 = 3.0000000000000000e+00 * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = 0.0000000000000000e+00 + fp199;
LIBINT2_REALTYPE fp197;
fp197 = inteval->oo2z[vi] * fp198;
LIBINT2_REALTYPE fp200;
fp200 = inteval->PB_y[vi] * src0[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp200 + fp197;
target[((hsi*55+10)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp204;
fp204 = 2.0000000000000000e+00 * src1[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = 0.0000000000000000e+00 + fp204;
LIBINT2_REALTYPE fp202;
fp202 = inteval->oo2z[vi] * fp203;
LIBINT2_REALTYPE fp205;
fp205 = inteval->PB_z[vi] * src0[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp205 + fp202;
target[((hsi*55+9)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp209;
fp209 = 1.0000000000000000e+00 * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = 0.0000000000000000e+00 + fp209;
LIBINT2_REALTYPE fp207;
fp207 = inteval->oo2z[vi] * fp208;
LIBINT2_REALTYPE fp210;
fp210 = inteval->PB_z[vi] * src0[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = fp210 + fp207;
target[((hsi*55+8)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp211;
fp211 = inteval->PB_z[vi] * src0[((hsi*45+3)*1+lsi)*1];
target[((hsi*55+7)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp215;
fp215 = 2.0000000000000000e+00 * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = 0.0000000000000000e+00 + fp215;
LIBINT2_REALTYPE fp213;
fp213 = inteval->oo2z[vi] * fp214;
LIBINT2_REALTYPE fp216;
fp216 = inteval->PB_y[vi] * src0[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = fp216 + fp213;
target[((hsi*55+6)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp220;
fp220 = 1.0000000000000000e+00 * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = 0.0000000000000000e+00 + fp220;
LIBINT2_REALTYPE fp218;
fp218 = inteval->oo2z[vi] * fp219;
LIBINT2_REALTYPE fp221;
fp221 = inteval->PB_z[vi] * src0[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp221 + fp218;
target[((hsi*55+5)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp222;
fp222 = inteval->PB_z[vi] * src0[((hsi*45+1)*1+lsi)*1];
target[((hsi*55+4)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp226;
fp226 = 1.0000000000000000e+00 * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = 0.0000000000000000e+00 + fp226;
LIBINT2_REALTYPE fp224;
fp224 = inteval->oo2z[vi] * fp225;
LIBINT2_REALTYPE fp227;
fp227 = inteval->PB_y[vi] * src0[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp227 + fp224;
target[((hsi*55+3)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp228;
fp228 = inteval->PB_z[vi] * src0[((hsi*45+0)*1+lsi)*1];
target[((hsi*55+2)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp229;
fp229 = inteval->PB_y[vi] * src0[((hsi*45+0)*1+lsi)*1];
target[((hsi*55+1)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp183;
fp183 = 3.0000000000000000e+00 * src1[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = 0.0000000000000000e+00 + fp183;
LIBINT2_REALTYPE fp181;
fp181 = inteval->oo2z[vi] * fp182;
LIBINT2_REALTYPE fp184;
fp184 = inteval->PB_z[vi] * src0[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp184 + fp181;
target[((hsi*55+14)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp3;
fp3 = 8.0000000000000000e+00 * src1[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + fp3;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
fp4 = inteval->PB_z[vi] * src0[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*55+54)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
fp8 = 7.0000000000000000e+00 * src1[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + fp8;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
fp9 = inteval->PB_z[vi] * src0[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp9 + fp6;
target[((hsi*55+53)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
fp13 = 6.0000000000000000e+00 * src1[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + fp13;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PB_z[vi] * src0[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp14 + fp11;
target[((hsi*55+52)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
fp18 = 5.0000000000000000e+00 * src1[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + fp18;
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PB_z[vi] * src0[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp19 + fp16;
target[((hsi*55+51)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
fp23 = 4.0000000000000000e+00 * src1[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + fp23;
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PB_z[vi] * src0[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp24 + fp21;
target[((hsi*55+50)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp28;
fp28 = 3.0000000000000000e+00 * src1[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PB_z[vi] * src0[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp29 + fp26;
target[((hsi*55+49)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp33;
fp33 = 2.0000000000000000e+00 * src1[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + fp33;
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
fp34 = inteval->PB_z[vi] * src0[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp34 + fp31;
target[((hsi*55+48)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
fp38 = 1.0000000000000000e+00 * src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + fp38;
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PB_z[vi] * src0[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp39 + fp36;
target[((hsi*55+47)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PB_z[vi] * src0[((hsi*45+36)*1+lsi)*1];
target[((hsi*55+46)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp44;
fp44 = 8.0000000000000000e+00 * src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + fp44;
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PB_y[vi] * src0[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp45 + fp42;
target[((hsi*55+45)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp49;
fp49 = 7.0000000000000000e+00 * src1[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + fp49;
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PB_z[vi] * src0[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp50 + fp47;
target[((hsi*55+44)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp54;
fp54 = 6.0000000000000000e+00 * src1[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + fp54;
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp55;
fp55 = inteval->PB_z[vi] * src0[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp55 + fp52;
target[((hsi*55+43)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp59;
fp59 = 5.0000000000000000e+00 * src1[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + fp59;
LIBINT2_REALTYPE fp57;
fp57 = inteval->oo2z[vi] * fp58;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PB_z[vi] * src0[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp60 + fp57;
target[((hsi*55+42)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp126;
fp126 = 5.0000000000000000e+00 * src1[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + fp126;
LIBINT2_REALTYPE fp124;
fp124 = inteval->oo2z[vi] * fp125;
LIBINT2_REALTYPE fp127;
fp127 = inteval->PB_z[vi] * src0[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp127 + fp124;
target[((hsi*55+27)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp69;
fp69 = 3.0000000000000000e+00 * src1[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + fp69;
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PB_z[vi] * src0[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp70 + fp67;
target[((hsi*55+40)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp74;
fp74 = 2.0000000000000000e+00 * src1[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + fp74;
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PB_z[vi] * src0[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp75 + fp72;
target[((hsi*55+39)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+00 * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + fp79;
LIBINT2_REALTYPE fp77;
fp77 = inteval->oo2z[vi] * fp78;
LIBINT2_REALTYPE fp80;
fp80 = inteval->PB_z[vi] * src0[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp80 + fp77;
target[((hsi*55+38)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp81;
fp81 = inteval->PB_z[vi] * src0[((hsi*45+28)*1+lsi)*1];
target[((hsi*55+37)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp85;
fp85 = 7.0000000000000000e+00 * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + fp85;
LIBINT2_REALTYPE fp83;
fp83 = inteval->oo2z[vi] * fp84;
LIBINT2_REALTYPE fp86;
fp86 = inteval->PB_y[vi] * src0[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp86 + fp83;
target[((hsi*55+36)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp90;
fp90 = 6.0000000000000000e+00 * src1[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + fp90;
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PB_z[vi] * src0[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp91 + fp88;
target[((hsi*55+35)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp95;
fp95 = 5.0000000000000000e+00 * src1[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + fp95;
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp94;
LIBINT2_REALTYPE fp96;
fp96 = inteval->PB_z[vi] * src0[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp96 + fp93;
target[((hsi*55+34)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp100;
fp100 = 4.0000000000000000e+00 * src1[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + fp100;
LIBINT2_REALTYPE fp98;
fp98 = inteval->oo2z[vi] * fp99;
LIBINT2_REALTYPE fp101;
fp101 = inteval->PB_z[vi] * src0[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp101 + fp98;
target[((hsi*55+33)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp105;
fp105 = 3.0000000000000000e+00 * src1[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + fp105;
LIBINT2_REALTYPE fp103;
fp103 = inteval->oo2z[vi] * fp104;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PB_z[vi] * src0[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp106 + fp103;
target[((hsi*55+32)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp110;
fp110 = 2.0000000000000000e+00 * src1[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + fp110;
LIBINT2_REALTYPE fp108;
fp108 = inteval->oo2z[vi] * fp109;
LIBINT2_REALTYPE fp111;
fp111 = inteval->PB_z[vi] * src0[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp111 + fp108;
target[((hsi*55+31)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + fp115;
LIBINT2_REALTYPE fp113;
fp113 = inteval->oo2z[vi] * fp114;
LIBINT2_REALTYPE fp116;
fp116 = inteval->PB_z[vi] * src0[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp116 + fp113;
target[((hsi*55+30)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp117;
fp117 = inteval->PB_z[vi] * src0[((hsi*45+21)*1+lsi)*1];
target[((hsi*55+29)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp121;
fp121 = 6.0000000000000000e+00 * src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + fp121;
LIBINT2_REALTYPE fp119;
fp119 = inteval->oo2z[vi] * fp120;
LIBINT2_REALTYPE fp122;
fp122 = inteval->PB_y[vi] * src0[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp122 + fp119;
target[((hsi*55+28)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp64;
fp64 = 4.0000000000000000e+00 * src1[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + fp64;
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp65;
fp65 = inteval->PB_z[vi] * src0[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp65 + fp62;
target[((hsi*55+41)*1+lsi)*1] = fp61;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 237 */
}

#ifdef __cplusplus
};
#endif
