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
void CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_1_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_z[vi] * fp32;
LIBINT2_REALTYPE fp33;
fp33 = fp31 + fp34;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp247;
fp247 = fp80 * fp70;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp33;
target[((hsi*108+28)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = fp80 * fp71;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp29;
target[((hsi*108+29)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp54;
fp54 = fp52 + fp55;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp79 * fp63;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp54;
target[((hsi*108+30)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
fp241 = fp78 * fp62;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp54;
target[((hsi*108+31)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_z[vi] * fp52;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = fp49 + fp51;
LIBINT2_REALTYPE fp239;
fp239 = fp78 * fp63;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp50;
target[((hsi*108+32)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_z[vi] * fp46;
LIBINT2_REALTYPE fp47;
fp47 = fp45 + fp48;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp79 * fp65;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp47;
target[((hsi*108+33)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src1[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp78 * fp64;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp47;
target[((hsi*108+34)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp45;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp233;
fp233 = fp78 * fp65;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp43;
target[((hsi*108+35)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src2[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src2[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp39;
LIBINT2_REALTYPE fp40;
fp40 = fp38 + fp41;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src1[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp79 * fp67;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp40;
target[((hsi*108+36)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = fp78 * fp66;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp40;
target[((hsi*108+37)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp35 + fp37;
LIBINT2_REALTYPE fp227;
fp227 = fp78 * fp67;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp36;
target[((hsi*108+38)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp79 * fp69;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp33;
target[((hsi*108+39)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = fp87 * fp71;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp54;
target[((hsi*108+0)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp221;
fp221 = fp78 * fp69;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp29;
target[((hsi*108+41)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp26;
fp26 = fp24 + fp27;
LIBINT2_REALTYPE fp219;
fp219 = fp79 * fp71;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp26;
target[((hsi*108+42)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp217;
fp217 = fp78 * fp70;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp26;
target[((hsi*108+43)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp215;
fp215 = fp78 * fp71;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp22;
target[((hsi*108+44)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp77 * fp61;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp54;
target[((hsi*108+45)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src0[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp76 * fp60;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp54;
target[((hsi*108+46)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp209;
fp209 = fp76 * fp61;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp50;
target[((hsi*108+47)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp207;
fp207 = fp77 * fp63;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp47;
target[((hsi*108+48)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp205;
fp205 = fp76 * fp62;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp47;
target[((hsi*108+49)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp203;
fp203 = fp76 * fp63;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp43;
target[((hsi*108+50)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp201;
fp201 = fp77 * fp65;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp40;
target[((hsi*108+51)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp199;
fp199 = fp76 * fp64;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp40;
target[((hsi*108+52)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp197;
fp197 = fp76 * fp65;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp36;
target[((hsi*108+53)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src1[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = fp78 * fp68;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp33;
target[((hsi*108+40)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp86 * fp70;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp54;
target[((hsi*108+1)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp299;
fp299 = fp86 * fp71;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp50;
target[((hsi*108+2)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src0[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp85 * fp69;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp54;
target[((hsi*108+3)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src0[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = fp84 * fp68;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp54;
target[((hsi*108+4)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp293;
fp293 = fp84 * fp69;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp50;
target[((hsi*108+5)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp291;
fp291 = fp85 * fp71;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp47;
target[((hsi*108+6)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp289;
fp289 = fp84 * fp70;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp47;
target[((hsi*108+7)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp287;
fp287 = fp84 * fp71;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp43;
target[((hsi*108+8)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = fp83 * fp67;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp54;
target[((hsi*108+9)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src0[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = fp82 * fp66;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp54;
target[((hsi*108+10)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp281;
fp281 = fp82 * fp67;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp50;
target[((hsi*108+11)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp279;
fp279 = fp83 * fp69;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp47;
target[((hsi*108+12)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
fp249 = fp81 * fp71;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp33;
target[((hsi*108+27)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp275;
fp275 = fp82 * fp69;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp43;
target[((hsi*108+14)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp273;
fp273 = fp83 * fp71;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp40;
target[((hsi*108+15)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp271;
fp271 = fp82 * fp70;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp40;
target[((hsi*108+16)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp269;
fp269 = fp82 * fp71;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp36;
target[((hsi*108+17)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp267;
fp267 = fp81 * fp65;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp54;
target[((hsi*108+18)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp265;
fp265 = fp80 * fp64;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp54;
target[((hsi*108+19)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp263;
fp263 = fp80 * fp65;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp50;
target[((hsi*108+20)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp261;
fp261 = fp81 * fp67;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp47;
target[((hsi*108+21)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp259;
fp259 = fp80 * fp66;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp47;
target[((hsi*108+22)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp257;
fp257 = fp80 * fp67;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp43;
target[((hsi*108+23)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp255;
fp255 = fp81 * fp69;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp40;
target[((hsi*108+24)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp253;
fp253 = fp80 * fp68;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp40;
target[((hsi*108+25)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp251;
fp251 = fp80 * fp69;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp36;
target[((hsi*108+26)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp277;
fp277 = fp82 * fp68;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp47;
target[((hsi*108+13)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp12;
fp12 = fp10 + fp13;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp74 * fp70;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp12;
target[((hsi*108+82)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp137;
fp137 = fp74 * fp71;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp8;
target[((hsi*108+83)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp73 * fp57;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp54;
target[((hsi*108+84)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp72 * fp56;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp54;
target[((hsi*108+85)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp131;
fp131 = fp72 * fp57;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp50;
target[((hsi*108+86)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp73 * fp59;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp47;
target[((hsi*108+87)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp72 * fp58;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp47;
target[((hsi*108+88)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp125;
fp125 = fp72 * fp59;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp43;
target[((hsi*108+89)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp123;
fp123 = fp73 * fp61;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp40;
target[((hsi*108+90)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp121;
fp121 = fp72 * fp60;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp40;
target[((hsi*108+91)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp119;
fp119 = fp72 * fp61;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp36;
target[((hsi*108+92)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp117;
fp117 = fp73 * fp63;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp33;
target[((hsi*108+93)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp195;
fp195 = fp77 * fp67;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp33;
target[((hsi*108+54)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp113;
fp113 = fp72 * fp63;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp29;
target[((hsi*108+95)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = fp73 * fp65;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp26;
target[((hsi*108+96)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp109;
fp109 = fp72 * fp64;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp26;
target[((hsi*108+97)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp107;
fp107 = fp72 * fp65;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp22;
target[((hsi*108+98)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp19;
fp19 = fp17 + fp20;
LIBINT2_REALTYPE fp105;
fp105 = fp73 * fp67;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp19;
target[((hsi*108+99)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp103;
fp103 = fp72 * fp66;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp19;
target[((hsi*108+100)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp101;
fp101 = fp72 * fp67;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp15;
target[((hsi*108+101)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp99;
fp99 = fp73 * fp69;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp12;
target[((hsi*108+102)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp97;
fp97 = fp72 * fp68;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp12;
target[((hsi*108+103)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp95;
fp95 = fp72 * fp69;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp8;
target[((hsi*108+104)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp4;
LIBINT2_REALTYPE fp5;
fp5 = fp3 + fp6;
LIBINT2_REALTYPE fp93;
fp93 = fp73 * fp71;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp5;
target[((hsi*108+105)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp91;
fp91 = fp72 * fp70;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp5;
target[((hsi*108+106)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+23)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp89;
fp89 = fp72 * fp71;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp1;
target[((hsi*108+107)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp115;
fp115 = fp72 * fp62;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp33;
target[((hsi*108+94)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp193;
fp193 = fp76 * fp66;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp33;
target[((hsi*108+55)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp191;
fp191 = fp76 * fp67;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp29;
target[((hsi*108+56)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp189;
fp189 = fp77 * fp69;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp26;
target[((hsi*108+57)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp187;
fp187 = fp76 * fp68;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp26;
target[((hsi*108+58)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp185;
fp185 = fp76 * fp69;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp22;
target[((hsi*108+59)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp183;
fp183 = fp77 * fp71;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp19;
target[((hsi*108+60)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp181;
fp181 = fp76 * fp70;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp19;
target[((hsi*108+61)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp179;
fp179 = fp76 * fp71;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp15;
target[((hsi*108+62)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp75 * fp59;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp54;
target[((hsi*108+63)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp175;
fp175 = fp74 * fp58;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp54;
target[((hsi*108+64)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp173;
fp173 = fp74 * fp59;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp50;
target[((hsi*108+65)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp171;
fp171 = fp75 * fp61;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp47;
target[((hsi*108+66)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp141;
fp141 = fp75 * fp71;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp12;
target[((hsi*108+81)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp167;
fp167 = fp74 * fp61;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp43;
target[((hsi*108+68)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp165;
fp165 = fp75 * fp63;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp40;
target[((hsi*108+69)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp163;
fp163 = fp74 * fp62;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp40;
target[((hsi*108+70)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp161;
fp161 = fp74 * fp63;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp36;
target[((hsi*108+71)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp159;
fp159 = fp75 * fp65;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp33;
target[((hsi*108+72)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp157;
fp157 = fp74 * fp64;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp33;
target[((hsi*108+73)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp155;
fp155 = fp74 * fp65;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp29;
target[((hsi*108+74)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp153;
fp153 = fp75 * fp67;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp26;
target[((hsi*108+75)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp151;
fp151 = fp74 * fp66;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp26;
target[((hsi*108+76)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp149;
fp149 = fp74 * fp67;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp22;
target[((hsi*108+77)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp147;
fp147 = fp75 * fp69;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp19;
target[((hsi*108+78)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp145;
fp145 = fp74 * fp68;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp19;
target[((hsi*108+79)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp143;
fp143 = fp74 * fp69;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp15;
target[((hsi*108+80)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp169;
fp169 = fp74 * fp60;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp47;
target[((hsi*108+67)*1+lsi)*1] = fp168;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 304 */
}

#ifdef __cplusplus
};
#endif
