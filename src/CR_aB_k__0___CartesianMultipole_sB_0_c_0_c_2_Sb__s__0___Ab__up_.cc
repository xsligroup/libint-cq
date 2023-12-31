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
void CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_z[vi] * fp47;
LIBINT2_REALTYPE fp50;
fp50 = fp46 + fp51;
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_z[vi] * fp50;
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_z[vi] * fp46;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp45 + fp49;
LIBINT2_REALTYPE fp52;
fp52 = fp48 + fp53;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src0[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp82 * fp76;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp52;
target[((hsi*36+17)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp56;
LIBINT2_REALTYPE fp59;
fp59 = fp55 + fp60;
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_z[vi] * fp59;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_z[vi] * fp55;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src2[((hsi*24+5)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp54 + fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp57 + fp62;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp82 * fp75;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp61;
target[((hsi*36+16)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->BO_z[vi] * fp65;
LIBINT2_REALTYPE fp68;
fp68 = fp64 + fp69;
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_z[vi] * fp68;
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_z[vi] * fp64;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp63 + fp67;
LIBINT2_REALTYPE fp70;
fp70 = fp66 + fp71;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src1[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp82 * fp74;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp70;
target[((hsi*36+15)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_z[vi] * fp29;
LIBINT2_REALTYPE fp32;
fp32 = fp28 + fp33;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_z[vi] * fp32;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp28;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp27 + fp31;
LIBINT2_REALTYPE fp34;
fp34 = fp30 + fp35;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp83 * fp79;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp34;
target[((hsi*36+14)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = fp37 + fp42;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp41;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_z[vi] * fp37;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*24+11)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp36 + fp40;
LIBINT2_REALTYPE fp43;
fp43 = fp39 + fp44;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src1[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp83 * fp78;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp43;
target[((hsi*36+13)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp83 * fp77;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp52;
target[((hsi*36+12)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp83 * fp76;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp61;
target[((hsi*36+11)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = fp83 * fp75;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp70;
target[((hsi*36+10)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp87 * fp79;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp70;
target[((hsi*36+0)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp84 * fp78;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp52;
target[((hsi*36+8)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp84 * fp77;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp61;
target[((hsi*36+7)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp84 * fp76;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp70;
target[((hsi*36+6)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src0[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp85 * fp79;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp52;
target[((hsi*36+5)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp85 * fp78;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp61;
target[((hsi*36+4)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp85 * fp77;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp70;
target[((hsi*36+3)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src0[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp86 * fp79;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp61;
target[((hsi*36+2)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp86 * fp78;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp70;
target[((hsi*36+1)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp141;
fp141 = fp84 * fp79;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp43;
target[((hsi*36+9)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = fp1 + fp6;
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp1;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+23)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp0 + fp4;
LIBINT2_REALTYPE fp7;
fp7 = fp3 + fp8;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = fp80 * fp79;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp7;
target[((hsi*36+35)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp11;
LIBINT2_REALTYPE fp14;
fp14 = fp10 + fp15;
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_z[vi] * fp14;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp9 + fp13;
LIBINT2_REALTYPE fp16;
fp16 = fp12 + fp17;
LIBINT2_REALTYPE fp91;
fp91 = fp80 * fp78;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp16;
target[((hsi*36+34)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = fp19 + fp24;
LIBINT2_REALTYPE fp26;
fp26 = inteval->BO_z[vi] * fp23;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*24+17)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp18 + fp22;
LIBINT2_REALTYPE fp25;
fp25 = fp21 + fp26;
LIBINT2_REALTYPE fp93;
fp93 = fp80 * fp77;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp25;
target[((hsi*36+33)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp80 * fp76;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp34;
target[((hsi*36+32)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = fp80 * fp75;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp43;
target[((hsi*36+31)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = fp80 * fp74;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp52;
target[((hsi*36+30)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp80 * fp73;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp61;
target[((hsi*36+29)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp80 * fp72;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp70;
target[((hsi*36+28)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp123;
fp123 = fp82 * fp77;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp43;
target[((hsi*36+18)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src0[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp81 * fp78;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp25;
target[((hsi*36+26)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp81 * fp77;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp34;
target[((hsi*36+25)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp81 * fp76;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp43;
target[((hsi*36+24)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp81 * fp75;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp52;
target[((hsi*36+23)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp81 * fp74;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp61;
target[((hsi*36+22)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp81 * fp73;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp70;
target[((hsi*36+21)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp82 * fp79;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp25;
target[((hsi*36+20)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp82 * fp78;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp34;
target[((hsi*36+19)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp105;
fp105 = fp81 * fp79;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp16;
target[((hsi*36+27)*1+lsi)*1] = fp104;
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
