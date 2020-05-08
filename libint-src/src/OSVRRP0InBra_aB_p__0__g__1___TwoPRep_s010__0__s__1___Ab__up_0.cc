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
void OSVRRP0InBra_aB_p__0__g__1___TwoPRep_s010__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp160;
fp160 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp161 - fp160;
LIBINT2_REALTYPE fp158;
fp158 = 1.0000000000000000e+00 * fp159;
LIBINT2_REALTYPE fp164;
fp164 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp163;
fp163 = fp164 * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->WP_y[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = inteval->PA_y[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp167 + fp166;
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
LIBINT2_REALTYPE fp157;
fp157 = fp162 + fp158;
target[((hsi*45+21)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp171;
fp171 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp172 - fp171;
LIBINT2_REALTYPE fp169;
fp169 = 1.0000000000000000e+00 * fp170;
LIBINT2_REALTYPE fp174;
fp174 = inteval->WP_y[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = inteval->PA_y[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp175 + fp174;
LIBINT2_REALTYPE fp168;
fp168 = fp173 + fp169;
target[((hsi*45+20)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp179;
fp179 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp180 - fp179;
LIBINT2_REALTYPE fp177;
fp177 = 1.0000000000000000e+00 * fp178;
LIBINT2_REALTYPE fp183;
fp183 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp182;
fp182 = fp183 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = inteval->WP_y[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = inteval->PA_y[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp186 + fp185;
LIBINT2_REALTYPE fp181;
fp181 = fp184 + fp182;
LIBINT2_REALTYPE fp176;
fp176 = fp181 + fp177;
target[((hsi*45+19)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp190;
fp190 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp191 - fp190;
LIBINT2_REALTYPE fp188;
fp188 = 1.0000000000000000e+00 * fp189;
LIBINT2_REALTYPE fp194;
fp194 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp193;
fp193 = fp194 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = inteval->WP_y[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = inteval->PA_y[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp197 + fp196;
LIBINT2_REALTYPE fp192;
fp192 = fp195 + fp193;
LIBINT2_REALTYPE fp187;
fp187 = fp192 + fp188;
target[((hsi*45+18)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp201;
fp201 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp202 - fp201;
LIBINT2_REALTYPE fp199;
fp199 = 1.0000000000000000e+00 * fp200;
LIBINT2_REALTYPE fp204;
fp204 = inteval->WP_y[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->PA_y[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp205 + fp204;
LIBINT2_REALTYPE fp198;
fp198 = fp203 + fp199;
target[((hsi*45+17)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp209;
fp209 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp210 - fp209;
LIBINT2_REALTYPE fp207;
fp207 = 1.0000000000000000e+00 * fp208;
LIBINT2_REALTYPE fp213;
fp213 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp212;
fp212 = fp213 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = inteval->WP_y[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = inteval->PA_y[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp216 + fp215;
LIBINT2_REALTYPE fp211;
fp211 = fp214 + fp212;
LIBINT2_REALTYPE fp206;
fp206 = fp211 + fp207;
target[((hsi*45+16)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp220;
fp220 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp221 - fp220;
LIBINT2_REALTYPE fp218;
fp218 = 1.0000000000000000e+00 * fp219;
LIBINT2_REALTYPE fp223;
fp223 = inteval->WP_y[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = inteval->PA_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp224 + fp223;
LIBINT2_REALTYPE fp217;
fp217 = fp222 + fp218;
target[((hsi*45+15)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp226;
fp226 = inteval->WP_x[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = inteval->PA_x[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp227 + fp226;
target[((hsi*45+14)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp229;
fp229 = inteval->WP_x[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = inteval->PA_x[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp230 + fp229;
target[((hsi*45+13)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp232;
fp232 = inteval->WP_x[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = inteval->PA_x[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp233 + fp232;
target[((hsi*45+12)*1+lsi)*1] = fp231;
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
target[((hsi*45+0)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp238;
fp238 = inteval->WP_x[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = inteval->PA_x[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp239 + fp238;
target[((hsi*45+10)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp242;
fp242 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp241;
fp241 = fp242 * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = inteval->WP_x[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = inteval->PA_x[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp245 + fp244;
LIBINT2_REALTYPE fp240;
fp240 = fp243 + fp241;
target[((hsi*45+9)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp248;
fp248 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp247;
fp247 = fp248 * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = inteval->WP_x[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = inteval->PA_x[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp251 + fp250;
LIBINT2_REALTYPE fp246;
fp246 = fp249 + fp247;
target[((hsi*45+8)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp254;
fp254 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp253;
fp253 = fp254 * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = inteval->WP_x[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = inteval->PA_x[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = fp257 + fp256;
LIBINT2_REALTYPE fp252;
fp252 = fp255 + fp253;
target[((hsi*45+7)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp260;
fp260 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp259;
fp259 = fp260 * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = inteval->WP_x[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = inteval->PA_x[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp263 + fp262;
LIBINT2_REALTYPE fp258;
fp258 = fp261 + fp259;
target[((hsi*45+6)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp266;
fp266 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp265;
fp265 = fp266 * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = inteval->WP_x[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = inteval->PA_x[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp269 + fp268;
LIBINT2_REALTYPE fp264;
fp264 = fp267 + fp265;
target[((hsi*45+5)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp272;
fp272 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp271;
fp271 = fp272 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = inteval->WP_x[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = inteval->PA_x[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = fp275 + fp274;
LIBINT2_REALTYPE fp270;
fp270 = fp273 + fp271;
target[((hsi*45+4)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp278;
fp278 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp277;
fp277 = fp278 * src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = inteval->WP_x[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = inteval->PA_x[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = fp281 + fp280;
LIBINT2_REALTYPE fp276;
fp276 = fp279 + fp277;
target[((hsi*45+3)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp284;
fp284 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp283;
fp283 = fp284 * src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = inteval->WP_x[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = inteval->PA_x[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = fp287 + fp286;
LIBINT2_REALTYPE fp282;
fp282 = fp285 + fp283;
target[((hsi*45+2)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp290;
fp290 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp289;
fp289 = fp290 * src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = inteval->WP_x[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->PA_x[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp293 + fp292;
LIBINT2_REALTYPE fp288;
fp288 = fp291 + fp289;
target[((hsi*45+1)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp235;
fp235 = inteval->WP_x[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = inteval->PA_x[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
target[((hsi*45+11)*1+lsi)*1] = fp234;
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
LIBINT2_REALTYPE fp149;
fp149 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp150 - fp149;
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * fp148;
LIBINT2_REALTYPE fp153;
fp153 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp152;
fp152 = fp153 * src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = inteval->WP_y[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = inteval->PA_y[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp151;
fp151 = fp154 + fp152;
LIBINT2_REALTYPE fp146;
fp146 = fp151 + fp147;
target[((hsi*45+22)*1+lsi)*1] = fp146;
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
LIBINT2_REALTYPE fp78;
fp78 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp79 - fp78;
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+00 * fp77;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_y[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_y[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
LIBINT2_REALTYPE fp75;
fp75 = fp80 + fp76;
target[((hsi*45+29)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp86;
fp86 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp87 - fp86;
LIBINT2_REALTYPE fp84;
fp84 = 1.0000000000000000e+00 * fp85;
LIBINT2_REALTYPE fp90;
fp90 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_y[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->PA_y[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp93 + fp92;
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
LIBINT2_REALTYPE fp83;
fp83 = fp88 + fp84;
target[((hsi*45+28)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp97;
fp97 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp98 - fp97;
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * fp96;
LIBINT2_REALTYPE fp101;
fp101 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_y[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->PA_y[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
LIBINT2_REALTYPE fp94;
fp94 = fp99 + fp95;
target[((hsi*45+27)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp108;
fp108 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp109 - fp108;
LIBINT2_REALTYPE fp106;
fp106 = 1.0000000000000000e+00 * fp107;
LIBINT2_REALTYPE fp112;
fp112 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp111;
fp111 = fp112 * src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_y[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->PA_y[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp115 + fp114;
LIBINT2_REALTYPE fp110;
fp110 = fp113 + fp111;
LIBINT2_REALTYPE fp105;
fp105 = fp110 + fp106;
target[((hsi*45+26)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp119;
fp119 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = fp120 - fp119;
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * fp118;
LIBINT2_REALTYPE fp123;
fp123 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp122;
fp122 = fp123 * src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->WP_y[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = inteval->PA_y[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp126 + fp125;
LIBINT2_REALTYPE fp121;
fp121 = fp124 + fp122;
LIBINT2_REALTYPE fp116;
fp116 = fp121 + fp117;
target[((hsi*45+25)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp130;
fp130 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp131 - fp130;
LIBINT2_REALTYPE fp128;
fp128 = 1.0000000000000000e+00 * fp129;
LIBINT2_REALTYPE fp133;
fp133 = inteval->WP_y[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = inteval->PA_y[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp134 + fp133;
LIBINT2_REALTYPE fp127;
fp127 = fp132 + fp128;
target[((hsi*45+24)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp138;
fp138 = inteval->alpha2_rho_over_zeta2[vi] * src4[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->rho12_over_alpha1[vi] * src3[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp139 - fp138;
LIBINT2_REALTYPE fp136;
fp136 = 1.0000000000000000e+00 * fp137;
LIBINT2_REALTYPE fp142;
fp142 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp142 * src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = inteval->WP_y[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->PA_y[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp145 + fp144;
LIBINT2_REALTYPE fp140;
fp140 = fp143 + fp141;
LIBINT2_REALTYPE fp135;
fp135 = fp140 + fp136;
target[((hsi*45+23)*1+lsi)*1] = fp135;
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
