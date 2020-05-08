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
void _elecpotderiv1_D_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp220;
fp220 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp228;
fp228 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp229;
fp229 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp227;
fp227 = fp229 - fp228;
LIBINT2_REALTYPE fp225;
fp225 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp226;
fp226 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp224;
fp224 = fp226 - fp225;
LIBINT2_REALTYPE fp153;
fp153 = fp227 - fp224;
LIBINT2_REALTYPE fp152;
fp152 = fp220 * fp153;
LIBINT2_REALTYPE fp276;
fp276 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp275;
fp275 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp274;
fp274 = fp276 * fp275;
LIBINT2_REALTYPE fp185;
fp185 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp186;
fp186 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp184;
fp184 = fp186 - fp185;
LIBINT2_REALTYPE fp83;
fp83 = inteval->PC_z[vi] * fp184;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PA_z[vi] * fp224;
LIBINT2_REALTYPE fp82;
fp82 = fp84 - fp83;
LIBINT2_REALTYPE fp81;
fp81 = fp82 + fp274;
LIBINT2_REALTYPE fp155;
fp155 = inteval->PC_z[vi] * fp81;
LIBINT2_REALTYPE fp261;
fp261 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp260;
fp260 = fp276 * fp261;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PC_z[vi] * fp224;
LIBINT2_REALTYPE fp88;
fp88 = inteval->PA_z[vi] * fp227;
LIBINT2_REALTYPE fp86;
fp86 = fp88 - fp87;
LIBINT2_REALTYPE fp85;
fp85 = fp86 + fp260;
LIBINT2_REALTYPE fp156;
fp156 = inteval->PB_z[vi] * fp85;
LIBINT2_REALTYPE fp154;
fp154 = fp156 - fp155;
LIBINT2_REALTYPE fp151;
fp151 = fp154 + fp152;
LIBINT2_REALTYPE fp36;
fp36 = inteval->two_alpha0_ket[vi] * fp151;
LIBINT2_REALTYPE fp35;
fp35 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp78;
fp78 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp77;
fp77 = fp78 - fp185;
LIBINT2_REALTYPE fp267;
fp267 = inteval->PC_z[vi] * fp77;
LIBINT2_REALTYPE fp80;
fp80 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 - fp225;
LIBINT2_REALTYPE fp268;
fp268 = inteval->PA_z[vi] * fp79;
LIBINT2_REALTYPE fp266;
fp266 = fp268 - fp267;
LIBINT2_REALTYPE fp265;
fp265 = fp266 + fp274;
LIBINT2_REALTYPE fp164;
fp164 = inteval->PC_y[vi] * fp265;
LIBINT2_REALTYPE fp232;
fp232 = inteval->PC_z[vi] * fp79;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp111;
fp111 = fp112 - fp228;
LIBINT2_REALTYPE fp233;
fp233 = inteval->PA_z[vi] * fp111;
LIBINT2_REALTYPE fp231;
fp231 = fp233 - fp232;
LIBINT2_REALTYPE fp230;
fp230 = fp231 + fp260;
LIBINT2_REALTYPE fp165;
fp165 = inteval->PA_y[vi] * fp230;
LIBINT2_REALTYPE fp163;
fp163 = fp165 - fp164;
LIBINT2_REALTYPE fp37;
fp37 = inteval->two_alpha0_ket[vi] * fp163;
LIBINT2_REALTYPE fp34;
fp34 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp197;
fp197 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp198;
fp198 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp196;
fp196 = fp198 - fp197;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PC_y[vi] * fp196;
LIBINT2_REALTYPE fp235;
fp235 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp236;
fp236 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp234;
fp234 = fp236 - fp235;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PA_y[vi] * fp234;
LIBINT2_REALTYPE fp101;
fp101 = fp103 - fp102;
LIBINT2_REALTYPE fp100;
fp100 = fp101 + fp274;
LIBINT2_REALTYPE fp167;
fp167 = inteval->PC_z[vi] * fp100;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PC_y[vi] * fp234;
LIBINT2_REALTYPE fp238;
fp238 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp239;
fp239 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp237;
fp237 = fp239 - fp238;
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_y[vi] * fp237;
LIBINT2_REALTYPE fp105;
fp105 = fp107 - fp106;
LIBINT2_REALTYPE fp104;
fp104 = fp105 + fp260;
LIBINT2_REALTYPE fp168;
fp168 = inteval->PB_z[vi] * fp104;
LIBINT2_REALTYPE fp166;
fp166 = fp168 - fp167;
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_ket[vi] * fp166;
LIBINT2_REALTYPE fp33;
fp33 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp188;
fp188 = inteval->PC_x[vi] * fp265;
LIBINT2_REALTYPE fp189;
fp189 = inteval->PA_x[vi] * fp230;
LIBINT2_REALTYPE fp187;
fp187 = fp189 - fp188;
LIBINT2_REALTYPE fp39;
fp39 = inteval->two_alpha0_ket[vi] * fp187;
LIBINT2_REALTYPE fp32;
fp32 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp281;
fp281 = inteval->PC_x[vi] * fp77;
LIBINT2_REALTYPE fp282;
fp282 = inteval->PA_x[vi] * fp79;
LIBINT2_REALTYPE fp280;
fp280 = fp282 - fp281;
LIBINT2_REALTYPE fp191;
fp191 = inteval->PC_y[vi] * fp280;
LIBINT2_REALTYPE fp245;
fp245 = inteval->PC_x[vi] * fp79;
LIBINT2_REALTYPE fp246;
fp246 = inteval->PA_x[vi] * fp111;
LIBINT2_REALTYPE fp244;
fp244 = fp246 - fp245;
LIBINT2_REALTYPE fp192;
fp192 = inteval->PA_y[vi] * fp244;
LIBINT2_REALTYPE fp190;
fp190 = fp192 - fp191;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha0_ket[vi] * fp190;
LIBINT2_REALTYPE fp31;
fp31 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp215;
fp215 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp216;
fp216 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp214;
fp214 = fp216 - fp215;
LIBINT2_REALTYPE fp139;
fp139 = inteval->PC_x[vi] * fp214;
LIBINT2_REALTYPE fp254;
fp254 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp255;
fp255 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp253;
fp253 = fp255 - fp254;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PA_x[vi] * fp253;
LIBINT2_REALTYPE fp138;
fp138 = fp140 - fp139;
LIBINT2_REALTYPE fp137;
fp137 = fp138 + fp274;
LIBINT2_REALTYPE fp203;
fp203 = inteval->PC_z[vi] * fp137;
LIBINT2_REALTYPE fp143;
fp143 = inteval->PC_x[vi] * fp253;
LIBINT2_REALTYPE fp257;
fp257 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp258;
fp258 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp256;
fp256 = fp258 - fp257;
LIBINT2_REALTYPE fp144;
fp144 = inteval->PA_x[vi] * fp256;
LIBINT2_REALTYPE fp142;
fp142 = fp144 - fp143;
LIBINT2_REALTYPE fp141;
fp141 = fp142 + fp260;
LIBINT2_REALTYPE fp204;
fp204 = inteval->PB_z[vi] * fp141;
LIBINT2_REALTYPE fp202;
fp202 = fp204 - fp203;
LIBINT2_REALTYPE fp41;
fp41 = inteval->two_alpha0_ket[vi] * fp202;
LIBINT2_REALTYPE fp30;
fp30 = fp41;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp158;
fp158 = inteval->PC_y[vi] * fp81;
LIBINT2_REALTYPE fp159;
fp159 = inteval->PB_y[vi] * fp85;
LIBINT2_REALTYPE fp157;
fp157 = fp159 - fp158;
LIBINT2_REALTYPE fp42;
fp42 = inteval->two_alpha0_ket[vi] * fp157;
LIBINT2_REALTYPE fp29;
fp29 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp97;
fp97 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 - fp197;
LIBINT2_REALTYPE fp271;
fp271 = inteval->PC_y[vi] * fp96;
LIBINT2_REALTYPE fp99;
fp99 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp99 - fp235;
LIBINT2_REALTYPE fp272;
fp272 = inteval->PA_y[vi] * fp98;
LIBINT2_REALTYPE fp270;
fp270 = fp272 - fp271;
LIBINT2_REALTYPE fp269;
fp269 = fp270 + fp274;
LIBINT2_REALTYPE fp170;
fp170 = inteval->PC_z[vi] * fp269;
LIBINT2_REALTYPE fp242;
fp242 = inteval->PC_y[vi] * fp98;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp119 - fp238;
LIBINT2_REALTYPE fp243;
fp243 = inteval->PA_y[vi] * fp118;
LIBINT2_REALTYPE fp241;
fp241 = fp243 - fp242;
LIBINT2_REALTYPE fp240;
fp240 = fp241 + fp260;
LIBINT2_REALTYPE fp171;
fp171 = inteval->PA_z[vi] * fp240;
LIBINT2_REALTYPE fp169;
fp169 = fp171 - fp170;
LIBINT2_REALTYPE fp43;
fp43 = inteval->two_alpha0_ket[vi] * fp169;
LIBINT2_REALTYPE fp28;
fp28 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp174;
fp174 = fp237 - fp234;
LIBINT2_REALTYPE fp173;
fp173 = fp220 * fp174;
LIBINT2_REALTYPE fp176;
fp176 = inteval->PC_y[vi] * fp100;
LIBINT2_REALTYPE fp177;
fp177 = inteval->PB_y[vi] * fp104;
LIBINT2_REALTYPE fp175;
fp175 = fp177 - fp176;
LIBINT2_REALTYPE fp172;
fp172 = fp175 + fp173;
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_ket[vi] * fp172;
LIBINT2_REALTYPE fp27;
fp27 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp284;
fp284 = inteval->PC_x[vi] * fp96;
LIBINT2_REALTYPE fp285;
fp285 = inteval->PA_x[vi] * fp98;
LIBINT2_REALTYPE fp283;
fp283 = fp285 - fp284;
LIBINT2_REALTYPE fp194;
fp194 = inteval->PC_z[vi] * fp283;
LIBINT2_REALTYPE fp248;
fp248 = inteval->PC_x[vi] * fp98;
LIBINT2_REALTYPE fp249;
fp249 = inteval->PA_x[vi] * fp118;
LIBINT2_REALTYPE fp247;
fp247 = fp249 - fp248;
LIBINT2_REALTYPE fp195;
fp195 = inteval->PA_z[vi] * fp247;
LIBINT2_REALTYPE fp193;
fp193 = fp195 - fp194;
LIBINT2_REALTYPE fp45;
fp45 = inteval->two_alpha0_ket[vi] * fp193;
LIBINT2_REALTYPE fp26;
fp26 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp200;
fp200 = inteval->PC_x[vi] * fp269;
LIBINT2_REALTYPE fp201;
fp201 = inteval->PA_x[vi] * fp240;
LIBINT2_REALTYPE fp199;
fp199 = fp201 - fp200;
LIBINT2_REALTYPE fp46;
fp46 = inteval->two_alpha0_ket[vi] * fp199;
LIBINT2_REALTYPE fp25;
fp25 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp209;
fp209 = inteval->PC_y[vi] * fp137;
LIBINT2_REALTYPE fp210;
fp210 = inteval->PB_y[vi] * fp141;
LIBINT2_REALTYPE fp208;
fp208 = fp210 - fp209;
LIBINT2_REALTYPE fp47;
fp47 = inteval->two_alpha0_ket[vi] * fp208;
LIBINT2_REALTYPE fp24;
fp24 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp161;
fp161 = inteval->PC_x[vi] * fp81;
LIBINT2_REALTYPE fp162;
fp162 = inteval->PB_x[vi] * fp85;
LIBINT2_REALTYPE fp160;
fp160 = fp162 - fp161;
LIBINT2_REALTYPE fp48;
fp48 = inteval->two_alpha0_ket[vi] * fp160;
LIBINT2_REALTYPE fp23;
fp23 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp132;
fp132 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp131;
fp131 = fp132 - fp215;
LIBINT2_REALTYPE fp287;
fp287 = inteval->PC_y[vi] * fp131;
LIBINT2_REALTYPE fp134;
fp134 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp134 - fp254;
LIBINT2_REALTYPE fp288;
fp288 = inteval->PA_y[vi] * fp133;
LIBINT2_REALTYPE fp286;
fp286 = fp288 - fp287;
LIBINT2_REALTYPE fp179;
fp179 = inteval->PC_z[vi] * fp286;
LIBINT2_REALTYPE fp251;
fp251 = inteval->PC_y[vi] * fp133;
LIBINT2_REALTYPE fp136;
fp136 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 - fp257;
LIBINT2_REALTYPE fp252;
fp252 = inteval->PA_y[vi] * fp135;
LIBINT2_REALTYPE fp250;
fp250 = fp252 - fp251;
LIBINT2_REALTYPE fp180;
fp180 = inteval->PA_z[vi] * fp250;
LIBINT2_REALTYPE fp178;
fp178 = fp180 - fp179;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha0_ket[vi] * fp178;
LIBINT2_REALTYPE fp22;
fp22 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp182;
fp182 = inteval->PC_x[vi] * fp100;
LIBINT2_REALTYPE fp183;
fp183 = inteval->PB_x[vi] * fp104;
LIBINT2_REALTYPE fp181;
fp181 = fp183 - fp182;
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_ket[vi] * fp181;
LIBINT2_REALTYPE fp21;
fp21 = fp50;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp278;
fp278 = inteval->PC_x[vi] * fp131;
LIBINT2_REALTYPE fp279;
fp279 = inteval->PA_x[vi] * fp133;
LIBINT2_REALTYPE fp277;
fp277 = fp279 - fp278;
LIBINT2_REALTYPE fp273;
fp273 = fp277 + fp274;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PC_z[vi] * fp273;
LIBINT2_REALTYPE fp263;
fp263 = inteval->PC_x[vi] * fp133;
LIBINT2_REALTYPE fp264;
fp264 = inteval->PA_x[vi] * fp135;
LIBINT2_REALTYPE fp262;
fp262 = fp264 - fp263;
LIBINT2_REALTYPE fp259;
fp259 = fp262 + fp260;
LIBINT2_REALTYPE fp207;
fp207 = inteval->PA_z[vi] * fp259;
LIBINT2_REALTYPE fp205;
fp205 = fp207 - fp206;
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_ket[vi] * fp205;
LIBINT2_REALTYPE fp20;
fp20 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp212;
fp212 = inteval->PC_y[vi] * fp273;
LIBINT2_REALTYPE fp213;
fp213 = inteval->PA_y[vi] * fp259;
LIBINT2_REALTYPE fp211;
fp211 = fp213 - fp212;
LIBINT2_REALTYPE fp52;
fp52 = inteval->two_alpha0_ket[vi] * fp211;
LIBINT2_REALTYPE fp19;
fp19 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp219;
fp219 = fp256 - fp253;
LIBINT2_REALTYPE fp218;
fp218 = fp220 * fp219;
LIBINT2_REALTYPE fp222;
fp222 = inteval->PC_x[vi] * fp137;
LIBINT2_REALTYPE fp223;
fp223 = inteval->PB_x[vi] * fp141;
LIBINT2_REALTYPE fp221;
fp221 = fp223 - fp222;
LIBINT2_REALTYPE fp217;
fp217 = fp221 + fp218;
LIBINT2_REALTYPE fp53;
fp53 = inteval->two_alpha0_ket[vi] * fp217;
LIBINT2_REALTYPE fp18;
fp18 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp58;
fp58 = 2.0000000000000000e+00 * fp227;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PA_z[vi] * fp85;
LIBINT2_REALTYPE fp55;
fp55 = fp56 - fp155;
LIBINT2_REALTYPE fp54;
fp54 = fp55 + fp152;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_bra[vi] * fp54;
LIBINT2_REALTYPE fp57;
fp57 = fp59 - fp58;
LIBINT2_REALTYPE fp17;
fp17 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp129;
fp129 = 1.0000000000000000e+00 * fp237;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PA_y[vi] * fp85;
LIBINT2_REALTYPE fp62;
fp62 = fp63 - fp158;
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_bra[vi] * fp62;
LIBINT2_REALTYPE fp60;
fp60 = fp64 - fp129;
LIBINT2_REALTYPE fp16;
fp16 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp66;
fp66 = inteval->PA_z[vi] * fp104;
LIBINT2_REALTYPE fp65;
fp65 = fp66 - fp167;
LIBINT2_REALTYPE fp68;
fp68 = inteval->two_alpha0_bra[vi] * fp65;
LIBINT2_REALTYPE fp15;
fp15 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+00 * fp256;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PA_x[vi] * fp85;
LIBINT2_REALTYPE fp89;
fp89 = fp90 - fp161;
LIBINT2_REALTYPE fp91;
fp91 = inteval->two_alpha0_bra[vi] * fp89;
LIBINT2_REALTYPE fp61;
fp61 = fp91 - fp76;
LIBINT2_REALTYPE fp14;
fp14 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp121;
fp121 = inteval->PC_y[vi] * fp214;
LIBINT2_REALTYPE fp122;
fp122 = inteval->PA_y[vi] * fp253;
LIBINT2_REALTYPE fp120;
fp120 = fp122 - fp121;
LIBINT2_REALTYPE fp93;
fp93 = inteval->PC_z[vi] * fp120;
LIBINT2_REALTYPE fp124;
fp124 = inteval->PC_y[vi] * fp253;
LIBINT2_REALTYPE fp125;
fp125 = inteval->PA_y[vi] * fp256;
LIBINT2_REALTYPE fp123;
fp123 = fp125 - fp124;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_z[vi] * fp123;
LIBINT2_REALTYPE fp92;
fp92 = fp94 - fp93;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_bra[vi] * fp92;
LIBINT2_REALTYPE fp13;
fp13 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp114;
fp114 = inteval->PA_z[vi] * fp141;
LIBINT2_REALTYPE fp113;
fp113 = fp114 - fp203;
LIBINT2_REALTYPE fp117;
fp117 = inteval->two_alpha0_bra[vi] * fp113;
LIBINT2_REALTYPE fp12;
fp12 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp11;
fp11 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp116;
fp116 = 1.0000000000000000e+00 * fp227;
LIBINT2_REALTYPE fp67;
fp67 = fp68 - fp116;
LIBINT2_REALTYPE fp10;
fp10 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp73;
fp73 = 2.0000000000000000e+00 * fp237;
LIBINT2_REALTYPE fp71;
fp71 = inteval->PA_y[vi] * fp104;
LIBINT2_REALTYPE fp70;
fp70 = fp71 - fp176;
LIBINT2_REALTYPE fp69;
fp69 = fp70 + fp173;
LIBINT2_REALTYPE fp74;
fp74 = inteval->two_alpha0_bra[vi] * fp69;
LIBINT2_REALTYPE fp72;
fp72 = fp74 - fp73;
LIBINT2_REALTYPE fp9;
fp9 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp8;
fp8 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp109;
fp109 = inteval->PA_x[vi] * fp104;
LIBINT2_REALTYPE fp108;
fp108 = fp109 - fp182;
LIBINT2_REALTYPE fp110;
fp110 = inteval->two_alpha0_bra[vi] * fp108;
LIBINT2_REALTYPE fp75;
fp75 = fp110 - fp76;
LIBINT2_REALTYPE fp7;
fp7 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp127;
fp127 = inteval->PA_y[vi] * fp141;
LIBINT2_REALTYPE fp126;
fp126 = fp127 - fp209;
LIBINT2_REALTYPE fp130;
fp130 = inteval->two_alpha0_bra[vi] * fp126;
LIBINT2_REALTYPE fp6;
fp6 = fp130;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp5;
fp5 = fp91;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp4;
fp4 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp3;
fp3 = fp110;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp115;
fp115 = fp117 - fp116;
LIBINT2_REALTYPE fp2;
fp2 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp128;
fp128 = fp130 - fp129;
LIBINT2_REALTYPE fp1;
fp1 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp149;
fp149 = 2.0000000000000000e+00 * fp256;
LIBINT2_REALTYPE fp147;
fp147 = inteval->PA_x[vi] * fp141;
LIBINT2_REALTYPE fp146;
fp146 = fp147 - fp222;
LIBINT2_REALTYPE fp145;
fp145 = fp146 + fp218;
LIBINT2_REALTYPE fp150;
fp150 = inteval->two_alpha0_bra[vi] * fp145;
LIBINT2_REALTYPE fp148;
fp148 = fp150 - fp149;
LIBINT2_REALTYPE fp0;
fp0 = fp148;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 289 */
}

#ifdef __cplusplus
};
#endif
