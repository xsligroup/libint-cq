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
void CR_aB_s101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp10 * fp9;
LIBINT2_REALTYPE fp15;
fp15 = fp16 * fp0;
LIBINT2_REALTYPE fp17;
fp17 = inteval->two_alpha0_bra[vi] * fp15;
LIBINT2_REALTYPE fp60;
fp60 = inteval->two_alpha0_bra[vi] * fp17;
target[((hsi*15+14)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp10 * fp8;
LIBINT2_REALTYPE fp18;
fp18 = fp19 * fp1;
LIBINT2_REALTYPE fp20;
fp20 = inteval->two_alpha0_bra[vi] * fp18;
LIBINT2_REALTYPE fp61;
fp61 = inteval->two_alpha0_bra[vi] * fp20;
target[((hsi*15+13)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp10 * fp7;
LIBINT2_REALTYPE fp21;
fp21 = fp22 * fp2;
LIBINT2_REALTYPE fp23;
fp23 = inteval->two_alpha0_bra[vi] * fp21;
LIBINT2_REALTYPE fp62;
fp62 = inteval->two_alpha0_bra[vi] * fp23;
target[((hsi*15+12)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp10 * fp6;
LIBINT2_REALTYPE fp24;
fp24 = fp25 * fp3;
LIBINT2_REALTYPE fp26;
fp26 = inteval->two_alpha0_bra[vi] * fp24;
LIBINT2_REALTYPE fp63;
fp63 = inteval->two_alpha0_bra[vi] * fp26;
target[((hsi*15+11)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp10 * fp5;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * fp4;
LIBINT2_REALTYPE fp29;
fp29 = inteval->two_alpha0_bra[vi] * fp27;
LIBINT2_REALTYPE fp64;
fp64 = inteval->two_alpha0_bra[vi] * fp29;
target[((hsi*15+10)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp11 * fp9;
LIBINT2_REALTYPE fp30;
fp30 = fp31 * fp1;
LIBINT2_REALTYPE fp32;
fp32 = inteval->two_alpha0_bra[vi] * fp30;
LIBINT2_REALTYPE fp65;
fp65 = inteval->two_alpha0_bra[vi] * fp32;
target[((hsi*15+9)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp34;
fp34 = fp11 * fp8;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp2;
LIBINT2_REALTYPE fp35;
fp35 = inteval->two_alpha0_bra[vi] * fp33;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_bra[vi] * fp35;
target[((hsi*15+8)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp37;
fp37 = fp11 * fp7;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp3;
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_bra[vi] * fp36;
LIBINT2_REALTYPE fp67;
fp67 = inteval->two_alpha0_bra[vi] * fp38;
target[((hsi*15+7)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp40;
fp40 = fp11 * fp6;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp4;
LIBINT2_REALTYPE fp41;
fp41 = inteval->two_alpha0_bra[vi] * fp39;
LIBINT2_REALTYPE fp68;
fp68 = inteval->two_alpha0_bra[vi] * fp41;
target[((hsi*15+6)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp12 * fp9;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp2;
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_bra[vi] * fp42;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha0_bra[vi] * fp44;
target[((hsi*15+5)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp46;
fp46 = fp12 * fp8;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp3;
LIBINT2_REALTYPE fp47;
fp47 = inteval->two_alpha0_bra[vi] * fp45;
LIBINT2_REALTYPE fp70;
fp70 = inteval->two_alpha0_bra[vi] * fp47;
target[((hsi*15+4)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp49;
fp49 = fp12 * fp7;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp4;
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_bra[vi] * fp48;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_bra[vi] * fp50;
target[((hsi*15+3)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp13 * fp9;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp3;
LIBINT2_REALTYPE fp53;
fp53 = inteval->two_alpha0_bra[vi] * fp51;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_bra[vi] * fp53;
target[((hsi*15+2)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp55;
fp55 = fp13 * fp8;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp4;
LIBINT2_REALTYPE fp56;
fp56 = inteval->two_alpha0_bra[vi] * fp54;
LIBINT2_REALTYPE fp73;
fp73 = inteval->two_alpha0_bra[vi] * fp56;
target[((hsi*15+1)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp14 * fp9;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp4;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_bra[vi] * fp57;
LIBINT2_REALTYPE fp74;
fp74 = inteval->two_alpha0_bra[vi] * fp59;
target[((hsi*15+0)*1+lsi)*1] = fp74;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 75 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
