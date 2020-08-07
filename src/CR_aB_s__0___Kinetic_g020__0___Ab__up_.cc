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
void CR_aB_s__0___Kinetic_g020__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src2[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp4 * src2[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 - fp1;
LIBINT2_REALTYPE fp133;
fp133 = src0[((hsi*16+0)*1+lsi)*1] * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp0;
LIBINT2_REALTYPE fp97;
fp97 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp95;
fp95 = fp96 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = src0[((hsi*16+0)*1+lsi)*1] * fp95;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp105;
fp105 = fp106 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp105 * src0[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp104 * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp138 * src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
LIBINT2_REALTYPE fp131;
fp131 = fp134 + fp132;
LIBINT2_REALTYPE fp148;
fp148 = 1.0000000000000000e+00 * fp131;
LIBINT2_REALTYPE fp530;
fp530 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp529;
fp529 = fp530 * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp531;
fp531 = inteval->PA_y[vi] * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp528;
fp528 = fp531 + fp529;
LIBINT2_REALTYPE fp141;
fp141 = src0[((hsi*16+0)*1+lsi)*1] * fp528;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp0;
LIBINT2_REALTYPE fp100;
fp100 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp523;
fp523 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp522;
fp522 = fp523 * fp528;
LIBINT2_REALTYPE fp526;
fp526 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp525;
fp525 = fp526 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp516;
fp516 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp515;
fp515 = fp516 * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp519;
fp519 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp518;
fp518 = fp519 * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp520;
fp520 = inteval->PA_y[vi] * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp517;
fp517 = fp520 + fp518;
LIBINT2_REALTYPE fp514;
fp514 = fp517 + fp515;
LIBINT2_REALTYPE fp527;
fp527 = inteval->PA_y[vi] * fp514;
LIBINT2_REALTYPE fp524;
fp524 = fp527 + fp525;
LIBINT2_REALTYPE fp521;
fp521 = fp524 + fp522;
LIBINT2_REALTYPE fp103;
fp103 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp102;
fp102 = fp103 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp521;
LIBINT2_REALTYPE fp98;
fp98 = fp101 - fp99;
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*16+0)*1+lsi)*1] * fp98;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp104 * fp528;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * src2[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp145 + fp143;
LIBINT2_REALTYPE fp139;
fp139 = fp142 + fp140;
LIBINT2_REALTYPE fp149;
fp149 = inteval->two_alpha0_bra[vi] * fp139;
LIBINT2_REALTYPE fp147;
fp147 = fp149 - fp148;
LIBINT2_REALTYPE fp150;
fp150 = -1.0000000000000000e+00 * fp147;
LIBINT2_REALTYPE fp151;
fp151 = inteval->two_alpha0_bra[vi] * fp150;
LIBINT2_REALTYPE fp446;
fp446 = -1.0000000000000000e+00 * fp151;
target[((hsi*15+14)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp8;
fp8 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp8 * src2[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * src2[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp9 - fp7;
LIBINT2_REALTYPE fp154;
fp154 = src0[((hsi*16+0)*1+lsi)*1] * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp6;
LIBINT2_REALTYPE fp80;
fp80 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp82 * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp81 - fp79;
LIBINT2_REALTYPE fp157;
fp157 = src0[((hsi*16+0)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp104 * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp159 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp158 + fp156;
LIBINT2_REALTYPE fp152;
fp152 = fp155 + fp153;
LIBINT2_REALTYPE fp169;
fp169 = 1.0000000000000000e+00 * fp152;
LIBINT2_REALTYPE fp162;
fp162 = src0[((hsi*16+0)*1+lsi)*1] * fp514;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp6;
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp512;
fp512 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp511;
fp511 = fp512 * src1[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp513;
fp513 = inteval->PA_y[vi] * fp528;
LIBINT2_REALTYPE fp510;
fp510 = fp513 + fp511;
LIBINT2_REALTYPE fp88;
fp88 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp510;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp90;
fp90 = fp91 * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp505;
fp505 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp504;
fp504 = fp505 * fp514;
LIBINT2_REALTYPE fp508;
fp508 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp507;
fp507 = fp508 * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp498;
fp498 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp497;
fp497 = fp498 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp501;
fp501 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp500;
fp500 = fp501 * src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp502;
fp502 = inteval->PA_y[vi] * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp499;
fp499 = fp502 + fp500;
LIBINT2_REALTYPE fp496;
fp496 = fp499 + fp497;
LIBINT2_REALTYPE fp509;
fp509 = inteval->PA_y[vi] * fp496;
LIBINT2_REALTYPE fp506;
fp506 = fp509 + fp507;
LIBINT2_REALTYPE fp503;
fp503 = fp506 + fp504;
LIBINT2_REALTYPE fp94;
fp94 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp93;
fp93 = fp94 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp503;
LIBINT2_REALTYPE fp89;
fp89 = fp92 - fp90;
LIBINT2_REALTYPE fp86;
fp86 = fp89 - fp87;
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
LIBINT2_REALTYPE fp165;
fp165 = src0[((hsi*16+0)*1+lsi)*1] * fp84;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp104 * fp514;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp166 + fp164;
LIBINT2_REALTYPE fp160;
fp160 = fp163 + fp161;
LIBINT2_REALTYPE fp170;
fp170 = inteval->two_alpha0_bra[vi] * fp160;
LIBINT2_REALTYPE fp168;
fp168 = fp170 - fp169;
LIBINT2_REALTYPE fp171;
fp171 = -1.0000000000000000e+00 * fp168;
LIBINT2_REALTYPE fp172;
fp172 = inteval->two_alpha0_bra[vi] * fp171;
LIBINT2_REALTYPE fp447;
fp447 = -1.0000000000000000e+00 * fp172;
target[((hsi*15+13)*1+lsi)*1] = fp447;
LIBINT2_REALTYPE fp14;
fp14 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src2[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp16;
fp16 = fp17 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * src2[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp15 - fp13;
LIBINT2_REALTYPE fp175;
fp175 = src0[((hsi*16+0)*1+lsi)*1] * src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp12;
LIBINT2_REALTYPE fp63;
fp63 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp62;
fp62 = fp63 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp66 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp64 - fp62;
LIBINT2_REALTYPE fp178;
fp178 = src0[((hsi*16+0)*1+lsi)*1] * fp61;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp104 * src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = fp180 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp179 + fp177;
LIBINT2_REALTYPE fp173;
fp173 = fp176 + fp174;
LIBINT2_REALTYPE fp190;
fp190 = 1.0000000000000000e+00 * fp173;
LIBINT2_REALTYPE fp183;
fp183 = src0[((hsi*16+0)*1+lsi)*1] * fp496;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp12;
LIBINT2_REALTYPE fp68;
fp68 = 2.0000000000000000e+00 * src1[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp521;
LIBINT2_REALTYPE fp74;
fp74 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp491;
fp491 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp490;
fp490 = fp491 * fp521;
LIBINT2_REALTYPE fp494;
fp494 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp493;
fp493 = fp494 * fp496;
LIBINT2_REALTYPE fp495;
fp495 = inteval->PB_y[vi] * fp503;
LIBINT2_REALTYPE fp492;
fp492 = fp495 + fp493;
LIBINT2_REALTYPE fp489;
fp489 = fp492 + fp490;
LIBINT2_REALTYPE fp77;
fp77 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp489;
LIBINT2_REALTYPE fp72;
fp72 = fp75 - fp73;
LIBINT2_REALTYPE fp69;
fp69 = fp72 - fp70;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp186;
fp186 = src0[((hsi*16+0)*1+lsi)*1] * fp67;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp104 * fp496;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp187 + fp185;
LIBINT2_REALTYPE fp181;
fp181 = fp184 + fp182;
LIBINT2_REALTYPE fp191;
fp191 = inteval->two_alpha0_bra[vi] * fp181;
LIBINT2_REALTYPE fp189;
fp189 = fp191 - fp190;
LIBINT2_REALTYPE fp192;
fp192 = -1.0000000000000000e+00 * fp189;
LIBINT2_REALTYPE fp193;
fp193 = inteval->two_alpha0_bra[vi] * fp192;
LIBINT2_REALTYPE fp448;
fp448 = -1.0000000000000000e+00 * fp193;
target[((hsi*15+12)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp20;
fp20 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * src2[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp21 - fp19;
LIBINT2_REALTYPE fp196;
fp196 = src0[((hsi*16+0)*1+lsi)*1] * src1[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp18;
LIBINT2_REALTYPE fp46;
fp46 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp46 * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp48;
fp48 = fp49 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp47 - fp45;
LIBINT2_REALTYPE fp199;
fp199 = src0[((hsi*16+0)*1+lsi)*1] * fp44;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp104 * src1[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp201 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
fp197 = fp200 + fp198;
LIBINT2_REALTYPE fp194;
fp194 = fp197 + fp195;
LIBINT2_REALTYPE fp211;
fp211 = 1.0000000000000000e+00 * fp194;
LIBINT2_REALTYPE fp484;
fp484 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp483;
fp483 = fp484 * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp487;
fp487 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp486;
fp486 = fp487 * src1[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp488;
fp488 = inteval->PA_y[vi] * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp485;
fp485 = fp488 + fp486;
LIBINT2_REALTYPE fp482;
fp482 = fp485 + fp483;
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*16+0)*1+lsi)*1] * fp482;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp18;
LIBINT2_REALTYPE fp51;
fp51 = 3.0000000000000000e+00 * src1[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp503;
LIBINT2_REALTYPE fp57;
fp57 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp57 * src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp477;
fp477 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp476;
fp476 = fp477 * fp503;
LIBINT2_REALTYPE fp480;
fp480 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp479;
fp479 = fp480 * fp482;
LIBINT2_REALTYPE fp481;
fp481 = inteval->PB_y[vi] * fp489;
LIBINT2_REALTYPE fp478;
fp478 = fp481 + fp479;
LIBINT2_REALTYPE fp475;
fp475 = fp478 + fp476;
LIBINT2_REALTYPE fp60;
fp60 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp60 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp475;
LIBINT2_REALTYPE fp55;
fp55 = fp58 - fp56;
LIBINT2_REALTYPE fp52;
fp52 = fp55 - fp53;
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp207;
fp207 = src0[((hsi*16+0)*1+lsi)*1] * fp50;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp104 * fp482;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp208 + fp206;
LIBINT2_REALTYPE fp202;
fp202 = fp205 + fp203;
LIBINT2_REALTYPE fp212;
fp212 = inteval->two_alpha0_bra[vi] * fp202;
LIBINT2_REALTYPE fp210;
fp210 = fp212 - fp211;
LIBINT2_REALTYPE fp213;
fp213 = -1.0000000000000000e+00 * fp210;
LIBINT2_REALTYPE fp214;
fp214 = inteval->two_alpha0_bra[vi] * fp213;
LIBINT2_REALTYPE fp449;
fp449 = -1.0000000000000000e+00 * fp214;
target[((hsi*15+11)*1+lsi)*1] = fp449;
LIBINT2_REALTYPE fp26;
fp26 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp24;
fp24 = fp25 * src2[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = src0[((hsi*16+0)*1+lsi)*1] * src1[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp24;
LIBINT2_REALTYPE fp29;
fp29 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * src1[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp30 - fp28;
LIBINT2_REALTYPE fp220;
fp220 = src0[((hsi*16+0)*1+lsi)*1] * fp27;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp104 * src1[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp222 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = fp221 + fp219;
LIBINT2_REALTYPE fp215;
fp215 = fp218 + fp216;
LIBINT2_REALTYPE fp232;
fp232 = 1.0000000000000000e+00 * fp215;
LIBINT2_REALTYPE fp470;
fp470 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp469;
fp469 = fp470 * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp473;
fp473 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp472;
fp472 = fp473 * src1[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp474;
fp474 = inteval->PA_y[vi] * src1[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp471;
fp471 = fp474 + fp472;
LIBINT2_REALTYPE fp468;
fp468 = fp471 + fp469;
LIBINT2_REALTYPE fp225;
fp225 = src0[((hsi*16+0)*1+lsi)*1] * fp468;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp24;
LIBINT2_REALTYPE fp34;
fp34 = 4.0000000000000000e+00 * src1[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp489;
LIBINT2_REALTYPE fp40;
fp40 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * src1[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp463;
fp463 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp462;
fp462 = fp463 * fp489;
LIBINT2_REALTYPE fp466;
fp466 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp465;
fp465 = fp466 * fp468;
LIBINT2_REALTYPE fp467;
fp467 = inteval->PB_y[vi] * fp475;
LIBINT2_REALTYPE fp464;
fp464 = fp467 + fp465;
LIBINT2_REALTYPE fp461;
fp461 = fp464 + fp462;
LIBINT2_REALTYPE fp43;
fp43 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp43 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp461;
LIBINT2_REALTYPE fp38;
fp38 = fp41 - fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 - fp36;
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp228;
fp228 = src0[((hsi*16+0)*1+lsi)*1] * fp33;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = fp104 * fp468;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp229 + fp227;
LIBINT2_REALTYPE fp223;
fp223 = fp226 + fp224;
LIBINT2_REALTYPE fp233;
fp233 = inteval->two_alpha0_bra[vi] * fp223;
LIBINT2_REALTYPE fp231;
fp231 = fp233 - fp232;
LIBINT2_REALTYPE fp234;
fp234 = -1.0000000000000000e+00 * fp231;
LIBINT2_REALTYPE fp235;
fp235 = inteval->two_alpha0_bra[vi] * fp234;
LIBINT2_REALTYPE fp450;
fp450 = -1.0000000000000000e+00 * fp235;
target[((hsi*15+10)*1+lsi)*1] = fp450;
LIBINT2_REALTYPE fp238;
fp238 = src0[((hsi*16+1)*1+lsi)*1] * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp6;
LIBINT2_REALTYPE fp241;
fp241 = src0[((hsi*16+1)*1+lsi)*1] * fp95;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp109 * src0[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp111;
fp111 = fp112 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * src0[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp110 - fp108;
LIBINT2_REALTYPE fp243;
fp243 = fp107 * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp243 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = fp242 + fp240;
LIBINT2_REALTYPE fp236;
fp236 = fp239 + fp237;
LIBINT2_REALTYPE fp253;
fp253 = 1.0000000000000000e+00 * fp236;
LIBINT2_REALTYPE fp246;
fp246 = src0[((hsi*16+1)*1+lsi)*1] * fp528;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp6;
LIBINT2_REALTYPE fp249;
fp249 = src0[((hsi*16+1)*1+lsi)*1] * fp98;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp107 * fp528;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * src2[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp250 + fp248;
LIBINT2_REALTYPE fp244;
fp244 = fp247 + fp245;
LIBINT2_REALTYPE fp254;
fp254 = inteval->two_alpha0_bra[vi] * fp244;
LIBINT2_REALTYPE fp252;
fp252 = fp254 - fp253;
LIBINT2_REALTYPE fp255;
fp255 = -1.0000000000000000e+00 * fp252;
LIBINT2_REALTYPE fp256;
fp256 = inteval->two_alpha0_bra[vi] * fp255;
LIBINT2_REALTYPE fp451;
fp451 = -1.0000000000000000e+00 * fp256;
target[((hsi*15+9)*1+lsi)*1] = fp451;
LIBINT2_REALTYPE fp259;
fp259 = src0[((hsi*16+1)*1+lsi)*1] * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp12;
LIBINT2_REALTYPE fp262;
fp262 = src0[((hsi*16+1)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = fp107 * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp264 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp263 + fp261;
LIBINT2_REALTYPE fp257;
fp257 = fp260 + fp258;
LIBINT2_REALTYPE fp274;
fp274 = 1.0000000000000000e+00 * fp257;
LIBINT2_REALTYPE fp267;
fp267 = src0[((hsi*16+1)*1+lsi)*1] * fp514;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp12;
LIBINT2_REALTYPE fp270;
fp270 = src0[((hsi*16+1)*1+lsi)*1] * fp84;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp107 * fp514;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = fp271 + fp269;
LIBINT2_REALTYPE fp265;
fp265 = fp268 + fp266;
LIBINT2_REALTYPE fp275;
fp275 = inteval->two_alpha0_bra[vi] * fp265;
LIBINT2_REALTYPE fp273;
fp273 = fp275 - fp274;
LIBINT2_REALTYPE fp276;
fp276 = -1.0000000000000000e+00 * fp273;
LIBINT2_REALTYPE fp277;
fp277 = inteval->two_alpha0_bra[vi] * fp276;
LIBINT2_REALTYPE fp452;
fp452 = -1.0000000000000000e+00 * fp277;
target[((hsi*15+8)*1+lsi)*1] = fp452;
LIBINT2_REALTYPE fp280;
fp280 = src0[((hsi*16+1)*1+lsi)*1] * src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp18;
LIBINT2_REALTYPE fp283;
fp283 = src0[((hsi*16+1)*1+lsi)*1] * fp61;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = fp107 * src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp284;
fp284 = fp285 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp281;
fp281 = fp284 + fp282;
LIBINT2_REALTYPE fp278;
fp278 = fp281 + fp279;
LIBINT2_REALTYPE fp295;
fp295 = 1.0000000000000000e+00 * fp278;
LIBINT2_REALTYPE fp288;
fp288 = src0[((hsi*16+1)*1+lsi)*1] * fp496;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp18;
LIBINT2_REALTYPE fp291;
fp291 = src0[((hsi*16+1)*1+lsi)*1] * fp67;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = fp107 * fp496;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp289;
fp289 = fp292 + fp290;
LIBINT2_REALTYPE fp286;
fp286 = fp289 + fp287;
LIBINT2_REALTYPE fp296;
fp296 = inteval->two_alpha0_bra[vi] * fp286;
LIBINT2_REALTYPE fp294;
fp294 = fp296 - fp295;
LIBINT2_REALTYPE fp297;
fp297 = -1.0000000000000000e+00 * fp294;
LIBINT2_REALTYPE fp298;
fp298 = inteval->two_alpha0_bra[vi] * fp297;
LIBINT2_REALTYPE fp453;
fp453 = -1.0000000000000000e+00 * fp298;
target[((hsi*15+7)*1+lsi)*1] = fp453;
LIBINT2_REALTYPE fp301;
fp301 = src0[((hsi*16+1)*1+lsi)*1] * src1[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp24;
LIBINT2_REALTYPE fp304;
fp304 = src0[((hsi*16+1)*1+lsi)*1] * fp44;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = fp107 * src1[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = fp306 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
fp302 = fp305 + fp303;
LIBINT2_REALTYPE fp299;
fp299 = fp302 + fp300;
LIBINT2_REALTYPE fp316;
fp316 = 1.0000000000000000e+00 * fp299;
LIBINT2_REALTYPE fp309;
fp309 = src0[((hsi*16+1)*1+lsi)*1] * fp482;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp24;
LIBINT2_REALTYPE fp312;
fp312 = src0[((hsi*16+1)*1+lsi)*1] * fp50;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp314;
fp314 = fp107 * fp482;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp310;
fp310 = fp313 + fp311;
LIBINT2_REALTYPE fp307;
fp307 = fp310 + fp308;
LIBINT2_REALTYPE fp317;
fp317 = inteval->two_alpha0_bra[vi] * fp307;
LIBINT2_REALTYPE fp315;
fp315 = fp317 - fp316;
LIBINT2_REALTYPE fp318;
fp318 = -1.0000000000000000e+00 * fp315;
LIBINT2_REALTYPE fp319;
fp319 = inteval->two_alpha0_bra[vi] * fp318;
LIBINT2_REALTYPE fp454;
fp454 = -1.0000000000000000e+00 * fp319;
target[((hsi*15+6)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp322;
fp322 = src0[((hsi*16+2)*1+lsi)*1] * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp12;
LIBINT2_REALTYPE fp325;
fp325 = src0[((hsi*16+2)*1+lsi)*1] * fp95;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * src0[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * src0[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp116 - fp114;
LIBINT2_REALTYPE fp327;
fp327 = fp113 * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
fp326 = fp327 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
fp323 = fp326 + fp324;
LIBINT2_REALTYPE fp320;
fp320 = fp323 + fp321;
LIBINT2_REALTYPE fp337;
fp337 = 1.0000000000000000e+00 * fp320;
LIBINT2_REALTYPE fp330;
fp330 = src0[((hsi*16+2)*1+lsi)*1] * fp528;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp12;
LIBINT2_REALTYPE fp333;
fp333 = src0[((hsi*16+2)*1+lsi)*1] * fp98;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = fp113 * fp528;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * src2[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp331;
fp331 = fp334 + fp332;
LIBINT2_REALTYPE fp328;
fp328 = fp331 + fp329;
LIBINT2_REALTYPE fp338;
fp338 = inteval->two_alpha0_bra[vi] * fp328;
LIBINT2_REALTYPE fp336;
fp336 = fp338 - fp337;
LIBINT2_REALTYPE fp339;
fp339 = -1.0000000000000000e+00 * fp336;
LIBINT2_REALTYPE fp340;
fp340 = inteval->two_alpha0_bra[vi] * fp339;
LIBINT2_REALTYPE fp455;
fp455 = -1.0000000000000000e+00 * fp340;
target[((hsi*15+5)*1+lsi)*1] = fp455;
LIBINT2_REALTYPE fp343;
fp343 = src0[((hsi*16+2)*1+lsi)*1] * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp18;
LIBINT2_REALTYPE fp346;
fp346 = src0[((hsi*16+2)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp345;
fp345 = fp346 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp348;
fp348 = fp113 * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp347;
fp347 = fp348 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp344;
fp344 = fp347 + fp345;
LIBINT2_REALTYPE fp341;
fp341 = fp344 + fp342;
LIBINT2_REALTYPE fp358;
fp358 = 1.0000000000000000e+00 * fp341;
LIBINT2_REALTYPE fp351;
fp351 = src0[((hsi*16+2)*1+lsi)*1] * fp514;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp18;
LIBINT2_REALTYPE fp354;
fp354 = src0[((hsi*16+2)*1+lsi)*1] * fp84;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = fp113 * fp514;
LIBINT2_REALTYPE fp355;
fp355 = fp356 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp352;
fp352 = fp355 + fp353;
LIBINT2_REALTYPE fp349;
fp349 = fp352 + fp350;
LIBINT2_REALTYPE fp359;
fp359 = inteval->two_alpha0_bra[vi] * fp349;
LIBINT2_REALTYPE fp357;
fp357 = fp359 - fp358;
LIBINT2_REALTYPE fp360;
fp360 = -1.0000000000000000e+00 * fp357;
LIBINT2_REALTYPE fp361;
fp361 = inteval->two_alpha0_bra[vi] * fp360;
LIBINT2_REALTYPE fp456;
fp456 = -1.0000000000000000e+00 * fp361;
target[((hsi*15+4)*1+lsi)*1] = fp456;
LIBINT2_REALTYPE fp364;
fp364 = src0[((hsi*16+2)*1+lsi)*1] * src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp363;
fp363 = fp364 * fp24;
LIBINT2_REALTYPE fp367;
fp367 = src0[((hsi*16+2)*1+lsi)*1] * fp61;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = fp113 * src1[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp368;
fp368 = fp369 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp365;
fp365 = fp368 + fp366;
LIBINT2_REALTYPE fp362;
fp362 = fp365 + fp363;
LIBINT2_REALTYPE fp379;
fp379 = 1.0000000000000000e+00 * fp362;
LIBINT2_REALTYPE fp372;
fp372 = src0[((hsi*16+2)*1+lsi)*1] * fp496;
LIBINT2_REALTYPE fp371;
fp371 = fp372 * fp24;
LIBINT2_REALTYPE fp375;
fp375 = src0[((hsi*16+2)*1+lsi)*1] * fp67;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
fp377 = fp113 * fp496;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp373;
fp373 = fp376 + fp374;
LIBINT2_REALTYPE fp370;
fp370 = fp373 + fp371;
LIBINT2_REALTYPE fp380;
fp380 = inteval->two_alpha0_bra[vi] * fp370;
LIBINT2_REALTYPE fp378;
fp378 = fp380 - fp379;
LIBINT2_REALTYPE fp381;
fp381 = -1.0000000000000000e+00 * fp378;
LIBINT2_REALTYPE fp382;
fp382 = inteval->two_alpha0_bra[vi] * fp381;
LIBINT2_REALTYPE fp457;
fp457 = -1.0000000000000000e+00 * fp382;
target[((hsi*15+3)*1+lsi)*1] = fp457;
LIBINT2_REALTYPE fp385;
fp385 = src0[((hsi*16+3)*1+lsi)*1] * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp18;
LIBINT2_REALTYPE fp388;
fp388 = src0[((hsi*16+3)*1+lsi)*1] * fp95;
LIBINT2_REALTYPE fp387;
fp387 = fp388 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * src0[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp123;
fp123 = fp124 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp122;
fp122 = fp123 * src0[((hsi*16+12)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp122 - fp120;
LIBINT2_REALTYPE fp390;
fp390 = fp119 * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp389;
fp389 = fp390 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp386;
fp386 = fp389 + fp387;
LIBINT2_REALTYPE fp383;
fp383 = fp386 + fp384;
LIBINT2_REALTYPE fp400;
fp400 = 1.0000000000000000e+00 * fp383;
LIBINT2_REALTYPE fp393;
fp393 = src0[((hsi*16+3)*1+lsi)*1] * fp528;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp18;
LIBINT2_REALTYPE fp396;
fp396 = src0[((hsi*16+3)*1+lsi)*1] * fp98;
LIBINT2_REALTYPE fp395;
fp395 = fp396 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp398;
fp398 = fp119 * fp528;
LIBINT2_REALTYPE fp397;
fp397 = fp398 * src2[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp394;
fp394 = fp397 + fp395;
LIBINT2_REALTYPE fp391;
fp391 = fp394 + fp392;
LIBINT2_REALTYPE fp401;
fp401 = inteval->two_alpha0_bra[vi] * fp391;
LIBINT2_REALTYPE fp399;
fp399 = fp401 - fp400;
LIBINT2_REALTYPE fp402;
fp402 = -1.0000000000000000e+00 * fp399;
LIBINT2_REALTYPE fp403;
fp403 = inteval->two_alpha0_bra[vi] * fp402;
LIBINT2_REALTYPE fp458;
fp458 = -1.0000000000000000e+00 * fp403;
target[((hsi*15+2)*1+lsi)*1] = fp458;
LIBINT2_REALTYPE fp406;
fp406 = src0[((hsi*16+3)*1+lsi)*1] * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp405;
fp405 = fp406 * fp24;
LIBINT2_REALTYPE fp409;
fp409 = src0[((hsi*16+3)*1+lsi)*1] * fp78;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp411;
fp411 = fp119 * src1[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp410;
fp410 = fp411 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp407;
fp407 = fp410 + fp408;
LIBINT2_REALTYPE fp404;
fp404 = fp407 + fp405;
LIBINT2_REALTYPE fp421;
fp421 = 1.0000000000000000e+00 * fp404;
LIBINT2_REALTYPE fp414;
fp414 = src0[((hsi*16+3)*1+lsi)*1] * fp514;
LIBINT2_REALTYPE fp413;
fp413 = fp414 * fp24;
LIBINT2_REALTYPE fp417;
fp417 = src0[((hsi*16+3)*1+lsi)*1] * fp84;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp419;
fp419 = fp119 * fp514;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp415;
fp415 = fp418 + fp416;
LIBINT2_REALTYPE fp412;
fp412 = fp415 + fp413;
LIBINT2_REALTYPE fp422;
fp422 = inteval->two_alpha0_bra[vi] * fp412;
LIBINT2_REALTYPE fp420;
fp420 = fp422 - fp421;
LIBINT2_REALTYPE fp423;
fp423 = -1.0000000000000000e+00 * fp420;
LIBINT2_REALTYPE fp424;
fp424 = inteval->two_alpha0_bra[vi] * fp423;
LIBINT2_REALTYPE fp459;
fp459 = -1.0000000000000000e+00 * fp424;
target[((hsi*15+1)*1+lsi)*1] = fp459;
LIBINT2_REALTYPE fp427;
fp427 = src0[((hsi*16+4)*1+lsi)*1] * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp24;
LIBINT2_REALTYPE fp430;
fp430 = src0[((hsi*16+4)*1+lsi)*1] * fp95;
LIBINT2_REALTYPE fp429;
fp429 = fp430 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp126;
fp126 = fp127 * src0[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp130 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * src0[((hsi*16+13)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp128 - fp126;
LIBINT2_REALTYPE fp432;
fp432 = fp125 * src1[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp431;
fp431 = fp432 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp428;
fp428 = fp431 + fp429;
LIBINT2_REALTYPE fp425;
fp425 = fp428 + fp426;
LIBINT2_REALTYPE fp442;
fp442 = 1.0000000000000000e+00 * fp425;
LIBINT2_REALTYPE fp435;
fp435 = src0[((hsi*16+4)*1+lsi)*1] * fp528;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp24;
LIBINT2_REALTYPE fp438;
fp438 = src0[((hsi*16+4)*1+lsi)*1] * fp98;
LIBINT2_REALTYPE fp437;
fp437 = fp438 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp440;
fp440 = fp125 * fp528;
LIBINT2_REALTYPE fp439;
fp439 = fp440 * src2[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp436;
fp436 = fp439 + fp437;
LIBINT2_REALTYPE fp433;
fp433 = fp436 + fp434;
LIBINT2_REALTYPE fp443;
fp443 = inteval->two_alpha0_bra[vi] * fp433;
LIBINT2_REALTYPE fp441;
fp441 = fp443 - fp442;
LIBINT2_REALTYPE fp444;
fp444 = -1.0000000000000000e+00 * fp441;
LIBINT2_REALTYPE fp445;
fp445 = inteval->two_alpha0_bra[vi] * fp444;
LIBINT2_REALTYPE fp460;
fp460 = -1.0000000000000000e+00 * fp445;
target[((hsi*15+0)*1+lsi)*1] = fp460;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 532 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif