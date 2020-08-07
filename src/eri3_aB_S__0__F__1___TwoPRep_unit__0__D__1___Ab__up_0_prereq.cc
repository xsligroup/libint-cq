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
void eri3_aB_S__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp468;
fp468 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp445;
fp445 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp212;
fp212 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp213;
fp213 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp211;
fp211 = fp213 + fp212;
LIBINT2_REALTYPE fp209;
fp209 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp210;
fp210 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp208;
fp208 = fp210 + fp209;
LIBINT2_REALTYPE fp181;
fp181 = inteval->roe[vi] * fp208;
LIBINT2_REALTYPE fp180;
fp180 = fp211 - fp181;
LIBINT2_REALTYPE fp179;
fp179 = fp445 * fp180;
LIBINT2_REALTYPE fp423;
fp423 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp422;
fp422 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp423;
LIBINT2_REALTYPE fp421;
fp421 = inteval->oo2e[vi] * fp422;
LIBINT2_REALTYPE fp206;
fp206 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp207;
fp207 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp205;
fp205 = fp207 + fp206;
LIBINT2_REALTYPE fp216;
fp216 = inteval->WQ_z[vi] * fp205;
LIBINT2_REALTYPE fp217;
fp217 = inteval->QC_z[vi] * fp208;
LIBINT2_REALTYPE fp215;
fp215 = fp217 + fp216;
LIBINT2_REALTYPE fp214;
fp214 = fp215 + fp421;
LIBINT2_REALTYPE fp183;
fp183 = inteval->WQ_z[vi] * fp214;
LIBINT2_REALTYPE fp430;
fp430 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp429;
fp429 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp430;
LIBINT2_REALTYPE fp428;
fp428 = inteval->oo2e[vi] * fp429;
LIBINT2_REALTYPE fp220;
fp220 = inteval->WQ_z[vi] * fp208;
LIBINT2_REALTYPE fp221;
fp221 = inteval->QC_z[vi] * fp211;
LIBINT2_REALTYPE fp219;
fp219 = fp221 + fp220;
LIBINT2_REALTYPE fp218;
fp218 = fp219 + fp428;
LIBINT2_REALTYPE fp184;
fp184 = inteval->QC_z[vi] * fp218;
LIBINT2_REALTYPE fp182;
fp182 = fp184 + fp183;
LIBINT2_REALTYPE fp178;
fp178 = fp182 + fp179;
LIBINT2_REALTYPE fp29;
fp29 = fp178;
LIBINT2_REALTYPE fp174;
fp174 = inteval->roe[vi] * fp205;
LIBINT2_REALTYPE fp173;
fp173 = fp208 - fp174;
LIBINT2_REALTYPE fp172;
fp172 = fp445 * fp173;
LIBINT2_REALTYPE fp407;
fp407 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp406;
fp406 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi] - fp407;
LIBINT2_REALTYPE fp405;
fp405 = inteval->oo2e[vi] * fp406;
LIBINT2_REALTYPE fp199;
fp199 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp200;
fp200 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp198;
fp198 = fp200 + fp199;
LIBINT2_REALTYPE fp203;
fp203 = inteval->WQ_z[vi] * fp198;
LIBINT2_REALTYPE fp204;
fp204 = inteval->QC_z[vi] * fp205;
LIBINT2_REALTYPE fp202;
fp202 = fp204 + fp203;
LIBINT2_REALTYPE fp201;
fp201 = fp202 + fp405;
LIBINT2_REALTYPE fp176;
fp176 = inteval->WQ_z[vi] * fp201;
LIBINT2_REALTYPE fp177;
fp177 = inteval->QC_z[vi] * fp214;
LIBINT2_REALTYPE fp175;
fp175 = fp177 + fp176;
LIBINT2_REALTYPE fp171;
fp171 = fp175 + fp172;
LIBINT2_REALTYPE fp49;
fp49 = inteval->roe[vi] * fp171;
LIBINT2_REALTYPE fp48;
fp48 = fp29 - fp49;
LIBINT2_REALTYPE fp47;
fp47 = fp468 * fp48;
LIBINT2_REALTYPE fp460;
fp460 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp81;
fp81 = inteval->roe[vi] * fp201;
LIBINT2_REALTYPE fp80;
fp80 = fp214 - fp81;
LIBINT2_REALTYPE fp79;
fp79 = fp460 * fp80;
LIBINT2_REALTYPE fp105;
fp105 = inteval->roe[vi] * fp198;
LIBINT2_REALTYPE fp104;
fp104 = fp205 - fp105;
LIBINT2_REALTYPE fp103;
fp103 = fp445 * fp104;
LIBINT2_REALTYPE fp390;
fp390 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp389;
fp389 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi] - fp390;
LIBINT2_REALTYPE fp388;
fp388 = inteval->oo2e[vi] * fp389;
LIBINT2_REALTYPE fp96;
fp96 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp97;
fp97 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
LIBINT2_REALTYPE fp100;
fp100 = inteval->WQ_z[vi] * fp95;
LIBINT2_REALTYPE fp101;
fp101 = inteval->QC_z[vi] * fp198;
LIBINT2_REALTYPE fp99;
fp99 = fp101 + fp100;
LIBINT2_REALTYPE fp98;
fp98 = fp99 + fp388;
LIBINT2_REALTYPE fp107;
fp107 = inteval->WQ_z[vi] * fp98;
LIBINT2_REALTYPE fp108;
fp108 = inteval->QC_z[vi] * fp201;
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
LIBINT2_REALTYPE fp102;
fp102 = fp106 + fp103;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WQ_z[vi] * fp102;
LIBINT2_REALTYPE fp84;
fp84 = inteval->QC_z[vi] * fp171;
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
LIBINT2_REALTYPE fp78;
fp78 = fp82 + fp79;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WQ_z[vi] * fp78;
LIBINT2_REALTYPE fp88;
fp88 = inteval->roe[vi] * fp214;
LIBINT2_REALTYPE fp87;
fp87 = fp218 - fp88;
LIBINT2_REALTYPE fp86;
fp86 = fp460 * fp87;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WQ_z[vi] * fp171;
LIBINT2_REALTYPE fp91;
fp91 = inteval->QC_z[vi] * fp29;
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
LIBINT2_REALTYPE fp85;
fp85 = fp89 + fp86;
LIBINT2_REALTYPE fp39;
fp39 = fp85;
LIBINT2_REALTYPE fp52;
fp52 = inteval->QC_z[vi] * fp39;
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
LIBINT2_REALTYPE fp46;
fp46 = fp50 + fp47;
LIBINT2_REALTYPE fp45;
fp45 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+45)*1+lsi)*1]),&(fp45),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+44)*1+lsi)*1]),&(fp39),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+43)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp54;
fp54 = inteval->WQ_y[vi] * fp78;
LIBINT2_REALTYPE fp55;
fp55 = inteval->QC_y[vi] * fp39;
LIBINT2_REALTYPE fp53;
fp53 = fp55 + fp54;
LIBINT2_REALTYPE fp44;
fp44 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+42)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp110;
fp110 = inteval->WQ_y[vi] * fp171;
LIBINT2_REALTYPE fp111;
fp111 = inteval->QC_y[vi] * fp29;
LIBINT2_REALTYPE fp109;
fp109 = fp111 + fp110;
LIBINT2_REALTYPE fp37;
fp37 = fp109;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+41)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp223;
fp223 = inteval->WQ_y[vi] * fp214;
LIBINT2_REALTYPE fp224;
fp224 = inteval->QC_y[vi] * fp218;
LIBINT2_REALTYPE fp222;
fp222 = fp224 + fp223;
LIBINT2_REALTYPE fp26;
fp26 = fp222;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+40)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp278;
fp278 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp279;
fp279 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp277;
fp277 = fp279 + fp278;
LIBINT2_REALTYPE fp282;
fp282 = inteval->WQ_y[vi] * fp277;
LIBINT2_REALTYPE fp289;
fp289 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp290;
fp290 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp288;
fp288 = fp290 + fp289;
LIBINT2_REALTYPE fp283;
fp283 = inteval->QC_y[vi] * fp288;
LIBINT2_REALTYPE fp281;
fp281 = fp283 + fp282;
LIBINT2_REALTYPE fp280;
fp280 = fp281 + fp421;
LIBINT2_REALTYPE fp235;
fp235 = inteval->WQ_z[vi] * fp280;
LIBINT2_REALTYPE fp286;
fp286 = inteval->WQ_y[vi] * fp288;
LIBINT2_REALTYPE fp292;
fp292 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp293;
fp293 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp291;
fp291 = fp293 + fp292;
LIBINT2_REALTYPE fp287;
fp287 = inteval->QC_y[vi] * fp291;
LIBINT2_REALTYPE fp285;
fp285 = fp287 + fp286;
LIBINT2_REALTYPE fp284;
fp284 = fp285 + fp428;
LIBINT2_REALTYPE fp236;
fp236 = inteval->QC_z[vi] * fp284;
LIBINT2_REALTYPE fp234;
fp234 = fp236 + fp235;
LIBINT2_REALTYPE fp23;
fp23 = fp234;
LIBINT2_REALTYPE fp244;
fp244 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp245;
fp245 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp243;
fp243 = fp245 + fp244;
LIBINT2_REALTYPE fp248;
fp248 = inteval->WQ_y[vi] * fp243;
LIBINT2_REALTYPE fp249;
fp249 = inteval->QC_y[vi] * fp277;
LIBINT2_REALTYPE fp247;
fp247 = fp249 + fp248;
LIBINT2_REALTYPE fp246;
fp246 = fp247 + fp405;
LIBINT2_REALTYPE fp232;
fp232 = inteval->WQ_z[vi] * fp246;
LIBINT2_REALTYPE fp233;
fp233 = inteval->QC_z[vi] * fp280;
LIBINT2_REALTYPE fp231;
fp231 = fp233 + fp232;
LIBINT2_REALTYPE fp59;
fp59 = inteval->roe[vi] * fp231;
LIBINT2_REALTYPE fp58;
fp58 = fp23 - fp59;
LIBINT2_REALTYPE fp57;
fp57 = fp445 * fp58;
LIBINT2_REALTYPE fp157;
fp157 = inteval->roe[vi] * fp246;
LIBINT2_REALTYPE fp156;
fp156 = fp280 - fp157;
LIBINT2_REALTYPE fp119;
fp119 = inteval->oo2e[vi] * fp156;
LIBINT2_REALTYPE fp141;
fp141 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp142;
fp142 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp140;
fp140 = fp142 + fp141;
LIBINT2_REALTYPE fp145;
fp145 = inteval->WQ_y[vi] * fp140;
LIBINT2_REALTYPE fp146;
fp146 = inteval->QC_y[vi] * fp243;
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
LIBINT2_REALTYPE fp143;
fp143 = fp144 + fp388;
LIBINT2_REALTYPE fp116;
fp116 = inteval->WQ_z[vi] * fp143;
LIBINT2_REALTYPE fp117;
fp117 = inteval->QC_z[vi] * fp246;
LIBINT2_REALTYPE fp115;
fp115 = fp117 + fp116;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WQ_z[vi] * fp115;
LIBINT2_REALTYPE fp122;
fp122 = inteval->QC_z[vi] * fp231;
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WQ_z[vi] * fp118;
LIBINT2_REALTYPE fp164;
fp164 = inteval->roe[vi] * fp280;
LIBINT2_REALTYPE fp163;
fp163 = fp284 - fp164;
LIBINT2_REALTYPE fp124;
fp124 = inteval->oo2e[vi] * fp163;
LIBINT2_REALTYPE fp126;
fp126 = inteval->WQ_z[vi] * fp231;
LIBINT2_REALTYPE fp127;
fp127 = inteval->QC_z[vi] * fp23;
LIBINT2_REALTYPE fp125;
fp125 = fp127 + fp126;
LIBINT2_REALTYPE fp123;
fp123 = fp125 + fp124;
LIBINT2_REALTYPE fp35;
fp35 = fp123;
LIBINT2_REALTYPE fp62;
fp62 = inteval->QC_z[vi] * fp35;
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
LIBINT2_REALTYPE fp56;
fp56 = fp60 + fp57;
LIBINT2_REALTYPE fp43;
fp43 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+39)*1+lsi)*1]),&(fp43),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+38)*1+lsi)*1]),&(fp35),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+37)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp260;
fp260 = inteval->roe[vi] * fp288;
LIBINT2_REALTYPE fp259;
fp259 = fp291 - fp260;
LIBINT2_REALTYPE fp258;
fp258 = fp445 * fp259;
LIBINT2_REALTYPE fp262;
fp262 = inteval->WQ_y[vi] * fp280;
LIBINT2_REALTYPE fp263;
fp263 = inteval->QC_y[vi] * fp284;
LIBINT2_REALTYPE fp261;
fp261 = fp263 + fp262;
LIBINT2_REALTYPE fp257;
fp257 = fp261 + fp258;
LIBINT2_REALTYPE fp20;
fp20 = fp257;
LIBINT2_REALTYPE fp253;
fp253 = inteval->roe[vi] * fp277;
LIBINT2_REALTYPE fp252;
fp252 = fp288 - fp253;
LIBINT2_REALTYPE fp251;
fp251 = fp445 * fp252;
LIBINT2_REALTYPE fp255;
fp255 = inteval->WQ_y[vi] * fp246;
LIBINT2_REALTYPE fp256;
fp256 = inteval->QC_y[vi] * fp280;
LIBINT2_REALTYPE fp254;
fp254 = fp256 + fp255;
LIBINT2_REALTYPE fp250;
fp250 = fp254 + fp251;
LIBINT2_REALTYPE fp74;
fp74 = inteval->roe[vi] * fp250;
LIBINT2_REALTYPE fp73;
fp73 = fp20 - fp74;
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2e[vi] * fp73;
LIBINT2_REALTYPE fp150;
fp150 = inteval->roe[vi] * fp243;
LIBINT2_REALTYPE fp149;
fp149 = fp277 - fp150;
LIBINT2_REALTYPE fp148;
fp148 = fp445 * fp149;
LIBINT2_REALTYPE fp152;
fp152 = inteval->WQ_y[vi] * fp143;
LIBINT2_REALTYPE fp153;
fp153 = inteval->QC_y[vi] * fp246;
LIBINT2_REALTYPE fp151;
fp151 = fp153 + fp152;
LIBINT2_REALTYPE fp147;
fp147 = fp151 + fp148;
LIBINT2_REALTYPE fp132;
fp132 = inteval->WQ_z[vi] * fp147;
LIBINT2_REALTYPE fp133;
fp133 = inteval->QC_z[vi] * fp250;
LIBINT2_REALTYPE fp131;
fp131 = fp133 + fp132;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WQ_z[vi] * fp131;
LIBINT2_REALTYPE fp135;
fp135 = inteval->WQ_z[vi] * fp250;
LIBINT2_REALTYPE fp136;
fp136 = inteval->QC_z[vi] * fp20;
LIBINT2_REALTYPE fp134;
fp134 = fp136 + fp135;
LIBINT2_REALTYPE fp33;
fp33 = fp134;
LIBINT2_REALTYPE fp67;
fp67 = inteval->QC_z[vi] * fp33;
LIBINT2_REALTYPE fp65;
fp65 = fp67 + fp66;
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp42;
fp42 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+36)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp155;
fp155 = fp460 * fp156;
LIBINT2_REALTYPE fp159;
fp159 = inteval->WQ_y[vi] * fp147;
LIBINT2_REALTYPE fp160;
fp160 = inteval->QC_y[vi] * fp250;
LIBINT2_REALTYPE fp158;
fp158 = fp160 + fp159;
LIBINT2_REALTYPE fp154;
fp154 = fp158 + fp155;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WQ_z[vi] * fp154;
LIBINT2_REALTYPE fp162;
fp162 = fp460 * fp163;
LIBINT2_REALTYPE fp166;
fp166 = inteval->WQ_y[vi] * fp250;
LIBINT2_REALTYPE fp167;
fp167 = inteval->QC_y[vi] * fp20;
LIBINT2_REALTYPE fp165;
fp165 = fp167 + fp166;
LIBINT2_REALTYPE fp161;
fp161 = fp165 + fp162;
LIBINT2_REALTYPE fp31;
fp31 = fp161;
LIBINT2_REALTYPE fp70;
fp70 = inteval->QC_z[vi] * fp31;
LIBINT2_REALTYPE fp68;
fp68 = fp70 + fp69;
LIBINT2_REALTYPE fp41;
fp41 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+35)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp72;
fp72 = fp468 * fp73;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_y[vi] * fp154;
LIBINT2_REALTYPE fp77;
fp77 = inteval->QC_y[vi] * fp31;
LIBINT2_REALTYPE fp75;
fp75 = fp77 + fp76;
LIBINT2_REALTYPE fp71;
fp71 = fp75 + fp72;
LIBINT2_REALTYPE fp40;
fp40 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+34)*1+lsi)*1]),&(fp40),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+33)*1+lsi)*1]),&(fp33),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+32)*1+lsi)*1]),&(fp31),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+31)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp93;
fp93 = inteval->WQ_x[vi] * fp78;
LIBINT2_REALTYPE fp94;
fp94 = inteval->QC_x[vi] * fp39;
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
LIBINT2_REALTYPE fp38;
fp38 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+30)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp189;
fp189 = inteval->WQ_x[vi] * fp171;
LIBINT2_REALTYPE fp190;
fp190 = inteval->QC_x[vi] * fp29;
LIBINT2_REALTYPE fp188;
fp188 = fp190 + fp189;
LIBINT2_REALTYPE fp28;
fp28 = fp188;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+29)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp301;
fp301 = inteval->WQ_x[vi] * fp214;
LIBINT2_REALTYPE fp302;
fp302 = inteval->QC_x[vi] * fp218;
LIBINT2_REALTYPE fp300;
fp300 = fp302 + fp301;
LIBINT2_REALTYPE fp17;
fp17 = fp300;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+28)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp186;
fp186 = inteval->WQ_x[vi] * fp102;
LIBINT2_REALTYPE fp187;
fp187 = inteval->QC_x[vi] * fp171;
LIBINT2_REALTYPE fp185;
fp185 = fp187 + fp186;
LIBINT2_REALTYPE fp113;
fp113 = inteval->WQ_y[vi] * fp185;
LIBINT2_REALTYPE fp114;
fp114 = inteval->QC_y[vi] * fp28;
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
LIBINT2_REALTYPE fp36;
fp36 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+27)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp298;
fp298 = inteval->WQ_x[vi] * fp201;
LIBINT2_REALTYPE fp299;
fp299 = inteval->QC_x[vi] * fp214;
LIBINT2_REALTYPE fp297;
fp297 = fp299 + fp298;
LIBINT2_REALTYPE fp226;
fp226 = inteval->WQ_y[vi] * fp297;
LIBINT2_REALTYPE fp227;
fp227 = inteval->QC_y[vi] * fp17;
LIBINT2_REALTYPE fp225;
fp225 = fp227 + fp226;
LIBINT2_REALTYPE fp25;
fp25 = fp225;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+26)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp412;
fp412 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp413;
fp413 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp411;
fp411 = fp413 + fp412;
LIBINT2_REALTYPE fp364;
fp364 = inteval->WQ_y[vi] * fp411;
LIBINT2_REALTYPE fp415;
fp415 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp416;
fp416 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp414;
fp414 = fp416 + fp415;
LIBINT2_REALTYPE fp365;
fp365 = inteval->QC_y[vi] * fp414;
LIBINT2_REALTYPE fp363;
fp363 = fp365 + fp364;
LIBINT2_REALTYPE fp316;
fp316 = inteval->WQ_z[vi] * fp363;
LIBINT2_REALTYPE fp367;
fp367 = inteval->WQ_y[vi] * fp414;
LIBINT2_REALTYPE fp418;
fp418 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp419;
fp419 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp417;
fp417 = fp419 + fp418;
LIBINT2_REALTYPE fp368;
fp368 = inteval->QC_y[vi] * fp417;
LIBINT2_REALTYPE fp366;
fp366 = fp368 + fp367;
LIBINT2_REALTYPE fp317;
fp317 = inteval->QC_z[vi] * fp366;
LIBINT2_REALTYPE fp315;
fp315 = fp317 + fp316;
LIBINT2_REALTYPE fp14;
fp14 = fp315;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+25)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp129;
fp129 = inteval->WQ_x[vi] * fp118;
LIBINT2_REALTYPE fp130;
fp130 = inteval->QC_x[vi] * fp35;
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
LIBINT2_REALTYPE fp34;
fp34 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp265;
fp265 = inteval->WQ_x[vi] * fp147;
LIBINT2_REALTYPE fp266;
fp266 = inteval->QC_x[vi] * fp250;
LIBINT2_REALTYPE fp264;
fp264 = fp266 + fp265;
LIBINT2_REALTYPE fp138;
fp138 = inteval->WQ_z[vi] * fp264;
LIBINT2_REALTYPE fp268;
fp268 = inteval->WQ_x[vi] * fp250;
LIBINT2_REALTYPE fp269;
fp269 = inteval->QC_x[vi] * fp20;
LIBINT2_REALTYPE fp267;
fp267 = fp269 + fp268;
LIBINT2_REALTYPE fp19;
fp19 = fp267;
LIBINT2_REALTYPE fp139;
fp139 = inteval->QC_z[vi] * fp19;
LIBINT2_REALTYPE fp137;
fp137 = fp139 + fp138;
LIBINT2_REALTYPE fp32;
fp32 = fp137;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp169;
fp169 = inteval->WQ_x[vi] * fp154;
LIBINT2_REALTYPE fp170;
fp170 = inteval->QC_x[vi] * fp31;
LIBINT2_REALTYPE fp168;
fp168 = fp170 + fp169;
LIBINT2_REALTYPE fp30;
fp30 = fp168;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp328;
fp328 = inteval->WQ_x[vi] * fp246;
LIBINT2_REALTYPE fp329;
fp329 = inteval->QC_x[vi] * fp280;
LIBINT2_REALTYPE fp327;
fp327 = fp329 + fp328;
LIBINT2_REALTYPE fp238;
fp238 = inteval->WQ_z[vi] * fp327;
LIBINT2_REALTYPE fp331;
fp331 = inteval->WQ_x[vi] * fp280;
LIBINT2_REALTYPE fp332;
fp332 = inteval->QC_x[vi] * fp284;
LIBINT2_REALTYPE fp330;
fp330 = fp332 + fp331;
LIBINT2_REALTYPE fp11;
fp11 = fp330;
LIBINT2_REALTYPE fp239;
fp239 = inteval->QC_z[vi] * fp11;
LIBINT2_REALTYPE fp237;
fp237 = fp239 + fp238;
LIBINT2_REALTYPE fp22;
fp22 = fp237;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp22),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp19),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp425;
fp425 = inteval->WQ_x[vi] * fp411;
LIBINT2_REALTYPE fp426;
fp426 = inteval->QC_x[vi] * fp414;
LIBINT2_REALTYPE fp424;
fp424 = fp426 + fp425;
LIBINT2_REALTYPE fp420;
fp420 = fp424 + fp421;
LIBINT2_REALTYPE fp352;
fp352 = inteval->WQ_z[vi] * fp420;
LIBINT2_REALTYPE fp432;
fp432 = inteval->WQ_x[vi] * fp414;
LIBINT2_REALTYPE fp433;
fp433 = inteval->QC_x[vi] * fp417;
LIBINT2_REALTYPE fp431;
fp431 = fp433 + fp432;
LIBINT2_REALTYPE fp427;
fp427 = fp431 + fp428;
LIBINT2_REALTYPE fp353;
fp353 = inteval->QC_z[vi] * fp427;
LIBINT2_REALTYPE fp351;
fp351 = fp353 + fp352;
LIBINT2_REALTYPE fp8;
fp8 = fp351;
LIBINT2_REALTYPE fp402;
fp402 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp403;
fp403 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp401;
fp401 = fp403 + fp402;
LIBINT2_REALTYPE fp409;
fp409 = inteval->WQ_x[vi] * fp401;
LIBINT2_REALTYPE fp410;
fp410 = inteval->QC_x[vi] * fp411;
LIBINT2_REALTYPE fp408;
fp408 = fp410 + fp409;
LIBINT2_REALTYPE fp404;
fp404 = fp408 + fp405;
LIBINT2_REALTYPE fp349;
fp349 = inteval->WQ_z[vi] * fp404;
LIBINT2_REALTYPE fp350;
fp350 = inteval->QC_z[vi] * fp420;
LIBINT2_REALTYPE fp348;
fp348 = fp350 + fp349;
LIBINT2_REALTYPE fp194;
fp194 = inteval->roe[vi] * fp348;
LIBINT2_REALTYPE fp193;
fp193 = fp8 - fp194;
LIBINT2_REALTYPE fp192;
fp192 = fp445 * fp193;
LIBINT2_REALTYPE fp452;
fp452 = inteval->roe[vi] * fp404;
LIBINT2_REALTYPE fp451;
fp451 = fp420 - fp452;
LIBINT2_REALTYPE fp334;
fp334 = inteval->oo2e[vi] * fp451;
LIBINT2_REALTYPE fp385;
fp385 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp386;
fp386 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp384;
fp384 = fp386 + fp385;
LIBINT2_REALTYPE fp392;
fp392 = inteval->WQ_x[vi] * fp384;
LIBINT2_REALTYPE fp393;
fp393 = inteval->QC_x[vi] * fp401;
LIBINT2_REALTYPE fp391;
fp391 = fp393 + fp392;
LIBINT2_REALTYPE fp387;
fp387 = fp391 + fp388;
LIBINT2_REALTYPE fp295;
fp295 = inteval->WQ_z[vi] * fp387;
LIBINT2_REALTYPE fp296;
fp296 = inteval->QC_z[vi] * fp404;
LIBINT2_REALTYPE fp294;
fp294 = fp296 + fp295;
LIBINT2_REALTYPE fp305;
fp305 = inteval->WQ_z[vi] * fp294;
LIBINT2_REALTYPE fp306;
fp306 = inteval->QC_z[vi] * fp348;
LIBINT2_REALTYPE fp304;
fp304 = fp306 + fp305;
LIBINT2_REALTYPE fp303;
fp303 = fp304 + fp334;
LIBINT2_REALTYPE fp196;
fp196 = inteval->WQ_z[vi] * fp303;
LIBINT2_REALTYPE fp459;
fp459 = inteval->roe[vi] * fp420;
LIBINT2_REALTYPE fp458;
fp458 = fp427 - fp459;
LIBINT2_REALTYPE fp339;
fp339 = inteval->oo2e[vi] * fp458;
LIBINT2_REALTYPE fp309;
fp309 = inteval->WQ_z[vi] * fp348;
LIBINT2_REALTYPE fp310;
fp310 = inteval->QC_z[vi] * fp8;
LIBINT2_REALTYPE fp308;
fp308 = fp310 + fp309;
LIBINT2_REALTYPE fp307;
fp307 = fp308 + fp339;
LIBINT2_REALTYPE fp16;
fp16 = fp307;
LIBINT2_REALTYPE fp197;
fp197 = inteval->QC_z[vi] * fp16;
LIBINT2_REALTYPE fp195;
fp195 = fp197 + fp196;
LIBINT2_REALTYPE fp191;
fp191 = fp195 + fp192;
LIBINT2_REALTYPE fp27;
fp27 = fp191;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp27),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp16),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp229;
fp229 = inteval->WQ_y[vi] * fp303;
LIBINT2_REALTYPE fp230;
fp230 = inteval->QC_y[vi] * fp16;
LIBINT2_REALTYPE fp228;
fp228 = fp230 + fp229;
LIBINT2_REALTYPE fp24;
fp24 = fp228;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp325;
fp325 = inteval->WQ_y[vi] * fp387;
LIBINT2_REALTYPE fp326;
fp326 = inteval->QC_y[vi] * fp404;
LIBINT2_REALTYPE fp324;
fp324 = fp326 + fp325;
LIBINT2_REALTYPE fp336;
fp336 = inteval->WQ_y[vi] * fp324;
LIBINT2_REALTYPE fp370;
fp370 = inteval->WQ_y[vi] * fp404;
LIBINT2_REALTYPE fp371;
fp371 = inteval->QC_y[vi] * fp420;
LIBINT2_REALTYPE fp369;
fp369 = fp371 + fp370;
LIBINT2_REALTYPE fp337;
fp337 = inteval->QC_y[vi] * fp369;
LIBINT2_REALTYPE fp335;
fp335 = fp337 + fp336;
LIBINT2_REALTYPE fp333;
fp333 = fp335 + fp334;
LIBINT2_REALTYPE fp241;
fp241 = inteval->WQ_z[vi] * fp333;
LIBINT2_REALTYPE fp341;
fp341 = inteval->WQ_y[vi] * fp369;
LIBINT2_REALTYPE fp373;
fp373 = inteval->WQ_y[vi] * fp420;
LIBINT2_REALTYPE fp374;
fp374 = inteval->QC_y[vi] * fp427;
LIBINT2_REALTYPE fp372;
fp372 = fp374 + fp373;
LIBINT2_REALTYPE fp5;
fp5 = fp372;
LIBINT2_REALTYPE fp342;
fp342 = inteval->QC_y[vi] * fp5;
LIBINT2_REALTYPE fp340;
fp340 = fp342 + fp341;
LIBINT2_REALTYPE fp338;
fp338 = fp340 + fp339;
LIBINT2_REALTYPE fp10;
fp10 = fp338;
LIBINT2_REALTYPE fp242;
fp242 = inteval->QC_z[vi] * fp10;
LIBINT2_REALTYPE fp240;
fp240 = fp242 + fp241;
LIBINT2_REALTYPE fp21;
fp21 = fp240;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp273;
fp273 = inteval->roe[vi] * fp369;
LIBINT2_REALTYPE fp272;
fp272 = fp5 - fp273;
LIBINT2_REALTYPE fp271;
fp271 = fp445 * fp272;
LIBINT2_REALTYPE fp275;
fp275 = inteval->WQ_y[vi] * fp333;
LIBINT2_REALTYPE fp276;
fp276 = inteval->QC_y[vi] * fp10;
LIBINT2_REALTYPE fp274;
fp274 = fp276 + fp275;
LIBINT2_REALTYPE fp270;
fp270 = fp274 + fp271;
LIBINT2_REALTYPE fp18;
fp18 = fp270;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp319;
fp319 = inteval->WQ_z[vi] * fp369;
LIBINT2_REALTYPE fp320;
fp320 = inteval->QC_z[vi] * fp5;
LIBINT2_REALTYPE fp318;
fp318 = fp320 + fp319;
LIBINT2_REALTYPE fp13;
fp13 = fp318;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp13),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp10),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp444;
fp444 = inteval->roe[vi] * fp414;
LIBINT2_REALTYPE fp443;
fp443 = fp417 - fp444;
LIBINT2_REALTYPE fp442;
fp442 = fp445 * fp443;
LIBINT2_REALTYPE fp447;
fp447 = inteval->WQ_x[vi] * fp420;
LIBINT2_REALTYPE fp448;
fp448 = inteval->QC_x[vi] * fp427;
LIBINT2_REALTYPE fp446;
fp446 = fp448 + fp447;
LIBINT2_REALTYPE fp441;
fp441 = fp446 + fp442;
LIBINT2_REALTYPE fp2;
fp2 = fp441;
LIBINT2_REALTYPE fp437;
fp437 = inteval->roe[vi] * fp411;
LIBINT2_REALTYPE fp436;
fp436 = fp414 - fp437;
LIBINT2_REALTYPE fp435;
fp435 = fp445 * fp436;
LIBINT2_REALTYPE fp439;
fp439 = inteval->WQ_x[vi] * fp404;
LIBINT2_REALTYPE fp440;
fp440 = inteval->QC_x[vi] * fp420;
LIBINT2_REALTYPE fp438;
fp438 = fp440 + fp439;
LIBINT2_REALTYPE fp434;
fp434 = fp438 + fp435;
LIBINT2_REALTYPE fp467;
fp467 = inteval->roe[vi] * fp434;
LIBINT2_REALTYPE fp466;
fp466 = fp2 - fp467;
LIBINT2_REALTYPE fp344;
fp344 = inteval->oo2e[vi] * fp466;
LIBINT2_REALTYPE fp397;
fp397 = inteval->roe[vi] * fp401;
LIBINT2_REALTYPE fp396;
fp396 = fp411 - fp397;
LIBINT2_REALTYPE fp395;
fp395 = fp445 * fp396;
LIBINT2_REALTYPE fp399;
fp399 = inteval->WQ_x[vi] * fp387;
LIBINT2_REALTYPE fp400;
fp400 = inteval->QC_x[vi] * fp404;
LIBINT2_REALTYPE fp398;
fp398 = fp400 + fp399;
LIBINT2_REALTYPE fp394;
fp394 = fp398 + fp395;
LIBINT2_REALTYPE fp355;
fp355 = inteval->WQ_z[vi] * fp394;
LIBINT2_REALTYPE fp356;
fp356 = inteval->QC_z[vi] * fp434;
LIBINT2_REALTYPE fp354;
fp354 = fp356 + fp355;
LIBINT2_REALTYPE fp313;
fp313 = inteval->WQ_z[vi] * fp354;
LIBINT2_REALTYPE fp358;
fp358 = inteval->WQ_z[vi] * fp434;
LIBINT2_REALTYPE fp359;
fp359 = inteval->QC_z[vi] * fp2;
LIBINT2_REALTYPE fp357;
fp357 = fp359 + fp358;
LIBINT2_REALTYPE fp7;
fp7 = fp357;
LIBINT2_REALTYPE fp314;
fp314 = inteval->QC_z[vi] * fp7;
LIBINT2_REALTYPE fp312;
fp312 = fp314 + fp313;
LIBINT2_REALTYPE fp311;
fp311 = fp312 + fp344;
LIBINT2_REALTYPE fp15;
fp15 = fp311;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp376;
fp376 = inteval->WQ_y[vi] * fp394;
LIBINT2_REALTYPE fp377;
fp377 = inteval->QC_y[vi] * fp434;
LIBINT2_REALTYPE fp375;
fp375 = fp377 + fp376;
LIBINT2_REALTYPE fp322;
fp322 = inteval->WQ_z[vi] * fp375;
LIBINT2_REALTYPE fp379;
fp379 = inteval->WQ_y[vi] * fp434;
LIBINT2_REALTYPE fp380;
fp380 = inteval->QC_y[vi] * fp2;
LIBINT2_REALTYPE fp378;
fp378 = fp380 + fp379;
LIBINT2_REALTYPE fp4;
fp4 = fp378;
LIBINT2_REALTYPE fp323;
fp323 = inteval->QC_z[vi] * fp4;
LIBINT2_REALTYPE fp321;
fp321 = fp323 + fp322;
LIBINT2_REALTYPE fp12;
fp12 = fp321;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp346;
fp346 = inteval->WQ_y[vi] * fp375;
LIBINT2_REALTYPE fp347;
fp347 = inteval->QC_y[vi] * fp4;
LIBINT2_REALTYPE fp345;
fp345 = fp347 + fp346;
LIBINT2_REALTYPE fp343;
fp343 = fp345 + fp344;
LIBINT2_REALTYPE fp9;
fp9 = fp343;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp9),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp450;
fp450 = fp460 * fp451;
LIBINT2_REALTYPE fp454;
fp454 = inteval->WQ_x[vi] * fp394;
LIBINT2_REALTYPE fp455;
fp455 = inteval->QC_x[vi] * fp434;
LIBINT2_REALTYPE fp453;
fp453 = fp455 + fp454;
LIBINT2_REALTYPE fp449;
fp449 = fp453 + fp450;
LIBINT2_REALTYPE fp361;
fp361 = inteval->WQ_z[vi] * fp449;
LIBINT2_REALTYPE fp457;
fp457 = fp460 * fp458;
LIBINT2_REALTYPE fp462;
fp462 = inteval->WQ_x[vi] * fp434;
LIBINT2_REALTYPE fp463;
fp463 = inteval->QC_x[vi] * fp2;
LIBINT2_REALTYPE fp461;
fp461 = fp463 + fp462;
LIBINT2_REALTYPE fp456;
fp456 = fp461 + fp457;
LIBINT2_REALTYPE fp1;
fp1 = fp456;
LIBINT2_REALTYPE fp362;
fp362 = inteval->QC_z[vi] * fp1;
LIBINT2_REALTYPE fp360;
fp360 = fp362 + fp361;
LIBINT2_REALTYPE fp6;
fp6 = fp360;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp6),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp382;
fp382 = inteval->WQ_y[vi] * fp449;
LIBINT2_REALTYPE fp383;
fp383 = inteval->QC_y[vi] * fp1;
LIBINT2_REALTYPE fp381;
fp381 = fp383 + fp382;
LIBINT2_REALTYPE fp3;
fp3 = fp381;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp465;
fp465 = fp468 * fp466;
LIBINT2_REALTYPE fp470;
fp470 = inteval->WQ_x[vi] * fp449;
LIBINT2_REALTYPE fp471;
fp471 = inteval->QC_x[vi] * fp1;
LIBINT2_REALTYPE fp469;
fp469 = fp471 + fp470;
LIBINT2_REALTYPE fp464;
fp464 = fp469 + fp465;
LIBINT2_REALTYPE fp0;
fp0 = fp464;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 472 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif