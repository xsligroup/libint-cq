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
void CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_x[vi] * fp31;
LIBINT2_REALTYPE fp32;
fp32 = fp36 + fp33;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_x[vi] * fp26;
LIBINT2_REALTYPE fp27;
fp27 = fp31 + fp28;
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_x[vi] * fp27;
LIBINT2_REALTYPE fp29;
fp29 = fp32 + fp30;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp29 * fp12;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp5;
target[((hsi*36+17)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp29 * fp11;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp6;
target[((hsi*36+16)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp29 * fp10;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp7;
target[((hsi*36+15)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_x[vi] * fp36;
LIBINT2_REALTYPE fp37;
fp37 = fp41 + fp38;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_x[vi] * fp32;
LIBINT2_REALTYPE fp34;
fp34 = fp37 + fp35;
LIBINT2_REALTYPE fp103;
fp103 = fp34 * fp15;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp3;
target[((hsi*36+14)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp34 * fp14;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp4;
target[((hsi*36+13)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp34 * fp13;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp5;
target[((hsi*36+12)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp34 * fp12;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp6;
target[((hsi*36+11)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp34 * fp11;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp7;
target[((hsi*36+10)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_x[vi] * fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp52 + fp57;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_x[vi] * fp56;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_x[vi] * fp52;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp51 + fp55;
LIBINT2_REALTYPE fp58;
fp58 = fp54 + fp59;
LIBINT2_REALTYPE fp131;
fp131 = fp58 * fp15;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp7;
target[((hsi*36+0)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_x[vi] * fp41;
LIBINT2_REALTYPE fp42;
fp42 = fp46 + fp43;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_x[vi] * fp37;
LIBINT2_REALTYPE fp39;
fp39 = fp42 + fp40;
LIBINT2_REALTYPE fp115;
fp115 = fp39 * fp14;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp5;
target[((hsi*36+8)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp39 * fp13;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp6;
target[((hsi*36+7)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp39 * fp12;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp7;
target[((hsi*36+6)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_x[vi] * fp46;
LIBINT2_REALTYPE fp47;
fp47 = fp53 + fp48;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_x[vi] * fp42;
LIBINT2_REALTYPE fp44;
fp44 = fp47 + fp45;
LIBINT2_REALTYPE fp121;
fp121 = fp44 * fp15;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp5;
target[((hsi*36+5)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp44 * fp14;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp6;
target[((hsi*36+4)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp44 * fp13;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp7;
target[((hsi*36+3)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_x[vi] * fp47;
LIBINT2_REALTYPE fp49;
fp49 = fp56 + fp50;
LIBINT2_REALTYPE fp127;
fp127 = fp49 * fp15;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp6;
target[((hsi*36+2)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp49 * fp14;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp7;
target[((hsi*36+1)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp113;
fp113 = fp39 * fp15;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp4;
target[((hsi*36+9)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_x[vi] * fp21;
LIBINT2_REALTYPE fp22;
fp22 = fp26 + fp23;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_x[vi] * fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp21 + fp18;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_x[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = fp22 + fp20;
LIBINT2_REALTYPE fp61;
fp61 = fp19 * fp15;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp0;
target[((hsi*36+35)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp19 * fp14;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp1;
target[((hsi*36+34)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp19 * fp13;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp2;
target[((hsi*36+33)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
fp67 = fp19 * fp12;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp3;
target[((hsi*36+32)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp19 * fp11;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp4;
target[((hsi*36+31)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
fp71 = fp19 * fp10;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp5;
target[((hsi*36+30)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp19 * fp9;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp6;
target[((hsi*36+29)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp19 * fp8;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp7;
target[((hsi*36+28)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp95;
fp95 = fp29 * fp13;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp4;
target[((hsi*36+18)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_x[vi] * fp22;
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
LIBINT2_REALTYPE fp79;
fp79 = fp24 * fp14;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp2;
target[((hsi*36+26)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = fp24 * fp13;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp3;
target[((hsi*36+25)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = fp24 * fp12;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp4;
target[((hsi*36+24)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp24 * fp11;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp5;
target[((hsi*36+23)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = fp24 * fp10;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp6;
target[((hsi*36+22)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp24 * fp9;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp7;
target[((hsi*36+21)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp29 * fp15;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp2;
target[((hsi*36+20)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = fp29 * fp14;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp3;
target[((hsi*36+19)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp77;
fp77 = fp24 * fp15;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp1;
target[((hsi*36+27)*1+lsi)*1] = fp76;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 132 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
