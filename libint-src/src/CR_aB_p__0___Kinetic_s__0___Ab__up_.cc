/*
 *  Copyright (C) 2004-2018 Edward F. Valeev
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
extern "C" {
#endif
void CR_aB_p__0___Kinetic_s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp11;
fp11 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp11 * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp2;
fp2 = fp13 * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp2 - fp1;
LIBINT2_REALTYPE fp17;
fp17 = src0[((hsi*6+0)*1+lsi)*1] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp17 * fp0;
LIBINT2_REALTYPE fp7;
fp7 = fp13 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src0[((hsi*6+0)*1+lsi)*1] * fp7;
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp13 * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp8 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp21 + fp19;
LIBINT2_REALTYPE fp15;
fp15 = fp18 + fp16;
target[((hsi*3+2)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp3;
fp3 = fp13 * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = src0[((hsi*6+0)*1+lsi)*1] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp25 * fp3;
LIBINT2_REALTYPE fp5;
fp5 = fp11 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp13 * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp6 - fp5;
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*6+0)*1+lsi)*1] * fp4;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp8 * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp29 + fp27;
LIBINT2_REALTYPE fp23;
fp23 = fp26 + fp24;
target[((hsi*3+1)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp33;
fp33 = src0[((hsi*6+2)*1+lsi)*1] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp3;
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*6+2)*1+lsi)*1] * fp7;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp13 * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp12 - fp10;
LIBINT2_REALTYPE fp38;
fp38 = fp9 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp37 + fp35;
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
target[((hsi*3+0)*1+lsi)*1] = fp31;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 39 */
}

#ifdef __cplusplus
};
#endif
