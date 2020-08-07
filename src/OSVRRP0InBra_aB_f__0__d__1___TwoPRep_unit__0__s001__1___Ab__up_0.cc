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
void OSVRRP0InBra_aB_f__0__d__1___TwoPRep_unit__0__s001__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp242;
fp242 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp174;
fp174 = fp242 * src4[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp287;
fp287 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp176;
fp176 = fp287 * src3[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = inteval->WP_z[vi] * src0[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp177 + fp176;
LIBINT2_REALTYPE fp173;
fp173 = fp175 + fp174;
target[((hsi*60+29)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp179;
fp179 = fp242 * src4[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp181;
fp181 = fp279 * src3[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = inteval->WP_z[vi] * src0[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
LIBINT2_REALTYPE fp178;
fp178 = fp180 + fp179;
target[((hsi*60+28)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp184;
fp184 = fp242 * src4[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = inteval->WP_z[vi] * src0[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp185 + fp184;
target[((hsi*60+27)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp187;
fp187 = fp242 * src4[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp279 * src3[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->WP_z[vi] * src0[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp189 + fp213;
LIBINT2_REALTYPE fp186;
fp186 = fp188 + fp187;
target[((hsi*60+26)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp191;
fp191 = fp242 * src4[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = inteval->WP_z[vi] * src0[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp192 + fp191;
target[((hsi*60+25)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp194;
fp194 = fp242 * src4[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->WP_z[vi] * src0[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp195 + fp194;
target[((hsi*60+24)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp219;
fp219 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp258;
fp258 = inteval->roz[vi] * src2[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = src1[((hsi*18+5)*1+lsi)*1] - fp258;
LIBINT2_REALTYPE fp197;
fp197 = fp219 * fp257;
LIBINT2_REALTYPE fp198;
fp198 = inteval->WP_y[vi] * src0[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp198 + fp197;
target[((hsi*60+23)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp200;
fp200 = fp279 * src3[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = inteval->roz[vi] * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = src1[((hsi*18+4)*1+lsi)*1] - fp263;
LIBINT2_REALTYPE fp202;
fp202 = fp219 * fp262;
LIBINT2_REALTYPE fp203;
fp203 = inteval->WP_y[vi] * src0[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp203 + fp202;
LIBINT2_REALTYPE fp199;
fp199 = fp201 + fp200;
target[((hsi*60+22)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp205;
fp205 = fp287 * src3[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = inteval->roz[vi] * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = src1[((hsi*18+3)*1+lsi)*1] - fp268;
LIBINT2_REALTYPE fp207;
fp207 = fp219 * fp267;
LIBINT2_REALTYPE fp208;
fp208 = inteval->WP_y[vi] * src0[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = fp208 + fp207;
LIBINT2_REALTYPE fp204;
fp204 = fp206 + fp205;
target[((hsi*60+21)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp275;
fp275 = inteval->roz[vi] * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = src1[((hsi*18+2)*1+lsi)*1] - fp275;
LIBINT2_REALTYPE fp210;
fp210 = fp219 * fp274;
LIBINT2_REALTYPE fp211;
fp211 = inteval->WP_y[vi] * src0[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp211 + fp210;
target[((hsi*60+20)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp283;
fp283 = inteval->roz[vi] * src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = src1[((hsi*18+1)*1+lsi)*1] - fp283;
LIBINT2_REALTYPE fp215;
fp215 = fp219 * fp282;
LIBINT2_REALTYPE fp216;
fp216 = inteval->WP_y[vi] * src0[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp216 + fp215;
LIBINT2_REALTYPE fp212;
fp212 = fp214 + fp213;
target[((hsi*60+19)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp291;
fp291 = inteval->roz[vi] * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = src1[((hsi*18+0)*1+lsi)*1] - fp291;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp290;
LIBINT2_REALTYPE fp220;
fp220 = inteval->WP_y[vi] * src0[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp220 + fp218;
target[((hsi*60+18)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp222;
fp222 = fp242 * src4[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = fp287 * src3[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = inteval->WP_z[vi] * src0[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp225 + fp224;
LIBINT2_REALTYPE fp221;
fp221 = fp223 + fp222;
target[((hsi*60+17)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp227;
fp227 = fp242 * src4[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = fp279 * src3[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->WP_z[vi] * src0[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp229 + fp278;
LIBINT2_REALTYPE fp226;
fp226 = fp228 + fp227;
target[((hsi*60+16)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * src3[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp289;
fp289 = fp292 * fp290;
LIBINT2_REALTYPE fp293;
fp293 = inteval->WP_x[vi] * src0[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp293 + fp289;
LIBINT2_REALTYPE fp285;
fp285 = fp288 + fp286;
target[((hsi*60+0)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp234;
fp234 = fp242 * src4[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = fp279 * src3[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = inteval->WP_z[vi] * src0[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp236 + fp252;
LIBINT2_REALTYPE fp233;
fp233 = fp235 + fp234;
target[((hsi*60+14)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp238;
fp238 = fp242 * src4[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = inteval->WP_z[vi] * src0[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp239 + fp238;
target[((hsi*60+13)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * src4[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = inteval->WP_z[vi] * src0[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = fp243 + fp241;
target[((hsi*60+12)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp244;
fp244 = inteval->WP_y[vi] * src0[((hsi*36+5)*1+lsi)*1];
target[((hsi*60+11)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp271;
fp271 = fp279 * src3[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = inteval->WP_y[vi] * src0[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp246 + fp271;
target[((hsi*60+10)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp248;
fp248 = fp287 * src3[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = inteval->WP_y[vi] * src0[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp249 + fp248;
target[((hsi*60+9)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp250;
fp250 = inteval->WP_y[vi] * src0[((hsi*36+2)*1+lsi)*1];
target[((hsi*60+8)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = inteval->WP_y[vi] * src0[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp253 + fp252;
target[((hsi*60+7)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp254;
fp254 = inteval->WP_y[vi] * src0[((hsi*36+0)*1+lsi)*1];
target[((hsi*60+6)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp256;
fp256 = fp292 * fp257;
LIBINT2_REALTYPE fp259;
fp259 = inteval->WP_x[vi] * src0[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = fp259 + fp256;
target[((hsi*60+5)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp261;
fp261 = fp292 * fp262;
LIBINT2_REALTYPE fp264;
fp264 = inteval->WP_x[vi] * src0[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp264 + fp261;
target[((hsi*60+4)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp266;
fp266 = fp292 * fp267;
LIBINT2_REALTYPE fp269;
fp269 = inteval->WP_x[vi] * src0[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp269 + fp266;
target[((hsi*60+3)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp273;
fp273 = fp292 * fp274;
LIBINT2_REALTYPE fp276;
fp276 = inteval->WP_x[vi] * src0[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp276 + fp273;
LIBINT2_REALTYPE fp270;
fp270 = fp272 + fp271;
target[((hsi*60+2)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp281;
fp281 = fp292 * fp282;
LIBINT2_REALTYPE fp284;
fp284 = inteval->WP_x[vi] * src0[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = fp284 + fp281;
LIBINT2_REALTYPE fp277;
fp277 = fp280 + fp278;
target[((hsi*60+1)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp231;
fp231 = fp242 * src4[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = inteval->WP_z[vi] * src0[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = fp232 + fp231;
target[((hsi*60+15)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp1;
fp1 = fp242 * src4[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp287 * src3[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->roz[vi] * src2[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src1[((hsi*18+17)*1+lsi)*1] - fp7;
LIBINT2_REALTYPE fp5;
fp5 = fp292 * fp6;
LIBINT2_REALTYPE fp8;
fp8 = inteval->WP_z[vi] * src0[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp8 + fp5;
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*60+59)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
fp10 = fp242 * src4[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp279 * src3[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->roz[vi] * src2[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = src1[((hsi*18+16)*1+lsi)*1] - fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp292 * fp15;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src0[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp17 + fp14;
LIBINT2_REALTYPE fp11;
fp11 = fp13 + fp12;
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
target[((hsi*60+58)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp19;
fp19 = fp242 * src4[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->roz[vi] * src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src1[((hsi*18+15)*1+lsi)*1] - fp23;
LIBINT2_REALTYPE fp21;
fp21 = fp292 * fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_z[vi] * src0[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp24 + fp21;
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
target[((hsi*60+57)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp26;
fp26 = fp242 * src4[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp279 * src3[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->roz[vi] * src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = src1[((hsi*18+14)*1+lsi)*1] - fp32;
LIBINT2_REALTYPE fp30;
fp30 = fp292 * fp31;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_z[vi] * src0[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp33 + fp30;
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
LIBINT2_REALTYPE fp25;
fp25 = fp27 + fp26;
target[((hsi*60+56)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp35;
fp35 = fp242 * src4[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->roz[vi] * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src1[((hsi*18+13)*1+lsi)*1] - fp39;
LIBINT2_REALTYPE fp37;
fp37 = fp292 * fp38;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * src0[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp40 + fp37;
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
target[((hsi*60+55)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp42;
fp42 = fp242 * src4[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->roz[vi] * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = src1[((hsi*18+12)*1+lsi)*1] - fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp292 * fp45;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * src0[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp47 + fp44;
LIBINT2_REALTYPE fp41;
fp41 = fp43 + fp42;
target[((hsi*60+54)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp49;
fp49 = fp242 * src4[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp287 * src3[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->roz[vi] * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = src1[((hsi*18+11)*1+lsi)*1] - fp110;
LIBINT2_REALTYPE fp53;
fp53 = fp219 * fp109;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_z[vi] * src0[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
target[((hsi*60+53)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp56;
fp56 = fp242 * src4[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp279 * src3[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->roz[vi] * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src1[((hsi*18+10)*1+lsi)*1] - fp117;
LIBINT2_REALTYPE fp60;
fp60 = fp219 * fp116;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_z[vi] * src0[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp61 + fp60;
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
target[((hsi*60+52)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp63;
fp63 = fp242 * src4[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->roz[vi] * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = src1[((hsi*18+9)*1+lsi)*1] - fp124;
LIBINT2_REALTYPE fp65;
fp65 = fp219 * fp123;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_z[vi] * src0[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
target[((hsi*60+51)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp68;
fp68 = fp242 * src4[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp279 * src3[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->roz[vi] * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src1[((hsi*18+8)*1+lsi)*1] - fp129;
LIBINT2_REALTYPE fp72;
fp72 = fp219 * fp128;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_z[vi] * src0[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp73 + fp72;
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
target[((hsi*60+50)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp75;
fp75 = fp242 * src4[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->roz[vi] * src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = src1[((hsi*18+7)*1+lsi)*1] - fp136;
LIBINT2_REALTYPE fp77;
fp77 = fp219 * fp135;
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_z[vi] * src0[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
target[((hsi*60+49)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp80;
fp80 = fp242 * src4[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->roz[vi] * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src1[((hsi*18+6)*1+lsi)*1] - fp141;
LIBINT2_REALTYPE fp82;
fp82 = fp219 * fp140;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_z[vi] * src0[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp83 + fp82;
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
target[((hsi*60+48)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp85;
fp85 = fp242 * src4[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp287 * src3[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_z[vi] * src0[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
target[((hsi*60+47)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp90;
fp90 = fp242 * src4[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = fp279 * src3[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_z[vi] * src0[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp93 + fp92;
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
target[((hsi*60+46)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp170;
fp170 = fp242 * src4[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->WP_z[vi] * src0[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp172 + fp218;
LIBINT2_REALTYPE fp169;
fp169 = fp171 + fp170;
target[((hsi*60+30)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp98;
fp98 = fp242 * src4[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp279 * src3[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_z[vi] * src0[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp100 + fp132;
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
target[((hsi*60+44)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp102;
fp102 = fp242 * src4[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_z[vi] * src0[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp103 + fp102;
target[((hsi*60+43)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp105;
fp105 = fp242 * src4[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_z[vi] * src0[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp106 + fp105;
target[((hsi*60+42)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp108;
fp108 = fp292 * fp109;
LIBINT2_REALTYPE fp111;
fp111 = inteval->WP_y[vi] * src0[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp111 + fp108;
target[((hsi*60+41)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp113;
fp113 = fp279 * src3[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp292 * fp116;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_y[vi] * src0[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp118 + fp115;
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
target[((hsi*60+40)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp120;
fp120 = fp287 * src3[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp292 * fp123;
LIBINT2_REALTYPE fp125;
fp125 = inteval->WP_y[vi] * src0[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp125 + fp122;
LIBINT2_REALTYPE fp119;
fp119 = fp121 + fp120;
target[((hsi*60+39)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp127;
fp127 = fp292 * fp128;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WP_y[vi] * src0[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp130 + fp127;
target[((hsi*60+38)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp134;
fp134 = fp292 * fp135;
LIBINT2_REALTYPE fp137;
fp137 = inteval->WP_y[vi] * src0[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp137 + fp134;
LIBINT2_REALTYPE fp131;
fp131 = fp133 + fp132;
target[((hsi*60+37)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp139;
fp139 = fp292 * fp140;
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_y[vi] * src0[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp142 + fp139;
target[((hsi*60+36)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp144;
fp144 = fp242 * src4[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp287 * src3[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = inteval->WP_z[vi] * src0[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp148 + fp197;
LIBINT2_REALTYPE fp145;
fp145 = fp147 + fp146;
LIBINT2_REALTYPE fp143;
fp143 = fp145 + fp144;
target[((hsi*60+35)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp150;
fp150 = fp242 * src4[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp279 * src3[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->WP_z[vi] * src0[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp154 + fp202;
LIBINT2_REALTYPE fp151;
fp151 = fp153 + fp152;
LIBINT2_REALTYPE fp149;
fp149 = fp151 + fp150;
target[((hsi*60+34)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp156;
fp156 = fp242 * src4[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = inteval->WP_z[vi] * src0[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp158 + fp207;
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
target[((hsi*60+33)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp160;
fp160 = fp242 * src4[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp279 * src3[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = inteval->WP_z[vi] * src0[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp164 + fp210;
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
LIBINT2_REALTYPE fp159;
fp159 = fp161 + fp160;
target[((hsi*60+32)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp166;
fp166 = fp242 * src4[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = inteval->WP_z[vi] * src0[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp168 + fp215;
LIBINT2_REALTYPE fp165;
fp165 = fp167 + fp166;
target[((hsi*60+31)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp95;
fp95 = fp242 * src4[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->WP_z[vi] * src0[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
target[((hsi*60+45)*1+lsi)*1] = fp94;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 294 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif