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
#include <_aB_S__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_S__0__F__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,46)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_S__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp69;
fp69 = inteval->CD_z[vi] * inteval->stack[((hsi*1+25)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->stack[((hsi*1+26)*1+lsi)*1] + fp69;
LIBINT2_REALTYPE fp199;
fp199 = inteval->CD_z[vi] * fp68;
LIBINT2_REALTYPE fp65;
fp65 = inteval->CD_z[vi] * inteval->stack[((hsi*1+26)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->stack[((hsi*1+27)*1+lsi)*1] + fp65;
LIBINT2_REALTYPE fp198;
fp198 = fp64 + fp199;
inteval->stack[((hsi*60+75)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp67;
fp67 = inteval->CD_y[vi] * inteval->stack[((hsi*1+26)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->stack[((hsi*1+24)*1+lsi)*1] + fp67;
LIBINT2_REALTYPE fp73;
fp73 = inteval->CD_y[vi] * inteval->stack[((hsi*1+25)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->stack[((hsi*1+21)*1+lsi)*1] + fp73;
LIBINT2_REALTYPE fp201;
fp201 = inteval->CD_z[vi] * fp72;
LIBINT2_REALTYPE fp200;
fp200 = fp66 + fp201;
inteval->stack[((hsi*60+74)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp79;
fp79 = inteval->CD_y[vi] * inteval->stack[((hsi*1+21)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->stack[((hsi*1+23)*1+lsi)*1] + fp79;
LIBINT2_REALTYPE fp203;
fp203 = inteval->CD_y[vi] * fp72;
LIBINT2_REALTYPE fp202;
fp202 = fp78 + fp203;
inteval->stack[((hsi*60+73)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp71;
fp71 = inteval->CD_x[vi] * inteval->stack[((hsi*1+26)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->stack[((hsi*1+15)*1+lsi)*1] + fp71;
LIBINT2_REALTYPE fp75;
fp75 = inteval->CD_x[vi] * inteval->stack[((hsi*1+25)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->stack[((hsi*1+12)*1+lsi)*1] + fp75;
LIBINT2_REALTYPE fp205;
fp205 = inteval->CD_z[vi] * fp74;
LIBINT2_REALTYPE fp204;
fp204 = fp70 + fp205;
inteval->stack[((hsi*60+72)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp85;
fp85 = inteval->CD_x[vi] * inteval->stack[((hsi*1+21)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = inteval->stack[((hsi*1+14)*1+lsi)*1] + fp85;
LIBINT2_REALTYPE fp207;
fp207 = inteval->CD_y[vi] * fp74;
LIBINT2_REALTYPE fp206;
fp206 = fp84 + fp207;
inteval->stack[((hsi*60+71)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp113;
fp113 = inteval->CD_x[vi] * inteval->stack[((hsi*1+12)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->stack[((hsi*1+8)*1+lsi)*1] + fp113;
LIBINT2_REALTYPE fp209;
fp209 = inteval->CD_x[vi] * fp74;
LIBINT2_REALTYPE fp208;
fp208 = fp112 + fp209;
inteval->stack[((hsi*60+70)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp83;
fp83 = inteval->CD_z[vi] * inteval->stack[((hsi*1+19)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->stack[((hsi*1+21)*1+lsi)*1] + fp83;
LIBINT2_REALTYPE fp211;
fp211 = inteval->CD_z[vi] * fp82;
LIBINT2_REALTYPE fp77;
fp77 = inteval->CD_z[vi] * inteval->stack[((hsi*1+21)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->stack[((hsi*1+24)*1+lsi)*1] + fp77;
LIBINT2_REALTYPE fp210;
fp210 = fp76 + fp211;
inteval->stack[((hsi*60+69)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp87;
fp87 = inteval->CD_y[vi] * inteval->stack[((hsi*1+19)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->stack[((hsi*1+20)*1+lsi)*1] + fp87;
LIBINT2_REALTYPE fp213;
fp213 = inteval->CD_z[vi] * fp86;
LIBINT2_REALTYPE fp212;
fp212 = fp78 + fp213;
inteval->stack[((hsi*60+68)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = inteval->CD_y[vi] * fp86;
LIBINT2_REALTYPE fp81;
fp81 = inteval->CD_y[vi] * inteval->stack[((hsi*1+20)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->stack[((hsi*1+22)*1+lsi)*1] + fp81;
LIBINT2_REALTYPE fp214;
fp214 = fp80 + fp215;
inteval->stack[((hsi*60+67)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp91;
fp91 = inteval->CD_x[vi] * inteval->stack[((hsi*1+19)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->stack[((hsi*1+11)*1+lsi)*1] + fp91;
LIBINT2_REALTYPE fp217;
fp217 = inteval->CD_z[vi] * fp90;
LIBINT2_REALTYPE fp216;
fp216 = fp84 + fp217;
inteval->stack[((hsi*60+66)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp89;
fp89 = inteval->CD_x[vi] * inteval->stack[((hsi*1+20)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->stack[((hsi*1+13)*1+lsi)*1] + fp89;
LIBINT2_REALTYPE fp219;
fp219 = inteval->CD_y[vi] * fp90;
LIBINT2_REALTYPE fp218;
fp218 = fp88 + fp219;
inteval->stack[((hsi*60+65)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp117;
fp117 = inteval->CD_x[vi] * inteval->stack[((hsi*1+11)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->stack[((hsi*1+7)*1+lsi)*1] + fp117;
LIBINT2_REALTYPE fp221;
fp221 = inteval->CD_x[vi] * fp90;
LIBINT2_REALTYPE fp220;
fp220 = fp116 + fp221;
inteval->stack[((hsi*60+64)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp97;
fp97 = inteval->CD_z[vi] * inteval->stack[((hsi*1+16)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->stack[((hsi*1+17)*1+lsi)*1] + fp97;
LIBINT2_REALTYPE fp223;
fp223 = inteval->CD_z[vi] * fp96;
LIBINT2_REALTYPE fp93;
fp93 = inteval->CD_z[vi] * inteval->stack[((hsi*1+17)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->stack[((hsi*1+18)*1+lsi)*1] + fp93;
LIBINT2_REALTYPE fp222;
fp222 = fp92 + fp223;
inteval->stack[((hsi*60+63)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp101;
fp101 = inteval->CD_y[vi] * inteval->stack[((hsi*1+16)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->stack[((hsi*1+12)*1+lsi)*1] + fp101;
LIBINT2_REALTYPE fp225;
fp225 = inteval->CD_z[vi] * fp100;
LIBINT2_REALTYPE fp95;
fp95 = inteval->CD_y[vi] * inteval->stack[((hsi*1+17)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->stack[((hsi*1+15)*1+lsi)*1] + fp95;
LIBINT2_REALTYPE fp224;
fp224 = fp94 + fp225;
inteval->stack[((hsi*60+62)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp135;
fp135 = inteval->CD_x[vi] * inteval->stack[((hsi*1+2)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = inteval->stack[((hsi*1+1)*1+lsi)*1] + fp135;
LIBINT2_REALTYPE fp257;
fp257 = inteval->CD_x[vi] * fp134;
LIBINT2_REALTYPE fp137;
fp137 = inteval->CD_x[vi] * inteval->stack[((hsi*1+1)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->stack[((hsi*1+0)*1+lsi)*1] + fp137;
LIBINT2_REALTYPE fp256;
fp256 = fp136 + fp257;
inteval->stack[((hsi*60+46)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp99;
fp99 = inteval->CD_x[vi] * inteval->stack[((hsi*1+17)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->stack[((hsi*1+9)*1+lsi)*1] + fp99;
LIBINT2_REALTYPE fp103;
fp103 = inteval->CD_x[vi] * inteval->stack[((hsi*1+16)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->stack[((hsi*1+6)*1+lsi)*1] + fp103;
LIBINT2_REALTYPE fp229;
fp229 = inteval->CD_z[vi] * fp102;
LIBINT2_REALTYPE fp228;
fp228 = fp98 + fp229;
inteval->stack[((hsi*60+60)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = inteval->CD_y[vi] * fp102;
LIBINT2_REALTYPE fp230;
fp230 = fp112 + fp231;
inteval->stack[((hsi*60+59)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp129;
fp129 = inteval->CD_x[vi] * inteval->stack[((hsi*1+6)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = inteval->stack[((hsi*1+5)*1+lsi)*1] + fp129;
LIBINT2_REALTYPE fp233;
fp233 = inteval->CD_x[vi] * fp102;
LIBINT2_REALTYPE fp232;
fp232 = fp128 + fp233;
inteval->stack[((hsi*60+58)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp111;
fp111 = inteval->CD_z[vi] * inteval->stack[((hsi*1+10)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->stack[((hsi*1+12)*1+lsi)*1] + fp111;
LIBINT2_REALTYPE fp235;
fp235 = inteval->CD_z[vi] * fp110;
LIBINT2_REALTYPE fp105;
fp105 = inteval->CD_z[vi] * inteval->stack[((hsi*1+12)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->stack[((hsi*1+15)*1+lsi)*1] + fp105;
LIBINT2_REALTYPE fp234;
fp234 = fp104 + fp235;
inteval->stack[((hsi*60+57)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp107;
fp107 = inteval->CD_y[vi] * inteval->stack[((hsi*1+12)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->stack[((hsi*1+14)*1+lsi)*1] + fp107;
LIBINT2_REALTYPE fp115;
fp115 = inteval->CD_y[vi] * inteval->stack[((hsi*1+10)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = inteval->stack[((hsi*1+11)*1+lsi)*1] + fp115;
LIBINT2_REALTYPE fp237;
fp237 = inteval->CD_z[vi] * fp114;
LIBINT2_REALTYPE fp236;
fp236 = fp106 + fp237;
inteval->stack[((hsi*60+56)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = inteval->CD_y[vi] * fp114;
LIBINT2_REALTYPE fp109;
fp109 = inteval->CD_y[vi] * inteval->stack[((hsi*1+11)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = inteval->stack[((hsi*1+13)*1+lsi)*1] + fp109;
LIBINT2_REALTYPE fp238;
fp238 = fp108 + fp239;
inteval->stack[((hsi*60+55)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp119;
fp119 = inteval->CD_x[vi] * inteval->stack[((hsi*1+10)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->stack[((hsi*1+4)*1+lsi)*1] + fp119;
LIBINT2_REALTYPE fp241;
fp241 = inteval->CD_z[vi] * fp118;
LIBINT2_REALTYPE fp240;
fp240 = fp112 + fp241;
inteval->stack[((hsi*60+54)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = inteval->CD_y[vi] * fp118;
LIBINT2_REALTYPE fp242;
fp242 = fp116 + fp243;
inteval->stack[((hsi*60+53)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp133;
fp133 = inteval->CD_x[vi] * inteval->stack[((hsi*1+4)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = inteval->stack[((hsi*1+3)*1+lsi)*1] + fp133;
LIBINT2_REALTYPE fp245;
fp245 = inteval->CD_x[vi] * fp118;
LIBINT2_REALTYPE fp244;
fp244 = fp132 + fp245;
inteval->stack[((hsi*60+52)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp127;
fp127 = inteval->CD_z[vi] * inteval->stack[((hsi*1+2)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = inteval->stack[((hsi*1+6)*1+lsi)*1] + fp127;
LIBINT2_REALTYPE fp247;
fp247 = inteval->CD_z[vi] * fp126;
LIBINT2_REALTYPE fp121;
fp121 = inteval->CD_z[vi] * inteval->stack[((hsi*1+6)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->stack[((hsi*1+9)*1+lsi)*1] + fp121;
LIBINT2_REALTYPE fp246;
fp246 = fp120 + fp247;
inteval->stack[((hsi*60+51)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp131;
fp131 = inteval->CD_y[vi] * inteval->stack[((hsi*1+2)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->stack[((hsi*1+4)*1+lsi)*1] + fp131;
LIBINT2_REALTYPE fp249;
fp249 = inteval->CD_z[vi] * fp130;
LIBINT2_REALTYPE fp123;
fp123 = inteval->CD_y[vi] * inteval->stack[((hsi*1+6)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->stack[((hsi*1+8)*1+lsi)*1] + fp123;
LIBINT2_REALTYPE fp248;
fp248 = fp122 + fp249;
inteval->stack[((hsi*60+50)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = inteval->CD_y[vi] * fp130;
LIBINT2_REALTYPE fp125;
fp125 = inteval->CD_y[vi] * inteval->stack[((hsi*1+4)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->stack[((hsi*1+7)*1+lsi)*1] + fp125;
LIBINT2_REALTYPE fp250;
fp250 = fp124 + fp251;
inteval->stack[((hsi*60+49)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = inteval->CD_z[vi] * fp134;
LIBINT2_REALTYPE fp252;
fp252 = fp128 + fp253;
inteval->stack[((hsi*60+48)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = inteval->CD_y[vi] * fp134;
LIBINT2_REALTYPE fp254;
fp254 = fp132 + fp255;
inteval->stack[((hsi*60+47)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp227;
fp227 = inteval->CD_y[vi] * fp100;
LIBINT2_REALTYPE fp226;
fp226 = fp106 + fp227;
inteval->stack[((hsi*60+61)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp5;
fp5 = inteval->CD_z[vi] * inteval->stack[((hsi*1+43)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->stack[((hsi*1+44)*1+lsi)*1] + fp5;
LIBINT2_REALTYPE fp139;
fp139 = inteval->CD_z[vi] * fp4;
LIBINT2_REALTYPE fp1;
fp1 = inteval->CD_z[vi] * inteval->stack[((hsi*1+44)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = inteval->stack[((hsi*1+45)*1+lsi)*1] + fp1;
LIBINT2_REALTYPE fp138;
fp138 = fp0 + fp139;
inteval->stack[((hsi*60+105)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp9;
fp9 = inteval->CD_y[vi] * inteval->stack[((hsi*1+43)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->stack[((hsi*1+41)*1+lsi)*1] + fp9;
LIBINT2_REALTYPE fp141;
fp141 = inteval->CD_z[vi] * fp8;
LIBINT2_REALTYPE fp3;
fp3 = inteval->CD_y[vi] * inteval->stack[((hsi*1+44)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->stack[((hsi*1+42)*1+lsi)*1] + fp3;
LIBINT2_REALTYPE fp140;
fp140 = fp2 + fp141;
inteval->stack[((hsi*60+104)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp15;
fp15 = inteval->CD_y[vi] * inteval->stack[((hsi*1+41)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->stack[((hsi*1+39)*1+lsi)*1] + fp15;
LIBINT2_REALTYPE fp143;
fp143 = inteval->CD_y[vi] * fp8;
LIBINT2_REALTYPE fp142;
fp142 = fp14 + fp143;
inteval->stack[((hsi*60+103)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp11;
fp11 = inteval->CD_x[vi] * inteval->stack[((hsi*1+43)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->stack[((hsi*1+29)*1+lsi)*1] + fp11;
LIBINT2_REALTYPE fp145;
fp145 = inteval->CD_z[vi] * fp10;
LIBINT2_REALTYPE fp7;
fp7 = inteval->CD_x[vi] * inteval->stack[((hsi*1+44)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->stack[((hsi*1+30)*1+lsi)*1] + fp7;
LIBINT2_REALTYPE fp144;
fp144 = fp6 + fp145;
inteval->stack[((hsi*60+102)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp19;
fp19 = inteval->CD_x[vi] * inteval->stack[((hsi*1+41)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->stack[((hsi*1+27)*1+lsi)*1] + fp19;
LIBINT2_REALTYPE fp147;
fp147 = inteval->CD_y[vi] * fp10;
LIBINT2_REALTYPE fp146;
fp146 = fp18 + fp147;
inteval->stack[((hsi*60+101)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp59;
fp59 = inteval->CD_x[vi] * inteval->stack[((hsi*1+29)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->stack[((hsi*1+18)*1+lsi)*1] + fp59;
LIBINT2_REALTYPE fp149;
fp149 = inteval->CD_x[vi] * fp10;
LIBINT2_REALTYPE fp148;
fp148 = fp58 + fp149;
inteval->stack[((hsi*60+100)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp17;
fp17 = inteval->CD_z[vi] * inteval->stack[((hsi*1+40)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->stack[((hsi*1+41)*1+lsi)*1] + fp17;
LIBINT2_REALTYPE fp151;
fp151 = inteval->CD_z[vi] * fp16;
LIBINT2_REALTYPE fp13;
fp13 = inteval->CD_z[vi] * inteval->stack[((hsi*1+41)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->stack[((hsi*1+42)*1+lsi)*1] + fp13;
LIBINT2_REALTYPE fp150;
fp150 = fp12 + fp151;
inteval->stack[((hsi*60+99)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp21;
fp21 = inteval->CD_y[vi] * inteval->stack[((hsi*1+40)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->stack[((hsi*1+38)*1+lsi)*1] + fp21;
LIBINT2_REALTYPE fp153;
fp153 = inteval->CD_z[vi] * fp20;
LIBINT2_REALTYPE fp152;
fp152 = fp14 + fp153;
inteval->stack[((hsi*60+98)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp27;
fp27 = inteval->CD_y[vi] * inteval->stack[((hsi*1+38)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->stack[((hsi*1+36)*1+lsi)*1] + fp27;
LIBINT2_REALTYPE fp155;
fp155 = inteval->CD_y[vi] * fp20;
LIBINT2_REALTYPE fp154;
fp154 = fp26 + fp155;
inteval->stack[((hsi*60+97)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp23;
fp23 = inteval->CD_x[vi] * inteval->stack[((hsi*1+40)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->stack[((hsi*1+26)*1+lsi)*1] + fp23;
LIBINT2_REALTYPE fp157;
fp157 = inteval->CD_z[vi] * fp22;
LIBINT2_REALTYPE fp156;
fp156 = fp18 + fp157;
inteval->stack[((hsi*60+96)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp31;
fp31 = inteval->CD_x[vi] * inteval->stack[((hsi*1+38)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->stack[((hsi*1+24)*1+lsi)*1] + fp31;
LIBINT2_REALTYPE fp159;
fp159 = inteval->CD_y[vi] * fp22;
LIBINT2_REALTYPE fp158;
fp158 = fp30 + fp159;
inteval->stack[((hsi*60+95)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = inteval->CD_x[vi] * fp22;
LIBINT2_REALTYPE fp160;
fp160 = fp70 + fp161;
inteval->stack[((hsi*60+94)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp29;
fp29 = inteval->CD_z[vi] * inteval->stack[((hsi*1+37)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->stack[((hsi*1+38)*1+lsi)*1] + fp29;
LIBINT2_REALTYPE fp163;
fp163 = inteval->CD_z[vi] * fp28;
LIBINT2_REALTYPE fp25;
fp25 = inteval->CD_z[vi] * inteval->stack[((hsi*1+38)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->stack[((hsi*1+39)*1+lsi)*1] + fp25;
LIBINT2_REALTYPE fp162;
fp162 = fp24 + fp163;
inteval->stack[((hsi*60+93)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp33;
fp33 = inteval->CD_y[vi] * inteval->stack[((hsi*1+37)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->stack[((hsi*1+33)*1+lsi)*1] + fp33;
LIBINT2_REALTYPE fp165;
fp165 = inteval->CD_z[vi] * fp32;
LIBINT2_REALTYPE fp164;
fp164 = fp26 + fp165;
inteval->stack[((hsi*60+92)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp63;
fp63 = inteval->CD_x[vi] * inteval->stack[((hsi*1+28)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->stack[((hsi*1+17)*1+lsi)*1] + fp63;
LIBINT2_REALTYPE fp197;
fp197 = inteval->CD_x[vi] * fp62;
LIBINT2_REALTYPE fp196;
fp196 = fp98 + fp197;
inteval->stack[((hsi*60+76)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp35;
fp35 = inteval->CD_x[vi] * inteval->stack[((hsi*1+37)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->stack[((hsi*1+21)*1+lsi)*1] + fp35;
LIBINT2_REALTYPE fp169;
fp169 = inteval->CD_z[vi] * fp34;
LIBINT2_REALTYPE fp168;
fp168 = fp30 + fp169;
inteval->stack[((hsi*60+90)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp45;
fp45 = inteval->CD_x[vi] * inteval->stack[((hsi*1+33)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->stack[((hsi*1+23)*1+lsi)*1] + fp45;
LIBINT2_REALTYPE fp171;
fp171 = inteval->CD_y[vi] * fp34;
LIBINT2_REALTYPE fp170;
fp170 = fp44 + fp171;
inteval->stack[((hsi*60+89)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = inteval->CD_x[vi] * fp34;
LIBINT2_REALTYPE fp172;
fp172 = fp84 + fp173;
inteval->stack[((hsi*60+88)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp43;
fp43 = inteval->CD_z[vi] * inteval->stack[((hsi*1+31)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->stack[((hsi*1+33)*1+lsi)*1] + fp43;
LIBINT2_REALTYPE fp175;
fp175 = inteval->CD_z[vi] * fp42;
LIBINT2_REALTYPE fp37;
fp37 = inteval->CD_z[vi] * inteval->stack[((hsi*1+33)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->stack[((hsi*1+36)*1+lsi)*1] + fp37;
LIBINT2_REALTYPE fp174;
fp174 = fp36 + fp175;
inteval->stack[((hsi*60+87)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_y[vi] * inteval->stack[((hsi*1+33)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->stack[((hsi*1+35)*1+lsi)*1] + fp39;
LIBINT2_REALTYPE fp47;
fp47 = inteval->CD_y[vi] * inteval->stack[((hsi*1+31)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->stack[((hsi*1+32)*1+lsi)*1] + fp47;
LIBINT2_REALTYPE fp177;
fp177 = inteval->CD_z[vi] * fp46;
LIBINT2_REALTYPE fp176;
fp176 = fp38 + fp177;
inteval->stack[((hsi*60+86)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = inteval->CD_y[vi] * fp46;
LIBINT2_REALTYPE fp41;
fp41 = inteval->CD_y[vi] * inteval->stack[((hsi*1+32)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->stack[((hsi*1+34)*1+lsi)*1] + fp41;
LIBINT2_REALTYPE fp178;
fp178 = fp40 + fp179;
inteval->stack[((hsi*60+85)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp51;
fp51 = inteval->CD_x[vi] * inteval->stack[((hsi*1+31)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->stack[((hsi*1+20)*1+lsi)*1] + fp51;
LIBINT2_REALTYPE fp181;
fp181 = inteval->CD_z[vi] * fp50;
LIBINT2_REALTYPE fp180;
fp180 = fp44 + fp181;
inteval->stack[((hsi*60+84)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = inteval->CD_y[vi] * fp50;
LIBINT2_REALTYPE fp49;
fp49 = inteval->CD_x[vi] * inteval->stack[((hsi*1+32)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->stack[((hsi*1+22)*1+lsi)*1] + fp49;
LIBINT2_REALTYPE fp182;
fp182 = fp48 + fp183;
inteval->stack[((hsi*60+83)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = inteval->CD_x[vi] * fp50;
LIBINT2_REALTYPE fp184;
fp184 = fp88 + fp185;
inteval->stack[((hsi*60+82)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_z[vi] * inteval->stack[((hsi*1+28)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->stack[((hsi*1+29)*1+lsi)*1] + fp57;
LIBINT2_REALTYPE fp187;
fp187 = inteval->CD_z[vi] * fp56;
LIBINT2_REALTYPE fp53;
fp53 = inteval->CD_z[vi] * inteval->stack[((hsi*1+29)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->stack[((hsi*1+30)*1+lsi)*1] + fp53;
LIBINT2_REALTYPE fp186;
fp186 = fp52 + fp187;
inteval->stack[((hsi*60+81)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp61;
fp61 = inteval->CD_y[vi] * inteval->stack[((hsi*1+28)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->stack[((hsi*1+26)*1+lsi)*1] + fp61;
LIBINT2_REALTYPE fp189;
fp189 = inteval->CD_z[vi] * fp60;
LIBINT2_REALTYPE fp55;
fp55 = inteval->CD_y[vi] * inteval->stack[((hsi*1+29)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->stack[((hsi*1+27)*1+lsi)*1] + fp55;
LIBINT2_REALTYPE fp188;
fp188 = fp54 + fp189;
inteval->stack[((hsi*60+80)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = inteval->CD_y[vi] * fp60;
LIBINT2_REALTYPE fp190;
fp190 = fp66 + fp191;
inteval->stack[((hsi*60+79)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = inteval->CD_z[vi] * fp62;
LIBINT2_REALTYPE fp192;
fp192 = fp58 + fp193;
inteval->stack[((hsi*60+78)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = inteval->CD_y[vi] * fp62;
LIBINT2_REALTYPE fp194;
fp194 = fp70 + fp195;
inteval->stack[((hsi*60+77)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp167;
fp167 = inteval->CD_y[vi] * fp32;
LIBINT2_REALTYPE fp166;
fp166 = fp38 + fp167;
inteval->stack[((hsi*60+91)*1+lsi)*1] = fp166;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*60+46)*1+lsi)*1]);
/** Number of flops = 258 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
