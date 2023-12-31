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
void _elecpotderiv1_S_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp486;
fp486 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp335;
fp335 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp334;
fp334 = fp486 * fp335;
LIBINT2_REALTYPE fp193;
fp193 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp194;
fp194 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp192;
fp192 = fp194 - fp193;
LIBINT2_REALTYPE fp219;
fp219 = inteval->PC_z[vi] * fp192;
LIBINT2_REALTYPE fp196;
fp196 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp197;
fp197 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp195;
fp195 = fp197 - fp196;
LIBINT2_REALTYPE fp220;
fp220 = inteval->PB_z[vi] * fp195;
LIBINT2_REALTYPE fp218;
fp218 = fp220 - fp219;
LIBINT2_REALTYPE fp217;
fp217 = fp218 + fp334;
LIBINT2_REALTYPE fp61;
fp61 = 3.0000000000000000e+00 * fp217;
LIBINT2_REALTYPE fp500;
fp500 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp329;
fp329 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp328;
fp328 = fp486 * fp329;
LIBINT2_REALTYPE fp187;
fp187 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp188;
fp188 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp186;
fp186 = fp188 - fp187;
LIBINT2_REALTYPE fp215;
fp215 = inteval->PC_z[vi] * fp186;
LIBINT2_REALTYPE fp216;
fp216 = inteval->PB_z[vi] * fp192;
LIBINT2_REALTYPE fp214;
fp214 = fp216 - fp215;
LIBINT2_REALTYPE fp213;
fp213 = fp214 + fp328;
LIBINT2_REALTYPE fp440;
fp440 = fp217 - fp213;
LIBINT2_REALTYPE fp350;
fp350 = fp500 * fp440;
LIBINT2_REALTYPE fp493;
fp493 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp381;
fp381 = fp192 - fp186;
LIBINT2_REALTYPE fp380;
fp380 = fp493 * fp381;
LIBINT2_REALTYPE fp485;
fp485 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp484;
fp484 = fp486 * fp485;
LIBINT2_REALTYPE fp341;
fp341 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp342;
fp342 = inteval->PB_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp340;
fp340 = fp342 - fp341;
LIBINT2_REALTYPE fp393;
fp393 = inteval->PC_z[vi] * fp340;
LIBINT2_REALTYPE fp185;
fp185 = inteval->PB_z[vi] * fp186;
LIBINT2_REALTYPE fp184;
fp184 = fp185 - fp393;
LIBINT2_REALTYPE fp183;
fp183 = fp184 + fp484;
LIBINT2_REALTYPE fp383;
fp383 = inteval->PC_z[vi] * fp183;
LIBINT2_REALTYPE fp143;
fp143 = inteval->PB_z[vi] * fp213;
LIBINT2_REALTYPE fp142;
fp142 = fp143 - fp383;
LIBINT2_REALTYPE fp141;
fp141 = fp142 + fp380;
LIBINT2_REALTYPE fp352;
fp352 = inteval->PC_z[vi] * fp141;
LIBINT2_REALTYPE fp146;
fp146 = fp195 - fp192;
LIBINT2_REALTYPE fp145;
fp145 = fp493 * fp146;
LIBINT2_REALTYPE fp148;
fp148 = inteval->PC_z[vi] * fp213;
LIBINT2_REALTYPE fp149;
fp149 = inteval->PB_z[vi] * fp217;
LIBINT2_REALTYPE fp147;
fp147 = fp149 - fp148;
LIBINT2_REALTYPE fp144;
fp144 = fp147 + fp145;
LIBINT2_REALTYPE fp107;
fp107 = inteval->PB_z[vi] * fp144;
LIBINT2_REALTYPE fp106;
fp106 = fp107 - fp352;
LIBINT2_REALTYPE fp105;
fp105 = fp106 + fp350;
LIBINT2_REALTYPE fp62;
fp62 = inteval->two_alpha0_ket[vi] * fp105;
LIBINT2_REALTYPE fp60;
fp60 = fp62 - fp61;
LIBINT2_REALTYPE fp59;
fp59 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp238;
fp238 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp239;
fp239 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp237;
fp237 = fp239 - fp238;
LIBINT2_REALTYPE fp225;
fp225 = inteval->PC_z[vi] * fp237;
LIBINT2_REALTYPE fp241;
fp241 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp242;
fp242 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp240;
fp240 = fp242 - fp241;
LIBINT2_REALTYPE fp226;
fp226 = inteval->PB_z[vi] * fp240;
LIBINT2_REALTYPE fp224;
fp224 = fp226 - fp225;
LIBINT2_REALTYPE fp73;
fp73 = 2.0000000000000000e+00 * fp224;
LIBINT2_REALTYPE fp355;
fp355 = inteval->PC_y[vi] * fp141;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PB_y[vi] * fp144;
LIBINT2_REALTYPE fp118;
fp118 = fp119 - fp355;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_ket[vi] * fp118;
LIBINT2_REALTYPE fp63;
fp63 = fp69 - fp73;
LIBINT2_REALTYPE fp58;
fp58 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp264;
fp264 = inteval->PC_y[vi] * fp237;
LIBINT2_REALTYPE fp265;
fp265 = inteval->PB_y[vi] * fp240;
LIBINT2_REALTYPE fp263;
fp263 = fp265 - fp264;
LIBINT2_REALTYPE fp262;
fp262 = fp263 + fp334;
LIBINT2_REALTYPE fp94;
fp94 = 1.0000000000000000e+00 * fp262;
LIBINT2_REALTYPE fp232;
fp232 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp233;
fp233 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp231;
fp231 = fp233 - fp232;
LIBINT2_REALTYPE fp260;
fp260 = inteval->PC_y[vi] * fp231;
LIBINT2_REALTYPE fp261;
fp261 = inteval->PB_y[vi] * fp237;
LIBINT2_REALTYPE fp259;
fp259 = fp261 - fp260;
LIBINT2_REALTYPE fp258;
fp258 = fp259 + fp328;
LIBINT2_REALTYPE fp462;
fp462 = fp262 - fp258;
LIBINT2_REALTYPE fp461;
fp461 = fp486 * fp462;
LIBINT2_REALTYPE fp344;
fp344 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp345;
fp345 = inteval->PB_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp343;
fp343 = fp345 - fp344;
LIBINT2_REALTYPE fp424;
fp424 = inteval->PC_y[vi] * fp343;
LIBINT2_REALTYPE fp230;
fp230 = inteval->PB_y[vi] * fp231;
LIBINT2_REALTYPE fp229;
fp229 = fp230 - fp424;
LIBINT2_REALTYPE fp228;
fp228 = fp229 + fp484;
LIBINT2_REALTYPE fp160;
fp160 = inteval->PC_z[vi] * fp228;
LIBINT2_REALTYPE fp161;
fp161 = inteval->PB_z[vi] * fp258;
LIBINT2_REALTYPE fp159;
fp159 = fp161 - fp160;
LIBINT2_REALTYPE fp366;
fp366 = inteval->PC_z[vi] * fp159;
LIBINT2_REALTYPE fp163;
fp163 = inteval->PC_z[vi] * fp258;
LIBINT2_REALTYPE fp164;
fp164 = inteval->PB_z[vi] * fp262;
LIBINT2_REALTYPE fp162;
fp162 = fp164 - fp163;
LIBINT2_REALTYPE fp123;
fp123 = inteval->PB_z[vi] * fp162;
LIBINT2_REALTYPE fp122;
fp122 = fp123 - fp366;
LIBINT2_REALTYPE fp121;
fp121 = fp122 + fp461;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_ket[vi] * fp121;
LIBINT2_REALTYPE fp64;
fp64 = fp71 - fp94;
LIBINT2_REALTYPE fp57;
fp57 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp428;
fp428 = fp237 - fp231;
LIBINT2_REALTYPE fp427;
fp427 = fp493 * fp428;
LIBINT2_REALTYPE fp430;
fp430 = inteval->PC_y[vi] * fp228;
LIBINT2_REALTYPE fp173;
fp173 = inteval->PB_y[vi] * fp258;
LIBINT2_REALTYPE fp172;
fp172 = fp173 - fp430;
LIBINT2_REALTYPE fp171;
fp171 = fp172 + fp427;
LIBINT2_REALTYPE fp372;
fp372 = inteval->PC_z[vi] * fp171;
LIBINT2_REALTYPE fp176;
fp176 = fp240 - fp237;
LIBINT2_REALTYPE fp175;
fp175 = fp493 * fp176;
LIBINT2_REALTYPE fp178;
fp178 = inteval->PC_y[vi] * fp258;
LIBINT2_REALTYPE fp179;
fp179 = inteval->PB_y[vi] * fp262;
LIBINT2_REALTYPE fp177;
fp177 = fp179 - fp178;
LIBINT2_REALTYPE fp174;
fp174 = fp177 + fp175;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PB_z[vi] * fp174;
LIBINT2_REALTYPE fp125;
fp125 = fp126 - fp372;
LIBINT2_REALTYPE fp74;
fp74 = inteval->two_alpha0_ket[vi] * fp125;
LIBINT2_REALTYPE fp56;
fp56 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp301;
fp301 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp302;
fp302 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp300;
fp300 = fp302 - fp301;
LIBINT2_REALTYPE fp276;
fp276 = inteval->PC_z[vi] * fp300;
LIBINT2_REALTYPE fp304;
fp304 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp305;
fp305 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp303;
fp303 = fp305 - fp304;
LIBINT2_REALTYPE fp277;
fp277 = inteval->PB_z[vi] * fp303;
LIBINT2_REALTYPE fp275;
fp275 = fp277 - fp276;
LIBINT2_REALTYPE fp97;
fp97 = 2.0000000000000000e+00 * fp275;
LIBINT2_REALTYPE fp386;
fp386 = inteval->PC_x[vi] * fp141;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PB_x[vi] * fp144;
LIBINT2_REALTYPE fp150;
fp150 = fp151 - fp386;
LIBINT2_REALTYPE fp83;
fp83 = inteval->two_alpha0_ket[vi] * fp150;
LIBINT2_REALTYPE fp65;
fp65 = fp83 - fp97;
LIBINT2_REALTYPE fp55;
fp55 = fp65;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp205;
fp205 = inteval->PC_x[vi] * fp183;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PB_x[vi] * fp213;
LIBINT2_REALTYPE fp204;
fp204 = fp206 - fp205;
LIBINT2_REALTYPE fp405;
fp405 = inteval->PC_y[vi] * fp204;
LIBINT2_REALTYPE fp208;
fp208 = inteval->PC_x[vi] * fp213;
LIBINT2_REALTYPE fp209;
fp209 = inteval->PB_x[vi] * fp217;
LIBINT2_REALTYPE fp207;
fp207 = fp209 - fp208;
LIBINT2_REALTYPE fp157;
fp157 = inteval->PB_y[vi] * fp207;
LIBINT2_REALTYPE fp156;
fp156 = fp157 - fp405;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_ket[vi] * fp156;
LIBINT2_REALTYPE fp291;
fp291 = inteval->PC_y[vi] * fp300;
LIBINT2_REALTYPE fp292;
fp292 = inteval->PB_y[vi] * fp303;
LIBINT2_REALTYPE fp290;
fp290 = fp292 - fp291;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * fp290;
LIBINT2_REALTYPE fp66;
fp66 = fp84 - fp67;
LIBINT2_REALTYPE fp54;
fp54 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp250;
fp250 = inteval->PC_x[vi] * fp228;
LIBINT2_REALTYPE fp251;
fp251 = inteval->PB_x[vi] * fp258;
LIBINT2_REALTYPE fp249;
fp249 = fp251 - fp250;
LIBINT2_REALTYPE fp420;
fp420 = inteval->PC_z[vi] * fp249;
LIBINT2_REALTYPE fp253;
fp253 = inteval->PC_x[vi] * fp258;
LIBINT2_REALTYPE fp254;
fp254 = inteval->PB_x[vi] * fp262;
LIBINT2_REALTYPE fp252;
fp252 = fp254 - fp253;
LIBINT2_REALTYPE fp166;
fp166 = inteval->PB_z[vi] * fp252;
LIBINT2_REALTYPE fp165;
fp165 = fp166 - fp420;
LIBINT2_REALTYPE fp85;
fp85 = inteval->two_alpha0_ket[vi] * fp165;
LIBINT2_REALTYPE fp53;
fp53 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp337;
fp337 = inteval->PC_x[vi] * fp300;
LIBINT2_REALTYPE fp338;
fp338 = inteval->PB_x[vi] * fp303;
LIBINT2_REALTYPE fp336;
fp336 = fp338 - fp337;
LIBINT2_REALTYPE fp333;
fp333 = fp336 + fp334;
LIBINT2_REALTYPE fp82;
fp82 = 1.0000000000000000e+00 * fp333;
LIBINT2_REALTYPE fp298;
fp298 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp299;
fp299 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp297;
fp297 = fp299 - fp298;
LIBINT2_REALTYPE fp331;
fp331 = inteval->PC_x[vi] * fp297;
LIBINT2_REALTYPE fp332;
fp332 = inteval->PB_x[vi] * fp300;
LIBINT2_REALTYPE fp330;
fp330 = fp332 - fp331;
LIBINT2_REALTYPE fp327;
fp327 = fp330 + fp328;
LIBINT2_REALTYPE fp499;
fp499 = fp333 - fp327;
LIBINT2_REALTYPE fp467;
fp467 = fp486 * fp499;
LIBINT2_REALTYPE fp347;
fp347 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi];
LIBINT2_REALTYPE fp348;
fp348 = inteval->PB_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi];
LIBINT2_REALTYPE fp346;
fp346 = fp348 - fp347;
LIBINT2_REALTYPE fp488;
fp488 = inteval->PC_x[vi] * fp346;
LIBINT2_REALTYPE fp296;
fp296 = inteval->PB_x[vi] * fp297;
LIBINT2_REALTYPE fp295;
fp295 = fp296 - fp488;
LIBINT2_REALTYPE fp294;
fp294 = fp295 + fp484;
LIBINT2_REALTYPE fp268;
fp268 = inteval->PC_z[vi] * fp294;
LIBINT2_REALTYPE fp269;
fp269 = inteval->PB_z[vi] * fp327;
LIBINT2_REALTYPE fp267;
fp267 = fp269 - fp268;
LIBINT2_REALTYPE fp446;
fp446 = inteval->PC_z[vi] * fp267;
LIBINT2_REALTYPE fp271;
fp271 = inteval->PC_z[vi] * fp327;
LIBINT2_REALTYPE fp272;
fp272 = inteval->PB_z[vi] * fp333;
LIBINT2_REALTYPE fp270;
fp270 = fp272 - fp271;
LIBINT2_REALTYPE fp212;
fp212 = inteval->PB_z[vi] * fp270;
LIBINT2_REALTYPE fp211;
fp211 = fp212 - fp446;
LIBINT2_REALTYPE fp210;
fp210 = fp211 + fp467;
LIBINT2_REALTYPE fp89;
fp89 = inteval->two_alpha0_ket[vi] * fp210;
LIBINT2_REALTYPE fp68;
fp68 = fp89 - fp82;
LIBINT2_REALTYPE fp52;
fp52 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp280;
fp280 = inteval->PC_y[vi] * fp294;
LIBINT2_REALTYPE fp281;
fp281 = inteval->PB_y[vi] * fp327;
LIBINT2_REALTYPE fp279;
fp279 = fp281 - fp280;
LIBINT2_REALTYPE fp455;
fp455 = inteval->PC_z[vi] * fp279;
LIBINT2_REALTYPE fp283;
fp283 = inteval->PC_y[vi] * fp327;
LIBINT2_REALTYPE fp284;
fp284 = inteval->PB_y[vi] * fp333;
LIBINT2_REALTYPE fp282;
fp282 = fp284 - fp283;
LIBINT2_REALTYPE fp223;
fp223 = inteval->PB_z[vi] * fp282;
LIBINT2_REALTYPE fp222;
fp222 = fp223 - fp455;
LIBINT2_REALTYPE fp92;
fp92 = inteval->two_alpha0_ket[vi] * fp222;
LIBINT2_REALTYPE fp51;
fp51 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp492;
fp492 = fp300 - fp297;
LIBINT2_REALTYPE fp491;
fp491 = fp493 * fp492;
LIBINT2_REALTYPE fp495;
fp495 = inteval->PC_x[vi] * fp294;
LIBINT2_REALTYPE fp314;
fp314 = inteval->PB_x[vi] * fp327;
LIBINT2_REALTYPE fp313;
fp313 = fp314 - fp495;
LIBINT2_REALTYPE fp312;
fp312 = fp313 + fp491;
LIBINT2_REALTYPE fp475;
fp475 = inteval->PC_z[vi] * fp312;
LIBINT2_REALTYPE fp323;
fp323 = fp303 - fp300;
LIBINT2_REALTYPE fp322;
fp322 = fp493 * fp323;
LIBINT2_REALTYPE fp325;
fp325 = inteval->PC_x[vi] * fp327;
LIBINT2_REALTYPE fp317;
fp317 = inteval->PB_x[vi] * fp333;
LIBINT2_REALTYPE fp316;
fp316 = fp317 - fp325;
LIBINT2_REALTYPE fp315;
fp315 = fp316 + fp322;
LIBINT2_REALTYPE fp274;
fp274 = inteval->PB_z[vi] * fp315;
LIBINT2_REALTYPE fp273;
fp273 = fp274 - fp475;
LIBINT2_REALTYPE fp98;
fp98 = inteval->two_alpha0_ket[vi] * fp273;
LIBINT2_REALTYPE fp50;
fp50 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp49;
fp49 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp88;
fp88 = 1.0000000000000000e+00 * fp217;
LIBINT2_REALTYPE fp70;
fp70 = fp71 - fp88;
LIBINT2_REALTYPE fp48;
fp48 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp72;
fp72 = fp74 - fp73;
LIBINT2_REALTYPE fp47;
fp47 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp76;
fp76 = 3.0000000000000000e+00 * fp262;
LIBINT2_REALTYPE fp375;
fp375 = fp500 * fp462;
LIBINT2_REALTYPE fp377;
fp377 = inteval->PC_y[vi] * fp171;
LIBINT2_REALTYPE fp130;
fp130 = inteval->PB_y[vi] * fp174;
LIBINT2_REALTYPE fp129;
fp129 = fp130 - fp377;
LIBINT2_REALTYPE fp128;
fp128 = fp129 + fp375;
LIBINT2_REALTYPE fp77;
fp77 = inteval->two_alpha0_ket[vi] * fp128;
LIBINT2_REALTYPE fp75;
fp75 = fp77 - fp76;
LIBINT2_REALTYPE fp46;
fp46 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp45;
fp45 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+00 * fp275;
LIBINT2_REALTYPE fp78;
fp78 = fp85 - fp79;
LIBINT2_REALTYPE fp44;
fp44 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp100;
fp100 = 2.0000000000000000e+00 * fp290;
LIBINT2_REALTYPE fp433;
fp433 = inteval->PC_x[vi] * fp171;
LIBINT2_REALTYPE fp181;
fp181 = inteval->PB_x[vi] * fp174;
LIBINT2_REALTYPE fp180;
fp180 = fp181 - fp433;
LIBINT2_REALTYPE fp86;
fp86 = inteval->two_alpha0_ket[vi] * fp180;
LIBINT2_REALTYPE fp80;
fp80 = fp86 - fp100;
LIBINT2_REALTYPE fp43;
fp43 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp42;
fp42 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp469;
fp469 = inteval->PC_y[vi] * fp279;
LIBINT2_REALTYPE fp257;
fp257 = inteval->PB_y[vi] * fp282;
LIBINT2_REALTYPE fp256;
fp256 = fp257 - fp469;
LIBINT2_REALTYPE fp255;
fp255 = fp256 + fp467;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_ket[vi] * fp255;
LIBINT2_REALTYPE fp81;
fp81 = fp95 - fp82;
LIBINT2_REALTYPE fp41;
fp41 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp481;
fp481 = inteval->PC_y[vi] * fp312;
LIBINT2_REALTYPE fp286;
fp286 = inteval->PB_y[vi] * fp315;
LIBINT2_REALTYPE fp285;
fp285 = fp286 - fp481;
LIBINT2_REALTYPE fp101;
fp101 = inteval->two_alpha0_ket[vi] * fp285;
LIBINT2_REALTYPE fp40;
fp40 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp39;
fp39 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp38;
fp38 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp37;
fp37 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp36;
fp36 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp87;
fp87 = fp89 - fp88;
LIBINT2_REALTYPE fp35;
fp35 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * fp224;
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp34;
fp34 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp93;
fp93 = fp95 - fp94;
LIBINT2_REALTYPE fp33;
fp33 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp96;
fp96 = fp98 - fp97;
LIBINT2_REALTYPE fp32;
fp32 = fp96;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp99;
fp99 = fp101 - fp100;
LIBINT2_REALTYPE fp31;
fp31 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp103;
fp103 = 3.0000000000000000e+00 * fp333;
LIBINT2_REALTYPE fp498;
fp498 = fp500 * fp499;
LIBINT2_REALTYPE fp502;
fp502 = inteval->PC_x[vi] * fp312;
LIBINT2_REALTYPE fp320;
fp320 = inteval->PB_x[vi] * fp315;
LIBINT2_REALTYPE fp319;
fp319 = fp320 - fp502;
LIBINT2_REALTYPE fp318;
fp318 = fp319 + fp498;
LIBINT2_REALTYPE fp104;
fp104 = inteval->two_alpha0_ket[vi] * fp318;
LIBINT2_REALTYPE fp102;
fp102 = fp104 - fp103;
LIBINT2_REALTYPE fp30;
fp30 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp353;
fp353 = inteval->PA_z[vi] * fp144;
LIBINT2_REALTYPE fp351;
fp351 = fp353 - fp352;
LIBINT2_REALTYPE fp349;
fp349 = fp351 + fp350;
LIBINT2_REALTYPE fp108;
fp108 = inteval->two_alpha0_bra[vi] * fp349;
LIBINT2_REALTYPE fp29;
fp29 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp384;
fp384 = inteval->PA_z[vi] * fp213;
LIBINT2_REALTYPE fp382;
fp382 = fp384 - fp383;
LIBINT2_REALTYPE fp379;
fp379 = fp382 + fp380;
LIBINT2_REALTYPE fp358;
fp358 = inteval->PC_y[vi] * fp379;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PA_z[vi] * fp217;
LIBINT2_REALTYPE fp139;
fp139 = fp140 - fp148;
LIBINT2_REALTYPE fp138;
fp138 = fp139 + fp145;
LIBINT2_REALTYPE fp359;
fp359 = inteval->PB_y[vi] * fp138;
LIBINT2_REALTYPE fp357;
fp357 = fp359 - fp358;
LIBINT2_REALTYPE fp109;
fp109 = inteval->two_alpha0_bra[vi] * fp357;
LIBINT2_REALTYPE fp28;
fp28 = fp109;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp367;
fp367 = inteval->PA_z[vi] * fp162;
LIBINT2_REALTYPE fp365;
fp365 = fp367 - fp366;
LIBINT2_REALTYPE fp364;
fp364 = fp365 + fp461;
LIBINT2_REALTYPE fp110;
fp110 = inteval->two_alpha0_bra[vi] * fp364;
LIBINT2_REALTYPE fp27;
fp27 = fp110;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp373;
fp373 = inteval->PA_z[vi] * fp174;
LIBINT2_REALTYPE fp371;
fp371 = fp373 - fp372;
LIBINT2_REALTYPE fp111;
fp111 = inteval->two_alpha0_bra[vi] * fp371;
LIBINT2_REALTYPE fp26;
fp26 = fp111;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp389;
fp389 = inteval->PC_x[vi] * fp379;
LIBINT2_REALTYPE fp390;
fp390 = inteval->PB_x[vi] * fp138;
LIBINT2_REALTYPE fp388;
fp388 = fp390 - fp389;
LIBINT2_REALTYPE fp112;
fp112 = inteval->two_alpha0_bra[vi] * fp388;
LIBINT2_REALTYPE fp25;
fp25 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp394;
fp394 = inteval->PA_z[vi] * fp186;
LIBINT2_REALTYPE fp392;
fp392 = fp394 - fp393;
LIBINT2_REALTYPE fp391;
fp391 = fp392 + fp484;
LIBINT2_REALTYPE fp396;
fp396 = inteval->PC_x[vi] * fp391;
LIBINT2_REALTYPE fp191;
fp191 = inteval->PA_z[vi] * fp192;
LIBINT2_REALTYPE fp190;
fp190 = fp191 - fp215;
LIBINT2_REALTYPE fp189;
fp189 = fp190 + fp328;
LIBINT2_REALTYPE fp397;
fp397 = inteval->PB_x[vi] * fp189;
LIBINT2_REALTYPE fp395;
fp395 = fp397 - fp396;
LIBINT2_REALTYPE fp408;
fp408 = inteval->PC_y[vi] * fp395;
LIBINT2_REALTYPE fp202;
fp202 = inteval->PC_x[vi] * fp189;
LIBINT2_REALTYPE fp200;
fp200 = inteval->PA_z[vi] * fp195;
LIBINT2_REALTYPE fp199;
fp199 = fp200 - fp219;
LIBINT2_REALTYPE fp198;
fp198 = fp199 + fp334;
LIBINT2_REALTYPE fp203;
fp203 = inteval->PB_x[vi] * fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp203 - fp202;
LIBINT2_REALTYPE fp409;
fp409 = inteval->PB_y[vi] * fp201;
LIBINT2_REALTYPE fp407;
fp407 = fp409 - fp408;
LIBINT2_REALTYPE fp113;
fp113 = inteval->two_alpha0_bra[vi] * fp407;
LIBINT2_REALTYPE fp24;
fp24 = fp113;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp421;
fp421 = inteval->PA_z[vi] * fp252;
LIBINT2_REALTYPE fp419;
fp419 = fp421 - fp420;
LIBINT2_REALTYPE fp114;
fp114 = inteval->two_alpha0_bra[vi] * fp419;
LIBINT2_REALTYPE fp23;
fp23 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp447;
fp447 = inteval->PA_z[vi] * fp270;
LIBINT2_REALTYPE fp445;
fp445 = fp447 - fp446;
LIBINT2_REALTYPE fp444;
fp444 = fp445 + fp467;
LIBINT2_REALTYPE fp115;
fp115 = inteval->two_alpha0_bra[vi] * fp444;
LIBINT2_REALTYPE fp22;
fp22 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp456;
fp456 = inteval->PA_z[vi] * fp282;
LIBINT2_REALTYPE fp454;
fp454 = fp456 - fp455;
LIBINT2_REALTYPE fp116;
fp116 = inteval->two_alpha0_bra[vi] * fp454;
LIBINT2_REALTYPE fp21;
fp21 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp476;
fp476 = inteval->PA_z[vi] * fp315;
LIBINT2_REALTYPE fp474;
fp474 = fp476 - fp475;
LIBINT2_REALTYPE fp117;
fp117 = inteval->two_alpha0_bra[vi] * fp474;
LIBINT2_REALTYPE fp20;
fp20 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp356;
fp356 = inteval->PA_y[vi] * fp144;
LIBINT2_REALTYPE fp354;
fp354 = fp356 - fp355;
LIBINT2_REALTYPE fp120;
fp120 = inteval->two_alpha0_bra[vi] * fp354;
LIBINT2_REALTYPE fp19;
fp19 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp439;
fp439 = fp486 * fp440;
LIBINT2_REALTYPE fp399;
fp399 = inteval->PC_y[vi] * fp183;
LIBINT2_REALTYPE fp400;
fp400 = inteval->PB_y[vi] * fp213;
LIBINT2_REALTYPE fp398;
fp398 = fp400 - fp399;
LIBINT2_REALTYPE fp362;
fp362 = inteval->PC_y[vi] * fp398;
LIBINT2_REALTYPE fp154;
fp154 = inteval->PC_y[vi] * fp213;
LIBINT2_REALTYPE fp155;
fp155 = inteval->PB_y[vi] * fp217;
LIBINT2_REALTYPE fp153;
fp153 = fp155 - fp154;
LIBINT2_REALTYPE fp363;
fp363 = inteval->PA_y[vi] * fp153;
LIBINT2_REALTYPE fp361;
fp361 = fp363 - fp362;
LIBINT2_REALTYPE fp360;
fp360 = fp361 + fp439;
LIBINT2_REALTYPE fp124;
fp124 = inteval->two_alpha0_bra[vi] * fp360;
LIBINT2_REALTYPE fp18;
fp18 = fp124;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp431;
fp431 = inteval->PA_y[vi] * fp258;
LIBINT2_REALTYPE fp429;
fp429 = fp431 - fp430;
LIBINT2_REALTYPE fp426;
fp426 = fp429 + fp427;
LIBINT2_REALTYPE fp369;
fp369 = inteval->PC_z[vi] * fp426;
LIBINT2_REALTYPE fp170;
fp170 = inteval->PA_y[vi] * fp262;
LIBINT2_REALTYPE fp169;
fp169 = fp170 - fp178;
LIBINT2_REALTYPE fp168;
fp168 = fp169 + fp175;
LIBINT2_REALTYPE fp370;
fp370 = inteval->PB_z[vi] * fp168;
LIBINT2_REALTYPE fp368;
fp368 = fp370 - fp369;
LIBINT2_REALTYPE fp127;
fp127 = inteval->two_alpha0_bra[vi] * fp368;
LIBINT2_REALTYPE fp17;
fp17 = fp127;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp378;
fp378 = inteval->PA_y[vi] * fp174;
LIBINT2_REALTYPE fp376;
fp376 = fp378 - fp377;
LIBINT2_REALTYPE fp374;
fp374 = fp376 + fp375;
LIBINT2_REALTYPE fp131;
fp131 = inteval->two_alpha0_bra[vi] * fp374;
LIBINT2_REALTYPE fp16;
fp16 = fp131;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp406;
fp406 = inteval->PA_y[vi] * fp207;
LIBINT2_REALTYPE fp404;
fp404 = fp406 - fp405;
LIBINT2_REALTYPE fp132;
fp132 = inteval->two_alpha0_bra[vi] * fp404;
LIBINT2_REALTYPE fp15;
fp15 = fp132;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp425;
fp425 = inteval->PA_y[vi] * fp231;
LIBINT2_REALTYPE fp423;
fp423 = fp425 - fp424;
LIBINT2_REALTYPE fp422;
fp422 = fp423 + fp484;
LIBINT2_REALTYPE fp411;
fp411 = inteval->PC_x[vi] * fp422;
LIBINT2_REALTYPE fp236;
fp236 = inteval->PA_y[vi] * fp237;
LIBINT2_REALTYPE fp235;
fp235 = fp236 - fp260;
LIBINT2_REALTYPE fp234;
fp234 = fp235 + fp328;
LIBINT2_REALTYPE fp412;
fp412 = inteval->PB_x[vi] * fp234;
LIBINT2_REALTYPE fp410;
fp410 = fp412 - fp411;
LIBINT2_REALTYPE fp417;
fp417 = inteval->PC_z[vi] * fp410;
LIBINT2_REALTYPE fp247;
fp247 = inteval->PC_x[vi] * fp234;
LIBINT2_REALTYPE fp245;
fp245 = inteval->PA_y[vi] * fp240;
LIBINT2_REALTYPE fp244;
fp244 = fp245 - fp264;
LIBINT2_REALTYPE fp243;
fp243 = fp244 + fp334;
LIBINT2_REALTYPE fp248;
fp248 = inteval->PB_x[vi] * fp243;
LIBINT2_REALTYPE fp246;
fp246 = fp248 - fp247;
LIBINT2_REALTYPE fp418;
fp418 = inteval->PB_z[vi] * fp246;
LIBINT2_REALTYPE fp416;
fp416 = fp418 - fp417;
LIBINT2_REALTYPE fp133;
fp133 = inteval->two_alpha0_bra[vi] * fp416;
LIBINT2_REALTYPE fp14;
fp14 = fp133;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp436;
fp436 = inteval->PC_x[vi] * fp426;
LIBINT2_REALTYPE fp437;
fp437 = inteval->PB_x[vi] * fp168;
LIBINT2_REALTYPE fp435;
fp435 = fp437 - fp436;
LIBINT2_REALTYPE fp134;
fp134 = inteval->two_alpha0_bra[vi] * fp435;
LIBINT2_REALTYPE fp13;
fp13 = fp134;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp452;
fp452 = inteval->PC_y[vi] * fp267;
LIBINT2_REALTYPE fp453;
fp453 = inteval->PA_y[vi] * fp270;
LIBINT2_REALTYPE fp451;
fp451 = fp453 - fp452;
LIBINT2_REALTYPE fp135;
fp135 = inteval->two_alpha0_bra[vi] * fp451;
LIBINT2_REALTYPE fp12;
fp12 = fp135;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp470;
fp470 = inteval->PA_y[vi] * fp282;
LIBINT2_REALTYPE fp468;
fp468 = fp470 - fp469;
LIBINT2_REALTYPE fp466;
fp466 = fp468 + fp467;
LIBINT2_REALTYPE fp136;
fp136 = inteval->two_alpha0_bra[vi] * fp466;
LIBINT2_REALTYPE fp11;
fp11 = fp136;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp482;
fp482 = inteval->PA_y[vi] * fp315;
LIBINT2_REALTYPE fp480;
fp480 = fp482 - fp481;
LIBINT2_REALTYPE fp137;
fp137 = inteval->two_alpha0_bra[vi] * fp480;
LIBINT2_REALTYPE fp10;
fp10 = fp137;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp387;
fp387 = inteval->PA_x[vi] * fp144;
LIBINT2_REALTYPE fp385;
fp385 = fp387 - fp386;
LIBINT2_REALTYPE fp152;
fp152 = inteval->two_alpha0_bra[vi] * fp385;
LIBINT2_REALTYPE fp9;
fp9 = fp152;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp402;
fp402 = inteval->PC_x[vi] * fp398;
LIBINT2_REALTYPE fp403;
fp403 = inteval->PA_x[vi] * fp153;
LIBINT2_REALTYPE fp401;
fp401 = fp403 - fp402;
LIBINT2_REALTYPE fp158;
fp158 = inteval->two_alpha0_bra[vi] * fp401;
LIBINT2_REALTYPE fp8;
fp8 = fp158;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp414;
fp414 = inteval->PC_x[vi] * fp159;
LIBINT2_REALTYPE fp415;
fp415 = inteval->PA_x[vi] * fp162;
LIBINT2_REALTYPE fp413;
fp413 = fp415 - fp414;
LIBINT2_REALTYPE fp167;
fp167 = inteval->two_alpha0_bra[vi] * fp413;
LIBINT2_REALTYPE fp7;
fp7 = fp167;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp434;
fp434 = inteval->PA_x[vi] * fp174;
LIBINT2_REALTYPE fp432;
fp432 = fp434 - fp433;
LIBINT2_REALTYPE fp182;
fp182 = inteval->two_alpha0_bra[vi] * fp432;
LIBINT2_REALTYPE fp6;
fp6 = fp182;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp442;
fp442 = inteval->PC_x[vi] * fp204;
LIBINT2_REALTYPE fp443;
fp443 = inteval->PA_x[vi] * fp207;
LIBINT2_REALTYPE fp441;
fp441 = fp443 - fp442;
LIBINT2_REALTYPE fp438;
fp438 = fp441 + fp439;
LIBINT2_REALTYPE fp221;
fp221 = inteval->two_alpha0_bra[vi] * fp438;
LIBINT2_REALTYPE fp5;
fp5 = fp221;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp489;
fp489 = inteval->PA_x[vi] * fp297;
LIBINT2_REALTYPE fp487;
fp487 = fp489 - fp488;
LIBINT2_REALTYPE fp483;
fp483 = fp487 + fp484;
LIBINT2_REALTYPE fp458;
fp458 = inteval->PC_y[vi] * fp483;
LIBINT2_REALTYPE fp308;
fp308 = inteval->PA_x[vi] * fp300;
LIBINT2_REALTYPE fp307;
fp307 = fp308 - fp331;
LIBINT2_REALTYPE fp306;
fp306 = fp307 + fp328;
LIBINT2_REALTYPE fp459;
fp459 = inteval->PB_y[vi] * fp306;
LIBINT2_REALTYPE fp457;
fp457 = fp459 - fp458;
LIBINT2_REALTYPE fp449;
fp449 = inteval->PC_z[vi] * fp457;
LIBINT2_REALTYPE fp288;
fp288 = inteval->PC_y[vi] * fp306;
LIBINT2_REALTYPE fp311;
fp311 = inteval->PA_x[vi] * fp303;
LIBINT2_REALTYPE fp310;
fp310 = fp311 - fp337;
LIBINT2_REALTYPE fp309;
fp309 = fp310 + fp334;
LIBINT2_REALTYPE fp289;
fp289 = inteval->PB_y[vi] * fp309;
LIBINT2_REALTYPE fp287;
fp287 = fp289 - fp288;
LIBINT2_REALTYPE fp450;
fp450 = inteval->PB_z[vi] * fp287;
LIBINT2_REALTYPE fp448;
fp448 = fp450 - fp449;
LIBINT2_REALTYPE fp227;
fp227 = inteval->two_alpha0_bra[vi] * fp448;
LIBINT2_REALTYPE fp4;
fp4 = fp227;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp464;
fp464 = inteval->PC_x[vi] * fp249;
LIBINT2_REALTYPE fp465;
fp465 = inteval->PA_x[vi] * fp252;
LIBINT2_REALTYPE fp463;
fp463 = fp465 - fp464;
LIBINT2_REALTYPE fp460;
fp460 = fp463 + fp461;
LIBINT2_REALTYPE fp266;
fp266 = inteval->two_alpha0_bra[vi] * fp460;
LIBINT2_REALTYPE fp3;
fp3 = fp266;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp496;
fp496 = inteval->PA_x[vi] * fp327;
LIBINT2_REALTYPE fp494;
fp494 = fp496 - fp495;
LIBINT2_REALTYPE fp490;
fp490 = fp494 + fp491;
LIBINT2_REALTYPE fp472;
fp472 = inteval->PC_z[vi] * fp490;
LIBINT2_REALTYPE fp326;
fp326 = inteval->PA_x[vi] * fp333;
LIBINT2_REALTYPE fp324;
fp324 = fp326 - fp325;
LIBINT2_REALTYPE fp321;
fp321 = fp324 + fp322;
LIBINT2_REALTYPE fp473;
fp473 = inteval->PB_z[vi] * fp321;
LIBINT2_REALTYPE fp471;
fp471 = fp473 - fp472;
LIBINT2_REALTYPE fp278;
fp278 = inteval->two_alpha0_bra[vi] * fp471;
LIBINT2_REALTYPE fp2;
fp2 = fp278;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp478;
fp478 = inteval->PC_y[vi] * fp490;
LIBINT2_REALTYPE fp479;
fp479 = inteval->PB_y[vi] * fp321;
LIBINT2_REALTYPE fp477;
fp477 = fp479 - fp478;
LIBINT2_REALTYPE fp293;
fp293 = inteval->two_alpha0_bra[vi] * fp477;
LIBINT2_REALTYPE fp1;
fp1 = fp293;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp503;
fp503 = inteval->PA_x[vi] * fp315;
LIBINT2_REALTYPE fp501;
fp501 = fp503 - fp502;
LIBINT2_REALTYPE fp497;
fp497 = fp501 + fp498;
LIBINT2_REALTYPE fp339;
fp339 = inteval->two_alpha0_bra[vi] * fp497;
LIBINT2_REALTYPE fp0;
fp0 = fp339;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 504 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
