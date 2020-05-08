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
void OSVRRP1InBra_aB_i__0__p__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp204;
fp204 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp203;
fp203 = fp204 * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->WQ_y[vi] * src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp205 + fp203;
target[((hsi*84+22)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp200;
fp200 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp199;
fp199 = fp200 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = inteval->WQ_z[vi] * src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp201 + fp199;
target[((hsi*84+23)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp196;
fp196 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp195;
fp195 = fp196 * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = inteval->WQ_x[vi] * src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp197 + fp195;
target[((hsi*84+24)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp192;
fp192 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp191;
fp191 = fp192 * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = inteval->WQ_y[vi] * src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp193 + fp191;
target[((hsi*84+25)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp188;
fp188 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp187;
fp187 = fp188 * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->WQ_z[vi] * src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp189 + fp187;
target[((hsi*84+26)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp184;
fp184 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp183;
fp183 = fp184 * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = inteval->WQ_x[vi] * src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp185 + fp183;
target[((hsi*84+27)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp181;
fp181 = inteval->WQ_y[vi] * src0[((hsi*28+9)*1+lsi)*1];
target[((hsi*84+28)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp179;
fp179 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp178;
fp178 = fp179 * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = inteval->WQ_z[vi] * src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp180 + fp178;
target[((hsi*84+29)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp175;
fp175 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp174;
fp174 = fp175 * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = inteval->WQ_x[vi] * src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp176 + fp174;
target[((hsi*84+30)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp271;
fp271 = 6.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp270;
fp270 = fp271 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = inteval->WQ_x[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp272 + fp270;
target[((hsi*84+0)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp168;
fp168 = inteval->WQ_z[vi] * src0[((hsi*28+10)*1+lsi)*1];
target[((hsi*84+32)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp166;
fp166 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp165;
fp165 = fp166 * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = inteval->WQ_x[vi] * src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp167 + fp165;
target[((hsi*84+33)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp162;
fp162 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp161;
fp161 = fp162 * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->WQ_y[vi] * src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp163 + fp161;
target[((hsi*84+34)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp158;
fp158 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp157;
fp157 = fp158 * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = inteval->WQ_z[vi] * src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp159 + fp157;
target[((hsi*84+35)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp154;
fp154 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp153;
fp153 = fp154 * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = inteval->WQ_x[vi] * src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp155 + fp153;
target[((hsi*84+36)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp150;
fp150 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp149;
fp149 = fp150 * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->WQ_y[vi] * src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp151 + fp149;
target[((hsi*84+37)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp146;
fp146 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp145;
fp145 = fp146 * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->WQ_z[vi] * src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp147 + fp145;
target[((hsi*84+38)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp142;
fp142 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp142 * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->WQ_x[vi] * src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp143 + fp141;
target[((hsi*84+39)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp138;
fp138 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp137;
fp137 = fp138 * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->WQ_y[vi] * src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp139 + fp137;
target[((hsi*84+40)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp134;
fp134 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp134 * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->WQ_z[vi] * src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp135 + fp133;
target[((hsi*84+41)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp171;
fp171 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp170;
fp170 = fp171 * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->WQ_y[vi] * src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp172 + fp170;
target[((hsi*84+31)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp268;
fp268 = inteval->WQ_y[vi] * src0[((hsi*28+0)*1+lsi)*1];
target[((hsi*84+1)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp267;
fp267 = inteval->WQ_z[vi] * src0[((hsi*28+0)*1+lsi)*1];
target[((hsi*84+2)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp265;
fp265 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp264;
fp264 = fp265 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = inteval->WQ_x[vi] * src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp266 + fp264;
target[((hsi*84+3)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp261;
fp261 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp260;
fp260 = fp261 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = inteval->WQ_y[vi] * src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp262 + fp260;
target[((hsi*84+4)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp258;
fp258 = inteval->WQ_z[vi] * src0[((hsi*28+1)*1+lsi)*1];
target[((hsi*84+5)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp256;
fp256 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp255;
fp255 = fp256 * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = inteval->WQ_x[vi] * src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp257 + fp255;
target[((hsi*84+6)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp253;
fp253 = inteval->WQ_y[vi] * src0[((hsi*28+2)*1+lsi)*1];
target[((hsi*84+7)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp251;
fp251 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp250;
fp250 = fp251 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = inteval->WQ_z[vi] * src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp252 + fp250;
target[((hsi*84+8)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp247;
fp247 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp246;
fp246 = fp247 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = inteval->WQ_x[vi] * src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp248 + fp246;
target[((hsi*84+9)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp208;
fp208 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp207;
fp207 = fp208 * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = inteval->WQ_x[vi] * src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = fp209 + fp207;
target[((hsi*84+21)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp240;
fp240 = inteval->WQ_z[vi] * src0[((hsi*28+3)*1+lsi)*1];
target[((hsi*84+11)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp238;
fp238 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp237;
fp237 = fp238 * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = inteval->WQ_x[vi] * src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = fp239 + fp237;
target[((hsi*84+12)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp234;
fp234 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp233;
fp233 = fp234 * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = inteval->WQ_y[vi] * src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp235 + fp233;
target[((hsi*84+13)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp230;
fp230 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp229;
fp229 = fp230 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = inteval->WQ_z[vi] * src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp231 + fp229;
target[((hsi*84+14)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp226;
fp226 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp225;
fp225 = fp226 * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = inteval->WQ_x[vi] * src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = fp227 + fp225;
target[((hsi*84+15)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp223;
fp223 = inteval->WQ_y[vi] * src0[((hsi*28+5)*1+lsi)*1];
target[((hsi*84+16)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp221;
fp221 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp220;
fp220 = fp221 * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = inteval->WQ_z[vi] * src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp222 + fp220;
target[((hsi*84+17)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp217;
fp217 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp216;
fp216 = fp217 * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = inteval->WQ_x[vi] * src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp218 + fp216;
target[((hsi*84+18)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp213;
fp213 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp212;
fp212 = fp213 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = inteval->WQ_y[vi] * src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp214 + fp212;
target[((hsi*84+19)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp210;
fp210 = inteval->WQ_z[vi] * src0[((hsi*28+6)*1+lsi)*1];
target[((hsi*84+20)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp243;
fp243 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp242;
fp242 = fp243 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = inteval->WQ_y[vi] * src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp244 + fp242;
target[((hsi*84+10)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp54;
fp54 = 6.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->WQ_y[vi] * src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp55 + fp53;
target[((hsi*84+64)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WQ_z[vi] * src0[((hsi*28+21)*1+lsi)*1];
target[((hsi*84+65)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WQ_x[vi] * src0[((hsi*28+22)*1+lsi)*1];
target[((hsi*84+66)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp48;
fp48 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->WQ_y[vi] * src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp49 + fp47;
target[((hsi*84+67)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp44;
fp44 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_z[vi] * src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*84+68)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_x[vi] * src0[((hsi*28+23)*1+lsi)*1];
target[((hsi*84+69)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp39;
fp39 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp38;
fp38 = fp39 * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->WQ_y[vi] * src0[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp40 + fp38;
target[((hsi*84+70)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp35;
fp35 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->WQ_z[vi] * src0[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp36 + fp34;
target[((hsi*84+71)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp32;
fp32 = inteval->WQ_x[vi] * src0[((hsi*28+24)*1+lsi)*1];
target[((hsi*84+72)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp130;
fp130 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp130 * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->WQ_x[vi] * src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp131 + fp129;
target[((hsi*84+42)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp26;
fp26 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->WQ_z[vi] * src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
target[((hsi*84+74)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WQ_x[vi] * src0[((hsi*28+25)*1+lsi)*1];
target[((hsi*84+75)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp21;
fp21 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp21 * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->WQ_y[vi] * src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp22 + fp20;
target[((hsi*84+76)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp17;
fp17 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp16;
fp16 = fp17 * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->WQ_z[vi] * src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp18 + fp16;
target[((hsi*84+77)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WQ_x[vi] * src0[((hsi*28+26)*1+lsi)*1];
target[((hsi*84+78)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->WQ_y[vi] * src0[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
target[((hsi*84+79)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp8;
fp8 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp8 * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->WQ_z[vi] * src0[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp9 + fp7;
target[((hsi*84+80)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WQ_x[vi] * src0[((hsi*28+27)*1+lsi)*1];
target[((hsi*84+81)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp4;
fp4 = inteval->WQ_y[vi] * src0[((hsi*28+27)*1+lsi)*1];
target[((hsi*84+82)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp2;
fp2 = 6.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->WQ_z[vi] * src0[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*84+83)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp30;
fp30 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->WQ_y[vi] * src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*84+73)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp127;
fp127 = inteval->WQ_y[vi] * src0[((hsi*28+14)*1+lsi)*1];
target[((hsi*84+43)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp125;
fp125 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = inteval->WQ_z[vi] * src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
target[((hsi*84+44)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp121;
fp121 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->WQ_x[vi] * src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp122 + fp120;
target[((hsi*84+45)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp117;
fp117 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_y[vi] * src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp118 + fp116;
target[((hsi*84+46)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WQ_z[vi] * src0[((hsi*28+15)*1+lsi)*1];
target[((hsi*84+47)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp112;
fp112 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp111;
fp111 = fp112 * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->WQ_x[vi] * src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp113 + fp111;
target[((hsi*84+48)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp108;
fp108 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp108 * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->WQ_y[vi] * src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp109 + fp107;
target[((hsi*84+49)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp104;
fp104 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->WQ_z[vi] * src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
target[((hsi*84+50)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp100;
fp100 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_x[vi] * src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp101 + fp99;
target[((hsi*84+51)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WQ_x[vi] * src0[((hsi*28+21)*1+lsi)*1];
target[((hsi*84+63)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp92;
fp92 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->WQ_z[vi] * src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp93 + fp91;
target[((hsi*84+53)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp88;
fp88 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp88 * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_x[vi] * src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp89 + fp87;
target[((hsi*84+54)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp84;
fp84 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp84 * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->WQ_y[vi] * src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp85 + fp83;
target[((hsi*84+55)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp80;
fp80 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->WQ_z[vi] * src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
target[((hsi*84+56)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->WQ_x[vi] * src0[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*84+57)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp72;
fp72 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->WQ_y[vi] * src0[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp73 + fp71;
target[((hsi*84+58)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp68;
fp68 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->WQ_z[vi] * src0[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp69 + fp67;
target[((hsi*84+59)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp64;
fp64 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp64 * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_x[vi] * src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp65 + fp63;
target[((hsi*84+60)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WQ_y[vi] * src0[((hsi*28+20)*1+lsi)*1];
target[((hsi*84+61)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp59;
fp59 = 5.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->WQ_z[vi] * src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp60 + fp58;
target[((hsi*84+62)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp96;
fp96 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp95;
fp95 = fp96 * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->WQ_y[vi] * src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp97 + fp95;
target[((hsi*84+52)*1+lsi)*1] = fp94;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 273 */
}

#ifdef __cplusplus
};
#endif
