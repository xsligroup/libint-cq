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
void CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d010__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp43 * fp30;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp11;
LIBINT2_REALTYPE fp451;
fp451 = inteval->two_alpha0_ket[vi] * fp246;
target[((hsi*90+24)*1+lsi)*1] = fp451;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp42 * fp28;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp11;
LIBINT2_REALTYPE fp449;
fp449 = 1.0000000000000000e+00 * fp242;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp42 * fp29;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp11;
LIBINT2_REALTYPE fp450;
fp450 = inteval->two_alpha0_ket[vi] * fp244;
LIBINT2_REALTYPE fp448;
fp448 = fp450 - fp449;
target[((hsi*90+25)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp42 * fp30;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp10;
LIBINT2_REALTYPE fp447;
fp447 = inteval->two_alpha0_ket[vi] * fp240;
target[((hsi*90+26)*1+lsi)*1] = fp447;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp41 * fp30;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp11;
LIBINT2_REALTYPE fp445;
fp445 = 2.0000000000000000e+00 * fp236;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = fp41 * fp27;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp11;
LIBINT2_REALTYPE fp446;
fp446 = inteval->two_alpha0_ket[vi] * fp238;
LIBINT2_REALTYPE fp444;
fp444 = fp446 - fp445;
target[((hsi*90+27)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp233;
fp233 = fp41 * fp28;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp10;
LIBINT2_REALTYPE fp442;
fp442 = 1.0000000000000000e+00 * fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp41 * fp29;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp10;
LIBINT2_REALTYPE fp443;
fp443 = inteval->two_alpha0_ket[vi] * fp234;
LIBINT2_REALTYPE fp441;
fp441 = fp443 - fp442;
target[((hsi*90+28)*1+lsi)*1] = fp441;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp41 * fp30;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp9;
LIBINT2_REALTYPE fp440;
fp440 = inteval->two_alpha0_ket[vi] * fp230;
target[((hsi*90+29)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp43 * fp34;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp8;
LIBINT2_REALTYPE fp439;
fp439 = inteval->two_alpha0_ket[vi] * fp228;
target[((hsi*90+30)*1+lsi)*1] = fp439;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp42 * fp32;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp8;
LIBINT2_REALTYPE fp437;
fp437 = 1.0000000000000000e+00 * fp224;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = fp42 * fp33;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp8;
LIBINT2_REALTYPE fp438;
fp438 = inteval->two_alpha0_ket[vi] * fp226;
LIBINT2_REALTYPE fp436;
fp436 = fp438 - fp437;
target[((hsi*90+31)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp42 * fp34;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp7;
LIBINT2_REALTYPE fp435;
fp435 = inteval->two_alpha0_ket[vi] * fp222;
target[((hsi*90+32)*1+lsi)*1] = fp435;
LIBINT2_REALTYPE fp219;
fp219 = fp41 * fp34;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp8;
LIBINT2_REALTYPE fp433;
fp433 = 2.0000000000000000e+00 * fp218;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp41 * fp31;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp8;
LIBINT2_REALTYPE fp434;
fp434 = inteval->two_alpha0_ket[vi] * fp220;
LIBINT2_REALTYPE fp432;
fp432 = fp434 - fp433;
target[((hsi*90+33)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src0[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp49 * fp34;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp14;
LIBINT2_REALTYPE fp499;
fp499 = inteval->two_alpha0_ket[vi] * fp318;
target[((hsi*90+0)*1+lsi)*1] = fp499;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp41 * fp34;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp6;
LIBINT2_REALTYPE fp428;
fp428 = inteval->two_alpha0_ket[vi] * fp212;
target[((hsi*90+35)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp40 * fp22;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp14;
LIBINT2_REALTYPE fp427;
fp427 = inteval->two_alpha0_ket[vi] * fp210;
target[((hsi*90+36)*1+lsi)*1] = fp427;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src0[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp39 * fp20;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp14;
LIBINT2_REALTYPE fp425;
fp425 = 1.0000000000000000e+00 * fp206;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp39 * fp21;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp14;
LIBINT2_REALTYPE fp426;
fp426 = inteval->two_alpha0_ket[vi] * fp208;
LIBINT2_REALTYPE fp424;
fp424 = fp426 - fp425;
target[((hsi*90+37)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp39 * fp22;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp13;
LIBINT2_REALTYPE fp423;
fp423 = inteval->two_alpha0_ket[vi] * fp204;
target[((hsi*90+38)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp38 * fp22;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp14;
LIBINT2_REALTYPE fp421;
fp421 = 2.0000000000000000e+00 * fp200;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp38 * fp19;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp14;
LIBINT2_REALTYPE fp422;
fp422 = inteval->two_alpha0_ket[vi] * fp202;
LIBINT2_REALTYPE fp420;
fp420 = fp422 - fp421;
target[((hsi*90+39)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp197;
fp197 = fp38 * fp20;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp13;
LIBINT2_REALTYPE fp418;
fp418 = 1.0000000000000000e+00 * fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp38 * fp21;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp13;
LIBINT2_REALTYPE fp419;
fp419 = inteval->two_alpha0_ket[vi] * fp198;
LIBINT2_REALTYPE fp417;
fp417 = fp419 - fp418;
target[((hsi*90+40)*1+lsi)*1] = fp417;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp38 * fp22;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp12;
LIBINT2_REALTYPE fp416;
fp416 = inteval->two_alpha0_ket[vi] * fp194;
target[((hsi*90+41)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp40 * fp26;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp11;
LIBINT2_REALTYPE fp415;
fp415 = inteval->two_alpha0_ket[vi] * fp192;
target[((hsi*90+42)*1+lsi)*1] = fp415;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp39 * fp24;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp11;
LIBINT2_REALTYPE fp413;
fp413 = 1.0000000000000000e+00 * fp188;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp39 * fp25;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp11;
LIBINT2_REALTYPE fp414;
fp414 = inteval->two_alpha0_ket[vi] * fp190;
LIBINT2_REALTYPE fp412;
fp412 = fp414 - fp413;
target[((hsi*90+43)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp187;
fp187 = fp39 * fp26;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp10;
LIBINT2_REALTYPE fp411;
fp411 = inteval->two_alpha0_ket[vi] * fp186;
target[((hsi*90+44)*1+lsi)*1] = fp411;
LIBINT2_REALTYPE fp215;
fp215 = fp41 * fp32;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp7;
LIBINT2_REALTYPE fp430;
fp430 = 1.0000000000000000e+00 * fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp41 * fp33;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp7;
LIBINT2_REALTYPE fp431;
fp431 = inteval->two_alpha0_ket[vi] * fp216;
LIBINT2_REALTYPE fp429;
fp429 = fp431 - fp430;
target[((hsi*90+34)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = fp48 * fp32;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp14;
LIBINT2_REALTYPE fp497;
fp497 = 1.0000000000000000e+00 * fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp48 * fp33;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp14;
LIBINT2_REALTYPE fp498;
fp498 = inteval->two_alpha0_ket[vi] * fp316;
LIBINT2_REALTYPE fp496;
fp496 = fp498 - fp497;
target[((hsi*90+1)*1+lsi)*1] = fp496;
LIBINT2_REALTYPE fp313;
fp313 = fp48 * fp34;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp13;
LIBINT2_REALTYPE fp495;
fp495 = inteval->two_alpha0_ket[vi] * fp312;
target[((hsi*90+2)*1+lsi)*1] = fp495;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
fp309 = fp47 * fp34;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp14;
LIBINT2_REALTYPE fp493;
fp493 = 2.0000000000000000e+00 * fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp47 * fp31;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp14;
LIBINT2_REALTYPE fp494;
fp494 = inteval->two_alpha0_ket[vi] * fp310;
LIBINT2_REALTYPE fp492;
fp492 = fp494 - fp493;
target[((hsi*90+3)*1+lsi)*1] = fp492;
LIBINT2_REALTYPE fp305;
fp305 = fp47 * fp32;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp13;
LIBINT2_REALTYPE fp490;
fp490 = 1.0000000000000000e+00 * fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp47 * fp33;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp13;
LIBINT2_REALTYPE fp491;
fp491 = inteval->two_alpha0_ket[vi] * fp306;
LIBINT2_REALTYPE fp489;
fp489 = fp491 - fp490;
target[((hsi*90+4)*1+lsi)*1] = fp489;
LIBINT2_REALTYPE fp303;
fp303 = fp47 * fp34;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp12;
LIBINT2_REALTYPE fp488;
fp488 = inteval->two_alpha0_ket[vi] * fp302;
target[((hsi*90+5)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp46 * fp30;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp14;
LIBINT2_REALTYPE fp487;
fp487 = inteval->two_alpha0_ket[vi] * fp300;
target[((hsi*90+6)*1+lsi)*1] = fp487;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp45 * fp28;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp14;
LIBINT2_REALTYPE fp485;
fp485 = 1.0000000000000000e+00 * fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp45 * fp29;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp14;
LIBINT2_REALTYPE fp486;
fp486 = inteval->two_alpha0_ket[vi] * fp298;
LIBINT2_REALTYPE fp484;
fp484 = fp486 - fp485;
target[((hsi*90+7)*1+lsi)*1] = fp484;
LIBINT2_REALTYPE fp295;
fp295 = fp45 * fp30;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp13;
LIBINT2_REALTYPE fp483;
fp483 = inteval->two_alpha0_ket[vi] * fp294;
target[((hsi*90+8)*1+lsi)*1] = fp483;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp44 * fp30;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp14;
LIBINT2_REALTYPE fp481;
fp481 = 2.0000000000000000e+00 * fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp44 * fp27;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp14;
LIBINT2_REALTYPE fp482;
fp482 = inteval->two_alpha0_ket[vi] * fp292;
LIBINT2_REALTYPE fp480;
fp480 = fp482 - fp481;
target[((hsi*90+9)*1+lsi)*1] = fp480;
LIBINT2_REALTYPE fp287;
fp287 = fp44 * fp28;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp13;
LIBINT2_REALTYPE fp478;
fp478 = 1.0000000000000000e+00 * fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp44 * fp29;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp13;
LIBINT2_REALTYPE fp479;
fp479 = inteval->two_alpha0_ket[vi] * fp288;
LIBINT2_REALTYPE fp477;
fp477 = fp479 - fp478;
target[((hsi*90+10)*1+lsi)*1] = fp477;
LIBINT2_REALTYPE fp249;
fp249 = fp41 * fp26;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp12;
LIBINT2_REALTYPE fp452;
fp452 = inteval->two_alpha0_ket[vi] * fp248;
target[((hsi*90+23)*1+lsi)*1] = fp452;
LIBINT2_REALTYPE fp283;
fp283 = fp46 * fp34;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp11;
LIBINT2_REALTYPE fp475;
fp475 = inteval->two_alpha0_ket[vi] * fp282;
target[((hsi*90+12)*1+lsi)*1] = fp475;
LIBINT2_REALTYPE fp279;
fp279 = fp45 * fp32;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp11;
LIBINT2_REALTYPE fp473;
fp473 = 1.0000000000000000e+00 * fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp45 * fp33;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp11;
LIBINT2_REALTYPE fp474;
fp474 = inteval->two_alpha0_ket[vi] * fp280;
LIBINT2_REALTYPE fp472;
fp472 = fp474 - fp473;
target[((hsi*90+13)*1+lsi)*1] = fp472;
LIBINT2_REALTYPE fp277;
fp277 = fp45 * fp34;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp10;
LIBINT2_REALTYPE fp471;
fp471 = inteval->two_alpha0_ket[vi] * fp276;
target[((hsi*90+14)*1+lsi)*1] = fp471;
LIBINT2_REALTYPE fp273;
fp273 = fp44 * fp34;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp11;
LIBINT2_REALTYPE fp469;
fp469 = 2.0000000000000000e+00 * fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp44 * fp31;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp11;
LIBINT2_REALTYPE fp470;
fp470 = inteval->two_alpha0_ket[vi] * fp274;
LIBINT2_REALTYPE fp468;
fp468 = fp470 - fp469;
target[((hsi*90+15)*1+lsi)*1] = fp468;
LIBINT2_REALTYPE fp269;
fp269 = fp44 * fp32;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp10;
LIBINT2_REALTYPE fp466;
fp466 = 1.0000000000000000e+00 * fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp44 * fp33;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp10;
LIBINT2_REALTYPE fp467;
fp467 = inteval->two_alpha0_ket[vi] * fp270;
LIBINT2_REALTYPE fp465;
fp465 = fp467 - fp466;
target[((hsi*90+16)*1+lsi)*1] = fp465;
LIBINT2_REALTYPE fp267;
fp267 = fp44 * fp34;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp9;
LIBINT2_REALTYPE fp464;
fp464 = inteval->two_alpha0_ket[vi] * fp266;
target[((hsi*90+17)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp265;
fp265 = fp43 * fp26;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp14;
LIBINT2_REALTYPE fp463;
fp463 = inteval->two_alpha0_ket[vi] * fp264;
target[((hsi*90+18)*1+lsi)*1] = fp463;
LIBINT2_REALTYPE fp261;
fp261 = fp42 * fp24;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp14;
LIBINT2_REALTYPE fp461;
fp461 = 1.0000000000000000e+00 * fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp42 * fp25;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp14;
LIBINT2_REALTYPE fp462;
fp462 = inteval->two_alpha0_ket[vi] * fp262;
LIBINT2_REALTYPE fp460;
fp460 = fp462 - fp461;
target[((hsi*90+19)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp259;
fp259 = fp42 * fp26;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp13;
LIBINT2_REALTYPE fp459;
fp459 = inteval->two_alpha0_ket[vi] * fp258;
target[((hsi*90+20)*1+lsi)*1] = fp459;
LIBINT2_REALTYPE fp255;
fp255 = fp41 * fp26;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp14;
LIBINT2_REALTYPE fp457;
fp457 = 2.0000000000000000e+00 * fp254;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp41 * fp23;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp14;
LIBINT2_REALTYPE fp458;
fp458 = inteval->two_alpha0_ket[vi] * fp256;
LIBINT2_REALTYPE fp456;
fp456 = fp458 - fp457;
target[((hsi*90+21)*1+lsi)*1] = fp456;
LIBINT2_REALTYPE fp251;
fp251 = fp41 * fp24;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp13;
LIBINT2_REALTYPE fp454;
fp454 = 1.0000000000000000e+00 * fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp41 * fp25;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp13;
LIBINT2_REALTYPE fp455;
fp455 = inteval->two_alpha0_ket[vi] * fp252;
LIBINT2_REALTYPE fp453;
fp453 = fp455 - fp454;
target[((hsi*90+22)*1+lsi)*1] = fp453;
LIBINT2_REALTYPE fp285;
fp285 = fp44 * fp30;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp12;
LIBINT2_REALTYPE fp476;
fp476 = inteval->two_alpha0_ket[vi] * fp284;
target[((hsi*90+11)*1+lsi)*1] = fp476;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp35 * fp22;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp11;
LIBINT2_REALTYPE fp361;
fp361 = 2.0000000000000000e+00 * fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp35 * fp19;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp11;
LIBINT2_REALTYPE fp362;
fp362 = inteval->two_alpha0_ket[vi] * fp112;
LIBINT2_REALTYPE fp360;
fp360 = fp362 - fp361;
target[((hsi*90+69)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp107;
fp107 = fp35 * fp20;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp10;
LIBINT2_REALTYPE fp358;
fp358 = 1.0000000000000000e+00 * fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp35 * fp21;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp10;
LIBINT2_REALTYPE fp359;
fp359 = inteval->two_alpha0_ket[vi] * fp108;
LIBINT2_REALTYPE fp357;
fp357 = fp359 - fp358;
target[((hsi*90+70)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp105;
fp105 = fp35 * fp22;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp9;
LIBINT2_REALTYPE fp356;
fp356 = inteval->two_alpha0_ket[vi] * fp104;
target[((hsi*90+71)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp37 * fp26;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp8;
LIBINT2_REALTYPE fp355;
fp355 = inteval->two_alpha0_ket[vi] * fp102;
target[((hsi*90+72)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp36 * fp24;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp8;
LIBINT2_REALTYPE fp353;
fp353 = 1.0000000000000000e+00 * fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp36 * fp25;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp8;
LIBINT2_REALTYPE fp354;
fp354 = inteval->two_alpha0_ket[vi] * fp100;
LIBINT2_REALTYPE fp352;
fp352 = fp354 - fp353;
target[((hsi*90+73)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp97;
fp97 = fp36 * fp26;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp7;
LIBINT2_REALTYPE fp351;
fp351 = inteval->two_alpha0_ket[vi] * fp96;
target[((hsi*90+74)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp93;
fp93 = fp35 * fp26;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp8;
LIBINT2_REALTYPE fp349;
fp349 = 2.0000000000000000e+00 * fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp35 * fp23;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp8;
LIBINT2_REALTYPE fp350;
fp350 = inteval->two_alpha0_ket[vi] * fp94;
LIBINT2_REALTYPE fp348;
fp348 = fp350 - fp349;
target[((hsi*90+75)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp89;
fp89 = fp35 * fp24;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp7;
LIBINT2_REALTYPE fp346;
fp346 = 1.0000000000000000e+00 * fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp35 * fp25;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp7;
LIBINT2_REALTYPE fp347;
fp347 = inteval->two_alpha0_ket[vi] * fp90;
LIBINT2_REALTYPE fp345;
fp345 = fp347 - fp346;
target[((hsi*90+76)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp87;
fp87 = fp35 * fp26;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp6;
LIBINT2_REALTYPE fp344;
fp344 = inteval->two_alpha0_ket[vi] * fp86;
target[((hsi*90+77)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp37 * fp30;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp5;
LIBINT2_REALTYPE fp343;
fp343 = inteval->two_alpha0_ket[vi] * fp84;
target[((hsi*90+78)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp183;
fp183 = fp38 * fp26;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp11;
LIBINT2_REALTYPE fp409;
fp409 = 2.0000000000000000e+00 * fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp38 * fp23;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp11;
LIBINT2_REALTYPE fp410;
fp410 = inteval->two_alpha0_ket[vi] * fp184;
LIBINT2_REALTYPE fp408;
fp408 = fp410 - fp409;
target[((hsi*90+45)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp36 * fp30;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp4;
LIBINT2_REALTYPE fp339;
fp339 = inteval->two_alpha0_ket[vi] * fp78;
target[((hsi*90+80)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp75;
fp75 = fp35 * fp30;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp5;
LIBINT2_REALTYPE fp337;
fp337 = 2.0000000000000000e+00 * fp74;
LIBINT2_REALTYPE fp77;
fp77 = fp35 * fp27;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp5;
LIBINT2_REALTYPE fp338;
fp338 = inteval->two_alpha0_ket[vi] * fp76;
LIBINT2_REALTYPE fp336;
fp336 = fp338 - fp337;
target[((hsi*90+81)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp71;
fp71 = fp35 * fp28;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp4;
LIBINT2_REALTYPE fp334;
fp334 = 1.0000000000000000e+00 * fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp35 * fp29;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp4;
LIBINT2_REALTYPE fp335;
fp335 = inteval->two_alpha0_ket[vi] * fp72;
LIBINT2_REALTYPE fp333;
fp333 = fp335 - fp334;
target[((hsi*90+82)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp35 * fp30;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp3;
LIBINT2_REALTYPE fp332;
fp332 = inteval->two_alpha0_ket[vi] * fp68;
target[((hsi*90+83)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp37 * fp34;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp2;
LIBINT2_REALTYPE fp331;
fp331 = inteval->two_alpha0_ket[vi] * fp66;
target[((hsi*90+84)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp63;
fp63 = fp36 * fp32;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp2;
LIBINT2_REALTYPE fp329;
fp329 = 1.0000000000000000e+00 * fp62;
LIBINT2_REALTYPE fp65;
fp65 = fp36 * fp33;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp2;
LIBINT2_REALTYPE fp330;
fp330 = inteval->two_alpha0_ket[vi] * fp64;
LIBINT2_REALTYPE fp328;
fp328 = fp330 - fp329;
target[((hsi*90+85)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp36 * fp34;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp1;
LIBINT2_REALTYPE fp327;
fp327 = inteval->two_alpha0_ket[vi] * fp60;
target[((hsi*90+86)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp57;
fp57 = fp35 * fp34;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp2;
LIBINT2_REALTYPE fp325;
fp325 = 2.0000000000000000e+00 * fp56;
LIBINT2_REALTYPE fp59;
fp59 = fp35 * fp31;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp2;
LIBINT2_REALTYPE fp326;
fp326 = inteval->two_alpha0_ket[vi] * fp58;
LIBINT2_REALTYPE fp324;
fp324 = fp326 - fp325;
target[((hsi*90+87)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp53;
fp53 = fp35 * fp32;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp1;
LIBINT2_REALTYPE fp322;
fp322 = 1.0000000000000000e+00 * fp52;
LIBINT2_REALTYPE fp55;
fp55 = fp35 * fp33;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp1;
LIBINT2_REALTYPE fp323;
fp323 = inteval->two_alpha0_ket[vi] * fp54;
LIBINT2_REALTYPE fp321;
fp321 = fp323 - fp322;
target[((hsi*90+88)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp35 * fp34;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp0;
LIBINT2_REALTYPE fp320;
fp320 = inteval->two_alpha0_ket[vi] * fp50;
target[((hsi*90+89)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp81;
fp81 = fp36 * fp28;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp5;
LIBINT2_REALTYPE fp341;
fp341 = 1.0000000000000000e+00 * fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp36 * fp29;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp5;
LIBINT2_REALTYPE fp342;
fp342 = inteval->two_alpha0_ket[vi] * fp82;
LIBINT2_REALTYPE fp340;
fp340 = fp342 - fp341;
target[((hsi*90+79)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp179;
fp179 = fp38 * fp24;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp10;
LIBINT2_REALTYPE fp406;
fp406 = 1.0000000000000000e+00 * fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp38 * fp25;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp10;
LIBINT2_REALTYPE fp407;
fp407 = inteval->two_alpha0_ket[vi] * fp180;
LIBINT2_REALTYPE fp405;
fp405 = fp407 - fp406;
target[((hsi*90+46)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp177;
fp177 = fp38 * fp26;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp9;
LIBINT2_REALTYPE fp404;
fp404 = inteval->two_alpha0_ket[vi] * fp176;
target[((hsi*90+47)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp175;
fp175 = fp40 * fp30;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp8;
LIBINT2_REALTYPE fp403;
fp403 = inteval->two_alpha0_ket[vi] * fp174;
target[((hsi*90+48)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp171;
fp171 = fp39 * fp28;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp8;
LIBINT2_REALTYPE fp401;
fp401 = 1.0000000000000000e+00 * fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp39 * fp29;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp8;
LIBINT2_REALTYPE fp402;
fp402 = inteval->two_alpha0_ket[vi] * fp172;
LIBINT2_REALTYPE fp400;
fp400 = fp402 - fp401;
target[((hsi*90+49)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp169;
fp169 = fp39 * fp30;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp7;
LIBINT2_REALTYPE fp399;
fp399 = inteval->two_alpha0_ket[vi] * fp168;
target[((hsi*90+50)*1+lsi)*1] = fp399;
LIBINT2_REALTYPE fp165;
fp165 = fp38 * fp30;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp8;
LIBINT2_REALTYPE fp397;
fp397 = 2.0000000000000000e+00 * fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp38 * fp27;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp8;
LIBINT2_REALTYPE fp398;
fp398 = inteval->two_alpha0_ket[vi] * fp166;
LIBINT2_REALTYPE fp396;
fp396 = fp398 - fp397;
target[((hsi*90+51)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp161;
fp161 = fp38 * fp28;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp7;
LIBINT2_REALTYPE fp394;
fp394 = 1.0000000000000000e+00 * fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp38 * fp29;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp7;
LIBINT2_REALTYPE fp395;
fp395 = inteval->two_alpha0_ket[vi] * fp162;
LIBINT2_REALTYPE fp393;
fp393 = fp395 - fp394;
target[((hsi*90+52)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp159;
fp159 = fp38 * fp30;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp6;
LIBINT2_REALTYPE fp392;
fp392 = inteval->two_alpha0_ket[vi] * fp158;
target[((hsi*90+53)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp157;
fp157 = fp40 * fp34;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp5;
LIBINT2_REALTYPE fp391;
fp391 = inteval->two_alpha0_ket[vi] * fp156;
target[((hsi*90+54)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp153;
fp153 = fp39 * fp32;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp5;
LIBINT2_REALTYPE fp389;
fp389 = 1.0000000000000000e+00 * fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp39 * fp33;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp5;
LIBINT2_REALTYPE fp390;
fp390 = inteval->two_alpha0_ket[vi] * fp154;
LIBINT2_REALTYPE fp388;
fp388 = fp390 - fp389;
target[((hsi*90+55)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp115;
fp115 = fp36 * fp22;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp10;
LIBINT2_REALTYPE fp363;
fp363 = inteval->two_alpha0_ket[vi] * fp114;
target[((hsi*90+68)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp147;
fp147 = fp38 * fp34;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp5;
LIBINT2_REALTYPE fp385;
fp385 = 2.0000000000000000e+00 * fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp38 * fp31;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp5;
LIBINT2_REALTYPE fp386;
fp386 = inteval->two_alpha0_ket[vi] * fp148;
LIBINT2_REALTYPE fp384;
fp384 = fp386 - fp385;
target[((hsi*90+57)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp143;
fp143 = fp38 * fp32;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp4;
LIBINT2_REALTYPE fp382;
fp382 = 1.0000000000000000e+00 * fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp38 * fp33;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp4;
LIBINT2_REALTYPE fp383;
fp383 = inteval->two_alpha0_ket[vi] * fp144;
LIBINT2_REALTYPE fp381;
fp381 = fp383 - fp382;
target[((hsi*90+58)*1+lsi)*1] = fp381;
LIBINT2_REALTYPE fp141;
fp141 = fp38 * fp34;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp3;
LIBINT2_REALTYPE fp380;
fp380 = inteval->two_alpha0_ket[vi] * fp140;
target[((hsi*90+59)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp37 * fp18;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp14;
LIBINT2_REALTYPE fp379;
fp379 = inteval->two_alpha0_ket[vi] * fp138;
target[((hsi*90+60)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp36 * fp16;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp14;
LIBINT2_REALTYPE fp377;
fp377 = 1.0000000000000000e+00 * fp134;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp36 * fp17;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp14;
LIBINT2_REALTYPE fp378;
fp378 = inteval->two_alpha0_ket[vi] * fp136;
LIBINT2_REALTYPE fp376;
fp376 = fp378 - fp377;
target[((hsi*90+61)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp133;
fp133 = fp36 * fp18;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp13;
LIBINT2_REALTYPE fp375;
fp375 = inteval->two_alpha0_ket[vi] * fp132;
target[((hsi*90+62)*1+lsi)*1] = fp375;
LIBINT2_REALTYPE fp129;
fp129 = fp35 * fp18;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp14;
LIBINT2_REALTYPE fp373;
fp373 = 2.0000000000000000e+00 * fp128;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*20+19)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp35 * fp15;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp14;
LIBINT2_REALTYPE fp374;
fp374 = inteval->two_alpha0_ket[vi] * fp130;
LIBINT2_REALTYPE fp372;
fp372 = fp374 - fp373;
target[((hsi*90+63)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp125;
fp125 = fp35 * fp16;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp13;
LIBINT2_REALTYPE fp370;
fp370 = 1.0000000000000000e+00 * fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp35 * fp17;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp13;
LIBINT2_REALTYPE fp371;
fp371 = inteval->two_alpha0_ket[vi] * fp126;
LIBINT2_REALTYPE fp369;
fp369 = fp371 - fp370;
target[((hsi*90+64)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp123;
fp123 = fp35 * fp18;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp12;
LIBINT2_REALTYPE fp368;
fp368 = inteval->two_alpha0_ket[vi] * fp122;
target[((hsi*90+65)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp121;
fp121 = fp37 * fp22;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp11;
LIBINT2_REALTYPE fp367;
fp367 = inteval->two_alpha0_ket[vi] * fp120;
target[((hsi*90+66)*1+lsi)*1] = fp367;
LIBINT2_REALTYPE fp117;
fp117 = fp36 * fp20;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp11;
LIBINT2_REALTYPE fp365;
fp365 = 1.0000000000000000e+00 * fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp36 * fp21;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp11;
LIBINT2_REALTYPE fp366;
fp366 = inteval->two_alpha0_ket[vi] * fp118;
LIBINT2_REALTYPE fp364;
fp364 = fp366 - fp365;
target[((hsi*90+67)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp151;
fp151 = fp39 * fp34;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp4;
LIBINT2_REALTYPE fp387;
fp387 = inteval->two_alpha0_ket[vi] * fp150;
target[((hsi*90+56)*1+lsi)*1] = fp387;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 500 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif