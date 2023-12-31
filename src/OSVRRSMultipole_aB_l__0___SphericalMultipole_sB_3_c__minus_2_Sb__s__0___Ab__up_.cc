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
void OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_3_c__minus_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp137;
fp137 = -5.0000000000000000e-01 * src3[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 5.0000000000000000e+00 * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + fp139;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
LIBINT2_REALTYPE fp135;
fp135 = inteval->oo2z[vi] * fp136;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PA_y[vi] * src0[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp140 + fp135;
target[((hsi*45+21)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp145;
fp145 = 4.0000000000000000e+00 * src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + fp145;
LIBINT2_REALTYPE fp143;
fp143 = fp144 + src4[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->oo2z[vi] * fp143;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PA_z[vi] * src0[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp146 + fp142;
target[((hsi*45+20)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp151;
fp151 = 3.0000000000000000e+00 * src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + fp151;
LIBINT2_REALTYPE fp149;
fp149 = fp150 + src4[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp152;
fp152 = inteval->PA_z[vi] * src0[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp152 + fp148;
target[((hsi*45+19)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp157;
fp157 = 2.0000000000000000e+00 * src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + fp157;
LIBINT2_REALTYPE fp155;
fp155 = fp156 + src4[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->oo2z[vi] * fp155;
LIBINT2_REALTYPE fp158;
fp158 = inteval->PA_z[vi] * src0[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp158 + fp154;
target[((hsi*45+18)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp163;
fp163 = 1.0000000000000000e+00 * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = 0.0000000000000000e+00 + fp163;
LIBINT2_REALTYPE fp161;
fp161 = fp162 + src4[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp164;
fp164 = inteval->PA_z[vi] * src0[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp164 + fp160;
target[((hsi*45+17)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + src4[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->oo2z[vi] * fp167;
LIBINT2_REALTYPE fp168;
fp168 = inteval->PA_z[vi] * src0[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp168 + fp166;
target[((hsi*45+16)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp172;
fp172 = -5.0000000000000000e-01 * src3[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = 4.0000000000000000e+00 * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + fp174;
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp170;
fp170 = inteval->oo2z[vi] * fp171;
LIBINT2_REALTYPE fp175;
fp175 = inteval->PA_y[vi] * src0[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp175 + fp170;
target[((hsi*45+15)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp180;
fp180 = 3.0000000000000000e+00 * src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = 0.0000000000000000e+00 + fp180;
LIBINT2_REALTYPE fp178;
fp178 = fp179 + src4[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = inteval->oo2z[vi] * fp178;
LIBINT2_REALTYPE fp181;
fp181 = inteval->PA_z[vi] * src0[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp181 + fp177;
target[((hsi*45+14)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp186;
fp186 = 2.0000000000000000e+00 * src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + fp186;
LIBINT2_REALTYPE fp184;
fp184 = fp185 + src4[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->oo2z[vi] * fp184;
LIBINT2_REALTYPE fp187;
fp187 = inteval->PA_z[vi] * src0[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp187 + fp183;
target[((hsi*45+13)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp192;
fp192 = 1.0000000000000000e+00 * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + fp192;
LIBINT2_REALTYPE fp190;
fp190 = fp191 + src4[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->oo2z[vi] * fp190;
LIBINT2_REALTYPE fp193;
fp193 = inteval->PA_z[vi] * src0[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp193 + fp189;
target[((hsi*45+12)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp257;
fp257 = 5.0000000000000000e-01 * src2[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = 7.0000000000000000e+00 * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = 0.0000000000000000e+00 + fp259;
LIBINT2_REALTYPE fp256;
fp256 = fp258 - fp257;
LIBINT2_REALTYPE fp255;
fp255 = inteval->oo2z[vi] * fp256;
LIBINT2_REALTYPE fp260;
fp260 = inteval->PA_x[vi] * src0[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp260 + fp255;
target[((hsi*45+0)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp201;
fp201 = -5.0000000000000000e-01 * src3[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = 3.0000000000000000e+00 * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = 0.0000000000000000e+00 + fp203;
LIBINT2_REALTYPE fp200;
fp200 = fp202 + fp201;
LIBINT2_REALTYPE fp199;
fp199 = inteval->oo2z[vi] * fp200;
LIBINT2_REALTYPE fp204;
fp204 = inteval->PA_y[vi] * src0[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp204 + fp199;
target[((hsi*45+10)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp209;
fp209 = 2.0000000000000000e+00 * src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = 0.0000000000000000e+00 + fp209;
LIBINT2_REALTYPE fp207;
fp207 = fp208 + src4[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = inteval->oo2z[vi] * fp207;
LIBINT2_REALTYPE fp210;
fp210 = inteval->PA_z[vi] * src0[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp210 + fp206;
target[((hsi*45+9)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp215;
fp215 = 1.0000000000000000e+00 * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = 0.0000000000000000e+00 + fp215;
LIBINT2_REALTYPE fp213;
fp213 = fp214 + src4[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = inteval->oo2z[vi] * fp213;
LIBINT2_REALTYPE fp216;
fp216 = inteval->PA_z[vi] * src0[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp216 + fp212;
target[((hsi*45+8)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp219;
fp219 = 0.0000000000000000e+00 + src4[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = inteval->oo2z[vi] * fp219;
LIBINT2_REALTYPE fp220;
fp220 = inteval->PA_z[vi] * src0[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp220 + fp218;
target[((hsi*45+7)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp224;
fp224 = -5.0000000000000000e-01 * src3[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = 2.0000000000000000e+00 * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = 0.0000000000000000e+00 + fp226;
LIBINT2_REALTYPE fp223;
fp223 = fp225 + fp224;
LIBINT2_REALTYPE fp222;
fp222 = inteval->oo2z[vi] * fp223;
LIBINT2_REALTYPE fp227;
fp227 = inteval->PA_y[vi] * src0[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp227 + fp222;
target[((hsi*45+6)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp232;
fp232 = 1.0000000000000000e+00 * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = 0.0000000000000000e+00 + fp232;
LIBINT2_REALTYPE fp230;
fp230 = fp231 + src4[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->oo2z[vi] * fp230;
LIBINT2_REALTYPE fp233;
fp233 = inteval->PA_z[vi] * src0[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp233 + fp229;
target[((hsi*45+5)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp236;
fp236 = 0.0000000000000000e+00 + src4[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = inteval->oo2z[vi] * fp236;
LIBINT2_REALTYPE fp237;
fp237 = inteval->PA_z[vi] * src0[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp237 + fp235;
target[((hsi*45+4)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp241;
fp241 = -5.0000000000000000e-01 * src3[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = 1.0000000000000000e+00 * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = 0.0000000000000000e+00 + fp243;
LIBINT2_REALTYPE fp240;
fp240 = fp242 + fp241;
LIBINT2_REALTYPE fp239;
fp239 = inteval->oo2z[vi] * fp240;
LIBINT2_REALTYPE fp244;
fp244 = inteval->PA_y[vi] * src0[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = fp244 + fp239;
target[((hsi*45+3)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp247;
fp247 = 0.0000000000000000e+00 + src4[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = inteval->oo2z[vi] * fp247;
LIBINT2_REALTYPE fp248;
fp248 = inteval->PA_z[vi] * src0[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp248 + fp246;
target[((hsi*45+2)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp252;
fp252 = -5.0000000000000000e-01 * src3[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = 0.0000000000000000e+00 + fp252;
LIBINT2_REALTYPE fp250;
fp250 = inteval->oo2z[vi] * fp251;
LIBINT2_REALTYPE fp253;
fp253 = inteval->PA_y[vi] * src0[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp253 + fp250;
target[((hsi*45+1)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp196;
fp196 = 0.0000000000000000e+00 + src4[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->oo2z[vi] * fp196;
LIBINT2_REALTYPE fp197;
fp197 = inteval->PA_z[vi] * src0[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp197 + fp195;
target[((hsi*45+11)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp4;
fp4 = 7.0000000000000000e+00 * src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src4[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
fp10 = 6.0000000000000000e+00 * src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src4[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*45+43)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
fp16 = 5.0000000000000000e+00 * src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src4[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * src0[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*45+42)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
fp22 = 4.0000000000000000e+00 * src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src4[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_z[vi] * src0[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*45+41)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
fp28 = 3.0000000000000000e+00 * src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src4[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PA_z[vi] * src0[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*45+40)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
fp34 = 2.0000000000000000e+00 * src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src4[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_z[vi] * src0[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp35 + fp31;
target[((hsi*45+39)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp40;
fp40 = 1.0000000000000000e+00 * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src4[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * src0[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp41 + fp37;
target[((hsi*45+38)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src4[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PA_z[vi] * src0[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*45+37)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp49;
fp49 = -5.0000000000000000e-01 * src3[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 7.0000000000000000e+00 * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + fp51;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_y[vi] * src0[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp52 + fp47;
target[((hsi*45+36)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp57;
fp57 = 6.0000000000000000e+00 * src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + fp57;
LIBINT2_REALTYPE fp55;
fp55 = fp56 + src4[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2z[vi] * fp55;
LIBINT2_REALTYPE fp58;
fp58 = inteval->PA_z[vi] * src0[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp58 + fp54;
target[((hsi*45+35)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src4[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->oo2z[vi] * fp132;
LIBINT2_REALTYPE fp133;
fp133 = inteval->PA_z[vi] * src0[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp133 + fp131;
target[((hsi*45+22)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp69;
fp69 = 4.0000000000000000e+00 * src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + fp69;
LIBINT2_REALTYPE fp67;
fp67 = fp68 + src4[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->oo2z[vi] * fp67;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PA_z[vi] * src0[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp70 + fp66;
target[((hsi*45+33)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp75;
fp75 = 3.0000000000000000e+00 * src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + fp75;
LIBINT2_REALTYPE fp73;
fp73 = fp74 + src4[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp76;
fp76 = inteval->PA_z[vi] * src0[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp76 + fp72;
target[((hsi*45+32)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp81;
fp81 = 2.0000000000000000e+00 * src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + fp81;
LIBINT2_REALTYPE fp79;
fp79 = fp80 + src4[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->oo2z[vi] * fp79;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_z[vi] * src0[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp82 + fp78;
target[((hsi*45+31)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp87;
fp87 = 1.0000000000000000e+00 * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + fp87;
LIBINT2_REALTYPE fp85;
fp85 = fp86 + src4[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp88;
fp88 = inteval->PA_z[vi] * src0[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp88 + fp84;
target[((hsi*45+30)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src4[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->oo2z[vi] * fp91;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PA_z[vi] * src0[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp92 + fp90;
target[((hsi*45+29)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp96;
fp96 = -5.0000000000000000e-01 * src3[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 6.0000000000000000e+00 * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + fp98;
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp99;
fp99 = inteval->PA_y[vi] * src0[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp99 + fp94;
target[((hsi*45+28)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp104;
fp104 = 5.0000000000000000e+00 * src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + fp104;
LIBINT2_REALTYPE fp102;
fp102 = fp103 + src4[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->oo2z[vi] * fp102;
LIBINT2_REALTYPE fp105;
fp105 = inteval->PA_z[vi] * src0[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp105 + fp101;
target[((hsi*45+27)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp110;
fp110 = 4.0000000000000000e+00 * src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + fp110;
LIBINT2_REALTYPE fp108;
fp108 = fp109 + src4[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2z[vi] * fp108;
LIBINT2_REALTYPE fp111;
fp111 = inteval->PA_z[vi] * src0[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp111 + fp107;
target[((hsi*45+26)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp116;
fp116 = 3.0000000000000000e+00 * src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + fp116;
LIBINT2_REALTYPE fp114;
fp114 = fp115 + src4[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->oo2z[vi] * fp114;
LIBINT2_REALTYPE fp117;
fp117 = inteval->PA_z[vi] * src0[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp117 + fp113;
target[((hsi*45+25)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp122;
fp122 = 2.0000000000000000e+00 * src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + fp122;
LIBINT2_REALTYPE fp120;
fp120 = fp121 + src4[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->oo2z[vi] * fp120;
LIBINT2_REALTYPE fp123;
fp123 = inteval->PA_z[vi] * src0[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp123 + fp119;
target[((hsi*45+24)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp128;
fp128 = 1.0000000000000000e+00 * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + fp128;
LIBINT2_REALTYPE fp126;
fp126 = fp127 + src4[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->oo2z[vi] * fp126;
LIBINT2_REALTYPE fp129;
fp129 = inteval->PA_z[vi] * src0[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp129 + fp125;
target[((hsi*45+23)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp63;
fp63 = 5.0000000000000000e+00 * src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + fp63;
LIBINT2_REALTYPE fp61;
fp61 = fp62 + src4[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->oo2z[vi] * fp61;
LIBINT2_REALTYPE fp64;
fp64 = inteval->PA_z[vi] * src0[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp64 + fp60;
target[((hsi*45+34)*1+lsi)*1] = fp59;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 261 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
