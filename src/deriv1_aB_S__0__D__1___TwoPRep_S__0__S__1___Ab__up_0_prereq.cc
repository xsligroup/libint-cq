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
void deriv1_aB_S__0__D__1___TwoPRep_S__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp373;
fp373 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp372;
fp372 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp371;
fp371 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp372;
LIBINT2_REALTYPE fp370;
fp370 = fp373 * fp371;
LIBINT2_REALTYPE fp326;
fp326 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp327;
fp327 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp325;
fp325 = fp327 + fp326;
LIBINT2_REALTYPE fp279;
fp279 = inteval->WQ_z[vi] * fp325;
LIBINT2_REALTYPE fp289;
fp289 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp290;
fp290 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp288;
fp288 = fp290 + fp289;
LIBINT2_REALTYPE fp280;
fp280 = inteval->QC_z[vi] * fp288;
LIBINT2_REALTYPE fp278;
fp278 = fp280 + fp279;
LIBINT2_REALTYPE fp277;
fp277 = fp278 + fp370;
LIBINT2_REALTYPE fp62;
fp62 = inteval->CD_z[vi] * fp277;
LIBINT2_REALTYPE fp144;
fp144 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp57;
fp57 = inteval->roe[vi] * fp325;
LIBINT2_REALTYPE fp56;
fp56 = fp288 - fp57;
LIBINT2_REALTYPE fp55;
fp55 = fp144 * fp56;
LIBINT2_REALTYPE fp365;
fp365 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp364;
fp364 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp365;
LIBINT2_REALTYPE fp363;
fp363 = fp373 * fp364;
LIBINT2_REALTYPE fp286;
fp286 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp287;
fp287 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp285;
fp285 = fp287 + fp286;
LIBINT2_REALTYPE fp275;
fp275 = inteval->WQ_z[vi] * fp285;
LIBINT2_REALTYPE fp276;
fp276 = inteval->QC_z[vi] * fp325;
LIBINT2_REALTYPE fp274;
fp274 = fp276 + fp275;
LIBINT2_REALTYPE fp273;
fp273 = fp274 + fp363;
LIBINT2_REALTYPE fp59;
fp59 = inteval->WQ_z[vi] * fp273;
LIBINT2_REALTYPE fp60;
fp60 = inteval->QC_z[vi] * fp277;
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
LIBINT2_REALTYPE fp54;
fp54 = fp58 + fp55;
LIBINT2_REALTYPE fp61;
fp61 = fp54 + fp62;
LIBINT2_REALTYPE fp63;
fp63 = inteval->two_alpha1_ket[vi] * fp61;
LIBINT2_REALTYPE fp53;
fp53 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_y[vi] * fp273;
LIBINT2_REALTYPE fp81;
fp81 = inteval->QC_y[vi] * fp277;
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
LIBINT2_REALTYPE fp339;
fp339 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp340;
fp340 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp338;
fp338 = fp340 + fp339;
LIBINT2_REALTYPE fp295;
fp295 = inteval->WQ_z[vi] * fp338;
LIBINT2_REALTYPE fp305;
fp305 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp306;
fp306 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp304;
fp304 = fp306 + fp305;
LIBINT2_REALTYPE fp296;
fp296 = inteval->QC_z[vi] * fp304;
LIBINT2_REALTYPE fp294;
fp294 = fp296 + fp295;
LIBINT2_REALTYPE fp65;
fp65 = inteval->CD_z[vi] * fp294;
LIBINT2_REALTYPE fp64;
fp64 = fp79 + fp65;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha1_ket[vi] * fp64;
LIBINT2_REALTYPE fp52;
fp52 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp302;
fp302 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp303;
fp303 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp301;
fp301 = fp303 + fp302;
LIBINT2_REALTYPE fp309;
fp309 = inteval->WQ_y[vi] * fp301;
LIBINT2_REALTYPE fp310;
fp310 = inteval->QC_y[vi] * fp338;
LIBINT2_REALTYPE fp308;
fp308 = fp310 + fp309;
LIBINT2_REALTYPE fp307;
fp307 = fp308 + fp363;
LIBINT2_REALTYPE fp86;
fp86 = inteval->WQ_z[vi] * fp307;
LIBINT2_REALTYPE fp313;
fp313 = inteval->WQ_y[vi] * fp338;
LIBINT2_REALTYPE fp314;
fp314 = inteval->QC_y[vi] * fp304;
LIBINT2_REALTYPE fp312;
fp312 = fp314 + fp313;
LIBINT2_REALTYPE fp311;
fp311 = fp312 + fp370;
LIBINT2_REALTYPE fp87;
fp87 = inteval->QC_z[vi] * fp311;
LIBINT2_REALTYPE fp85;
fp85 = fp87 + fp86;
LIBINT2_REALTYPE fp68;
fp68 = inteval->CD_z[vi] * fp311;
LIBINT2_REALTYPE fp67;
fp67 = fp85 + fp68;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha1_ket[vi] * fp67;
LIBINT2_REALTYPE fp51;
fp51 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp111;
fp111 = inteval->WQ_x[vi] * fp273;
LIBINT2_REALTYPE fp112;
fp112 = inteval->QC_x[vi] * fp277;
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
LIBINT2_REALTYPE fp378;
fp378 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp379;
fp379 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp377;
fp377 = fp379 + fp378;
LIBINT2_REALTYPE fp323;
fp323 = inteval->WQ_z[vi] * fp377;
LIBINT2_REALTYPE fp349;
fp349 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp350;
fp350 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp348;
fp348 = fp350 + fp349;
LIBINT2_REALTYPE fp324;
fp324 = inteval->QC_z[vi] * fp348;
LIBINT2_REALTYPE fp322;
fp322 = fp324 + fp323;
LIBINT2_REALTYPE fp71;
fp71 = inteval->CD_z[vi] * fp322;
LIBINT2_REALTYPE fp70;
fp70 = fp110 + fp71;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha1_ket[vi] * fp70;
LIBINT2_REALTYPE fp50;
fp50 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp346;
fp346 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp347;
fp347 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp345;
fp345 = fp347 + fp346;
LIBINT2_REALTYPE fp333;
fp333 = inteval->WQ_y[vi] * fp345;
LIBINT2_REALTYPE fp334;
fp334 = inteval->QC_y[vi] * fp377;
LIBINT2_REALTYPE fp332;
fp332 = fp334 + fp333;
LIBINT2_REALTYPE fp117;
fp117 = inteval->WQ_z[vi] * fp332;
LIBINT2_REALTYPE fp336;
fp336 = inteval->WQ_y[vi] * fp377;
LIBINT2_REALTYPE fp337;
fp337 = inteval->QC_y[vi] * fp348;
LIBINT2_REALTYPE fp335;
fp335 = fp337 + fp336;
LIBINT2_REALTYPE fp118;
fp118 = inteval->QC_z[vi] * fp335;
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
LIBINT2_REALTYPE fp74;
fp74 = inteval->CD_z[vi] * fp335;
LIBINT2_REALTYPE fp73;
fp73 = fp116 + fp74;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha1_ket[vi] * fp73;
LIBINT2_REALTYPE fp49;
fp49 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp367;
fp367 = inteval->WQ_x[vi] * fp345;
LIBINT2_REALTYPE fp368;
fp368 = inteval->QC_x[vi] * fp377;
LIBINT2_REALTYPE fp366;
fp366 = fp368 + fp367;
LIBINT2_REALTYPE fp362;
fp362 = fp366 + fp363;
LIBINT2_REALTYPE fp129;
fp129 = inteval->WQ_z[vi] * fp362;
LIBINT2_REALTYPE fp375;
fp375 = inteval->WQ_x[vi] * fp377;
LIBINT2_REALTYPE fp376;
fp376 = inteval->QC_x[vi] * fp348;
LIBINT2_REALTYPE fp374;
fp374 = fp376 + fp375;
LIBINT2_REALTYPE fp369;
fp369 = fp374 + fp370;
LIBINT2_REALTYPE fp130;
fp130 = inteval->QC_z[vi] * fp369;
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
LIBINT2_REALTYPE fp77;
fp77 = inteval->CD_z[vi] * fp369;
LIBINT2_REALTYPE fp76;
fp76 = fp128 + fp77;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha1_ket[vi] * fp76;
LIBINT2_REALTYPE fp48;
fp48 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp83;
fp83 = inteval->CD_y[vi] * fp277;
LIBINT2_REALTYPE fp82;
fp82 = fp79 + fp83;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha1_ket[vi] * fp82;
LIBINT2_REALTYPE fp47;
fp47 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp89;
fp89 = inteval->CD_y[vi] * fp294;
LIBINT2_REALTYPE fp88;
fp88 = fp85 + fp89;
LIBINT2_REALTYPE fp90;
fp90 = inteval->two_alpha1_ket[vi] * fp88;
LIBINT2_REALTYPE fp46;
fp46 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->CD_y[vi] * fp311;
LIBINT2_REALTYPE fp94;
fp94 = inteval->roe[vi] * fp338;
LIBINT2_REALTYPE fp93;
fp93 = fp304 - fp94;
LIBINT2_REALTYPE fp92;
fp92 = fp144 * fp93;
LIBINT2_REALTYPE fp96;
fp96 = inteval->WQ_y[vi] * fp307;
LIBINT2_REALTYPE fp97;
fp97 = inteval->QC_y[vi] * fp311;
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
LIBINT2_REALTYPE fp91;
fp91 = fp95 + fp92;
LIBINT2_REALTYPE fp98;
fp98 = fp91 + fp99;
LIBINT2_REALTYPE fp100;
fp100 = inteval->two_alpha1_ket[vi] * fp98;
LIBINT2_REALTYPE fp45;
fp45 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp102;
fp102 = inteval->CD_y[vi] * fp322;
LIBINT2_REALTYPE fp101;
fp101 = fp116 + fp102;
LIBINT2_REALTYPE fp103;
fp103 = inteval->two_alpha1_ket[vi] * fp101;
LIBINT2_REALTYPE fp44;
fp44 = fp103;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp123;
fp123 = inteval->WQ_x[vi] * fp307;
LIBINT2_REALTYPE fp124;
fp124 = inteval->QC_x[vi] * fp311;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
LIBINT2_REALTYPE fp105;
fp105 = inteval->CD_y[vi] * fp335;
LIBINT2_REALTYPE fp104;
fp104 = fp122 + fp105;
LIBINT2_REALTYPE fp106;
fp106 = inteval->two_alpha1_ket[vi] * fp104;
LIBINT2_REALTYPE fp43;
fp43 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp135;
fp135 = inteval->WQ_y[vi] * fp362;
LIBINT2_REALTYPE fp136;
fp136 = inteval->QC_y[vi] * fp369;
LIBINT2_REALTYPE fp134;
fp134 = fp136 + fp135;
LIBINT2_REALTYPE fp108;
fp108 = inteval->CD_y[vi] * fp369;
LIBINT2_REALTYPE fp107;
fp107 = fp134 + fp108;
LIBINT2_REALTYPE fp109;
fp109 = inteval->two_alpha1_ket[vi] * fp107;
LIBINT2_REALTYPE fp42;
fp42 = fp109;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp114;
fp114 = inteval->CD_x[vi] * fp277;
LIBINT2_REALTYPE fp113;
fp113 = fp110 + fp114;
LIBINT2_REALTYPE fp115;
fp115 = inteval->two_alpha1_ket[vi] * fp113;
LIBINT2_REALTYPE fp41;
fp41 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp120;
fp120 = inteval->CD_x[vi] * fp294;
LIBINT2_REALTYPE fp119;
fp119 = fp116 + fp120;
LIBINT2_REALTYPE fp121;
fp121 = inteval->two_alpha1_ket[vi] * fp119;
LIBINT2_REALTYPE fp40;
fp40 = fp121;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp126;
fp126 = inteval->CD_x[vi] * fp311;
LIBINT2_REALTYPE fp125;
fp125 = fp122 + fp126;
LIBINT2_REALTYPE fp127;
fp127 = inteval->two_alpha1_ket[vi] * fp125;
LIBINT2_REALTYPE fp39;
fp39 = fp127;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp132;
fp132 = inteval->CD_x[vi] * fp322;
LIBINT2_REALTYPE fp131;
fp131 = fp128 + fp132;
LIBINT2_REALTYPE fp133;
fp133 = inteval->two_alpha1_ket[vi] * fp131;
LIBINT2_REALTYPE fp38;
fp38 = fp133;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp138;
fp138 = inteval->CD_x[vi] * fp335;
LIBINT2_REALTYPE fp137;
fp137 = fp134 + fp138;
LIBINT2_REALTYPE fp139;
fp139 = inteval->two_alpha1_ket[vi] * fp137;
LIBINT2_REALTYPE fp37;
fp37 = fp139;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp149;
fp149 = inteval->CD_x[vi] * fp369;
LIBINT2_REALTYPE fp143;
fp143 = inteval->roe[vi] * fp377;
LIBINT2_REALTYPE fp142;
fp142 = fp348 - fp143;
LIBINT2_REALTYPE fp141;
fp141 = fp144 * fp142;
LIBINT2_REALTYPE fp146;
fp146 = inteval->WQ_x[vi] * fp362;
LIBINT2_REALTYPE fp147;
fp147 = inteval->QC_x[vi] * fp369;
LIBINT2_REALTYPE fp145;
fp145 = fp147 + fp146;
LIBINT2_REALTYPE fp140;
fp140 = fp145 + fp141;
LIBINT2_REALTYPE fp148;
fp148 = fp140 + fp149;
LIBINT2_REALTYPE fp150;
fp150 = inteval->two_alpha1_ket[vi] * fp148;
LIBINT2_REALTYPE fp36;
fp36 = fp150;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp382;
fp382 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp206;
fp206 = fp382 * fp325;
LIBINT2_REALTYPE fp208;
fp208 = inteval->WP_z[vi] * fp273;
LIBINT2_REALTYPE fp209;
fp209 = inteval->PA_z[vi] * fp277;
LIBINT2_REALTYPE fp207;
fp207 = fp209 + fp208;
LIBINT2_REALTYPE fp205;
fp205 = fp207 + fp206;
LIBINT2_REALTYPE fp152;
fp152 = inteval->AB_z[vi] * fp277;
LIBINT2_REALTYPE fp151;
fp151 = fp205 + fp152;
LIBINT2_REALTYPE fp153;
fp153 = inteval->two_alpha0_ket[vi] * fp151;
LIBINT2_REALTYPE fp35;
fp35 = fp153;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp358;
fp358 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp352;
fp352 = fp358 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp221;
fp221 = inteval->WP_z[vi] * fp285;
LIBINT2_REALTYPE fp222;
fp222 = inteval->PA_z[vi] * fp325;
LIBINT2_REALTYPE fp220;
fp220 = fp222 + fp221;
LIBINT2_REALTYPE fp219;
fp219 = fp220 + fp352;
LIBINT2_REALTYPE fp212;
fp212 = inteval->WQ_y[vi] * fp219;
LIBINT2_REALTYPE fp357;
fp357 = fp358 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp225;
fp225 = inteval->WP_z[vi] * fp325;
LIBINT2_REALTYPE fp226;
fp226 = inteval->PA_z[vi] * fp288;
LIBINT2_REALTYPE fp224;
fp224 = fp226 + fp225;
LIBINT2_REALTYPE fp223;
fp223 = fp224 + fp357;
LIBINT2_REALTYPE fp213;
fp213 = inteval->QC_y[vi] * fp223;
LIBINT2_REALTYPE fp211;
fp211 = fp213 + fp212;
LIBINT2_REALTYPE fp155;
fp155 = inteval->AB_z[vi] * fp294;
LIBINT2_REALTYPE fp154;
fp154 = fp211 + fp155;
LIBINT2_REALTYPE fp156;
fp156 = inteval->two_alpha0_ket[vi] * fp154;
LIBINT2_REALTYPE fp34;
fp34 = fp156;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp216;
fp216 = inteval->WP_z[vi] * fp307;
LIBINT2_REALTYPE fp217;
fp217 = inteval->PA_z[vi] * fp311;
LIBINT2_REALTYPE fp215;
fp215 = fp217 + fp216;
LIBINT2_REALTYPE fp158;
fp158 = inteval->AB_z[vi] * fp311;
LIBINT2_REALTYPE fp157;
fp157 = fp215 + fp158;
LIBINT2_REALTYPE fp159;
fp159 = inteval->two_alpha0_ket[vi] * fp157;
LIBINT2_REALTYPE fp33;
fp33 = fp159;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp228;
fp228 = inteval->WQ_x[vi] * fp219;
LIBINT2_REALTYPE fp229;
fp229 = inteval->QC_x[vi] * fp223;
LIBINT2_REALTYPE fp227;
fp227 = fp229 + fp228;
LIBINT2_REALTYPE fp161;
fp161 = inteval->AB_z[vi] * fp322;
LIBINT2_REALTYPE fp160;
fp160 = fp227 + fp161;
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_ket[vi] * fp160;
LIBINT2_REALTYPE fp32;
fp32 = fp162;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp232;
fp232 = inteval->WP_z[vi] * fp332;
LIBINT2_REALTYPE fp233;
fp233 = inteval->PA_z[vi] * fp335;
LIBINT2_REALTYPE fp231;
fp231 = fp233 + fp232;
LIBINT2_REALTYPE fp164;
fp164 = inteval->AB_z[vi] * fp335;
LIBINT2_REALTYPE fp163;
fp163 = fp231 + fp164;
LIBINT2_REALTYPE fp165;
fp165 = inteval->two_alpha0_ket[vi] * fp163;
LIBINT2_REALTYPE fp31;
fp31 = fp165;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp236;
fp236 = inteval->WP_z[vi] * fp362;
LIBINT2_REALTYPE fp237;
fp237 = inteval->PA_z[vi] * fp369;
LIBINT2_REALTYPE fp235;
fp235 = fp237 + fp236;
LIBINT2_REALTYPE fp167;
fp167 = inteval->AB_z[vi] * fp369;
LIBINT2_REALTYPE fp166;
fp166 = fp235 + fp167;
LIBINT2_REALTYPE fp168;
fp168 = inteval->two_alpha0_ket[vi] * fp166;
LIBINT2_REALTYPE fp30;
fp30 = fp168;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp240;
fp240 = inteval->WP_y[vi] * fp273;
LIBINT2_REALTYPE fp241;
fp241 = inteval->PA_y[vi] * fp277;
LIBINT2_REALTYPE fp239;
fp239 = fp241 + fp240;
LIBINT2_REALTYPE fp170;
fp170 = inteval->AB_y[vi] * fp277;
LIBINT2_REALTYPE fp169;
fp169 = fp239 + fp170;
LIBINT2_REALTYPE fp171;
fp171 = inteval->two_alpha0_ket[vi] * fp169;
LIBINT2_REALTYPE fp29;
fp29 = fp171;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp259;
fp259 = inteval->WP_y[vi] * fp301;
LIBINT2_REALTYPE fp260;
fp260 = inteval->PA_y[vi] * fp338;
LIBINT2_REALTYPE fp258;
fp258 = fp260 + fp259;
LIBINT2_REALTYPE fp257;
fp257 = fp258 + fp352;
LIBINT2_REALTYPE fp244;
fp244 = inteval->WQ_z[vi] * fp257;
LIBINT2_REALTYPE fp263;
fp263 = inteval->WP_y[vi] * fp338;
LIBINT2_REALTYPE fp264;
fp264 = inteval->PA_y[vi] * fp304;
LIBINT2_REALTYPE fp262;
fp262 = fp264 + fp263;
LIBINT2_REALTYPE fp261;
fp261 = fp262 + fp357;
LIBINT2_REALTYPE fp245;
fp245 = inteval->QC_z[vi] * fp261;
LIBINT2_REALTYPE fp243;
fp243 = fp245 + fp244;
LIBINT2_REALTYPE fp173;
fp173 = inteval->AB_y[vi] * fp294;
LIBINT2_REALTYPE fp172;
fp172 = fp243 + fp173;
LIBINT2_REALTYPE fp174;
fp174 = inteval->two_alpha0_ket[vi] * fp172;
LIBINT2_REALTYPE fp28;
fp28 = fp174;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp248;
fp248 = fp382 * fp338;
LIBINT2_REALTYPE fp250;
fp250 = inteval->WP_y[vi] * fp307;
LIBINT2_REALTYPE fp251;
fp251 = inteval->PA_y[vi] * fp311;
LIBINT2_REALTYPE fp249;
fp249 = fp251 + fp250;
LIBINT2_REALTYPE fp247;
fp247 = fp249 + fp248;
LIBINT2_REALTYPE fp176;
fp176 = inteval->AB_y[vi] * fp311;
LIBINT2_REALTYPE fp175;
fp175 = fp247 + fp176;
LIBINT2_REALTYPE fp177;
fp177 = inteval->two_alpha0_ket[vi] * fp175;
LIBINT2_REALTYPE fp27;
fp27 = fp177;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp320;
fp320 = inteval->WQ_z[vi] * fp345;
LIBINT2_REALTYPE fp321;
fp321 = inteval->QC_z[vi] * fp377;
LIBINT2_REALTYPE fp319;
fp319 = fp321 + fp320;
LIBINT2_REALTYPE fp254;
fp254 = inteval->WP_y[vi] * fp319;
LIBINT2_REALTYPE fp255;
fp255 = inteval->PA_y[vi] * fp322;
LIBINT2_REALTYPE fp253;
fp253 = fp255 + fp254;
LIBINT2_REALTYPE fp179;
fp179 = inteval->AB_y[vi] * fp322;
LIBINT2_REALTYPE fp178;
fp178 = fp253 + fp179;
LIBINT2_REALTYPE fp180;
fp180 = inteval->two_alpha0_ket[vi] * fp178;
LIBINT2_REALTYPE fp26;
fp26 = fp180;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp266;
fp266 = inteval->WQ_x[vi] * fp257;
LIBINT2_REALTYPE fp267;
fp267 = inteval->QC_x[vi] * fp261;
LIBINT2_REALTYPE fp265;
fp265 = fp267 + fp266;
LIBINT2_REALTYPE fp182;
fp182 = inteval->AB_y[vi] * fp335;
LIBINT2_REALTYPE fp181;
fp181 = fp265 + fp182;
LIBINT2_REALTYPE fp183;
fp183 = inteval->two_alpha0_ket[vi] * fp181;
LIBINT2_REALTYPE fp25;
fp25 = fp183;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp270;
fp270 = inteval->WP_y[vi] * fp362;
LIBINT2_REALTYPE fp271;
fp271 = inteval->PA_y[vi] * fp369;
LIBINT2_REALTYPE fp269;
fp269 = fp271 + fp270;
LIBINT2_REALTYPE fp185;
fp185 = inteval->AB_y[vi] * fp369;
LIBINT2_REALTYPE fp184;
fp184 = fp269 + fp185;
LIBINT2_REALTYPE fp186;
fp186 = inteval->two_alpha0_ket[vi] * fp184;
LIBINT2_REALTYPE fp24;
fp24 = fp186;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp282;
fp282 = inteval->WP_x[vi] * fp273;
LIBINT2_REALTYPE fp283;
fp283 = inteval->PA_x[vi] * fp277;
LIBINT2_REALTYPE fp281;
fp281 = fp283 + fp282;
LIBINT2_REALTYPE fp188;
fp188 = inteval->AB_x[vi] * fp277;
LIBINT2_REALTYPE fp187;
fp187 = fp281 + fp188;
LIBINT2_REALTYPE fp189;
fp189 = inteval->two_alpha0_ket[vi] * fp187;
LIBINT2_REALTYPE fp23;
fp23 = fp189;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp292;
fp292 = inteval->WQ_z[vi] * fp301;
LIBINT2_REALTYPE fp293;
fp293 = inteval->QC_z[vi] * fp338;
LIBINT2_REALTYPE fp291;
fp291 = fp293 + fp292;
LIBINT2_REALTYPE fp298;
fp298 = inteval->WP_x[vi] * fp291;
LIBINT2_REALTYPE fp299;
fp299 = inteval->PA_x[vi] * fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp299 + fp298;
LIBINT2_REALTYPE fp191;
fp191 = inteval->AB_x[vi] * fp294;
LIBINT2_REALTYPE fp190;
fp190 = fp297 + fp191;
LIBINT2_REALTYPE fp192;
fp192 = inteval->two_alpha0_ket[vi] * fp190;
LIBINT2_REALTYPE fp22;
fp22 = fp192;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp316;
fp316 = inteval->WP_x[vi] * fp307;
LIBINT2_REALTYPE fp317;
fp317 = inteval->PA_x[vi] * fp311;
LIBINT2_REALTYPE fp315;
fp315 = fp317 + fp316;
LIBINT2_REALTYPE fp194;
fp194 = inteval->AB_x[vi] * fp311;
LIBINT2_REALTYPE fp193;
fp193 = fp315 + fp194;
LIBINT2_REALTYPE fp195;
fp195 = inteval->two_alpha0_ket[vi] * fp193;
LIBINT2_REALTYPE fp21;
fp21 = fp195;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp354;
fp354 = inteval->WP_x[vi] * fp345;
LIBINT2_REALTYPE fp355;
fp355 = inteval->PA_x[vi] * fp377;
LIBINT2_REALTYPE fp353;
fp353 = fp355 + fp354;
LIBINT2_REALTYPE fp351;
fp351 = fp353 + fp352;
LIBINT2_REALTYPE fp329;
fp329 = inteval->WQ_z[vi] * fp351;
LIBINT2_REALTYPE fp360;
fp360 = inteval->WP_x[vi] * fp377;
LIBINT2_REALTYPE fp361;
fp361 = inteval->PA_x[vi] * fp348;
LIBINT2_REALTYPE fp359;
fp359 = fp361 + fp360;
LIBINT2_REALTYPE fp356;
fp356 = fp359 + fp357;
LIBINT2_REALTYPE fp330;
fp330 = inteval->QC_z[vi] * fp356;
LIBINT2_REALTYPE fp328;
fp328 = fp330 + fp329;
LIBINT2_REALTYPE fp197;
fp197 = inteval->AB_x[vi] * fp322;
LIBINT2_REALTYPE fp196;
fp196 = fp328 + fp197;
LIBINT2_REALTYPE fp198;
fp198 = inteval->two_alpha0_ket[vi] * fp196;
LIBINT2_REALTYPE fp20;
fp20 = fp198;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp342;
fp342 = inteval->WQ_y[vi] * fp351;
LIBINT2_REALTYPE fp343;
fp343 = inteval->QC_y[vi] * fp356;
LIBINT2_REALTYPE fp341;
fp341 = fp343 + fp342;
LIBINT2_REALTYPE fp200;
fp200 = inteval->AB_x[vi] * fp335;
LIBINT2_REALTYPE fp199;
fp199 = fp341 + fp200;
LIBINT2_REALTYPE fp201;
fp201 = inteval->two_alpha0_ket[vi] * fp199;
LIBINT2_REALTYPE fp19;
fp19 = fp201;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp381;
fp381 = fp382 * fp377;
LIBINT2_REALTYPE fp384;
fp384 = inteval->WP_x[vi] * fp362;
LIBINT2_REALTYPE fp385;
fp385 = inteval->PA_x[vi] * fp369;
LIBINT2_REALTYPE fp383;
fp383 = fp385 + fp384;
LIBINT2_REALTYPE fp380;
fp380 = fp383 + fp381;
LIBINT2_REALTYPE fp203;
fp203 = inteval->AB_x[vi] * fp369;
LIBINT2_REALTYPE fp202;
fp202 = fp380 + fp203;
LIBINT2_REALTYPE fp204;
fp204 = inteval->two_alpha0_ket[vi] * fp202;
LIBINT2_REALTYPE fp18;
fp18 = fp204;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp210;
fp210 = inteval->two_alpha0_bra[vi] * fp205;
LIBINT2_REALTYPE fp17;
fp17 = fp210;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp214;
fp214 = inteval->two_alpha0_bra[vi] * fp211;
LIBINT2_REALTYPE fp16;
fp16 = fp214;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp218;
fp218 = inteval->two_alpha0_bra[vi] * fp215;
LIBINT2_REALTYPE fp15;
fp15 = fp218;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp230;
fp230 = inteval->two_alpha0_bra[vi] * fp227;
LIBINT2_REALTYPE fp14;
fp14 = fp230;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp234;
fp234 = inteval->two_alpha0_bra[vi] * fp231;
LIBINT2_REALTYPE fp13;
fp13 = fp234;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp238;
fp238 = inteval->two_alpha0_bra[vi] * fp235;
LIBINT2_REALTYPE fp12;
fp12 = fp238;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp242;
fp242 = inteval->two_alpha0_bra[vi] * fp239;
LIBINT2_REALTYPE fp11;
fp11 = fp242;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp246;
fp246 = inteval->two_alpha0_bra[vi] * fp243;
LIBINT2_REALTYPE fp10;
fp10 = fp246;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp252;
fp252 = inteval->two_alpha0_bra[vi] * fp247;
LIBINT2_REALTYPE fp9;
fp9 = fp252;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp256;
fp256 = inteval->two_alpha0_bra[vi] * fp253;
LIBINT2_REALTYPE fp8;
fp8 = fp256;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp268;
fp268 = inteval->two_alpha0_bra[vi] * fp265;
LIBINT2_REALTYPE fp7;
fp7 = fp268;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp272;
fp272 = inteval->two_alpha0_bra[vi] * fp269;
LIBINT2_REALTYPE fp6;
fp6 = fp272;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp284;
fp284 = inteval->two_alpha0_bra[vi] * fp281;
LIBINT2_REALTYPE fp5;
fp5 = fp284;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp300;
fp300 = inteval->two_alpha0_bra[vi] * fp297;
LIBINT2_REALTYPE fp4;
fp4 = fp300;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp318;
fp318 = inteval->two_alpha0_bra[vi] * fp315;
LIBINT2_REALTYPE fp3;
fp3 = fp318;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp331;
fp331 = inteval->two_alpha0_bra[vi] * fp328;
LIBINT2_REALTYPE fp2;
fp2 = fp331;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp344;
fp344 = inteval->two_alpha0_bra[vi] * fp341;
LIBINT2_REALTYPE fp1;
fp1 = fp344;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp386;
fp386 = inteval->two_alpha0_bra[vi] * fp380;
LIBINT2_REALTYPE fp0;
fp0 = fp386;
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 387 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif