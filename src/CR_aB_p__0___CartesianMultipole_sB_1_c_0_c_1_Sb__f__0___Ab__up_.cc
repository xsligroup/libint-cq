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
void CR_aB_p__0___CartesianMultipole_sB_1_c_0_c_1_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp23;
LIBINT2_REALTYPE fp24;
fp24 = fp22 + fp25;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src0[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_x[vi] * fp53;
LIBINT2_REALTYPE fp54;
fp54 = fp57 + fp55;
LIBINT2_REALTYPE fp117;
fp117 = fp54 * fp32;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp24;
target[((hsi*30+1)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp19 + fp21;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp54 * fp33;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp20;
target[((hsi*30+2)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_x[vi] * fp50;
LIBINT2_REALTYPE fp51;
fp51 = fp53 + fp52;
LIBINT2_REALTYPE fp113;
fp113 = fp51 * fp31;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp24;
target[((hsi*30+3)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = fp51 * fp32;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp20;
target[((hsi*30+4)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp17;
fp17 = fp16 + fp18;
LIBINT2_REALTYPE fp109;
fp109 = fp51 * fp33;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp17;
target[((hsi*30+5)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_x[vi] * fp47;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = fp48 * fp30;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp24;
target[((hsi*30+6)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp105;
fp105 = fp48 * fp31;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp20;
target[((hsi*30+7)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp103;
fp103 = fp48 * fp32;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp17;
target[((hsi*30+8)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp13 + fp15;
LIBINT2_REALTYPE fp101;
fp101 = fp48 * fp33;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp14;
target[((hsi*30+9)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_x[vi] * fp44;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp43 + fp46;
LIBINT2_REALTYPE fp99;
fp99 = fp45 * fp29;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp24;
target[((hsi*30+10)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_x[vi] * fp40;
LIBINT2_REALTYPE fp41;
fp41 = fp44 + fp42;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp41 * fp28;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp24;
target[((hsi*30+11)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp95;
fp95 = fp41 * fp29;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp20;
target[((hsi*30+12)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_x[vi] * fp37;
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp38 * fp27;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp24;
target[((hsi*30+13)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp91;
fp91 = fp38 * fp28;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp20;
target[((hsi*30+14)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_x[vi] * fp57;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp56 + fp59;
LIBINT2_REALTYPE fp119;
fp119 = fp58 * fp33;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp24;
target[((hsi*30+0)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_x[vi] * fp34;
LIBINT2_REALTYPE fp35;
fp35 = fp37 + fp36;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp35 * fp26;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp24;
target[((hsi*30+16)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp85;
fp85 = fp35 * fp27;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp20;
target[((hsi*30+17)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp83;
fp83 = fp35 * fp28;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp17;
target[((hsi*30+18)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp81;
fp81 = fp35 * fp29;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp14;
target[((hsi*30+19)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp11;
fp11 = fp9 + fp12;
LIBINT2_REALTYPE fp79;
fp79 = fp45 * fp33;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp11;
target[((hsi*30+20)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp77;
fp77 = fp41 * fp32;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp11;
target[((hsi*30+21)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp9;
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp75;
fp75 = fp41 * fp33;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp7;
target[((hsi*30+22)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp73;
fp73 = fp38 * fp31;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp11;
target[((hsi*30+23)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp71;
fp71 = fp38 * fp32;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp7;
target[((hsi*30+24)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp3 + fp5;
LIBINT2_REALTYPE fp69;
fp69 = fp38 * fp33;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp4;
target[((hsi*30+25)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp67;
fp67 = fp35 * fp30;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp11;
target[((hsi*30+26)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp65;
fp65 = fp35 * fp31;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp7;
target[((hsi*30+27)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp63;
fp63 = fp35 * fp32;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp4;
target[((hsi*30+28)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp61;
fp61 = fp35 * fp33;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp1;
target[((hsi*30+29)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp89;
fp89 = fp38 * fp29;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp17;
target[((hsi*30+15)*1+lsi)*1] = fp88;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 120 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
