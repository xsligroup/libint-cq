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
void CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p010__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp48 * fp37;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp9;
LIBINT2_REALTYPE fp476;
fp476 = 1.0000000000000000e+00 * fp266;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp48 * fp38;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp9;
LIBINT2_REALTYPE fp477;
fp477 = inteval->two_alpha0_ket[vi] * fp268;
LIBINT2_REALTYPE fp475;
fp475 = fp477 - fp476;
target[((hsi*108+28)*1+lsi)*1] = fp475;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp48 * fp39;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp8;
LIBINT2_REALTYPE fp474;
fp474 = inteval->two_alpha0_ket[vi] * fp264;
target[((hsi*108+29)*1+lsi)*1] = fp474;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp47 * fp27;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp15;
LIBINT2_REALTYPE fp473;
fp473 = inteval->two_alpha0_ket[vi] * fp262;
target[((hsi*108+30)*1+lsi)*1] = fp473;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp46 * fp25;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp15;
LIBINT2_REALTYPE fp471;
fp471 = 1.0000000000000000e+00 * fp258;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp46 * fp26;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp15;
LIBINT2_REALTYPE fp472;
fp472 = inteval->two_alpha0_ket[vi] * fp260;
LIBINT2_REALTYPE fp470;
fp470 = fp472 - fp471;
target[((hsi*108+31)*1+lsi)*1] = fp470;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp46 * fp27;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp14;
LIBINT2_REALTYPE fp469;
fp469 = inteval->two_alpha0_ket[vi] * fp256;
target[((hsi*108+32)*1+lsi)*1] = fp469;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = fp47 * fp30;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp13;
LIBINT2_REALTYPE fp468;
fp468 = inteval->two_alpha0_ket[vi] * fp254;
target[((hsi*108+33)*1+lsi)*1] = fp468;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp46 * fp28;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp13;
LIBINT2_REALTYPE fp466;
fp466 = 1.0000000000000000e+00 * fp250;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp46 * fp29;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp13;
LIBINT2_REALTYPE fp467;
fp467 = inteval->two_alpha0_ket[vi] * fp252;
LIBINT2_REALTYPE fp465;
fp465 = fp467 - fp466;
target[((hsi*108+34)*1+lsi)*1] = fp465;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp46 * fp30;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp12;
LIBINT2_REALTYPE fp464;
fp464 = inteval->two_alpha0_ket[vi] * fp248;
target[((hsi*108+35)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp47 * fp33;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp11;
LIBINT2_REALTYPE fp463;
fp463 = inteval->two_alpha0_ket[vi] * fp246;
target[((hsi*108+36)*1+lsi)*1] = fp463;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp46 * fp31;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp11;
LIBINT2_REALTYPE fp461;
fp461 = 1.0000000000000000e+00 * fp242;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp46 * fp32;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp11;
LIBINT2_REALTYPE fp462;
fp462 = inteval->two_alpha0_ket[vi] * fp244;
LIBINT2_REALTYPE fp460;
fp460 = fp462 - fp461;
target[((hsi*108+37)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp46 * fp33;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp10;
LIBINT2_REALTYPE fp459;
fp459 = inteval->two_alpha0_ket[vi] * fp240;
target[((hsi*108+38)*1+lsi)*1] = fp459;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = fp47 * fp36;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp9;
LIBINT2_REALTYPE fp458;
fp458 = inteval->two_alpha0_ket[vi] * fp238;
target[((hsi*108+39)*1+lsi)*1] = fp458;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = fp55 * fp39;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp15;
LIBINT2_REALTYPE fp523;
fp523 = inteval->two_alpha0_ket[vi] * fp342;
target[((hsi*108+0)*1+lsi)*1] = fp523;
LIBINT2_REALTYPE fp233;
fp233 = fp46 * fp36;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp8;
LIBINT2_REALTYPE fp454;
fp454 = inteval->two_alpha0_ket[vi] * fp232;
target[((hsi*108+41)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp47 * fp39;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp7;
LIBINT2_REALTYPE fp453;
fp453 = inteval->two_alpha0_ket[vi] * fp230;
target[((hsi*108+42)*1+lsi)*1] = fp453;
LIBINT2_REALTYPE fp227;
fp227 = fp46 * fp37;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp7;
LIBINT2_REALTYPE fp451;
fp451 = 1.0000000000000000e+00 * fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp46 * fp38;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp7;
LIBINT2_REALTYPE fp452;
fp452 = inteval->two_alpha0_ket[vi] * fp228;
LIBINT2_REALTYPE fp450;
fp450 = fp452 - fp451;
target[((hsi*108+43)*1+lsi)*1] = fp450;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp46 * fp39;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp6;
LIBINT2_REALTYPE fp449;
fp449 = inteval->two_alpha0_ket[vi] * fp224;
target[((hsi*108+44)*1+lsi)*1] = fp449;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp45 * fp24;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp15;
LIBINT2_REALTYPE fp448;
fp448 = inteval->two_alpha0_ket[vi] * fp222;
target[((hsi*108+45)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = fp44 * fp22;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp15;
LIBINT2_REALTYPE fp446;
fp446 = 1.0000000000000000e+00 * fp218;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp44 * fp23;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp15;
LIBINT2_REALTYPE fp447;
fp447 = inteval->two_alpha0_ket[vi] * fp220;
LIBINT2_REALTYPE fp445;
fp445 = fp447 - fp446;
target[((hsi*108+46)*1+lsi)*1] = fp445;
LIBINT2_REALTYPE fp217;
fp217 = fp44 * fp24;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp14;
LIBINT2_REALTYPE fp444;
fp444 = inteval->two_alpha0_ket[vi] * fp216;
target[((hsi*108+47)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp215;
fp215 = fp45 * fp27;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp13;
LIBINT2_REALTYPE fp443;
fp443 = inteval->two_alpha0_ket[vi] * fp214;
target[((hsi*108+48)*1+lsi)*1] = fp443;
LIBINT2_REALTYPE fp211;
fp211 = fp44 * fp25;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp13;
LIBINT2_REALTYPE fp441;
fp441 = 1.0000000000000000e+00 * fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp44 * fp26;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp13;
LIBINT2_REALTYPE fp442;
fp442 = inteval->two_alpha0_ket[vi] * fp212;
LIBINT2_REALTYPE fp440;
fp440 = fp442 - fp441;
target[((hsi*108+49)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp209;
fp209 = fp44 * fp27;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp12;
LIBINT2_REALTYPE fp439;
fp439 = inteval->two_alpha0_ket[vi] * fp208;
target[((hsi*108+50)*1+lsi)*1] = fp439;
LIBINT2_REALTYPE fp207;
fp207 = fp45 * fp30;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp11;
LIBINT2_REALTYPE fp438;
fp438 = inteval->two_alpha0_ket[vi] * fp206;
target[((hsi*108+51)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp203;
fp203 = fp44 * fp28;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp11;
LIBINT2_REALTYPE fp436;
fp436 = 1.0000000000000000e+00 * fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp44 * fp29;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp11;
LIBINT2_REALTYPE fp437;
fp437 = inteval->two_alpha0_ket[vi] * fp204;
LIBINT2_REALTYPE fp435;
fp435 = fp437 - fp436;
target[((hsi*108+52)*1+lsi)*1] = fp435;
LIBINT2_REALTYPE fp201;
fp201 = fp44 * fp30;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp10;
LIBINT2_REALTYPE fp434;
fp434 = inteval->two_alpha0_ket[vi] * fp200;
target[((hsi*108+53)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp46 * fp34;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp9;
LIBINT2_REALTYPE fp456;
fp456 = 1.0000000000000000e+00 * fp234;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp46 * fp35;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp9;
LIBINT2_REALTYPE fp457;
fp457 = inteval->two_alpha0_ket[vi] * fp236;
LIBINT2_REALTYPE fp455;
fp455 = fp457 - fp456;
target[((hsi*108+40)*1+lsi)*1] = fp455;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = fp54 * fp37;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp15;
LIBINT2_REALTYPE fp521;
fp521 = 1.0000000000000000e+00 * fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp54 * fp38;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp15;
LIBINT2_REALTYPE fp522;
fp522 = inteval->two_alpha0_ket[vi] * fp340;
LIBINT2_REALTYPE fp520;
fp520 = fp522 - fp521;
target[((hsi*108+1)*1+lsi)*1] = fp520;
LIBINT2_REALTYPE fp337;
fp337 = fp54 * fp39;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp14;
LIBINT2_REALTYPE fp519;
fp519 = inteval->two_alpha0_ket[vi] * fp336;
target[((hsi*108+2)*1+lsi)*1] = fp519;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = fp53 * fp36;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp15;
LIBINT2_REALTYPE fp518;
fp518 = inteval->two_alpha0_ket[vi] * fp334;
target[((hsi*108+3)*1+lsi)*1] = fp518;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = fp52 * fp34;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp15;
LIBINT2_REALTYPE fp516;
fp516 = 1.0000000000000000e+00 * fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp52 * fp35;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp15;
LIBINT2_REALTYPE fp517;
fp517 = inteval->two_alpha0_ket[vi] * fp332;
LIBINT2_REALTYPE fp515;
fp515 = fp517 - fp516;
target[((hsi*108+4)*1+lsi)*1] = fp515;
LIBINT2_REALTYPE fp329;
fp329 = fp52 * fp36;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp14;
LIBINT2_REALTYPE fp514;
fp514 = inteval->two_alpha0_ket[vi] * fp328;
target[((hsi*108+5)*1+lsi)*1] = fp514;
LIBINT2_REALTYPE fp327;
fp327 = fp53 * fp39;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp13;
LIBINT2_REALTYPE fp513;
fp513 = inteval->two_alpha0_ket[vi] * fp326;
target[((hsi*108+6)*1+lsi)*1] = fp513;
LIBINT2_REALTYPE fp323;
fp323 = fp52 * fp37;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp13;
LIBINT2_REALTYPE fp511;
fp511 = 1.0000000000000000e+00 * fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp52 * fp38;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp13;
LIBINT2_REALTYPE fp512;
fp512 = inteval->two_alpha0_ket[vi] * fp324;
LIBINT2_REALTYPE fp510;
fp510 = fp512 - fp511;
target[((hsi*108+7)*1+lsi)*1] = fp510;
LIBINT2_REALTYPE fp321;
fp321 = fp52 * fp39;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp12;
LIBINT2_REALTYPE fp509;
fp509 = inteval->two_alpha0_ket[vi] * fp320;
target[((hsi*108+8)*1+lsi)*1] = fp509;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = fp51 * fp33;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp15;
LIBINT2_REALTYPE fp508;
fp508 = inteval->two_alpha0_ket[vi] * fp318;
target[((hsi*108+9)*1+lsi)*1] = fp508;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
fp315 = fp50 * fp31;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp15;
LIBINT2_REALTYPE fp506;
fp506 = 1.0000000000000000e+00 * fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp50 * fp32;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp15;
LIBINT2_REALTYPE fp507;
fp507 = inteval->two_alpha0_ket[vi] * fp316;
LIBINT2_REALTYPE fp505;
fp505 = fp507 - fp506;
target[((hsi*108+10)*1+lsi)*1] = fp505;
LIBINT2_REALTYPE fp313;
fp313 = fp50 * fp33;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp14;
LIBINT2_REALTYPE fp504;
fp504 = inteval->two_alpha0_ket[vi] * fp312;
target[((hsi*108+11)*1+lsi)*1] = fp504;
LIBINT2_REALTYPE fp311;
fp311 = fp51 * fp36;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp13;
LIBINT2_REALTYPE fp503;
fp503 = inteval->two_alpha0_ket[vi] * fp310;
target[((hsi*108+12)*1+lsi)*1] = fp503;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = fp49 * fp39;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp9;
LIBINT2_REALTYPE fp478;
fp478 = inteval->two_alpha0_ket[vi] * fp270;
target[((hsi*108+27)*1+lsi)*1] = fp478;
LIBINT2_REALTYPE fp305;
fp305 = fp50 * fp36;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp12;
LIBINT2_REALTYPE fp499;
fp499 = inteval->two_alpha0_ket[vi] * fp304;
target[((hsi*108+14)*1+lsi)*1] = fp499;
LIBINT2_REALTYPE fp303;
fp303 = fp51 * fp39;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp11;
LIBINT2_REALTYPE fp498;
fp498 = inteval->two_alpha0_ket[vi] * fp302;
target[((hsi*108+15)*1+lsi)*1] = fp498;
LIBINT2_REALTYPE fp299;
fp299 = fp50 * fp37;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp11;
LIBINT2_REALTYPE fp496;
fp496 = 1.0000000000000000e+00 * fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp50 * fp38;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp11;
LIBINT2_REALTYPE fp497;
fp497 = inteval->two_alpha0_ket[vi] * fp300;
LIBINT2_REALTYPE fp495;
fp495 = fp497 - fp496;
target[((hsi*108+16)*1+lsi)*1] = fp495;
LIBINT2_REALTYPE fp297;
fp297 = fp50 * fp39;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp10;
LIBINT2_REALTYPE fp494;
fp494 = inteval->two_alpha0_ket[vi] * fp296;
target[((hsi*108+17)*1+lsi)*1] = fp494;
LIBINT2_REALTYPE fp295;
fp295 = fp49 * fp30;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp15;
LIBINT2_REALTYPE fp493;
fp493 = inteval->two_alpha0_ket[vi] * fp294;
target[((hsi*108+18)*1+lsi)*1] = fp493;
LIBINT2_REALTYPE fp291;
fp291 = fp48 * fp28;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp15;
LIBINT2_REALTYPE fp491;
fp491 = 1.0000000000000000e+00 * fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp48 * fp29;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp15;
LIBINT2_REALTYPE fp492;
fp492 = inteval->two_alpha0_ket[vi] * fp292;
LIBINT2_REALTYPE fp490;
fp490 = fp492 - fp491;
target[((hsi*108+19)*1+lsi)*1] = fp490;
LIBINT2_REALTYPE fp289;
fp289 = fp48 * fp30;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp14;
LIBINT2_REALTYPE fp489;
fp489 = inteval->two_alpha0_ket[vi] * fp288;
target[((hsi*108+20)*1+lsi)*1] = fp489;
LIBINT2_REALTYPE fp287;
fp287 = fp49 * fp33;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp13;
LIBINT2_REALTYPE fp488;
fp488 = inteval->two_alpha0_ket[vi] * fp286;
target[((hsi*108+21)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp283;
fp283 = fp48 * fp31;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp13;
LIBINT2_REALTYPE fp486;
fp486 = 1.0000000000000000e+00 * fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp48 * fp32;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp13;
LIBINT2_REALTYPE fp487;
fp487 = inteval->two_alpha0_ket[vi] * fp284;
LIBINT2_REALTYPE fp485;
fp485 = fp487 - fp486;
target[((hsi*108+22)*1+lsi)*1] = fp485;
LIBINT2_REALTYPE fp281;
fp281 = fp48 * fp33;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp12;
LIBINT2_REALTYPE fp484;
fp484 = inteval->two_alpha0_ket[vi] * fp280;
target[((hsi*108+23)*1+lsi)*1] = fp484;
LIBINT2_REALTYPE fp279;
fp279 = fp49 * fp36;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp11;
LIBINT2_REALTYPE fp483;
fp483 = inteval->two_alpha0_ket[vi] * fp278;
target[((hsi*108+24)*1+lsi)*1] = fp483;
LIBINT2_REALTYPE fp275;
fp275 = fp48 * fp34;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp11;
LIBINT2_REALTYPE fp481;
fp481 = 1.0000000000000000e+00 * fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp48 * fp35;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp11;
LIBINT2_REALTYPE fp482;
fp482 = inteval->two_alpha0_ket[vi] * fp276;
LIBINT2_REALTYPE fp480;
fp480 = fp482 - fp481;
target[((hsi*108+25)*1+lsi)*1] = fp480;
LIBINT2_REALTYPE fp273;
fp273 = fp48 * fp36;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp10;
LIBINT2_REALTYPE fp479;
fp479 = inteval->two_alpha0_ket[vi] * fp272;
target[((hsi*108+26)*1+lsi)*1] = fp479;
LIBINT2_REALTYPE fp307;
fp307 = fp50 * fp34;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp13;
LIBINT2_REALTYPE fp501;
fp501 = 1.0000000000000000e+00 * fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp50 * fp35;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp13;
LIBINT2_REALTYPE fp502;
fp502 = inteval->two_alpha0_ket[vi] * fp308;
LIBINT2_REALTYPE fp500;
fp500 = fp502 - fp501;
target[((hsi*108+13)*1+lsi)*1] = fp500;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp42 * fp37;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp3;
LIBINT2_REALTYPE fp386;
fp386 = 1.0000000000000000e+00 * fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp42 * fp38;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp3;
LIBINT2_REALTYPE fp387;
fp387 = inteval->two_alpha0_ket[vi] * fp124;
LIBINT2_REALTYPE fp385;
fp385 = fp387 - fp386;
target[((hsi*108+82)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp42 * fp39;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp2;
LIBINT2_REALTYPE fp384;
fp384 = inteval->two_alpha0_ket[vi] * fp120;
target[((hsi*108+83)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp41 * fp18;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp15;
LIBINT2_REALTYPE fp383;
fp383 = inteval->two_alpha0_ket[vi] * fp118;
target[((hsi*108+84)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp40 * fp16;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp15;
LIBINT2_REALTYPE fp381;
fp381 = 1.0000000000000000e+00 * fp114;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*24+23)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp40 * fp17;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp15;
LIBINT2_REALTYPE fp382;
fp382 = inteval->two_alpha0_ket[vi] * fp116;
LIBINT2_REALTYPE fp380;
fp380 = fp382 - fp381;
target[((hsi*108+85)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp113;
fp113 = fp40 * fp18;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp14;
LIBINT2_REALTYPE fp379;
fp379 = inteval->two_alpha0_ket[vi] * fp112;
target[((hsi*108+86)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp41 * fp21;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp13;
LIBINT2_REALTYPE fp378;
fp378 = inteval->two_alpha0_ket[vi] * fp110;
target[((hsi*108+87)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp40 * fp19;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp13;
LIBINT2_REALTYPE fp376;
fp376 = 1.0000000000000000e+00 * fp106;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp40 * fp20;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp13;
LIBINT2_REALTYPE fp377;
fp377 = inteval->two_alpha0_ket[vi] * fp108;
LIBINT2_REALTYPE fp375;
fp375 = fp377 - fp376;
target[((hsi*108+88)*1+lsi)*1] = fp375;
LIBINT2_REALTYPE fp105;
fp105 = fp40 * fp21;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp12;
LIBINT2_REALTYPE fp374;
fp374 = inteval->two_alpha0_ket[vi] * fp104;
target[((hsi*108+89)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp103;
fp103 = fp41 * fp24;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp11;
LIBINT2_REALTYPE fp373;
fp373 = inteval->two_alpha0_ket[vi] * fp102;
target[((hsi*108+90)*1+lsi)*1] = fp373;
LIBINT2_REALTYPE fp99;
fp99 = fp40 * fp22;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp11;
LIBINT2_REALTYPE fp371;
fp371 = 1.0000000000000000e+00 * fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp40 * fp23;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp11;
LIBINT2_REALTYPE fp372;
fp372 = inteval->two_alpha0_ket[vi] * fp100;
LIBINT2_REALTYPE fp370;
fp370 = fp372 - fp371;
target[((hsi*108+91)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp97;
fp97 = fp40 * fp24;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp10;
LIBINT2_REALTYPE fp369;
fp369 = inteval->two_alpha0_ket[vi] * fp96;
target[((hsi*108+92)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp95;
fp95 = fp41 * fp27;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp9;
LIBINT2_REALTYPE fp368;
fp368 = inteval->two_alpha0_ket[vi] * fp94;
target[((hsi*108+93)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp199;
fp199 = fp45 * fp33;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp9;
LIBINT2_REALTYPE fp433;
fp433 = inteval->two_alpha0_ket[vi] * fp198;
target[((hsi*108+54)*1+lsi)*1] = fp433;
LIBINT2_REALTYPE fp89;
fp89 = fp40 * fp27;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp8;
LIBINT2_REALTYPE fp364;
fp364 = inteval->two_alpha0_ket[vi] * fp88;
target[((hsi*108+95)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp87;
fp87 = fp41 * fp30;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp7;
LIBINT2_REALTYPE fp363;
fp363 = inteval->two_alpha0_ket[vi] * fp86;
target[((hsi*108+96)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp83;
fp83 = fp40 * fp28;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp7;
LIBINT2_REALTYPE fp361;
fp361 = 1.0000000000000000e+00 * fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp40 * fp29;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp7;
LIBINT2_REALTYPE fp362;
fp362 = inteval->two_alpha0_ket[vi] * fp84;
LIBINT2_REALTYPE fp360;
fp360 = fp362 - fp361;
target[((hsi*108+97)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp81;
fp81 = fp40 * fp30;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp6;
LIBINT2_REALTYPE fp359;
fp359 = inteval->two_alpha0_ket[vi] * fp80;
target[((hsi*108+98)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp41 * fp33;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp5;
LIBINT2_REALTYPE fp358;
fp358 = inteval->two_alpha0_ket[vi] * fp78;
target[((hsi*108+99)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp75;
fp75 = fp40 * fp31;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp5;
LIBINT2_REALTYPE fp356;
fp356 = 1.0000000000000000e+00 * fp74;
LIBINT2_REALTYPE fp77;
fp77 = fp40 * fp32;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp5;
LIBINT2_REALTYPE fp357;
fp357 = inteval->two_alpha0_ket[vi] * fp76;
LIBINT2_REALTYPE fp355;
fp355 = fp357 - fp356;
target[((hsi*108+100)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp40 * fp33;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp4;
LIBINT2_REALTYPE fp354;
fp354 = inteval->two_alpha0_ket[vi] * fp72;
target[((hsi*108+101)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp71;
fp71 = fp41 * fp36;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp3;
LIBINT2_REALTYPE fp353;
fp353 = inteval->two_alpha0_ket[vi] * fp70;
target[((hsi*108+102)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp67;
fp67 = fp40 * fp34;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp3;
LIBINT2_REALTYPE fp351;
fp351 = 1.0000000000000000e+00 * fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp40 * fp35;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp3;
LIBINT2_REALTYPE fp352;
fp352 = inteval->two_alpha0_ket[vi] * fp68;
LIBINT2_REALTYPE fp350;
fp350 = fp352 - fp351;
target[((hsi*108+103)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp65;
fp65 = fp40 * fp36;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp2;
LIBINT2_REALTYPE fp349;
fp349 = inteval->two_alpha0_ket[vi] * fp64;
target[((hsi*108+104)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp41 * fp39;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp1;
LIBINT2_REALTYPE fp348;
fp348 = inteval->two_alpha0_ket[vi] * fp62;
target[((hsi*108+105)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp59;
fp59 = fp40 * fp37;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp1;
LIBINT2_REALTYPE fp346;
fp346 = 1.0000000000000000e+00 * fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp40 * fp38;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp1;
LIBINT2_REALTYPE fp347;
fp347 = inteval->two_alpha0_ket[vi] * fp60;
LIBINT2_REALTYPE fp345;
fp345 = fp347 - fp346;
target[((hsi*108+106)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp40 * fp39;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp0;
LIBINT2_REALTYPE fp344;
fp344 = inteval->two_alpha0_ket[vi] * fp56;
target[((hsi*108+107)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp91;
fp91 = fp40 * fp25;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp9;
LIBINT2_REALTYPE fp366;
fp366 = 1.0000000000000000e+00 * fp90;
LIBINT2_REALTYPE fp93;
fp93 = fp40 * fp26;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp9;
LIBINT2_REALTYPE fp367;
fp367 = inteval->two_alpha0_ket[vi] * fp92;
LIBINT2_REALTYPE fp365;
fp365 = fp367 - fp366;
target[((hsi*108+94)*1+lsi)*1] = fp365;
LIBINT2_REALTYPE fp195;
fp195 = fp44 * fp31;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp9;
LIBINT2_REALTYPE fp431;
fp431 = 1.0000000000000000e+00 * fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp44 * fp32;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp9;
LIBINT2_REALTYPE fp432;
fp432 = inteval->two_alpha0_ket[vi] * fp196;
LIBINT2_REALTYPE fp430;
fp430 = fp432 - fp431;
target[((hsi*108+55)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp193;
fp193 = fp44 * fp33;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp8;
LIBINT2_REALTYPE fp429;
fp429 = inteval->two_alpha0_ket[vi] * fp192;
target[((hsi*108+56)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp191;
fp191 = fp45 * fp36;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp7;
LIBINT2_REALTYPE fp428;
fp428 = inteval->two_alpha0_ket[vi] * fp190;
target[((hsi*108+57)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp187;
fp187 = fp44 * fp34;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp7;
LIBINT2_REALTYPE fp426;
fp426 = 1.0000000000000000e+00 * fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp44 * fp35;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp7;
LIBINT2_REALTYPE fp427;
fp427 = inteval->two_alpha0_ket[vi] * fp188;
LIBINT2_REALTYPE fp425;
fp425 = fp427 - fp426;
target[((hsi*108+58)*1+lsi)*1] = fp425;
LIBINT2_REALTYPE fp185;
fp185 = fp44 * fp36;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp6;
LIBINT2_REALTYPE fp424;
fp424 = inteval->two_alpha0_ket[vi] * fp184;
target[((hsi*108+59)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp183;
fp183 = fp45 * fp39;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp5;
LIBINT2_REALTYPE fp423;
fp423 = inteval->two_alpha0_ket[vi] * fp182;
target[((hsi*108+60)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp179;
fp179 = fp44 * fp37;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp5;
LIBINT2_REALTYPE fp421;
fp421 = 1.0000000000000000e+00 * fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp44 * fp38;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp5;
LIBINT2_REALTYPE fp422;
fp422 = inteval->two_alpha0_ket[vi] * fp180;
LIBINT2_REALTYPE fp420;
fp420 = fp422 - fp421;
target[((hsi*108+61)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp177;
fp177 = fp44 * fp39;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp4;
LIBINT2_REALTYPE fp419;
fp419 = inteval->two_alpha0_ket[vi] * fp176;
target[((hsi*108+62)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp43 * fp21;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp15;
LIBINT2_REALTYPE fp418;
fp418 = inteval->two_alpha0_ket[vi] * fp174;
target[((hsi*108+63)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp171;
fp171 = fp42 * fp19;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp15;
LIBINT2_REALTYPE fp416;
fp416 = 1.0000000000000000e+00 * fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp42 * fp20;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp15;
LIBINT2_REALTYPE fp417;
fp417 = inteval->two_alpha0_ket[vi] * fp172;
LIBINT2_REALTYPE fp415;
fp415 = fp417 - fp416;
target[((hsi*108+64)*1+lsi)*1] = fp415;
LIBINT2_REALTYPE fp169;
fp169 = fp42 * fp21;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp14;
LIBINT2_REALTYPE fp414;
fp414 = inteval->two_alpha0_ket[vi] * fp168;
target[((hsi*108+65)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp167;
fp167 = fp43 * fp24;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp13;
LIBINT2_REALTYPE fp413;
fp413 = inteval->two_alpha0_ket[vi] * fp166;
target[((hsi*108+66)*1+lsi)*1] = fp413;
LIBINT2_REALTYPE fp127;
fp127 = fp43 * fp39;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp3;
LIBINT2_REALTYPE fp388;
fp388 = inteval->two_alpha0_ket[vi] * fp126;
target[((hsi*108+81)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp161;
fp161 = fp42 * fp24;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp12;
LIBINT2_REALTYPE fp409;
fp409 = inteval->two_alpha0_ket[vi] * fp160;
target[((hsi*108+68)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp159;
fp159 = fp43 * fp27;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp11;
LIBINT2_REALTYPE fp408;
fp408 = inteval->two_alpha0_ket[vi] * fp158;
target[((hsi*108+69)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp155;
fp155 = fp42 * fp25;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp11;
LIBINT2_REALTYPE fp406;
fp406 = 1.0000000000000000e+00 * fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp42 * fp26;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp11;
LIBINT2_REALTYPE fp407;
fp407 = inteval->two_alpha0_ket[vi] * fp156;
LIBINT2_REALTYPE fp405;
fp405 = fp407 - fp406;
target[((hsi*108+70)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp153;
fp153 = fp42 * fp27;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp10;
LIBINT2_REALTYPE fp404;
fp404 = inteval->two_alpha0_ket[vi] * fp152;
target[((hsi*108+71)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp151;
fp151 = fp43 * fp30;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp9;
LIBINT2_REALTYPE fp403;
fp403 = inteval->two_alpha0_ket[vi] * fp150;
target[((hsi*108+72)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp147;
fp147 = fp42 * fp28;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp9;
LIBINT2_REALTYPE fp401;
fp401 = 1.0000000000000000e+00 * fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp42 * fp29;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp9;
LIBINT2_REALTYPE fp402;
fp402 = inteval->two_alpha0_ket[vi] * fp148;
LIBINT2_REALTYPE fp400;
fp400 = fp402 - fp401;
target[((hsi*108+73)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp145;
fp145 = fp42 * fp30;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp8;
LIBINT2_REALTYPE fp399;
fp399 = inteval->two_alpha0_ket[vi] * fp144;
target[((hsi*108+74)*1+lsi)*1] = fp399;
LIBINT2_REALTYPE fp143;
fp143 = fp43 * fp33;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp7;
LIBINT2_REALTYPE fp398;
fp398 = inteval->two_alpha0_ket[vi] * fp142;
target[((hsi*108+75)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp139;
fp139 = fp42 * fp31;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp7;
LIBINT2_REALTYPE fp396;
fp396 = 1.0000000000000000e+00 * fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp42 * fp32;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp7;
LIBINT2_REALTYPE fp397;
fp397 = inteval->two_alpha0_ket[vi] * fp140;
LIBINT2_REALTYPE fp395;
fp395 = fp397 - fp396;
target[((hsi*108+76)*1+lsi)*1] = fp395;
LIBINT2_REALTYPE fp137;
fp137 = fp42 * fp33;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp6;
LIBINT2_REALTYPE fp394;
fp394 = inteval->two_alpha0_ket[vi] * fp136;
target[((hsi*108+77)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp135;
fp135 = fp43 * fp36;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp5;
LIBINT2_REALTYPE fp393;
fp393 = inteval->two_alpha0_ket[vi] * fp134;
target[((hsi*108+78)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp131;
fp131 = fp42 * fp34;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp5;
LIBINT2_REALTYPE fp391;
fp391 = 1.0000000000000000e+00 * fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp42 * fp35;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp5;
LIBINT2_REALTYPE fp392;
fp392 = inteval->two_alpha0_ket[vi] * fp132;
LIBINT2_REALTYPE fp390;
fp390 = fp392 - fp391;
target[((hsi*108+79)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp129;
fp129 = fp42 * fp36;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp4;
LIBINT2_REALTYPE fp389;
fp389 = inteval->two_alpha0_ket[vi] * fp128;
target[((hsi*108+80)*1+lsi)*1] = fp389;
LIBINT2_REALTYPE fp163;
fp163 = fp42 * fp22;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp13;
LIBINT2_REALTYPE fp411;
fp411 = 1.0000000000000000e+00 * fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp42 * fp23;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp13;
LIBINT2_REALTYPE fp412;
fp412 = inteval->two_alpha0_ket[vi] * fp164;
LIBINT2_REALTYPE fp410;
fp410 = fp412 - fp411;
target[((hsi*108+67)*1+lsi)*1] = fp410;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 524 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
