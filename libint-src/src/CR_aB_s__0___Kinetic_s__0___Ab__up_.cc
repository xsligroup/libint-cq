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
void CR_aB_s__0___Kinetic_s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp4 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp0;
fp0 = fp3 * src2[((hsi*4+3)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = src0[((hsi*4+0)*1+lsi)*1] * src1[((hsi*4+0)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp7 * fp0;
LIBINT2_REALTYPE fp1;
fp1 = fp3 * src1[((hsi*4+3)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src0[((hsi*4+0)*1+lsi)*1] * fp1;
LIBINT2_REALTYPE fp9;
fp9 = fp10 * src2[((hsi*4+0)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp3 * src0[((hsi*4+3)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp2 * src1[((hsi*4+0)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * src2[((hsi*4+0)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp11 + fp9;
LIBINT2_REALTYPE fp5;
fp5 = fp8 + fp6;
target[((hsi*1+0)*1+lsi)*1] = fp5;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 13 */
}

#ifdef __cplusplus
};
#endif