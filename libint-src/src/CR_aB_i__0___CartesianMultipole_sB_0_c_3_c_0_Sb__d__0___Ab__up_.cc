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
void CR_aB_i__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = 0.0000000000000000e+00 + src0[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src1[((hsi*42+27)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src1[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_y[vi] * fp98;
LIBINT2_REALTYPE fp96;
fp96 = fp95 + fp97;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src1[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_y[vi] * fp99;
LIBINT2_REALTYPE fp101;
fp101 = fp98 + fp102;
LIBINT2_REALTYPE fp106;
fp106 = inteval->BO_y[vi] * fp101;
LIBINT2_REALTYPE fp105;
fp105 = fp96 + fp106;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src1[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->BO_y[vi] * fp100;
LIBINT2_REALTYPE fp103;
fp103 = fp99 + fp104;
LIBINT2_REALTYPE fp108;
fp108 = inteval->BO_y[vi] * fp103;
LIBINT2_REALTYPE fp107;
fp107 = fp101 + fp108;
LIBINT2_REALTYPE fp110;
fp110 = inteval->BO_y[vi] * fp107;
LIBINT2_REALTYPE fp109;
fp109 = fp105 + fp110;
LIBINT2_REALTYPE fp463;
fp463 = fp238 * fp109;
LIBINT2_REALTYPE fp462;
fp462 = fp463 * fp19;
target[((hsi*168+62)*1+lsi)*1] = fp462;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src1[((hsi*42+28)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_y[vi] * fp95;
LIBINT2_REALTYPE fp89;
fp89 = fp88 + fp90;
LIBINT2_REALTYPE fp92;
fp92 = inteval->BO_y[vi] * fp96;
LIBINT2_REALTYPE fp91;
fp91 = fp89 + fp92;
LIBINT2_REALTYPE fp94;
fp94 = inteval->BO_y[vi] * fp105;
LIBINT2_REALTYPE fp93;
fp93 = fp91 + fp94;
LIBINT2_REALTYPE fp465;
fp465 = fp238 * fp93;
LIBINT2_REALTYPE fp464;
fp464 = fp465 * fp20;
target[((hsi*168+61)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp239;
fp239 = 0.0000000000000000e+00 + src0[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp467;
fp467 = fp239 * fp109;
LIBINT2_REALTYPE fp466;
fp466 = fp467 * fp20;
target[((hsi*168+60)*1+lsi)*1] = fp466;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = 0.0000000000000000e+00 + src1[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = 0.0000000000000000e+00 + src1[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = inteval->BO_y[vi] * fp218;
LIBINT2_REALTYPE fp216;
fp216 = fp215 + fp217;
LIBINT2_REALTYPE fp219;
fp219 = 0.0000000000000000e+00 + src1[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = inteval->BO_y[vi] * fp219;
LIBINT2_REALTYPE fp221;
fp221 = fp218 + fp222;
LIBINT2_REALTYPE fp226;
fp226 = inteval->BO_y[vi] * fp221;
LIBINT2_REALTYPE fp225;
fp225 = fp216 + fp226;
LIBINT2_REALTYPE fp220;
fp220 = 0.0000000000000000e+00 + src1[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = inteval->BO_y[vi] * fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp219 + fp224;
LIBINT2_REALTYPE fp228;
fp228 = inteval->BO_y[vi] * fp223;
LIBINT2_REALTYPE fp227;
fp227 = fp221 + fp228;
LIBINT2_REALTYPE fp230;
fp230 = inteval->BO_y[vi] * fp227;
LIBINT2_REALTYPE fp229;
fp229 = fp225 + fp230;
LIBINT2_REALTYPE fp240;
fp240 = 0.0000000000000000e+00 + src0[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp469;
fp469 = fp240 * fp229;
LIBINT2_REALTYPE fp468;
fp468 = fp469 * fp9;
target[((hsi*168+59)*1+lsi)*1] = fp468;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = 0.0000000000000000e+00 + src1[((hsi*42+4)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = inteval->BO_y[vi] * fp215;
LIBINT2_REALTYPE fp209;
fp209 = fp208 + fp210;
LIBINT2_REALTYPE fp212;
fp212 = inteval->BO_y[vi] * fp216;
LIBINT2_REALTYPE fp211;
fp211 = fp209 + fp212;
LIBINT2_REALTYPE fp214;
fp214 = inteval->BO_y[vi] * fp225;
LIBINT2_REALTYPE fp213;
fp213 = fp211 + fp214;
LIBINT2_REALTYPE fp471;
fp471 = fp240 * fp213;
LIBINT2_REALTYPE fp470;
fp470 = fp471 * fp10;
target[((hsi*168+58)*1+lsi)*1] = fp470;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = inteval->BO_y[vi] * fp211;
LIBINT2_REALTYPE fp205;
fp205 = inteval->BO_y[vi] * fp209;
LIBINT2_REALTYPE fp203;
fp203 = inteval->BO_y[vi] * fp208;
LIBINT2_REALTYPE fp201;
fp201 = 0.0000000000000000e+00 + src1[((hsi*42+5)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp201 + fp203;
LIBINT2_REALTYPE fp204;
fp204 = fp202 + fp205;
LIBINT2_REALTYPE fp206;
fp206 = fp204 + fp207;
LIBINT2_REALTYPE fp473;
fp473 = fp240 * fp206;
LIBINT2_REALTYPE fp472;
fp472 = fp473 * fp11;
target[((hsi*168+57)*1+lsi)*1] = fp472;
LIBINT2_REALTYPE fp241;
fp241 = 0.0000000000000000e+00 + src0[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp475;
fp475 = fp241 * fp229;
LIBINT2_REALTYPE fp474;
fp474 = fp475 * fp10;
target[((hsi*168+56)*1+lsi)*1] = fp474;
LIBINT2_REALTYPE fp477;
fp477 = fp241 * fp213;
LIBINT2_REALTYPE fp476;
fp476 = fp477 * fp11;
target[((hsi*168+55)*1+lsi)*1] = fp476;
LIBINT2_REALTYPE fp242;
fp242 = 0.0000000000000000e+00 + src0[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp479;
fp479 = fp242 * fp229;
LIBINT2_REALTYPE fp478;
fp478 = fp479 * fp11;
target[((hsi*168+54)*1+lsi)*1] = fp478;
LIBINT2_REALTYPE fp251;
fp251 = 0.0000000000000000e+00 + src0[((hsi*42+38)*1+lsi)*1];
LIBINT2_REALTYPE fp587;
fp587 = fp251 * fp229;
LIBINT2_REALTYPE fp586;
fp586 = fp587 * fp20;
target[((hsi*168+0)*1+lsi)*1] = fp586;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = 0.0000000000000000e+00 + src1[((hsi*42+10)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = 0.0000000000000000e+00 + src1[((hsi*42+9)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = inteval->BO_y[vi] * fp185;
LIBINT2_REALTYPE fp179;
fp179 = fp178 + fp180;
LIBINT2_REALTYPE fp188;
fp188 = 0.0000000000000000e+00 + src1[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = inteval->BO_y[vi] * fp188;
LIBINT2_REALTYPE fp186;
fp186 = fp185 + fp187;
LIBINT2_REALTYPE fp182;
fp182 = inteval->BO_y[vi] * fp186;
LIBINT2_REALTYPE fp181;
fp181 = fp179 + fp182;
LIBINT2_REALTYPE fp189;
fp189 = 0.0000000000000000e+00 + src1[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = inteval->BO_y[vi] * fp189;
LIBINT2_REALTYPE fp191;
fp191 = fp188 + fp192;
LIBINT2_REALTYPE fp196;
fp196 = inteval->BO_y[vi] * fp191;
LIBINT2_REALTYPE fp195;
fp195 = fp186 + fp196;
LIBINT2_REALTYPE fp184;
fp184 = inteval->BO_y[vi] * fp195;
LIBINT2_REALTYPE fp183;
fp183 = fp181 + fp184;
LIBINT2_REALTYPE fp483;
fp483 = fp240 * fp183;
LIBINT2_REALTYPE fp482;
fp482 = fp483 * fp13;
target[((hsi*168+52)*1+lsi)*1] = fp482;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = inteval->BO_y[vi] * fp181;
LIBINT2_REALTYPE fp175;
fp175 = inteval->BO_y[vi] * fp179;
LIBINT2_REALTYPE fp173;
fp173 = inteval->BO_y[vi] * fp178;
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + src1[((hsi*42+11)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp171 + fp173;
LIBINT2_REALTYPE fp174;
fp174 = fp172 + fp175;
LIBINT2_REALTYPE fp176;
fp176 = fp174 + fp177;
LIBINT2_REALTYPE fp485;
fp485 = fp240 * fp176;
LIBINT2_REALTYPE fp484;
fp484 = fp485 * fp14;
target[((hsi*168+51)*1+lsi)*1] = fp484;
LIBINT2_REALTYPE fp190;
fp190 = 0.0000000000000000e+00 + src1[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = inteval->BO_y[vi] * fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp189 + fp194;
LIBINT2_REALTYPE fp198;
fp198 = inteval->BO_y[vi] * fp193;
LIBINT2_REALTYPE fp197;
fp197 = fp191 + fp198;
LIBINT2_REALTYPE fp200;
fp200 = inteval->BO_y[vi] * fp197;
LIBINT2_REALTYPE fp199;
fp199 = fp195 + fp200;
LIBINT2_REALTYPE fp487;
fp487 = fp241 * fp199;
LIBINT2_REALTYPE fp486;
fp486 = fp487 * fp13;
target[((hsi*168+50)*1+lsi)*1] = fp486;
LIBINT2_REALTYPE fp489;
fp489 = fp241 * fp183;
LIBINT2_REALTYPE fp488;
fp488 = fp489 * fp14;
target[((hsi*168+49)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp491;
fp491 = fp242 * fp199;
LIBINT2_REALTYPE fp490;
fp490 = fp491 * fp14;
target[((hsi*168+48)*1+lsi)*1] = fp490;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + src1[((hsi*42+15)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + src1[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->BO_y[vi] * fp158;
LIBINT2_REALTYPE fp156;
fp156 = fp155 + fp157;
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + src1[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = inteval->BO_y[vi] * fp159;
LIBINT2_REALTYPE fp161;
fp161 = fp158 + fp162;
LIBINT2_REALTYPE fp166;
fp166 = inteval->BO_y[vi] * fp161;
LIBINT2_REALTYPE fp165;
fp165 = fp156 + fp166;
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src1[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = inteval->BO_y[vi] * fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp159 + fp164;
LIBINT2_REALTYPE fp168;
fp168 = inteval->BO_y[vi] * fp163;
LIBINT2_REALTYPE fp167;
fp167 = fp161 + fp168;
LIBINT2_REALTYPE fp170;
fp170 = inteval->BO_y[vi] * fp167;
LIBINT2_REALTYPE fp169;
fp169 = fp165 + fp170;
LIBINT2_REALTYPE fp493;
fp493 = fp240 * fp169;
LIBINT2_REALTYPE fp492;
fp492 = fp493 * fp15;
target[((hsi*168+47)*1+lsi)*1] = fp492;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src1[((hsi*42+16)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = inteval->BO_y[vi] * fp155;
LIBINT2_REALTYPE fp149;
fp149 = fp148 + fp150;
LIBINT2_REALTYPE fp152;
fp152 = inteval->BO_y[vi] * fp156;
LIBINT2_REALTYPE fp151;
fp151 = fp149 + fp152;
LIBINT2_REALTYPE fp154;
fp154 = inteval->BO_y[vi] * fp165;
LIBINT2_REALTYPE fp153;
fp153 = fp151 + fp154;
LIBINT2_REALTYPE fp495;
fp495 = fp240 * fp153;
LIBINT2_REALTYPE fp494;
fp494 = fp495 * fp16;
target[((hsi*168+46)*1+lsi)*1] = fp494;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->BO_y[vi] * fp151;
LIBINT2_REALTYPE fp145;
fp145 = inteval->BO_y[vi] * fp149;
LIBINT2_REALTYPE fp143;
fp143 = inteval->BO_y[vi] * fp148;
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src1[((hsi*42+17)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp141 + fp143;
LIBINT2_REALTYPE fp144;
fp144 = fp142 + fp145;
LIBINT2_REALTYPE fp146;
fp146 = fp144 + fp147;
LIBINT2_REALTYPE fp497;
fp497 = fp240 * fp146;
LIBINT2_REALTYPE fp496;
fp496 = fp497 * fp17;
target[((hsi*168+45)*1+lsi)*1] = fp496;
LIBINT2_REALTYPE fp499;
fp499 = fp241 * fp169;
LIBINT2_REALTYPE fp498;
fp498 = fp499 * fp16;
target[((hsi*168+44)*1+lsi)*1] = fp498;
LIBINT2_REALTYPE fp501;
fp501 = fp241 * fp153;
LIBINT2_REALTYPE fp500;
fp500 = fp501 * fp17;
target[((hsi*168+43)*1+lsi)*1] = fp500;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp481;
fp481 = fp240 * fp199;
LIBINT2_REALTYPE fp480;
fp480 = fp481 * fp12;
target[((hsi*168+53)*1+lsi)*1] = fp480;
LIBINT2_REALTYPE fp237;
fp237 = 0.0000000000000000e+00 + src0[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp421;
fp421 = fp237 * fp199;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp9;
target[((hsi*168+83)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp423;
fp423 = fp237 * fp183;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp10;
target[((hsi*168+82)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp425;
fp425 = fp237 * fp176;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp11;
target[((hsi*168+81)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp427;
fp427 = fp238 * fp199;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp10;
target[((hsi*168+80)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp429;
fp429 = fp238 * fp183;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp11;
target[((hsi*168+79)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp431;
fp431 = fp239 * fp199;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp11;
target[((hsi*168+78)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp433;
fp433 = fp237 * fp169;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp12;
target[((hsi*168+77)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp435;
fp435 = fp237 * fp153;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp13;
target[((hsi*168+76)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp437;
fp437 = fp237 * fp146;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp14;
target[((hsi*168+75)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_y[vi] * fp91;
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_y[vi] * fp89;
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_y[vi] * fp88;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src1[((hsi*42+29)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp81 + fp83;
LIBINT2_REALTYPE fp84;
fp84 = fp82 + fp85;
LIBINT2_REALTYPE fp86;
fp86 = fp84 + fp87;
LIBINT2_REALTYPE fp461;
fp461 = fp237 * fp86;
LIBINT2_REALTYPE fp460;
fp460 = fp461 * fp20;
target[((hsi*168+63)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp441;
fp441 = fp238 * fp153;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp14;
target[((hsi*168+73)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp443;
fp443 = fp239 * fp169;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp14;
target[((hsi*168+72)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src1[((hsi*42+21)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src1[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->BO_y[vi] * fp128;
LIBINT2_REALTYPE fp126;
fp126 = fp125 + fp127;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src1[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = inteval->BO_y[vi] * fp129;
LIBINT2_REALTYPE fp131;
fp131 = fp128 + fp132;
LIBINT2_REALTYPE fp136;
fp136 = inteval->BO_y[vi] * fp131;
LIBINT2_REALTYPE fp135;
fp135 = fp126 + fp136;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src1[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = inteval->BO_y[vi] * fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp129 + fp134;
LIBINT2_REALTYPE fp138;
fp138 = inteval->BO_y[vi] * fp133;
LIBINT2_REALTYPE fp137;
fp137 = fp131 + fp138;
LIBINT2_REALTYPE fp140;
fp140 = inteval->BO_y[vi] * fp137;
LIBINT2_REALTYPE fp139;
fp139 = fp135 + fp140;
LIBINT2_REALTYPE fp445;
fp445 = fp237 * fp139;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp15;
target[((hsi*168+71)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src1[((hsi*42+22)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->BO_y[vi] * fp125;
LIBINT2_REALTYPE fp119;
fp119 = fp118 + fp120;
LIBINT2_REALTYPE fp122;
fp122 = inteval->BO_y[vi] * fp126;
LIBINT2_REALTYPE fp121;
fp121 = fp119 + fp122;
LIBINT2_REALTYPE fp124;
fp124 = inteval->BO_y[vi] * fp135;
LIBINT2_REALTYPE fp123;
fp123 = fp121 + fp124;
LIBINT2_REALTYPE fp447;
fp447 = fp237 * fp123;
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp16;
target[((hsi*168+70)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp117;
fp117 = inteval->BO_y[vi] * fp121;
LIBINT2_REALTYPE fp115;
fp115 = inteval->BO_y[vi] * fp119;
LIBINT2_REALTYPE fp113;
fp113 = inteval->BO_y[vi] * fp118;
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src1[((hsi*42+23)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp111 + fp113;
LIBINT2_REALTYPE fp114;
fp114 = fp112 + fp115;
LIBINT2_REALTYPE fp116;
fp116 = fp114 + fp117;
LIBINT2_REALTYPE fp449;
fp449 = fp237 * fp116;
LIBINT2_REALTYPE fp448;
fp448 = fp449 * fp17;
target[((hsi*168+69)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp451;
fp451 = fp238 * fp139;
LIBINT2_REALTYPE fp450;
fp450 = fp451 * fp16;
target[((hsi*168+68)*1+lsi)*1] = fp450;
LIBINT2_REALTYPE fp453;
fp453 = fp238 * fp123;
LIBINT2_REALTYPE fp452;
fp452 = fp453 * fp17;
target[((hsi*168+67)*1+lsi)*1] = fp452;
LIBINT2_REALTYPE fp455;
fp455 = fp239 * fp139;
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp17;
target[((hsi*168+66)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp457;
fp457 = fp237 * fp109;
LIBINT2_REALTYPE fp456;
fp456 = fp457 * fp18;
target[((hsi*168+65)*1+lsi)*1] = fp456;
LIBINT2_REALTYPE fp459;
fp459 = fp237 * fp93;
LIBINT2_REALTYPE fp458;
fp458 = fp459 * fp19;
target[((hsi*168+64)*1+lsi)*1] = fp458;
LIBINT2_REALTYPE fp439;
fp439 = fp238 * fp169;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp13;
target[((hsi*168+74)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp244;
fp244 = 0.0000000000000000e+00 + src0[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp547;
fp547 = fp244 * fp169;
LIBINT2_REALTYPE fp546;
fp546 = fp547 * fp19;
target[((hsi*168+20)*1+lsi)*1] = fp546;
LIBINT2_REALTYPE fp549;
fp549 = fp244 * fp153;
LIBINT2_REALTYPE fp548;
fp548 = fp549 * fp20;
target[((hsi*168+19)*1+lsi)*1] = fp548;
LIBINT2_REALTYPE fp245;
fp245 = 0.0000000000000000e+00 + src0[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp551;
fp551 = fp245 * fp169;
LIBINT2_REALTYPE fp550;
fp550 = fp551 * fp20;
target[((hsi*168+18)*1+lsi)*1] = fp550;
LIBINT2_REALTYPE fp246;
fp246 = 0.0000000000000000e+00 + src0[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp553;
fp553 = fp246 * fp229;
LIBINT2_REALTYPE fp552;
fp552 = fp553 * fp15;
target[((hsi*168+17)*1+lsi)*1] = fp552;
LIBINT2_REALTYPE fp555;
fp555 = fp246 * fp213;
LIBINT2_REALTYPE fp554;
fp554 = fp555 * fp16;
target[((hsi*168+16)*1+lsi)*1] = fp554;
LIBINT2_REALTYPE fp557;
fp557 = fp246 * fp206;
LIBINT2_REALTYPE fp556;
fp556 = fp557 * fp17;
target[((hsi*168+15)*1+lsi)*1] = fp556;
LIBINT2_REALTYPE fp247;
fp247 = 0.0000000000000000e+00 + src0[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp559;
fp559 = fp247 * fp229;
LIBINT2_REALTYPE fp558;
fp558 = fp559 * fp16;
target[((hsi*168+14)*1+lsi)*1] = fp558;
LIBINT2_REALTYPE fp561;
fp561 = fp247 * fp213;
LIBINT2_REALTYPE fp560;
fp560 = fp561 * fp17;
target[((hsi*168+13)*1+lsi)*1] = fp560;
LIBINT2_REALTYPE fp248;
fp248 = 0.0000000000000000e+00 + src0[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp563;
fp563 = fp248 * fp229;
LIBINT2_REALTYPE fp562;
fp562 = fp563 * fp17;
target[((hsi*168+12)*1+lsi)*1] = fp562;
LIBINT2_REALTYPE fp503;
fp503 = fp242 * fp169;
LIBINT2_REALTYPE fp502;
fp502 = fp503 * fp17;
target[((hsi*168+42)*1+lsi)*1] = fp502;
LIBINT2_REALTYPE fp567;
fp567 = fp246 * fp183;
LIBINT2_REALTYPE fp566;
fp566 = fp567 * fp19;
target[((hsi*168+10)*1+lsi)*1] = fp566;
LIBINT2_REALTYPE fp569;
fp569 = fp246 * fp176;
LIBINT2_REALTYPE fp568;
fp568 = fp569 * fp20;
target[((hsi*168+9)*1+lsi)*1] = fp568;
LIBINT2_REALTYPE fp571;
fp571 = fp247 * fp199;
LIBINT2_REALTYPE fp570;
fp570 = fp571 * fp19;
target[((hsi*168+8)*1+lsi)*1] = fp570;
LIBINT2_REALTYPE fp573;
fp573 = fp247 * fp183;
LIBINT2_REALTYPE fp572;
fp572 = fp573 * fp20;
target[((hsi*168+7)*1+lsi)*1] = fp572;
LIBINT2_REALTYPE fp575;
fp575 = fp248 * fp199;
LIBINT2_REALTYPE fp574;
fp574 = fp575 * fp20;
target[((hsi*168+6)*1+lsi)*1] = fp574;
LIBINT2_REALTYPE fp249;
fp249 = 0.0000000000000000e+00 + src0[((hsi*42+36)*1+lsi)*1];
LIBINT2_REALTYPE fp577;
fp577 = fp249 * fp229;
LIBINT2_REALTYPE fp576;
fp576 = fp577 * fp18;
target[((hsi*168+5)*1+lsi)*1] = fp576;
LIBINT2_REALTYPE fp579;
fp579 = fp249 * fp213;
LIBINT2_REALTYPE fp578;
fp578 = fp579 * fp19;
target[((hsi*168+4)*1+lsi)*1] = fp578;
LIBINT2_REALTYPE fp581;
fp581 = fp249 * fp206;
LIBINT2_REALTYPE fp580;
fp580 = fp581 * fp20;
target[((hsi*168+3)*1+lsi)*1] = fp580;
LIBINT2_REALTYPE fp250;
fp250 = 0.0000000000000000e+00 + src0[((hsi*42+37)*1+lsi)*1];
LIBINT2_REALTYPE fp583;
fp583 = fp250 * fp229;
LIBINT2_REALTYPE fp582;
fp582 = fp583 * fp19;
target[((hsi*168+2)*1+lsi)*1] = fp582;
LIBINT2_REALTYPE fp585;
fp585 = fp250 * fp213;
LIBINT2_REALTYPE fp584;
fp584 = fp585 * fp20;
target[((hsi*168+1)*1+lsi)*1] = fp584;
LIBINT2_REALTYPE fp565;
fp565 = fp246 * fp199;
LIBINT2_REALTYPE fp564;
fp564 = fp565 * fp18;
target[((hsi*168+11)*1+lsi)*1] = fp564;
LIBINT2_REALTYPE fp505;
fp505 = fp240 * fp139;
LIBINT2_REALTYPE fp504;
fp504 = fp505 * fp18;
target[((hsi*168+41)*1+lsi)*1] = fp504;
LIBINT2_REALTYPE fp507;
fp507 = fp240 * fp123;
LIBINT2_REALTYPE fp506;
fp506 = fp507 * fp19;
target[((hsi*168+40)*1+lsi)*1] = fp506;
LIBINT2_REALTYPE fp509;
fp509 = fp240 * fp116;
LIBINT2_REALTYPE fp508;
fp508 = fp509 * fp20;
target[((hsi*168+39)*1+lsi)*1] = fp508;
LIBINT2_REALTYPE fp511;
fp511 = fp241 * fp139;
LIBINT2_REALTYPE fp510;
fp510 = fp511 * fp19;
target[((hsi*168+38)*1+lsi)*1] = fp510;
LIBINT2_REALTYPE fp513;
fp513 = fp241 * fp123;
LIBINT2_REALTYPE fp512;
fp512 = fp513 * fp20;
target[((hsi*168+37)*1+lsi)*1] = fp512;
LIBINT2_REALTYPE fp515;
fp515 = fp242 * fp139;
LIBINT2_REALTYPE fp514;
fp514 = fp515 * fp20;
target[((hsi*168+36)*1+lsi)*1] = fp514;
LIBINT2_REALTYPE fp243;
fp243 = 0.0000000000000000e+00 + src0[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp517;
fp517 = fp243 * fp229;
LIBINT2_REALTYPE fp516;
fp516 = fp517 * fp12;
target[((hsi*168+35)*1+lsi)*1] = fp516;
LIBINT2_REALTYPE fp519;
fp519 = fp243 * fp213;
LIBINT2_REALTYPE fp518;
fp518 = fp519 * fp13;
target[((hsi*168+34)*1+lsi)*1] = fp518;
LIBINT2_REALTYPE fp521;
fp521 = fp243 * fp206;
LIBINT2_REALTYPE fp520;
fp520 = fp521 * fp14;
target[((hsi*168+33)*1+lsi)*1] = fp520;
LIBINT2_REALTYPE fp545;
fp545 = fp243 * fp146;
LIBINT2_REALTYPE fp544;
fp544 = fp545 * fp20;
target[((hsi*168+21)*1+lsi)*1] = fp544;
LIBINT2_REALTYPE fp525;
fp525 = fp244 * fp213;
LIBINT2_REALTYPE fp524;
fp524 = fp525 * fp14;
target[((hsi*168+31)*1+lsi)*1] = fp524;
LIBINT2_REALTYPE fp527;
fp527 = fp245 * fp229;
LIBINT2_REALTYPE fp526;
fp526 = fp527 * fp14;
target[((hsi*168+30)*1+lsi)*1] = fp526;
LIBINT2_REALTYPE fp529;
fp529 = fp243 * fp199;
LIBINT2_REALTYPE fp528;
fp528 = fp529 * fp15;
target[((hsi*168+29)*1+lsi)*1] = fp528;
LIBINT2_REALTYPE fp531;
fp531 = fp243 * fp183;
LIBINT2_REALTYPE fp530;
fp530 = fp531 * fp16;
target[((hsi*168+28)*1+lsi)*1] = fp530;
LIBINT2_REALTYPE fp533;
fp533 = fp243 * fp176;
LIBINT2_REALTYPE fp532;
fp532 = fp533 * fp17;
target[((hsi*168+27)*1+lsi)*1] = fp532;
LIBINT2_REALTYPE fp535;
fp535 = fp244 * fp199;
LIBINT2_REALTYPE fp534;
fp534 = fp535 * fp16;
target[((hsi*168+26)*1+lsi)*1] = fp534;
LIBINT2_REALTYPE fp537;
fp537 = fp244 * fp183;
LIBINT2_REALTYPE fp536;
fp536 = fp537 * fp17;
target[((hsi*168+25)*1+lsi)*1] = fp536;
LIBINT2_REALTYPE fp539;
fp539 = fp245 * fp199;
LIBINT2_REALTYPE fp538;
fp538 = fp539 * fp17;
target[((hsi*168+24)*1+lsi)*1] = fp538;
LIBINT2_REALTYPE fp541;
fp541 = fp243 * fp169;
LIBINT2_REALTYPE fp540;
fp540 = fp541 * fp18;
target[((hsi*168+23)*1+lsi)*1] = fp540;
LIBINT2_REALTYPE fp543;
fp543 = fp243 * fp153;
LIBINT2_REALTYPE fp542;
fp542 = fp543 * fp19;
target[((hsi*168+22)*1+lsi)*1] = fp542;
LIBINT2_REALTYPE fp523;
fp523 = fp244 * fp229;
LIBINT2_REALTYPE fp522;
fp522 = fp523 * fp13;
target[((hsi*168+32)*1+lsi)*1] = fp522;
LIBINT2_REALTYPE fp232;
fp232 = 0.0000000000000000e+00 + src0[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = fp232 * fp139;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp10;
target[((hsi*168+146)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp232 * fp123;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp11;
target[((hsi*168+145)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp233;
fp233 = 0.0000000000000000e+00 + src0[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = fp233 * fp139;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp11;
target[((hsi*168+144)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp231;
fp231 = 0.0000000000000000e+00 + src0[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp231 * fp109;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp12;
target[((hsi*168+143)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp231 * fp93;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp13;
target[((hsi*168+142)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp231 * fp86;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp14;
target[((hsi*168+141)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp232 * fp109;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp13;
target[((hsi*168+140)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp232 * fp93;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp14;
target[((hsi*168+139)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp233 * fp109;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp14;
target[((hsi*168+138)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp419;
fp419 = fp239 * fp229;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp8;
target[((hsi*168+84)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*42+34)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*42+33)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_y[vi] * fp65;
LIBINT2_REALTYPE fp59;
fp59 = fp58 + fp60;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src1[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_y[vi] * fp68;
LIBINT2_REALTYPE fp66;
fp66 = fp65 + fp67;
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_y[vi] * fp66;
LIBINT2_REALTYPE fp61;
fp61 = fp59 + fp62;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_y[vi] * fp69;
LIBINT2_REALTYPE fp71;
fp71 = fp68 + fp72;
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_y[vi] * fp71;
LIBINT2_REALTYPE fp75;
fp75 = fp66 + fp76;
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_y[vi] * fp75;
LIBINT2_REALTYPE fp63;
fp63 = fp61 + fp64;
LIBINT2_REALTYPE fp315;
fp315 = fp231 * fp63;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp16;
target[((hsi*168+136)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_y[vi] * fp61;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp59;
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_y[vi] * fp58;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*42+35)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp51 + fp53;
LIBINT2_REALTYPE fp54;
fp54 = fp52 + fp55;
LIBINT2_REALTYPE fp56;
fp56 = fp54 + fp57;
LIBINT2_REALTYPE fp317;
fp317 = fp231 * fp56;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp17;
target[((hsi*168+135)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_y[vi] * fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp69 + fp74;
LIBINT2_REALTYPE fp78;
fp78 = inteval->BO_y[vi] * fp73;
LIBINT2_REALTYPE fp77;
fp77 = fp71 + fp78;
LIBINT2_REALTYPE fp80;
fp80 = inteval->BO_y[vi] * fp77;
LIBINT2_REALTYPE fp79;
fp79 = fp75 + fp80;
LIBINT2_REALTYPE fp319;
fp319 = fp232 * fp79;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp16;
target[((hsi*168+134)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp232 * fp63;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp17;
target[((hsi*168+133)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp233 * fp79;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp17;
target[((hsi*168+132)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*42+39)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*42+38)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp38;
LIBINT2_REALTYPE fp36;
fp36 = fp35 + fp37;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*42+37)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_y[vi] * fp39;
LIBINT2_REALTYPE fp41;
fp41 = fp38 + fp42;
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_y[vi] * fp41;
LIBINT2_REALTYPE fp45;
fp45 = fp36 + fp46;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*42+36)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_y[vi] * fp40;
LIBINT2_REALTYPE fp43;
fp43 = fp39 + fp44;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp47;
fp47 = fp41 + fp48;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_y[vi] * fp47;
LIBINT2_REALTYPE fp49;
fp49 = fp45 + fp50;
LIBINT2_REALTYPE fp325;
fp325 = fp231 * fp49;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp18;
target[((hsi*168+131)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*42+40)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_y[vi] * fp35;
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_y[vi] * fp36;
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp33;
fp33 = fp31 + fp34;
LIBINT2_REALTYPE fp327;
fp327 = fp231 * fp33;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp19;
target[((hsi*168+130)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_y[vi] * fp31;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_y[vi] * fp28;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*42+41)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp24;
fp24 = fp22 + fp25;
LIBINT2_REALTYPE fp26;
fp26 = fp24 + fp27;
LIBINT2_REALTYPE fp329;
fp329 = fp231 * fp26;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp20;
target[((hsi*168+129)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = fp232 * fp49;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp19;
target[((hsi*168+128)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp232 * fp33;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp20;
target[((hsi*168+127)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp313;
fp313 = fp231 * fp79;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp15;
target[((hsi*168+137)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*42+38)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = fp231 * fp229;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp0;
target[((hsi*168+167)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*42+37)*1+lsi)*1];
LIBINT2_REALTYPE fp255;
fp255 = fp231 * fp213;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp1;
target[((hsi*168+166)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*42+36)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
fp257 = fp231 * fp206;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp2;
target[((hsi*168+165)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp232 * fp229;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp1;
target[((hsi*168+164)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp232 * fp213;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp2;
target[((hsi*168+163)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp233 * fp229;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp2;
target[((hsi*168+162)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp231 * fp199;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp3;
target[((hsi*168+161)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp231 * fp183;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp4;
target[((hsi*168+160)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp231 * fp176;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp5;
target[((hsi*168+159)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp293;
fp293 = fp231 * fp116;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp11;
target[((hsi*168+147)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp273;
fp273 = fp232 * fp183;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp5;
target[((hsi*168+157)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp233 * fp199;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp5;
target[((hsi*168+156)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = fp231 * fp169;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp6;
target[((hsi*168+155)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = fp231 * fp153;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp7;
target[((hsi*168+154)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp231 * fp146;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp8;
target[((hsi*168+153)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp232 * fp169;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp7;
target[((hsi*168+152)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp232 * fp153;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp8;
target[((hsi*168+151)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp233 * fp169;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp8;
target[((hsi*168+150)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp231 * fp139;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp9;
target[((hsi*168+149)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp231 * fp123;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp10;
target[((hsi*168+148)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp271;
fp271 = fp232 * fp199;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp4;
target[((hsi*168+158)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp235;
fp235 = 0.0000000000000000e+00 + src0[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp379;
fp379 = fp235 * fp139;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp13;
target[((hsi*168+104)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp381;
fp381 = fp235 * fp123;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp14;
target[((hsi*168+103)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp236;
fp236 = 0.0000000000000000e+00 + src0[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = fp236 * fp139;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp14;
target[((hsi*168+102)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp234;
fp234 = 0.0000000000000000e+00 + src0[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = fp234 * fp109;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp15;
target[((hsi*168+101)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp387;
fp387 = fp234 * fp93;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp16;
target[((hsi*168+100)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp234 * fp86;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp17;
target[((hsi*168+99)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp391;
fp391 = fp235 * fp109;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp16;
target[((hsi*168+98)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp235 * fp93;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp17;
target[((hsi*168+97)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp236 * fp109;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp17;
target[((hsi*168+96)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp335;
fp335 = fp233 * fp49;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp20;
target[((hsi*168+126)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp399;
fp399 = fp234 * fp63;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp19;
target[((hsi*168+94)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp234 * fp56;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp20;
target[((hsi*168+93)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp403;
fp403 = fp235 * fp79;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp19;
target[((hsi*168+92)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp405;
fp405 = fp235 * fp63;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp20;
target[((hsi*168+91)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp407;
fp407 = fp236 * fp79;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp20;
target[((hsi*168+90)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp409;
fp409 = fp237 * fp229;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp6;
target[((hsi*168+89)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp411;
fp411 = fp237 * fp213;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp7;
target[((hsi*168+88)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp413;
fp413 = fp237 * fp206;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp8;
target[((hsi*168+87)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp415;
fp415 = fp238 * fp229;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp7;
target[((hsi*168+86)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp417;
fp417 = fp238 * fp213;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp8;
target[((hsi*168+85)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp397;
fp397 = fp234 * fp79;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp18;
target[((hsi*168+95)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp337;
fp337 = fp234 * fp229;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp3;
target[((hsi*168+125)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp234 * fp213;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp4;
target[((hsi*168+124)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp234 * fp206;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp5;
target[((hsi*168+123)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp343;
fp343 = fp235 * fp229;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp4;
target[((hsi*168+122)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = fp235 * fp213;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp5;
target[((hsi*168+121)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp236 * fp229;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp5;
target[((hsi*168+120)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp349;
fp349 = fp234 * fp199;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp6;
target[((hsi*168+119)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp234 * fp183;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp7;
target[((hsi*168+118)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp234 * fp176;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp8;
target[((hsi*168+117)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp377;
fp377 = fp234 * fp116;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp14;
target[((hsi*168+105)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp357;
fp357 = fp235 * fp183;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp8;
target[((hsi*168+115)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp236 * fp199;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp8;
target[((hsi*168+114)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp361;
fp361 = fp234 * fp169;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp9;
target[((hsi*168+113)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp234 * fp153;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp10;
target[((hsi*168+112)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp365;
fp365 = fp234 * fp146;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp11;
target[((hsi*168+111)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp367;
fp367 = fp235 * fp169;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp10;
target[((hsi*168+110)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp369;
fp369 = fp235 * fp153;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp11;
target[((hsi*168+109)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = fp236 * fp169;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp11;
target[((hsi*168+108)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp234 * fp139;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp12;
target[((hsi*168+107)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp375;
fp375 = fp234 * fp123;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp13;
target[((hsi*168+106)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp355;
fp355 = fp235 * fp199;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp7;
target[((hsi*168+116)*1+lsi)*1] = fp354;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 588 */
}

#ifdef __cplusplus
};
#endif
