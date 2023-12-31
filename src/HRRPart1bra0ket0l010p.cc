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
void HRRPart1bra0ket0l010p(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, int highdim) {

LIBINT2_REALTYPE*const  stack = target;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int hsi = 0; hsi<highdim; hsi++) {
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp265;
fp265 = inteval->CD_z[vi] * src1[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = src0[((hsi*55+17)*1+lsi)*1] + fp265;
target[((hsi*135+35)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp263;
fp263 = inteval->CD_x[vi] * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = src0[((hsi*55+12)*1+lsi)*1] + fp263;
target[((hsi*135+36)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp259;
fp259 = 1.0000000000000000e+00 * src2[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = inteval->CD_y[vi] * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = src0[((hsi*55+17)*1+lsi)*1] + fp261;
LIBINT2_REALTYPE fp258;
fp258 = fp260 + fp259;
target[((hsi*135+37)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp257;
fp257 = inteval->CD_z[vi] * src1[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = src0[((hsi*55+18)*1+lsi)*1] + fp257;
target[((hsi*135+38)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp255;
fp255 = inteval->CD_x[vi] * src1[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = src0[((hsi*55+13)*1+lsi)*1] + fp255;
target[((hsi*135+39)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp251;
fp251 = 1.0000000000000000e+00 * src2[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = inteval->CD_y[vi] * src1[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = src0[((hsi*55+18)*1+lsi)*1] + fp253;
LIBINT2_REALTYPE fp250;
fp250 = fp252 + fp251;
target[((hsi*135+40)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp249;
fp249 = inteval->CD_z[vi] * src1[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = src0[((hsi*55+19)*1+lsi)*1] + fp249;
target[((hsi*135+41)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp247;
fp247 = inteval->CD_x[vi] * src1[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = src0[((hsi*55+14)*1+lsi)*1] + fp247;
target[((hsi*135+42)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp243;
fp243 = 1.0000000000000000e+00 * src2[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = inteval->CD_y[vi] * src1[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = src0[((hsi*55+19)*1+lsi)*1] + fp245;
LIBINT2_REALTYPE fp242;
fp242 = fp244 + fp243;
target[((hsi*135+43)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp241;
fp241 = inteval->CD_z[vi] * src1[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = src0[((hsi*55+20)*1+lsi)*1] + fp241;
target[((hsi*135+44)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp239;
fp239 = inteval->CD_x[vi] * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = src0[((hsi*55+15)*1+lsi)*1] + fp239;
target[((hsi*135+45)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * src2[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = inteval->CD_y[vi] * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = src0[((hsi*55+21)*1+lsi)*1] + fp237;
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
target[((hsi*135+46)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp233;
fp233 = inteval->CD_z[vi] * src1[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = src0[((hsi*55+22)*1+lsi)*1] + fp233;
target[((hsi*135+47)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp231;
fp231 = inteval->CD_x[vi] * src1[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = src0[((hsi*55+16)*1+lsi)*1] + fp231;
target[((hsi*135+48)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp227;
fp227 = 1.0000000000000000e+00 * src2[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->CD_y[vi] * src1[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = src0[((hsi*55+22)*1+lsi)*1] + fp229;
LIBINT2_REALTYPE fp226;
fp226 = fp228 + fp227;
target[((hsi*135+49)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp359;
fp359 = inteval->CD_x[vi] * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = src0[((hsi*55+0)*1+lsi)*1] + fp359;
target[((hsi*135+0)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp183;
fp183 = inteval->CD_x[vi] * src1[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = src0[((hsi*55+22)*1+lsi)*1] + fp183;
target[((hsi*135+66)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = inteval->CD_z[vi] * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = src0[((hsi*55+29)*1+lsi)*1] + fp185;
target[((hsi*135+65)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = 1.0000000000000000e+00 * src2[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = inteval->CD_y[vi] * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = src0[((hsi*55+28)*1+lsi)*1] + fp189;
LIBINT2_REALTYPE fp186;
fp186 = fp188 + fp187;
target[((hsi*135+64)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp191;
fp191 = inteval->CD_x[vi] * src1[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = src0[((hsi*55+21)*1+lsi)*1] + fp191;
target[((hsi*135+63)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = inteval->CD_z[vi] * src1[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = src0[((hsi*55+27)*1+lsi)*1] + fp193;
target[((hsi*135+62)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = 1.0000000000000000e+00 * src2[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = inteval->CD_y[vi] * src1[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = src0[((hsi*55+26)*1+lsi)*1] + fp197;
LIBINT2_REALTYPE fp194;
fp194 = fp196 + fp195;
target[((hsi*135+61)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp199;
fp199 = inteval->CD_x[vi] * src1[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = src0[((hsi*55+20)*1+lsi)*1] + fp199;
target[((hsi*135+60)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp225;
fp225 = inteval->CD_z[vi] * src1[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = src0[((hsi*55+23)*1+lsi)*1] + fp225;
target[((hsi*135+50)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp203;
fp203 = 1.0000000000000000e+00 * src2[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = inteval->CD_y[vi] * src1[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*55+25)*1+lsi)*1] + fp205;
LIBINT2_REALTYPE fp202;
fp202 = fp204 + fp203;
target[((hsi*135+58)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp207;
fp207 = inteval->CD_x[vi] * src1[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = src0[((hsi*55+19)*1+lsi)*1] + fp207;
target[((hsi*135+57)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = inteval->CD_z[vi] * src1[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = src0[((hsi*55+25)*1+lsi)*1] + fp209;
target[((hsi*135+56)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = 1.0000000000000000e+00 * src2[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = inteval->CD_y[vi] * src1[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = src0[((hsi*55+24)*1+lsi)*1] + fp213;
LIBINT2_REALTYPE fp210;
fp210 = fp212 + fp211;
target[((hsi*135+55)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp215;
fp215 = inteval->CD_x[vi] * src1[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = src0[((hsi*55+18)*1+lsi)*1] + fp215;
target[((hsi*135+54)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = inteval->CD_z[vi] * src1[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = src0[((hsi*55+24)*1+lsi)*1] + fp217;
target[((hsi*135+53)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = 1.0000000000000000e+00 * src2[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = inteval->CD_y[vi] * src1[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = src0[((hsi*55+23)*1+lsi)*1] + fp221;
LIBINT2_REALTYPE fp218;
fp218 = fp220 + fp219;
target[((hsi*135+52)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp223;
fp223 = inteval->CD_x[vi] * src1[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = src0[((hsi*55+17)*1+lsi)*1] + fp223;
target[((hsi*135+51)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp201;
fp201 = inteval->CD_z[vi] * src1[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = src0[((hsi*55+26)*1+lsi)*1] + fp201;
target[((hsi*135+59)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp315;
fp315 = 1.0000000000000000e+00 * src2[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = inteval->CD_y[vi] * src1[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = src0[((hsi*55+8)*1+lsi)*1] + fp317;
LIBINT2_REALTYPE fp314;
fp314 = fp316 + fp315;
target[((hsi*135+16)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp319;
fp319 = inteval->CD_x[vi] * src1[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = src0[((hsi*55+5)*1+lsi)*1] + fp319;
target[((hsi*135+15)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = inteval->CD_z[vi] * src1[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = src0[((hsi*55+8)*1+lsi)*1] + fp321;
target[((hsi*135+14)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = 1.0000000000000000e+00 * src2[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp325;
fp325 = inteval->CD_y[vi] * src1[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = src0[((hsi*55+7)*1+lsi)*1] + fp325;
LIBINT2_REALTYPE fp322;
fp322 = fp324 + fp323;
target[((hsi*135+13)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp327;
fp327 = inteval->CD_x[vi] * src1[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = src0[((hsi*55+4)*1+lsi)*1] + fp327;
target[((hsi*135+12)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = inteval->CD_z[vi] * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = src0[((hsi*55+7)*1+lsi)*1] + fp329;
target[((hsi*135+11)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = 1.0000000000000000e+00 * src2[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = inteval->CD_y[vi] * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = src0[((hsi*55+6)*1+lsi)*1] + fp333;
LIBINT2_REALTYPE fp330;
fp330 = fp332 + fp331;
target[((hsi*135+10)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp267;
fp267 = 1.0000000000000000e+00 * src2[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = inteval->CD_y[vi] * src1[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = src0[((hsi*55+16)*1+lsi)*1] + fp269;
LIBINT2_REALTYPE fp266;
fp266 = fp268 + fp267;
target[((hsi*135+34)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp337;
fp337 = inteval->CD_z[vi] * src1[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = src0[((hsi*55+5)*1+lsi)*1] + fp337;
target[((hsi*135+8)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = 1.0000000000000000e+00 * src2[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = inteval->CD_y[vi] * src1[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = src0[((hsi*55+4)*1+lsi)*1] + fp341;
LIBINT2_REALTYPE fp338;
fp338 = fp340 + fp339;
target[((hsi*135+7)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp343;
fp343 = inteval->CD_x[vi] * src1[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = src0[((hsi*55+2)*1+lsi)*1] + fp343;
target[((hsi*135+6)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = inteval->CD_z[vi] * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = src0[((hsi*55+4)*1+lsi)*1] + fp345;
target[((hsi*135+5)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = 1.0000000000000000e+00 * src2[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = inteval->CD_y[vi] * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = src0[((hsi*55+3)*1+lsi)*1] + fp349;
LIBINT2_REALTYPE fp346;
fp346 = fp348 + fp347;
target[((hsi*135+4)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp351;
fp351 = inteval->CD_x[vi] * src1[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = src0[((hsi*55+1)*1+lsi)*1] + fp351;
target[((hsi*135+3)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = inteval->CD_z[vi] * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = src0[((hsi*55+2)*1+lsi)*1] + fp353;
target[((hsi*135+2)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = 1.0000000000000000e+00 * src2[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp357;
fp357 = inteval->CD_y[vi] * src1[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = src0[((hsi*55+1)*1+lsi)*1] + fp357;
LIBINT2_REALTYPE fp354;
fp354 = fp356 + fp355;
target[((hsi*135+1)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp335;
fp335 = inteval->CD_x[vi] * src1[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = src0[((hsi*55+3)*1+lsi)*1] + fp335;
target[((hsi*135+9)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp271;
fp271 = inteval->CD_x[vi] * src1[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = src0[((hsi*55+11)*1+lsi)*1] + fp271;
target[((hsi*135+33)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = inteval->CD_z[vi] * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = src0[((hsi*55+16)*1+lsi)*1] + fp273;
target[((hsi*135+32)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = 1.0000000000000000e+00 * src2[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = inteval->CD_y[vi] * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = src0[((hsi*55+15)*1+lsi)*1] + fp277;
LIBINT2_REALTYPE fp274;
fp274 = fp276 + fp275;
target[((hsi*135+31)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp279;
fp279 = inteval->CD_x[vi] * src1[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = src0[((hsi*55+10)*1+lsi)*1] + fp279;
target[((hsi*135+30)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = inteval->CD_z[vi] * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = src0[((hsi*55+14)*1+lsi)*1] + fp281;
target[((hsi*135+29)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = 1.0000000000000000e+00 * src2[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = inteval->CD_y[vi] * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = src0[((hsi*55+13)*1+lsi)*1] + fp285;
LIBINT2_REALTYPE fp282;
fp282 = fp284 + fp283;
target[((hsi*135+28)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp287;
fp287 = inteval->CD_x[vi] * src1[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = src0[((hsi*55+9)*1+lsi)*1] + fp287;
target[((hsi*135+27)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp313;
fp313 = inteval->CD_z[vi] * src1[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = src0[((hsi*55+9)*1+lsi)*1] + fp313;
target[((hsi*135+17)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp291;
fp291 = 1.0000000000000000e+00 * src2[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->CD_y[vi] * src1[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = src0[((hsi*55+12)*1+lsi)*1] + fp293;
LIBINT2_REALTYPE fp290;
fp290 = fp292 + fp291;
target[((hsi*135+25)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp295;
fp295 = inteval->CD_x[vi] * src1[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = src0[((hsi*55+8)*1+lsi)*1] + fp295;
target[((hsi*135+24)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = inteval->CD_z[vi] * src1[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = src0[((hsi*55+12)*1+lsi)*1] + fp297;
target[((hsi*135+23)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = 1.0000000000000000e+00 * src2[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = inteval->CD_y[vi] * src1[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = src0[((hsi*55+11)*1+lsi)*1] + fp301;
LIBINT2_REALTYPE fp298;
fp298 = fp300 + fp299;
target[((hsi*135+22)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp303;
fp303 = inteval->CD_x[vi] * src1[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = src0[((hsi*55+7)*1+lsi)*1] + fp303;
target[((hsi*135+21)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = inteval->CD_z[vi] * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = src0[((hsi*55+11)*1+lsi)*1] + fp305;
target[((hsi*135+20)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = 1.0000000000000000e+00 * src2[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
fp309 = inteval->CD_y[vi] * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = src0[((hsi*55+10)*1+lsi)*1] + fp309;
LIBINT2_REALTYPE fp306;
fp306 = fp308 + fp307;
target[((hsi*135+19)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp311;
fp311 = inteval->CD_x[vi] * src1[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = src0[((hsi*55+6)*1+lsi)*1] + fp311;
target[((hsi*135+18)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp289;
fp289 = inteval->CD_z[vi] * src1[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = src0[((hsi*55+13)*1+lsi)*1] + fp289;
target[((hsi*135+26)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp47;
fp47 = inteval->CD_x[vi] * src1[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*55+39)*1+lsi)*1] + fp47;
target[((hsi*135+117)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->CD_z[vi] * src1[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*55+48)*1+lsi)*1] + fp49;
target[((hsi*135+116)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = 1.0000000000000000e+00 * src2[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->CD_y[vi] * src1[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = src0[((hsi*55+47)*1+lsi)*1] + fp53;
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
target[((hsi*135+115)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp55;
fp55 = inteval->CD_x[vi] * src1[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*55+38)*1+lsi)*1] + fp55;
target[((hsi*135+114)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_z[vi] * src1[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src0[((hsi*55+47)*1+lsi)*1] + fp57;
target[((hsi*135+113)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * src2[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->CD_y[vi] * src1[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*55+46)*1+lsi)*1] + fp61;
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
target[((hsi*135+112)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp63;
fp63 = inteval->CD_x[vi] * src1[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*55+37)*1+lsi)*1] + fp63;
target[((hsi*135+111)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp179;
fp179 = 1.0000000000000000e+00 * src2[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = inteval->CD_y[vi] * src1[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = src0[((hsi*55+29)*1+lsi)*1] + fp181;
LIBINT2_REALTYPE fp178;
fp178 = fp180 + fp179;
target[((hsi*135+67)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * src2[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->CD_y[vi] * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*55+45)*1+lsi)*1] + fp69;
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
target[((hsi*135+109)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp71;
fp71 = inteval->CD_x[vi] * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*55+36)*1+lsi)*1] + fp71;
target[((hsi*135+108)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
fp73 = inteval->CD_z[vi] * src1[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = src0[((hsi*55+44)*1+lsi)*1] + fp73;
target[((hsi*135+107)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * src2[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->CD_y[vi] * src1[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*55+43)*1+lsi)*1] + fp77;
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
target[((hsi*135+106)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp79;
fp79 = inteval->CD_x[vi] * src1[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*55+35)*1+lsi)*1] + fp79;
target[((hsi*135+105)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = inteval->CD_z[vi] * src1[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src0[((hsi*55+43)*1+lsi)*1] + fp81;
target[((hsi*135+104)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * src2[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->CD_y[vi] * src1[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src0[((hsi*55+42)*1+lsi)*1] + fp85;
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
target[((hsi*135+103)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp87;
fp87 = inteval->CD_x[vi] * src1[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*55+34)*1+lsi)*1] + fp87;
target[((hsi*135+102)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp65;
fp65 = inteval->CD_z[vi] * src1[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = src0[((hsi*55+46)*1+lsi)*1] + fp65;
target[((hsi*135+110)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp1;
fp1 = inteval->CD_z[vi] * src1[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*55+54)*1+lsi)*1] + fp1;
target[((hsi*135+134)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = 1.0000000000000000e+00 * src2[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->CD_y[vi] * src1[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src0[((hsi*55+53)*1+lsi)*1] + fp5;
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
target[((hsi*135+133)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp7;
fp7 = inteval->CD_x[vi] * src1[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*55+44)*1+lsi)*1] + fp7;
target[((hsi*135+132)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->CD_z[vi] * src1[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*55+53)*1+lsi)*1] + fp9;
target[((hsi*135+131)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * src2[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->CD_y[vi] * src1[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*55+52)*1+lsi)*1] + fp13;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*135+130)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp15;
fp15 = inteval->CD_x[vi] * src1[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*55+43)*1+lsi)*1] + fp15;
target[((hsi*135+129)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->CD_z[vi] * src1[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*55+52)*1+lsi)*1] + fp17;
target[((hsi*135+128)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * src2[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->CD_y[vi] * src1[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*55+48)*1+lsi)*1] + fp45;
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
target[((hsi*135+118)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp23;
fp23 = inteval->CD_x[vi] * src1[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*55+42)*1+lsi)*1] + fp23;
target[((hsi*135+126)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
fp25 = inteval->CD_z[vi] * src1[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src0[((hsi*55+51)*1+lsi)*1] + fp25;
target[((hsi*135+125)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * src2[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->CD_y[vi] * src1[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*55+50)*1+lsi)*1] + fp29;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*135+124)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp31;
fp31 = inteval->CD_x[vi] * src1[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*55+41)*1+lsi)*1] + fp31;
target[((hsi*135+123)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->CD_z[vi] * src1[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*55+50)*1+lsi)*1] + fp33;
target[((hsi*135+122)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
fp35 = 1.0000000000000000e+00 * src2[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->CD_y[vi] * src1[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*55+49)*1+lsi)*1] + fp37;
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
target[((hsi*135+121)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_x[vi] * src1[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*55+40)*1+lsi)*1] + fp39;
target[((hsi*135+120)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->CD_z[vi] * src1[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src0[((hsi*55+49)*1+lsi)*1] + fp41;
target[((hsi*135+119)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * src2[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->CD_y[vi] * src1[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src0[((hsi*55+51)*1+lsi)*1] + fp21;
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
target[((hsi*135+127)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp137;
fp137 = inteval->CD_z[vi] * src1[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = src0[((hsi*55+35)*1+lsi)*1] + fp137;
target[((hsi*135+83)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = 1.0000000000000000e+00 * src2[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->CD_y[vi] * src1[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src0[((hsi*55+34)*1+lsi)*1] + fp141;
LIBINT2_REALTYPE fp138;
fp138 = fp140 + fp139;
target[((hsi*135+82)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp143;
fp143 = inteval->CD_x[vi] * src1[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = src0[((hsi*55+27)*1+lsi)*1] + fp143;
target[((hsi*135+81)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = inteval->CD_z[vi] * src1[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*55+34)*1+lsi)*1] + fp145;
target[((hsi*135+80)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * src2[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->CD_y[vi] * src1[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = src0[((hsi*55+33)*1+lsi)*1] + fp149;
LIBINT2_REALTYPE fp146;
fp146 = fp148 + fp147;
target[((hsi*135+79)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp151;
fp151 = inteval->CD_x[vi] * src1[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = src0[((hsi*55+26)*1+lsi)*1] + fp151;
target[((hsi*135+78)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = inteval->CD_z[vi] * src1[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*55+33)*1+lsi)*1] + fp153;
target[((hsi*135+77)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp89;
fp89 = inteval->CD_z[vi] * src1[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*55+42)*1+lsi)*1] + fp89;
target[((hsi*135+101)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp159;
fp159 = inteval->CD_x[vi] * src1[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*55+25)*1+lsi)*1] + fp159;
target[((hsi*135+75)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = inteval->CD_z[vi] * src1[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = src0[((hsi*55+32)*1+lsi)*1] + fp161;
target[((hsi*135+74)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = 1.0000000000000000e+00 * src2[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->CD_y[vi] * src1[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = src0[((hsi*55+31)*1+lsi)*1] + fp165;
LIBINT2_REALTYPE fp162;
fp162 = fp164 + fp163;
target[((hsi*135+73)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp167;
fp167 = inteval->CD_x[vi] * src1[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = src0[((hsi*55+24)*1+lsi)*1] + fp167;
target[((hsi*135+72)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = inteval->CD_z[vi] * src1[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = src0[((hsi*55+31)*1+lsi)*1] + fp169;
target[((hsi*135+71)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = 1.0000000000000000e+00 * src2[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = inteval->CD_y[vi] * src1[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = src0[((hsi*55+30)*1+lsi)*1] + fp173;
LIBINT2_REALTYPE fp170;
fp170 = fp172 + fp171;
target[((hsi*135+70)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp175;
fp175 = inteval->CD_x[vi] * src1[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = src0[((hsi*55+23)*1+lsi)*1] + fp175;
target[((hsi*135+69)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = inteval->CD_z[vi] * src1[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = src0[((hsi*55+30)*1+lsi)*1] + fp177;
target[((hsi*135+68)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp155;
fp155 = 1.0000000000000000e+00 * src2[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->CD_y[vi] * src1[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = src0[((hsi*55+32)*1+lsi)*1] + fp157;
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
target[((hsi*135+76)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * src2[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->CD_y[vi] * src1[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*55+41)*1+lsi)*1] + fp93;
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
target[((hsi*135+100)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp95;
fp95 = inteval->CD_x[vi] * src1[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = src0[((hsi*55+33)*1+lsi)*1] + fp95;
target[((hsi*135+99)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = inteval->CD_z[vi] * src1[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = src0[((hsi*55+41)*1+lsi)*1] + fp97;
target[((hsi*135+98)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = 1.0000000000000000e+00 * src2[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->CD_y[vi] * src1[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = src0[((hsi*55+40)*1+lsi)*1] + fp101;
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
target[((hsi*135+97)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp103;
fp103 = inteval->CD_x[vi] * src1[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*55+32)*1+lsi)*1] + fp103;
target[((hsi*135+96)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = inteval->CD_z[vi] * src1[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src0[((hsi*55+40)*1+lsi)*1] + fp105;
target[((hsi*135+95)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * src2[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->CD_y[vi] * src1[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*55+39)*1+lsi)*1] + fp109;
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
target[((hsi*135+94)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp135;
fp135 = inteval->CD_x[vi] * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = src0[((hsi*55+28)*1+lsi)*1] + fp135;
target[((hsi*135+84)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp113;
fp113 = inteval->CD_z[vi] * src1[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = src0[((hsi*55+39)*1+lsi)*1] + fp113;
target[((hsi*135+92)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * src2[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->CD_y[vi] * src1[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src0[((hsi*55+38)*1+lsi)*1] + fp117;
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
target[((hsi*135+91)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp119;
fp119 = inteval->CD_x[vi] * src1[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*55+30)*1+lsi)*1] + fp119;
target[((hsi*135+90)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = inteval->CD_z[vi] * src1[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*55+38)*1+lsi)*1] + fp121;
target[((hsi*135+89)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * src2[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->CD_y[vi] * src1[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*55+37)*1+lsi)*1] + fp125;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
target[((hsi*135+88)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp127;
fp127 = inteval->CD_x[vi] * src1[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src0[((hsi*55+29)*1+lsi)*1] + fp127;
target[((hsi*135+87)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = inteval->CD_z[vi] * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*55+37)*1+lsi)*1] + fp129;
target[((hsi*135+86)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = 1.0000000000000000e+00 * src2[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->CD_y[vi] * src1[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = src0[((hsi*55+36)*1+lsi)*1] + fp133;
LIBINT2_REALTYPE fp130;
fp130 = fp132 + fp131;
target[((hsi*135+85)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp111;
fp111 = inteval->CD_x[vi] * src1[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*55+31)*1+lsi)*1] + fp111;
target[((hsi*135+93)*1+lsi)*1] = fp110;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 360 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
