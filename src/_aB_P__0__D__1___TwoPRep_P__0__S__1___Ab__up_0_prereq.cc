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
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__D__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp501;
fp501 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp470;
fp470 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp469;
fp469 = fp470 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp371;
fp371 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp372;
fp372 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp370;
fp370 = fp372 + fp371;
LIBINT2_REALTYPE fp175;
fp175 = inteval->WP_z[vi] * fp370;
LIBINT2_REALTYPE fp377;
fp377 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp378;
fp378 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp376;
fp376 = fp378 + fp377;
LIBINT2_REALTYPE fp176;
fp176 = inteval->PA_z[vi] * fp376;
LIBINT2_REALTYPE fp174;
fp174 = fp176 + fp175;
LIBINT2_REALTYPE fp173;
fp173 = fp174 + fp469;
LIBINT2_REALTYPE fp55;
fp55 = fp501 * fp173;
LIBINT2_REALTYPE fp506;
fp506 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp485;
fp485 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp484;
fp484 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp483;
fp483 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp484;
LIBINT2_REALTYPE fp482;
fp482 = fp485 * fp483;
LIBINT2_REALTYPE fp299;
fp299 = inteval->WQ_z[vi] * fp376;
LIBINT2_REALTYPE fp368;
fp368 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp369;
fp369 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp367;
fp367 = fp369 + fp368;
LIBINT2_REALTYPE fp300;
fp300 = inteval->QC_z[vi] * fp367;
LIBINT2_REALTYPE fp298;
fp298 = fp300 + fp299;
LIBINT2_REALTYPE fp297;
fp297 = fp298 + fp482;
LIBINT2_REALTYPE fp477;
fp477 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp476;
fp476 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp477;
LIBINT2_REALTYPE fp475;
fp475 = fp485 * fp476;
LIBINT2_REALTYPE fp295;
fp295 = inteval->WQ_z[vi] * fp370;
LIBINT2_REALTYPE fp296;
fp296 = inteval->QC_z[vi] * fp376;
LIBINT2_REALTYPE fp294;
fp294 = fp296 + fp295;
LIBINT2_REALTYPE fp293;
fp293 = fp294 + fp475;
LIBINT2_REALTYPE fp310;
fp310 = inteval->roz[vi] * fp293;
LIBINT2_REALTYPE fp309;
fp309 = fp297 - fp310;
LIBINT2_REALTYPE fp308;
fp308 = fp506 * fp309;
LIBINT2_REALTYPE fp135;
fp135 = fp501 * fp370;
LIBINT2_REALTYPE fp450;
fp450 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp449;
fp449 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi] - fp450;
LIBINT2_REALTYPE fp448;
fp448 = fp485 * fp449;
LIBINT2_REALTYPE fp315;
fp315 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp316;
fp316 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp314;
fp314 = fp316 + fp315;
LIBINT2_REALTYPE fp291;
fp291 = inteval->WQ_z[vi] * fp314;
LIBINT2_REALTYPE fp292;
fp292 = inteval->QC_z[vi] * fp370;
LIBINT2_REALTYPE fp290;
fp290 = fp292 + fp291;
LIBINT2_REALTYPE fp289;
fp289 = fp290 + fp448;
LIBINT2_REALTYPE fp137;
fp137 = inteval->WP_z[vi] * fp289;
LIBINT2_REALTYPE fp138;
fp138 = inteval->PA_z[vi] * fp293;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
LIBINT2_REALTYPE fp134;
fp134 = fp136 + fp135;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_z[vi] * fp134;
LIBINT2_REALTYPE fp140;
fp140 = fp501 * fp376;
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_z[vi] * fp293;
LIBINT2_REALTYPE fp143;
fp143 = inteval->PA_z[vi] * fp297;
LIBINT2_REALTYPE fp141;
fp141 = fp143 + fp142;
LIBINT2_REALTYPE fp139;
fp139 = fp141 + fp140;
LIBINT2_REALTYPE fp35;
fp35 = fp139;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_z[vi] * fp35;
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
LIBINT2_REALTYPE fp56;
fp56 = fp57 + fp308;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp53;
fp53 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp407;
fp407 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp408;
fp408 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp406;
fp406 = fp408 + fp407;
LIBINT2_REALTYPE fp188;
fp188 = inteval->WP_z[vi] * fp406;
LIBINT2_REALTYPE fp413;
fp413 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp414;
fp414 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp412;
fp412 = fp414 + fp413;
LIBINT2_REALTYPE fp189;
fp189 = inteval->PA_z[vi] * fp412;
LIBINT2_REALTYPE fp187;
fp187 = fp189 + fp188;
LIBINT2_REALTYPE fp61;
fp61 = fp470 * fp187;
LIBINT2_REALTYPE fp324;
fp324 = inteval->WQ_z[vi] * fp412;
LIBINT2_REALTYPE fp404;
fp404 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp405;
fp405 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp403;
fp403 = fp405 + fp404;
LIBINT2_REALTYPE fp325;
fp325 = inteval->QC_z[vi] * fp403;
LIBINT2_REALTYPE fp323;
fp323 = fp325 + fp324;
LIBINT2_REALTYPE fp321;
fp321 = inteval->WQ_z[vi] * fp406;
LIBINT2_REALTYPE fp322;
fp322 = inteval->QC_z[vi] * fp412;
LIBINT2_REALTYPE fp320;
fp320 = fp322 + fp321;
LIBINT2_REALTYPE fp335;
fp335 = inteval->roz[vi] * fp320;
LIBINT2_REALTYPE fp334;
fp334 = fp323 - fp335;
LIBINT2_REALTYPE fp333;
fp333 = fp506 * fp334;
LIBINT2_REALTYPE fp443;
fp443 = fp470 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp149;
fp149 = inteval->WP_z[vi] * fp314;
LIBINT2_REALTYPE fp150;
fp150 = inteval->PA_z[vi] * fp370;
LIBINT2_REALTYPE fp148;
fp148 = fp150 + fp149;
LIBINT2_REALTYPE fp147;
fp147 = fp148 + fp443;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WQ_y[vi] * fp147;
LIBINT2_REALTYPE fp157;
fp157 = inteval->QC_y[vi] * fp173;
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
LIBINT2_REALTYPE fp64;
fp64 = inteval->WP_z[vi] * fp155;
LIBINT2_REALTYPE fp159;
fp159 = inteval->WQ_y[vi] * fp173;
LIBINT2_REALTYPE fp461;
fp461 = fp470 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp153;
fp153 = inteval->WP_z[vi] * fp376;
LIBINT2_REALTYPE fp154;
fp154 = inteval->PA_z[vi] * fp367;
LIBINT2_REALTYPE fp152;
fp152 = fp154 + fp153;
LIBINT2_REALTYPE fp151;
fp151 = fp152 + fp461;
LIBINT2_REALTYPE fp160;
fp160 = inteval->QC_y[vi] * fp151;
LIBINT2_REALTYPE fp158;
fp158 = fp160 + fp159;
LIBINT2_REALTYPE fp33;
fp33 = fp158;
LIBINT2_REALTYPE fp65;
fp65 = inteval->PA_z[vi] * fp33;
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp62;
fp62 = fp63 + fp333;
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
LIBINT2_REALTYPE fp52;
fp52 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp352;
fp352 = inteval->WQ_y[vi] * fp412;
LIBINT2_REALTYPE fp353;
fp353 = inteval->QC_y[vi] * fp403;
LIBINT2_REALTYPE fp351;
fp351 = fp353 + fp352;
LIBINT2_REALTYPE fp350;
fp350 = fp351 + fp482;
LIBINT2_REALTYPE fp348;
fp348 = inteval->WQ_y[vi] * fp406;
LIBINT2_REALTYPE fp349;
fp349 = inteval->QC_y[vi] * fp412;
LIBINT2_REALTYPE fp347;
fp347 = fp349 + fp348;
LIBINT2_REALTYPE fp346;
fp346 = fp347 + fp475;
LIBINT2_REALTYPE fp363;
fp363 = inteval->roz[vi] * fp346;
LIBINT2_REALTYPE fp362;
fp362 = fp350 - fp363;
LIBINT2_REALTYPE fp361;
fp361 = fp506 * fp362;
LIBINT2_REALTYPE fp340;
fp340 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp341;
fp341 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp339;
fp339 = fp341 + fp340;
LIBINT2_REALTYPE fp344;
fp344 = inteval->WQ_y[vi] * fp339;
LIBINT2_REALTYPE fp345;
fp345 = inteval->QC_y[vi] * fp406;
LIBINT2_REALTYPE fp343;
fp343 = fp345 + fp344;
LIBINT2_REALTYPE fp342;
fp342 = fp343 + fp448;
LIBINT2_REALTYPE fp165;
fp165 = inteval->WP_z[vi] * fp342;
LIBINT2_REALTYPE fp166;
fp166 = inteval->PA_z[vi] * fp346;
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_z[vi] * fp164;
LIBINT2_REALTYPE fp168;
fp168 = inteval->WP_z[vi] * fp346;
LIBINT2_REALTYPE fp169;
fp169 = inteval->PA_z[vi] * fp350;
LIBINT2_REALTYPE fp167;
fp167 = fp169 + fp168;
LIBINT2_REALTYPE fp31;
fp31 = fp167;
LIBINT2_REALTYPE fp69;
fp69 = inteval->PA_z[vi] * fp31;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp66;
fp66 = fp67 + fp361;
LIBINT2_REALTYPE fp51;
fp51 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp455;
fp455 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp456;
fp456 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp454;
fp454 = fp456 + fp455;
LIBINT2_REALTYPE fp200;
fp200 = inteval->WP_z[vi] * fp454;
LIBINT2_REALTYPE fp466;
fp466 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp467;
fp467 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp465;
fp465 = fp467 + fp466;
LIBINT2_REALTYPE fp201;
fp201 = inteval->PA_z[vi] * fp465;
LIBINT2_REALTYPE fp199;
fp199 = fp201 + fp200;
LIBINT2_REALTYPE fp71;
fp71 = fp470 * fp199;
LIBINT2_REALTYPE fp386;
fp386 = inteval->WQ_z[vi] * fp465;
LIBINT2_REALTYPE fp458;
fp458 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp459;
fp459 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp457;
fp457 = fp459 + fp458;
LIBINT2_REALTYPE fp387;
fp387 = inteval->QC_z[vi] * fp457;
LIBINT2_REALTYPE fp385;
fp385 = fp387 + fp386;
LIBINT2_REALTYPE fp383;
fp383 = inteval->WQ_z[vi] * fp454;
LIBINT2_REALTYPE fp384;
fp384 = inteval->QC_z[vi] * fp465;
LIBINT2_REALTYPE fp382;
fp382 = fp384 + fp383;
LIBINT2_REALTYPE fp399;
fp399 = inteval->roz[vi] * fp382;
LIBINT2_REALTYPE fp398;
fp398 = fp385 - fp399;
LIBINT2_REALTYPE fp397;
fp397 = fp506 * fp398;
LIBINT2_REALTYPE fp178;
fp178 = inteval->WQ_x[vi] * fp147;
LIBINT2_REALTYPE fp179;
fp179 = inteval->QC_x[vi] * fp173;
LIBINT2_REALTYPE fp177;
fp177 = fp179 + fp178;
LIBINT2_REALTYPE fp74;
fp74 = inteval->WP_z[vi] * fp177;
LIBINT2_REALTYPE fp181;
fp181 = inteval->WQ_x[vi] * fp173;
LIBINT2_REALTYPE fp182;
fp182 = inteval->QC_x[vi] * fp151;
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
LIBINT2_REALTYPE fp29;
fp29 = fp180;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PA_z[vi] * fp29;
LIBINT2_REALTYPE fp73;
fp73 = fp75 + fp74;
LIBINT2_REALTYPE fp72;
fp72 = fp73 + fp397;
LIBINT2_REALTYPE fp70;
fp70 = fp72 + fp71;
LIBINT2_REALTYPE fp50;
fp50 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp422;
fp422 = inteval->WQ_y[vi] * fp465;
LIBINT2_REALTYPE fp423;
fp423 = inteval->QC_y[vi] * fp457;
LIBINT2_REALTYPE fp421;
fp421 = fp423 + fp422;
LIBINT2_REALTYPE fp419;
fp419 = inteval->WQ_y[vi] * fp454;
LIBINT2_REALTYPE fp420;
fp420 = inteval->QC_y[vi] * fp465;
LIBINT2_REALTYPE fp418;
fp418 = fp420 + fp419;
LIBINT2_REALTYPE fp435;
fp435 = inteval->roz[vi] * fp418;
LIBINT2_REALTYPE fp434;
fp434 = fp421 - fp435;
LIBINT2_REALTYPE fp433;
fp433 = fp506 * fp434;
LIBINT2_REALTYPE fp440;
fp440 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp441;
fp441 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp439;
fp439 = fp441 + fp440;
LIBINT2_REALTYPE fp410;
fp410 = inteval->WQ_y[vi] * fp439;
LIBINT2_REALTYPE fp411;
fp411 = inteval->QC_y[vi] * fp454;
LIBINT2_REALTYPE fp409;
fp409 = fp411 + fp410;
LIBINT2_REALTYPE fp191;
fp191 = inteval->WP_z[vi] * fp409;
LIBINT2_REALTYPE fp192;
fp192 = inteval->PA_z[vi] * fp418;
LIBINT2_REALTYPE fp190;
fp190 = fp192 + fp191;
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_z[vi] * fp190;
LIBINT2_REALTYPE fp194;
fp194 = inteval->WP_z[vi] * fp418;
LIBINT2_REALTYPE fp195;
fp195 = inteval->PA_z[vi] * fp421;
LIBINT2_REALTYPE fp193;
fp193 = fp195 + fp194;
LIBINT2_REALTYPE fp27;
fp27 = fp193;
LIBINT2_REALTYPE fp79;
fp79 = inteval->PA_z[vi] * fp27;
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
LIBINT2_REALTYPE fp76;
fp76 = fp77 + fp433;
LIBINT2_REALTYPE fp49;
fp49 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp487;
fp487 = inteval->WQ_x[vi] * fp465;
LIBINT2_REALTYPE fp488;
fp488 = inteval->QC_x[vi] * fp457;
LIBINT2_REALTYPE fp486;
fp486 = fp488 + fp487;
LIBINT2_REALTYPE fp481;
fp481 = fp486 + fp482;
LIBINT2_REALTYPE fp479;
fp479 = inteval->WQ_x[vi] * fp454;
LIBINT2_REALTYPE fp480;
fp480 = inteval->QC_x[vi] * fp465;
LIBINT2_REALTYPE fp478;
fp478 = fp480 + fp479;
LIBINT2_REALTYPE fp474;
fp474 = fp478 + fp475;
LIBINT2_REALTYPE fp505;
fp505 = inteval->roz[vi] * fp474;
LIBINT2_REALTYPE fp504;
fp504 = fp481 - fp505;
LIBINT2_REALTYPE fp503;
fp503 = fp506 * fp504;
LIBINT2_REALTYPE fp452;
fp452 = inteval->WQ_x[vi] * fp439;
LIBINT2_REALTYPE fp453;
fp453 = inteval->QC_x[vi] * fp454;
LIBINT2_REALTYPE fp451;
fp451 = fp453 + fp452;
LIBINT2_REALTYPE fp447;
fp447 = fp451 + fp448;
LIBINT2_REALTYPE fp203;
fp203 = inteval->WP_z[vi] * fp447;
LIBINT2_REALTYPE fp204;
fp204 = inteval->PA_z[vi] * fp474;
LIBINT2_REALTYPE fp202;
fp202 = fp204 + fp203;
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_z[vi] * fp202;
LIBINT2_REALTYPE fp206;
fp206 = inteval->WP_z[vi] * fp474;
LIBINT2_REALTYPE fp207;
fp207 = inteval->PA_z[vi] * fp481;
LIBINT2_REALTYPE fp205;
fp205 = fp207 + fp206;
LIBINT2_REALTYPE fp25;
fp25 = fp205;
LIBINT2_REALTYPE fp83;
fp83 = inteval->PA_z[vi] * fp25;
LIBINT2_REALTYPE fp81;
fp81 = fp83 + fp82;
LIBINT2_REALTYPE fp80;
fp80 = fp81 + fp503;
LIBINT2_REALTYPE fp48;
fp48 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+48)*1+lsi)*1]),&(fp48),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+47)*1+lsi)*1]),&(fp35),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+46)*1+lsi)*1]),&(fp33),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+45)*1+lsi)*1]),&(fp31),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+44)*1+lsi)*1]),&(fp29),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+43)*1+lsi)*1]),&(fp27),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+42)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_y[vi] * fp134;
LIBINT2_REALTYPE fp86;
fp86 = inteval->PA_y[vi] * fp35;
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
LIBINT2_REALTYPE fp47;
fp47 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+41)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp264;
fp264 = inteval->WP_y[vi] * fp406;
LIBINT2_REALTYPE fp265;
fp265 = inteval->PA_y[vi] * fp412;
LIBINT2_REALTYPE fp263;
fp263 = fp265 + fp264;
LIBINT2_REALTYPE fp262;
fp262 = fp263 + fp469;
LIBINT2_REALTYPE fp88;
fp88 = fp470 * fp262;
LIBINT2_REALTYPE fp231;
fp231 = inteval->WP_y[vi] * fp339;
LIBINT2_REALTYPE fp232;
fp232 = inteval->PA_y[vi] * fp406;
LIBINT2_REALTYPE fp230;
fp230 = fp232 + fp231;
LIBINT2_REALTYPE fp229;
fp229 = fp230 + fp443;
LIBINT2_REALTYPE fp221;
fp221 = inteval->WQ_z[vi] * fp229;
LIBINT2_REALTYPE fp222;
fp222 = inteval->QC_z[vi] * fp262;
LIBINT2_REALTYPE fp220;
fp220 = fp222 + fp221;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_z[vi] * fp220;
LIBINT2_REALTYPE fp224;
fp224 = inteval->WQ_z[vi] * fp262;
LIBINT2_REALTYPE fp235;
fp235 = inteval->WP_y[vi] * fp412;
LIBINT2_REALTYPE fp236;
fp236 = inteval->PA_y[vi] * fp403;
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
LIBINT2_REALTYPE fp233;
fp233 = fp234 + fp461;
LIBINT2_REALTYPE fp225;
fp225 = inteval->QC_z[vi] * fp233;
LIBINT2_REALTYPE fp223;
fp223 = fp225 + fp224;
LIBINT2_REALTYPE fp21;
fp21 = fp223;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PA_z[vi] * fp21;
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp46;
fp46 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+40)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp238;
fp238 = fp501 * fp406;
LIBINT2_REALTYPE fp240;
fp240 = inteval->WP_y[vi] * fp342;
LIBINT2_REALTYPE fp241;
fp241 = inteval->PA_y[vi] * fp346;
LIBINT2_REALTYPE fp239;
fp239 = fp241 + fp240;
LIBINT2_REALTYPE fp237;
fp237 = fp239 + fp238;
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_z[vi] * fp237;
LIBINT2_REALTYPE fp243;
fp243 = fp501 * fp412;
LIBINT2_REALTYPE fp245;
fp245 = inteval->WP_y[vi] * fp346;
LIBINT2_REALTYPE fp246;
fp246 = inteval->PA_y[vi] * fp350;
LIBINT2_REALTYPE fp244;
fp244 = fp246 + fp245;
LIBINT2_REALTYPE fp242;
fp242 = fp244 + fp243;
LIBINT2_REALTYPE fp19;
fp19 = fp242;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_z[vi] * fp19;
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
LIBINT2_REALTYPE fp45;
fp45 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+39)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp96;
fp96 = inteval->WP_y[vi] * fp177;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PA_y[vi] * fp29;
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
LIBINT2_REALTYPE fp44;
fp44 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+38)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp267;
fp267 = inteval->WQ_x[vi] * fp229;
LIBINT2_REALTYPE fp268;
fp268 = inteval->QC_x[vi] * fp262;
LIBINT2_REALTYPE fp266;
fp266 = fp268 + fp267;
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_z[vi] * fp266;
LIBINT2_REALTYPE fp270;
fp270 = inteval->WQ_x[vi] * fp262;
LIBINT2_REALTYPE fp271;
fp271 = inteval->QC_x[vi] * fp233;
LIBINT2_REALTYPE fp269;
fp269 = fp271 + fp270;
LIBINT2_REALTYPE fp15;
fp15 = fp269;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PA_z[vi] * fp15;
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
LIBINT2_REALTYPE fp43;
fp43 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+37)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp281;
fp281 = inteval->WP_y[vi] * fp447;
LIBINT2_REALTYPE fp282;
fp282 = inteval->PA_y[vi] * fp474;
LIBINT2_REALTYPE fp280;
fp280 = fp282 + fp281;
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_z[vi] * fp280;
LIBINT2_REALTYPE fp284;
fp284 = inteval->WP_y[vi] * fp474;
LIBINT2_REALTYPE fp285;
fp285 = inteval->PA_y[vi] * fp481;
LIBINT2_REALTYPE fp283;
fp283 = fp285 + fp284;
LIBINT2_REALTYPE fp13;
fp13 = fp283;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PA_z[vi] * fp13;
LIBINT2_REALTYPE fp101;
fp101 = fp103 + fp102;
LIBINT2_REALTYPE fp42;
fp42 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+36)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp212;
fp212 = inteval->WP_y[vi] * fp289;
LIBINT2_REALTYPE fp213;
fp213 = inteval->PA_y[vi] * fp293;
LIBINT2_REALTYPE fp211;
fp211 = fp213 + fp212;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_y[vi] * fp211;
LIBINT2_REALTYPE fp215;
fp215 = inteval->WP_y[vi] * fp293;
LIBINT2_REALTYPE fp216;
fp216 = inteval->PA_y[vi] * fp297;
LIBINT2_REALTYPE fp214;
fp214 = fp216 + fp215;
LIBINT2_REALTYPE fp23;
fp23 = fp214;
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_y[vi] * fp23;
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
LIBINT2_REALTYPE fp104;
fp104 = fp105 + fp308;
LIBINT2_REALTYPE fp41;
fp41 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+35)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp251;
fp251 = inteval->WP_y[vi] * fp370;
LIBINT2_REALTYPE fp252;
fp252 = inteval->PA_y[vi] * fp376;
LIBINT2_REALTYPE fp250;
fp250 = fp252 + fp251;
LIBINT2_REALTYPE fp109;
fp109 = fp470 * fp250;
LIBINT2_REALTYPE fp112;
fp112 = inteval->WP_y[vi] * fp220;
LIBINT2_REALTYPE fp113;
fp113 = inteval->PA_y[vi] * fp21;
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
LIBINT2_REALTYPE fp110;
fp110 = fp111 + fp333;
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
LIBINT2_REALTYPE fp40;
fp40 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+34)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp115;
fp115 = fp501 * fp262;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_y[vi] * fp237;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PA_y[vi] * fp19;
LIBINT2_REALTYPE fp117;
fp117 = fp119 + fp118;
LIBINT2_REALTYPE fp116;
fp116 = fp117 + fp361;
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
LIBINT2_REALTYPE fp39;
fp39 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+33)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp374;
fp374 = inteval->WQ_z[vi] * fp439;
LIBINT2_REALTYPE fp375;
fp375 = inteval->QC_z[vi] * fp454;
LIBINT2_REALTYPE fp373;
fp373 = fp375 + fp374;
LIBINT2_REALTYPE fp254;
fp254 = inteval->WP_y[vi] * fp373;
LIBINT2_REALTYPE fp255;
fp255 = inteval->PA_y[vi] * fp382;
LIBINT2_REALTYPE fp253;
fp253 = fp255 + fp254;
LIBINT2_REALTYPE fp122;
fp122 = inteval->WP_y[vi] * fp253;
LIBINT2_REALTYPE fp257;
fp257 = inteval->WP_y[vi] * fp382;
LIBINT2_REALTYPE fp258;
fp258 = inteval->PA_y[vi] * fp385;
LIBINT2_REALTYPE fp256;
fp256 = fp258 + fp257;
LIBINT2_REALTYPE fp17;
fp17 = fp256;
LIBINT2_REALTYPE fp123;
fp123 = inteval->PA_y[vi] * fp17;
LIBINT2_REALTYPE fp121;
fp121 = fp123 + fp122;
LIBINT2_REALTYPE fp120;
fp120 = fp121 + fp397;
LIBINT2_REALTYPE fp38;
fp38 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+32)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp278;
fp278 = inteval->WP_y[vi] * fp454;
LIBINT2_REALTYPE fp279;
fp279 = inteval->PA_y[vi] * fp465;
LIBINT2_REALTYPE fp277;
fp277 = fp279 + fp278;
LIBINT2_REALTYPE fp125;
fp125 = fp470 * fp277;
LIBINT2_REALTYPE fp128;
fp128 = inteval->WP_y[vi] * fp266;
LIBINT2_REALTYPE fp129;
fp129 = inteval->PA_y[vi] * fp15;
LIBINT2_REALTYPE fp127;
fp127 = fp129 + fp128;
LIBINT2_REALTYPE fp126;
fp126 = fp127 + fp433;
LIBINT2_REALTYPE fp124;
fp124 = fp126 + fp125;
LIBINT2_REALTYPE fp37;
fp37 = fp124;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+31)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp132;
fp132 = inteval->WP_y[vi] * fp280;
LIBINT2_REALTYPE fp133;
fp133 = inteval->PA_y[vi] * fp13;
LIBINT2_REALTYPE fp131;
fp131 = fp133 + fp132;
LIBINT2_REALTYPE fp130;
fp130 = fp131 + fp503;
LIBINT2_REALTYPE fp36;
fp36 = fp130;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+30)*1+lsi)*1]),&(fp36),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+29)*1+lsi)*1]),&(fp23),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+28)*1+lsi)*1]),&(fp21),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+27)*1+lsi)*1]),&(fp19),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+26)*1+lsi)*1]),&(fp17),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+25)*1+lsi)*1]),&(fp15),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_x[vi] * fp134;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PA_x[vi] * fp35;
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
LIBINT2_REALTYPE fp34;
fp34 = fp144;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp162;
fp162 = inteval->WP_x[vi] * fp155;
LIBINT2_REALTYPE fp163;
fp163 = inteval->PA_x[vi] * fp33;
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
LIBINT2_REALTYPE fp32;
fp32 = fp161;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp355;
fp355 = inteval->WP_x[vi] * fp342;
LIBINT2_REALTYPE fp356;
fp356 = inteval->PA_x[vi] * fp346;
LIBINT2_REALTYPE fp354;
fp354 = fp356 + fp355;
LIBINT2_REALTYPE fp171;
fp171 = inteval->WP_z[vi] * fp354;
LIBINT2_REALTYPE fp358;
fp358 = inteval->WP_x[vi] * fp346;
LIBINT2_REALTYPE fp359;
fp359 = inteval->PA_x[vi] * fp350;
LIBINT2_REALTYPE fp357;
fp357 = fp359 + fp358;
LIBINT2_REALTYPE fp7;
fp7 = fp357;
LIBINT2_REALTYPE fp172;
fp172 = inteval->PA_z[vi] * fp7;
LIBINT2_REALTYPE fp170;
fp170 = fp172 + fp171;
LIBINT2_REALTYPE fp30;
fp30 = fp170;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp472;
fp472 = inteval->WP_x[vi] * fp454;
LIBINT2_REALTYPE fp473;
fp473 = inteval->PA_x[vi] * fp465;
LIBINT2_REALTYPE fp471;
fp471 = fp473 + fp472;
LIBINT2_REALTYPE fp468;
fp468 = fp471 + fp469;
LIBINT2_REALTYPE fp273;
fp273 = fp470 * fp468;
LIBINT2_REALTYPE fp445;
fp445 = inteval->WP_x[vi] * fp439;
LIBINT2_REALTYPE fp446;
fp446 = inteval->PA_x[vi] * fp454;
LIBINT2_REALTYPE fp444;
fp444 = fp446 + fp445;
LIBINT2_REALTYPE fp442;
fp442 = fp444 + fp443;
LIBINT2_REALTYPE fp389;
fp389 = inteval->WQ_z[vi] * fp442;
LIBINT2_REALTYPE fp390;
fp390 = inteval->QC_z[vi] * fp468;
LIBINT2_REALTYPE fp388;
fp388 = fp390 + fp389;
LIBINT2_REALTYPE fp185;
fp185 = inteval->WP_z[vi] * fp388;
LIBINT2_REALTYPE fp392;
fp392 = inteval->WQ_z[vi] * fp468;
LIBINT2_REALTYPE fp463;
fp463 = inteval->WP_x[vi] * fp465;
LIBINT2_REALTYPE fp464;
fp464 = inteval->PA_x[vi] * fp457;
LIBINT2_REALTYPE fp462;
fp462 = fp464 + fp463;
LIBINT2_REALTYPE fp460;
fp460 = fp462 + fp461;
LIBINT2_REALTYPE fp393;
fp393 = inteval->QC_z[vi] * fp460;
LIBINT2_REALTYPE fp391;
fp391 = fp393 + fp392;
LIBINT2_REALTYPE fp5;
fp5 = fp391;
LIBINT2_REALTYPE fp186;
fp186 = inteval->PA_z[vi] * fp5;
LIBINT2_REALTYPE fp184;
fp184 = fp186 + fp185;
LIBINT2_REALTYPE fp183;
fp183 = fp184 + fp273;
LIBINT2_REALTYPE fp28;
fp28 = fp183;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp425;
fp425 = inteval->WQ_y[vi] * fp442;
LIBINT2_REALTYPE fp426;
fp426 = inteval->QC_y[vi] * fp468;
LIBINT2_REALTYPE fp424;
fp424 = fp426 + fp425;
LIBINT2_REALTYPE fp197;
fp197 = inteval->WP_z[vi] * fp424;
LIBINT2_REALTYPE fp428;
fp428 = inteval->WQ_y[vi] * fp468;
LIBINT2_REALTYPE fp429;
fp429 = inteval->QC_y[vi] * fp460;
LIBINT2_REALTYPE fp427;
fp427 = fp429 + fp428;
LIBINT2_REALTYPE fp3;
fp3 = fp427;
LIBINT2_REALTYPE fp198;
fp198 = inteval->PA_z[vi] * fp3;
LIBINT2_REALTYPE fp196;
fp196 = fp198 + fp197;
LIBINT2_REALTYPE fp26;
fp26 = fp196;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp490;
fp490 = fp501 * fp454;
LIBINT2_REALTYPE fp492;
fp492 = inteval->WP_x[vi] * fp447;
LIBINT2_REALTYPE fp493;
fp493 = inteval->PA_x[vi] * fp474;
LIBINT2_REALTYPE fp491;
fp491 = fp493 + fp492;
LIBINT2_REALTYPE fp489;
fp489 = fp491 + fp490;
LIBINT2_REALTYPE fp209;
fp209 = inteval->WP_z[vi] * fp489;
LIBINT2_REALTYPE fp495;
fp495 = fp501 * fp465;
LIBINT2_REALTYPE fp497;
fp497 = inteval->WP_x[vi] * fp474;
LIBINT2_REALTYPE fp498;
fp498 = inteval->PA_x[vi] * fp481;
LIBINT2_REALTYPE fp496;
fp496 = fp498 + fp497;
LIBINT2_REALTYPE fp494;
fp494 = fp496 + fp495;
LIBINT2_REALTYPE fp1;
fp1 = fp494;
LIBINT2_REALTYPE fp210;
fp210 = inteval->PA_z[vi] * fp1;
LIBINT2_REALTYPE fp208;
fp208 = fp210 + fp209;
LIBINT2_REALTYPE fp24;
fp24 = fp208;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp302;
fp302 = inteval->WP_x[vi] * fp289;
LIBINT2_REALTYPE fp303;
fp303 = inteval->PA_x[vi] * fp293;
LIBINT2_REALTYPE fp301;
fp301 = fp303 + fp302;
LIBINT2_REALTYPE fp218;
fp218 = inteval->WP_y[vi] * fp301;
LIBINT2_REALTYPE fp305;
fp305 = inteval->WP_x[vi] * fp293;
LIBINT2_REALTYPE fp306;
fp306 = inteval->PA_x[vi] * fp297;
LIBINT2_REALTYPE fp304;
fp304 = fp306 + fp305;
LIBINT2_REALTYPE fp11;
fp11 = fp304;
LIBINT2_REALTYPE fp219;
fp219 = inteval->PA_y[vi] * fp11;
LIBINT2_REALTYPE fp217;
fp217 = fp219 + fp218;
LIBINT2_REALTYPE fp22;
fp22 = fp217;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp227;
fp227 = inteval->WP_x[vi] * fp220;
LIBINT2_REALTYPE fp228;
fp228 = inteval->PA_x[vi] * fp21;
LIBINT2_REALTYPE fp226;
fp226 = fp228 + fp227;
LIBINT2_REALTYPE fp20;
fp20 = fp226;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp248;
fp248 = inteval->WP_x[vi] * fp237;
LIBINT2_REALTYPE fp249;
fp249 = inteval->PA_x[vi] * fp19;
LIBINT2_REALTYPE fp247;
fp247 = fp249 + fp248;
LIBINT2_REALTYPE fp18;
fp18 = fp247;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp260;
fp260 = inteval->WP_y[vi] * fp388;
LIBINT2_REALTYPE fp261;
fp261 = inteval->PA_y[vi] * fp5;
LIBINT2_REALTYPE fp259;
fp259 = fp261 + fp260;
LIBINT2_REALTYPE fp16;
fp16 = fp259;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp275;
fp275 = inteval->WP_y[vi] * fp424;
LIBINT2_REALTYPE fp276;
fp276 = inteval->PA_y[vi] * fp3;
LIBINT2_REALTYPE fp274;
fp274 = fp276 + fp275;
LIBINT2_REALTYPE fp272;
fp272 = fp274 + fp273;
LIBINT2_REALTYPE fp14;
fp14 = fp272;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp287;
fp287 = inteval->WP_y[vi] * fp489;
LIBINT2_REALTYPE fp288;
fp288 = inteval->PA_y[vi] * fp1;
LIBINT2_REALTYPE fp286;
fp286 = fp288 + fp287;
LIBINT2_REALTYPE fp12;
fp12 = fp286;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp12),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp312;
fp312 = inteval->WP_x[vi] * fp301;
LIBINT2_REALTYPE fp313;
fp313 = inteval->PA_x[vi] * fp11;
LIBINT2_REALTYPE fp311;
fp311 = fp313 + fp312;
LIBINT2_REALTYPE fp307;
fp307 = fp311 + fp308;
LIBINT2_REALTYPE fp10;
fp10 = fp307;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp330;
fp330 = inteval->WP_x[vi] * fp320;
LIBINT2_REALTYPE fp331;
fp331 = inteval->PA_x[vi] * fp323;
LIBINT2_REALTYPE fp329;
fp329 = fp331 + fp330;
LIBINT2_REALTYPE fp9;
fp9 = fp329;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp318;
fp318 = inteval->WQ_z[vi] * fp339;
LIBINT2_REALTYPE fp319;
fp319 = inteval->QC_z[vi] * fp406;
LIBINT2_REALTYPE fp317;
fp317 = fp319 + fp318;
LIBINT2_REALTYPE fp327;
fp327 = inteval->WP_x[vi] * fp317;
LIBINT2_REALTYPE fp328;
fp328 = inteval->PA_x[vi] * fp320;
LIBINT2_REALTYPE fp326;
fp326 = fp328 + fp327;
LIBINT2_REALTYPE fp337;
fp337 = inteval->WP_x[vi] * fp326;
LIBINT2_REALTYPE fp338;
fp338 = inteval->PA_x[vi] * fp9;
LIBINT2_REALTYPE fp336;
fp336 = fp338 + fp337;
LIBINT2_REALTYPE fp332;
fp332 = fp336 + fp333;
LIBINT2_REALTYPE fp8;
fp8 = fp332;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp365;
fp365 = inteval->WP_x[vi] * fp354;
LIBINT2_REALTYPE fp366;
fp366 = inteval->PA_x[vi] * fp7;
LIBINT2_REALTYPE fp364;
fp364 = fp366 + fp365;
LIBINT2_REALTYPE fp360;
fp360 = fp364 + fp361;
LIBINT2_REALTYPE fp6;
fp6 = fp360;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp380;
fp380 = inteval->WP_x[vi] * fp370;
LIBINT2_REALTYPE fp381;
fp381 = inteval->PA_x[vi] * fp376;
LIBINT2_REALTYPE fp379;
fp379 = fp381 + fp380;
LIBINT2_REALTYPE fp395;
fp395 = fp470 * fp379;
LIBINT2_REALTYPE fp401;
fp401 = inteval->WP_x[vi] * fp388;
LIBINT2_REALTYPE fp402;
fp402 = inteval->PA_x[vi] * fp5;
LIBINT2_REALTYPE fp400;
fp400 = fp402 + fp401;
LIBINT2_REALTYPE fp396;
fp396 = fp400 + fp397;
LIBINT2_REALTYPE fp394;
fp394 = fp396 + fp395;
LIBINT2_REALTYPE fp4;
fp4 = fp394;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp416;
fp416 = inteval->WP_x[vi] * fp406;
LIBINT2_REALTYPE fp417;
fp417 = inteval->PA_x[vi] * fp412;
LIBINT2_REALTYPE fp415;
fp415 = fp417 + fp416;
LIBINT2_REALTYPE fp431;
fp431 = fp470 * fp415;
LIBINT2_REALTYPE fp437;
fp437 = inteval->WP_x[vi] * fp424;
LIBINT2_REALTYPE fp438;
fp438 = inteval->PA_x[vi] * fp3;
LIBINT2_REALTYPE fp436;
fp436 = fp438 + fp437;
LIBINT2_REALTYPE fp432;
fp432 = fp436 + fp433;
LIBINT2_REALTYPE fp430;
fp430 = fp432 + fp431;
LIBINT2_REALTYPE fp2;
fp2 = fp430;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp500;
fp500 = fp501 * fp468;
LIBINT2_REALTYPE fp508;
fp508 = inteval->WP_x[vi] * fp489;
LIBINT2_REALTYPE fp509;
fp509 = inteval->PA_x[vi] * fp1;
LIBINT2_REALTYPE fp507;
fp507 = fp509 + fp508;
LIBINT2_REALTYPE fp502;
fp502 = fp507 + fp503;
LIBINT2_REALTYPE fp499;
fp499 = fp502 + fp500;
LIBINT2_REALTYPE fp0;
fp0 = fp499;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 510 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
