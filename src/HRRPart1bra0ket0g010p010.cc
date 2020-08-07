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
void HRRPart1bra0ket0g010p010(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, int highdim) {

LIBINT2_REALTYPE*const  stack = target;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int hsi = 0; hsi<highdim; hsi++) {
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp79;
fp79 = inteval->CD_x[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*21+7)*1+lsi)*1] + fp79;
target[((hsi*45+21)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = inteval->CD_z[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src0[((hsi*21+11)*1+lsi)*1] + fp81;
target[((hsi*45+20)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->CD_y[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*21+10)*1+lsi)*1] + fp87;
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
LIBINT2_REALTYPE fp82;
fp82 = fp84 - fp83;
target[((hsi*45+19)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp89;
fp89 = inteval->CD_x[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*21+6)*1+lsi)*1] + fp89;
target[((hsi*45+18)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = inteval->CD_z[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = src0[((hsi*21+9)*1+lsi)*1] + fp91;
target[((hsi*45+17)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = 1.0000000000000000e+00 * src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->CD_y[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = src0[((hsi*21+8)*1+lsi)*1] + fp97;
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
LIBINT2_REALTYPE fp92;
fp92 = fp94 - fp93;
target[((hsi*45+16)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp99;
fp99 = inteval->CD_x[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*21+5)*1+lsi)*1] + fp99;
target[((hsi*45+15)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = inteval->CD_z[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = src0[((hsi*21+8)*1+lsi)*1] + fp101;
target[((hsi*45+14)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
fp103 = 1.0000000000000000e+00 * src3[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = 1.0000000000000000e+00 * src2[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->CD_y[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = src0[((hsi*21+7)*1+lsi)*1] + fp107;
LIBINT2_REALTYPE fp104;
fp104 = fp106 + fp105;
LIBINT2_REALTYPE fp102;
fp102 = fp104 - fp103;
target[((hsi*45+13)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp109;
fp109 = inteval->CD_x[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*21+4)*1+lsi)*1] + fp109;
target[((hsi*45+12)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp149;
fp149 = inteval->CD_x[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = src0[((hsi*21+0)*1+lsi)*1] + fp149;
target[((hsi*45+0)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = inteval->CD_y[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src0[((hsi*21+6)*1+lsi)*1] + fp117;
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
LIBINT2_REALTYPE fp112;
fp112 = fp114 - fp113;
target[((hsi*45+10)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp119;
fp119 = inteval->CD_x[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*21+3)*1+lsi)*1] + fp119;
target[((hsi*45+9)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = inteval->CD_z[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*21+5)*1+lsi)*1] + fp121;
target[((hsi*45+8)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * src3[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 1.0000000000000000e+00 * src2[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->CD_y[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src0[((hsi*21+4)*1+lsi)*1] + fp127;
LIBINT2_REALTYPE fp124;
fp124 = fp126 + fp125;
LIBINT2_REALTYPE fp122;
fp122 = fp124 - fp123;
target[((hsi*45+7)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp129;
fp129 = inteval->CD_x[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*21+2)*1+lsi)*1] + fp129;
target[((hsi*45+6)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = inteval->CD_z[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = src0[((hsi*21+4)*1+lsi)*1] + fp131;
target[((hsi*45+5)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = 1.0000000000000000e+00 * src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = 1.0000000000000000e+00 * src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->CD_y[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = src0[((hsi*21+3)*1+lsi)*1] + fp137;
LIBINT2_REALTYPE fp134;
fp134 = fp136 + fp135;
LIBINT2_REALTYPE fp132;
fp132 = fp134 - fp133;
target[((hsi*45+4)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp139;
fp139 = inteval->CD_x[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = src0[((hsi*21+1)*1+lsi)*1] + fp139;
target[((hsi*45+3)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
fp141 = inteval->CD_z[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src0[((hsi*21+2)*1+lsi)*1] + fp141;
target[((hsi*45+2)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = 1.0000000000000000e+00 * src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = 1.0000000000000000e+00 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = inteval->CD_y[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = src0[((hsi*21+1)*1+lsi)*1] + fp147;
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
LIBINT2_REALTYPE fp142;
fp142 = fp144 - fp143;
target[((hsi*45+1)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp111;
fp111 = inteval->CD_z[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*21+7)*1+lsi)*1] + fp111;
target[((hsi*45+11)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp1;
fp1 = inteval->CD_z[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*21+20)*1+lsi)*1] + fp1;
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = 1.0000000000000000e+00 * src3[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * src2[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->CD_y[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*21+19)*1+lsi)*1] + fp7;
LIBINT2_REALTYPE fp4;
fp4 = fp6 + fp5;
LIBINT2_REALTYPE fp2;
fp2 = fp4 - fp3;
target[((hsi*45+43)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp9;
fp9 = inteval->CD_x[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*21+14)*1+lsi)*1] + fp9;
target[((hsi*45+42)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->CD_z[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src0[((hsi*21+19)*1+lsi)*1] + fp11;
target[((hsi*45+41)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
fp13 = 1.0000000000000000e+00 * src3[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 1.0000000000000000e+00 * src2[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->CD_y[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*21+18)*1+lsi)*1] + fp17;
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
LIBINT2_REALTYPE fp12;
fp12 = fp14 - fp13;
target[((hsi*45+40)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp19;
fp19 = inteval->CD_x[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*21+13)*1+lsi)*1] + fp19;
target[((hsi*45+39)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
fp21 = inteval->CD_z[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src0[((hsi*21+18)*1+lsi)*1] + fp21;
target[((hsi*45+38)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
fp23 = 1.0000000000000000e+00 * src3[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * src2[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->CD_y[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*21+17)*1+lsi)*1] + fp27;
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
LIBINT2_REALTYPE fp22;
fp22 = fp24 - fp23;
target[((hsi*45+37)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp29;
fp29 = inteval->CD_x[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*21+12)*1+lsi)*1] + fp29;
target[((hsi*45+36)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->CD_z[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*21+17)*1+lsi)*1] + fp31;
target[((hsi*45+35)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp73;
fp73 = 1.0000000000000000e+00 * src3[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->CD_y[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*21+11)*1+lsi)*1] + fp77;
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
LIBINT2_REALTYPE fp72;
fp72 = fp74 - fp73;
target[((hsi*45+22)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_x[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*21+11)*1+lsi)*1] + fp39;
target[((hsi*45+33)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->CD_z[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src0[((hsi*21+16)*1+lsi)*1] + fp41;
target[((hsi*45+32)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * src2[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->CD_y[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*21+15)*1+lsi)*1] + fp47;
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
target[((hsi*45+31)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp49;
fp49 = inteval->CD_x[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*21+10)*1+lsi)*1] + fp49;
target[((hsi*45+30)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = inteval->CD_z[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*21+14)*1+lsi)*1] + fp51;
target[((hsi*45+29)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_y[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src0[((hsi*21+13)*1+lsi)*1] + fp57;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp54 - fp53;
target[((hsi*45+28)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp59;
fp59 = inteval->CD_x[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src0[((hsi*21+9)*1+lsi)*1] + fp59;
target[((hsi*45+27)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
fp61 = inteval->CD_z[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*21+13)*1+lsi)*1] + fp61;
target[((hsi*45+26)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = 1.0000000000000000e+00 * src3[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->CD_y[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*21+12)*1+lsi)*1] + fp67;
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
LIBINT2_REALTYPE fp62;
fp62 = fp64 - fp63;
target[((hsi*45+25)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp69;
fp69 = inteval->CD_x[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*21+8)*1+lsi)*1] + fp69;
target[((hsi*45+24)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
fp71 = inteval->CD_z[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*21+12)*1+lsi)*1] + fp71;
target[((hsi*45+23)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * src3[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 1.0000000000000000e+00 * src2[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->CD_y[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*21+16)*1+lsi)*1] + fp37;
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
LIBINT2_REALTYPE fp32;
fp32 = fp34 - fp33;
target[((hsi*45+34)*1+lsi)*1] = fp32;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 150 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif