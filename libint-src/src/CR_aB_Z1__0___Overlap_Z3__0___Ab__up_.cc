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
extern "C" {
#endif
void CR_aB_Z1__0___Overlap_Z3__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*8+0)*1+lsi)*1] = inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp14;
fp14 = inteval->oo2z[vi] * target[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->PB_z[vi] * target[((hsi*8+0)*1+lsi)*1];
target[((hsi*8+1)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp15;
fp15 = inteval->PB_z[vi] * target[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
target[((hsi*8+2)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp11;
fp11 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * target[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->PB_z[vi] * target[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp12 + fp10;
target[((hsi*8+3)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp2;
fp2 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->PA_z[vi] * target[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*8+7)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * target[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp5 + fp10;
target[((hsi*8+6)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
fp7 = inteval->PA_z[vi] * target[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp7 + fp14;
target[((hsi*8+5)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp8;
fp8 = inteval->PA_z[vi] * target[((hsi*8+0)*1+lsi)*1];
target[((hsi*8+4)*1+lsi)*1] = fp8;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 17 */
}

#ifdef __cplusplus
};
#endif
