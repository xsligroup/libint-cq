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
void CR_DerivGaussP0InBra_aB_g010__0___ElecPot_s__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+19)*1+lsi)*1];
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp2;
fp2 = 1.0000000000000000e+00 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp3 - fp2;
target[((hsi*15+13)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp5;
fp5 = 2.0000000000000000e+00 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp6 - fp5;
target[((hsi*15+12)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp8;
fp8 = 3.0000000000000000e+00 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 - fp8;
target[((hsi*15+11)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp11;
fp11 = 4.0000000000000000e+00 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 - fp11;
target[((hsi*15+10)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
fp13 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+13)*1+lsi)*1];
target[((hsi*15+9)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp15;
fp15 = 1.0000000000000000e+00 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp16 - fp15;
target[((hsi*15+8)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp18;
fp18 = 2.0000000000000000e+00 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp19 - fp18;
target[((hsi*15+7)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp21;
fp21 = 3.0000000000000000e+00 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp22 - fp21;
target[((hsi*15+6)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+8)*1+lsi)*1];
target[((hsi*15+5)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
target[((hsi*15+4)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp28;
fp28 = 2.0000000000000000e+00 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp29 - fp28;
target[((hsi*15+3)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp30;
fp30 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+4)*1+lsi)*1];
target[((hsi*15+2)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp32;
fp32 = 1.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp33 - fp32;
target[((hsi*15+1)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp34;
fp34 = inteval->two_alpha0_bra[vi] * src0[((hsi*21+1)*1+lsi)*1];
target[((hsi*15+0)*1+lsi)*1] = fp34;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 35 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
