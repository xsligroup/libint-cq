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
void CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_1_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp17;
fp17 = fp15 + fp18;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_y[vi] * fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp31 + fp33;
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_x[vi] * fp50;
LIBINT2_REALTYPE fp51;
fp51 = fp54 + fp52;
LIBINT2_REALTYPE fp96;
fp96 = fp51 * fp32;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp17;
target[((hsi*21+1)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp13;
fp13 = fp12 + fp14;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp35;
LIBINT2_REALTYPE fp36;
fp36 = fp34 + fp37;
LIBINT2_REALTYPE fp94;
fp94 = fp51 * fp36;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp13;
target[((hsi*21+2)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_y[vi] * fp31;
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_x[vi] * fp47;
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
LIBINT2_REALTYPE fp92;
fp92 = fp48 * fp29;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp17;
target[((hsi*21+3)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp90;
fp90 = fp48 * fp32;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp13;
target[((hsi*21+4)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp10;
fp10 = fp9 + fp11;
LIBINT2_REALTYPE fp88;
fp88 = fp48 * fp36;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp10;
target[((hsi*21+5)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->BO_x[vi] * fp44;
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_y[vi] * fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp25 + fp27;
LIBINT2_REALTYPE fp86;
fp86 = fp45 * fp26;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp17;
target[((hsi*21+6)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp84;
fp84 = fp45 * fp29;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp13;
target[((hsi*21+7)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp82;
fp82 = fp45 * fp32;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp10;
target[((hsi*21+8)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp9;
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp80;
fp80 = fp45 * fp36;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp7;
target[((hsi*21+9)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp56;
fp56 = inteval->BO_x[vi] * fp54;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp53 + fp56;
LIBINT2_REALTYPE fp98;
fp98 = fp55 * fp36;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp17;
target[((hsi*21+0)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_x[vi] * fp41;
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
LIBINT2_REALTYPE fp76;
fp76 = fp42 * fp26;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp13;
target[((hsi*21+11)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp74;
fp74 = fp42 * fp29;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp10;
target[((hsi*21+12)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp72;
fp72 = fp42 * fp32;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp7;
target[((hsi*21+13)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp3 + fp5;
LIBINT2_REALTYPE fp70;
fp70 = fp42 * fp36;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp4;
target[((hsi*21+14)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_x[vi] * fp38;
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_y[vi] * fp22;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp19 + fp21;
LIBINT2_REALTYPE fp68;
fp68 = fp39 * fp20;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp17;
target[((hsi*21+15)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp25;
LIBINT2_REALTYPE fp23;
fp23 = fp22 + fp24;
LIBINT2_REALTYPE fp66;
fp66 = fp39 * fp23;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp13;
target[((hsi*21+16)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp64;
fp64 = fp39 * fp26;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp10;
target[((hsi*21+17)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp62;
fp62 = fp39 * fp29;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp7;
target[((hsi*21+18)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp60;
fp60 = fp39 * fp32;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp4;
target[((hsi*21+19)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp58;
fp58 = fp39 * fp36;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp1;
target[((hsi*21+20)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp78;
fp78 = fp42 * fp23;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp17;
target[((hsi*21+10)*1+lsi)*1] = fp77;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 99 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
