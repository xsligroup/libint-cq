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
void CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_3_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src2[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_z[vi] * fp45;
LIBINT2_REALTYPE fp43;
fp43 = fp42 + fp44;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_z[vi] * fp46;
LIBINT2_REALTYPE fp48;
fp48 = fp45 + fp49;
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_z[vi] * fp48;
LIBINT2_REALTYPE fp52;
fp52 = fp43 + fp53;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->BO_z[vi] * fp47;
LIBINT2_REALTYPE fp50;
fp50 = fp46 + fp51;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_z[vi] * fp50;
LIBINT2_REALTYPE fp54;
fp54 = fp48 + fp55;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_z[vi] * fp54;
LIBINT2_REALTYPE fp56;
fp56 = fp52 + fp57;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp70 * fp63;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp56;
target[((hsi*28+1)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_z[vi] * fp42;
LIBINT2_REALTYPE fp36;
fp36 = fp35 + fp37;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_z[vi] * fp43;
LIBINT2_REALTYPE fp38;
fp38 = fp36 + fp39;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp52;
LIBINT2_REALTYPE fp40;
fp40 = fp38 + fp41;
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp70 * fp64;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp40;
target[((hsi*28+2)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp69 * fp62;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp56;
target[((hsi*28+3)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp119;
fp119 = fp69 * fp63;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp40;
target[((hsi*28+4)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp36;
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_z[vi] * fp38;
LIBINT2_REALTYPE fp33;
fp33 = fp31 + fp34;
LIBINT2_REALTYPE fp117;
fp117 = fp69 * fp64;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp33;
target[((hsi*28+5)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp68 * fp61;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp56;
target[((hsi*28+6)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp113;
fp113 = fp68 * fp62;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp40;
target[((hsi*28+7)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = fp68 * fp63;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp33;
target[((hsi*28+8)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp28;
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp29;
LIBINT2_REALTYPE fp24;
fp24 = fp22 + fp25;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp31;
LIBINT2_REALTYPE fp26;
fp26 = fp24 + fp27;
LIBINT2_REALTYPE fp109;
fp109 = fp68 * fp64;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp26;
target[((hsi*28+9)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp67 * fp60;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp56;
target[((hsi*28+10)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp105;
fp105 = fp67 * fp61;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp40;
target[((hsi*28+11)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp103;
fp103 = fp67 * fp62;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp33;
target[((hsi*28+12)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp101;
fp101 = fp67 * fp63;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp26;
target[((hsi*28+13)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp71 * fp64;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp56;
target[((hsi*28+0)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp66 * fp59;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp56;
target[((hsi*28+15)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp95;
fp95 = fp66 * fp60;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp40;
target[((hsi*28+16)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp93;
fp93 = fp66 * fp61;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp33;
target[((hsi*28+17)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp91;
fp91 = fp66 * fp62;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp26;
target[((hsi*28+18)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp17;
fp17 = fp15 + fp18;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp19;
fp19 = fp17 + fp20;
LIBINT2_REALTYPE fp89;
fp89 = fp66 * fp63;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp19;
target[((hsi*28+19)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp14;
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp10;
fp10 = fp8 + fp11;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp12;
fp12 = fp10 + fp13;
LIBINT2_REALTYPE fp87;
fp87 = fp66 * fp64;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp12;
target[((hsi*28+20)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp65 * fp58;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp56;
target[((hsi*28+21)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp83;
fp83 = fp65 * fp59;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp40;
target[((hsi*28+22)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp81;
fp81 = fp65 * fp60;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp33;
target[((hsi*28+23)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp79;
fp79 = fp65 * fp61;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp26;
target[((hsi*28+24)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp77;
fp77 = fp65 * fp62;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp19;
target[((hsi*28+25)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp75;
fp75 = fp65 * fp63;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp12;
target[((hsi*28+26)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp5;
fp5 = fp3 + fp6;
LIBINT2_REALTYPE fp73;
fp73 = fp65 * fp64;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp5;
target[((hsi*28+27)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp99;
fp99 = fp67 * fp64;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp19;
target[((hsi*28+14)*1+lsi)*1] = fp98;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 128 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
