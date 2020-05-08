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
void _overlapderiv1_S_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp74;
fp74 = fp107 * fp77;
LIBINT2_REALTYPE fp76;
fp76 = inteval->PB_z[vi] * fp77;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PB_z[vi] * fp76;
LIBINT2_REALTYPE fp73;
fp73 = fp75 + fp74;
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + fp73;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + fp95;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + fp99;
LIBINT2_REALTYPE fp216;
fp216 = fp136 * fp134;
LIBINT2_REALTYPE fp182;
fp182 = fp216 * fp123;
LIBINT2_REALTYPE fp146;
fp146 = 3.0000000000000000e+00 * fp182;
LIBINT2_REALTYPE fp115;
fp115 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp115 * fp73;
LIBINT2_REALTYPE fp111;
fp111 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp111 * fp76;
LIBINT2_REALTYPE fp72;
fp72 = inteval->PB_z[vi] * fp73;
LIBINT2_REALTYPE fp70;
fp70 = fp72 + fp71;
LIBINT2_REALTYPE fp61;
fp61 = inteval->PB_z[vi] * fp70;
LIBINT2_REALTYPE fp60;
fp60 = fp61 + fp63;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + fp60;
LIBINT2_REALTYPE fp144;
fp144 = fp216 * fp117;
LIBINT2_REALTYPE fp147;
fp147 = inteval->two_alpha0_ket[vi] * fp144;
LIBINT2_REALTYPE fp145;
fp145 = fp147 - fp146;
LIBINT2_REALTYPE fp59;
fp59 = fp145;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + fp76;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PB_y[vi] * fp95;
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + fp94;
LIBINT2_REALTYPE fp219;
fp219 = fp136 * fp133;
LIBINT2_REALTYPE fp187;
fp187 = fp219 * fp124;
LIBINT2_REALTYPE fp161;
fp161 = 2.0000000000000000e+00 * fp187;
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + fp70;
LIBINT2_REALTYPE fp154;
fp154 = fp219 * fp122;
LIBINT2_REALTYPE fp155;
fp155 = inteval->two_alpha0_ket[vi] * fp154;
LIBINT2_REALTYPE fp148;
fp148 = fp155 - fp161;
LIBINT2_REALTYPE fp58;
fp58 = fp148;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + fp77;
LIBINT2_REALTYPE fp92;
fp92 = fp107 * fp95;
LIBINT2_REALTYPE fp93;
fp93 = inteval->PB_y[vi] * fp94;
LIBINT2_REALTYPE fp91;
fp91 = fp93 + fp92;
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + fp91;
LIBINT2_REALTYPE fp222;
fp222 = fp136 * fp132;
LIBINT2_REALTYPE fp192;
fp192 = fp222 * fp125;
LIBINT2_REALTYPE fp196;
fp196 = 1.0000000000000000e+00 * fp192;
LIBINT2_REALTYPE fp156;
fp156 = fp222 * fp123;
LIBINT2_REALTYPE fp158;
fp158 = inteval->two_alpha0_ket[vi] * fp156;
LIBINT2_REALTYPE fp149;
fp149 = fp158 - fp196;
LIBINT2_REALTYPE fp57;
fp57 = fp149;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp89;
fp89 = fp111 * fp94;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PB_y[vi] * fp91;
LIBINT2_REALTYPE fp88;
fp88 = fp90 + fp89;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + fp88;
LIBINT2_REALTYPE fp225;
fp225 = fp136 * fp131;
LIBINT2_REALTYPE fp159;
fp159 = fp225 * fp124;
LIBINT2_REALTYPE fp162;
fp162 = inteval->two_alpha0_ket[vi] * fp159;
LIBINT2_REALTYPE fp56;
fp56 = fp162;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp100;
fp100 = inteval->PB_x[vi] * fp99;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + fp100;
LIBINT2_REALTYPE fp228;
fp228 = fp137 * fp134;
LIBINT2_REALTYPE fp198;
fp198 = fp228 * fp124;
LIBINT2_REALTYPE fp201;
fp201 = 2.0000000000000000e+00 * fp198;
LIBINT2_REALTYPE fp173;
fp173 = fp228 * fp122;
LIBINT2_REALTYPE fp174;
fp174 = inteval->two_alpha0_ket[vi] * fp173;
LIBINT2_REALTYPE fp150;
fp150 = fp174 - fp201;
LIBINT2_REALTYPE fp55;
fp55 = fp150;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp231;
fp231 = fp137 * fp133;
LIBINT2_REALTYPE fp175;
fp175 = fp231 * fp123;
LIBINT2_REALTYPE fp176;
fp176 = inteval->two_alpha0_ket[vi] * fp175;
LIBINT2_REALTYPE fp203;
fp203 = fp231 * fp125;
LIBINT2_REALTYPE fp152;
fp152 = 1.0000000000000000e+00 * fp203;
LIBINT2_REALTYPE fp151;
fp151 = fp176 - fp152;
LIBINT2_REALTYPE fp54;
fp54 = fp151;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp234;
fp234 = fp137 * fp132;
LIBINT2_REALTYPE fp177;
fp177 = fp234 * fp124;
LIBINT2_REALTYPE fp178;
fp178 = inteval->two_alpha0_ket[vi] * fp177;
LIBINT2_REALTYPE fp53;
fp53 = fp178;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp99;
LIBINT2_REALTYPE fp108;
fp108 = inteval->PB_x[vi] * fp100;
LIBINT2_REALTYPE fp105;
fp105 = fp108 + fp106;
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + fp105;
LIBINT2_REALTYPE fp237;
fp237 = fp138 * fp134;
LIBINT2_REALTYPE fp209;
fp209 = fp237 * fp125;
LIBINT2_REALTYPE fp172;
fp172 = 1.0000000000000000e+00 * fp209;
LIBINT2_REALTYPE fp183;
fp183 = fp237 * fp123;
LIBINT2_REALTYPE fp186;
fp186 = inteval->two_alpha0_ket[vi] * fp183;
LIBINT2_REALTYPE fp153;
fp153 = fp186 - fp172;
LIBINT2_REALTYPE fp52;
fp52 = fp153;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp240;
fp240 = fp138 * fp133;
LIBINT2_REALTYPE fp188;
fp188 = fp240 * fp124;
LIBINT2_REALTYPE fp191;
fp191 = inteval->two_alpha0_ket[vi] * fp188;
LIBINT2_REALTYPE fp51;
fp51 = fp191;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp100;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PB_x[vi] * fp105;
LIBINT2_REALTYPE fp109;
fp109 = fp112 + fp110;
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + fp109;
LIBINT2_REALTYPE fp243;
fp243 = fp139 * fp134;
LIBINT2_REALTYPE fp199;
fp199 = fp243 * fp124;
LIBINT2_REALTYPE fp202;
fp202 = inteval->two_alpha0_ket[vi] * fp199;
LIBINT2_REALTYPE fp50;
fp50 = fp202;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp49;
fp49 = fp155;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp185;
fp185 = 1.0000000000000000e+00 * fp182;
LIBINT2_REALTYPE fp157;
fp157 = fp158 - fp185;
LIBINT2_REALTYPE fp48;
fp48 = fp157;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp160;
fp160 = fp162 - fp161;
LIBINT2_REALTYPE fp47;
fp47 = fp160;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp166;
fp166 = 3.0000000000000000e+00 * fp192;
LIBINT2_REALTYPE fp81;
fp81 = fp115 * fp91;
LIBINT2_REALTYPE fp79;
fp79 = inteval->PB_y[vi] * fp88;
LIBINT2_REALTYPE fp78;
fp78 = fp79 + fp81;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + fp78;
LIBINT2_REALTYPE fp164;
fp164 = fp136 * fp126;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp125;
LIBINT2_REALTYPE fp167;
fp167 = inteval->two_alpha0_ket[vi] * fp163;
LIBINT2_REALTYPE fp165;
fp165 = fp167 - fp166;
LIBINT2_REALTYPE fp46;
fp46 = fp165;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp45;
fp45 = fp176;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp169;
fp169 = 1.0000000000000000e+00 * fp198;
LIBINT2_REALTYPE fp168;
fp168 = fp178 - fp169;
LIBINT2_REALTYPE fp44;
fp44 = fp168;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp207;
fp207 = 2.0000000000000000e+00 * fp203;
LIBINT2_REALTYPE fp180;
fp180 = fp137 * fp131;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp125;
LIBINT2_REALTYPE fp181;
fp181 = inteval->two_alpha0_ket[vi] * fp179;
LIBINT2_REALTYPE fp170;
fp170 = fp181 - fp207;
LIBINT2_REALTYPE fp43;
fp43 = fp170;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp42;
fp42 = fp191;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp194;
fp194 = fp138 * fp132;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp125;
LIBINT2_REALTYPE fp197;
fp197 = inteval->two_alpha0_ket[vi] * fp193;
LIBINT2_REALTYPE fp171;
fp171 = fp197 - fp172;
LIBINT2_REALTYPE fp41;
fp41 = fp171;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp205;
fp205 = fp139 * fp133;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp125;
LIBINT2_REALTYPE fp208;
fp208 = inteval->two_alpha0_ket[vi] * fp204;
LIBINT2_REALTYPE fp40;
fp40 = fp208;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp39;
fp39 = fp174;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp38;
fp38 = fp176;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp37;
fp37 = fp178;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp36;
fp36 = fp181;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp184;
fp184 = fp186 - fp185;
LIBINT2_REALTYPE fp35;
fp35 = fp184;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp190;
fp190 = 1.0000000000000000e+00 * fp187;
LIBINT2_REALTYPE fp189;
fp189 = fp191 - fp190;
LIBINT2_REALTYPE fp34;
fp34 = fp189;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp195;
fp195 = fp197 - fp196;
LIBINT2_REALTYPE fp33;
fp33 = fp195;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp200;
fp200 = fp202 - fp201;
LIBINT2_REALTYPE fp32;
fp32 = fp200;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp206;
fp206 = fp208 - fp207;
LIBINT2_REALTYPE fp31;
fp31 = fp206;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp213;
fp213 = 3.0000000000000000e+00 * fp209;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp105;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PB_x[vi] * fp109;
LIBINT2_REALTYPE fp96;
fp96 = fp97 + fp114;
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + fp96;
LIBINT2_REALTYPE fp211;
fp211 = fp135 * fp134;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp125;
LIBINT2_REALTYPE fp214;
fp214 = inteval->two_alpha0_ket[vi] * fp210;
LIBINT2_REALTYPE fp212;
fp212 = fp214 - fp213;
LIBINT2_REALTYPE fp30;
fp30 = fp212;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp64;
fp64 = inteval->PA_z[vi] * fp70;
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + fp62;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp118;
LIBINT2_REALTYPE fp217;
fp217 = inteval->two_alpha0_bra[vi] * fp215;
LIBINT2_REALTYPE fp29;
fp29 = fp217;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp66;
fp66 = inteval->PA_z[vi] * fp73;
LIBINT2_REALTYPE fp65;
fp65 = fp66 + fp71;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + fp65;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp119;
LIBINT2_REALTYPE fp220;
fp220 = inteval->two_alpha0_bra[vi] * fp218;
LIBINT2_REALTYPE fp28;
fp28 = fp220;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp68;
fp68 = inteval->PA_z[vi] * fp76;
LIBINT2_REALTYPE fp67;
fp67 = fp68 + fp74;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + fp67;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp120;
LIBINT2_REALTYPE fp223;
fp223 = inteval->two_alpha0_bra[vi] * fp221;
LIBINT2_REALTYPE fp27;
fp27 = fp223;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp69;
fp69 = inteval->PA_z[vi] * fp77;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + fp69;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp121;
LIBINT2_REALTYPE fp226;
fp226 = inteval->two_alpha0_bra[vi] * fp224;
LIBINT2_REALTYPE fp26;
fp26 = fp226;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp119;
LIBINT2_REALTYPE fp229;
fp229 = inteval->two_alpha0_bra[vi] * fp227;
LIBINT2_REALTYPE fp25;
fp25 = fp229;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp120;
LIBINT2_REALTYPE fp232;
fp232 = inteval->two_alpha0_bra[vi] * fp230;
LIBINT2_REALTYPE fp24;
fp24 = fp232;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp121;
LIBINT2_REALTYPE fp235;
fp235 = inteval->two_alpha0_bra[vi] * fp233;
LIBINT2_REALTYPE fp23;
fp23 = fp235;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp120;
LIBINT2_REALTYPE fp238;
fp238 = inteval->two_alpha0_bra[vi] * fp236;
LIBINT2_REALTYPE fp22;
fp22 = fp238;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp121;
LIBINT2_REALTYPE fp241;
fp241 = inteval->two_alpha0_bra[vi] * fp239;
LIBINT2_REALTYPE fp21;
fp21 = fp241;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp121;
LIBINT2_REALTYPE fp244;
fp244 = inteval->two_alpha0_bra[vi] * fp242;
LIBINT2_REALTYPE fp20;
fp20 = fp244;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_y[vi] * fp95;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + fp87;
LIBINT2_REALTYPE fp246;
fp246 = fp136 * fp130;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp122;
LIBINT2_REALTYPE fp247;
fp247 = inteval->two_alpha0_bra[vi] * fp245;
LIBINT2_REALTYPE fp19;
fp19 = fp247;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp86;
fp86 = inteval->PA_y[vi] * fp94;
LIBINT2_REALTYPE fp85;
fp85 = fp86 + fp92;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + fp85;
LIBINT2_REALTYPE fp249;
fp249 = fp136 * fp129;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp123;
LIBINT2_REALTYPE fp250;
fp250 = inteval->two_alpha0_bra[vi] * fp248;
LIBINT2_REALTYPE fp18;
fp18 = fp250;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp84;
fp84 = inteval->PA_y[vi] * fp91;
LIBINT2_REALTYPE fp83;
fp83 = fp84 + fp89;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + fp83;
LIBINT2_REALTYPE fp252;
fp252 = fp136 * fp128;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp124;
LIBINT2_REALTYPE fp253;
fp253 = inteval->two_alpha0_bra[vi] * fp251;
LIBINT2_REALTYPE fp17;
fp17 = fp253;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_y[vi] * fp88;
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + fp80;
LIBINT2_REALTYPE fp255;
fp255 = fp136 * fp127;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp125;
LIBINT2_REALTYPE fp256;
fp256 = inteval->two_alpha0_bra[vi] * fp254;
LIBINT2_REALTYPE fp16;
fp16 = fp256;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp258;
fp258 = fp137 * fp130;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp123;
LIBINT2_REALTYPE fp259;
fp259 = inteval->two_alpha0_bra[vi] * fp257;
LIBINT2_REALTYPE fp15;
fp15 = fp259;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp261;
fp261 = fp137 * fp129;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp124;
LIBINT2_REALTYPE fp262;
fp262 = inteval->two_alpha0_bra[vi] * fp260;
LIBINT2_REALTYPE fp14;
fp14 = fp262;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp264;
fp264 = fp137 * fp128;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp125;
LIBINT2_REALTYPE fp265;
fp265 = inteval->two_alpha0_bra[vi] * fp263;
LIBINT2_REALTYPE fp13;
fp13 = fp265;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp267;
fp267 = fp138 * fp130;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp124;
LIBINT2_REALTYPE fp268;
fp268 = inteval->two_alpha0_bra[vi] * fp266;
LIBINT2_REALTYPE fp12;
fp12 = fp268;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp270;
fp270 = fp138 * fp129;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp125;
LIBINT2_REALTYPE fp271;
fp271 = inteval->two_alpha0_bra[vi] * fp269;
LIBINT2_REALTYPE fp11;
fp11 = fp271;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp273;
fp273 = fp139 * fp130;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp125;
LIBINT2_REALTYPE fp274;
fp274 = inteval->two_alpha0_bra[vi] * fp272;
LIBINT2_REALTYPE fp10;
fp10 = fp274;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp98;
fp98 = inteval->PA_x[vi] * fp99;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + fp98;
LIBINT2_REALTYPE fp276;
fp276 = fp140 * fp134;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp122;
LIBINT2_REALTYPE fp277;
fp277 = inteval->two_alpha0_bra[vi] * fp275;
LIBINT2_REALTYPE fp9;
fp9 = fp277;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp279;
fp279 = fp140 * fp133;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp123;
LIBINT2_REALTYPE fp280;
fp280 = inteval->two_alpha0_bra[vi] * fp278;
LIBINT2_REALTYPE fp8;
fp8 = fp280;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp282;
fp282 = fp140 * fp132;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp124;
LIBINT2_REALTYPE fp283;
fp283 = inteval->two_alpha0_bra[vi] * fp281;
LIBINT2_REALTYPE fp7;
fp7 = fp283;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp285;
fp285 = fp140 * fp131;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp125;
LIBINT2_REALTYPE fp286;
fp286 = inteval->two_alpha0_bra[vi] * fp284;
LIBINT2_REALTYPE fp6;
fp6 = fp286;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp102;
fp102 = inteval->PA_x[vi] * fp100;
LIBINT2_REALTYPE fp101;
fp101 = fp102 + fp106;
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + fp101;
LIBINT2_REALTYPE fp288;
fp288 = fp141 * fp134;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp123;
LIBINT2_REALTYPE fp289;
fp289 = inteval->two_alpha0_bra[vi] * fp287;
LIBINT2_REALTYPE fp5;
fp5 = fp289;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp291;
fp291 = fp141 * fp133;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp124;
LIBINT2_REALTYPE fp292;
fp292 = inteval->two_alpha0_bra[vi] * fp290;
LIBINT2_REALTYPE fp4;
fp4 = fp292;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp294;
fp294 = fp141 * fp132;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp125;
LIBINT2_REALTYPE fp295;
fp295 = inteval->two_alpha0_bra[vi] * fp293;
LIBINT2_REALTYPE fp3;
fp3 = fp295;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->PA_x[vi] * fp105;
LIBINT2_REALTYPE fp103;
fp103 = fp104 + fp110;
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + fp103;
LIBINT2_REALTYPE fp297;
fp297 = fp142 * fp134;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp124;
LIBINT2_REALTYPE fp298;
fp298 = inteval->two_alpha0_bra[vi] * fp296;
LIBINT2_REALTYPE fp2;
fp2 = fp298;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp300;
fp300 = fp142 * fp133;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp125;
LIBINT2_REALTYPE fp301;
fp301 = inteval->two_alpha0_bra[vi] * fp299;
LIBINT2_REALTYPE fp1;
fp1 = fp301;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp116;
fp116 = inteval->PA_x[vi] * fp109;
LIBINT2_REALTYPE fp113;
fp113 = fp116 + fp114;
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + fp113;
LIBINT2_REALTYPE fp303;
fp303 = fp143 * fp134;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp125;
LIBINT2_REALTYPE fp304;
fp304 = inteval->two_alpha0_bra[vi] * fp302;
LIBINT2_REALTYPE fp0;
fp0 = fp304;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 305 */
}

#ifdef __cplusplus
};
#endif
