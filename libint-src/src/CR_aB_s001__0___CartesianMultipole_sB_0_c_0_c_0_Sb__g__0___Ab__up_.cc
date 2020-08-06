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
void CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp10 * fp9;
LIBINT2_REALTYPE fp15;
fp15 = fp16 * fp0;
LIBINT2_REALTYPE fp45;
fp45 = inteval->two_alpha0_bra[vi] * fp15;
target[((hsi*15+14)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp10 * fp8;
LIBINT2_REALTYPE fp17;
fp17 = fp18 * fp1;
LIBINT2_REALTYPE fp46;
fp46 = inteval->two_alpha0_bra[vi] * fp17;
target[((hsi*15+13)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp10 * fp7;
LIBINT2_REALTYPE fp19;
fp19 = fp20 * fp2;
LIBINT2_REALTYPE fp47;
fp47 = inteval->two_alpha0_bra[vi] * fp19;
target[((hsi*15+12)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp10 * fp6;
LIBINT2_REALTYPE fp21;
fp21 = fp22 * fp3;
LIBINT2_REALTYPE fp48;
fp48 = inteval->two_alpha0_bra[vi] * fp21;
target[((hsi*15+11)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp10 * fp5;
LIBINT2_REALTYPE fp23;
fp23 = fp24 * fp4;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha0_bra[vi] * fp23;
target[((hsi*15+10)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp11 * fp9;
LIBINT2_REALTYPE fp25;
fp25 = fp26 * fp1;
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_bra[vi] * fp25;
target[((hsi*15+9)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp28;
fp28 = fp11 * fp8;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * fp2;
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_bra[vi] * fp27;
target[((hsi*15+8)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp30;
fp30 = fp11 * fp7;
LIBINT2_REALTYPE fp29;
fp29 = fp30 * fp3;
LIBINT2_REALTYPE fp52;
fp52 = inteval->two_alpha0_bra[vi] * fp29;
target[((hsi*15+7)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp32;
fp32 = fp11 * fp6;
LIBINT2_REALTYPE fp31;
fp31 = fp32 * fp4;
LIBINT2_REALTYPE fp53;
fp53 = inteval->two_alpha0_bra[vi] * fp31;
target[((hsi*15+6)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp12 * fp9;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp2;
LIBINT2_REALTYPE fp54;
fp54 = inteval->two_alpha0_bra[vi] * fp33;
target[((hsi*15+5)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp36;
fp36 = fp12 * fp8;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp3;
LIBINT2_REALTYPE fp55;
fp55 = inteval->two_alpha0_bra[vi] * fp35;
target[((hsi*15+4)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp38;
fp38 = fp12 * fp7;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp4;
LIBINT2_REALTYPE fp56;
fp56 = inteval->two_alpha0_bra[vi] * fp37;
target[((hsi*15+3)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp13 * fp9;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp3;
LIBINT2_REALTYPE fp57;
fp57 = inteval->two_alpha0_bra[vi] * fp39;
target[((hsi*15+2)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp42;
fp42 = fp13 * fp8;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp4;
LIBINT2_REALTYPE fp58;
fp58 = inteval->two_alpha0_bra[vi] * fp41;
target[((hsi*15+1)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp14 * fp9;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp4;
LIBINT2_REALTYPE fp59;
fp59 = inteval->two_alpha0_bra[vi] * fp43;
target[((hsi*15+0)*1+lsi)*1] = fp59;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 60 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
