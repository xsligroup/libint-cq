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
void CR_aB_Y5__0___Overlap_Y6__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*42+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp227;
fp227 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp226;
fp226 = fp227 * target[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->PB_y[vi] * target[((hsi*42+0)*1+lsi)*1];
target[((hsi*42+1)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp228;
fp228 = inteval->PB_y[vi] * target[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp228 + fp226;
target[((hsi*42+2)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp219;
fp219 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp218;
fp218 = fp219 * target[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp222;
fp222 = fp223 * target[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = inteval->PB_y[vi] * target[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp221;
fp221 = fp224 + fp222;
target[((hsi*42+3)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp220;
fp220 = inteval->PB_y[vi] * target[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp220 + fp218;
target[((hsi*42+4)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp215;
fp215 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp214;
fp214 = fp215 * target[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = inteval->PB_y[vi] * target[((hsi*42+4)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp216 + fp214;
target[((hsi*42+5)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp208;
fp208 = inteval->PA_y[vi] * target[((hsi*42+0)*1+lsi)*1];
target[((hsi*42+7)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp206;
fp206 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp205;
fp205 = fp206 * target[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = inteval->PA_y[vi] * target[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp207 + fp205;
target[((hsi*42+8)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp202;
fp202 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp201;
fp201 = fp202 * target[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = inteval->PA_y[vi] * target[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = fp203 + fp201;
target[((hsi*42+9)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp198;
fp198 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp197;
fp197 = fp198 * target[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = inteval->PA_y[vi] * target[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp199 + fp197;
target[((hsi*42+10)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp194;
fp194 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp193;
fp193 = fp194 * target[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->PA_y[vi] * target[((hsi*42+4)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp195 + fp193;
target[((hsi*42+11)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp190;
fp190 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp189;
fp189 = fp190 * target[((hsi*42+4)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = inteval->PA_y[vi] * target[((hsi*42+5)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp191 + fp189;
target[((hsi*42+12)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp182;
fp182 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp181;
fp181 = fp182 * target[((hsi*42+0)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_y[vi] * target[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp183 + fp181;
target[((hsi*42+14)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp175;
fp175 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp174;
fp174 = fp175 * target[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp177;
fp177 = fp178 * target[((hsi*42+1)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = inteval->PA_y[vi] * target[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp179 + fp177;
LIBINT2_REALTYPE fp173;
fp173 = fp176 + fp174;
target[((hsi*42+15)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp168;
fp168 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp167;
fp167 = fp168 * target[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp170;
fp170 = fp171 * target[((hsi*42+2)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->PA_y[vi] * target[((hsi*42+9)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp172 + fp170;
LIBINT2_REALTYPE fp166;
fp166 = fp169 + fp167;
target[((hsi*42+16)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp161;
fp161 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp160;
fp160 = fp161 * target[((hsi*42+9)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp163;
fp163 = fp164 * target[((hsi*42+3)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->PA_y[vi] * target[((hsi*42+10)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp165 + fp163;
LIBINT2_REALTYPE fp159;
fp159 = fp162 + fp160;
target[((hsi*42+17)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp154;
fp154 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp153;
fp153 = fp154 * target[((hsi*42+10)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp156;
fp156 = fp157 * target[((hsi*42+4)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = inteval->PA_y[vi] * target[((hsi*42+11)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp158 + fp156;
LIBINT2_REALTYPE fp152;
fp152 = fp155 + fp153;
target[((hsi*42+18)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp147;
fp147 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * target[((hsi*42+11)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp149;
fp149 = fp150 * target[((hsi*42+5)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->PA_y[vi] * target[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp151 + fp149;
LIBINT2_REALTYPE fp145;
fp145 = fp148 + fp146;
target[((hsi*42+19)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp129;
fp129 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * target[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp131;
fp131 = fp132 * target[((hsi*42+8)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->PA_y[vi] * target[((hsi*42+15)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp133 + fp131;
LIBINT2_REALTYPE fp127;
fp127 = fp130 + fp128;
target[((hsi*42+22)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp122;
fp122 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp121;
fp121 = fp122 * target[((hsi*42+15)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * target[((hsi*42+9)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = inteval->PA_y[vi] * target[((hsi*42+16)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
LIBINT2_REALTYPE fp120;
fp120 = fp123 + fp121;
target[((hsi*42+23)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp115;
fp115 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * target[((hsi*42+16)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * target[((hsi*42+10)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->PA_y[vi] * target[((hsi*42+17)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp119 + fp117;
LIBINT2_REALTYPE fp113;
fp113 = fp116 + fp114;
target[((hsi*42+24)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp108;
fp108 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp108 * target[((hsi*42+17)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp111 * target[((hsi*42+11)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->PA_y[vi] * target[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
LIBINT2_REALTYPE fp106;
fp106 = fp109 + fp107;
target[((hsi*42+25)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp101;
fp101 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * target[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * target[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->PA_y[vi] * target[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
target[((hsi*42+26)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp136;
fp136 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp136 * target[((hsi*42+7)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->PA_y[vi] * target[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
target[((hsi*42+21)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp211;
fp211 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp210;
fp210 = fp211 * target[((hsi*42+4)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = inteval->PB_y[vi] * target[((hsi*42+5)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp212 + fp210;
target[((hsi*42+6)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp55;
fp55 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * target[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_y[vi] * target[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
target[((hsi*42+33)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp69;
fp69 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp68;
fp68 = fp69 * target[((hsi*42+23)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * target[((hsi*42+17)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_y[vi] * target[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp73 + fp71;
LIBINT2_REALTYPE fp67;
fp67 = fp70 + fp68;
target[((hsi*42+31)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp186;
fp186 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp185;
fp185 = fp186 * target[((hsi*42+5)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = inteval->PA_y[vi] * target[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = fp187 + fp185;
target[((hsi*42+13)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp76;
fp76 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * target[((hsi*42+22)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * target[((hsi*42+16)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->PA_y[vi] * target[((hsi*42+23)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*42+30)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * target[((hsi*42+21)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * target[((hsi*42+15)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_y[vi] * target[((hsi*42+22)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp87 + fp85;
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
target[((hsi*42+29)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp90;
fp90 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*42+14)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->PA_y[vi] * target[((hsi*42+21)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp91 + fp89;
target[((hsi*42+28)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp94;
fp94 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp93;
fp93 = fp94 * target[((hsi*42+19)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp96;
fp96 = fp97 * target[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp139;
fp139 = fp140 * target[((hsi*42+12)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * target[((hsi*42+6)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = inteval->PA_y[vi] * target[((hsi*42+13)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp144 + fp142;
LIBINT2_REALTYPE fp138;
fp138 = fp141 + fp139;
target[((hsi*42+20)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp98;
fp98 = inteval->PA_y[vi] * target[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp98 + fp96;
LIBINT2_REALTYPE fp92;
fp92 = fp95 + fp93;
target[((hsi*42+27)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp62;
fp62 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * target[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * target[((hsi*42+18)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->PA_y[vi] * target[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
LIBINT2_REALTYPE fp60;
fp60 = fp63 + fp61;
target[((hsi*42+32)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp48;
fp48 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp48 * target[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*42+20)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_y[vi] * target[((hsi*42+27)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
LIBINT2_REALTYPE fp46;
fp46 = fp49 + fp47;
target[((hsi*42+34)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp44;
fp44 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*42+21)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->PA_y[vi] * target[((hsi*42+28)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*42+35)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*42+28)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * target[((hsi*42+22)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_y[vi] * target[((hsi*42+29)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp41 + fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
target[((hsi*42+36)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp30;
fp30 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*42+29)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * target[((hsi*42+23)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_y[vi] * target[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*42+37)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp23;
fp23 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*42+30)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*42+24)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_y[vi] * target[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*42+38)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp16;
fp16 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*42+31)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*42+25)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_y[vi] * target[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*42+39)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*42+32)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*42+26)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_y[vi] * target[((hsi*42+33)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*42+40)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*42+33)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*42+27)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_y[vi] * target[((hsi*42+34)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp6 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*42+41)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 230 */
}

#ifdef __cplusplus
};
#endif
