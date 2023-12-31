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
void eri3_aB_P__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp232;
fp232 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp231;
fp231 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp230;
fp230 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp231;
LIBINT2_REALTYPE fp229;
fp229 = fp232 * fp230;
LIBINT2_REALTYPE fp172;
fp172 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp173;
fp173 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp171;
fp171 = fp173 + fp172;
LIBINT2_REALTYPE fp138;
fp138 = inteval->WQ_z[vi] * fp171;
LIBINT2_REALTYPE fp175;
fp175 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp176;
fp176 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp174;
fp174 = fp176 + fp175;
LIBINT2_REALTYPE fp139;
fp139 = inteval->QC_z[vi] * fp174;
LIBINT2_REALTYPE fp137;
fp137 = fp139 + fp138;
LIBINT2_REALTYPE fp136;
fp136 = fp137 + fp229;
LIBINT2_REALTYPE fp246;
fp246 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp246 * fp136;
LIBINT2_REALTYPE fp240;
fp240 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp110;
fp110 = inteval->roe[vi] * fp171;
LIBINT2_REALTYPE fp109;
fp109 = fp174 - fp110;
LIBINT2_REALTYPE fp108;
fp108 = fp240 * fp109;
LIBINT2_REALTYPE fp220;
fp220 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp219;
fp219 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi] - fp220;
LIBINT2_REALTYPE fp218;
fp218 = fp232 * fp219;
LIBINT2_REALTYPE fp129;
fp129 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp130;
fp130 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
LIBINT2_REALTYPE fp133;
fp133 = inteval->WQ_z[vi] * fp128;
LIBINT2_REALTYPE fp134;
fp134 = inteval->QC_z[vi] * fp171;
LIBINT2_REALTYPE fp132;
fp132 = fp134 + fp133;
LIBINT2_REALTYPE fp131;
fp131 = fp132 + fp218;
LIBINT2_REALTYPE fp112;
fp112 = inteval->WQ_z[vi] * fp131;
LIBINT2_REALTYPE fp113;
fp113 = inteval->QC_z[vi] * fp136;
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
LIBINT2_REALTYPE fp107;
fp107 = fp111 + fp108;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_z[vi] * fp107;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
LIBINT2_REALTYPE fp47;
fp47 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp226;
fp226 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp226 * fp174;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_z[vi] * fp136;
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
LIBINT2_REALTYPE fp43;
fp43 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+46)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp190;
fp190 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp191;
fp191 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp189;
fp189 = fp191 + fp190;
LIBINT2_REALTYPE fp148;
fp148 = inteval->WQ_z[vi] * fp189;
LIBINT2_REALTYPE fp193;
fp193 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp194;
fp194 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp192;
fp192 = fp194 + fp193;
LIBINT2_REALTYPE fp149;
fp149 = inteval->QC_z[vi] * fp192;
LIBINT2_REALTYPE fp147;
fp147 = fp149 + fp148;
LIBINT2_REALTYPE fp80;
fp80 = fp226 * fp147;
LIBINT2_REALTYPE fp249;
fp249 = inteval->WQ_y[vi] * fp131;
LIBINT2_REALTYPE fp250;
fp250 = inteval->QC_y[vi] * fp136;
LIBINT2_REALTYPE fp248;
fp248 = fp250 + fp249;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_z[vi] * fp248;
LIBINT2_REALTYPE fp51;
fp51 = fp52 + fp80;
LIBINT2_REALTYPE fp46;
fp46 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+45)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp197;
fp197 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp192;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_z[vi] * fp147;
LIBINT2_REALTYPE fp61;
fp61 = fp62 + fp196;
LIBINT2_REALTYPE fp41;
fp41 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+44)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp163;
fp163 = inteval->WQ_y[vi] * fp189;
LIBINT2_REALTYPE fp164;
fp164 = inteval->QC_y[vi] * fp192;
LIBINT2_REALTYPE fp162;
fp162 = fp164 + fp163;
LIBINT2_REALTYPE fp161;
fp161 = fp162 + fp229;
LIBINT2_REALTYPE fp169;
fp169 = fp197 * fp161;
LIBINT2_REALTYPE fp154;
fp154 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp155;
fp155 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp153;
fp153 = fp155 + fp154;
LIBINT2_REALTYPE fp158;
fp158 = inteval->WQ_y[vi] * fp153;
LIBINT2_REALTYPE fp159;
fp159 = inteval->QC_y[vi] * fp189;
LIBINT2_REALTYPE fp157;
fp157 = fp159 + fp158;
LIBINT2_REALTYPE fp156;
fp156 = fp157 + fp218;
LIBINT2_REALTYPE fp117;
fp117 = inteval->WQ_z[vi] * fp156;
LIBINT2_REALTYPE fp118;
fp118 = inteval->QC_z[vi] * fp161;
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_z[vi] * fp116;
LIBINT2_REALTYPE fp53;
fp53 = fp54 + fp169;
LIBINT2_REALTYPE fp45;
fp45 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+43)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp123;
fp123 = inteval->roe[vi] * fp189;
LIBINT2_REALTYPE fp122;
fp122 = fp192 - fp123;
LIBINT2_REALTYPE fp121;
fp121 = fp240 * fp122;
LIBINT2_REALTYPE fp125;
fp125 = inteval->WQ_y[vi] * fp156;
LIBINT2_REALTYPE fp126;
fp126 = inteval->QC_y[vi] * fp161;
LIBINT2_REALTYPE fp124;
fp124 = fp126 + fp125;
LIBINT2_REALTYPE fp120;
fp120 = fp124 + fp121;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_z[vi] * fp120;
LIBINT2_REALTYPE fp44;
fp44 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+42)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_z[vi] * fp161;
LIBINT2_REALTYPE fp39;
fp39 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+41)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp212;
fp212 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp213;
fp213 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp211;
fp211 = fp213 + fp212;
LIBINT2_REALTYPE fp181;
fp181 = inteval->WQ_z[vi] * fp211;
LIBINT2_REALTYPE fp215;
fp215 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp216;
fp216 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp214;
fp214 = fp216 + fp215;
LIBINT2_REALTYPE fp182;
fp182 = inteval->QC_z[vi] * fp214;
LIBINT2_REALTYPE fp180;
fp180 = fp182 + fp181;
LIBINT2_REALTYPE fp187;
fp187 = fp226 * fp180;
LIBINT2_REALTYPE fp141;
fp141 = inteval->WQ_x[vi] * fp131;
LIBINT2_REALTYPE fp142;
fp142 = inteval->QC_x[vi] * fp136;
LIBINT2_REALTYPE fp140;
fp140 = fp142 + fp141;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WP_z[vi] * fp140;
LIBINT2_REALTYPE fp59;
fp59 = fp60 + fp187;
LIBINT2_REALTYPE fp42;
fp42 = fp59;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+40)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp100;
fp100 = fp197 * fp214;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WP_z[vi] * fp180;
LIBINT2_REALTYPE fp68;
fp68 = fp69 + fp100;
LIBINT2_REALTYPE fp37;
fp37 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+39)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp200;
fp200 = inteval->WQ_y[vi] * fp211;
LIBINT2_REALTYPE fp201;
fp201 = inteval->QC_y[vi] * fp214;
LIBINT2_REALTYPE fp199;
fp199 = fp201 + fp200;
LIBINT2_REALTYPE fp64;
fp64 = fp197 * fp199;
LIBINT2_REALTYPE fp209;
fp209 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp210;
fp210 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp208;
fp208 = fp210 + fp209;
LIBINT2_REALTYPE fp255;
fp255 = inteval->WQ_y[vi] * fp208;
LIBINT2_REALTYPE fp256;
fp256 = inteval->QC_y[vi] * fp211;
LIBINT2_REALTYPE fp254;
fp254 = fp256 + fp255;
LIBINT2_REALTYPE fp252;
fp252 = inteval->WQ_z[vi] * fp254;
LIBINT2_REALTYPE fp253;
fp253 = inteval->QC_z[vi] * fp199;
LIBINT2_REALTYPE fp251;
fp251 = fp253 + fp252;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WP_z[vi] * fp251;
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp40;
fp40 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+38)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp166;
fp166 = inteval->WQ_x[vi] * fp156;
LIBINT2_REALTYPE fp167;
fp167 = inteval->QC_x[vi] * fp161;
LIBINT2_REALTYPE fp165;
fp165 = fp167 + fp166;
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_z[vi] * fp165;
LIBINT2_REALTYPE fp38;
fp38 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+37)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_z[vi] * fp199;
LIBINT2_REALTYPE fp35;
fp35 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+36)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp234;
fp234 = inteval->WQ_x[vi] * fp211;
LIBINT2_REALTYPE fp235;
fp235 = inteval->QC_x[vi] * fp214;
LIBINT2_REALTYPE fp233;
fp233 = fp235 + fp234;
LIBINT2_REALTYPE fp228;
fp228 = fp233 + fp229;
LIBINT2_REALTYPE fp103;
fp103 = fp197 * fp228;
LIBINT2_REALTYPE fp222;
fp222 = inteval->WQ_x[vi] * fp208;
LIBINT2_REALTYPE fp223;
fp223 = inteval->QC_x[vi] * fp211;
LIBINT2_REALTYPE fp221;
fp221 = fp223 + fp222;
LIBINT2_REALTYPE fp217;
fp217 = fp221 + fp218;
LIBINT2_REALTYPE fp184;
fp184 = inteval->WQ_z[vi] * fp217;
LIBINT2_REALTYPE fp185;
fp185 = inteval->QC_z[vi] * fp228;
LIBINT2_REALTYPE fp183;
fp183 = fp185 + fp184;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_z[vi] * fp183;
LIBINT2_REALTYPE fp70;
fp70 = fp71 + fp103;
LIBINT2_REALTYPE fp36;
fp36 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+35)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp203;
fp203 = inteval->WQ_y[vi] * fp217;
LIBINT2_REALTYPE fp204;
fp204 = inteval->QC_y[vi] * fp228;
LIBINT2_REALTYPE fp202;
fp202 = fp204 + fp203;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_z[vi] * fp202;
LIBINT2_REALTYPE fp34;
fp34 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp74;
fp74 = inteval->WP_z[vi] * fp228;
LIBINT2_REALTYPE fp33;
fp33 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp239;
fp239 = inteval->roe[vi] * fp211;
LIBINT2_REALTYPE fp238;
fp238 = fp214 - fp239;
LIBINT2_REALTYPE fp237;
fp237 = fp240 * fp238;
LIBINT2_REALTYPE fp242;
fp242 = inteval->WQ_x[vi] * fp217;
LIBINT2_REALTYPE fp243;
fp243 = inteval->QC_x[vi] * fp228;
LIBINT2_REALTYPE fp241;
fp241 = fp243 + fp242;
LIBINT2_REALTYPE fp236;
fp236 = fp241 + fp237;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_z[vi] * fp236;
LIBINT2_REALTYPE fp32;
fp32 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_y[vi] * fp107;
LIBINT2_REALTYPE fp31;
fp31 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_y[vi] * fp136;
LIBINT2_REALTYPE fp27;
fp27 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+30)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp144;
fp144 = fp197 * fp136;
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_y[vi] * fp248;
LIBINT2_REALTYPE fp77;
fp77 = fp78 + fp144;
LIBINT2_REALTYPE fp30;
fp30 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+29)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp178;
fp178 = fp197 * fp174;
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_y[vi] * fp147;
LIBINT2_REALTYPE fp87;
fp87 = fp88 + fp178;
LIBINT2_REALTYPE fp25;
fp25 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+28)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_y[vi] * fp116;
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
LIBINT2_REALTYPE fp29;
fp29 = fp79;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+27)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp83;
fp83 = fp246 * fp161;
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_y[vi] * fp120;
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
LIBINT2_REALTYPE fp28;
fp28 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+26)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp93;
fp93 = fp226 * fp192;
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_y[vi] * fp161;
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
LIBINT2_REALTYPE fp23;
fp23 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+25)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_y[vi] * fp140;
LIBINT2_REALTYPE fp26;
fp26 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_y[vi] * fp180;
LIBINT2_REALTYPE fp21;
fp21 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp90;
fp90 = fp197 * fp180;
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_y[vi] * fp251;
LIBINT2_REALTYPE fp89;
fp89 = fp91 + fp90;
LIBINT2_REALTYPE fp24;
fp24 = fp89;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp206;
fp206 = fp226 * fp199;
LIBINT2_REALTYPE fp96;
fp96 = inteval->WP_y[vi] * fp165;
LIBINT2_REALTYPE fp95;
fp95 = fp96 + fp206;
LIBINT2_REALTYPE fp22;
fp22 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_y[vi] * fp199;
LIBINT2_REALTYPE fp99;
fp99 = fp101 + fp100;
LIBINT2_REALTYPE fp19;
fp19 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_y[vi] * fp183;
LIBINT2_REALTYPE fp20;
fp20 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_y[vi] * fp202;
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
LIBINT2_REALTYPE fp18;
fp18 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_y[vi] * fp228;
LIBINT2_REALTYPE fp17;
fp17 = fp105;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_y[vi] * fp236;
LIBINT2_REALTYPE fp16;
fp16 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_x[vi] * fp107;
LIBINT2_REALTYPE fp15;
fp15 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp135;
fp135 = inteval->WP_x[vi] * fp136;
LIBINT2_REALTYPE fp11;
fp11 = fp135;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_x[vi] * fp248;
LIBINT2_REALTYPE fp14;
fp14 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp146;
fp146 = inteval->WP_x[vi] * fp147;
LIBINT2_REALTYPE fp9;
fp9 = fp146;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp119;
fp119 = inteval->WP_x[vi] * fp116;
LIBINT2_REALTYPE fp13;
fp13 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp127;
fp127 = inteval->WP_x[vi] * fp120;
LIBINT2_REALTYPE fp12;
fp12 = fp127;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp160;
fp160 = inteval->WP_x[vi] * fp161;
LIBINT2_REALTYPE fp7;
fp7 = fp160;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_x[vi] * fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp145 + fp144;
LIBINT2_REALTYPE fp10;
fp10 = fp143;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp179;
fp179 = inteval->WP_x[vi] * fp180;
LIBINT2_REALTYPE fp177;
fp177 = fp179 + fp178;
LIBINT2_REALTYPE fp5;
fp5 = fp177;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp151;
fp151 = fp197 * fp147;
LIBINT2_REALTYPE fp152;
fp152 = inteval->WP_x[vi] * fp251;
LIBINT2_REALTYPE fp150;
fp150 = fp152 + fp151;
LIBINT2_REALTYPE fp8;
fp8 = fp150;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp170;
fp170 = inteval->WP_x[vi] * fp165;
LIBINT2_REALTYPE fp168;
fp168 = fp170 + fp169;
LIBINT2_REALTYPE fp6;
fp6 = fp168;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp198;
fp198 = inteval->WP_x[vi] * fp199;
LIBINT2_REALTYPE fp195;
fp195 = fp198 + fp196;
LIBINT2_REALTYPE fp3;
fp3 = fp195;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp188;
fp188 = inteval->WP_x[vi] * fp183;
LIBINT2_REALTYPE fp186;
fp186 = fp188 + fp187;
LIBINT2_REALTYPE fp4;
fp4 = fp186;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp207;
fp207 = inteval->WP_x[vi] * fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp207 + fp206;
LIBINT2_REALTYPE fp2;
fp2 = fp205;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp214;
LIBINT2_REALTYPE fp227;
fp227 = inteval->WP_x[vi] * fp228;
LIBINT2_REALTYPE fp224;
fp224 = fp227 + fp225;
LIBINT2_REALTYPE fp1;
fp1 = fp224;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp228;
LIBINT2_REALTYPE fp247;
fp247 = inteval->WP_x[vi] * fp236;
LIBINT2_REALTYPE fp244;
fp244 = fp247 + fp245;
LIBINT2_REALTYPE fp0;
fp0 = fp244;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 257 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
