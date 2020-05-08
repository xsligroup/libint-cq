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
void _elecpotderiv1_S_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp124;
fp124 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp125;
fp125 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp123;
fp123 = fp125 - fp124;
LIBINT2_REALTYPE fp37;
fp37 = 2.0000000000000000e+00 * fp123;
LIBINT2_REALTYPE fp254;
fp254 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp121;
fp121 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp122;
fp122 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp122 - fp121;
LIBINT2_REALTYPE fp175;
fp175 = fp123 - fp120;
LIBINT2_REALTYPE fp174;
fp174 = fp254 * fp175;
LIBINT2_REALTYPE fp247;
fp247 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp246;
fp246 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp245;
fp245 = fp247 * fp246;
LIBINT2_REALTYPE fp165;
fp165 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp166;
fp166 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp164;
fp164 = fp166 - fp165;
LIBINT2_REALTYPE fp199;
fp199 = inteval->PC_z[vi] * fp164;
LIBINT2_REALTYPE fp88;
fp88 = inteval->PB_z[vi] * fp120;
LIBINT2_REALTYPE fp87;
fp87 = fp88 - fp199;
LIBINT2_REALTYPE fp86;
fp86 = fp87 + fp245;
LIBINT2_REALTYPE fp177;
fp177 = inteval->PC_z[vi] * fp86;
LIBINT2_REALTYPE fp153;
fp153 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp152;
fp152 = fp247 * fp153;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PC_z[vi] * fp120;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PB_z[vi] * fp123;
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp89;
fp89 = fp90 + fp152;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PB_z[vi] * fp89;
LIBINT2_REALTYPE fp62;
fp62 = fp63 - fp177;
LIBINT2_REALTYPE fp61;
fp61 = fp62 + fp174;
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_ket[vi] * fp61;
LIBINT2_REALTYPE fp36;
fp36 = fp38 - fp37;
LIBINT2_REALTYPE fp35;
fp35 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp139;
fp139 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp140;
fp140 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp138;
fp138 = fp140 - fp139;
LIBINT2_REALTYPE fp56;
fp56 = 1.0000000000000000e+00 * fp138;
LIBINT2_REALTYPE fp180;
fp180 = inteval->PC_y[vi] * fp86;
LIBINT2_REALTYPE fp71;
fp71 = inteval->PB_y[vi] * fp89;
LIBINT2_REALTYPE fp70;
fp70 = fp71 - fp180;
LIBINT2_REALTYPE fp41;
fp41 = inteval->two_alpha0_ket[vi] * fp70;
LIBINT2_REALTYPE fp39;
fp39 = fp41 - fp56;
LIBINT2_REALTYPE fp34;
fp34 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp168;
fp168 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp169;
fp169 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp167;
fp167 = fp169 - fp168;
LIBINT2_REALTYPE fp221;
fp221 = inteval->PC_y[vi] * fp167;
LIBINT2_REALTYPE fp136;
fp136 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp137;
fp137 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp137 - fp136;
LIBINT2_REALTYPE fp107;
fp107 = inteval->PB_y[vi] * fp135;
LIBINT2_REALTYPE fp106;
fp106 = fp107 - fp221;
LIBINT2_REALTYPE fp105;
fp105 = fp106 + fp245;
LIBINT2_REALTYPE fp189;
fp189 = inteval->PC_z[vi] * fp105;
LIBINT2_REALTYPE fp110;
fp110 = inteval->PC_y[vi] * fp135;
LIBINT2_REALTYPE fp111;
fp111 = inteval->PB_y[vi] * fp138;
LIBINT2_REALTYPE fp109;
fp109 = fp111 - fp110;
LIBINT2_REALTYPE fp108;
fp108 = fp109 + fp152;
LIBINT2_REALTYPE fp74;
fp74 = inteval->PB_z[vi] * fp108;
LIBINT2_REALTYPE fp73;
fp73 = fp74 - fp189;
LIBINT2_REALTYPE fp43;
fp43 = inteval->two_alpha0_ket[vi] * fp73;
LIBINT2_REALTYPE fp33;
fp33 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp161;
fp161 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp162;
fp162 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp160;
fp160 = fp162 - fp161;
LIBINT2_REALTYPE fp48;
fp48 = 1.0000000000000000e+00 * fp160;
LIBINT2_REALTYPE fp202;
fp202 = inteval->PC_x[vi] * fp86;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PB_x[vi] * fp89;
LIBINT2_REALTYPE fp93;
fp93 = fp94 - fp202;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha0_ket[vi] * fp93;
LIBINT2_REALTYPE fp40;
fp40 = fp49 - fp48;
LIBINT2_REALTYPE fp32;
fp32 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp171;
fp171 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp172;
fp172 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp170;
fp170 = fp172 - fp171;
LIBINT2_REALTYPE fp128;
fp128 = inteval->PC_y[vi] * fp170;
LIBINT2_REALTYPE fp158;
fp158 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp159;
fp159 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp157;
fp157 = fp159 - fp158;
LIBINT2_REALTYPE fp129;
fp129 = inteval->PB_y[vi] * fp157;
LIBINT2_REALTYPE fp127;
fp127 = fp129 - fp128;
LIBINT2_REALTYPE fp217;
fp217 = inteval->PC_z[vi] * fp127;
LIBINT2_REALTYPE fp131;
fp131 = inteval->PC_y[vi] * fp157;
LIBINT2_REALTYPE fp132;
fp132 = inteval->PB_y[vi] * fp160;
LIBINT2_REALTYPE fp130;
fp130 = fp132 - fp131;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PB_z[vi] * fp130;
LIBINT2_REALTYPE fp99;
fp99 = fp100 - fp217;
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_ket[vi] * fp99;
LIBINT2_REALTYPE fp31;
fp31 = fp50;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp249;
fp249 = inteval->PC_x[vi] * fp170;
LIBINT2_REALTYPE fp144;
fp144 = inteval->PB_x[vi] * fp157;
LIBINT2_REALTYPE fp143;
fp143 = fp144 - fp249;
LIBINT2_REALTYPE fp142;
fp142 = fp143 + fp245;
LIBINT2_REALTYPE fp236;
fp236 = inteval->PC_z[vi] * fp142;
LIBINT2_REALTYPE fp155;
fp155 = inteval->PC_x[vi] * fp157;
LIBINT2_REALTYPE fp147;
fp147 = inteval->PB_x[vi] * fp160;
LIBINT2_REALTYPE fp146;
fp146 = fp147 - fp155;
LIBINT2_REALTYPE fp145;
fp145 = fp146 + fp152;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PB_z[vi] * fp145;
LIBINT2_REALTYPE fp118;
fp118 = fp119 - fp236;
LIBINT2_REALTYPE fp54;
fp54 = inteval->two_alpha0_ket[vi] * fp118;
LIBINT2_REALTYPE fp30;
fp30 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp29;
fp29 = fp41;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * fp123;
LIBINT2_REALTYPE fp42;
fp42 = fp43 - fp53;
LIBINT2_REALTYPE fp28;
fp28 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp45;
fp45 = 2.0000000000000000e+00 * fp138;
LIBINT2_REALTYPE fp193;
fp193 = fp138 - fp135;
LIBINT2_REALTYPE fp192;
fp192 = fp254 * fp193;
LIBINT2_REALTYPE fp195;
fp195 = inteval->PC_y[vi] * fp105;
LIBINT2_REALTYPE fp78;
fp78 = inteval->PB_y[vi] * fp108;
LIBINT2_REALTYPE fp77;
fp77 = fp78 - fp195;
LIBINT2_REALTYPE fp76;
fp76 = fp77 + fp192;
LIBINT2_REALTYPE fp46;
fp46 = inteval->two_alpha0_ket[vi] * fp76;
LIBINT2_REALTYPE fp44;
fp44 = fp46 - fp45;
LIBINT2_REALTYPE fp27;
fp27 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp26;
fp26 = fp50;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp224;
fp224 = inteval->PC_x[vi] * fp105;
LIBINT2_REALTYPE fp113;
fp113 = inteval->PB_x[vi] * fp108;
LIBINT2_REALTYPE fp112;
fp112 = fp113 - fp224;
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_ket[vi] * fp112;
LIBINT2_REALTYPE fp47;
fp47 = fp51 - fp48;
LIBINT2_REALTYPE fp25;
fp25 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp242;
fp242 = inteval->PC_y[vi] * fp142;
LIBINT2_REALTYPE fp134;
fp134 = inteval->PB_y[vi] * fp145;
LIBINT2_REALTYPE fp133;
fp133 = fp134 - fp242;
LIBINT2_REALTYPE fp57;
fp57 = inteval->two_alpha0_ket[vi] * fp133;
LIBINT2_REALTYPE fp24;
fp24 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp23;
fp23 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp22;
fp22 = fp50;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp21;
fp21 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp52;
fp52 = fp54 - fp53;
LIBINT2_REALTYPE fp20;
fp20 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp55;
fp55 = fp57 - fp56;
LIBINT2_REALTYPE fp19;
fp19 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp59;
fp59 = 2.0000000000000000e+00 * fp160;
LIBINT2_REALTYPE fp253;
fp253 = fp160 - fp157;
LIBINT2_REALTYPE fp252;
fp252 = fp254 * fp253;
LIBINT2_REALTYPE fp256;
fp256 = inteval->PC_x[vi] * fp142;
LIBINT2_REALTYPE fp150;
fp150 = inteval->PB_x[vi] * fp145;
LIBINT2_REALTYPE fp149;
fp149 = fp150 - fp256;
LIBINT2_REALTYPE fp148;
fp148 = fp149 + fp252;
LIBINT2_REALTYPE fp60;
fp60 = inteval->two_alpha0_ket[vi] * fp148;
LIBINT2_REALTYPE fp58;
fp58 = fp60 - fp59;
LIBINT2_REALTYPE fp18;
fp18 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp178;
fp178 = inteval->PA_z[vi] * fp89;
LIBINT2_REALTYPE fp176;
fp176 = fp178 - fp177;
LIBINT2_REALTYPE fp173;
fp173 = fp176 + fp174;
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_bra[vi] * fp173;
LIBINT2_REALTYPE fp17;
fp17 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp200;
fp200 = inteval->PA_z[vi] * fp120;
LIBINT2_REALTYPE fp198;
fp198 = fp200 - fp199;
LIBINT2_REALTYPE fp197;
fp197 = fp198 + fp245;
LIBINT2_REALTYPE fp183;
fp183 = inteval->PC_y[vi] * fp197;
LIBINT2_REALTYPE fp85;
fp85 = inteval->PA_z[vi] * fp123;
LIBINT2_REALTYPE fp84;
fp84 = fp85 - fp91;
LIBINT2_REALTYPE fp83;
fp83 = fp84 + fp152;
LIBINT2_REALTYPE fp184;
fp184 = inteval->PB_y[vi] * fp83;
LIBINT2_REALTYPE fp182;
fp182 = fp184 - fp183;
LIBINT2_REALTYPE fp65;
fp65 = inteval->two_alpha0_bra[vi] * fp182;
LIBINT2_REALTYPE fp16;
fp16 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp190;
fp190 = inteval->PA_z[vi] * fp108;
LIBINT2_REALTYPE fp188;
fp188 = fp190 - fp189;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_bra[vi] * fp188;
LIBINT2_REALTYPE fp15;
fp15 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp205;
fp205 = inteval->PC_x[vi] * fp197;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PB_x[vi] * fp83;
LIBINT2_REALTYPE fp204;
fp204 = fp206 - fp205;
LIBINT2_REALTYPE fp67;
fp67 = inteval->two_alpha0_bra[vi] * fp204;
LIBINT2_REALTYPE fp14;
fp14 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp218;
fp218 = inteval->PA_z[vi] * fp130;
LIBINT2_REALTYPE fp216;
fp216 = fp218 - fp217;
LIBINT2_REALTYPE fp68;
fp68 = inteval->two_alpha0_bra[vi] * fp216;
LIBINT2_REALTYPE fp13;
fp13 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp237;
fp237 = inteval->PA_z[vi] * fp145;
LIBINT2_REALTYPE fp235;
fp235 = fp237 - fp236;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_bra[vi] * fp235;
LIBINT2_REALTYPE fp12;
fp12 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp181;
fp181 = inteval->PA_y[vi] * fp89;
LIBINT2_REALTYPE fp179;
fp179 = fp181 - fp180;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_bra[vi] * fp179;
LIBINT2_REALTYPE fp11;
fp11 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp222;
fp222 = inteval->PA_y[vi] * fp135;
LIBINT2_REALTYPE fp220;
fp220 = fp222 - fp221;
LIBINT2_REALTYPE fp219;
fp219 = fp220 + fp245;
LIBINT2_REALTYPE fp186;
fp186 = inteval->PC_z[vi] * fp219;
LIBINT2_REALTYPE fp104;
fp104 = inteval->PA_y[vi] * fp138;
LIBINT2_REALTYPE fp103;
fp103 = fp104 - fp110;
LIBINT2_REALTYPE fp102;
fp102 = fp103 + fp152;
LIBINT2_REALTYPE fp187;
fp187 = inteval->PB_z[vi] * fp102;
LIBINT2_REALTYPE fp185;
fp185 = fp187 - fp186;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha0_bra[vi] * fp185;
LIBINT2_REALTYPE fp10;
fp10 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp196;
fp196 = inteval->PA_y[vi] * fp108;
LIBINT2_REALTYPE fp194;
fp194 = fp196 - fp195;
LIBINT2_REALTYPE fp191;
fp191 = fp194 + fp192;
LIBINT2_REALTYPE fp79;
fp79 = inteval->two_alpha0_bra[vi] * fp191;
LIBINT2_REALTYPE fp9;
fp9 = fp79;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp230;
fp230 = inteval->PC_z[vi] * fp170;
LIBINT2_REALTYPE fp231;
fp231 = inteval->PB_z[vi] * fp157;
LIBINT2_REALTYPE fp229;
fp229 = fp231 - fp230;
LIBINT2_REALTYPE fp214;
fp214 = inteval->PC_y[vi] * fp229;
LIBINT2_REALTYPE fp116;
fp116 = inteval->PC_z[vi] * fp157;
LIBINT2_REALTYPE fp117;
fp117 = inteval->PB_z[vi] * fp160;
LIBINT2_REALTYPE fp115;
fp115 = fp117 - fp116;
LIBINT2_REALTYPE fp215;
fp215 = inteval->PA_y[vi] * fp115;
LIBINT2_REALTYPE fp213;
fp213 = fp215 - fp214;
LIBINT2_REALTYPE fp80;
fp80 = inteval->two_alpha0_bra[vi] * fp213;
LIBINT2_REALTYPE fp8;
fp8 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp227;
fp227 = inteval->PC_x[vi] * fp219;
LIBINT2_REALTYPE fp228;
fp228 = inteval->PB_x[vi] * fp102;
LIBINT2_REALTYPE fp226;
fp226 = fp228 - fp227;
LIBINT2_REALTYPE fp81;
fp81 = inteval->two_alpha0_bra[vi] * fp226;
LIBINT2_REALTYPE fp7;
fp7 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp243;
fp243 = inteval->PA_y[vi] * fp145;
LIBINT2_REALTYPE fp241;
fp241 = fp243 - fp242;
LIBINT2_REALTYPE fp82;
fp82 = inteval->two_alpha0_bra[vi] * fp241;
LIBINT2_REALTYPE fp6;
fp6 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp203;
fp203 = inteval->PA_x[vi] * fp89;
LIBINT2_REALTYPE fp201;
fp201 = fp203 - fp202;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_bra[vi] * fp201;
LIBINT2_REALTYPE fp5;
fp5 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp208;
fp208 = inteval->PC_z[vi] * fp167;
LIBINT2_REALTYPE fp209;
fp209 = inteval->PB_z[vi] * fp135;
LIBINT2_REALTYPE fp207;
fp207 = fp209 - fp208;
LIBINT2_REALTYPE fp211;
fp211 = inteval->PC_x[vi] * fp207;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PC_z[vi] * fp135;
LIBINT2_REALTYPE fp98;
fp98 = inteval->PB_z[vi] * fp138;
LIBINT2_REALTYPE fp96;
fp96 = fp98 - fp97;
LIBINT2_REALTYPE fp212;
fp212 = inteval->PA_x[vi] * fp96;
LIBINT2_REALTYPE fp210;
fp210 = fp212 - fp211;
LIBINT2_REALTYPE fp101;
fp101 = inteval->two_alpha0_bra[vi] * fp210;
LIBINT2_REALTYPE fp4;
fp4 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp225;
fp225 = inteval->PA_x[vi] * fp108;
LIBINT2_REALTYPE fp223;
fp223 = fp225 - fp224;
LIBINT2_REALTYPE fp114;
fp114 = inteval->two_alpha0_bra[vi] * fp223;
LIBINT2_REALTYPE fp3;
fp3 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp250;
fp250 = inteval->PA_x[vi] * fp157;
LIBINT2_REALTYPE fp248;
fp248 = fp250 - fp249;
LIBINT2_REALTYPE fp244;
fp244 = fp248 + fp245;
LIBINT2_REALTYPE fp233;
fp233 = inteval->PC_z[vi] * fp244;
LIBINT2_REALTYPE fp156;
fp156 = inteval->PA_x[vi] * fp160;
LIBINT2_REALTYPE fp154;
fp154 = fp156 - fp155;
LIBINT2_REALTYPE fp151;
fp151 = fp154 + fp152;
LIBINT2_REALTYPE fp234;
fp234 = inteval->PB_z[vi] * fp151;
LIBINT2_REALTYPE fp232;
fp232 = fp234 - fp233;
LIBINT2_REALTYPE fp126;
fp126 = inteval->two_alpha0_bra[vi] * fp232;
LIBINT2_REALTYPE fp2;
fp2 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp239;
fp239 = inteval->PC_y[vi] * fp244;
LIBINT2_REALTYPE fp240;
fp240 = inteval->PB_y[vi] * fp151;
LIBINT2_REALTYPE fp238;
fp238 = fp240 - fp239;
LIBINT2_REALTYPE fp141;
fp141 = inteval->two_alpha0_bra[vi] * fp238;
LIBINT2_REALTYPE fp1;
fp1 = fp141;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp257;
fp257 = inteval->PA_x[vi] * fp145;
LIBINT2_REALTYPE fp255;
fp255 = fp257 - fp256;
LIBINT2_REALTYPE fp251;
fp251 = fp255 + fp252;
LIBINT2_REALTYPE fp163;
fp163 = inteval->two_alpha0_bra[vi] * fp251;
LIBINT2_REALTYPE fp0;
fp0 = fp163;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 258 */
}

#ifdef __cplusplus
};
#endif
