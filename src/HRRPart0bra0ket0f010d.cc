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
void HRRPart0bra0ket0f010d(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp81;
fp81 = inteval->AB_z[vi] * src1[((hsi*30+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src0[((hsi*45+26)*lowdim+lsi)*1] + fp81;
target[((hsi*60+29)*lowdim+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = inteval->AB_z[vi] * src1[((hsi*30+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src0[((hsi*45+25)*lowdim+lsi)*1] + fp83;
target[((hsi*60+28)*lowdim+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * src2[((hsi*30+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->AB_y[vi] * src1[((hsi*30+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*45+22)*lowdim+lsi)*1] + fp87;
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
target[((hsi*60+27)*lowdim+lsi)*1] = fp84;
LIBINT2_REALTYPE fp89;
fp89 = inteval->AB_z[vi] * src1[((hsi*30+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*45+24)*lowdim+lsi)*1] + fp89;
target[((hsi*60+26)*lowdim+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * src2[((hsi*30+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->AB_y[vi] * src1[((hsi*30+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*45+21)*lowdim+lsi)*1] + fp93;
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
target[((hsi*60+25)*lowdim+lsi)*1] = fp90;
LIBINT2_REALTYPE fp95;
fp95 = inteval->AB_x[vi] * src1[((hsi*30+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = src0[((hsi*45+12)*lowdim+lsi)*1] + fp95;
target[((hsi*60+24)*lowdim+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = inteval->AB_z[vi] * src1[((hsi*30+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = src0[((hsi*45+23)*lowdim+lsi)*1] + fp97;
target[((hsi*60+23)*lowdim+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = inteval->AB_z[vi] * src1[((hsi*30+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*45+22)*lowdim+lsi)*1] + fp99;
target[((hsi*60+22)*lowdim+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * src2[((hsi*30+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->AB_y[vi] * src1[((hsi*30+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*45+19)*lowdim+lsi)*1] + fp103;
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
target[((hsi*60+21)*lowdim+lsi)*1] = fp100;
LIBINT2_REALTYPE fp105;
fp105 = inteval->AB_z[vi] * src1[((hsi*30+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src0[((hsi*45+21)*lowdim+lsi)*1] + fp105;
target[((hsi*60+20)*lowdim+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = 1.0000000000000000e+00 * src2[((hsi*30+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->AB_y[vi] * src1[((hsi*30+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*45+18)*lowdim+lsi)*1] + fp109;
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
target[((hsi*60+19)*lowdim+lsi)*1] = fp106;
LIBINT2_REALTYPE fp111;
fp111 = inteval->AB_x[vi] * src1[((hsi*30+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*45+9)*lowdim+lsi)*1] + fp111;
target[((hsi*60+18)*lowdim+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = inteval->AB_z[vi] * src1[((hsi*30+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = src0[((hsi*45+17)*lowdim+lsi)*1] + fp113;
target[((hsi*60+17)*lowdim+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = inteval->AB_z[vi] * src1[((hsi*30+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = src0[((hsi*45+16)*lowdim+lsi)*1] + fp115;
target[((hsi*60+16)*lowdim+lsi)*1] = fp114;
LIBINT2_REALTYPE fp159;
fp159 = inteval->AB_x[vi] * src1[((hsi*30+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*45+0)*lowdim+lsi)*1] + fp159;
target[((hsi*60+0)*lowdim+lsi)*1] = fp158;
LIBINT2_REALTYPE fp121;
fp121 = inteval->AB_z[vi] * src1[((hsi*30+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*45+15)*lowdim+lsi)*1] + fp121;
target[((hsi*60+14)*lowdim+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * src2[((hsi*30+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->AB_y[vi] * src1[((hsi*30+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*45+12)*lowdim+lsi)*1] + fp125;
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
target[((hsi*60+13)*lowdim+lsi)*1] = fp122;
LIBINT2_REALTYPE fp127;
fp127 = inteval->AB_x[vi] * src1[((hsi*30+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src0[((hsi*45+6)*lowdim+lsi)*1] + fp127;
target[((hsi*60+12)*lowdim+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = inteval->AB_z[vi] * src1[((hsi*30+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*45+14)*lowdim+lsi)*1] + fp129;
target[((hsi*60+11)*lowdim+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = inteval->AB_z[vi] * src1[((hsi*30+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = src0[((hsi*45+13)*lowdim+lsi)*1] + fp131;
target[((hsi*60+10)*lowdim+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = 1.0000000000000000e+00 * src2[((hsi*30+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->AB_y[vi] * src1[((hsi*30+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = src0[((hsi*45+10)*lowdim+lsi)*1] + fp135;
LIBINT2_REALTYPE fp132;
fp132 = fp134 + fp133;
target[((hsi*60+9)*lowdim+lsi)*1] = fp132;
LIBINT2_REALTYPE fp137;
fp137 = inteval->AB_z[vi] * src1[((hsi*30+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = src0[((hsi*45+12)*lowdim+lsi)*1] + fp137;
target[((hsi*60+8)*lowdim+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = 1.0000000000000000e+00 * src2[((hsi*30+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->AB_y[vi] * src1[((hsi*30+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src0[((hsi*45+9)*lowdim+lsi)*1] + fp141;
LIBINT2_REALTYPE fp138;
fp138 = fp140 + fp139;
target[((hsi*60+7)*lowdim+lsi)*1] = fp138;
LIBINT2_REALTYPE fp143;
fp143 = inteval->AB_x[vi] * src1[((hsi*30+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = src0[((hsi*45+3)*lowdim+lsi)*1] + fp143;
target[((hsi*60+6)*lowdim+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = inteval->AB_z[vi] * src1[((hsi*30+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*45+8)*lowdim+lsi)*1] + fp145;
target[((hsi*60+5)*lowdim+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = inteval->AB_z[vi] * src1[((hsi*30+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = src0[((hsi*45+7)*lowdim+lsi)*1] + fp147;
target[((hsi*60+4)*lowdim+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = 1.0000000000000000e+00 * src2[((hsi*30+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->AB_y[vi] * src1[((hsi*30+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = src0[((hsi*45+4)*lowdim+lsi)*1] + fp151;
LIBINT2_REALTYPE fp148;
fp148 = fp150 + fp149;
target[((hsi*60+3)*lowdim+lsi)*1] = fp148;
LIBINT2_REALTYPE fp153;
fp153 = inteval->AB_z[vi] * src1[((hsi*30+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*45+6)*lowdim+lsi)*1] + fp153;
target[((hsi*60+2)*lowdim+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = 1.0000000000000000e+00 * src2[((hsi*30+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->AB_y[vi] * src1[((hsi*30+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = src0[((hsi*45+3)*lowdim+lsi)*1] + fp157;
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
target[((hsi*60+1)*lowdim+lsi)*1] = fp154;
LIBINT2_REALTYPE fp117;
fp117 = 1.0000000000000000e+00 * src2[((hsi*30+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->AB_y[vi] * src1[((hsi*30+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*45+13)*lowdim+lsi)*1] + fp119;
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
target[((hsi*60+15)*lowdim+lsi)*1] = fp116;
LIBINT2_REALTYPE fp1;
fp1 = inteval->AB_z[vi] * src1[((hsi*30+29)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*45+44)*lowdim+lsi)*1] + fp1;
target[((hsi*60+59)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->AB_z[vi] * src1[((hsi*30+28)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*45+43)*lowdim+lsi)*1] + fp3;
target[((hsi*60+58)*lowdim+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * src2[((hsi*30+28)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->AB_y[vi] * src1[((hsi*30+28)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*45+40)*lowdim+lsi)*1] + fp7;
LIBINT2_REALTYPE fp4;
fp4 = fp6 + fp5;
target[((hsi*60+57)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp9;
fp9 = inteval->AB_z[vi] * src1[((hsi*30+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*45+42)*lowdim+lsi)*1] + fp9;
target[((hsi*60+56)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * src2[((hsi*30+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->AB_y[vi] * src1[((hsi*30+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*45+39)*lowdim+lsi)*1] + fp13;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*60+55)*lowdim+lsi)*1] = fp10;
LIBINT2_REALTYPE fp15;
fp15 = inteval->AB_x[vi] * src1[((hsi*30+27)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*45+27)*lowdim+lsi)*1] + fp15;
target[((hsi*60+54)*lowdim+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->AB_z[vi] * src1[((hsi*30+26)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*45+41)*lowdim+lsi)*1] + fp17;
target[((hsi*60+53)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->AB_z[vi] * src1[((hsi*30+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*45+40)*lowdim+lsi)*1] + fp19;
target[((hsi*60+52)*lowdim+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
fp21 = 1.0000000000000000e+00 * src2[((hsi*30+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->AB_y[vi] * src1[((hsi*30+25)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*45+37)*lowdim+lsi)*1] + fp23;
LIBINT2_REALTYPE fp20;
fp20 = fp22 + fp21;
target[((hsi*60+51)*lowdim+lsi)*1] = fp20;
LIBINT2_REALTYPE fp25;
fp25 = inteval->AB_z[vi] * src1[((hsi*30+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src0[((hsi*45+39)*lowdim+lsi)*1] + fp25;
target[((hsi*60+50)*lowdim+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * src2[((hsi*30+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->AB_y[vi] * src1[((hsi*30+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*45+36)*lowdim+lsi)*1] + fp29;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*60+49)*lowdim+lsi)*1] = fp26;
LIBINT2_REALTYPE fp31;
fp31 = inteval->AB_x[vi] * src1[((hsi*30+24)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*45+24)*lowdim+lsi)*1] + fp31;
target[((hsi*60+48)*lowdim+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->AB_z[vi] * src1[((hsi*30+23)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*45+38)*lowdim+lsi)*1] + fp33;
target[((hsi*60+47)*lowdim+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->AB_z[vi] * src1[((hsi*30+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*45+37)*lowdim+lsi)*1] + fp35;
target[((hsi*60+46)*lowdim+lsi)*1] = fp34;
LIBINT2_REALTYPE fp79;
fp79 = inteval->AB_x[vi] * src1[((hsi*30+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*45+15)*lowdim+lsi)*1] + fp79;
target[((hsi*60+30)*lowdim+lsi)*1] = fp78;
LIBINT2_REALTYPE fp41;
fp41 = inteval->AB_z[vi] * src1[((hsi*30+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src0[((hsi*45+36)*lowdim+lsi)*1] + fp41;
target[((hsi*60+44)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * src2[((hsi*30+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->AB_y[vi] * src1[((hsi*30+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*45+33)*lowdim+lsi)*1] + fp45;
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
target[((hsi*60+43)*lowdim+lsi)*1] = fp42;
LIBINT2_REALTYPE fp47;
fp47 = inteval->AB_x[vi] * src1[((hsi*30+21)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*45+21)*lowdim+lsi)*1] + fp47;
target[((hsi*60+42)*lowdim+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->AB_z[vi] * src1[((hsi*30+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*45+35)*lowdim+lsi)*1] + fp49;
target[((hsi*60+41)*lowdim+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = inteval->AB_z[vi] * src1[((hsi*30+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*45+34)*lowdim+lsi)*1] + fp51;
target[((hsi*60+40)*lowdim+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * src2[((hsi*30+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->AB_y[vi] * src1[((hsi*30+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*45+31)*lowdim+lsi)*1] + fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
target[((hsi*60+39)*lowdim+lsi)*1] = fp52;
LIBINT2_REALTYPE fp57;
fp57 = inteval->AB_z[vi] * src1[((hsi*30+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src0[((hsi*45+33)*lowdim+lsi)*1] + fp57;
target[((hsi*60+38)*lowdim+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * src2[((hsi*30+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->AB_y[vi] * src1[((hsi*30+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*45+30)*lowdim+lsi)*1] + fp61;
LIBINT2_REALTYPE fp58;
fp58 = fp60 + fp59;
target[((hsi*60+37)*lowdim+lsi)*1] = fp58;
LIBINT2_REALTYPE fp63;
fp63 = inteval->AB_x[vi] * src1[((hsi*30+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*45+18)*lowdim+lsi)*1] + fp63;
target[((hsi*60+36)*lowdim+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
fp65 = inteval->AB_z[vi] * src1[((hsi*30+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = src0[((hsi*45+29)*lowdim+lsi)*1] + fp65;
target[((hsi*60+35)*lowdim+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
fp67 = inteval->AB_z[vi] * src1[((hsi*30+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*45+28)*lowdim+lsi)*1] + fp67;
target[((hsi*60+34)*lowdim+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
fp69 = 1.0000000000000000e+00 * src2[((hsi*30+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->AB_y[vi] * src1[((hsi*30+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*45+25)*lowdim+lsi)*1] + fp71;
LIBINT2_REALTYPE fp68;
fp68 = fp70 + fp69;
target[((hsi*60+33)*lowdim+lsi)*1] = fp68;
LIBINT2_REALTYPE fp73;
fp73 = inteval->AB_z[vi] * src1[((hsi*30+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = src0[((hsi*45+27)*lowdim+lsi)*1] + fp73;
target[((hsi*60+32)*lowdim+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * src2[((hsi*30+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->AB_y[vi] * src1[((hsi*30+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*45+24)*lowdim+lsi)*1] + fp77;
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
target[((hsi*60+31)*lowdim+lsi)*1] = fp74;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * src2[((hsi*30+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->AB_y[vi] * src1[((hsi*30+22)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*45+34)*lowdim+lsi)*1] + fp39;
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
target[((hsi*60+45)*lowdim+lsi)*1] = fp36;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 160 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
