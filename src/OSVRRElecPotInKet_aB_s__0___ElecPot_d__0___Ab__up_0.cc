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
void OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp19;
fp19 = src2[((hsi*1+0)*1+lsi)*1] - src3[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->oo2z[vi] * fp19;
LIBINT2_REALTYPE fp2;
fp2 = inteval->PC_z[vi] * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->PB_z[vi] * src0[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp3 - fp2;
LIBINT2_REALTYPE fp0;
fp0 = fp1 + fp18;
target[((hsi*6+5)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PC_z[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PB_z[vi] * src0[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp6 - fp5;
target[((hsi*6+4)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp9;
fp9 = inteval->PC_y[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->PB_y[vi] * src0[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp10 - fp9;
LIBINT2_REALTYPE fp7;
fp7 = fp8 + fp18;
target[((hsi*6+3)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp12;
fp12 = inteval->PC_z[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PB_z[vi] * src0[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp13 - fp12;
target[((hsi*6+2)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp15;
fp15 = inteval->PC_y[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->PB_y[vi] * src0[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp16 - fp15;
target[((hsi*6+1)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp21;
fp21 = inteval->PC_x[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->PB_x[vi] * src0[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp22 - fp21;
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
target[((hsi*6+0)*1+lsi)*1] = fp17;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 23 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
