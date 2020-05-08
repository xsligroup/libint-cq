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
void CR_aB_d__0___CartesianMultipole_sB_1_c_2_c_0_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_y[vi] * fp76;
LIBINT2_REALTYPE fp78;
fp78 = fp75 + fp79;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_y[vi] * fp77;
LIBINT2_REALTYPE fp80;
fp80 = fp76 + fp81;
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_y[vi] * fp80;
LIBINT2_REALTYPE fp82;
fp82 = fp78 + fp83;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->BO_x[vi] * fp97;
LIBINT2_REALTYPE fp98;
fp98 = fp100 + fp99;
LIBINT2_REALTYPE fp184;
fp184 = fp98 * fp82;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp4;
target[((hsi*60+29)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_y[vi] * fp75;
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_y[vi] * fp78;
LIBINT2_REALTYPE fp73;
fp73 = fp71 + fp74;
LIBINT2_REALTYPE fp186;
fp186 = fp98 * fp73;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp5;
target[((hsi*60+28)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_y[vi] * fp70;
LIBINT2_REALTYPE fp66;
fp66 = fp65 + fp67;
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_y[vi] * fp71;
LIBINT2_REALTYPE fp68;
fp68 = fp66 + fp69;
LIBINT2_REALTYPE fp188;
fp188 = fp98 * fp68;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp6;
target[((hsi*60+27)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_y[vi] * fp66;
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_y[vi] * fp65;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp60 + fp62;
LIBINT2_REALTYPE fp63;
fp63 = fp61 + fp64;
LIBINT2_REALTYPE fp190;
fp190 = fp98 * fp63;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp7;
target[((hsi*60+26)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_x[vi] * fp100;
LIBINT2_REALTYPE fp101;
fp101 = fp103 + fp102;
LIBINT2_REALTYPE fp192;
fp192 = fp101 * fp82;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp5;
target[((hsi*60+25)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp194;
fp194 = fp101 * fp73;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp6;
target[((hsi*60+24)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp196;
fp196 = fp101 * fp68;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp7;
target[((hsi*60+23)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->BO_x[vi] * fp103;
LIBINT2_REALTYPE fp104;
fp104 = fp107 + fp105;
LIBINT2_REALTYPE fp198;
fp198 = fp104 * fp82;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp6;
target[((hsi*60+22)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp200;
fp200 = fp104 * fp73;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp7;
target[((hsi*60+21)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_x[vi] * fp107;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp106 + fp109;
LIBINT2_REALTYPE fp202;
fp202 = fp108 * fp82;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp7;
target[((hsi*60+20)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp52;
LIBINT2_REALTYPE fp54;
fp54 = fp51 + fp55;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_y[vi] * fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp52 + fp57;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_y[vi] * fp56;
LIBINT2_REALTYPE fp58;
fp58 = fp54 + fp59;
LIBINT2_REALTYPE fp204;
fp204 = fp98 * fp58;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp8;
target[((hsi*60+19)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp51;
LIBINT2_REALTYPE fp47;
fp47 = fp46 + fp48;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_y[vi] * fp54;
LIBINT2_REALTYPE fp49;
fp49 = fp47 + fp50;
LIBINT2_REALTYPE fp206;
fp206 = fp98 * fp49;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp9;
target[((hsi*60+18)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_y[vi] * fp46;
LIBINT2_REALTYPE fp42;
fp42 = fp41 + fp43;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_y[vi] * fp47;
LIBINT2_REALTYPE fp44;
fp44 = fp42 + fp45;
LIBINT2_REALTYPE fp208;
fp208 = fp98 * fp44;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp10;
target[((hsi*60+17)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_y[vi] * fp42;
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp41;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp36 + fp38;
LIBINT2_REALTYPE fp39;
fp39 = fp37 + fp40;
LIBINT2_REALTYPE fp210;
fp210 = fp98 * fp39;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp11;
target[((hsi*60+16)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->BO_x[vi] * fp120;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp119 + fp122;
LIBINT2_REALTYPE fp242;
fp242 = fp121 * fp82;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp11;
target[((hsi*60+0)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp214;
fp214 = fp101 * fp49;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp10;
target[((hsi*60+14)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp216;
fp216 = fp101 * fp44;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp11;
target[((hsi*60+13)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp218;
fp218 = fp104 * fp58;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp10;
target[((hsi*60+12)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp220;
fp220 = fp104 * fp49;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp11;
target[((hsi*60+11)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp222;
fp222 = fp108 * fp58;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp11;
target[((hsi*60+10)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->BO_x[vi] * fp110;
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
LIBINT2_REALTYPE fp224;
fp224 = fp111 * fp82;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp8;
target[((hsi*60+9)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp226;
fp226 = fp111 * fp73;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp9;
target[((hsi*60+8)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp228;
fp228 = fp111 * fp68;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp10;
target[((hsi*60+7)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp230;
fp230 = fp111 * fp63;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp11;
target[((hsi*60+6)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->BO_x[vi] * fp113;
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
LIBINT2_REALTYPE fp232;
fp232 = fp114 * fp82;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp9;
target[((hsi*60+5)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp234;
fp234 = fp114 * fp73;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp10;
target[((hsi*60+4)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp236;
fp236 = fp114 * fp68;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp11;
target[((hsi*60+3)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp118;
fp118 = inteval->BO_x[vi] * fp116;
LIBINT2_REALTYPE fp117;
fp117 = fp120 + fp118;
LIBINT2_REALTYPE fp238;
fp238 = fp117 * fp82;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp10;
target[((hsi*60+2)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp240;
fp240 = fp117 * fp73;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp11;
target[((hsi*60+1)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp212;
fp212 = fp101 * fp58;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp9;
target[((hsi*60+15)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_x[vi] * fp84;
LIBINT2_REALTYPE fp85;
fp85 = fp87 + fp86;
LIBINT2_REALTYPE fp124;
fp124 = fp85 * fp82;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp0;
target[((hsi*60+59)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp85 * fp73;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp1;
target[((hsi*60+58)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp85 * fp68;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp2;
target[((hsi*60+57)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp85 * fp63;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp3;
target[((hsi*60+56)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_x[vi] * fp87;
LIBINT2_REALTYPE fp88;
fp88 = fp90 + fp89;
LIBINT2_REALTYPE fp132;
fp132 = fp88 * fp82;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp1;
target[((hsi*60+55)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp88 * fp73;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp2;
target[((hsi*60+54)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp136;
fp136 = fp88 * fp68;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp3;
target[((hsi*60+53)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->BO_x[vi] * fp90;
LIBINT2_REALTYPE fp91;
fp91 = fp94 + fp92;
LIBINT2_REALTYPE fp138;
fp138 = fp91 * fp82;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp2;
target[((hsi*60+52)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp140;
fp140 = fp91 * fp73;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp3;
target[((hsi*60+51)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp96;
fp96 = inteval->BO_x[vi] * fp94;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp93 + fp96;
LIBINT2_REALTYPE fp142;
fp142 = fp95 * fp82;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp3;
target[((hsi*60+50)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp144;
fp144 = fp85 * fp58;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp4;
target[((hsi*60+49)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp146;
fp146 = fp85 * fp49;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp5;
target[((hsi*60+48)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp148;
fp148 = fp85 * fp44;
LIBINT2_REALTYPE fp147;
fp147 = fp148 * fp6;
target[((hsi*60+47)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp150;
fp150 = fp85 * fp39;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * fp7;
target[((hsi*60+46)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_y[vi] * fp28;
LIBINT2_REALTYPE fp30;
fp30 = fp27 + fp31;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp32;
fp32 = fp28 + fp33;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_y[vi] * fp32;
LIBINT2_REALTYPE fp34;
fp34 = fp30 + fp35;
LIBINT2_REALTYPE fp182;
fp182 = fp95 * fp34;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp11;
target[((hsi*60+30)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp154;
fp154 = fp88 * fp49;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * fp6;
target[((hsi*60+44)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp156;
fp156 = fp88 * fp44;
LIBINT2_REALTYPE fp155;
fp155 = fp156 * fp7;
target[((hsi*60+43)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp158;
fp158 = fp91 * fp58;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * fp6;
target[((hsi*60+42)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp160;
fp160 = fp91 * fp49;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * fp7;
target[((hsi*60+41)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp162;
fp162 = fp95 * fp58;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp7;
target[((hsi*60+40)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp164;
fp164 = fp85 * fp34;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp8;
target[((hsi*60+39)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp27;
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp26;
fp26 = inteval->BO_y[vi] * fp30;
LIBINT2_REALTYPE fp25;
fp25 = fp23 + fp26;
LIBINT2_REALTYPE fp166;
fp166 = fp85 * fp25;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp9;
target[((hsi*60+38)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_y[vi] * fp22;
LIBINT2_REALTYPE fp18;
fp18 = fp17 + fp19;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_y[vi] * fp23;
LIBINT2_REALTYPE fp20;
fp20 = fp18 + fp21;
LIBINT2_REALTYPE fp168;
fp168 = fp85 * fp20;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp10;
target[((hsi*60+37)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_y[vi] * fp18;
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_y[vi] * fp17;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp12 + fp14;
LIBINT2_REALTYPE fp15;
fp15 = fp13 + fp16;
LIBINT2_REALTYPE fp170;
fp170 = fp85 * fp15;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp11;
target[((hsi*60+36)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp172;
fp172 = fp88 * fp34;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp9;
target[((hsi*60+35)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp174;
fp174 = fp88 * fp25;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp10;
target[((hsi*60+34)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp176;
fp176 = fp88 * fp20;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp11;
target[((hsi*60+33)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp178;
fp178 = fp91 * fp34;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp10;
target[((hsi*60+32)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp180;
fp180 = fp91 * fp25;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp11;
target[((hsi*60+31)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp152;
fp152 = fp88 * fp58;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * fp5;
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
#endif
