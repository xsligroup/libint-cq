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
void CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src0[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp19 * fp12;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp6;
LIBINT2_REALTYPE fp103;
fp103 = inteval->two_alpha0_bra[vi] * fp73;
target[((hsi*28+1)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp19 * fp13;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp5;
LIBINT2_REALTYPE fp102;
fp102 = inteval->two_alpha0_bra[vi] * fp71;
target[((hsi*28+2)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp18 * fp11;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp6;
LIBINT2_REALTYPE fp101;
fp101 = inteval->two_alpha0_bra[vi] * fp69;
target[((hsi*28+3)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp68;
fp68 = fp18 * fp12;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp5;
LIBINT2_REALTYPE fp100;
fp100 = inteval->two_alpha0_bra[vi] * fp67;
target[((hsi*28+4)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp18 * fp13;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp4;
LIBINT2_REALTYPE fp99;
fp99 = inteval->two_alpha0_bra[vi] * fp65;
target[((hsi*28+5)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp17 * fp10;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp6;
LIBINT2_REALTYPE fp98;
fp98 = inteval->two_alpha0_bra[vi] * fp63;
target[((hsi*28+6)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp62;
fp62 = fp17 * fp11;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp5;
LIBINT2_REALTYPE fp97;
fp97 = inteval->two_alpha0_bra[vi] * fp61;
target[((hsi*28+7)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp60;
fp60 = fp17 * fp12;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp4;
LIBINT2_REALTYPE fp96;
fp96 = inteval->two_alpha0_bra[vi] * fp59;
target[((hsi*28+8)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp17 * fp13;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp3;
LIBINT2_REALTYPE fp95;
fp95 = inteval->two_alpha0_bra[vi] * fp57;
target[((hsi*28+9)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp16 * fp9;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp6;
LIBINT2_REALTYPE fp94;
fp94 = inteval->two_alpha0_bra[vi] * fp55;
target[((hsi*28+10)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp54;
fp54 = fp16 * fp10;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp5;
LIBINT2_REALTYPE fp93;
fp93 = inteval->two_alpha0_bra[vi] * fp53;
target[((hsi*28+11)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp52;
fp52 = fp16 * fp11;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp4;
LIBINT2_REALTYPE fp92;
fp92 = inteval->two_alpha0_bra[vi] * fp51;
target[((hsi*28+12)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp50;
fp50 = fp16 * fp12;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp3;
LIBINT2_REALTYPE fp91;
fp91 = inteval->two_alpha0_bra[vi] * fp49;
target[((hsi*28+13)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src0[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp20 * fp13;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp6;
LIBINT2_REALTYPE fp104;
fp104 = inteval->two_alpha0_bra[vi] * fp75;
target[((hsi*28+0)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*14+12)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp15 * fp8;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp6;
LIBINT2_REALTYPE fp89;
fp89 = inteval->two_alpha0_bra[vi] * fp45;
target[((hsi*28+15)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp44;
fp44 = fp15 * fp9;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp5;
LIBINT2_REALTYPE fp88;
fp88 = inteval->two_alpha0_bra[vi] * fp43;
target[((hsi*28+16)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp42;
fp42 = fp15 * fp10;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp4;
LIBINT2_REALTYPE fp87;
fp87 = inteval->two_alpha0_bra[vi] * fp41;
target[((hsi*28+17)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp40;
fp40 = fp15 * fp11;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp3;
LIBINT2_REALTYPE fp86;
fp86 = inteval->two_alpha0_bra[vi] * fp39;
target[((hsi*28+18)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp15 * fp12;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp2;
LIBINT2_REALTYPE fp85;
fp85 = inteval->two_alpha0_bra[vi] * fp37;
target[((hsi*28+19)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp15 * fp13;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp1;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_bra[vi] * fp35;
target[((hsi*28+20)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*14+13)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp14 * fp7;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp6;
LIBINT2_REALTYPE fp83;
fp83 = inteval->two_alpha0_bra[vi] * fp33;
target[((hsi*28+21)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp32;
fp32 = fp14 * fp8;
LIBINT2_REALTYPE fp31;
fp31 = fp32 * fp5;
LIBINT2_REALTYPE fp82;
fp82 = inteval->two_alpha0_bra[vi] * fp31;
target[((hsi*28+22)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp30;
fp30 = fp14 * fp9;
LIBINT2_REALTYPE fp29;
fp29 = fp30 * fp4;
LIBINT2_REALTYPE fp81;
fp81 = inteval->two_alpha0_bra[vi] * fp29;
target[((hsi*28+23)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp28;
fp28 = fp14 * fp10;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * fp3;
LIBINT2_REALTYPE fp80;
fp80 = inteval->two_alpha0_bra[vi] * fp27;
target[((hsi*28+24)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp26;
fp26 = fp14 * fp11;
LIBINT2_REALTYPE fp25;
fp25 = fp26 * fp2;
LIBINT2_REALTYPE fp79;
fp79 = inteval->two_alpha0_bra[vi] * fp25;
target[((hsi*28+25)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp24;
fp24 = fp14 * fp12;
LIBINT2_REALTYPE fp23;
fp23 = fp24 * fp1;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_bra[vi] * fp23;
target[((hsi*28+26)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp14 * fp13;
LIBINT2_REALTYPE fp21;
fp21 = fp22 * fp0;
LIBINT2_REALTYPE fp77;
fp77 = inteval->two_alpha0_bra[vi] * fp21;
target[((hsi*28+27)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp48;
fp48 = fp16 * fp13;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp2;
LIBINT2_REALTYPE fp90;
fp90 = inteval->two_alpha0_bra[vi] * fp47;
target[((hsi*28+14)*1+lsi)*1] = fp90;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 105 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
