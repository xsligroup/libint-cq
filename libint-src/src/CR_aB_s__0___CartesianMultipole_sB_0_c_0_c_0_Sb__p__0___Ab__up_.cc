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
void CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*2+1)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src1[((hsi*2+0)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src0[((hsi*2+0)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp4 * fp3;
LIBINT2_REALTYPE fp6;
fp6 = fp7 * fp0;
target[((hsi*3+2)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*2+0)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src1[((hsi*2+1)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp4 * fp2;
LIBINT2_REALTYPE fp8;
fp8 = fp9 * fp1;
target[((hsi*3+1)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src0[((hsi*2+1)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp5 * fp3;
LIBINT2_REALTYPE fp10;
fp10 = fp11 * fp1;
target[((hsi*3+0)*1+lsi)*1] = fp10;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 12 */
}

#ifdef __cplusplus
};
#endif