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
void CR_aB_i010__0___Kinetic_s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp38;
fp38 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp493;
fp493 = src0[((hsi*18+10)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp492;
fp492 = fp493 * fp36;
LIBINT2_REALTYPE fp71;
fp71 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp70 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp496;
fp496 = src0[((hsi*18+10)*1+lsi)*1] * fp69;
LIBINT2_REALTYPE fp495;
fp495 = fp496 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 2.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp112;
fp112 = fp113 * src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp115;
fp115 = fp116 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp114 - fp112;
LIBINT2_REALTYPE fp498;
fp498 = fp111 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp497;
fp497 = fp498 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp494;
fp494 = fp497 + fp495;
LIBINT2_REALTYPE fp491;
fp491 = fp494 + fp492;
LIBINT2_REALTYPE fp582;
fp582 = 1.0000000000000000e+00 * fp491;
LIBINT2_REALTYPE fp501;
fp501 = src0[((hsi*18+10)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp500;
fp500 = fp501 * fp36;
LIBINT2_REALTYPE fp74;
fp74 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp75 - fp73;
LIBINT2_REALTYPE fp504;
fp504 = src0[((hsi*18+10)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp503;
fp503 = fp504 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp506;
fp506 = fp111 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp505;
fp505 = fp506 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp502;
fp502 = fp505 + fp503;
LIBINT2_REALTYPE fp499;
fp499 = fp502 + fp500;
LIBINT2_REALTYPE fp583;
fp583 = inteval->two_alpha0_bra[vi] * fp499;
LIBINT2_REALTYPE fp581;
fp581 = fp583 - fp582;
target[((hsi*28+1)*1+lsi)*1] = fp581;
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp34 * src2[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp33 - fp31;
LIBINT2_REALTYPE fp485;
fp485 = src0[((hsi*18+10)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp484;
fp484 = fp485 * fp30;
LIBINT2_REALTYPE fp80;
fp80 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp82 * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp81 - fp79;
LIBINT2_REALTYPE fp488;
fp488 = src0[((hsi*18+10)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp487;
fp487 = fp488 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp490;
fp490 = fp111 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp489;
fp489 = fp490 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp486;
fp486 = fp489 + fp487;
LIBINT2_REALTYPE fp483;
fp483 = fp486 + fp484;
LIBINT2_REALTYPE fp580;
fp580 = inteval->two_alpha0_bra[vi] * fp483;
target[((hsi*28+2)*1+lsi)*1] = fp580;
LIBINT2_REALTYPE fp469;
fp469 = src0[((hsi*18+8)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp468;
fp468 = fp469 * fp36;
LIBINT2_REALTYPE fp472;
fp472 = src0[((hsi*18+8)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp471;
fp471 = fp472 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 2.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp109;
fp109 = fp110 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp109 * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp108 - fp106;
LIBINT2_REALTYPE fp474;
fp474 = fp105 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp473;
fp473 = fp474 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp470;
fp470 = fp473 + fp471;
LIBINT2_REALTYPE fp467;
fp467 = fp470 + fp468;
LIBINT2_REALTYPE fp578;
fp578 = 2.0000000000000000e+00 * fp467;
LIBINT2_REALTYPE fp477;
fp477 = src0[((hsi*18+8)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp476;
fp476 = fp477 * fp36;
LIBINT2_REALTYPE fp65;
fp65 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp66;
fp66 = fp67 * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp66 - fp64;
LIBINT2_REALTYPE fp480;
fp480 = src0[((hsi*18+8)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp479;
fp479 = fp480 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp482;
fp482 = fp105 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp481;
fp481 = fp482 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp478;
fp478 = fp481 + fp479;
LIBINT2_REALTYPE fp475;
fp475 = fp478 + fp476;
LIBINT2_REALTYPE fp579;
fp579 = inteval->two_alpha0_bra[vi] * fp475;
LIBINT2_REALTYPE fp577;
fp577 = fp579 - fp578;
target[((hsi*28+3)*1+lsi)*1] = fp577;
LIBINT2_REALTYPE fp453;
fp453 = src0[((hsi*18+8)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp452;
fp452 = fp453 * fp30;
LIBINT2_REALTYPE fp456;
fp456 = src0[((hsi*18+8)*1+lsi)*1] * fp69;
LIBINT2_REALTYPE fp455;
fp455 = fp456 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp458;
fp458 = fp105 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp457;
fp457 = fp458 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp454;
fp454 = fp457 + fp455;
LIBINT2_REALTYPE fp451;
fp451 = fp454 + fp452;
LIBINT2_REALTYPE fp575;
fp575 = 1.0000000000000000e+00 * fp451;
LIBINT2_REALTYPE fp461;
fp461 = src0[((hsi*18+8)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp460;
fp460 = fp461 * fp30;
LIBINT2_REALTYPE fp464;
fp464 = src0[((hsi*18+8)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp463;
fp463 = fp464 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp466;
fp466 = fp105 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp465;
fp465 = fp466 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp462;
fp462 = fp465 + fp463;
LIBINT2_REALTYPE fp459;
fp459 = fp462 + fp460;
LIBINT2_REALTYPE fp576;
fp576 = inteval->two_alpha0_bra[vi] * fp459;
LIBINT2_REALTYPE fp574;
fp574 = fp576 - fp575;
target[((hsi*28+4)*1+lsi)*1] = fp574;
LIBINT2_REALTYPE fp26;
fp26 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp27;
fp27 = fp28 * src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 - fp25;
LIBINT2_REALTYPE fp445;
fp445 = src0[((hsi*18+8)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp24;
LIBINT2_REALTYPE fp448;
fp448 = src0[((hsi*18+8)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp447;
fp447 = fp448 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp450;
fp450 = fp105 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp449;
fp449 = fp450 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp446;
fp446 = fp449 + fp447;
LIBINT2_REALTYPE fp443;
fp443 = fp446 + fp444;
LIBINT2_REALTYPE fp573;
fp573 = inteval->two_alpha0_bra[vi] * fp443;
target[((hsi*28+5)*1+lsi)*1] = fp573;
LIBINT2_REALTYPE fp429;
fp429 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp36;
LIBINT2_REALTYPE fp432;
fp432 = src0[((hsi*18+6)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp431;
fp431 = fp432 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp102;
fp102 = fp103 * src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp102 - fp100;
LIBINT2_REALTYPE fp434;
fp434 = fp99 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp433;
fp433 = fp434 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp430;
fp430 = fp433 + fp431;
LIBINT2_REALTYPE fp427;
fp427 = fp430 + fp428;
LIBINT2_REALTYPE fp571;
fp571 = 3.0000000000000000e+00 * fp427;
LIBINT2_REALTYPE fp437;
fp437 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp36;
LIBINT2_REALTYPE fp59;
fp59 = 2.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp60 - fp58;
LIBINT2_REALTYPE fp440;
fp440 = src0[((hsi*18+6)*1+lsi)*1] * fp57;
LIBINT2_REALTYPE fp439;
fp439 = fp440 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp442;
fp442 = fp99 * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp441;
fp441 = fp442 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp438;
fp438 = fp441 + fp439;
LIBINT2_REALTYPE fp435;
fp435 = fp438 + fp436;
LIBINT2_REALTYPE fp572;
fp572 = inteval->two_alpha0_bra[vi] * fp435;
LIBINT2_REALTYPE fp570;
fp570 = fp572 - fp571;
target[((hsi*28+6)*1+lsi)*1] = fp570;
LIBINT2_REALTYPE fp413;
fp413 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp30;
LIBINT2_REALTYPE fp416;
fp416 = src0[((hsi*18+6)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp415;
fp415 = fp416 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp418;
fp418 = fp99 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp417;
fp417 = fp418 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
fp414 = fp417 + fp415;
LIBINT2_REALTYPE fp411;
fp411 = fp414 + fp412;
LIBINT2_REALTYPE fp568;
fp568 = 2.0000000000000000e+00 * fp411;
LIBINT2_REALTYPE fp421;
fp421 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp30;
LIBINT2_REALTYPE fp424;
fp424 = src0[((hsi*18+6)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp423;
fp423 = fp424 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp426;
fp426 = fp99 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp425;
fp425 = fp426 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp422;
fp422 = fp425 + fp423;
LIBINT2_REALTYPE fp419;
fp419 = fp422 + fp420;
LIBINT2_REALTYPE fp569;
fp569 = inteval->two_alpha0_bra[vi] * fp419;
LIBINT2_REALTYPE fp567;
fp567 = fp569 - fp568;
target[((hsi*28+7)*1+lsi)*1] = fp567;
LIBINT2_REALTYPE fp397;
fp397 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp24;
LIBINT2_REALTYPE fp400;
fp400 = src0[((hsi*18+6)*1+lsi)*1] * fp69;
LIBINT2_REALTYPE fp399;
fp399 = fp400 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp402;
fp402 = fp99 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp401;
fp401 = fp402 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = fp401 + fp399;
LIBINT2_REALTYPE fp395;
fp395 = fp398 + fp396;
LIBINT2_REALTYPE fp565;
fp565 = 1.0000000000000000e+00 * fp395;
LIBINT2_REALTYPE fp405;
fp405 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp24;
LIBINT2_REALTYPE fp408;
fp408 = src0[((hsi*18+6)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp407;
fp407 = fp408 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp410;
fp410 = fp99 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp409;
fp409 = fp410 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp406;
fp406 = fp409 + fp407;
LIBINT2_REALTYPE fp403;
fp403 = fp406 + fp404;
LIBINT2_REALTYPE fp566;
fp566 = inteval->two_alpha0_bra[vi] * fp403;
LIBINT2_REALTYPE fp564;
fp564 = fp566 - fp565;
target[((hsi*28+8)*1+lsi)*1] = fp564;
LIBINT2_REALTYPE fp20;
fp20 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp21 - fp19;
LIBINT2_REALTYPE fp389;
fp389 = src0[((hsi*18+6)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp18;
LIBINT2_REALTYPE fp392;
fp392 = src0[((hsi*18+6)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp391;
fp391 = fp392 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp394;
fp394 = fp99 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp393;
fp393 = fp394 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp390;
fp390 = fp393 + fp391;
LIBINT2_REALTYPE fp387;
fp387 = fp390 + fp388;
LIBINT2_REALTYPE fp563;
fp563 = inteval->two_alpha0_bra[vi] * fp387;
target[((hsi*28+9)*1+lsi)*1] = fp563;
LIBINT2_REALTYPE fp373;
fp373 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp36;
LIBINT2_REALTYPE fp376;
fp376 = src0[((hsi*18+4)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp375;
fp375 = fp376 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp95 * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp97;
fp97 = fp98 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp96 - fp94;
LIBINT2_REALTYPE fp378;
fp378 = fp93 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
fp377 = fp378 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp374;
fp374 = fp377 + fp375;
LIBINT2_REALTYPE fp371;
fp371 = fp374 + fp372;
LIBINT2_REALTYPE fp561;
fp561 = 4.0000000000000000e+00 * fp371;
LIBINT2_REALTYPE fp381;
fp381 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp36;
LIBINT2_REALTYPE fp53;
fp53 = 2.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp53 * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp56 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp54 - fp52;
LIBINT2_REALTYPE fp384;
fp384 = src0[((hsi*18+4)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp383;
fp383 = fp384 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp386;
fp386 = fp93 * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = fp386 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp382;
fp382 = fp385 + fp383;
LIBINT2_REALTYPE fp379;
fp379 = fp382 + fp380;
LIBINT2_REALTYPE fp562;
fp562 = inteval->two_alpha0_bra[vi] * fp379;
LIBINT2_REALTYPE fp560;
fp560 = fp562 - fp561;
target[((hsi*28+10)*1+lsi)*1] = fp560;
LIBINT2_REALTYPE fp357;
fp357 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp30;
LIBINT2_REALTYPE fp360;
fp360 = src0[((hsi*18+4)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp362;
fp362 = fp93 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = fp362 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = fp361 + fp359;
LIBINT2_REALTYPE fp355;
fp355 = fp358 + fp356;
LIBINT2_REALTYPE fp558;
fp558 = 3.0000000000000000e+00 * fp355;
LIBINT2_REALTYPE fp365;
fp365 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp30;
LIBINT2_REALTYPE fp368;
fp368 = src0[((hsi*18+4)*1+lsi)*1] * fp57;
LIBINT2_REALTYPE fp367;
fp367 = fp368 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp370;
fp370 = fp93 * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = fp370 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
fp366 = fp369 + fp367;
LIBINT2_REALTYPE fp363;
fp363 = fp366 + fp364;
LIBINT2_REALTYPE fp559;
fp559 = inteval->two_alpha0_bra[vi] * fp363;
LIBINT2_REALTYPE fp557;
fp557 = fp559 - fp558;
target[((hsi*28+11)*1+lsi)*1] = fp557;
LIBINT2_REALTYPE fp341;
fp341 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp24;
LIBINT2_REALTYPE fp344;
fp344 = src0[((hsi*18+4)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp343;
fp343 = fp344 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = fp93 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp345;
fp345 = fp346 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = fp345 + fp343;
LIBINT2_REALTYPE fp339;
fp339 = fp342 + fp340;
LIBINT2_REALTYPE fp555;
fp555 = 2.0000000000000000e+00 * fp339;
LIBINT2_REALTYPE fp349;
fp349 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp24;
LIBINT2_REALTYPE fp352;
fp352 = src0[((hsi*18+4)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = fp93 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp353;
fp353 = fp354 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
fp350 = fp353 + fp351;
LIBINT2_REALTYPE fp347;
fp347 = fp350 + fp348;
LIBINT2_REALTYPE fp556;
fp556 = inteval->two_alpha0_bra[vi] * fp347;
LIBINT2_REALTYPE fp554;
fp554 = fp556 - fp555;
target[((hsi*28+12)*1+lsi)*1] = fp554;
LIBINT2_REALTYPE fp325;
fp325 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp18;
LIBINT2_REALTYPE fp328;
fp328 = src0[((hsi*18+4)*1+lsi)*1] * fp69;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = fp93 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = fp330 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp329 + fp327;
LIBINT2_REALTYPE fp323;
fp323 = fp326 + fp324;
LIBINT2_REALTYPE fp552;
fp552 = 1.0000000000000000e+00 * fp323;
LIBINT2_REALTYPE fp333;
fp333 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp18;
LIBINT2_REALTYPE fp336;
fp336 = src0[((hsi*18+4)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = fp93 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp337;
fp337 = fp338 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
fp334 = fp337 + fp335;
LIBINT2_REALTYPE fp331;
fp331 = fp334 + fp332;
LIBINT2_REALTYPE fp553;
fp553 = inteval->two_alpha0_bra[vi] * fp331;
LIBINT2_REALTYPE fp551;
fp551 = fp553 - fp552;
target[((hsi*28+13)*1+lsi)*1] = fp551;
LIBINT2_REALTYPE fp509;
fp509 = src0[((hsi*18+12)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp508;
fp508 = fp509 * fp36;
LIBINT2_REALTYPE fp512;
fp512 = src0[((hsi*18+12)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp511;
fp511 = fp512 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = 3.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp119 * src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp121;
fp121 = fp122 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp120 - fp118;
LIBINT2_REALTYPE fp514;
fp514 = fp117 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp513;
fp513 = fp514 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp510;
fp510 = fp513 + fp511;
LIBINT2_REALTYPE fp507;
fp507 = fp510 + fp508;
LIBINT2_REALTYPE fp584;
fp584 = inteval->two_alpha0_bra[vi] * fp507;
target[((hsi*28+0)*1+lsi)*1] = fp584;
LIBINT2_REALTYPE fp301;
fp301 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp36;
LIBINT2_REALTYPE fp304;
fp304 = src0[((hsi*18+2)*1+lsi)*1] * fp57;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp88;
fp88 = fp89 * src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp90;
fp90 = fp91 * src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp90 - fp88;
LIBINT2_REALTYPE fp306;
fp306 = fp87 * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = fp306 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = fp305 + fp303;
LIBINT2_REALTYPE fp299;
fp299 = fp302 + fp300;
LIBINT2_REALTYPE fp548;
fp548 = 5.0000000000000000e+00 * fp299;
LIBINT2_REALTYPE fp309;
fp309 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp36;
LIBINT2_REALTYPE fp47;
fp47 = 3.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp50 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp48;
fp48 = fp49 * src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp48 - fp46;
LIBINT2_REALTYPE fp312;
fp312 = src0[((hsi*18+2)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp314;
fp314 = fp87 * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp313;
fp313 = fp314 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = fp313 + fp311;
LIBINT2_REALTYPE fp307;
fp307 = fp310 + fp308;
LIBINT2_REALTYPE fp549;
fp549 = inteval->two_alpha0_bra[vi] * fp307;
LIBINT2_REALTYPE fp547;
fp547 = fp549 - fp548;
target[((hsi*28+15)*1+lsi)*1] = fp547;
LIBINT2_REALTYPE fp285;
fp285 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp30;
LIBINT2_REALTYPE fp288;
fp288 = src0[((hsi*18+2)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp87 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = fp290 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp289 + fp287;
LIBINT2_REALTYPE fp283;
fp283 = fp286 + fp284;
LIBINT2_REALTYPE fp545;
fp545 = 4.0000000000000000e+00 * fp283;
LIBINT2_REALTYPE fp293;
fp293 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp30;
LIBINT2_REALTYPE fp296;
fp296 = src0[((hsi*18+2)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = fp87 * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp298 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = fp297 + fp295;
LIBINT2_REALTYPE fp291;
fp291 = fp294 + fp292;
LIBINT2_REALTYPE fp546;
fp546 = inteval->two_alpha0_bra[vi] * fp291;
LIBINT2_REALTYPE fp544;
fp544 = fp546 - fp545;
target[((hsi*28+16)*1+lsi)*1] = fp544;
LIBINT2_REALTYPE fp269;
fp269 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp24;
LIBINT2_REALTYPE fp272;
fp272 = src0[((hsi*18+2)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp274;
fp274 = fp87 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp273;
fp273 = fp274 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = fp273 + fp271;
LIBINT2_REALTYPE fp267;
fp267 = fp270 + fp268;
LIBINT2_REALTYPE fp542;
fp542 = 3.0000000000000000e+00 * fp267;
LIBINT2_REALTYPE fp277;
fp277 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp24;
LIBINT2_REALTYPE fp280;
fp280 = src0[((hsi*18+2)*1+lsi)*1] * fp57;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
fp282 = fp87 * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = fp282 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp278;
fp278 = fp281 + fp279;
LIBINT2_REALTYPE fp275;
fp275 = fp278 + fp276;
LIBINT2_REALTYPE fp543;
fp543 = inteval->two_alpha0_bra[vi] * fp275;
LIBINT2_REALTYPE fp541;
fp541 = fp543 - fp542;
target[((hsi*28+17)*1+lsi)*1] = fp541;
LIBINT2_REALTYPE fp253;
fp253 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp18;
LIBINT2_REALTYPE fp256;
fp256 = src0[((hsi*18+2)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = fp87 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp258 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = fp257 + fp255;
LIBINT2_REALTYPE fp251;
fp251 = fp254 + fp252;
LIBINT2_REALTYPE fp539;
fp539 = 2.0000000000000000e+00 * fp251;
LIBINT2_REALTYPE fp261;
fp261 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp18;
LIBINT2_REALTYPE fp264;
fp264 = src0[((hsi*18+2)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = fp87 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp266 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
fp262 = fp265 + fp263;
LIBINT2_REALTYPE fp259;
fp259 = fp262 + fp260;
LIBINT2_REALTYPE fp540;
fp540 = inteval->two_alpha0_bra[vi] * fp259;
LIBINT2_REALTYPE fp538;
fp538 = fp540 - fp539;
target[((hsi*28+18)*1+lsi)*1] = fp538;
LIBINT2_REALTYPE fp14;
fp14 = 2.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp16;
fp16 = fp17 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp15 - fp13;
LIBINT2_REALTYPE fp237;
fp237 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp12;
LIBINT2_REALTYPE fp240;
fp240 = src0[((hsi*18+2)*1+lsi)*1] * fp69;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp87 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp242 * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = fp241 + fp239;
LIBINT2_REALTYPE fp235;
fp235 = fp238 + fp236;
LIBINT2_REALTYPE fp536;
fp536 = 1.0000000000000000e+00 * fp235;
LIBINT2_REALTYPE fp245;
fp245 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp12;
LIBINT2_REALTYPE fp248;
fp248 = src0[((hsi*18+2)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = fp87 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp250 * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = fp249 + fp247;
LIBINT2_REALTYPE fp243;
fp243 = fp246 + fp244;
LIBINT2_REALTYPE fp537;
fp537 = inteval->two_alpha0_bra[vi] * fp243;
LIBINT2_REALTYPE fp535;
fp535 = fp537 - fp536;
target[((hsi*28+19)*1+lsi)*1] = fp535;
LIBINT2_REALTYPE fp8;
fp8 = 2.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp8 * src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp9 - fp7;
LIBINT2_REALTYPE fp229;
fp229 = src0[((hsi*18+2)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp6;
LIBINT2_REALTYPE fp232;
fp232 = src0[((hsi*18+2)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp87 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp234 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = fp233 + fp231;
LIBINT2_REALTYPE fp227;
fp227 = fp230 + fp228;
LIBINT2_REALTYPE fp534;
fp534 = inteval->two_alpha0_bra[vi] * fp227;
target[((hsi*28+20)*1+lsi)*1] = fp534;
LIBINT2_REALTYPE fp213;
fp213 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp36;
LIBINT2_REALTYPE fp216;
fp216 = src0[((hsi*18+0)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp84;
fp84 = fp85 * src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = fp84 * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp218 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp217 + fp215;
LIBINT2_REALTYPE fp211;
fp211 = fp214 + fp212;
LIBINT2_REALTYPE fp532;
fp532 = 6.0000000000000000e+00 * fp211;
LIBINT2_REALTYPE fp221;
fp221 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp36;
LIBINT2_REALTYPE fp41;
fp41 = 3.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * src1[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp42 - fp40;
LIBINT2_REALTYPE fp224;
fp224 = src0[((hsi*18+0)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp84 * src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp226 * src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp225 + fp223;
LIBINT2_REALTYPE fp219;
fp219 = fp222 + fp220;
LIBINT2_REALTYPE fp533;
fp533 = inteval->two_alpha0_bra[vi] * fp219;
LIBINT2_REALTYPE fp531;
fp531 = fp533 - fp532;
target[((hsi*28+21)*1+lsi)*1] = fp531;
LIBINT2_REALTYPE fp197;
fp197 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp30;
LIBINT2_REALTYPE fp200;
fp200 = src0[((hsi*18+0)*1+lsi)*1] * fp57;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp84 * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp202 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp201 + fp199;
LIBINT2_REALTYPE fp195;
fp195 = fp198 + fp196;
LIBINT2_REALTYPE fp529;
fp529 = 5.0000000000000000e+00 * fp195;
LIBINT2_REALTYPE fp205;
fp205 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp30;
LIBINT2_REALTYPE fp208;
fp208 = src0[((hsi*18+0)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = fp84 * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp210 * src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = fp209 + fp207;
LIBINT2_REALTYPE fp203;
fp203 = fp206 + fp204;
LIBINT2_REALTYPE fp530;
fp530 = inteval->two_alpha0_bra[vi] * fp203;
LIBINT2_REALTYPE fp528;
fp528 = fp530 - fp529;
target[((hsi*28+22)*1+lsi)*1] = fp528;
LIBINT2_REALTYPE fp181;
fp181 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp24;
LIBINT2_REALTYPE fp184;
fp184 = src0[((hsi*18+0)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp84 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = fp186 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp185 + fp183;
LIBINT2_REALTYPE fp179;
fp179 = fp182 + fp180;
LIBINT2_REALTYPE fp526;
fp526 = 4.0000000000000000e+00 * fp179;
LIBINT2_REALTYPE fp189;
fp189 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp24;
LIBINT2_REALTYPE fp192;
fp192 = src0[((hsi*18+0)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp84 * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp194 * src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp193 + fp191;
LIBINT2_REALTYPE fp187;
fp187 = fp190 + fp188;
LIBINT2_REALTYPE fp527;
fp527 = inteval->two_alpha0_bra[vi] * fp187;
LIBINT2_REALTYPE fp525;
fp525 = fp527 - fp526;
target[((hsi*28+23)*1+lsi)*1] = fp525;
LIBINT2_REALTYPE fp165;
fp165 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp18;
LIBINT2_REALTYPE fp168;
fp168 = src0[((hsi*18+0)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp84 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp170 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp169 + fp167;
LIBINT2_REALTYPE fp163;
fp163 = fp166 + fp164;
LIBINT2_REALTYPE fp523;
fp523 = 3.0000000000000000e+00 * fp163;
LIBINT2_REALTYPE fp173;
fp173 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp18;
LIBINT2_REALTYPE fp176;
fp176 = src0[((hsi*18+0)*1+lsi)*1] * fp57;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp84 * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp178 * src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp177 + fp175;
LIBINT2_REALTYPE fp171;
fp171 = fp174 + fp172;
LIBINT2_REALTYPE fp524;
fp524 = inteval->two_alpha0_bra[vi] * fp171;
LIBINT2_REALTYPE fp522;
fp522 = fp524 - fp523;
target[((hsi*28+24)*1+lsi)*1] = fp522;
LIBINT2_REALTYPE fp149;
fp149 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp12;
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*18+0)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp84 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp154 * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = fp153 + fp151;
LIBINT2_REALTYPE fp147;
fp147 = fp150 + fp148;
LIBINT2_REALTYPE fp520;
fp520 = 2.0000000000000000e+00 * fp147;
LIBINT2_REALTYPE fp157;
fp157 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp12;
LIBINT2_REALTYPE fp160;
fp160 = src0[((hsi*18+0)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp84 * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp162 * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp161 + fp159;
LIBINT2_REALTYPE fp155;
fp155 = fp158 + fp156;
LIBINT2_REALTYPE fp521;
fp521 = inteval->two_alpha0_bra[vi] * fp155;
LIBINT2_REALTYPE fp519;
fp519 = fp521 - fp520;
target[((hsi*28+25)*1+lsi)*1] = fp519;
LIBINT2_REALTYPE fp133;
fp133 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp6;
LIBINT2_REALTYPE fp136;
fp136 = src0[((hsi*18+0)*1+lsi)*1] * fp69;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp84 * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp138 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
LIBINT2_REALTYPE fp131;
fp131 = fp134 + fp132;
LIBINT2_REALTYPE fp517;
fp517 = 1.0000000000000000e+00 * fp131;
LIBINT2_REALTYPE fp141;
fp141 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp6;
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*18+0)*1+lsi)*1] * fp72;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp84 * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp146 * src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp145 + fp143;
LIBINT2_REALTYPE fp139;
fp139 = fp142 + fp140;
LIBINT2_REALTYPE fp518;
fp518 = inteval->two_alpha0_bra[vi] * fp139;
LIBINT2_REALTYPE fp516;
fp516 = fp518 - fp517;
target[((hsi*28+26)*1+lsi)*1] = fp516;
LIBINT2_REALTYPE fp2;
fp2 = 3.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp4 * src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 - fp1;
LIBINT2_REALTYPE fp125;
fp125 = src0[((hsi*18+0)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp0;
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*18+0)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp84 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp130 * src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
LIBINT2_REALTYPE fp515;
fp515 = inteval->two_alpha0_bra[vi] * fp123;
target[((hsi*28+27)*1+lsi)*1] = fp515;
LIBINT2_REALTYPE fp317;
fp317 = src0[((hsi*18+4)*1+lsi)*1] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp12;
LIBINT2_REALTYPE fp320;
fp320 = src0[((hsi*18+4)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = fp93 * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp322 * src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = fp321 + fp319;
LIBINT2_REALTYPE fp315;
fp315 = fp318 + fp316;
LIBINT2_REALTYPE fp550;
fp550 = inteval->two_alpha0_bra[vi] * fp315;
target[((hsi*28+14)*1+lsi)*1] = fp550;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 585 */
}

#ifdef __cplusplus
};
#endif