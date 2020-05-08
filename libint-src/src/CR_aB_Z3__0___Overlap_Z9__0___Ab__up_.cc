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
void CR_aB_Z3__0___Overlap_Z9__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*40+0)*1+lsi)*1] = inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp203;
fp203 = inteval->PB_z[vi] * target[((hsi*40+0)*1+lsi)*1];
target[((hsi*40+1)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp201;
fp201 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp200;
fp200 = fp201 * target[((hsi*40+0)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->PB_z[vi] * target[((hsi*40+1)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp202 + fp200;
target[((hsi*40+2)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp197;
fp197 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp196;
fp196 = fp197 * target[((hsi*40+1)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = inteval->PB_z[vi] * target[((hsi*40+2)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp198 + fp196;
target[((hsi*40+3)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp193;
fp193 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp192;
fp192 = fp193 * target[((hsi*40+2)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = inteval->PB_z[vi] * target[((hsi*40+3)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = fp194 + fp192;
target[((hsi*40+4)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp189;
fp189 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp188;
fp188 = fp189 * target[((hsi*40+3)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = inteval->PB_z[vi] * target[((hsi*40+4)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = fp190 + fp188;
target[((hsi*40+5)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp185;
fp185 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp184;
fp184 = fp185 * target[((hsi*40+4)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = inteval->PB_z[vi] * target[((hsi*40+5)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = fp186 + fp184;
target[((hsi*40+6)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp181;
fp181 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp180;
fp180 = fp181 * target[((hsi*40+5)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = inteval->PB_z[vi] * target[((hsi*40+6)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = fp182 + fp180;
target[((hsi*40+7)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp177;
fp177 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp176;
fp176 = fp177 * target[((hsi*40+6)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = inteval->PB_z[vi] * target[((hsi*40+7)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp178 + fp176;
target[((hsi*40+8)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp140;
fp140 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp139;
fp139 = fp140 * target[((hsi*40+7)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->PA_z[vi] * target[((hsi*40+8)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp141 + fp139;
target[((hsi*40+18)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp144;
fp144 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp143;
fp143 = fp144 * target[((hsi*40+6)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->PA_z[vi] * target[((hsi*40+7)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = fp145 + fp143;
target[((hsi*40+17)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp148;
fp148 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp147;
fp147 = fp148 * target[((hsi*40+5)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->PA_z[vi] * target[((hsi*40+6)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp149 + fp147;
target[((hsi*40+16)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp152;
fp152 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp151;
fp151 = fp152 * target[((hsi*40+4)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->PA_z[vi] * target[((hsi*40+5)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = fp153 + fp151;
target[((hsi*40+15)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp156;
fp156 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp155;
fp155 = fp156 * target[((hsi*40+3)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->PA_z[vi] * target[((hsi*40+4)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp157 + fp155;
target[((hsi*40+14)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp160;
fp160 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp160 * target[((hsi*40+2)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = inteval->PA_z[vi] * target[((hsi*40+3)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp161 + fp159;
target[((hsi*40+13)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp164;
fp164 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp163;
fp163 = fp164 * target[((hsi*40+1)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->PA_z[vi] * target[((hsi*40+2)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
target[((hsi*40+12)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp168;
fp168 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp167;
fp167 = fp168 * target[((hsi*40+0)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = inteval->PA_z[vi] * target[((hsi*40+1)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp169 + fp167;
target[((hsi*40+11)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp170;
fp170 = inteval->PA_z[vi] * target[((hsi*40+0)*1+lsi)*1];
target[((hsi*40+10)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp172;
fp172 = fp173 * target[((hsi*40+7)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = inteval->PB_z[vi] * target[((hsi*40+8)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp174 + fp172;
target[((hsi*40+9)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp136;
fp136 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * target[((hsi*40+8)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->PA_z[vi] * target[((hsi*40+9)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
target[((hsi*40+19)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp125;
fp125 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * target[((hsi*40+10)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp127;
fp127 = fp128 * target[((hsi*40+1)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->PA_z[vi] * target[((hsi*40+11)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
target[((hsi*40+21)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp118;
fp118 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * target[((hsi*40+11)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * target[((hsi*40+2)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->PA_z[vi] * target[((hsi*40+12)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp122 + fp120;
LIBINT2_REALTYPE fp116;
fp116 = fp119 + fp117;
target[((hsi*40+22)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp111;
fp111 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * target[((hsi*40+12)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp114 * target[((hsi*40+3)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->PA_z[vi] * target[((hsi*40+13)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp115 + fp113;
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
target[((hsi*40+23)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp104;
fp104 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * target[((hsi*40+13)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * target[((hsi*40+4)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = inteval->PA_z[vi] * target[((hsi*40+14)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp108 + fp106;
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
target[((hsi*40+24)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp97;
fp97 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * target[((hsi*40+14)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * target[((hsi*40+5)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->PA_z[vi] * target[((hsi*40+15)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp101 + fp99;
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
target[((hsi*40+25)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp90;
fp90 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*40+15)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp93 * target[((hsi*40+6)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->PA_z[vi] * target[((hsi*40+16)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp94 + fp92;
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
target[((hsi*40+26)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp83;
fp83 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * target[((hsi*40+16)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * target[((hsi*40+7)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_z[vi] * target[((hsi*40+17)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp87 + fp85;
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
target[((hsi*40+27)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp76;
fp76 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * target[((hsi*40+17)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * target[((hsi*40+8)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->PA_z[vi] * target[((hsi*40+18)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*40+28)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp132;
fp132 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp131;
fp131 = fp132 * target[((hsi*40+0)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->PA_z[vi] * target[((hsi*40+10)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp133 + fp131;
target[((hsi*40+20)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp69;
fp69 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * target[((hsi*40+18)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * target[((hsi*40+9)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_z[vi] * target[((hsi*40+19)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp73 + fp71;
LIBINT2_REALTYPE fp67;
fp67 = fp70 + fp68;
target[((hsi*40+29)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp9;
fp9 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*40+27)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*40+18)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_z[vi] * target[((hsi*40+28)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*40+38)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp16;
fp16 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*40+26)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*40+17)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_z[vi] * target[((hsi*40+27)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*40+37)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp23;
fp23 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*40+25)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*40+16)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_z[vi] * target[((hsi*40+26)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*40+36)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp30;
fp30 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*40+24)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * target[((hsi*40+15)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_z[vi] * target[((hsi*40+25)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*40+35)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp37;
fp37 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*40+23)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * target[((hsi*40+14)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * target[((hsi*40+24)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp41 + fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
target[((hsi*40+34)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp44;
fp44 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*40+22)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * target[((hsi*40+13)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->PA_z[vi] * target[((hsi*40+23)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*40+33)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp51;
fp51 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*40+21)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * target[((hsi*40+12)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->PA_z[vi] * target[((hsi*40+22)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp55 + fp53;
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*40+32)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*40+20)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * target[((hsi*40+11)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->PA_z[vi] * target[((hsi*40+21)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp62 + fp60;
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
target[((hsi*40+31)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp65;
fp65 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * target[((hsi*40+10)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->PA_z[vi] * target[((hsi*40+20)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
target[((hsi*40+30)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp2;
fp2 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*40+28)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*40+19)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_z[vi] * target[((hsi*40+29)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp6 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*40+39)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 204 */
}

#ifdef __cplusplus
};
#endif
