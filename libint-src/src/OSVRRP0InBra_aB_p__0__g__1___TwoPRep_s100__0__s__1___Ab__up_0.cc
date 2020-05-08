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
void OSVRRP0InBra_aB_p__0__g__1___TwoPRep_s100__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp119;
fp119 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp119 * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->WP_y[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->PA_y[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
LIBINT2_REALTYPE fp117;
fp117 = fp120 + fp118;
target[((hsi*45+21)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp124;
fp124 = inteval->WP_y[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->PA_y[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp125 + fp124;
target[((hsi*45+20)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp128;
fp128 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp128 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->WP_y[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->PA_y[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp131 + fp130;
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
target[((hsi*45+19)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp134;
fp134 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp134 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->WP_y[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->PA_y[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
LIBINT2_REALTYPE fp132;
fp132 = fp135 + fp133;
target[((hsi*45+18)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp139;
fp139 = inteval->WP_y[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = inteval->PA_y[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp140 + fp139;
target[((hsi*45+17)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp143;
fp143 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_y[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = inteval->PA_y[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
LIBINT2_REALTYPE fp141;
fp141 = fp144 + fp142;
target[((hsi*45+16)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp148;
fp148 = inteval->WP_y[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->PA_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp149 + fp148;
target[((hsi*45+15)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp153;
fp153 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp154 - fp153;
LIBINT2_REALTYPE fp151;
fp151 = 1.0000000000000000e+00 * fp152;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WP_x[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->PA_x[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
LIBINT2_REALTYPE fp150;
fp150 = fp155 + fp151;
target[((hsi*45+14)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp161;
fp161 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp162 - fp161;
LIBINT2_REALTYPE fp159;
fp159 = 1.0000000000000000e+00 * fp160;
LIBINT2_REALTYPE fp164;
fp164 = inteval->WP_x[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->PA_x[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp165 + fp164;
LIBINT2_REALTYPE fp158;
fp158 = fp163 + fp159;
target[((hsi*45+13)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp169;
fp169 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp170 - fp169;
LIBINT2_REALTYPE fp167;
fp167 = 1.0000000000000000e+00 * fp168;
LIBINT2_REALTYPE fp172;
fp172 = inteval->WP_x[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->PA_x[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp166;
fp166 = fp171 + fp167;
target[((hsi*45+12)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp292;
fp292 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp293 - fp292;
LIBINT2_REALTYPE fp290;
fp290 = 1.0000000000000000e+00 * fp291;
LIBINT2_REALTYPE fp296;
fp296 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp295;
fp295 = fp296 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = inteval->WP_x[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = inteval->PA_x[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp299 + fp298;
LIBINT2_REALTYPE fp294;
fp294 = fp297 + fp295;
LIBINT2_REALTYPE fp289;
fp289 = fp294 + fp290;
target[((hsi*45+0)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp185;
fp185 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp186 - fp185;
LIBINT2_REALTYPE fp183;
fp183 = 1.0000000000000000e+00 * fp184;
LIBINT2_REALTYPE fp188;
fp188 = inteval->WP_x[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->PA_x[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp189 + fp188;
LIBINT2_REALTYPE fp182;
fp182 = fp187 + fp183;
target[((hsi*45+10)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp193;
fp193 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp194 - fp193;
LIBINT2_REALTYPE fp191;
fp191 = 1.0000000000000000e+00 * fp192;
LIBINT2_REALTYPE fp197;
fp197 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp196;
fp196 = fp197 * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = inteval->WP_x[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = inteval->PA_x[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp200 + fp199;
LIBINT2_REALTYPE fp195;
fp195 = fp198 + fp196;
LIBINT2_REALTYPE fp190;
fp190 = fp195 + fp191;
target[((hsi*45+9)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp204;
fp204 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp205 - fp204;
LIBINT2_REALTYPE fp202;
fp202 = 1.0000000000000000e+00 * fp203;
LIBINT2_REALTYPE fp208;
fp208 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp207;
fp207 = fp208 * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = inteval->WP_x[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = inteval->PA_x[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp211 + fp210;
LIBINT2_REALTYPE fp206;
fp206 = fp209 + fp207;
LIBINT2_REALTYPE fp201;
fp201 = fp206 + fp202;
target[((hsi*45+8)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp215;
fp215 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp216 - fp215;
LIBINT2_REALTYPE fp213;
fp213 = 1.0000000000000000e+00 * fp214;
LIBINT2_REALTYPE fp219;
fp219 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp218;
fp218 = fp219 * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = inteval->WP_x[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = inteval->PA_x[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp222 + fp221;
LIBINT2_REALTYPE fp217;
fp217 = fp220 + fp218;
LIBINT2_REALTYPE fp212;
fp212 = fp217 + fp213;
target[((hsi*45+7)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp226;
fp226 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp227 - fp226;
LIBINT2_REALTYPE fp224;
fp224 = 1.0000000000000000e+00 * fp225;
LIBINT2_REALTYPE fp230;
fp230 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp229;
fp229 = fp230 * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = inteval->WP_x[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = inteval->PA_x[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp233 + fp232;
LIBINT2_REALTYPE fp228;
fp228 = fp231 + fp229;
LIBINT2_REALTYPE fp223;
fp223 = fp228 + fp224;
target[((hsi*45+6)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp237;
fp237 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = fp238 - fp237;
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * fp236;
LIBINT2_REALTYPE fp241;
fp241 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp240;
fp240 = fp241 * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = inteval->WP_x[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = inteval->PA_x[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp244 + fp243;
LIBINT2_REALTYPE fp239;
fp239 = fp242 + fp240;
LIBINT2_REALTYPE fp234;
fp234 = fp239 + fp235;
target[((hsi*45+5)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp248;
fp248 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp249 - fp248;
LIBINT2_REALTYPE fp246;
fp246 = 1.0000000000000000e+00 * fp247;
LIBINT2_REALTYPE fp252;
fp252 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp251;
fp251 = fp252 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = inteval->WP_x[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = inteval->PA_x[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp255 + fp254;
LIBINT2_REALTYPE fp250;
fp250 = fp253 + fp251;
LIBINT2_REALTYPE fp245;
fp245 = fp250 + fp246;
target[((hsi*45+4)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp259;
fp259 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = fp260 - fp259;
LIBINT2_REALTYPE fp257;
fp257 = 1.0000000000000000e+00 * fp258;
LIBINT2_REALTYPE fp263;
fp263 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp262;
fp262 = fp263 * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = inteval->WP_x[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = inteval->PA_x[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = fp266 + fp265;
LIBINT2_REALTYPE fp261;
fp261 = fp264 + fp262;
LIBINT2_REALTYPE fp256;
fp256 = fp261 + fp257;
target[((hsi*45+3)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp270;
fp270 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp271 - fp270;
LIBINT2_REALTYPE fp268;
fp268 = 1.0000000000000000e+00 * fp269;
LIBINT2_REALTYPE fp274;
fp274 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp273;
fp273 = fp274 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = inteval->WP_x[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = inteval->PA_x[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp277 + fp276;
LIBINT2_REALTYPE fp272;
fp272 = fp275 + fp273;
LIBINT2_REALTYPE fp267;
fp267 = fp272 + fp268;
target[((hsi*45+2)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp281;
fp281 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp282 - fp281;
LIBINT2_REALTYPE fp279;
fp279 = 1.0000000000000000e+00 * fp280;
LIBINT2_REALTYPE fp285;
fp285 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp284;
fp284 = fp285 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = inteval->WP_x[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = inteval->PA_x[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp288 + fp287;
LIBINT2_REALTYPE fp283;
fp283 = fp286 + fp284;
LIBINT2_REALTYPE fp278;
fp278 = fp283 + fp279;
target[((hsi*45+1)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp177;
fp177 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp178 - fp177;
LIBINT2_REALTYPE fp175;
fp175 = 1.0000000000000000e+00 * fp176;
LIBINT2_REALTYPE fp180;
fp180 = inteval->WP_x[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = inteval->PA_x[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = fp181 + fp180;
LIBINT2_REALTYPE fp174;
fp174 = fp179 + fp175;
target[((hsi*45+11)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp2;
fp2 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->WP_z[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
fp8 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp8 * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_z[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
LIBINT2_REALTYPE fp6;
fp6 = fp9 + fp7;
target[((hsi*45+43)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp14;
fp14 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp17 + fp16;
LIBINT2_REALTYPE fp12;
fp12 = fp15 + fp13;
target[((hsi*45+42)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp20;
fp20 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_z[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_z[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
LIBINT2_REALTYPE fp18;
fp18 = fp21 + fp19;
target[((hsi*45+41)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp25;
fp25 = inteval->WP_z[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->PA_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
target[((hsi*45+40)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp29;
fp29 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_z[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->PA_z[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp27;
fp27 = fp30 + fp28;
target[((hsi*45+39)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp35;
fp35 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_z[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->PA_z[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
LIBINT2_REALTYPE fp33;
fp33 = fp36 + fp34;
target[((hsi*45+38)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_z[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
LIBINT2_REALTYPE fp39;
fp39 = fp42 + fp40;
target[((hsi*45+37)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->PA_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
target[((hsi*45+36)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp50;
fp50 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp50 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_z[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->PA_z[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp53 + fp52;
LIBINT2_REALTYPE fp48;
fp48 = fp51 + fp49;
target[((hsi*45+35)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp113;
fp113 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp113 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_y[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->PA_y[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
LIBINT2_REALTYPE fp111;
fp111 = fp114 + fp112;
target[((hsi*45+22)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_z[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->PA_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
target[((hsi*45+33)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_z[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->PA_z[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
target[((hsi*45+32)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_z[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->PA_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
target[((hsi*45+31)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_z[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->PA_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp74 + fp73;
target[((hsi*45+30)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_y[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->PA_y[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp77 + fp76;
target[((hsi*45+29)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp80;
fp80 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_y[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->PA_y[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp83 + fp82;
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
target[((hsi*45+28)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp86;
fp86 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_y[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->PA_y[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp84;
fp84 = fp87 + fp85;
target[((hsi*45+27)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp92;
fp92 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_y[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->PA_y[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp95 + fp94;
LIBINT2_REALTYPE fp90;
fp90 = fp93 + fp91;
target[((hsi*45+26)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp98;
fp98 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp97;
fp97 = fp98 * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_y[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->PA_y[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp101 + fp100;
LIBINT2_REALTYPE fp96;
fp96 = fp99 + fp97;
target[((hsi*45+25)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_y[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->PA_y[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
target[((hsi*45+24)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->WP_y[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->PA_y[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
LIBINT2_REALTYPE fp105;
fp105 = fp108 + fp106;
target[((hsi*45+23)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp56;
fp56 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp56 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_z[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_z[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
LIBINT2_REALTYPE fp54;
fp54 = fp57 + fp55;
target[((hsi*45+34)*1+lsi)*1] = fp54;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 300 */
}

#ifdef __cplusplus
};
#endif