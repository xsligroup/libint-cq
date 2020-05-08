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
void CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*4+1)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*4+1)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*4+0)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_y[vi] * fp6;
LIBINT2_REALTYPE fp7;
fp7 = fp5 + fp8;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*4+1)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src0[((hsi*4+0)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_x[vi] * fp9;
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp17;
fp17 = fp10 * fp7;
LIBINT2_REALTYPE fp16;
fp16 = fp17 * fp0;
target[((hsi*3+2)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*4+0)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_y[vi] * fp5;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src1[((hsi*4+2)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp2 + fp4;
LIBINT2_REALTYPE fp19;
fp19 = fp10 * fp3;
LIBINT2_REALTYPE fp18;
fp18 = fp19 * fp1;
target[((hsi*3+1)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_x[vi] * fp13;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*4+2)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp12 + fp15;
LIBINT2_REALTYPE fp21;
fp21 = fp14 * fp7;
LIBINT2_REALTYPE fp20;
fp20 = fp21 * fp1;
target[((hsi*3+0)*1+lsi)*1] = fp20;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 22 */
}

#ifdef __cplusplus
};
#endif