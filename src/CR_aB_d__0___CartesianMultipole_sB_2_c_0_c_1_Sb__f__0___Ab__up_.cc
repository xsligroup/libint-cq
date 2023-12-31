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
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void CR_aB_d__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp13 + fp15;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->BO_x[vi] * fp80;
LIBINT2_REALTYPE fp81;
fp81 = fp85 + fp82;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_x[vi] * fp75;
LIBINT2_REALTYPE fp76;
fp76 = fp80 + fp77;
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_x[vi] * fp76;
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
LIBINT2_REALTYPE fp184;
fp184 = fp78 * fp50;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp14;
target[((hsi*60+29)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp17;
fp17 = fp16 + fp18;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp78 * fp49;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp17;
target[((hsi*60+28)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp19 + fp21;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp78 * fp48;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp20;
target[((hsi*60+27)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp23;
LIBINT2_REALTYPE fp24;
fp24 = fp22 + fp25;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp78 * fp47;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp24;
target[((hsi*60+26)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->BO_x[vi] * fp85;
LIBINT2_REALTYPE fp86;
fp86 = fp92 + fp87;
LIBINT2_REALTYPE fp84;
fp84 = inteval->BO_x[vi] * fp81;
LIBINT2_REALTYPE fp83;
fp83 = fp86 + fp84;
LIBINT2_REALTYPE fp192;
fp192 = fp83 * fp50;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp17;
target[((hsi*60+25)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp194;
fp194 = fp83 * fp49;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp20;
target[((hsi*60+24)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp196;
fp196 = fp83 * fp48;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp24;
target[((hsi*60+23)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->BO_x[vi] * fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp91 + fp96;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_x[vi] * fp86;
LIBINT2_REALTYPE fp88;
fp88 = fp95 + fp89;
LIBINT2_REALTYPE fp198;
fp198 = fp88 * fp50;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp20;
target[((hsi*60+22)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp200;
fp200 = fp88 * fp49;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp24;
target[((hsi*60+21)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp98;
fp98 = inteval->BO_x[vi] * fp95;
LIBINT2_REALTYPE fp94;
fp94 = inteval->BO_x[vi] * fp91;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp90 + fp94;
LIBINT2_REALTYPE fp97;
fp97 = fp93 + fp98;
LIBINT2_REALTYPE fp202;
fp202 = fp97 * fp50;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp24;
target[((hsi*60+20)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_z[vi] * fp29;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp26 + fp28;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp78 * fp46;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp27;
target[((hsi*60+19)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp32;
LIBINT2_REALTYPE fp30;
fp30 = fp29 + fp31;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = fp78 * fp45;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp30;
target[((hsi*60+18)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp33;
fp33 = fp32 + fp34;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp78 * fp44;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp33;
target[((hsi*60+17)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp37;
fp37 = fp35 + fp38;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = fp78 * fp43;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp37;
target[((hsi*60+16)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = inteval->BO_x[vi] * fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp115 + fp120;
LIBINT2_REALTYPE fp122;
fp122 = inteval->BO_x[vi] * fp119;
LIBINT2_REALTYPE fp118;
fp118 = inteval->BO_x[vi] * fp115;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp114 + fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp117 + fp122;
LIBINT2_REALTYPE fp242;
fp242 = fp121 * fp50;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp37;
target[((hsi*60+0)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp214;
fp214 = fp83 * fp45;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp33;
target[((hsi*60+14)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp216;
fp216 = fp83 * fp44;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp37;
target[((hsi*60+13)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp218;
fp218 = fp88 * fp46;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp33;
target[((hsi*60+12)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp220;
fp220 = fp88 * fp45;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp37;
target[((hsi*60+11)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp222;
fp222 = fp97 * fp46;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp37;
target[((hsi*60+10)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->BO_x[vi] * fp104;
LIBINT2_REALTYPE fp105;
fp105 = fp109 + fp106;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->BO_x[vi] * fp99;
LIBINT2_REALTYPE fp100;
fp100 = fp104 + fp101;
LIBINT2_REALTYPE fp103;
fp103 = inteval->BO_x[vi] * fp100;
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
LIBINT2_REALTYPE fp224;
fp224 = fp102 * fp50;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp27;
target[((hsi*60+9)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp226;
fp226 = fp102 * fp49;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp30;
target[((hsi*60+8)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp228;
fp228 = fp102 * fp48;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp33;
target[((hsi*60+7)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp230;
fp230 = fp102 * fp47;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp37;
target[((hsi*60+6)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp111;
fp111 = inteval->BO_x[vi] * fp109;
LIBINT2_REALTYPE fp110;
fp110 = fp116 + fp111;
LIBINT2_REALTYPE fp108;
fp108 = inteval->BO_x[vi] * fp105;
LIBINT2_REALTYPE fp107;
fp107 = fp110 + fp108;
LIBINT2_REALTYPE fp232;
fp232 = fp107 * fp50;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp30;
target[((hsi*60+5)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp234;
fp234 = fp107 * fp49;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp33;
target[((hsi*60+4)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp236;
fp236 = fp107 * fp48;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp37;
target[((hsi*60+3)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp113;
fp113 = inteval->BO_x[vi] * fp110;
LIBINT2_REALTYPE fp112;
fp112 = fp119 + fp113;
LIBINT2_REALTYPE fp238;
fp238 = fp112 * fp50;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp33;
target[((hsi*60+2)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp240;
fp240 = fp112 * fp49;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp37;
target[((hsi*60+1)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp212;
fp212 = fp83 * fp46;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp30;
target[((hsi*60+15)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_x[vi] * fp56;
LIBINT2_REALTYPE fp57;
fp57 = fp61 + fp58;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_x[vi] * fp51;
LIBINT2_REALTYPE fp52;
fp52 = fp56 + fp53;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_x[vi] * fp52;
LIBINT2_REALTYPE fp54;
fp54 = fp57 + fp55;
LIBINT2_REALTYPE fp124;
fp124 = fp54 * fp50;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp1;
target[((hsi*60+59)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp3 + fp5;
LIBINT2_REALTYPE fp126;
fp126 = fp54 * fp49;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp4;
target[((hsi*60+58)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp9;
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp128;
fp128 = fp54 * fp48;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp7;
target[((hsi*60+57)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp11;
fp11 = fp9 + fp12;
LIBINT2_REALTYPE fp130;
fp130 = fp54 * fp47;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp11;
target[((hsi*60+56)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->BO_x[vi] * fp61;
LIBINT2_REALTYPE fp62;
fp62 = fp68 + fp63;
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_x[vi] * fp57;
LIBINT2_REALTYPE fp59;
fp59 = fp62 + fp60;
LIBINT2_REALTYPE fp132;
fp132 = fp59 * fp50;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp4;
target[((hsi*60+55)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp59 * fp49;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp7;
target[((hsi*60+54)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp136;
fp136 = fp59 * fp48;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp11;
target[((hsi*60+53)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_x[vi] * fp68;
LIBINT2_REALTYPE fp71;
fp71 = fp67 + fp72;
LIBINT2_REALTYPE fp65;
fp65 = inteval->BO_x[vi] * fp62;
LIBINT2_REALTYPE fp64;
fp64 = fp71 + fp65;
LIBINT2_REALTYPE fp138;
fp138 = fp64 * fp50;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp7;
target[((hsi*60+52)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp140;
fp140 = fp64 * fp49;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp11;
target[((hsi*60+51)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_x[vi] * fp71;
LIBINT2_REALTYPE fp70;
fp70 = inteval->BO_x[vi] * fp67;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp66 + fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp69 + fp74;
LIBINT2_REALTYPE fp142;
fp142 = fp73 * fp50;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp11;
target[((hsi*60+50)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp144;
fp144 = fp54 * fp46;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp14;
target[((hsi*60+49)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp146;
fp146 = fp54 * fp45;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp17;
target[((hsi*60+48)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp148;
fp148 = fp54 * fp44;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp20;
target[((hsi*60+47)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp150;
fp150 = fp54 * fp43;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp24;
target[((hsi*60+46)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp73 * fp42;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp37;
target[((hsi*60+30)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp154;
fp154 = fp59 * fp45;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp20;
target[((hsi*60+44)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp156;
fp156 = fp59 * fp44;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp24;
target[((hsi*60+43)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp158;
fp158 = fp64 * fp46;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp20;
target[((hsi*60+42)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp160;
fp160 = fp64 * fp45;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp24;
target[((hsi*60+41)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp162;
fp162 = fp73 * fp46;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp24;
target[((hsi*60+40)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp164;
fp164 = fp54 * fp42;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp27;
target[((hsi*60+39)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp54 * fp41;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp30;
target[((hsi*60+38)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp54 * fp40;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp33;
target[((hsi*60+37)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp54 * fp39;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp37;
target[((hsi*60+36)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp172;
fp172 = fp59 * fp42;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp30;
target[((hsi*60+35)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp174;
fp174 = fp59 * fp41;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp33;
target[((hsi*60+34)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp176;
fp176 = fp59 * fp40;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp37;
target[((hsi*60+33)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp178;
fp178 = fp64 * fp42;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp33;
target[((hsi*60+32)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp180;
fp180 = fp64 * fp41;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp37;
target[((hsi*60+31)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp152;
fp152 = fp59 * fp46;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp17;
target[((hsi*60+45)*1+lsi)*1] = fp151;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 243 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
