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
void HRRPart0ket0bra0hd001(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp311;
fp311 = inteval->BA_y[vi] * src1[((hsi*63+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = src0[((hsi*84+17)*lowdim+lsi)*1] + fp311;
target[((hsi*126+33)*lowdim+lsi)*1] = fp310;
LIBINT2_REALTYPE fp309;
fp309 = inteval->BA_y[vi] * src1[((hsi*63+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = src0[((hsi*84+18)*lowdim+lsi)*1] + fp309;
target[((hsi*126+34)*lowdim+lsi)*1] = fp308;
LIBINT2_REALTYPE fp307;
fp307 = inteval->BA_y[vi] * src1[((hsi*63+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = src0[((hsi*84+19)*lowdim+lsi)*1] + fp307;
target[((hsi*126+35)*lowdim+lsi)*1] = fp306;
LIBINT2_REALTYPE fp305;
fp305 = inteval->BA_y[vi] * src1[((hsi*63+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp304;
fp304 = src0[((hsi*84+21)*lowdim+lsi)*1] + fp305;
target[((hsi*126+36)*lowdim+lsi)*1] = fp304;
LIBINT2_REALTYPE fp303;
fp303 = inteval->BA_y[vi] * src1[((hsi*63+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = src0[((hsi*84+22)*lowdim+lsi)*1] + fp303;
target[((hsi*126+37)*lowdim+lsi)*1] = fp302;
LIBINT2_REALTYPE fp301;
fp301 = inteval->BA_y[vi] * src1[((hsi*63+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = src0[((hsi*84+23)*lowdim+lsi)*1] + fp301;
target[((hsi*126+38)*lowdim+lsi)*1] = fp300;
LIBINT2_REALTYPE fp299;
fp299 = inteval->BA_y[vi] * src1[((hsi*63+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = src0[((hsi*84+24)*lowdim+lsi)*1] + fp299;
target[((hsi*126+39)*lowdim+lsi)*1] = fp298;
LIBINT2_REALTYPE fp297;
fp297 = inteval->BA_y[vi] * src1[((hsi*63+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = src0[((hsi*84+25)*lowdim+lsi)*1] + fp297;
target[((hsi*126+40)*lowdim+lsi)*1] = fp296;
LIBINT2_REALTYPE fp295;
fp295 = inteval->BA_y[vi] * src1[((hsi*63+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = src0[((hsi*84+26)*lowdim+lsi)*1] + fp295;
target[((hsi*126+41)*lowdim+lsi)*1] = fp294;
LIBINT2_REALTYPE fp291;
fp291 = 1.0000000000000000e+00 * src2[((hsi*63+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->BA_z[vi] * src1[((hsi*63+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = src0[((hsi*84+2)*lowdim+lsi)*1] + fp293;
LIBINT2_REALTYPE fp290;
fp290 = fp292 - fp291;
target[((hsi*126+42)*lowdim+lsi)*1] = fp290;
LIBINT2_REALTYPE fp287;
fp287 = 1.0000000000000000e+00 * src2[((hsi*63+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = inteval->BA_z[vi] * src1[((hsi*63+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = src0[((hsi*84+4)*lowdim+lsi)*1] + fp289;
LIBINT2_REALTYPE fp286;
fp286 = fp288 - fp287;
target[((hsi*126+43)*lowdim+lsi)*1] = fp286;
LIBINT2_REALTYPE fp283;
fp283 = 1.0000000000000000e+00 * src2[((hsi*63+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = inteval->BA_z[vi] * src1[((hsi*63+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = src0[((hsi*84+5)*lowdim+lsi)*1] + fp285;
LIBINT2_REALTYPE fp282;
fp282 = fp284 - fp283;
target[((hsi*126+44)*lowdim+lsi)*1] = fp282;
LIBINT2_REALTYPE fp279;
fp279 = 1.0000000000000000e+00 * src2[((hsi*63+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = inteval->BA_z[vi] * src1[((hsi*63+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = src0[((hsi*84+7)*lowdim+lsi)*1] + fp281;
LIBINT2_REALTYPE fp278;
fp278 = fp280 - fp279;
target[((hsi*126+45)*lowdim+lsi)*1] = fp278;
LIBINT2_REALTYPE fp275;
fp275 = 1.0000000000000000e+00 * src2[((hsi*63+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = inteval->BA_z[vi] * src1[((hsi*63+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = src0[((hsi*84+8)*lowdim+lsi)*1] + fp277;
LIBINT2_REALTYPE fp274;
fp274 = fp276 - fp275;
target[((hsi*126+46)*lowdim+lsi)*1] = fp274;
LIBINT2_REALTYPE fp377;
fp377 = inteval->BA_x[vi] * src1[((hsi*63+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp376;
fp376 = src0[((hsi*84+0)*lowdim+lsi)*1] + fp377;
target[((hsi*126+0)*lowdim+lsi)*1] = fp376;
LIBINT2_REALTYPE fp267;
fp267 = 1.0000000000000000e+00 * src2[((hsi*63+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = inteval->BA_z[vi] * src1[((hsi*63+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = src0[((hsi*84+11)*lowdim+lsi)*1] + fp269;
LIBINT2_REALTYPE fp266;
fp266 = fp268 - fp267;
target[((hsi*126+48)*lowdim+lsi)*1] = fp266;
LIBINT2_REALTYPE fp263;
fp263 = 1.0000000000000000e+00 * src2[((hsi*63+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = inteval->BA_z[vi] * src1[((hsi*63+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = src0[((hsi*84+12)*lowdim+lsi)*1] + fp265;
LIBINT2_REALTYPE fp262;
fp262 = fp264 - fp263;
target[((hsi*126+49)*lowdim+lsi)*1] = fp262;
LIBINT2_REALTYPE fp259;
fp259 = 1.0000000000000000e+00 * src2[((hsi*63+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = inteval->BA_z[vi] * src1[((hsi*63+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = src0[((hsi*84+13)*lowdim+lsi)*1] + fp261;
LIBINT2_REALTYPE fp258;
fp258 = fp260 - fp259;
target[((hsi*126+50)*lowdim+lsi)*1] = fp258;
LIBINT2_REALTYPE fp255;
fp255 = 1.0000000000000000e+00 * src2[((hsi*63+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = inteval->BA_z[vi] * src1[((hsi*63+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = src0[((hsi*84+14)*lowdim+lsi)*1] + fp257;
LIBINT2_REALTYPE fp254;
fp254 = fp256 - fp255;
target[((hsi*126+51)*lowdim+lsi)*1] = fp254;
LIBINT2_REALTYPE fp251;
fp251 = 1.0000000000000000e+00 * src2[((hsi*63+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = inteval->BA_z[vi] * src1[((hsi*63+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = src0[((hsi*84+16)*lowdim+lsi)*1] + fp253;
LIBINT2_REALTYPE fp250;
fp250 = fp252 - fp251;
target[((hsi*126+52)*lowdim+lsi)*1] = fp250;
LIBINT2_REALTYPE fp247;
fp247 = 1.0000000000000000e+00 * src2[((hsi*63+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = inteval->BA_z[vi] * src1[((hsi*63+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = src0[((hsi*84+17)*lowdim+lsi)*1] + fp249;
LIBINT2_REALTYPE fp246;
fp246 = fp248 - fp247;
target[((hsi*126+53)*lowdim+lsi)*1] = fp246;
LIBINT2_REALTYPE fp243;
fp243 = 1.0000000000000000e+00 * src2[((hsi*63+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = inteval->BA_z[vi] * src1[((hsi*63+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = src0[((hsi*84+18)*lowdim+lsi)*1] + fp245;
LIBINT2_REALTYPE fp242;
fp242 = fp244 - fp243;
target[((hsi*126+54)*lowdim+lsi)*1] = fp242;
LIBINT2_REALTYPE fp239;
fp239 = 1.0000000000000000e+00 * src2[((hsi*63+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = inteval->BA_z[vi] * src1[((hsi*63+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = src0[((hsi*84+19)*lowdim+lsi)*1] + fp241;
LIBINT2_REALTYPE fp238;
fp238 = fp240 - fp239;
target[((hsi*126+55)*lowdim+lsi)*1] = fp238;
LIBINT2_REALTYPE fp235;
fp235 = 1.0000000000000000e+00 * src2[((hsi*63+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = inteval->BA_z[vi] * src1[((hsi*63+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = src0[((hsi*84+20)*lowdim+lsi)*1] + fp237;
LIBINT2_REALTYPE fp234;
fp234 = fp236 - fp235;
target[((hsi*126+56)*lowdim+lsi)*1] = fp234;
LIBINT2_REALTYPE fp231;
fp231 = 1.0000000000000000e+00 * src2[((hsi*63+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = inteval->BA_z[vi] * src1[((hsi*63+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = src0[((hsi*84+22)*lowdim+lsi)*1] + fp233;
LIBINT2_REALTYPE fp230;
fp230 = fp232 - fp231;
target[((hsi*126+57)*lowdim+lsi)*1] = fp230;
LIBINT2_REALTYPE fp227;
fp227 = 1.0000000000000000e+00 * src2[((hsi*63+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->BA_z[vi] * src1[((hsi*63+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = src0[((hsi*84+23)*lowdim+lsi)*1] + fp229;
LIBINT2_REALTYPE fp226;
fp226 = fp228 - fp227;
target[((hsi*126+58)*lowdim+lsi)*1] = fp226;
LIBINT2_REALTYPE fp223;
fp223 = 1.0000000000000000e+00 * src2[((hsi*63+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = inteval->BA_z[vi] * src1[((hsi*63+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = src0[((hsi*84+24)*lowdim+lsi)*1] + fp225;
LIBINT2_REALTYPE fp222;
fp222 = fp224 - fp223;
target[((hsi*126+59)*lowdim+lsi)*1] = fp222;
LIBINT2_REALTYPE fp219;
fp219 = 1.0000000000000000e+00 * src2[((hsi*63+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = inteval->BA_z[vi] * src1[((hsi*63+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = src0[((hsi*84+25)*lowdim+lsi)*1] + fp221;
LIBINT2_REALTYPE fp218;
fp218 = fp220 - fp219;
target[((hsi*126+60)*lowdim+lsi)*1] = fp218;
LIBINT2_REALTYPE fp215;
fp215 = 1.0000000000000000e+00 * src2[((hsi*63+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = inteval->BA_z[vi] * src1[((hsi*63+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = src0[((hsi*84+26)*lowdim+lsi)*1] + fp217;
LIBINT2_REALTYPE fp214;
fp214 = fp216 - fp215;
target[((hsi*126+61)*lowdim+lsi)*1] = fp214;
LIBINT2_REALTYPE fp211;
fp211 = 1.0000000000000000e+00 * src2[((hsi*63+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = inteval->BA_z[vi] * src1[((hsi*63+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = src0[((hsi*84+27)*lowdim+lsi)*1] + fp213;
LIBINT2_REALTYPE fp210;
fp210 = fp212 - fp211;
target[((hsi*126+62)*lowdim+lsi)*1] = fp210;
LIBINT2_REALTYPE fp271;
fp271 = 1.0000000000000000e+00 * src2[((hsi*63+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = inteval->BA_z[vi] * src1[((hsi*63+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = src0[((hsi*84+9)*lowdim+lsi)*1] + fp273;
LIBINT2_REALTYPE fp270;
fp270 = fp272 - fp271;
target[((hsi*126+47)*lowdim+lsi)*1] = fp270;
LIBINT2_REALTYPE fp375;
fp375 = inteval->BA_x[vi] * src1[((hsi*63+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = src0[((hsi*84+1)*lowdim+lsi)*1] + fp375;
target[((hsi*126+1)*lowdim+lsi)*1] = fp374;
LIBINT2_REALTYPE fp373;
fp373 = inteval->BA_x[vi] * src1[((hsi*63+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp372;
fp372 = src0[((hsi*84+2)*lowdim+lsi)*1] + fp373;
target[((hsi*126+2)*lowdim+lsi)*1] = fp372;
LIBINT2_REALTYPE fp371;
fp371 = inteval->BA_x[vi] * src1[((hsi*63+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp370;
fp370 = src0[((hsi*84+3)*lowdim+lsi)*1] + fp371;
target[((hsi*126+3)*lowdim+lsi)*1] = fp370;
LIBINT2_REALTYPE fp369;
fp369 = inteval->BA_x[vi] * src1[((hsi*63+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = src0[((hsi*84+4)*lowdim+lsi)*1] + fp369;
target[((hsi*126+4)*lowdim+lsi)*1] = fp368;
LIBINT2_REALTYPE fp367;
fp367 = inteval->BA_x[vi] * src1[((hsi*63+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = src0[((hsi*84+5)*lowdim+lsi)*1] + fp367;
target[((hsi*126+5)*lowdim+lsi)*1] = fp366;
LIBINT2_REALTYPE fp365;
fp365 = inteval->BA_x[vi] * src1[((hsi*63+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = src0[((hsi*84+6)*lowdim+lsi)*1] + fp365;
target[((hsi*126+6)*lowdim+lsi)*1] = fp364;
LIBINT2_REALTYPE fp363;
fp363 = inteval->BA_x[vi] * src1[((hsi*63+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp362;
fp362 = src0[((hsi*84+7)*lowdim+lsi)*1] + fp363;
target[((hsi*126+7)*lowdim+lsi)*1] = fp362;
LIBINT2_REALTYPE fp361;
fp361 = inteval->BA_x[vi] * src1[((hsi*63+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp360;
fp360 = src0[((hsi*84+8)*lowdim+lsi)*1] + fp361;
target[((hsi*126+8)*lowdim+lsi)*1] = fp360;
LIBINT2_REALTYPE fp359;
fp359 = inteval->BA_x[vi] * src1[((hsi*63+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = src0[((hsi*84+9)*lowdim+lsi)*1] + fp359;
target[((hsi*126+9)*lowdim+lsi)*1] = fp358;
LIBINT2_REALTYPE fp357;
fp357 = inteval->BA_x[vi] * src1[((hsi*63+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = src0[((hsi*84+10)*lowdim+lsi)*1] + fp357;
target[((hsi*126+10)*lowdim+lsi)*1] = fp356;
LIBINT2_REALTYPE fp355;
fp355 = inteval->BA_x[vi] * src1[((hsi*63+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = src0[((hsi*84+11)*lowdim+lsi)*1] + fp355;
target[((hsi*126+11)*lowdim+lsi)*1] = fp354;
LIBINT2_REALTYPE fp353;
fp353 = inteval->BA_x[vi] * src1[((hsi*63+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = src0[((hsi*84+12)*lowdim+lsi)*1] + fp353;
target[((hsi*126+12)*lowdim+lsi)*1] = fp352;
LIBINT2_REALTYPE fp351;
fp351 = inteval->BA_x[vi] * src1[((hsi*63+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = src0[((hsi*84+13)*lowdim+lsi)*1] + fp351;
target[((hsi*126+13)*lowdim+lsi)*1] = fp350;
LIBINT2_REALTYPE fp349;
fp349 = inteval->BA_x[vi] * src1[((hsi*63+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = src0[((hsi*84+14)*lowdim+lsi)*1] + fp349;
target[((hsi*126+14)*lowdim+lsi)*1] = fp348;
LIBINT2_REALTYPE fp347;
fp347 = inteval->BA_x[vi] * src1[((hsi*63+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = src0[((hsi*84+15)*lowdim+lsi)*1] + fp347;
target[((hsi*126+15)*lowdim+lsi)*1] = fp346;
LIBINT2_REALTYPE fp313;
fp313 = inteval->BA_y[vi] * src1[((hsi*63+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp312;
fp312 = src0[((hsi*84+16)*lowdim+lsi)*1] + fp313;
target[((hsi*126+32)*lowdim+lsi)*1] = fp312;
LIBINT2_REALTYPE fp343;
fp343 = inteval->BA_x[vi] * src1[((hsi*63+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = src0[((hsi*84+17)*lowdim+lsi)*1] + fp343;
target[((hsi*126+17)*lowdim+lsi)*1] = fp342;
LIBINT2_REALTYPE fp341;
fp341 = inteval->BA_x[vi] * src1[((hsi*63+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = src0[((hsi*84+18)*lowdim+lsi)*1] + fp341;
target[((hsi*126+18)*lowdim+lsi)*1] = fp340;
LIBINT2_REALTYPE fp339;
fp339 = inteval->BA_x[vi] * src1[((hsi*63+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = src0[((hsi*84+19)*lowdim+lsi)*1] + fp339;
target[((hsi*126+19)*lowdim+lsi)*1] = fp338;
LIBINT2_REALTYPE fp337;
fp337 = inteval->BA_x[vi] * src1[((hsi*63+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp336;
fp336 = src0[((hsi*84+20)*lowdim+lsi)*1] + fp337;
target[((hsi*126+20)*lowdim+lsi)*1] = fp336;
LIBINT2_REALTYPE fp335;
fp335 = inteval->BA_y[vi] * src1[((hsi*63+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = src0[((hsi*84+1)*lowdim+lsi)*1] + fp335;
target[((hsi*126+21)*lowdim+lsi)*1] = fp334;
LIBINT2_REALTYPE fp333;
fp333 = inteval->BA_y[vi] * src1[((hsi*63+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = src0[((hsi*84+3)*lowdim+lsi)*1] + fp333;
target[((hsi*126+22)*lowdim+lsi)*1] = fp332;
LIBINT2_REALTYPE fp331;
fp331 = inteval->BA_y[vi] * src1[((hsi*63+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = src0[((hsi*84+4)*lowdim+lsi)*1] + fp331;
target[((hsi*126+23)*lowdim+lsi)*1] = fp330;
LIBINT2_REALTYPE fp329;
fp329 = inteval->BA_y[vi] * src1[((hsi*63+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = src0[((hsi*84+6)*lowdim+lsi)*1] + fp329;
target[((hsi*126+24)*lowdim+lsi)*1] = fp328;
LIBINT2_REALTYPE fp327;
fp327 = inteval->BA_y[vi] * src1[((hsi*63+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = src0[((hsi*84+7)*lowdim+lsi)*1] + fp327;
target[((hsi*126+25)*lowdim+lsi)*1] = fp326;
LIBINT2_REALTYPE fp325;
fp325 = inteval->BA_y[vi] * src1[((hsi*63+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = src0[((hsi*84+8)*lowdim+lsi)*1] + fp325;
target[((hsi*126+26)*lowdim+lsi)*1] = fp324;
LIBINT2_REALTYPE fp323;
fp323 = inteval->BA_y[vi] * src1[((hsi*63+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = src0[((hsi*84+10)*lowdim+lsi)*1] + fp323;
target[((hsi*126+27)*lowdim+lsi)*1] = fp322;
LIBINT2_REALTYPE fp321;
fp321 = inteval->BA_y[vi] * src1[((hsi*63+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp320;
fp320 = src0[((hsi*84+11)*lowdim+lsi)*1] + fp321;
target[((hsi*126+28)*lowdim+lsi)*1] = fp320;
LIBINT2_REALTYPE fp319;
fp319 = inteval->BA_y[vi] * src1[((hsi*63+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = src0[((hsi*84+12)*lowdim+lsi)*1] + fp319;
target[((hsi*126+29)*lowdim+lsi)*1] = fp318;
LIBINT2_REALTYPE fp317;
fp317 = inteval->BA_y[vi] * src1[((hsi*63+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = src0[((hsi*84+13)*lowdim+lsi)*1] + fp317;
target[((hsi*126+30)*lowdim+lsi)*1] = fp316;
LIBINT2_REALTYPE fp315;
fp315 = inteval->BA_y[vi] * src1[((hsi*63+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp314;
fp314 = src0[((hsi*84+15)*lowdim+lsi)*1] + fp315;
target[((hsi*126+31)*lowdim+lsi)*1] = fp314;
LIBINT2_REALTYPE fp345;
fp345 = inteval->BA_x[vi] * src1[((hsi*63+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = src0[((hsi*84+16)*lowdim+lsi)*1] + fp345;
target[((hsi*126+16)*lowdim+lsi)*1] = fp344;
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * src2[((hsi*63+33)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->BA_z[vi] * src1[((hsi*63+33)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*84+46)*lowdim+lsi)*1] + fp119;
LIBINT2_REALTYPE fp116;
fp116 = fp118 - fp117;
target[((hsi*126+96)*lowdim+lsi)*1] = fp116;
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * src2[((hsi*63+34)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->BA_z[vi] * src1[((hsi*63+34)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = src0[((hsi*84+47)*lowdim+lsi)*1] + fp115;
LIBINT2_REALTYPE fp112;
fp112 = fp114 - fp113;
target[((hsi*126+97)*lowdim+lsi)*1] = fp112;
LIBINT2_REALTYPE fp109;
fp109 = 1.0000000000000000e+00 * src2[((hsi*63+35)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->BA_z[vi] * src1[((hsi*63+35)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*84+48)*lowdim+lsi)*1] + fp111;
LIBINT2_REALTYPE fp108;
fp108 = fp110 - fp109;
target[((hsi*126+98)*lowdim+lsi)*1] = fp108;
LIBINT2_REALTYPE fp105;
fp105 = 1.0000000000000000e+00 * src2[((hsi*63+36)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->BA_z[vi] * src1[((hsi*63+36)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = src0[((hsi*84+50)*lowdim+lsi)*1] + fp107;
LIBINT2_REALTYPE fp104;
fp104 = fp106 - fp105;
target[((hsi*126+99)*lowdim+lsi)*1] = fp104;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * src2[((hsi*63+37)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->BA_z[vi] * src1[((hsi*63+37)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*84+51)*lowdim+lsi)*1] + fp103;
LIBINT2_REALTYPE fp100;
fp100 = fp102 - fp101;
target[((hsi*126+100)*lowdim+lsi)*1] = fp100;
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * src2[((hsi*63+38)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->BA_z[vi] * src1[((hsi*63+38)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*84+52)*lowdim+lsi)*1] + fp99;
LIBINT2_REALTYPE fp96;
fp96 = fp98 - fp97;
target[((hsi*126+101)*lowdim+lsi)*1] = fp96;
LIBINT2_REALTYPE fp93;
fp93 = 1.0000000000000000e+00 * src2[((hsi*63+39)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->BA_z[vi] * src1[((hsi*63+39)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = src0[((hsi*84+53)*lowdim+lsi)*1] + fp95;
LIBINT2_REALTYPE fp92;
fp92 = fp94 - fp93;
target[((hsi*126+102)*lowdim+lsi)*1] = fp92;
LIBINT2_REALTYPE fp89;
fp89 = 1.0000000000000000e+00 * src2[((hsi*63+40)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->BA_z[vi] * src1[((hsi*63+40)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = src0[((hsi*84+54)*lowdim+lsi)*1] + fp91;
LIBINT2_REALTYPE fp88;
fp88 = fp90 - fp89;
target[((hsi*126+103)*lowdim+lsi)*1] = fp88;
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * src2[((hsi*63+41)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->BA_z[vi] * src1[((hsi*63+41)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*84+55)*lowdim+lsi)*1] + fp87;
LIBINT2_REALTYPE fp84;
fp84 = fp86 - fp85;
target[((hsi*126+104)*lowdim+lsi)*1] = fp84;
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * src2[((hsi*63+42)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->BA_z[vi] * src1[((hsi*63+42)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src0[((hsi*84+58)*lowdim+lsi)*1] + fp83;
LIBINT2_REALTYPE fp80;
fp80 = fp82 - fp81;
target[((hsi*126+105)*lowdim+lsi)*1] = fp80;
LIBINT2_REALTYPE fp77;
fp77 = 1.0000000000000000e+00 * src2[((hsi*63+43)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->BA_z[vi] * src1[((hsi*63+43)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*84+60)*lowdim+lsi)*1] + fp79;
LIBINT2_REALTYPE fp76;
fp76 = fp78 - fp77;
target[((hsi*126+106)*lowdim+lsi)*1] = fp76;
LIBINT2_REALTYPE fp73;
fp73 = 1.0000000000000000e+00 * src2[((hsi*63+44)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->BA_z[vi] * src1[((hsi*63+44)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src0[((hsi*84+61)*lowdim+lsi)*1] + fp75;
LIBINT2_REALTYPE fp72;
fp72 = fp74 - fp73;
target[((hsi*126+107)*lowdim+lsi)*1] = fp72;
LIBINT2_REALTYPE fp69;
fp69 = 1.0000000000000000e+00 * src2[((hsi*63+45)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->BA_z[vi] * src1[((hsi*63+45)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*84+63)*lowdim+lsi)*1] + fp71;
LIBINT2_REALTYPE fp68;
fp68 = fp70 - fp69;
target[((hsi*126+108)*lowdim+lsi)*1] = fp68;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * src2[((hsi*63+46)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->BA_z[vi] * src1[((hsi*63+46)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*84+64)*lowdim+lsi)*1] + fp67;
LIBINT2_REALTYPE fp64;
fp64 = fp66 - fp65;
target[((hsi*126+109)*lowdim+lsi)*1] = fp64;
LIBINT2_REALTYPE fp209;
fp209 = inteval->BA_y[vi] * src1[((hsi*63+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = src0[((hsi*84+29)*lowdim+lsi)*1] + fp209;
target[((hsi*126+63)*lowdim+lsi)*1] = fp208;
LIBINT2_REALTYPE fp57;
fp57 = 1.0000000000000000e+00 * src2[((hsi*63+48)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->BA_z[vi] * src1[((hsi*63+48)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src0[((hsi*84+67)*lowdim+lsi)*1] + fp59;
LIBINT2_REALTYPE fp56;
fp56 = fp58 - fp57;
target[((hsi*126+111)*lowdim+lsi)*1] = fp56;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * src2[((hsi*63+49)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BA_z[vi] * src1[((hsi*63+49)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*84+68)*lowdim+lsi)*1] + fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp54 - fp53;
target[((hsi*126+112)*lowdim+lsi)*1] = fp52;
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * src2[((hsi*63+50)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->BA_z[vi] * src1[((hsi*63+50)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*84+69)*lowdim+lsi)*1] + fp51;
LIBINT2_REALTYPE fp48;
fp48 = fp50 - fp49;
target[((hsi*126+113)*lowdim+lsi)*1] = fp48;
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * src2[((hsi*63+51)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->BA_z[vi] * src1[((hsi*63+51)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*84+70)*lowdim+lsi)*1] + fp47;
LIBINT2_REALTYPE fp44;
fp44 = fp46 - fp45;
target[((hsi*126+114)*lowdim+lsi)*1] = fp44;
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * src2[((hsi*63+52)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BA_z[vi] * src1[((hsi*63+52)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*84+72)*lowdim+lsi)*1] + fp43;
LIBINT2_REALTYPE fp40;
fp40 = fp42 - fp41;
target[((hsi*126+115)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * src2[((hsi*63+53)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BA_z[vi] * src1[((hsi*63+53)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*84+73)*lowdim+lsi)*1] + fp39;
LIBINT2_REALTYPE fp36;
fp36 = fp38 - fp37;
target[((hsi*126+116)*lowdim+lsi)*1] = fp36;
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * src2[((hsi*63+54)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->BA_z[vi] * src1[((hsi*63+54)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*84+74)*lowdim+lsi)*1] + fp35;
LIBINT2_REALTYPE fp32;
fp32 = fp34 - fp33;
target[((hsi*126+117)*lowdim+lsi)*1] = fp32;
LIBINT2_REALTYPE fp29;
fp29 = 1.0000000000000000e+00 * src2[((hsi*63+55)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BA_z[vi] * src1[((hsi*63+55)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*84+75)*lowdim+lsi)*1] + fp31;
LIBINT2_REALTYPE fp28;
fp28 = fp30 - fp29;
target[((hsi*126+118)*lowdim+lsi)*1] = fp28;
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * src2[((hsi*63+56)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BA_z[vi] * src1[((hsi*63+56)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*84+76)*lowdim+lsi)*1] + fp27;
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
target[((hsi*126+119)*lowdim+lsi)*1] = fp24;
LIBINT2_REALTYPE fp21;
fp21 = 1.0000000000000000e+00 * src2[((hsi*63+57)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BA_z[vi] * src1[((hsi*63+57)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*84+78)*lowdim+lsi)*1] + fp23;
LIBINT2_REALTYPE fp20;
fp20 = fp22 - fp21;
target[((hsi*126+120)*lowdim+lsi)*1] = fp20;
LIBINT2_REALTYPE fp17;
fp17 = 1.0000000000000000e+00 * src2[((hsi*63+58)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BA_z[vi] * src1[((hsi*63+58)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*84+79)*lowdim+lsi)*1] + fp19;
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
target[((hsi*126+121)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp13;
fp13 = 1.0000000000000000e+00 * src2[((hsi*63+59)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BA_z[vi] * src1[((hsi*63+59)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*84+80)*lowdim+lsi)*1] + fp15;
LIBINT2_REALTYPE fp12;
fp12 = fp14 - fp13;
target[((hsi*126+122)*lowdim+lsi)*1] = fp12;
LIBINT2_REALTYPE fp9;
fp9 = 1.0000000000000000e+00 * src2[((hsi*63+60)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BA_z[vi] * src1[((hsi*63+60)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src0[((hsi*84+81)*lowdim+lsi)*1] + fp11;
LIBINT2_REALTYPE fp8;
fp8 = fp10 - fp9;
target[((hsi*126+123)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * src2[((hsi*63+61)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->BA_z[vi] * src1[((hsi*63+61)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*84+82)*lowdim+lsi)*1] + fp7;
LIBINT2_REALTYPE fp4;
fp4 = fp6 - fp5;
target[((hsi*126+124)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * src2[((hsi*63+62)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->BA_z[vi] * src1[((hsi*63+62)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*84+83)*lowdim+lsi)*1] + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 - fp1;
target[((hsi*126+125)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * src2[((hsi*63+47)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->BA_z[vi] * src1[((hsi*63+47)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*84+65)*lowdim+lsi)*1] + fp63;
LIBINT2_REALTYPE fp60;
fp60 = fp62 - fp61;
target[((hsi*126+110)*lowdim+lsi)*1] = fp60;
LIBINT2_REALTYPE fp207;
fp207 = inteval->BA_y[vi] * src1[((hsi*63+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = src0[((hsi*84+31)*lowdim+lsi)*1] + fp207;
target[((hsi*126+64)*lowdim+lsi)*1] = fp206;
LIBINT2_REALTYPE fp205;
fp205 = inteval->BA_y[vi] * src1[((hsi*63+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*84+32)*lowdim+lsi)*1] + fp205;
target[((hsi*126+65)*lowdim+lsi)*1] = fp204;
LIBINT2_REALTYPE fp203;
fp203 = inteval->BA_y[vi] * src1[((hsi*63+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = src0[((hsi*84+34)*lowdim+lsi)*1] + fp203;
target[((hsi*126+66)*lowdim+lsi)*1] = fp202;
LIBINT2_REALTYPE fp201;
fp201 = inteval->BA_y[vi] * src1[((hsi*63+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = src0[((hsi*84+35)*lowdim+lsi)*1] + fp201;
target[((hsi*126+67)*lowdim+lsi)*1] = fp200;
LIBINT2_REALTYPE fp199;
fp199 = inteval->BA_y[vi] * src1[((hsi*63+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = src0[((hsi*84+36)*lowdim+lsi)*1] + fp199;
target[((hsi*126+68)*lowdim+lsi)*1] = fp198;
LIBINT2_REALTYPE fp197;
fp197 = inteval->BA_y[vi] * src1[((hsi*63+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = src0[((hsi*84+38)*lowdim+lsi)*1] + fp197;
target[((hsi*126+69)*lowdim+lsi)*1] = fp196;
LIBINT2_REALTYPE fp195;
fp195 = inteval->BA_y[vi] * src1[((hsi*63+28)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = src0[((hsi*84+39)*lowdim+lsi)*1] + fp195;
target[((hsi*126+70)*lowdim+lsi)*1] = fp194;
LIBINT2_REALTYPE fp193;
fp193 = inteval->BA_y[vi] * src1[((hsi*63+29)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = src0[((hsi*84+40)*lowdim+lsi)*1] + fp193;
target[((hsi*126+71)*lowdim+lsi)*1] = fp192;
LIBINT2_REALTYPE fp191;
fp191 = inteval->BA_y[vi] * src1[((hsi*63+30)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = src0[((hsi*84+41)*lowdim+lsi)*1] + fp191;
target[((hsi*126+72)*lowdim+lsi)*1] = fp190;
LIBINT2_REALTYPE fp189;
fp189 = inteval->BA_y[vi] * src1[((hsi*63+31)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = src0[((hsi*84+43)*lowdim+lsi)*1] + fp189;
target[((hsi*126+73)*lowdim+lsi)*1] = fp188;
LIBINT2_REALTYPE fp187;
fp187 = inteval->BA_y[vi] * src1[((hsi*63+32)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = src0[((hsi*84+44)*lowdim+lsi)*1] + fp187;
target[((hsi*126+74)*lowdim+lsi)*1] = fp186;
LIBINT2_REALTYPE fp185;
fp185 = inteval->BA_y[vi] * src1[((hsi*63+33)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = src0[((hsi*84+45)*lowdim+lsi)*1] + fp185;
target[((hsi*126+75)*lowdim+lsi)*1] = fp184;
LIBINT2_REALTYPE fp183;
fp183 = inteval->BA_y[vi] * src1[((hsi*63+34)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = src0[((hsi*84+46)*lowdim+lsi)*1] + fp183;
target[((hsi*126+76)*lowdim+lsi)*1] = fp182;
LIBINT2_REALTYPE fp181;
fp181 = inteval->BA_y[vi] * src1[((hsi*63+35)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = src0[((hsi*84+47)*lowdim+lsi)*1] + fp181;
target[((hsi*126+77)*lowdim+lsi)*1] = fp180;
LIBINT2_REALTYPE fp179;
fp179 = inteval->BA_y[vi] * src1[((hsi*63+36)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = src0[((hsi*84+49)*lowdim+lsi)*1] + fp179;
target[((hsi*126+78)*lowdim+lsi)*1] = fp178;
LIBINT2_REALTYPE fp121;
fp121 = 1.0000000000000000e+00 * src2[((hsi*63+32)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->BA_z[vi] * src1[((hsi*63+32)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = src0[((hsi*84+45)*lowdim+lsi)*1] + fp123;
LIBINT2_REALTYPE fp120;
fp120 = fp122 - fp121;
target[((hsi*126+95)*lowdim+lsi)*1] = fp120;
LIBINT2_REALTYPE fp175;
fp175 = inteval->BA_y[vi] * src1[((hsi*63+38)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = src0[((hsi*84+51)*lowdim+lsi)*1] + fp175;
target[((hsi*126+80)*lowdim+lsi)*1] = fp174;
LIBINT2_REALTYPE fp173;
fp173 = inteval->BA_y[vi] * src1[((hsi*63+39)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = src0[((hsi*84+52)*lowdim+lsi)*1] + fp173;
target[((hsi*126+81)*lowdim+lsi)*1] = fp172;
LIBINT2_REALTYPE fp171;
fp171 = inteval->BA_y[vi] * src1[((hsi*63+40)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = src0[((hsi*84+53)*lowdim+lsi)*1] + fp171;
target[((hsi*126+82)*lowdim+lsi)*1] = fp170;
LIBINT2_REALTYPE fp169;
fp169 = inteval->BA_y[vi] * src1[((hsi*63+41)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = src0[((hsi*84+54)*lowdim+lsi)*1] + fp169;
target[((hsi*126+83)*lowdim+lsi)*1] = fp168;
LIBINT2_REALTYPE fp165;
fp165 = 1.0000000000000000e+00 * src2[((hsi*63+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = inteval->BA_z[vi] * src1[((hsi*63+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = src0[((hsi*84+30)*lowdim+lsi)*1] + fp167;
LIBINT2_REALTYPE fp164;
fp164 = fp166 - fp165;
target[((hsi*126+84)*lowdim+lsi)*1] = fp164;
LIBINT2_REALTYPE fp161;
fp161 = 1.0000000000000000e+00 * src2[((hsi*63+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->BA_z[vi] * src1[((hsi*63+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = src0[((hsi*84+32)*lowdim+lsi)*1] + fp163;
LIBINT2_REALTYPE fp160;
fp160 = fp162 - fp161;
target[((hsi*126+85)*lowdim+lsi)*1] = fp160;
LIBINT2_REALTYPE fp157;
fp157 = 1.0000000000000000e+00 * src2[((hsi*63+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = inteval->BA_z[vi] * src1[((hsi*63+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*84+33)*lowdim+lsi)*1] + fp159;
LIBINT2_REALTYPE fp156;
fp156 = fp158 - fp157;
target[((hsi*126+86)*lowdim+lsi)*1] = fp156;
LIBINT2_REALTYPE fp153;
fp153 = 1.0000000000000000e+00 * src2[((hsi*63+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = inteval->BA_z[vi] * src1[((hsi*63+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = src0[((hsi*84+35)*lowdim+lsi)*1] + fp155;
LIBINT2_REALTYPE fp152;
fp152 = fp154 - fp153;
target[((hsi*126+87)*lowdim+lsi)*1] = fp152;
LIBINT2_REALTYPE fp149;
fp149 = 1.0000000000000000e+00 * src2[((hsi*63+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->BA_z[vi] * src1[((hsi*63+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = src0[((hsi*84+36)*lowdim+lsi)*1] + fp151;
LIBINT2_REALTYPE fp148;
fp148 = fp150 - fp149;
target[((hsi*126+88)*lowdim+lsi)*1] = fp148;
LIBINT2_REALTYPE fp145;
fp145 = 1.0000000000000000e+00 * src2[((hsi*63+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->BA_z[vi] * src1[((hsi*63+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = src0[((hsi*84+37)*lowdim+lsi)*1] + fp147;
LIBINT2_REALTYPE fp144;
fp144 = fp146 - fp145;
target[((hsi*126+89)*lowdim+lsi)*1] = fp144;
LIBINT2_REALTYPE fp141;
fp141 = 1.0000000000000000e+00 * src2[((hsi*63+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->BA_z[vi] * src1[((hsi*63+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = src0[((hsi*84+39)*lowdim+lsi)*1] + fp143;
LIBINT2_REALTYPE fp140;
fp140 = fp142 - fp141;
target[((hsi*126+90)*lowdim+lsi)*1] = fp140;
LIBINT2_REALTYPE fp137;
fp137 = 1.0000000000000000e+00 * src2[((hsi*63+28)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->BA_z[vi] * src1[((hsi*63+28)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = src0[((hsi*84+40)*lowdim+lsi)*1] + fp139;
LIBINT2_REALTYPE fp136;
fp136 = fp138 - fp137;
target[((hsi*126+91)*lowdim+lsi)*1] = fp136;
LIBINT2_REALTYPE fp133;
fp133 = 1.0000000000000000e+00 * src2[((hsi*63+29)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->BA_z[vi] * src1[((hsi*63+29)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = src0[((hsi*84+41)*lowdim+lsi)*1] + fp135;
LIBINT2_REALTYPE fp132;
fp132 = fp134 - fp133;
target[((hsi*126+92)*lowdim+lsi)*1] = fp132;
LIBINT2_REALTYPE fp129;
fp129 = 1.0000000000000000e+00 * src2[((hsi*63+30)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->BA_z[vi] * src1[((hsi*63+30)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = src0[((hsi*84+42)*lowdim+lsi)*1] + fp131;
LIBINT2_REALTYPE fp128;
fp128 = fp130 - fp129;
target[((hsi*126+93)*lowdim+lsi)*1] = fp128;
LIBINT2_REALTYPE fp125;
fp125 = 1.0000000000000000e+00 * src2[((hsi*63+31)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->BA_z[vi] * src1[((hsi*63+31)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src0[((hsi*84+44)*lowdim+lsi)*1] + fp127;
LIBINT2_REALTYPE fp124;
fp124 = fp126 - fp125;
target[((hsi*126+94)*lowdim+lsi)*1] = fp124;
LIBINT2_REALTYPE fp177;
fp177 = inteval->BA_y[vi] * src1[((hsi*63+37)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = src0[((hsi*84+50)*lowdim+lsi)*1] + fp177;
target[((hsi*126+79)*lowdim+lsi)*1] = fp176;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 378 */
}

#ifdef __cplusplus
};
#endif
