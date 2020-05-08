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
void HRRPart1bra0ket0g001d(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, int highdim) {

LIBINT2_REALTYPE*const  stack = target;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int hsi = 0; hsi<highdim; hsi++) {
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp197;
fp197 = inteval->CD_x[vi] * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = src0[((hsi*63+12)*1+lsi)*1] + fp197;
target[((hsi*90+24)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp195;
fp195 = inteval->CD_y[vi] * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = src0[((hsi*63+21)*1+lsi)*1] + fp195;
target[((hsi*90+25)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp191;
fp191 = 1.0000000000000000e+00 * src2[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = inteval->CD_z[vi] * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = src0[((hsi*63+24)*1+lsi)*1] + fp193;
LIBINT2_REALTYPE fp190;
fp190 = fp192 + fp191;
target[((hsi*90+26)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp189;
fp189 = inteval->CD_y[vi] * src1[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = src0[((hsi*63+22)*1+lsi)*1] + fp189;
target[((hsi*90+27)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp185;
fp185 = 1.0000000000000000e+00 * src2[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = inteval->CD_z[vi] * src1[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = src0[((hsi*63+25)*1+lsi)*1] + fp187;
LIBINT2_REALTYPE fp184;
fp184 = fp186 + fp185;
target[((hsi*90+28)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp181;
fp181 = 1.0000000000000000e+00 * src2[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->CD_z[vi] * src1[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = src0[((hsi*63+26)*1+lsi)*1] + fp183;
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
target[((hsi*90+29)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp179;
fp179 = inteval->CD_x[vi] * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = src0[((hsi*63+15)*1+lsi)*1] + fp179;
target[((hsi*90+30)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp177;
fp177 = inteval->CD_y[vi] * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = src0[((hsi*63+24)*1+lsi)*1] + fp177;
target[((hsi*90+31)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp173;
fp173 = 1.0000000000000000e+00 * src2[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = inteval->CD_z[vi] * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = src0[((hsi*63+27)*1+lsi)*1] + fp175;
LIBINT2_REALTYPE fp172;
fp172 = fp174 + fp173;
target[((hsi*90+32)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp171;
fp171 = inteval->CD_y[vi] * src1[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = src0[((hsi*63+25)*1+lsi)*1] + fp171;
target[((hsi*90+33)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp269;
fp269 = inteval->CD_x[vi] * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = src0[((hsi*63+0)*1+lsi)*1] + fp269;
target[((hsi*90+0)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp163;
fp163 = 1.0000000000000000e+00 * src2[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->CD_z[vi] * src1[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = src0[((hsi*63+29)*1+lsi)*1] + fp165;
LIBINT2_REALTYPE fp162;
fp162 = fp164 + fp163;
target[((hsi*90+35)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp161;
fp161 = inteval->CD_x[vi] * src1[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = src0[((hsi*63+18)*1+lsi)*1] + fp161;
target[((hsi*90+36)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp159;
fp159 = inteval->CD_y[vi] * src1[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*63+30)*1+lsi)*1] + fp159;
target[((hsi*90+37)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp155;
fp155 = 1.0000000000000000e+00 * src2[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->CD_z[vi] * src1[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = src0[((hsi*63+33)*1+lsi)*1] + fp157;
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
target[((hsi*90+38)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp153;
fp153 = inteval->CD_y[vi] * src1[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*63+31)*1+lsi)*1] + fp153;
target[((hsi*90+39)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp149;
fp149 = 1.0000000000000000e+00 * src2[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->CD_z[vi] * src1[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = src0[((hsi*63+34)*1+lsi)*1] + fp151;
LIBINT2_REALTYPE fp148;
fp148 = fp150 + fp149;
target[((hsi*90+40)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp145;
fp145 = 1.0000000000000000e+00 * src2[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->CD_z[vi] * src1[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = src0[((hsi*63+35)*1+lsi)*1] + fp147;
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
target[((hsi*90+41)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp143;
fp143 = inteval->CD_x[vi] * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = src0[((hsi*63+21)*1+lsi)*1] + fp143;
target[((hsi*90+42)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp141;
fp141 = inteval->CD_y[vi] * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src0[((hsi*63+33)*1+lsi)*1] + fp141;
target[((hsi*90+43)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp137;
fp137 = 1.0000000000000000e+00 * src2[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->CD_z[vi] * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = src0[((hsi*63+36)*1+lsi)*1] + fp139;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
target[((hsi*90+44)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp167;
fp167 = 1.0000000000000000e+00 * src2[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = inteval->CD_z[vi] * src1[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = src0[((hsi*63+28)*1+lsi)*1] + fp169;
LIBINT2_REALTYPE fp166;
fp166 = fp168 + fp167;
target[((hsi*90+34)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp267;
fp267 = inteval->CD_y[vi] * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = src0[((hsi*63+3)*1+lsi)*1] + fp267;
target[((hsi*90+1)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp263;
fp263 = 1.0000000000000000e+00 * src2[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = inteval->CD_z[vi] * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = src0[((hsi*63+6)*1+lsi)*1] + fp265;
LIBINT2_REALTYPE fp262;
fp262 = fp264 + fp263;
target[((hsi*90+2)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp261;
fp261 = inteval->CD_y[vi] * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = src0[((hsi*63+4)*1+lsi)*1] + fp261;
target[((hsi*90+3)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp257;
fp257 = 1.0000000000000000e+00 * src2[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = inteval->CD_z[vi] * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = src0[((hsi*63+7)*1+lsi)*1] + fp259;
LIBINT2_REALTYPE fp256;
fp256 = fp258 + fp257;
target[((hsi*90+4)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp253;
fp253 = 1.0000000000000000e+00 * src2[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = inteval->CD_z[vi] * src1[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = src0[((hsi*63+8)*1+lsi)*1] + fp255;
LIBINT2_REALTYPE fp252;
fp252 = fp254 + fp253;
target[((hsi*90+5)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp251;
fp251 = inteval->CD_x[vi] * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = src0[((hsi*63+3)*1+lsi)*1] + fp251;
target[((hsi*90+6)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp249;
fp249 = inteval->CD_y[vi] * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = src0[((hsi*63+9)*1+lsi)*1] + fp249;
target[((hsi*90+7)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp245;
fp245 = 1.0000000000000000e+00 * src2[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = inteval->CD_z[vi] * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = src0[((hsi*63+12)*1+lsi)*1] + fp247;
LIBINT2_REALTYPE fp244;
fp244 = fp246 + fp245;
target[((hsi*90+8)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp243;
fp243 = inteval->CD_y[vi] * src1[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = src0[((hsi*63+10)*1+lsi)*1] + fp243;
target[((hsi*90+9)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp239;
fp239 = 1.0000000000000000e+00 * src2[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = inteval->CD_z[vi] * src1[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = src0[((hsi*63+13)*1+lsi)*1] + fp241;
LIBINT2_REALTYPE fp238;
fp238 = fp240 + fp239;
target[((hsi*90+10)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp199;
fp199 = 1.0000000000000000e+00 * src2[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = inteval->CD_z[vi] * src1[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = src0[((hsi*63+23)*1+lsi)*1] + fp201;
LIBINT2_REALTYPE fp198;
fp198 = fp200 + fp199;
target[((hsi*90+23)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp233;
fp233 = inteval->CD_x[vi] * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = src0[((hsi*63+6)*1+lsi)*1] + fp233;
target[((hsi*90+12)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp231;
fp231 = inteval->CD_y[vi] * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = src0[((hsi*63+12)*1+lsi)*1] + fp231;
target[((hsi*90+13)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp227;
fp227 = 1.0000000000000000e+00 * src2[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->CD_z[vi] * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = src0[((hsi*63+15)*1+lsi)*1] + fp229;
LIBINT2_REALTYPE fp226;
fp226 = fp228 + fp227;
target[((hsi*90+14)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp225;
fp225 = inteval->CD_y[vi] * src1[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = src0[((hsi*63+13)*1+lsi)*1] + fp225;
target[((hsi*90+15)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp221;
fp221 = 1.0000000000000000e+00 * src2[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = inteval->CD_z[vi] * src1[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = src0[((hsi*63+16)*1+lsi)*1] + fp223;
LIBINT2_REALTYPE fp220;
fp220 = fp222 + fp221;
target[((hsi*90+16)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp217;
fp217 = 1.0000000000000000e+00 * src2[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = inteval->CD_z[vi] * src1[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = src0[((hsi*63+17)*1+lsi)*1] + fp219;
LIBINT2_REALTYPE fp216;
fp216 = fp218 + fp217;
target[((hsi*90+17)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp215;
fp215 = inteval->CD_x[vi] * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = src0[((hsi*63+9)*1+lsi)*1] + fp215;
target[((hsi*90+18)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp213;
fp213 = inteval->CD_y[vi] * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = src0[((hsi*63+18)*1+lsi)*1] + fp213;
target[((hsi*90+19)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp209;
fp209 = 1.0000000000000000e+00 * src2[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = inteval->CD_z[vi] * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = src0[((hsi*63+21)*1+lsi)*1] + fp211;
LIBINT2_REALTYPE fp208;
fp208 = fp210 + fp209;
target[((hsi*90+20)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp207;
fp207 = inteval->CD_y[vi] * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = src0[((hsi*63+19)*1+lsi)*1] + fp207;
target[((hsi*90+21)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp203;
fp203 = 1.0000000000000000e+00 * src2[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->CD_z[vi] * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*63+22)*1+lsi)*1] + fp205;
LIBINT2_REALTYPE fp202;
fp202 = fp204 + fp203;
target[((hsi*90+22)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * src2[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = inteval->CD_z[vi] * src1[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = src0[((hsi*63+14)*1+lsi)*1] + fp237;
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
target[((hsi*90+11)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp63;
fp63 = inteval->CD_y[vi] * src1[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*63+49)*1+lsi)*1] + fp63;
target[((hsi*90+69)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * src2[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->CD_z[vi] * src1[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*63+52)*1+lsi)*1] + fp61;
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
target[((hsi*90+70)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * src2[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_z[vi] * src1[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src0[((hsi*63+53)*1+lsi)*1] + fp57;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
target[((hsi*90+71)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp53;
fp53 = inteval->CD_x[vi] * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = src0[((hsi*63+36)*1+lsi)*1] + fp53;
target[((hsi*90+72)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp51;
fp51 = inteval->CD_y[vi] * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*63+51)*1+lsi)*1] + fp51;
target[((hsi*90+73)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * src2[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->CD_z[vi] * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*63+54)*1+lsi)*1] + fp49;
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
target[((hsi*90+74)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp45;
fp45 = inteval->CD_y[vi] * src1[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*63+52)*1+lsi)*1] + fp45;
target[((hsi*90+75)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * src2[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->CD_z[vi] * src1[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*63+55)*1+lsi)*1] + fp43;
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
target[((hsi*90+76)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * src2[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_z[vi] * src1[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*63+56)*1+lsi)*1] + fp39;
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
target[((hsi*90+77)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp35;
fp35 = inteval->CD_x[vi] * src1[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*63+39)*1+lsi)*1] + fp35;
target[((hsi*90+78)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp135;
fp135 = inteval->CD_y[vi] * src1[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = src0[((hsi*63+34)*1+lsi)*1] + fp135;
target[((hsi*90+45)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp29;
fp29 = 1.0000000000000000e+00 * src2[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->CD_z[vi] * src1[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*63+57)*1+lsi)*1] + fp31;
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
target[((hsi*90+80)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp27;
fp27 = inteval->CD_y[vi] * src1[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*63+55)*1+lsi)*1] + fp27;
target[((hsi*90+81)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp23;
fp23 = 1.0000000000000000e+00 * src2[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->CD_z[vi] * src1[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src0[((hsi*63+58)*1+lsi)*1] + fp25;
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
target[((hsi*90+82)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * src2[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->CD_z[vi] * src1[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src0[((hsi*63+59)*1+lsi)*1] + fp21;
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
target[((hsi*90+83)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp17;
fp17 = inteval->CD_x[vi] * src1[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*63+42)*1+lsi)*1] + fp17;
target[((hsi*90+84)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp15;
fp15 = inteval->CD_y[vi] * src1[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*63+57)*1+lsi)*1] + fp15;
target[((hsi*90+85)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * src2[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->CD_z[vi] * src1[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*63+60)*1+lsi)*1] + fp13;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*90+86)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp9;
fp9 = inteval->CD_y[vi] * src1[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*63+58)*1+lsi)*1] + fp9;
target[((hsi*90+87)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * src2[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->CD_z[vi] * src1[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*63+61)*1+lsi)*1] + fp7;
LIBINT2_REALTYPE fp4;
fp4 = fp6 + fp5;
target[((hsi*90+88)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * src2[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->CD_z[vi] * src1[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*63+62)*1+lsi)*1] + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*90+89)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp33;
fp33 = inteval->CD_y[vi] * src1[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*63+54)*1+lsi)*1] + fp33;
target[((hsi*90+79)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp131;
fp131 = 1.0000000000000000e+00 * src2[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->CD_z[vi] * src1[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = src0[((hsi*63+37)*1+lsi)*1] + fp133;
LIBINT2_REALTYPE fp130;
fp130 = fp132 + fp131;
target[((hsi*90+46)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp127;
fp127 = 1.0000000000000000e+00 * src2[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->CD_z[vi] * src1[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*63+38)*1+lsi)*1] + fp129;
LIBINT2_REALTYPE fp126;
fp126 = fp128 + fp127;
target[((hsi*90+47)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp125;
fp125 = inteval->CD_x[vi] * src1[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*63+24)*1+lsi)*1] + fp125;
target[((hsi*90+48)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp123;
fp123 = inteval->CD_y[vi] * src1[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = src0[((hsi*63+36)*1+lsi)*1] + fp123;
target[((hsi*90+49)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp119;
fp119 = 1.0000000000000000e+00 * src2[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->CD_z[vi] * src1[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*63+39)*1+lsi)*1] + fp121;
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
target[((hsi*90+50)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp117;
fp117 = inteval->CD_y[vi] * src1[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src0[((hsi*63+37)*1+lsi)*1] + fp117;
target[((hsi*90+51)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * src2[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->CD_z[vi] * src1[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = src0[((hsi*63+40)*1+lsi)*1] + fp115;
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
target[((hsi*90+52)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp109;
fp109 = 1.0000000000000000e+00 * src2[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->CD_z[vi] * src1[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*63+41)*1+lsi)*1] + fp111;
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
target[((hsi*90+53)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp107;
fp107 = inteval->CD_x[vi] * src1[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = src0[((hsi*63+27)*1+lsi)*1] + fp107;
target[((hsi*90+54)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp105;
fp105 = inteval->CD_y[vi] * src1[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src0[((hsi*63+39)*1+lsi)*1] + fp105;
target[((hsi*90+55)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * src2[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->CD_z[vi] * src1[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*63+51)*1+lsi)*1] + fp67;
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
target[((hsi*90+68)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp99;
fp99 = inteval->CD_y[vi] * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*63+40)*1+lsi)*1] + fp99;
target[((hsi*90+57)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * src2[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->CD_z[vi] * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = src0[((hsi*63+43)*1+lsi)*1] + fp97;
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
target[((hsi*90+58)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * src2[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->CD_z[vi] * src1[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*63+44)*1+lsi)*1] + fp93;
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
target[((hsi*90+59)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp89;
fp89 = inteval->CD_x[vi] * src1[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*63+30)*1+lsi)*1] + fp89;
target[((hsi*90+60)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp87;
fp87 = inteval->CD_y[vi] * src1[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*63+45)*1+lsi)*1] + fp87;
target[((hsi*90+61)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * src2[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->CD_z[vi] * src1[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src0[((hsi*63+48)*1+lsi)*1] + fp85;
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
target[((hsi*90+62)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp81;
fp81 = inteval->CD_y[vi] * src1[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src0[((hsi*63+46)*1+lsi)*1] + fp81;
target[((hsi*90+63)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp77;
fp77 = 1.0000000000000000e+00 * src2[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->CD_z[vi] * src1[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*63+49)*1+lsi)*1] + fp79;
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
target[((hsi*90+64)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp73;
fp73 = 1.0000000000000000e+00 * src2[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->CD_z[vi] * src1[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src0[((hsi*63+50)*1+lsi)*1] + fp75;
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
target[((hsi*90+65)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp71;
fp71 = inteval->CD_x[vi] * src1[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*63+33)*1+lsi)*1] + fp71;
target[((hsi*90+66)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp69;
fp69 = inteval->CD_y[vi] * src1[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*63+48)*1+lsi)*1] + fp69;
target[((hsi*90+67)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * src2[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->CD_z[vi] * src1[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*63+42)*1+lsi)*1] + fp103;
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
target[((hsi*90+56)*1+lsi)*1] = fp100;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 270 */
}

#ifdef __cplusplus
};
#endif
