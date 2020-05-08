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
void CR_aB_s__0___Kinetic_h010__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * src2[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = src0[((hsi*16+4)*1+lsi)*1] * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp30;
LIBINT2_REALTYPE fp78;
fp78 = 5.0000000000000000e-01 * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp373;
fp373 = fp374 * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp375;
fp375 = inteval->PA_y[vi] * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp372;
fp372 = fp375 + fp373;
LIBINT2_REALTYPE fp81;
fp81 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp372;
LIBINT2_REALTYPE fp84;
fp84 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp84 * src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp367;
fp367 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp366;
fp366 = fp367 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp370;
fp370 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp369;
fp369 = fp370 * src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp371;
fp371 = inteval->PA_y[vi] * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = fp371 + fp369;
LIBINT2_REALTYPE fp365;
fp365 = fp368 + fp366;
LIBINT2_REALTYPE fp87;
fp87 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp86;
fp86 = fp87 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp365;
LIBINT2_REALTYPE fp82;
fp82 = fp85 - fp83;
LIBINT2_REALTYPE fp79;
fp79 = fp82 - fp80;
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
LIBINT2_REALTYPE fp303;
fp303 = src0[((hsi*16+4)*1+lsi)*1] * fp77;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * src0[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp119;
fp119 = fp120 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp119 * src0[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp118 - fp116;
LIBINT2_REALTYPE fp305;
fp305 = fp115 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = fp305 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp304 + fp302;
LIBINT2_REALTYPE fp298;
fp298 = fp301 + fp299;
LIBINT2_REALTYPE fp306;
fp306 = inteval->two_alpha0_bra[vi] * fp298;
LIBINT2_REALTYPE fp335;
fp335 = -1.0000000000000000e+00 * fp306;
target[((hsi*21+1)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp26;
fp26 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * src2[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp27;
fp27 = fp28 * src2[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 - fp25;
LIBINT2_REALTYPE fp291;
fp291 = src0[((hsi*16+4)*1+lsi)*1] * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp24;
LIBINT2_REALTYPE fp90;
fp90 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp378;
fp378 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp377;
fp377 = fp378 * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp381;
fp381 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp380;
fp380 = fp381 * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp382;
fp382 = inteval->PA_y[vi] * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp379;
fp379 = fp382 + fp380;
LIBINT2_REALTYPE fp376;
fp376 = fp379 + fp377;
LIBINT2_REALTYPE fp93;
fp93 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp93 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp376;
LIBINT2_REALTYPE fp88;
fp88 = fp91 - fp89;
LIBINT2_REALTYPE fp294;
fp294 = src0[((hsi*16+4)*1+lsi)*1] * fp88;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = fp115 * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = fp296 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp295 + fp293;
LIBINT2_REALTYPE fp289;
fp289 = fp292 + fp290;
LIBINT2_REALTYPE fp297;
fp297 = inteval->two_alpha0_bra[vi] * fp289;
LIBINT2_REALTYPE fp334;
fp334 = -1.0000000000000000e+00 * fp297;
target[((hsi*21+2)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp282;
fp282 = src0[((hsi*16+3)*1+lsi)*1] * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp30;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp376;
LIBINT2_REALTYPE fp73;
fp73 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp72;
fp72 = fp73 * src1[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp359;
fp359 = fp360 * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp362;
fp362 = fp363 * src1[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = inteval->PA_y[vi] * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = fp364 + fp362;
LIBINT2_REALTYPE fp358;
fp358 = fp361 + fp359;
LIBINT2_REALTYPE fp76;
fp76 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp358;
LIBINT2_REALTYPE fp71;
fp71 = fp74 - fp72;
LIBINT2_REALTYPE fp68;
fp68 = fp71 - fp69;
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
LIBINT2_REALTYPE fp285;
fp285 = src0[((hsi*16+3)*1+lsi)*1] * fp66;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * src0[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp114 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp113 * src0[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp112 - fp110;
LIBINT2_REALTYPE fp287;
fp287 = fp109 * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp287 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = fp286 + fp284;
LIBINT2_REALTYPE fp280;
fp280 = fp283 + fp281;
LIBINT2_REALTYPE fp288;
fp288 = inteval->two_alpha0_bra[vi] * fp280;
LIBINT2_REALTYPE fp333;
fp333 = -1.0000000000000000e+00 * fp288;
target[((hsi*21+3)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp273;
fp273 = src0[((hsi*16+3)*1+lsi)*1] * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp24;
LIBINT2_REALTYPE fp276;
fp276 = src0[((hsi*16+3)*1+lsi)*1] * fp77;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = fp109 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp278 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = fp277 + fp275;
LIBINT2_REALTYPE fp271;
fp271 = fp274 + fp272;
LIBINT2_REALTYPE fp279;
fp279 = inteval->two_alpha0_bra[vi] * fp271;
LIBINT2_REALTYPE fp332;
fp332 = -1.0000000000000000e+00 * fp279;
target[((hsi*21+4)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp20;
fp20 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * src2[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp21 - fp19;
LIBINT2_REALTYPE fp264;
fp264 = src0[((hsi*16+3)*1+lsi)*1] * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp18;
LIBINT2_REALTYPE fp267;
fp267 = src0[((hsi*16+3)*1+lsi)*1] * fp88;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp109 * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = fp269 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp268 + fp266;
LIBINT2_REALTYPE fp262;
fp262 = fp265 + fp263;
LIBINT2_REALTYPE fp270;
fp270 = inteval->two_alpha0_bra[vi] * fp262;
LIBINT2_REALTYPE fp331;
fp331 = -1.0000000000000000e+00 * fp270;
target[((hsi*21+5)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp255;
fp255 = src0[((hsi*16+2)*1+lsi)*1] * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp30;
LIBINT2_REALTYPE fp56;
fp56 = 1.5000000000000000e+00 * src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp365;
LIBINT2_REALTYPE fp62;
fp62 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * src1[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
fp353 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp352;
fp352 = fp353 * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp355;
fp355 = fp356 * src1[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = inteval->PA_y[vi] * src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = fp357 + fp355;
LIBINT2_REALTYPE fp351;
fp351 = fp354 + fp352;
LIBINT2_REALTYPE fp65;
fp65 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp351;
LIBINT2_REALTYPE fp60;
fp60 = fp63 - fp61;
LIBINT2_REALTYPE fp57;
fp57 = fp60 - fp58;
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
LIBINT2_REALTYPE fp258;
fp258 = src0[((hsi*16+2)*1+lsi)*1] * fp55;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp105 * src0[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp108 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * src0[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp106 - fp104;
LIBINT2_REALTYPE fp260;
fp260 = fp103 * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp260 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp259 + fp257;
LIBINT2_REALTYPE fp253;
fp253 = fp256 + fp254;
LIBINT2_REALTYPE fp261;
fp261 = inteval->two_alpha0_bra[vi] * fp253;
LIBINT2_REALTYPE fp330;
fp330 = -1.0000000000000000e+00 * fp261;
target[((hsi*21+6)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp246;
fp246 = src0[((hsi*16+2)*1+lsi)*1] * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp24;
LIBINT2_REALTYPE fp249;
fp249 = src0[((hsi*16+2)*1+lsi)*1] * fp66;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp103 * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = fp251 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp250 + fp248;
LIBINT2_REALTYPE fp244;
fp244 = fp247 + fp245;
LIBINT2_REALTYPE fp252;
fp252 = inteval->two_alpha0_bra[vi] * fp244;
LIBINT2_REALTYPE fp329;
fp329 = -1.0000000000000000e+00 * fp252;
target[((hsi*21+7)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp237;
fp237 = src0[((hsi*16+2)*1+lsi)*1] * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp18;
LIBINT2_REALTYPE fp240;
fp240 = src0[((hsi*16+2)*1+lsi)*1] * fp77;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp103 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp242 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = fp241 + fp239;
LIBINT2_REALTYPE fp235;
fp235 = fp238 + fp236;
LIBINT2_REALTYPE fp243;
fp243 = inteval->two_alpha0_bra[vi] * fp235;
LIBINT2_REALTYPE fp328;
fp328 = -1.0000000000000000e+00 * fp243;
target[((hsi*21+8)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp14;
fp14 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src2[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp16;
fp16 = fp17 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * src2[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp15 - fp13;
LIBINT2_REALTYPE fp228;
fp228 = src0[((hsi*16+2)*1+lsi)*1] * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp12;
LIBINT2_REALTYPE fp231;
fp231 = src0[((hsi*16+2)*1+lsi)*1] * fp88;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp103 * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp233 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp232 + fp230;
LIBINT2_REALTYPE fp226;
fp226 = fp229 + fp227;
LIBINT2_REALTYPE fp234;
fp234 = inteval->two_alpha0_bra[vi] * fp226;
LIBINT2_REALTYPE fp327;
fp327 = -1.0000000000000000e+00 * fp234;
target[((hsi*21+9)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp309;
fp309 = src0[((hsi*16+5)*1+lsi)*1] * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp30;
LIBINT2_REALTYPE fp312;
fp312 = src0[((hsi*16+5)*1+lsi)*1] * fp88;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp122;
fp122 = fp123 * src0[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp126 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * src0[((hsi*16+14)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp124 - fp122;
LIBINT2_REALTYPE fp314;
fp314 = fp121 * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = fp314 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = fp313 + fp311;
LIBINT2_REALTYPE fp307;
fp307 = fp310 + fp308;
LIBINT2_REALTYPE fp315;
fp315 = inteval->two_alpha0_bra[vi] * fp307;
LIBINT2_REALTYPE fp336;
fp336 = -1.0000000000000000e+00 * fp315;
target[((hsi*21+0)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp210;
fp210 = src0[((hsi*16+1)*1+lsi)*1] * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp24;
LIBINT2_REALTYPE fp213;
fp213 = src0[((hsi*16+1)*1+lsi)*1] * fp55;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp99 * src0[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp101;
fp101 = fp102 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * src0[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp100 - fp98;
LIBINT2_REALTYPE fp215;
fp215 = fp97 * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp215 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp214 + fp212;
LIBINT2_REALTYPE fp208;
fp208 = fp211 + fp209;
LIBINT2_REALTYPE fp216;
fp216 = inteval->two_alpha0_bra[vi] * fp208;
LIBINT2_REALTYPE fp325;
fp325 = -1.0000000000000000e+00 * fp216;
target[((hsi*21+11)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp201;
fp201 = src0[((hsi*16+1)*1+lsi)*1] * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp18;
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*16+1)*1+lsi)*1] * fp66;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = fp97 * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp206 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp205 + fp203;
LIBINT2_REALTYPE fp199;
fp199 = fp202 + fp200;
LIBINT2_REALTYPE fp207;
fp207 = inteval->two_alpha0_bra[vi] * fp199;
LIBINT2_REALTYPE fp324;
fp324 = -1.0000000000000000e+00 * fp207;
target[((hsi*21+12)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp192;
fp192 = src0[((hsi*16+1)*1+lsi)*1] * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp12;
LIBINT2_REALTYPE fp195;
fp195 = src0[((hsi*16+1)*1+lsi)*1] * fp77;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp97 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp197 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp196 + fp194;
LIBINT2_REALTYPE fp190;
fp190 = fp193 + fp191;
LIBINT2_REALTYPE fp198;
fp198 = inteval->two_alpha0_bra[vi] * fp190;
LIBINT2_REALTYPE fp323;
fp323 = -1.0000000000000000e+00 * fp198;
target[((hsi*21+13)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp8;
fp8 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp8 * src2[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * src2[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp9 - fp7;
LIBINT2_REALTYPE fp183;
fp183 = src0[((hsi*16+1)*1+lsi)*1] * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp6;
LIBINT2_REALTYPE fp186;
fp186 = src0[((hsi*16+1)*1+lsi)*1] * fp88;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp97 * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp188 * src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp187 + fp185;
LIBINT2_REALTYPE fp181;
fp181 = fp184 + fp182;
LIBINT2_REALTYPE fp189;
fp189 = inteval->two_alpha0_bra[vi] * fp181;
LIBINT2_REALTYPE fp322;
fp322 = -1.0000000000000000e+00 * fp189;
target[((hsi*21+14)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp174;
fp174 = src0[((hsi*16+0)*1+lsi)*1] * src1[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp30;
LIBINT2_REALTYPE fp34;
fp34 = 2.5000000000000000e+00 * src1[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp351;
LIBINT2_REALTYPE fp40;
fp40 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * src1[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp338;
fp338 = fp339 * src1[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp341;
fp341 = fp342 * src1[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = inteval->PA_y[vi] * src1[((hsi*16+14)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = fp343 + fp341;
LIBINT2_REALTYPE fp337;
fp337 = fp340 + fp338;
LIBINT2_REALTYPE fp43;
fp43 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp337;
LIBINT2_REALTYPE fp38;
fp38 = fp41 - fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 - fp36;
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp177;
fp177 = src0[((hsi*16+0)*1+lsi)*1] * fp33;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp95;
fp95 = fp96 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp95 * src0[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = fp94 * src1[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp179 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp178 + fp176;
LIBINT2_REALTYPE fp172;
fp172 = fp175 + fp173;
LIBINT2_REALTYPE fp180;
fp180 = inteval->two_alpha0_bra[vi] * fp172;
LIBINT2_REALTYPE fp321;
fp321 = -1.0000000000000000e+00 * fp180;
target[((hsi*21+15)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp165;
fp165 = src0[((hsi*16+0)*1+lsi)*1] * src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp24;
LIBINT2_REALTYPE fp45;
fp45 = 2.0000000000000000e+00 * src1[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp358;
LIBINT2_REALTYPE fp51;
fp51 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * src1[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp345;
fp345 = fp346 * src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp348;
fp348 = fp349 * src1[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = inteval->PA_y[vi] * src1[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp347;
fp347 = fp350 + fp348;
LIBINT2_REALTYPE fp344;
fp344 = fp347 + fp345;
LIBINT2_REALTYPE fp54;
fp54 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp344;
LIBINT2_REALTYPE fp49;
fp49 = fp52 - fp50;
LIBINT2_REALTYPE fp46;
fp46 = fp49 - fp47;
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp168;
fp168 = src0[((hsi*16+0)*1+lsi)*1] * fp44;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp94 * src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp170 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp169 + fp167;
LIBINT2_REALTYPE fp163;
fp163 = fp166 + fp164;
LIBINT2_REALTYPE fp171;
fp171 = inteval->two_alpha0_bra[vi] * fp163;
LIBINT2_REALTYPE fp320;
fp320 = -1.0000000000000000e+00 * fp171;
target[((hsi*21+16)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp156;
fp156 = src0[((hsi*16+0)*1+lsi)*1] * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp18;
LIBINT2_REALTYPE fp159;
fp159 = src0[((hsi*16+0)*1+lsi)*1] * fp55;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp94 * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = fp161 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp160 + fp158;
LIBINT2_REALTYPE fp154;
fp154 = fp157 + fp155;
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_bra[vi] * fp154;
LIBINT2_REALTYPE fp319;
fp319 = -1.0000000000000000e+00 * fp162;
target[((hsi*21+17)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp147;
fp147 = src0[((hsi*16+0)*1+lsi)*1] * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp12;
LIBINT2_REALTYPE fp150;
fp150 = src0[((hsi*16+0)*1+lsi)*1] * fp66;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp94 * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp152 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp151 + fp149;
LIBINT2_REALTYPE fp145;
fp145 = fp148 + fp146;
LIBINT2_REALTYPE fp153;
fp153 = inteval->two_alpha0_bra[vi] * fp145;
LIBINT2_REALTYPE fp318;
fp318 = -1.0000000000000000e+00 * fp153;
target[((hsi*21+18)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp138;
fp138 = src0[((hsi*16+0)*1+lsi)*1] * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp6;
LIBINT2_REALTYPE fp141;
fp141 = src0[((hsi*16+0)*1+lsi)*1] * fp77;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp94 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp142 + fp140;
LIBINT2_REALTYPE fp136;
fp136 = fp139 + fp137;
LIBINT2_REALTYPE fp144;
fp144 = inteval->two_alpha0_bra[vi] * fp136;
LIBINT2_REALTYPE fp317;
fp317 = -1.0000000000000000e+00 * fp144;
target[((hsi*21+19)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp2;
fp2 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src2[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp4 * src2[((hsi*16+14)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 - fp1;
LIBINT2_REALTYPE fp129;
fp129 = src0[((hsi*16+0)*1+lsi)*1] * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp0;
LIBINT2_REALTYPE fp132;
fp132 = src0[((hsi*16+0)*1+lsi)*1] * fp88;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * src2[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp94 * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp134 * src2[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp133 + fp131;
LIBINT2_REALTYPE fp127;
fp127 = fp130 + fp128;
LIBINT2_REALTYPE fp135;
fp135 = inteval->two_alpha0_bra[vi] * fp127;
LIBINT2_REALTYPE fp316;
fp316 = -1.0000000000000000e+00 * fp135;
target[((hsi*21+20)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp219;
fp219 = src0[((hsi*16+1)*1+lsi)*1] * src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp30;
LIBINT2_REALTYPE fp222;
fp222 = src0[((hsi*16+1)*1+lsi)*1] * fp44;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = fp97 * src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp224 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp223 + fp221;
LIBINT2_REALTYPE fp217;
fp217 = fp220 + fp218;
LIBINT2_REALTYPE fp225;
fp225 = inteval->two_alpha0_bra[vi] * fp217;
LIBINT2_REALTYPE fp326;
fp326 = -1.0000000000000000e+00 * fp225;
target[((hsi*21+10)*1+lsi)*1] = fp326;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 383 */
}

#ifdef __cplusplus
};
#endif
