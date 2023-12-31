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
void _elecpotderiv1_F_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp436;
fp436 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp525;
fp525 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp496;
fp496 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp495;
fp495 = fp525 * fp496;
LIBINT2_REALTYPE fp454;
fp454 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp455;
fp455 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp453;
fp453 = fp455 - fp454;
LIBINT2_REALTYPE fp293;
fp293 = inteval->PC_z[vi] * fp453;
LIBINT2_REALTYPE fp457;
fp457 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp458;
fp458 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp456;
fp456 = fp458 - fp457;
LIBINT2_REALTYPE fp294;
fp294 = inteval->PA_z[vi] * fp456;
LIBINT2_REALTYPE fp292;
fp292 = fp294 - fp293;
LIBINT2_REALTYPE fp291;
fp291 = fp292 + fp495;
LIBINT2_REALTYPE fp510;
fp510 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp509;
fp509 = fp525 * fp510;
LIBINT2_REALTYPE fp301;
fp301 = inteval->PC_z[vi] * fp456;
LIBINT2_REALTYPE fp460;
fp460 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp461;
fp461 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp459;
fp459 = fp461 - fp460;
LIBINT2_REALTYPE fp302;
fp302 = inteval->PA_z[vi] * fp459;
LIBINT2_REALTYPE fp300;
fp300 = fp302 - fp301;
LIBINT2_REALTYPE fp299;
fp299 = fp300 + fp509;
LIBINT2_REALTYPE fp98;
fp98 = fp299 - fp291;
LIBINT2_REALTYPE fp97;
fp97 = fp436 * fp98;
LIBINT2_REALTYPE fp574;
fp574 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp537;
fp537 = fp456 - fp453;
LIBINT2_REALTYPE fp536;
fp536 = fp574 * fp537;
LIBINT2_REALTYPE fp524;
fp524 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp523;
fp523 = fp525 * fp524;
LIBINT2_REALTYPE fp448;
fp448 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp449;
fp449 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp447;
fp447 = fp449 - fp448;
LIBINT2_REALTYPE fp195;
fp195 = inteval->PC_z[vi] * fp447;
LIBINT2_REALTYPE fp196;
fp196 = inteval->PA_z[vi] * fp453;
LIBINT2_REALTYPE fp194;
fp194 = fp196 - fp195;
LIBINT2_REALTYPE fp193;
fp193 = fp194 + fp523;
LIBINT2_REALTYPE fp539;
fp539 = inteval->PC_z[vi] * fp193;
LIBINT2_REALTYPE fp175;
fp175 = inteval->PA_z[vi] * fp291;
LIBINT2_REALTYPE fp174;
fp174 = fp175 - fp539;
LIBINT2_REALTYPE fp173;
fp173 = fp174 + fp536;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PC_z[vi] * fp173;
LIBINT2_REALTYPE fp178;
fp178 = fp459 - fp456;
LIBINT2_REALTYPE fp177;
fp177 = fp574 * fp178;
LIBINT2_REALTYPE fp180;
fp180 = inteval->PC_z[vi] * fp291;
LIBINT2_REALTYPE fp181;
fp181 = inteval->PA_z[vi] * fp299;
LIBINT2_REALTYPE fp179;
fp179 = fp181 - fp180;
LIBINT2_REALTYPE fp176;
fp176 = fp179 + fp177;
LIBINT2_REALTYPE fp95;
fp95 = inteval->PB_z[vi] * fp176;
LIBINT2_REALTYPE fp94;
fp94 = fp95 - fp100;
LIBINT2_REALTYPE fp93;
fp93 = fp94 + fp97;
LIBINT2_REALTYPE fp60;
fp60 = inteval->two_alpha0_ket[vi] * fp93;
LIBINT2_REALTYPE fp59;
fp59 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp540;
fp540 = inteval->PB_z[vi] * fp291;
LIBINT2_REALTYPE fp538;
fp538 = fp540 - fp539;
LIBINT2_REALTYPE fp535;
fp535 = fp538 + fp536;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PC_y[vi] * fp535;
LIBINT2_REALTYPE fp172;
fp172 = inteval->PB_z[vi] * fp299;
LIBINT2_REALTYPE fp171;
fp171 = fp172 - fp180;
LIBINT2_REALTYPE fp170;
fp170 = fp171 + fp177;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PA_y[vi] * fp170;
LIBINT2_REALTYPE fp113;
fp113 = fp115 - fp114;
LIBINT2_REALTYPE fp61;
fp61 = inteval->two_alpha0_ket[vi] * fp113;
LIBINT2_REALTYPE fp58;
fp58 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp463;
fp463 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp464;
fp464 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp462;
fp462 = fp464 - fp463;
LIBINT2_REALTYPE fp350;
fp350 = inteval->PC_y[vi] * fp462;
LIBINT2_REALTYPE fp466;
fp466 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp467;
fp467 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp465;
fp465 = fp467 - fp466;
LIBINT2_REALTYPE fp351;
fp351 = inteval->PA_y[vi] * fp465;
LIBINT2_REALTYPE fp349;
fp349 = fp351 - fp350;
LIBINT2_REALTYPE fp348;
fp348 = fp349 + fp495;
LIBINT2_REALTYPE fp359;
fp359 = inteval->PC_y[vi] * fp465;
LIBINT2_REALTYPE fp469;
fp469 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp470;
fp470 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp468;
fp468 = fp470 - fp469;
LIBINT2_REALTYPE fp360;
fp360 = inteval->PA_y[vi] * fp468;
LIBINT2_REALTYPE fp358;
fp358 = fp360 - fp359;
LIBINT2_REALTYPE fp357;
fp357 = fp358 + fp509;
LIBINT2_REALTYPE fp158;
fp158 = fp357 - fp348;
LIBINT2_REALTYPE fp136;
fp136 = fp525 * fp158;
LIBINT2_REALTYPE fp451;
fp451 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp452;
fp452 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp450;
fp450 = fp452 - fp451;
LIBINT2_REALTYPE fp244;
fp244 = inteval->PC_y[vi] * fp450;
LIBINT2_REALTYPE fp245;
fp245 = inteval->PA_y[vi] * fp462;
LIBINT2_REALTYPE fp243;
fp243 = fp245 - fp244;
LIBINT2_REALTYPE fp242;
fp242 = fp243 + fp523;
LIBINT2_REALTYPE fp533;
fp533 = inteval->PC_z[vi] * fp242;
LIBINT2_REALTYPE fp534;
fp534 = inteval->PB_z[vi] * fp348;
LIBINT2_REALTYPE fp532;
fp532 = fp534 - fp533;
LIBINT2_REALTYPE fp133;
fp133 = inteval->PC_z[vi] * fp532;
LIBINT2_REALTYPE fp225;
fp225 = inteval->PC_z[vi] * fp348;
LIBINT2_REALTYPE fp124;
fp124 = inteval->PB_z[vi] * fp357;
LIBINT2_REALTYPE fp123;
fp123 = fp124 - fp225;
LIBINT2_REALTYPE fp134;
fp134 = inteval->PA_z[vi] * fp123;
LIBINT2_REALTYPE fp132;
fp132 = fp134 - fp133;
LIBINT2_REALTYPE fp131;
fp131 = fp132 + fp136;
LIBINT2_REALTYPE fp62;
fp62 = inteval->two_alpha0_ket[vi] * fp131;
LIBINT2_REALTYPE fp57;
fp57 = fp62;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp555;
fp555 = fp465 - fp462;
LIBINT2_REALTYPE fp554;
fp554 = fp574 * fp555;
LIBINT2_REALTYPE fp557;
fp557 = inteval->PC_y[vi] * fp242;
LIBINT2_REALTYPE fp253;
fp253 = inteval->PA_y[vi] * fp348;
LIBINT2_REALTYPE fp252;
fp252 = fp253 - fp557;
LIBINT2_REALTYPE fp251;
fp251 = fp252 + fp554;
LIBINT2_REALTYPE fp148;
fp148 = inteval->PC_z[vi] * fp251;
LIBINT2_REALTYPE fp256;
fp256 = fp468 - fp465;
LIBINT2_REALTYPE fp255;
fp255 = fp574 * fp256;
LIBINT2_REALTYPE fp258;
fp258 = inteval->PC_y[vi] * fp348;
LIBINT2_REALTYPE fp259;
fp259 = inteval->PA_y[vi] * fp357;
LIBINT2_REALTYPE fp257;
fp257 = fp259 - fp258;
LIBINT2_REALTYPE fp254;
fp254 = fp257 + fp255;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PB_z[vi] * fp254;
LIBINT2_REALTYPE fp145;
fp145 = fp146 - fp148;
LIBINT2_REALTYPE fp63;
fp63 = inteval->two_alpha0_ket[vi] * fp145;
LIBINT2_REALTYPE fp56;
fp56 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp185;
fp185 = inteval->PC_x[vi] * fp535;
LIBINT2_REALTYPE fp186;
fp186 = inteval->PA_x[vi] * fp170;
LIBINT2_REALTYPE fp184;
fp184 = fp186 - fp185;
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_ket[vi] * fp184;
LIBINT2_REALTYPE fp55;
fp55 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp192;
fp192 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp191;
fp191 = fp192 - fp448;
LIBINT2_REALTYPE fp516;
fp516 = inteval->PC_z[vi] * fp191;
LIBINT2_REALTYPE fp198;
fp198 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp197;
fp197 = fp198 - fp454;
LIBINT2_REALTYPE fp517;
fp517 = inteval->PA_z[vi] * fp197;
LIBINT2_REALTYPE fp515;
fp515 = fp517 - fp516;
LIBINT2_REALTYPE fp514;
fp514 = fp515 + fp523;
LIBINT2_REALTYPE fp545;
fp545 = inteval->PC_x[vi] * fp514;
LIBINT2_REALTYPE fp488;
fp488 = inteval->PC_z[vi] * fp197;
LIBINT2_REALTYPE fp270;
fp270 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp269;
fp269 = fp270 - fp457;
LIBINT2_REALTYPE fp489;
fp489 = inteval->PA_z[vi] * fp269;
LIBINT2_REALTYPE fp487;
fp487 = fp489 - fp488;
LIBINT2_REALTYPE fp486;
fp486 = fp487 + fp495;
LIBINT2_REALTYPE fp546;
fp546 = inteval->PA_x[vi] * fp486;
LIBINT2_REALTYPE fp544;
fp544 = fp546 - fp545;
LIBINT2_REALTYPE fp211;
fp211 = inteval->PC_y[vi] * fp544;
LIBINT2_REALTYPE fp202;
fp202 = inteval->PC_x[vi] * fp486;
LIBINT2_REALTYPE fp502;
fp502 = inteval->PC_z[vi] * fp269;
LIBINT2_REALTYPE fp272;
fp272 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp271;
fp271 = fp272 - fp460;
LIBINT2_REALTYPE fp503;
fp503 = inteval->PA_z[vi] * fp271;
LIBINT2_REALTYPE fp501;
fp501 = fp503 - fp502;
LIBINT2_REALTYPE fp500;
fp500 = fp501 + fp509;
LIBINT2_REALTYPE fp203;
fp203 = inteval->PA_x[vi] * fp500;
LIBINT2_REALTYPE fp201;
fp201 = fp203 - fp202;
LIBINT2_REALTYPE fp212;
fp212 = inteval->PA_y[vi] * fp201;
LIBINT2_REALTYPE fp210;
fp210 = fp212 - fp211;
LIBINT2_REALTYPE fp65;
fp65 = inteval->two_alpha0_ket[vi] * fp210;
LIBINT2_REALTYPE fp54;
fp54 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp234;
fp234 = inteval->PC_x[vi] * fp532;
LIBINT2_REALTYPE fp235;
fp235 = inteval->PA_x[vi] * fp123;
LIBINT2_REALTYPE fp233;
fp233 = fp235 - fp234;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_ket[vi] * fp233;
LIBINT2_REALTYPE fp53;
fp53 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp475;
fp475 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp476;
fp476 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp474;
fp474 = fp476 - fp475;
LIBINT2_REALTYPE fp431;
fp431 = inteval->PC_x[vi] * fp474;
LIBINT2_REALTYPE fp478;
fp478 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp479;
fp479 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp477;
fp477 = fp479 - fp478;
LIBINT2_REALTYPE fp432;
fp432 = inteval->PA_x[vi] * fp477;
LIBINT2_REALTYPE fp430;
fp430 = fp432 - fp431;
LIBINT2_REALTYPE fp429;
fp429 = fp430 + fp495;
LIBINT2_REALTYPE fp442;
fp442 = inteval->PC_x[vi] * fp477;
LIBINT2_REALTYPE fp481;
fp481 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp482;
fp482 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp480;
fp480 = fp482 - fp481;
LIBINT2_REALTYPE fp443;
fp443 = inteval->PA_x[vi] * fp480;
LIBINT2_REALTYPE fp441;
fp441 = fp443 - fp442;
LIBINT2_REALTYPE fp440;
fp440 = fp441 + fp509;
LIBINT2_REALTYPE fp435;
fp435 = fp440 - fp429;
LIBINT2_REALTYPE fp353;
fp353 = fp525 * fp435;
LIBINT2_REALTYPE fp472;
fp472 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp473;
fp473 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp471;
fp471 = fp473 - fp472;
LIBINT2_REALTYPE fp406;
fp406 = inteval->PC_x[vi] * fp471;
LIBINT2_REALTYPE fp407;
fp407 = inteval->PA_x[vi] * fp474;
LIBINT2_REALTYPE fp405;
fp405 = fp407 - fp406;
LIBINT2_REALTYPE fp404;
fp404 = fp405 + fp523;
LIBINT2_REALTYPE fp563;
fp563 = inteval->PC_z[vi] * fp404;
LIBINT2_REALTYPE fp564;
fp564 = inteval->PB_z[vi] * fp429;
LIBINT2_REALTYPE fp562;
fp562 = fp564 - fp563;
LIBINT2_REALTYPE fp289;
fp289 = inteval->PC_z[vi] * fp562;
LIBINT2_REALTYPE fp367;
fp367 = inteval->PC_z[vi] * fp429;
LIBINT2_REALTYPE fp277;
fp277 = inteval->PB_z[vi] * fp440;
LIBINT2_REALTYPE fp276;
fp276 = fp277 - fp367;
LIBINT2_REALTYPE fp290;
fp290 = inteval->PA_z[vi] * fp276;
LIBINT2_REALTYPE fp288;
fp288 = fp290 - fp289;
LIBINT2_REALTYPE fp287;
fp287 = fp288 + fp353;
LIBINT2_REALTYPE fp67;
fp67 = inteval->two_alpha0_ket[vi] * fp287;
LIBINT2_REALTYPE fp52;
fp52 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp313;
fp313 = inteval->PC_y[vi] * fp562;
LIBINT2_REALTYPE fp314;
fp314 = inteval->PA_y[vi] * fp276;
LIBINT2_REALTYPE fp312;
fp312 = fp314 - fp313;
LIBINT2_REALTYPE fp68;
fp68 = inteval->two_alpha0_ket[vi] * fp312;
LIBINT2_REALTYPE fp51;
fp51 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp573;
fp573 = fp477 - fp474;
LIBINT2_REALTYPE fp572;
fp572 = fp574 * fp573;
LIBINT2_REALTYPE fp576;
fp576 = inteval->PC_x[vi] * fp404;
LIBINT2_REALTYPE fp419;
fp419 = inteval->PA_x[vi] * fp429;
LIBINT2_REALTYPE fp418;
fp418 = fp419 - fp576;
LIBINT2_REALTYPE fp417;
fp417 = fp418 + fp572;
LIBINT2_REALTYPE fp375;
fp375 = inteval->PC_z[vi] * fp417;
LIBINT2_REALTYPE fp422;
fp422 = fp480 - fp477;
LIBINT2_REALTYPE fp421;
fp421 = fp574 * fp422;
LIBINT2_REALTYPE fp424;
fp424 = inteval->PC_x[vi] * fp429;
LIBINT2_REALTYPE fp425;
fp425 = inteval->PA_x[vi] * fp440;
LIBINT2_REALTYPE fp423;
fp423 = fp425 - fp424;
LIBINT2_REALTYPE fp420;
fp420 = fp423 + fp421;
LIBINT2_REALTYPE fp373;
fp373 = inteval->PB_z[vi] * fp420;
LIBINT2_REALTYPE fp372;
fp372 = fp373 - fp375;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_ket[vi] * fp372;
LIBINT2_REALTYPE fp50;
fp50 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp117;
fp117 = inteval->PC_y[vi] * fp173;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PB_y[vi] * fp176;
LIBINT2_REALTYPE fp111;
fp111 = fp112 - fp117;
LIBINT2_REALTYPE fp70;
fp70 = inteval->two_alpha0_ket[vi] * fp111;
LIBINT2_REALTYPE fp49;
fp49 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp247;
fp247 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp246;
fp246 = fp247 - fp463;
LIBINT2_REALTYPE fp492;
fp492 = inteval->PC_y[vi] * fp246;
LIBINT2_REALTYPE fp325;
fp325 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp324;
fp324 = fp325 - fp466;
LIBINT2_REALTYPE fp493;
fp493 = inteval->PA_y[vi] * fp324;
LIBINT2_REALTYPE fp491;
fp491 = fp493 - fp492;
LIBINT2_REALTYPE fp490;
fp490 = fp491 + fp495;
LIBINT2_REALTYPE fp506;
fp506 = inteval->PC_y[vi] * fp324;
LIBINT2_REALTYPE fp327;
fp327 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp326;
fp326 = fp327 - fp469;
LIBINT2_REALTYPE fp507;
fp507 = inteval->PA_y[vi] * fp326;
LIBINT2_REALTYPE fp505;
fp505 = fp507 - fp506;
LIBINT2_REALTYPE fp504;
fp504 = fp505 + fp509;
LIBINT2_REALTYPE fp127;
fp127 = fp504 - fp490;
LIBINT2_REALTYPE fp126;
fp126 = fp525 * fp127;
LIBINT2_REALTYPE fp241;
fp241 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp240;
fp240 = fp241 - fp451;
LIBINT2_REALTYPE fp520;
fp520 = inteval->PC_y[vi] * fp240;
LIBINT2_REALTYPE fp521;
fp521 = inteval->PA_y[vi] * fp246;
LIBINT2_REALTYPE fp519;
fp519 = fp521 - fp520;
LIBINT2_REALTYPE fp518;
fp518 = fp519 + fp523;
LIBINT2_REALTYPE fp530;
fp530 = inteval->PC_z[vi] * fp518;
LIBINT2_REALTYPE fp531;
fp531 = inteval->PA_z[vi] * fp490;
LIBINT2_REALTYPE fp529;
fp529 = fp531 - fp530;
LIBINT2_REALTYPE fp129;
fp129 = inteval->PC_z[vi] * fp529;
LIBINT2_REALTYPE fp121;
fp121 = inteval->PC_z[vi] * fp490;
LIBINT2_REALTYPE fp122;
fp122 = inteval->PA_z[vi] * fp504;
LIBINT2_REALTYPE fp120;
fp120 = fp122 - fp121;
LIBINT2_REALTYPE fp130;
fp130 = inteval->PA_z[vi] * fp120;
LIBINT2_REALTYPE fp128;
fp128 = fp130 - fp129;
LIBINT2_REALTYPE fp125;
fp125 = fp128 + fp126;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_ket[vi] * fp125;
LIBINT2_REALTYPE fp48;
fp48 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp558;
fp558 = inteval->PB_y[vi] * fp348;
LIBINT2_REALTYPE fp556;
fp556 = fp558 - fp557;
LIBINT2_REALTYPE fp553;
fp553 = fp556 + fp554;
LIBINT2_REALTYPE fp143;
fp143 = inteval->PC_z[vi] * fp553;
LIBINT2_REALTYPE fp250;
fp250 = inteval->PB_y[vi] * fp357;
LIBINT2_REALTYPE fp249;
fp249 = fp250 - fp258;
LIBINT2_REALTYPE fp248;
fp248 = fp249 + fp255;
LIBINT2_REALTYPE fp144;
fp144 = inteval->PA_z[vi] * fp248;
LIBINT2_REALTYPE fp142;
fp142 = fp144 - fp143;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_ket[vi] * fp142;
LIBINT2_REALTYPE fp47;
fp47 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp157;
fp157 = fp436 * fp158;
LIBINT2_REALTYPE fp160;
fp160 = inteval->PC_y[vi] * fp251;
LIBINT2_REALTYPE fp155;
fp155 = inteval->PB_y[vi] * fp254;
LIBINT2_REALTYPE fp154;
fp154 = fp155 - fp160;
LIBINT2_REALTYPE fp153;
fp153 = fp154 + fp157;
LIBINT2_REALTYPE fp73;
fp73 = inteval->two_alpha0_ket[vi] * fp153;
LIBINT2_REALTYPE fp46;
fp46 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp484;
fp484 = inteval->PC_y[vi] * fp193;
LIBINT2_REALTYPE fp485;
fp485 = inteval->PB_y[vi] * fp291;
LIBINT2_REALTYPE fp483;
fp483 = fp485 - fp484;
LIBINT2_REALTYPE fp208;
fp208 = inteval->PC_x[vi] * fp483;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PC_y[vi] * fp291;
LIBINT2_REALTYPE fp76;
fp76 = inteval->PB_y[vi] * fp299;
LIBINT2_REALTYPE fp74;
fp74 = fp76 - fp75;
LIBINT2_REALTYPE fp209;
fp209 = inteval->PA_x[vi] * fp74;
LIBINT2_REALTYPE fp207;
fp207 = fp209 - fp208;
LIBINT2_REALTYPE fp77;
fp77 = inteval->two_alpha0_ket[vi] * fp207;
LIBINT2_REALTYPE fp45;
fp45 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp551;
fp551 = inteval->PC_x[vi] * fp518;
LIBINT2_REALTYPE fp552;
fp552 = inteval->PA_x[vi] * fp490;
LIBINT2_REALTYPE fp550;
fp550 = fp552 - fp551;
LIBINT2_REALTYPE fp231;
fp231 = inteval->PC_z[vi] * fp550;
LIBINT2_REALTYPE fp220;
fp220 = inteval->PC_x[vi] * fp490;
LIBINT2_REALTYPE fp221;
fp221 = inteval->PA_x[vi] * fp504;
LIBINT2_REALTYPE fp219;
fp219 = fp221 - fp220;
LIBINT2_REALTYPE fp232;
fp232 = inteval->PA_z[vi] * fp219;
LIBINT2_REALTYPE fp230;
fp230 = fp232 - fp231;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_ket[vi] * fp230;
LIBINT2_REALTYPE fp44;
fp44 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp263;
fp263 = inteval->PC_x[vi] * fp553;
LIBINT2_REALTYPE fp264;
fp264 = inteval->PA_x[vi] * fp248;
LIBINT2_REALTYPE fp262;
fp262 = fp264 - fp263;
LIBINT2_REALTYPE fp79;
fp79 = inteval->two_alpha0_ket[vi] * fp262;
LIBINT2_REALTYPE fp43;
fp43 = fp79;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp569;
fp569 = inteval->PC_y[vi] * fp404;
LIBINT2_REALTYPE fp570;
fp570 = inteval->PB_y[vi] * fp429;
LIBINT2_REALTYPE fp568;
fp568 = fp570 - fp569;
LIBINT2_REALTYPE fp310;
fp310 = inteval->PC_z[vi] * fp568;
LIBINT2_REALTYPE fp386;
fp386 = inteval->PC_y[vi] * fp429;
LIBINT2_REALTYPE fp332;
fp332 = inteval->PB_y[vi] * fp440;
LIBINT2_REALTYPE fp331;
fp331 = fp332 - fp386;
LIBINT2_REALTYPE fp311;
fp311 = inteval->PA_z[vi] * fp331;
LIBINT2_REALTYPE fp309;
fp309 = fp311 - fp310;
LIBINT2_REALTYPE fp80;
fp80 = inteval->two_alpha0_ket[vi] * fp309;
LIBINT2_REALTYPE fp42;
fp42 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp346;
fp346 = inteval->PC_y[vi] * fp568;
LIBINT2_REALTYPE fp347;
fp347 = inteval->PA_y[vi] * fp331;
LIBINT2_REALTYPE fp345;
fp345 = fp347 - fp346;
LIBINT2_REALTYPE fp344;
fp344 = fp345 + fp353;
LIBINT2_REALTYPE fp81;
fp81 = inteval->two_alpha0_ket[vi] * fp344;
LIBINT2_REALTYPE fp41;
fp41 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp394;
fp394 = inteval->PC_y[vi] * fp417;
LIBINT2_REALTYPE fp392;
fp392 = inteval->PB_y[vi] * fp420;
LIBINT2_REALTYPE fp391;
fp391 = fp392 - fp394;
LIBINT2_REALTYPE fp82;
fp82 = inteval->two_alpha0_ket[vi] * fp391;
LIBINT2_REALTYPE fp40;
fp40 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp188;
fp188 = inteval->PC_x[vi] * fp173;
LIBINT2_REALTYPE fp183;
fp183 = inteval->PB_x[vi] * fp176;
LIBINT2_REALTYPE fp182;
fp182 = fp183 - fp188;
LIBINT2_REALTYPE fp83;
fp83 = inteval->two_alpha0_ket[vi] * fp182;
LIBINT2_REALTYPE fp39;
fp39 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp542;
fp542 = inteval->PC_x[vi] * fp193;
LIBINT2_REALTYPE fp543;
fp543 = inteval->PB_x[vi] * fp291;
LIBINT2_REALTYPE fp541;
fp541 = fp543 - fp542;
LIBINT2_REALTYPE fp205;
fp205 = inteval->PC_y[vi] * fp541;
LIBINT2_REALTYPE fp281;
fp281 = inteval->PC_x[vi] * fp291;
LIBINT2_REALTYPE fp200;
fp200 = inteval->PB_x[vi] * fp299;
LIBINT2_REALTYPE fp199;
fp199 = fp200 - fp281;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PA_y[vi] * fp199;
LIBINT2_REALTYPE fp204;
fp204 = fp206 - fp205;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_ket[vi] * fp204;
LIBINT2_REALTYPE fp38;
fp38 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp548;
fp548 = inteval->PC_x[vi] * fp242;
LIBINT2_REALTYPE fp549;
fp549 = inteval->PB_x[vi] * fp348;
LIBINT2_REALTYPE fp547;
fp547 = fp549 - fp548;
LIBINT2_REALTYPE fp228;
fp228 = inteval->PC_z[vi] * fp547;
LIBINT2_REALTYPE fp336;
fp336 = inteval->PC_x[vi] * fp348;
LIBINT2_REALTYPE fp218;
fp218 = inteval->PB_x[vi] * fp357;
LIBINT2_REALTYPE fp217;
fp217 = fp218 - fp336;
LIBINT2_REALTYPE fp229;
fp229 = inteval->PA_z[vi] * fp217;
LIBINT2_REALTYPE fp227;
fp227 = fp229 - fp228;
LIBINT2_REALTYPE fp85;
fp85 = inteval->two_alpha0_ket[vi] * fp227;
LIBINT2_REALTYPE fp37;
fp37 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp266;
fp266 = inteval->PC_x[vi] * fp251;
LIBINT2_REALTYPE fp261;
fp261 = inteval->PB_x[vi] * fp254;
LIBINT2_REALTYPE fp260;
fp260 = fp261 - fp266;
LIBINT2_REALTYPE fp86;
fp86 = inteval->two_alpha0_ket[vi] * fp260;
LIBINT2_REALTYPE fp36;
fp36 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp409;
fp409 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp408;
fp408 = fp409 - fp475;
LIBINT2_REALTYPE fp498;
fp498 = inteval->PC_x[vi] * fp408;
LIBINT2_REALTYPE fp411;
fp411 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp410;
fp410 = fp411 - fp478;
LIBINT2_REALTYPE fp499;
fp499 = inteval->PA_x[vi] * fp410;
LIBINT2_REALTYPE fp497;
fp497 = fp499 - fp498;
LIBINT2_REALTYPE fp494;
fp494 = fp497 + fp495;
LIBINT2_REALTYPE fp512;
fp512 = inteval->PC_x[vi] * fp410;
LIBINT2_REALTYPE fp413;
fp413 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp412;
fp412 = fp413 - fp481;
LIBINT2_REALTYPE fp513;
fp513 = inteval->PA_x[vi] * fp412;
LIBINT2_REALTYPE fp511;
fp511 = fp513 - fp512;
LIBINT2_REALTYPE fp508;
fp508 = fp511 + fp509;
LIBINT2_REALTYPE fp340;
fp340 = fp508 - fp494;
LIBINT2_REALTYPE fp339;
fp339 = fp525 * fp340;
LIBINT2_REALTYPE fp403;
fp403 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp402;
fp402 = fp403 - fp472;
LIBINT2_REALTYPE fp527;
fp527 = inteval->PC_x[vi] * fp402;
LIBINT2_REALTYPE fp528;
fp528 = inteval->PA_x[vi] * fp408;
LIBINT2_REALTYPE fp526;
fp526 = fp528 - fp527;
LIBINT2_REALTYPE fp522;
fp522 = fp526 + fp523;
LIBINT2_REALTYPE fp560;
fp560 = inteval->PC_z[vi] * fp522;
LIBINT2_REALTYPE fp561;
fp561 = inteval->PA_z[vi] * fp494;
LIBINT2_REALTYPE fp559;
fp559 = fp561 - fp560;
LIBINT2_REALTYPE fp285;
fp285 = inteval->PC_z[vi] * fp559;
LIBINT2_REALTYPE fp274;
fp274 = inteval->PC_z[vi] * fp494;
LIBINT2_REALTYPE fp275;
fp275 = inteval->PA_z[vi] * fp508;
LIBINT2_REALTYPE fp273;
fp273 = fp275 - fp274;
LIBINT2_REALTYPE fp286;
fp286 = inteval->PA_z[vi] * fp273;
LIBINT2_REALTYPE fp284;
fp284 = fp286 - fp285;
LIBINT2_REALTYPE fp283;
fp283 = fp284 + fp339;
LIBINT2_REALTYPE fp87;
fp87 = inteval->two_alpha0_ket[vi] * fp283;
LIBINT2_REALTYPE fp35;
fp35 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp566;
fp566 = inteval->PC_y[vi] * fp522;
LIBINT2_REALTYPE fp567;
fp567 = inteval->PA_y[vi] * fp494;
LIBINT2_REALTYPE fp565;
fp565 = fp567 - fp566;
LIBINT2_REALTYPE fp307;
fp307 = inteval->PC_z[vi] * fp565;
LIBINT2_REALTYPE fp329;
fp329 = inteval->PC_y[vi] * fp494;
LIBINT2_REALTYPE fp330;
fp330 = inteval->PA_y[vi] * fp508;
LIBINT2_REALTYPE fp328;
fp328 = fp330 - fp329;
LIBINT2_REALTYPE fp308;
fp308 = inteval->PA_z[vi] * fp328;
LIBINT2_REALTYPE fp306;
fp306 = fp308 - fp307;
LIBINT2_REALTYPE fp88;
fp88 = inteval->two_alpha0_ket[vi] * fp306;
LIBINT2_REALTYPE fp34;
fp34 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp342;
fp342 = inteval->PC_y[vi] * fp565;
LIBINT2_REALTYPE fp343;
fp343 = inteval->PA_y[vi] * fp328;
LIBINT2_REALTYPE fp341;
fp341 = fp343 - fp342;
LIBINT2_REALTYPE fp338;
fp338 = fp341 + fp339;
LIBINT2_REALTYPE fp89;
fp89 = inteval->two_alpha0_ket[vi] * fp338;
LIBINT2_REALTYPE fp33;
fp33 = fp89;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp577;
fp577 = inteval->PB_x[vi] * fp429;
LIBINT2_REALTYPE fp575;
fp575 = fp577 - fp576;
LIBINT2_REALTYPE fp571;
fp571 = fp575 + fp572;
LIBINT2_REALTYPE fp370;
fp370 = inteval->PC_z[vi] * fp571;
LIBINT2_REALTYPE fp416;
fp416 = inteval->PB_x[vi] * fp440;
LIBINT2_REALTYPE fp415;
fp415 = fp416 - fp424;
LIBINT2_REALTYPE fp414;
fp414 = fp415 + fp421;
LIBINT2_REALTYPE fp371;
fp371 = inteval->PA_z[vi] * fp414;
LIBINT2_REALTYPE fp369;
fp369 = fp371 - fp370;
LIBINT2_REALTYPE fp90;
fp90 = inteval->two_alpha0_ket[vi] * fp369;
LIBINT2_REALTYPE fp32;
fp32 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp389;
fp389 = inteval->PC_y[vi] * fp571;
LIBINT2_REALTYPE fp390;
fp390 = inteval->PA_y[vi] * fp414;
LIBINT2_REALTYPE fp388;
fp388 = fp390 - fp389;
LIBINT2_REALTYPE fp91;
fp91 = inteval->two_alpha0_ket[vi] * fp388;
LIBINT2_REALTYPE fp31;
fp31 = fp91;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp434;
fp434 = fp436 * fp435;
LIBINT2_REALTYPE fp438;
fp438 = inteval->PC_x[vi] * fp417;
LIBINT2_REALTYPE fp428;
fp428 = inteval->PB_x[vi] * fp420;
LIBINT2_REALTYPE fp427;
fp427 = fp428 - fp438;
LIBINT2_REALTYPE fp426;
fp426 = fp427 + fp434;
LIBINT2_REALTYPE fp92;
fp92 = inteval->two_alpha0_ket[vi] * fp426;
LIBINT2_REALTYPE fp30;
fp30 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp103;
fp103 = 3.0000000000000000e+00 * fp299;
LIBINT2_REALTYPE fp101;
fp101 = inteval->PA_z[vi] * fp176;
LIBINT2_REALTYPE fp99;
fp99 = fp101 - fp100;
LIBINT2_REALTYPE fp96;
fp96 = fp99 + fp97;
LIBINT2_REALTYPE fp104;
fp104 = inteval->two_alpha0_bra[vi] * fp96;
LIBINT2_REALTYPE fp102;
fp102 = fp104 - fp103;
LIBINT2_REALTYPE fp29;
fp29 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp319;
fp319 = inteval->PC_z[vi] * fp465;
LIBINT2_REALTYPE fp320;
fp320 = inteval->PA_z[vi] * fp468;
LIBINT2_REALTYPE fp318;
fp318 = fp320 - fp319;
LIBINT2_REALTYPE fp151;
fp151 = 2.0000000000000000e+00 * fp318;
LIBINT2_REALTYPE fp118;
fp118 = inteval->PA_y[vi] * fp176;
LIBINT2_REALTYPE fp116;
fp116 = fp118 - fp117;
LIBINT2_REALTYPE fp119;
fp119 = inteval->two_alpha0_bra[vi] * fp116;
LIBINT2_REALTYPE fp105;
fp105 = fp119 - fp151;
LIBINT2_REALTYPE fp28;
fp28 = fp105;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp362;
fp362 = 1.0000000000000000e+00 * fp357;
LIBINT2_REALTYPE fp223;
fp223 = inteval->PA_z[vi] * fp348;
LIBINT2_REALTYPE fp222;
fp222 = fp223 - fp533;
LIBINT2_REALTYPE fp138;
fp138 = inteval->PC_z[vi] * fp222;
LIBINT2_REALTYPE fp226;
fp226 = inteval->PA_z[vi] * fp357;
LIBINT2_REALTYPE fp224;
fp224 = fp226 - fp225;
LIBINT2_REALTYPE fp139;
fp139 = inteval->PA_z[vi] * fp224;
LIBINT2_REALTYPE fp137;
fp137 = fp139 - fp138;
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
LIBINT2_REALTYPE fp141;
fp141 = inteval->two_alpha0_bra[vi] * fp135;
LIBINT2_REALTYPE fp106;
fp106 = fp141 - fp362;
LIBINT2_REALTYPE fp27;
fp27 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp149;
fp149 = inteval->PA_z[vi] * fp254;
LIBINT2_REALTYPE fp147;
fp147 = fp149 - fp148;
LIBINT2_REALTYPE fp152;
fp152 = inteval->two_alpha0_bra[vi] * fp147;
LIBINT2_REALTYPE fp26;
fp26 = fp152;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp378;
fp378 = inteval->PC_z[vi] * fp477;
LIBINT2_REALTYPE fp379;
fp379 = inteval->PA_z[vi] * fp480;
LIBINT2_REALTYPE fp377;
fp377 = fp379 - fp378;
LIBINT2_REALTYPE fp381;
fp381 = 2.0000000000000000e+00 * fp377;
LIBINT2_REALTYPE fp189;
fp189 = inteval->PA_x[vi] * fp176;
LIBINT2_REALTYPE fp187;
fp187 = fp189 - fp188;
LIBINT2_REALTYPE fp190;
fp190 = inteval->two_alpha0_bra[vi] * fp187;
LIBINT2_REALTYPE fp107;
fp107 = fp190 - fp381;
LIBINT2_REALTYPE fp25;
fp25 = fp107;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp279;
fp279 = inteval->PA_x[vi] * fp291;
LIBINT2_REALTYPE fp278;
fp278 = fp279 - fp542;
LIBINT2_REALTYPE fp214;
fp214 = inteval->PC_y[vi] * fp278;
LIBINT2_REALTYPE fp282;
fp282 = inteval->PA_x[vi] * fp299;
LIBINT2_REALTYPE fp280;
fp280 = fp282 - fp281;
LIBINT2_REALTYPE fp215;
fp215 = inteval->PA_y[vi] * fp280;
LIBINT2_REALTYPE fp213;
fp213 = fp215 - fp214;
LIBINT2_REALTYPE fp216;
fp216 = inteval->two_alpha0_bra[vi] * fp213;
LIBINT2_REALTYPE fp397;
fp397 = inteval->PC_y[vi] * fp477;
LIBINT2_REALTYPE fp398;
fp398 = inteval->PA_y[vi] * fp480;
LIBINT2_REALTYPE fp396;
fp396 = fp398 - fp397;
LIBINT2_REALTYPE fp109;
fp109 = 1.0000000000000000e+00 * fp396;
LIBINT2_REALTYPE fp108;
fp108 = fp216 - fp109;
LIBINT2_REALTYPE fp24;
fp24 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp334;
fp334 = inteval->PA_x[vi] * fp348;
LIBINT2_REALTYPE fp333;
fp333 = fp334 - fp548;
LIBINT2_REALTYPE fp237;
fp237 = inteval->PC_z[vi] * fp333;
LIBINT2_REALTYPE fp337;
fp337 = inteval->PA_x[vi] * fp357;
LIBINT2_REALTYPE fp335;
fp335 = fp337 - fp336;
LIBINT2_REALTYPE fp238;
fp238 = inteval->PA_z[vi] * fp335;
LIBINT2_REALTYPE fp236;
fp236 = fp238 - fp237;
LIBINT2_REALTYPE fp239;
fp239 = inteval->two_alpha0_bra[vi] * fp236;
LIBINT2_REALTYPE fp23;
fp23 = fp239;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp169;
fp169 = 1.0000000000000000e+00 * fp440;
LIBINT2_REALTYPE fp365;
fp365 = inteval->PA_z[vi] * fp429;
LIBINT2_REALTYPE fp364;
fp364 = fp365 - fp563;
LIBINT2_REALTYPE fp297;
fp297 = inteval->PC_z[vi] * fp364;
LIBINT2_REALTYPE fp368;
fp368 = inteval->PA_z[vi] * fp440;
LIBINT2_REALTYPE fp366;
fp366 = fp368 - fp367;
LIBINT2_REALTYPE fp298;
fp298 = inteval->PA_z[vi] * fp366;
LIBINT2_REALTYPE fp296;
fp296 = fp298 - fp297;
LIBINT2_REALTYPE fp295;
fp295 = fp296 + fp353;
LIBINT2_REALTYPE fp305;
fp305 = inteval->two_alpha0_bra[vi] * fp295;
LIBINT2_REALTYPE fp110;
fp110 = fp305 - fp169;
LIBINT2_REALTYPE fp22;
fp22 = fp110;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp384;
fp384 = inteval->PA_y[vi] * fp429;
LIBINT2_REALTYPE fp383;
fp383 = fp384 - fp569;
LIBINT2_REALTYPE fp316;
fp316 = inteval->PC_z[vi] * fp383;
LIBINT2_REALTYPE fp387;
fp387 = inteval->PA_y[vi] * fp440;
LIBINT2_REALTYPE fp385;
fp385 = fp387 - fp386;
LIBINT2_REALTYPE fp317;
fp317 = inteval->PA_z[vi] * fp385;
LIBINT2_REALTYPE fp315;
fp315 = fp317 - fp316;
LIBINT2_REALTYPE fp323;
fp323 = inteval->two_alpha0_bra[vi] * fp315;
LIBINT2_REALTYPE fp21;
fp21 = fp323;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp376;
fp376 = inteval->PA_z[vi] * fp420;
LIBINT2_REALTYPE fp374;
fp374 = fp376 - fp375;
LIBINT2_REALTYPE fp382;
fp382 = inteval->two_alpha0_bra[vi] * fp374;
LIBINT2_REALTYPE fp20;
fp20 = fp382;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp19;
fp19 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp304;
fp304 = 1.0000000000000000e+00 * fp299;
LIBINT2_REALTYPE fp140;
fp140 = fp141 - fp304;
LIBINT2_REALTYPE fp18;
fp18 = fp140;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp150;
fp150 = fp152 - fp151;
LIBINT2_REALTYPE fp17;
fp17 = fp150;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp163;
fp163 = 3.0000000000000000e+00 * fp357;
LIBINT2_REALTYPE fp161;
fp161 = inteval->PA_y[vi] * fp254;
LIBINT2_REALTYPE fp159;
fp159 = fp161 - fp160;
LIBINT2_REALTYPE fp156;
fp156 = fp159 + fp157;
LIBINT2_REALTYPE fp164;
fp164 = inteval->two_alpha0_bra[vi] * fp156;
LIBINT2_REALTYPE fp162;
fp162 = fp164 - fp163;
LIBINT2_REALTYPE fp16;
fp16 = fp162;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp15;
fp15 = fp216;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp166;
fp166 = 1.0000000000000000e+00 * fp377;
LIBINT2_REALTYPE fp165;
fp165 = fp239 - fp166;
LIBINT2_REALTYPE fp14;
fp14 = fp165;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp400;
fp400 = 2.0000000000000000e+00 * fp396;
LIBINT2_REALTYPE fp267;
fp267 = inteval->PA_x[vi] * fp254;
LIBINT2_REALTYPE fp265;
fp265 = fp267 - fp266;
LIBINT2_REALTYPE fp268;
fp268 = inteval->two_alpha0_bra[vi] * fp265;
LIBINT2_REALTYPE fp167;
fp167 = fp268 - fp400;
LIBINT2_REALTYPE fp13;
fp13 = fp167;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp12;
fp12 = fp323;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp355;
fp355 = inteval->PC_y[vi] * fp383;
LIBINT2_REALTYPE fp356;
fp356 = inteval->PA_y[vi] * fp385;
LIBINT2_REALTYPE fp354;
fp354 = fp356 - fp355;
LIBINT2_REALTYPE fp352;
fp352 = fp354 + fp353;
LIBINT2_REALTYPE fp363;
fp363 = inteval->two_alpha0_bra[vi] * fp352;
LIBINT2_REALTYPE fp168;
fp168 = fp363 - fp169;
LIBINT2_REALTYPE fp11;
fp11 = fp168;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp395;
fp395 = inteval->PA_y[vi] * fp420;
LIBINT2_REALTYPE fp393;
fp393 = fp395 - fp394;
LIBINT2_REALTYPE fp401;
fp401 = inteval->two_alpha0_bra[vi] * fp393;
LIBINT2_REALTYPE fp10;
fp10 = fp401;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp9;
fp9 = fp190;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp8;
fp8 = fp216;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp7;
fp7 = fp239;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp6;
fp6 = fp268;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp303;
fp303 = fp305 - fp304;
LIBINT2_REALTYPE fp5;
fp5 = fp303;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp322;
fp322 = 1.0000000000000000e+00 * fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp323 - fp322;
LIBINT2_REALTYPE fp4;
fp4 = fp321;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp361;
fp361 = fp363 - fp362;
LIBINT2_REALTYPE fp3;
fp3 = fp361;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp380;
fp380 = fp382 - fp381;
LIBINT2_REALTYPE fp2;
fp2 = fp380;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp399;
fp399 = fp401 - fp400;
LIBINT2_REALTYPE fp1;
fp1 = fp399;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp445;
fp445 = 3.0000000000000000e+00 * fp440;
LIBINT2_REALTYPE fp439;
fp439 = inteval->PA_x[vi] * fp420;
LIBINT2_REALTYPE fp437;
fp437 = fp439 - fp438;
LIBINT2_REALTYPE fp433;
fp433 = fp437 + fp434;
LIBINT2_REALTYPE fp446;
fp446 = inteval->two_alpha0_bra[vi] * fp433;
LIBINT2_REALTYPE fp444;
fp444 = fp446 - fp445;
LIBINT2_REALTYPE fp0;
fp0 = fp444;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 578 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
