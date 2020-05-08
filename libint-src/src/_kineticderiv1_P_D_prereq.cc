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
extern "C" {
#endif
void _kineticderiv1_P_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp605;
fp605 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp601;
fp601 = inteval->PB_z[vi] * fp605;
LIBINT2_REALTYPE fp152;
fp152 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp86;
fp86 = fp152 * fp601;
LIBINT2_REALTYPE fp181;
fp181 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp180;
fp180 = fp181 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp696;
fp696 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp600;
fp600 = inteval->PA_z[vi] * fp605;
LIBINT2_REALTYPE fp588;
fp588 = fp696 * fp600;
LIBINT2_REALTYPE fp699;
fp699 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp603;
fp603 = fp699 * fp605;
LIBINT2_REALTYPE fp586;
fp586 = inteval->PA_z[vi] * fp600;
LIBINT2_REALTYPE fp585;
fp585 = fp586 + fp603;
LIBINT2_REALTYPE fp589;
fp589 = inteval->PB_z[vi] * fp585;
LIBINT2_REALTYPE fp587;
fp587 = fp589 + fp588;
LIBINT2_REALTYPE fp87;
fp87 = fp180 * fp587;
LIBINT2_REALTYPE fp85;
fp85 = fp87 - fp86;
LIBINT2_REALTYPE fp651;
fp651 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp647;
fp647 = inteval->PB_y[vi] * fp651;
LIBINT2_REALTYPE fp678;
fp678 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp689;
fp689 = fp699 * fp678;
LIBINT2_REALTYPE fp680;
fp680 = inteval->PB_x[vi] * fp678;
LIBINT2_REALTYPE fp687;
fp687 = inteval->PA_x[vi] * fp680;
LIBINT2_REALTYPE fp686;
fp686 = fp687 + fp689;
LIBINT2_REALTYPE fp376;
fp376 = fp686 * fp647;
LIBINT2_REALTYPE fp375;
fp375 = fp376 * fp85;
LIBINT2_REALTYPE fp646;
fp646 = inteval->PA_y[vi] * fp651;
LIBINT2_REALTYPE fp133;
fp133 = fp181 * fp646;
LIBINT2_REALTYPE fp644;
fp644 = fp696 * fp647;
LIBINT2_REALTYPE fp649;
fp649 = fp699 * fp651;
LIBINT2_REALTYPE fp642;
fp642 = inteval->PB_y[vi] * fp647;
LIBINT2_REALTYPE fp641;
fp641 = fp642 + fp649;
LIBINT2_REALTYPE fp645;
fp645 = inteval->PA_y[vi] * fp641;
LIBINT2_REALTYPE fp643;
fp643 = fp645 + fp644;
LIBINT2_REALTYPE fp134;
fp134 = fp180 * fp643;
LIBINT2_REALTYPE fp132;
fp132 = fp134 - fp133;
LIBINT2_REALTYPE fp379;
fp379 = fp686 * fp132;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp600;
LIBINT2_REALTYPE fp140;
fp140 = 5.0000000000000000e-01 * fp678;
LIBINT2_REALTYPE fp679;
fp679 = inteval->PA_x[vi] * fp678;
LIBINT2_REALTYPE fp682;
fp682 = inteval->PA_x[vi] * fp679;
LIBINT2_REALTYPE fp681;
fp681 = fp682 + fp689;
LIBINT2_REALTYPE fp142;
fp142 = fp181 * fp681;
LIBINT2_REALTYPE fp690;
fp690 = inteval->PB_x[vi] * fp680;
LIBINT2_REALTYPE fp688;
fp688 = fp690 + fp689;
LIBINT2_REALTYPE fp144;
fp144 = fp152 * fp688;
LIBINT2_REALTYPE fp695;
fp695 = fp696 * fp686;
LIBINT2_REALTYPE fp698;
fp698 = fp699 * fp688;
LIBINT2_REALTYPE fp692;
fp692 = fp696 * fp680;
LIBINT2_REALTYPE fp693;
fp693 = inteval->PA_x[vi] * fp688;
LIBINT2_REALTYPE fp691;
fp691 = fp693 + fp692;
LIBINT2_REALTYPE fp700;
fp700 = inteval->PA_x[vi] * fp691;
LIBINT2_REALTYPE fp697;
fp697 = fp700 + fp698;
LIBINT2_REALTYPE fp694;
fp694 = fp697 + fp695;
LIBINT2_REALTYPE fp145;
fp145 = fp180 * fp694;
LIBINT2_REALTYPE fp143;
fp143 = fp145 - fp144;
LIBINT2_REALTYPE fp141;
fp141 = fp143 - fp142;
LIBINT2_REALTYPE fp139;
fp139 = fp141 + fp140;
LIBINT2_REALTYPE fp381;
fp381 = fp139 * fp647;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp600;
LIBINT2_REALTYPE fp377;
fp377 = fp380 + fp378;
LIBINT2_REALTYPE fp374;
fp374 = fp377 + fp375;
LIBINT2_REALTYPE fp382;
fp382 = inteval->two_alpha0_bra[vi] * fp374;
LIBINT2_REALTYPE fp37;
fp37 = fp382;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp79;
fp79 = 5.0000000000000000e-01 * fp605;
LIBINT2_REALTYPE fp81;
fp81 = fp181 * fp585;
LIBINT2_REALTYPE fp596;
fp596 = inteval->PB_z[vi] * fp601;
LIBINT2_REALTYPE fp595;
fp595 = fp596 + fp603;
LIBINT2_REALTYPE fp83;
fp83 = fp152 * fp595;
LIBINT2_REALTYPE fp604;
fp604 = inteval->PA_z[vi] * fp601;
LIBINT2_REALTYPE fp602;
fp602 = fp604 + fp603;
LIBINT2_REALTYPE fp581;
fp581 = fp696 * fp602;
LIBINT2_REALTYPE fp583;
fp583 = fp699 * fp595;
LIBINT2_REALTYPE fp598;
fp598 = fp696 * fp601;
LIBINT2_REALTYPE fp599;
fp599 = inteval->PA_z[vi] * fp595;
LIBINT2_REALTYPE fp597;
fp597 = fp599 + fp598;
LIBINT2_REALTYPE fp584;
fp584 = inteval->PA_z[vi] * fp597;
LIBINT2_REALTYPE fp582;
fp582 = fp584 + fp583;
LIBINT2_REALTYPE fp580;
fp580 = fp582 + fp581;
LIBINT2_REALTYPE fp84;
fp84 = fp180 * fp580;
LIBINT2_REALTYPE fp82;
fp82 = fp84 - fp83;
LIBINT2_REALTYPE fp80;
fp80 = fp82 - fp81;
LIBINT2_REALTYPE fp78;
fp78 = fp80 + fp79;
LIBINT2_REALTYPE fp367;
fp367 = fp686 * fp651;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp78;
LIBINT2_REALTYPE fp650;
fp650 = inteval->PA_y[vi] * fp647;
LIBINT2_REALTYPE fp648;
fp648 = fp650 + fp649;
LIBINT2_REALTYPE fp135;
fp135 = fp180 * fp648;
LIBINT2_REALTYPE fp370;
fp370 = fp686 * fp135;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * fp602;
LIBINT2_REALTYPE fp372;
fp372 = fp139 * fp651;
LIBINT2_REALTYPE fp371;
fp371 = fp372 * fp602;
LIBINT2_REALTYPE fp368;
fp368 = fp371 + fp369;
LIBINT2_REALTYPE fp365;
fp365 = fp368 + fp366;
LIBINT2_REALTYPE fp373;
fp373 = inteval->two_alpha0_bra[vi] * fp365;
LIBINT2_REALTYPE fp38;
fp38 = fp373;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp358;
fp358 = fp679 * fp641;
LIBINT2_REALTYPE fp357;
fp357 = fp358 * fp85;
LIBINT2_REALTYPE fp175;
fp175 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp130;
fp130 = fp175 * fp648;
LIBINT2_REALTYPE fp674;
fp674 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp639;
fp639 = fp674 * fp641;
LIBINT2_REALTYPE fp637;
fp637 = inteval->PB_y[vi] * fp641;
LIBINT2_REALTYPE fp636;
fp636 = fp637 + fp644;
LIBINT2_REALTYPE fp640;
fp640 = inteval->PA_y[vi] * fp636;
LIBINT2_REALTYPE fp638;
fp638 = fp640 + fp639;
LIBINT2_REALTYPE fp131;
fp131 = fp180 * fp638;
LIBINT2_REALTYPE fp129;
fp129 = fp131 - fp130;
LIBINT2_REALTYPE fp361;
fp361 = fp679 * fp129;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp600;
LIBINT2_REALTYPE fp137;
fp137 = fp152 * fp680;
LIBINT2_REALTYPE fp684;
fp684 = fp696 * fp679;
LIBINT2_REALTYPE fp685;
fp685 = inteval->PB_x[vi] * fp681;
LIBINT2_REALTYPE fp683;
fp683 = fp685 + fp684;
LIBINT2_REALTYPE fp138;
fp138 = fp180 * fp683;
LIBINT2_REALTYPE fp136;
fp136 = fp138 - fp137;
LIBINT2_REALTYPE fp363;
fp363 = fp136 * fp641;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp600;
LIBINT2_REALTYPE fp359;
fp359 = fp362 + fp360;
LIBINT2_REALTYPE fp356;
fp356 = fp359 + fp357;
LIBINT2_REALTYPE fp364;
fp364 = inteval->two_alpha0_bra[vi] * fp356;
LIBINT2_REALTYPE fp39;
fp39 = fp364;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp349;
fp349 = fp679 * fp647;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp78;
LIBINT2_REALTYPE fp352;
fp352 = fp679 * fp132;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp602;
LIBINT2_REALTYPE fp354;
fp354 = fp136 * fp647;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp602;
LIBINT2_REALTYPE fp350;
fp350 = fp353 + fp351;
LIBINT2_REALTYPE fp347;
fp347 = fp350 + fp348;
LIBINT2_REALTYPE fp355;
fp355 = inteval->two_alpha0_bra[vi] * fp347;
LIBINT2_REALTYPE fp40;
fp40 = fp355;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp72;
fp72 = 1.0000000000000000e+00 * fp601;
LIBINT2_REALTYPE fp74;
fp74 = fp175 * fp587;
LIBINT2_REALTYPE fp591;
fp591 = inteval->PB_z[vi] * fp595;
LIBINT2_REALTYPE fp590;
fp590 = fp591 + fp598;
LIBINT2_REALTYPE fp76;
fp76 = fp152 * fp590;
LIBINT2_REALTYPE fp576;
fp576 = fp674 * fp597;
LIBINT2_REALTYPE fp578;
fp578 = fp699 * fp590;
LIBINT2_REALTYPE fp593;
fp593 = fp674 * fp595;
LIBINT2_REALTYPE fp594;
fp594 = inteval->PA_z[vi] * fp590;
LIBINT2_REALTYPE fp592;
fp592 = fp594 + fp593;
LIBINT2_REALTYPE fp579;
fp579 = inteval->PA_z[vi] * fp592;
LIBINT2_REALTYPE fp577;
fp577 = fp579 + fp578;
LIBINT2_REALTYPE fp575;
fp575 = fp577 + fp576;
LIBINT2_REALTYPE fp77;
fp77 = fp180 * fp575;
LIBINT2_REALTYPE fp75;
fp75 = fp77 - fp76;
LIBINT2_REALTYPE fp73;
fp73 = fp75 - fp74;
LIBINT2_REALTYPE fp71;
fp71 = fp73 + fp72;
LIBINT2_REALTYPE fp340;
fp340 = fp679 * fp651;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp71;
LIBINT2_REALTYPE fp343;
fp343 = fp679 * fp135;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp597;
LIBINT2_REALTYPE fp345;
fp345 = fp136 * fp651;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp597;
LIBINT2_REALTYPE fp341;
fp341 = fp344 + fp342;
LIBINT2_REALTYPE fp338;
fp338 = fp341 + fp339;
LIBINT2_REALTYPE fp346;
fp346 = inteval->two_alpha0_bra[vi] * fp338;
LIBINT2_REALTYPE fp41;
fp41 = fp346;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp271;
fp271 = fp688 * fp646;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp85;
LIBINT2_REALTYPE fp127;
fp127 = fp152 * fp647;
LIBINT2_REALTYPE fp634;
fp634 = fp696 * fp646;
LIBINT2_REALTYPE fp632;
fp632 = inteval->PA_y[vi] * fp646;
LIBINT2_REALTYPE fp631;
fp631 = fp632 + fp649;
LIBINT2_REALTYPE fp635;
fp635 = inteval->PB_y[vi] * fp631;
LIBINT2_REALTYPE fp633;
fp633 = fp635 + fp634;
LIBINT2_REALTYPE fp128;
fp128 = fp180 * fp633;
LIBINT2_REALTYPE fp126;
fp126 = fp128 - fp127;
LIBINT2_REALTYPE fp274;
fp274 = fp688 * fp126;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp600;
LIBINT2_REALTYPE fp169;
fp169 = fp175 * fp686;
LIBINT2_REALTYPE fp670;
fp670 = fp674 * fp688;
LIBINT2_REALTYPE fp655;
fp655 = inteval->PB_x[vi] * fp688;
LIBINT2_REALTYPE fp654;
fp654 = fp655 + fp692;
LIBINT2_REALTYPE fp671;
fp671 = inteval->PA_x[vi] * fp654;
LIBINT2_REALTYPE fp669;
fp669 = fp671 + fp670;
LIBINT2_REALTYPE fp170;
fp170 = fp180 * fp669;
LIBINT2_REALTYPE fp168;
fp168 = fp170 - fp169;
LIBINT2_REALTYPE fp276;
fp276 = fp168 * fp646;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp600;
LIBINT2_REALTYPE fp272;
fp272 = fp275 + fp273;
LIBINT2_REALTYPE fp269;
fp269 = fp272 + fp270;
LIBINT2_REALTYPE fp277;
fp277 = inteval->two_alpha0_bra[vi] * fp269;
LIBINT2_REALTYPE fp42;
fp42 = fp277;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp262;
fp262 = fp680 * fp648;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp85;
LIBINT2_REALTYPE fp120;
fp120 = 5.0000000000000000e-01 * fp651;
LIBINT2_REALTYPE fp122;
fp122 = fp181 * fp631;
LIBINT2_REALTYPE fp124;
fp124 = fp152 * fp641;
LIBINT2_REALTYPE fp627;
fp627 = fp696 * fp648;
LIBINT2_REALTYPE fp629;
fp629 = fp699 * fp641;
LIBINT2_REALTYPE fp630;
fp630 = inteval->PA_y[vi] * fp643;
LIBINT2_REALTYPE fp628;
fp628 = fp630 + fp629;
LIBINT2_REALTYPE fp626;
fp626 = fp628 + fp627;
LIBINT2_REALTYPE fp125;
fp125 = fp180 * fp626;
LIBINT2_REALTYPE fp123;
fp123 = fp125 - fp124;
LIBINT2_REALTYPE fp121;
fp121 = fp123 - fp122;
LIBINT2_REALTYPE fp119;
fp119 = fp121 + fp120;
LIBINT2_REALTYPE fp265;
fp265 = fp680 * fp119;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp600;
LIBINT2_REALTYPE fp159;
fp159 = fp181 * fp679;
LIBINT2_REALTYPE fp160;
fp160 = fp180 * fp691;
LIBINT2_REALTYPE fp158;
fp158 = fp160 - fp159;
LIBINT2_REALTYPE fp267;
fp267 = fp158 * fp648;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp600;
LIBINT2_REALTYPE fp263;
fp263 = fp266 + fp264;
LIBINT2_REALTYPE fp260;
fp260 = fp263 + fp261;
LIBINT2_REALTYPE fp268;
fp268 = inteval->two_alpha0_bra[vi] * fp260;
LIBINT2_REALTYPE fp43;
fp43 = fp268;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp253;
fp253 = fp680 * fp646;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp78;
LIBINT2_REALTYPE fp256;
fp256 = fp680 * fp126;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp602;
LIBINT2_REALTYPE fp258;
fp258 = fp158 * fp646;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp602;
LIBINT2_REALTYPE fp254;
fp254 = fp257 + fp255;
LIBINT2_REALTYPE fp251;
fp251 = fp254 + fp252;
LIBINT2_REALTYPE fp259;
fp259 = inteval->two_alpha0_bra[vi] * fp251;
LIBINT2_REALTYPE fp44;
fp44 = fp259;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp385;
fp385 = fp691 * fp651;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp85;
LIBINT2_REALTYPE fp388;
fp388 = fp691 * fp135;
LIBINT2_REALTYPE fp387;
fp387 = fp388 * fp600;
LIBINT2_REALTYPE fp147;
fp147 = 1.0000000000000000e+00 * fp680;
LIBINT2_REALTYPE fp149;
fp149 = fp175 * fp683;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp654;
LIBINT2_REALTYPE fp662;
fp662 = fp674 * fp691;
LIBINT2_REALTYPE fp664;
fp664 = fp699 * fp654;
LIBINT2_REALTYPE fp665;
fp665 = inteval->PA_x[vi] * fp669;
LIBINT2_REALTYPE fp663;
fp663 = fp665 + fp664;
LIBINT2_REALTYPE fp661;
fp661 = fp663 + fp662;
LIBINT2_REALTYPE fp153;
fp153 = fp180 * fp661;
LIBINT2_REALTYPE fp150;
fp150 = fp153 - fp151;
LIBINT2_REALTYPE fp148;
fp148 = fp150 - fp149;
LIBINT2_REALTYPE fp146;
fp146 = fp148 + fp147;
LIBINT2_REALTYPE fp390;
fp390 = fp146 * fp651;
LIBINT2_REALTYPE fp389;
fp389 = fp390 * fp600;
LIBINT2_REALTYPE fp386;
fp386 = fp389 + fp387;
LIBINT2_REALTYPE fp383;
fp383 = fp386 + fp384;
LIBINT2_REALTYPE fp391;
fp391 = inteval->two_alpha0_bra[vi] * fp383;
LIBINT2_REALTYPE fp36;
fp36 = fp391;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp235;
fp235 = fp678 * fp648;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp78;
LIBINT2_REALTYPE fp238;
fp238 = fp678 * fp119;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp602;
LIBINT2_REALTYPE fp154;
fp154 = fp180 * fp686;
LIBINT2_REALTYPE fp240;
fp240 = fp154 * fp648;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp602;
LIBINT2_REALTYPE fp236;
fp236 = fp239 + fp237;
LIBINT2_REALTYPE fp233;
fp233 = fp236 + fp234;
LIBINT2_REALTYPE fp241;
fp241 = inteval->two_alpha0_bra[vi] * fp233;
LIBINT2_REALTYPE fp46;
fp46 = fp241;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp226;
fp226 = fp678 * fp646;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp71;
LIBINT2_REALTYPE fp229;
fp229 = fp678 * fp126;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp597;
LIBINT2_REALTYPE fp231;
fp231 = fp154 * fp646;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp597;
LIBINT2_REALTYPE fp227;
fp227 = fp230 + fp228;
LIBINT2_REALTYPE fp224;
fp224 = fp227 + fp225;
LIBINT2_REALTYPE fp232;
fp232 = inteval->two_alpha0_bra[vi] * fp224;
LIBINT2_REALTYPE fp47;
fp47 = fp232;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp94;
fp94 = fp180 * fp602;
LIBINT2_REALTYPE fp543;
fp543 = fp688 * fp651;
LIBINT2_REALTYPE fp542;
fp542 = fp543 * fp94;
LIBINT2_REALTYPE fp546;
fp546 = fp688 * fp135;
LIBINT2_REALTYPE fp545;
fp545 = fp546 * fp605;
LIBINT2_REALTYPE fp548;
fp548 = fp168 * fp651;
LIBINT2_REALTYPE fp547;
fp547 = fp548 * fp605;
LIBINT2_REALTYPE fp544;
fp544 = fp547 + fp545;
LIBINT2_REALTYPE fp541;
fp541 = fp544 + fp542;
LIBINT2_REALTYPE fp558;
fp558 = 1.0000000000000000e+00 * fp541;
LIBINT2_REALTYPE fp178;
fp178 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp69;
fp69 = fp178 * fp602;
LIBINT2_REALTYPE fp573;
fp573 = fp674 * fp585;
LIBINT2_REALTYPE fp571;
fp571 = inteval->PA_z[vi] * fp585;
LIBINT2_REALTYPE fp570;
fp570 = fp571 + fp588;
LIBINT2_REALTYPE fp574;
fp574 = inteval->PB_z[vi] * fp570;
LIBINT2_REALTYPE fp572;
fp572 = fp574 + fp573;
LIBINT2_REALTYPE fp70;
fp70 = fp180 * fp572;
LIBINT2_REALTYPE fp68;
fp68 = fp70 - fp69;
LIBINT2_REALTYPE fp218;
fp218 = fp543 * fp68;
LIBINT2_REALTYPE fp220;
fp220 = fp546 * fp585;
LIBINT2_REALTYPE fp221;
fp221 = fp548 * fp585;
LIBINT2_REALTYPE fp219;
fp219 = fp221 + fp220;
LIBINT2_REALTYPE fp217;
fp217 = fp219 + fp218;
LIBINT2_REALTYPE fp223;
fp223 = inteval->two_alpha0_bra[vi] * fp217;
LIBINT2_REALTYPE fp222;
fp222 = fp223 - fp558;
LIBINT2_REALTYPE fp48;
fp48 = fp222;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp524;
fp524 = fp680 * fp647;
LIBINT2_REALTYPE fp523;
fp523 = fp524 * fp94;
LIBINT2_REALTYPE fp527;
fp527 = fp680 * fp132;
LIBINT2_REALTYPE fp526;
fp526 = fp527 * fp605;
LIBINT2_REALTYPE fp529;
fp529 = fp158 * fp647;
LIBINT2_REALTYPE fp528;
fp528 = fp529 * fp605;
LIBINT2_REALTYPE fp525;
fp525 = fp528 + fp526;
LIBINT2_REALTYPE fp522;
fp522 = fp525 + fp523;
LIBINT2_REALTYPE fp539;
fp539 = 1.0000000000000000e+00 * fp522;
LIBINT2_REALTYPE fp211;
fp211 = fp524 * fp68;
LIBINT2_REALTYPE fp213;
fp213 = fp527 * fp585;
LIBINT2_REALTYPE fp214;
fp214 = fp529 * fp585;
LIBINT2_REALTYPE fp212;
fp212 = fp214 + fp213;
LIBINT2_REALTYPE fp210;
fp210 = fp212 + fp211;
LIBINT2_REALTYPE fp216;
fp216 = inteval->two_alpha0_bra[vi] * fp210;
LIBINT2_REALTYPE fp215;
fp215 = fp216 - fp539;
LIBINT2_REALTYPE fp49;
fp49 = fp215;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp92;
fp92 = fp181 * fp600;
LIBINT2_REALTYPE fp93;
fp93 = fp180 * fp597;
LIBINT2_REALTYPE fp91;
fp91 = fp93 - fp92;
LIBINT2_REALTYPE fp505;
fp505 = fp680 * fp651;
LIBINT2_REALTYPE fp504;
fp504 = fp505 * fp91;
LIBINT2_REALTYPE fp508;
fp508 = fp680 * fp135;
LIBINT2_REALTYPE fp507;
fp507 = fp508 * fp601;
LIBINT2_REALTYPE fp510;
fp510 = fp158 * fp651;
LIBINT2_REALTYPE fp509;
fp509 = fp510 * fp601;
LIBINT2_REALTYPE fp506;
fp506 = fp509 + fp507;
LIBINT2_REALTYPE fp503;
fp503 = fp506 + fp504;
LIBINT2_REALTYPE fp520;
fp520 = 1.0000000000000000e+00 * fp503;
LIBINT2_REALTYPE fp62;
fp62 = 1.0000000000000000e+00 * fp600;
LIBINT2_REALTYPE fp64;
fp64 = fp181 * fp570;
LIBINT2_REALTYPE fp66;
fp66 = fp178 * fp597;
LIBINT2_REALTYPE fp566;
fp566 = fp696 * fp587;
LIBINT2_REALTYPE fp568;
fp568 = fp696 * fp597;
LIBINT2_REALTYPE fp569;
fp569 = inteval->PA_z[vi] * fp580;
LIBINT2_REALTYPE fp567;
fp567 = fp569 + fp568;
LIBINT2_REALTYPE fp565;
fp565 = fp567 + fp566;
LIBINT2_REALTYPE fp67;
fp67 = fp180 * fp565;
LIBINT2_REALTYPE fp65;
fp65 = fp67 - fp66;
LIBINT2_REALTYPE fp63;
fp63 = fp65 - fp64;
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
LIBINT2_REALTYPE fp204;
fp204 = fp505 * fp61;
LIBINT2_REALTYPE fp206;
fp206 = fp508 * fp587;
LIBINT2_REALTYPE fp207;
fp207 = fp510 * fp587;
LIBINT2_REALTYPE fp205;
fp205 = fp207 + fp206;
LIBINT2_REALTYPE fp203;
fp203 = fp205 + fp204;
LIBINT2_REALTYPE fp209;
fp209 = inteval->two_alpha0_bra[vi] * fp203;
LIBINT2_REALTYPE fp208;
fp208 = fp209 - fp520;
LIBINT2_REALTYPE fp50;
fp50 = fp208;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp486;
fp486 = fp678 * fp641;
LIBINT2_REALTYPE fp485;
fp485 = fp486 * fp94;
LIBINT2_REALTYPE fp489;
fp489 = fp678 * fp129;
LIBINT2_REALTYPE fp488;
fp488 = fp489 * fp605;
LIBINT2_REALTYPE fp491;
fp491 = fp154 * fp641;
LIBINT2_REALTYPE fp490;
fp490 = fp491 * fp605;
LIBINT2_REALTYPE fp487;
fp487 = fp490 + fp488;
LIBINT2_REALTYPE fp484;
fp484 = fp487 + fp485;
LIBINT2_REALTYPE fp501;
fp501 = 1.0000000000000000e+00 * fp484;
LIBINT2_REALTYPE fp197;
fp197 = fp486 * fp68;
LIBINT2_REALTYPE fp199;
fp199 = fp489 * fp585;
LIBINT2_REALTYPE fp200;
fp200 = fp491 * fp585;
LIBINT2_REALTYPE fp198;
fp198 = fp200 + fp199;
LIBINT2_REALTYPE fp196;
fp196 = fp198 + fp197;
LIBINT2_REALTYPE fp202;
fp202 = inteval->two_alpha0_bra[vi] * fp196;
LIBINT2_REALTYPE fp201;
fp201 = fp202 - fp501;
LIBINT2_REALTYPE fp51;
fp51 = fp201;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp467;
fp467 = fp678 * fp647;
LIBINT2_REALTYPE fp466;
fp466 = fp467 * fp91;
LIBINT2_REALTYPE fp470;
fp470 = fp678 * fp132;
LIBINT2_REALTYPE fp469;
fp469 = fp470 * fp601;
LIBINT2_REALTYPE fp472;
fp472 = fp154 * fp647;
LIBINT2_REALTYPE fp471;
fp471 = fp472 * fp601;
LIBINT2_REALTYPE fp468;
fp468 = fp471 + fp469;
LIBINT2_REALTYPE fp465;
fp465 = fp468 + fp466;
LIBINT2_REALTYPE fp482;
fp482 = 1.0000000000000000e+00 * fp465;
LIBINT2_REALTYPE fp190;
fp190 = fp467 * fp61;
LIBINT2_REALTYPE fp192;
fp192 = fp470 * fp587;
LIBINT2_REALTYPE fp193;
fp193 = fp472 * fp587;
LIBINT2_REALTYPE fp191;
fp191 = fp193 + fp192;
LIBINT2_REALTYPE fp189;
fp189 = fp191 + fp190;
LIBINT2_REALTYPE fp195;
fp195 = inteval->two_alpha0_bra[vi] * fp189;
LIBINT2_REALTYPE fp194;
fp194 = fp195 - fp482;
LIBINT2_REALTYPE fp52;
fp52 = fp194;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp89;
fp89 = fp175 * fp602;
LIBINT2_REALTYPE fp90;
fp90 = fp180 * fp592;
LIBINT2_REALTYPE fp88;
fp88 = fp90 - fp89;
LIBINT2_REALTYPE fp448;
fp448 = fp678 * fp651;
LIBINT2_REALTYPE fp447;
fp447 = fp448 * fp88;
LIBINT2_REALTYPE fp451;
fp451 = fp678 * fp135;
LIBINT2_REALTYPE fp450;
fp450 = fp451 * fp595;
LIBINT2_REALTYPE fp453;
fp453 = fp154 * fp651;
LIBINT2_REALTYPE fp452;
fp452 = fp453 * fp595;
LIBINT2_REALTYPE fp449;
fp449 = fp452 + fp450;
LIBINT2_REALTYPE fp446;
fp446 = fp449 + fp447;
LIBINT2_REALTYPE fp463;
fp463 = 1.0000000000000000e+00 * fp446;
LIBINT2_REALTYPE fp55;
fp55 = 2.0000000000000000e+00 * fp602;
LIBINT2_REALTYPE fp57;
fp57 = fp175 * fp572;
LIBINT2_REALTYPE fp59;
fp59 = fp178 * fp592;
LIBINT2_REALTYPE fp561;
fp561 = fp674 * fp580;
LIBINT2_REALTYPE fp563;
fp563 = fp696 * fp592;
LIBINT2_REALTYPE fp564;
fp564 = inteval->PA_z[vi] * fp575;
LIBINT2_REALTYPE fp562;
fp562 = fp564 + fp563;
LIBINT2_REALTYPE fp560;
fp560 = fp562 + fp561;
LIBINT2_REALTYPE fp60;
fp60 = fp180 * fp560;
LIBINT2_REALTYPE fp58;
fp58 = fp60 - fp59;
LIBINT2_REALTYPE fp56;
fp56 = fp58 - fp57;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp183;
fp183 = fp448 * fp54;
LIBINT2_REALTYPE fp185;
fp185 = fp451 * fp580;
LIBINT2_REALTYPE fp186;
fp186 = fp453 * fp580;
LIBINT2_REALTYPE fp184;
fp184 = fp186 + fp185;
LIBINT2_REALTYPE fp182;
fp182 = fp184 + fp183;
LIBINT2_REALTYPE fp188;
fp188 = inteval->two_alpha0_bra[vi] * fp182;
LIBINT2_REALTYPE fp187;
fp187 = fp188 - fp463;
LIBINT2_REALTYPE fp53;
fp53 = fp187;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp244;
fp244 = fp678 * fp643;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp85;
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * fp647;
LIBINT2_REALTYPE fp115;
fp115 = fp175 * fp633;
LIBINT2_REALTYPE fp117;
fp117 = fp152 * fp636;
LIBINT2_REALTYPE fp622;
fp622 = fp674 * fp643;
LIBINT2_REALTYPE fp624;
fp624 = fp699 * fp636;
LIBINT2_REALTYPE fp625;
fp625 = inteval->PA_y[vi] * fp638;
LIBINT2_REALTYPE fp623;
fp623 = fp625 + fp624;
LIBINT2_REALTYPE fp621;
fp621 = fp623 + fp622;
LIBINT2_REALTYPE fp118;
fp118 = fp180 * fp621;
LIBINT2_REALTYPE fp116;
fp116 = fp118 - fp117;
LIBINT2_REALTYPE fp114;
fp114 = fp116 - fp115;
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
LIBINT2_REALTYPE fp247;
fp247 = fp678 * fp112;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp600;
LIBINT2_REALTYPE fp249;
fp249 = fp154 * fp643;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp600;
LIBINT2_REALTYPE fp245;
fp245 = fp248 + fp246;
LIBINT2_REALTYPE fp242;
fp242 = fp245 + fp243;
LIBINT2_REALTYPE fp250;
fp250 = inteval->two_alpha0_bra[vi] * fp242;
LIBINT2_REALTYPE fp45;
fp45 = fp250;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp430;
fp430 = fp686 * fp648;
LIBINT2_REALTYPE fp429;
fp429 = fp430 * fp94;
LIBINT2_REALTYPE fp433;
fp433 = fp686 * fp119;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp605;
LIBINT2_REALTYPE fp435;
fp435 = fp139 * fp648;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp605;
LIBINT2_REALTYPE fp431;
fp431 = fp434 + fp432;
LIBINT2_REALTYPE fp428;
fp428 = fp431 + fp429;
LIBINT2_REALTYPE fp436;
fp436 = inteval->two_alpha0_bra[vi] * fp428;
LIBINT2_REALTYPE fp19;
fp19 = fp436;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp421;
fp421 = fp686 * fp646;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp91;
LIBINT2_REALTYPE fp424;
fp424 = fp686 * fp126;
LIBINT2_REALTYPE fp423;
fp423 = fp424 * fp601;
LIBINT2_REALTYPE fp426;
fp426 = fp139 * fp646;
LIBINT2_REALTYPE fp425;
fp425 = fp426 * fp601;
LIBINT2_REALTYPE fp422;
fp422 = fp425 + fp423;
LIBINT2_REALTYPE fp419;
fp419 = fp422 + fp420;
LIBINT2_REALTYPE fp427;
fp427 = inteval->two_alpha0_bra[vi] * fp419;
LIBINT2_REALTYPE fp20;
fp20 = fp427;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp412;
fp412 = fp679 * fp643;
LIBINT2_REALTYPE fp411;
fp411 = fp412 * fp94;
LIBINT2_REALTYPE fp415;
fp415 = fp679 * fp112;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp605;
LIBINT2_REALTYPE fp417;
fp417 = fp136 * fp643;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp605;
LIBINT2_REALTYPE fp413;
fp413 = fp416 + fp414;
LIBINT2_REALTYPE fp410;
fp410 = fp413 + fp411;
LIBINT2_REALTYPE fp418;
fp418 = inteval->two_alpha0_bra[vi] * fp410;
LIBINT2_REALTYPE fp21;
fp21 = fp418;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp403;
fp403 = fp679 * fp648;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp91;
LIBINT2_REALTYPE fp406;
fp406 = fp679 * fp119;
LIBINT2_REALTYPE fp405;
fp405 = fp406 * fp601;
LIBINT2_REALTYPE fp408;
fp408 = fp136 * fp648;
LIBINT2_REALTYPE fp407;
fp407 = fp408 * fp601;
LIBINT2_REALTYPE fp404;
fp404 = fp407 + fp405;
LIBINT2_REALTYPE fp401;
fp401 = fp404 + fp402;
LIBINT2_REALTYPE fp409;
fp409 = inteval->two_alpha0_bra[vi] * fp401;
LIBINT2_REALTYPE fp22;
fp22 = fp409;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp394;
fp394 = fp679 * fp646;
LIBINT2_REALTYPE fp393;
fp393 = fp394 * fp88;
LIBINT2_REALTYPE fp397;
fp397 = fp679 * fp126;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp595;
LIBINT2_REALTYPE fp399;
fp399 = fp136 * fp646;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp595;
LIBINT2_REALTYPE fp395;
fp395 = fp398 + fp396;
LIBINT2_REALTYPE fp392;
fp392 = fp395 + fp393;
LIBINT2_REALTYPE fp400;
fp400 = inteval->two_alpha0_bra[vi] * fp392;
LIBINT2_REALTYPE fp23;
fp23 = fp400;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp330;
fp330 = fp688 * fp631;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp94;
LIBINT2_REALTYPE fp110;
fp110 = fp178 * fp648;
LIBINT2_REALTYPE fp619;
fp619 = fp674 * fp631;
LIBINT2_REALTYPE fp617;
fp617 = inteval->PA_y[vi] * fp631;
LIBINT2_REALTYPE fp616;
fp616 = fp617 + fp634;
LIBINT2_REALTYPE fp620;
fp620 = inteval->PB_y[vi] * fp616;
LIBINT2_REALTYPE fp618;
fp618 = fp620 + fp619;
LIBINT2_REALTYPE fp111;
fp111 = fp180 * fp618;
LIBINT2_REALTYPE fp109;
fp109 = fp111 - fp110;
LIBINT2_REALTYPE fp333;
fp333 = fp688 * fp109;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp605;
LIBINT2_REALTYPE fp335;
fp335 = fp168 * fp631;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp605;
LIBINT2_REALTYPE fp331;
fp331 = fp334 + fp332;
LIBINT2_REALTYPE fp328;
fp328 = fp331 + fp329;
LIBINT2_REALTYPE fp337;
fp337 = inteval->two_alpha0_bra[vi] * fp328;
LIBINT2_REALTYPE fp336;
fp336 = fp337 - fp558;
LIBINT2_REALTYPE fp24;
fp24 = fp336;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp320;
fp320 = fp680 * fp633;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * fp94;
LIBINT2_REALTYPE fp103;
fp103 = 1.0000000000000000e+00 * fp646;
LIBINT2_REALTYPE fp105;
fp105 = fp181 * fp616;
LIBINT2_REALTYPE fp107;
fp107 = fp178 * fp643;
LIBINT2_REALTYPE fp612;
fp612 = fp696 * fp633;
LIBINT2_REALTYPE fp614;
fp614 = fp696 * fp643;
LIBINT2_REALTYPE fp615;
fp615 = inteval->PA_y[vi] * fp626;
LIBINT2_REALTYPE fp613;
fp613 = fp615 + fp614;
LIBINT2_REALTYPE fp611;
fp611 = fp613 + fp612;
LIBINT2_REALTYPE fp108;
fp108 = fp180 * fp611;
LIBINT2_REALTYPE fp106;
fp106 = fp108 - fp107;
LIBINT2_REALTYPE fp104;
fp104 = fp106 - fp105;
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
LIBINT2_REALTYPE fp323;
fp323 = fp680 * fp102;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp605;
LIBINT2_REALTYPE fp325;
fp325 = fp158 * fp633;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp605;
LIBINT2_REALTYPE fp321;
fp321 = fp324 + fp322;
LIBINT2_REALTYPE fp318;
fp318 = fp321 + fp319;
LIBINT2_REALTYPE fp327;
fp327 = inteval->two_alpha0_bra[vi] * fp318;
LIBINT2_REALTYPE fp326;
fp326 = fp327 - fp539;
LIBINT2_REALTYPE fp25;
fp25 = fp326;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp310;
fp310 = fp680 * fp631;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp91;
LIBINT2_REALTYPE fp313;
fp313 = fp680 * fp109;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp601;
LIBINT2_REALTYPE fp315;
fp315 = fp158 * fp631;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp601;
LIBINT2_REALTYPE fp311;
fp311 = fp314 + fp312;
LIBINT2_REALTYPE fp308;
fp308 = fp311 + fp309;
LIBINT2_REALTYPE fp317;
fp317 = inteval->two_alpha0_bra[vi] * fp308;
LIBINT2_REALTYPE fp316;
fp316 = fp317 - fp520;
LIBINT2_REALTYPE fp26;
fp26 = fp316;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp439;
fp439 = fp691 * fp646;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp94;
LIBINT2_REALTYPE fp442;
fp442 = fp691 * fp126;
LIBINT2_REALTYPE fp441;
fp441 = fp442 * fp605;
LIBINT2_REALTYPE fp444;
fp444 = fp146 * fp646;
LIBINT2_REALTYPE fp443;
fp443 = fp444 * fp605;
LIBINT2_REALTYPE fp440;
fp440 = fp443 + fp441;
LIBINT2_REALTYPE fp437;
fp437 = fp440 + fp438;
LIBINT2_REALTYPE fp445;
fp445 = inteval->two_alpha0_bra[vi] * fp437;
LIBINT2_REALTYPE fp18;
fp18 = fp445;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp290;
fp290 = fp678 * fp633;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp91;
LIBINT2_REALTYPE fp293;
fp293 = fp678 * fp102;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp601;
LIBINT2_REALTYPE fp295;
fp295 = fp154 * fp633;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp601;
LIBINT2_REALTYPE fp291;
fp291 = fp294 + fp292;
LIBINT2_REALTYPE fp288;
fp288 = fp291 + fp289;
LIBINT2_REALTYPE fp297;
fp297 = inteval->two_alpha0_bra[vi] * fp288;
LIBINT2_REALTYPE fp296;
fp296 = fp297 - fp482;
LIBINT2_REALTYPE fp28;
fp28 = fp296;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp280;
fp280 = fp678 * fp631;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp88;
LIBINT2_REALTYPE fp283;
fp283 = fp678 * fp109;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp595;
LIBINT2_REALTYPE fp285;
fp285 = fp154 * fp631;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp595;
LIBINT2_REALTYPE fp281;
fp281 = fp284 + fp282;
LIBINT2_REALTYPE fp278;
fp278 = fp281 + fp279;
LIBINT2_REALTYPE fp287;
fp287 = inteval->two_alpha0_bra[vi] * fp278;
LIBINT2_REALTYPE fp286;
fp286 = fp287 - fp463;
LIBINT2_REALTYPE fp29;
fp29 = fp286;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp30;
fp30 = fp277;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp31;
fp31 = fp268;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp32;
fp32 = fp259;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp33;
fp33 = fp250;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp34;
fp34 = fp241;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp35;
fp35 = fp232;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp300;
fp300 = fp678 * fp626;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp94;
LIBINT2_REALTYPE fp96;
fp96 = 2.0000000000000000e+00 * fp648;
LIBINT2_REALTYPE fp98;
fp98 = fp175 * fp618;
LIBINT2_REALTYPE fp100;
fp100 = fp178 * fp638;
LIBINT2_REALTYPE fp607;
fp607 = fp674 * fp626;
LIBINT2_REALTYPE fp609;
fp609 = fp696 * fp638;
LIBINT2_REALTYPE fp610;
fp610 = inteval->PA_y[vi] * fp621;
LIBINT2_REALTYPE fp608;
fp608 = fp610 + fp609;
LIBINT2_REALTYPE fp606;
fp606 = fp608 + fp607;
LIBINT2_REALTYPE fp101;
fp101 = fp180 * fp606;
LIBINT2_REALTYPE fp99;
fp99 = fp101 - fp100;
LIBINT2_REALTYPE fp97;
fp97 = fp99 - fp98;
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
LIBINT2_REALTYPE fp303;
fp303 = fp678 * fp95;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp605;
LIBINT2_REALTYPE fp305;
fp305 = fp154 * fp626;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp605;
LIBINT2_REALTYPE fp301;
fp301 = fp304 + fp302;
LIBINT2_REALTYPE fp298;
fp298 = fp301 + fp299;
LIBINT2_REALTYPE fp307;
fp307 = inteval->two_alpha0_bra[vi] * fp298;
LIBINT2_REALTYPE fp306;
fp306 = fp307 - fp501;
LIBINT2_REALTYPE fp27;
fp27 = fp306;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp532;
fp532 = fp683 * fp647;
LIBINT2_REALTYPE fp531;
fp531 = fp532 * fp94;
LIBINT2_REALTYPE fp535;
fp535 = fp683 * fp132;
LIBINT2_REALTYPE fp534;
fp534 = fp535 * fp605;
LIBINT2_REALTYPE fp162;
fp162 = 1.0000000000000000e+00 * fp679;
LIBINT2_REALTYPE fp653;
fp653 = inteval->PA_x[vi] * fp681;
LIBINT2_REALTYPE fp652;
fp652 = fp653 + fp684;
LIBINT2_REALTYPE fp164;
fp164 = fp181 * fp652;
LIBINT2_REALTYPE fp166;
fp166 = fp178 * fp691;
LIBINT2_REALTYPE fp657;
fp657 = fp696 * fp683;
LIBINT2_REALTYPE fp659;
fp659 = fp696 * fp691;
LIBINT2_REALTYPE fp660;
fp660 = inteval->PA_x[vi] * fp694;
LIBINT2_REALTYPE fp658;
fp658 = fp660 + fp659;
LIBINT2_REALTYPE fp656;
fp656 = fp658 + fp657;
LIBINT2_REALTYPE fp167;
fp167 = fp180 * fp656;
LIBINT2_REALTYPE fp165;
fp165 = fp167 - fp166;
LIBINT2_REALTYPE fp163;
fp163 = fp165 - fp164;
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
LIBINT2_REALTYPE fp537;
fp537 = fp161 * fp647;
LIBINT2_REALTYPE fp536;
fp536 = fp537 * fp605;
LIBINT2_REALTYPE fp533;
fp533 = fp536 + fp534;
LIBINT2_REALTYPE fp530;
fp530 = fp533 + fp531;
LIBINT2_REALTYPE fp540;
fp540 = inteval->two_alpha0_bra[vi] * fp530;
LIBINT2_REALTYPE fp538;
fp538 = fp540 - fp539;
LIBINT2_REALTYPE fp1;
fp1 = fp538;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp513;
fp513 = fp683 * fp651;
LIBINT2_REALTYPE fp512;
fp512 = fp513 * fp91;
LIBINT2_REALTYPE fp516;
fp516 = fp683 * fp135;
LIBINT2_REALTYPE fp515;
fp515 = fp516 * fp601;
LIBINT2_REALTYPE fp518;
fp518 = fp161 * fp651;
LIBINT2_REALTYPE fp517;
fp517 = fp518 * fp601;
LIBINT2_REALTYPE fp514;
fp514 = fp517 + fp515;
LIBINT2_REALTYPE fp511;
fp511 = fp514 + fp512;
LIBINT2_REALTYPE fp521;
fp521 = inteval->two_alpha0_bra[vi] * fp511;
LIBINT2_REALTYPE fp519;
fp519 = fp521 - fp520;
LIBINT2_REALTYPE fp2;
fp2 = fp519;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp494;
fp494 = fp681 * fp641;
LIBINT2_REALTYPE fp493;
fp493 = fp494 * fp94;
LIBINT2_REALTYPE fp497;
fp497 = fp681 * fp129;
LIBINT2_REALTYPE fp496;
fp496 = fp497 * fp605;
LIBINT2_REALTYPE fp156;
fp156 = fp178 * fp686;
LIBINT2_REALTYPE fp667;
fp667 = fp674 * fp681;
LIBINT2_REALTYPE fp668;
fp668 = inteval->PB_x[vi] * fp652;
LIBINT2_REALTYPE fp666;
fp666 = fp668 + fp667;
LIBINT2_REALTYPE fp157;
fp157 = fp180 * fp666;
LIBINT2_REALTYPE fp155;
fp155 = fp157 - fp156;
LIBINT2_REALTYPE fp499;
fp499 = fp155 * fp641;
LIBINT2_REALTYPE fp498;
fp498 = fp499 * fp605;
LIBINT2_REALTYPE fp495;
fp495 = fp498 + fp496;
LIBINT2_REALTYPE fp492;
fp492 = fp495 + fp493;
LIBINT2_REALTYPE fp502;
fp502 = inteval->two_alpha0_bra[vi] * fp492;
LIBINT2_REALTYPE fp500;
fp500 = fp502 - fp501;
LIBINT2_REALTYPE fp3;
fp3 = fp500;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp475;
fp475 = fp681 * fp647;
LIBINT2_REALTYPE fp474;
fp474 = fp475 * fp91;
LIBINT2_REALTYPE fp478;
fp478 = fp681 * fp132;
LIBINT2_REALTYPE fp477;
fp477 = fp478 * fp601;
LIBINT2_REALTYPE fp480;
fp480 = fp155 * fp647;
LIBINT2_REALTYPE fp479;
fp479 = fp480 * fp601;
LIBINT2_REALTYPE fp476;
fp476 = fp479 + fp477;
LIBINT2_REALTYPE fp473;
fp473 = fp476 + fp474;
LIBINT2_REALTYPE fp483;
fp483 = inteval->two_alpha0_bra[vi] * fp473;
LIBINT2_REALTYPE fp481;
fp481 = fp483 - fp482;
LIBINT2_REALTYPE fp4;
fp4 = fp481;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp456;
fp456 = fp681 * fp651;
LIBINT2_REALTYPE fp455;
fp455 = fp456 * fp88;
LIBINT2_REALTYPE fp459;
fp459 = fp681 * fp135;
LIBINT2_REALTYPE fp458;
fp458 = fp459 * fp595;
LIBINT2_REALTYPE fp461;
fp461 = fp155 * fp651;
LIBINT2_REALTYPE fp460;
fp460 = fp461 * fp595;
LIBINT2_REALTYPE fp457;
fp457 = fp460 + fp458;
LIBINT2_REALTYPE fp454;
fp454 = fp457 + fp455;
LIBINT2_REALTYPE fp464;
fp464 = inteval->two_alpha0_bra[vi] * fp454;
LIBINT2_REALTYPE fp462;
fp462 = fp464 - fp463;
LIBINT2_REALTYPE fp5;
fp5 = fp462;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp6;
fp6 = fp445;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp7;
fp7 = fp436;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp8;
fp8 = fp427;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp551;
fp551 = fp694 * fp651;
LIBINT2_REALTYPE fp550;
fp550 = fp551 * fp94;
LIBINT2_REALTYPE fp554;
fp554 = fp694 * fp135;
LIBINT2_REALTYPE fp553;
fp553 = fp554 * fp605;
LIBINT2_REALTYPE fp172;
fp172 = 2.0000000000000000e+00 * fp686;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp666;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp669;
LIBINT2_REALTYPE fp673;
fp673 = fp674 * fp694;
LIBINT2_REALTYPE fp676;
fp676 = fp696 * fp669;
LIBINT2_REALTYPE fp677;
fp677 = inteval->PA_x[vi] * fp661;
LIBINT2_REALTYPE fp675;
fp675 = fp677 + fp676;
LIBINT2_REALTYPE fp672;
fp672 = fp675 + fp673;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp672;
LIBINT2_REALTYPE fp176;
fp176 = fp179 - fp177;
LIBINT2_REALTYPE fp173;
fp173 = fp176 - fp174;
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp556;
fp556 = fp171 * fp651;
LIBINT2_REALTYPE fp555;
fp555 = fp556 * fp605;
LIBINT2_REALTYPE fp552;
fp552 = fp555 + fp553;
LIBINT2_REALTYPE fp549;
fp549 = fp552 + fp550;
LIBINT2_REALTYPE fp559;
fp559 = inteval->two_alpha0_bra[vi] * fp549;
LIBINT2_REALTYPE fp557;
fp557 = fp559 - fp558;
LIBINT2_REALTYPE fp0;
fp0 = fp557;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+0)*1+lsi)*1]),&(fp0),1);
LIBINT2_REALTYPE fp10;
fp10 = fp409;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp11;
fp11 = fp400;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp12;
fp12 = fp391;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp13;
fp13 = fp382;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp14;
fp14 = fp373;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp15;
fp15 = fp364;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp16;
fp16 = fp355;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp17;
fp17 = fp346;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp9;
fp9 = fp418;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+9)*1+lsi)*1]),&(fp9),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 701 */
}

#ifdef __cplusplus
};
#endif
