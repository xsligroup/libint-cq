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
void HRRPart0bra0ket0dp100(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp43;
fp43 = inteval->AB_y[vi] * src1[((hsi*6+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*10+1)*lowdim+lsi)*1] + fp43;
target[((hsi*18+1)*lowdim+lsi)*1] = fp42;
LIBINT2_REALTYPE fp41;
fp41 = inteval->AB_z[vi] * src1[((hsi*6+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src0[((hsi*10+2)*lowdim+lsi)*1] + fp41;
target[((hsi*18+2)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * src2[((hsi*6+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->AB_x[vi] * src1[((hsi*6+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*10+1)*lowdim+lsi)*1] + fp39;
LIBINT2_REALTYPE fp36;
fp36 = fp38 - fp37;
target[((hsi*18+3)*lowdim+lsi)*1] = fp36;
LIBINT2_REALTYPE fp35;
fp35 = inteval->AB_y[vi] * src1[((hsi*6+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*10+3)*lowdim+lsi)*1] + fp35;
target[((hsi*18+4)*lowdim+lsi)*1] = fp34;
LIBINT2_REALTYPE fp33;
fp33 = inteval->AB_z[vi] * src1[((hsi*6+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*10+4)*lowdim+lsi)*1] + fp33;
target[((hsi*18+5)*lowdim+lsi)*1] = fp32;
LIBINT2_REALTYPE fp29;
fp29 = 1.0000000000000000e+00 * src2[((hsi*6+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->AB_x[vi] * src1[((hsi*6+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*10+2)*lowdim+lsi)*1] + fp31;
LIBINT2_REALTYPE fp28;
fp28 = fp30 - fp29;
target[((hsi*18+6)*lowdim+lsi)*1] = fp28;
LIBINT2_REALTYPE fp27;
fp27 = inteval->AB_y[vi] * src1[((hsi*6+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*10+4)*lowdim+lsi)*1] + fp27;
target[((hsi*18+7)*lowdim+lsi)*1] = fp26;
LIBINT2_REALTYPE fp25;
fp25 = inteval->AB_z[vi] * src1[((hsi*6+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src0[((hsi*10+5)*lowdim+lsi)*1] + fp25;
target[((hsi*18+8)*lowdim+lsi)*1] = fp24;
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * src2[((hsi*6+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->AB_x[vi] * src1[((hsi*6+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*10+0)*lowdim+lsi)*1] + fp47;
LIBINT2_REALTYPE fp44;
fp44 = fp46 - fp45;
target[((hsi*18+0)*lowdim+lsi)*1] = fp44;
LIBINT2_REALTYPE fp19;
fp19 = inteval->AB_y[vi] * src1[((hsi*6+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*10+6)*lowdim+lsi)*1] + fp19;
target[((hsi*18+10)*lowdim+lsi)*1] = fp18;
LIBINT2_REALTYPE fp17;
fp17 = inteval->AB_z[vi] * src1[((hsi*6+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*10+7)*lowdim+lsi)*1] + fp17;
target[((hsi*18+11)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp13;
fp13 = 1.0000000000000000e+00 * src2[((hsi*6+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->AB_x[vi] * src1[((hsi*6+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*10+4)*lowdim+lsi)*1] + fp15;
LIBINT2_REALTYPE fp12;
fp12 = fp14 - fp13;
target[((hsi*18+12)*lowdim+lsi)*1] = fp12;
LIBINT2_REALTYPE fp11;
fp11 = inteval->AB_y[vi] * src1[((hsi*6+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src0[((hsi*10+7)*lowdim+lsi)*1] + fp11;
target[((hsi*18+13)*lowdim+lsi)*1] = fp10;
LIBINT2_REALTYPE fp9;
fp9 = inteval->AB_z[vi] * src1[((hsi*6+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*10+8)*lowdim+lsi)*1] + fp9;
target[((hsi*18+14)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * src2[((hsi*6+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->AB_x[vi] * src1[((hsi*6+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*10+5)*lowdim+lsi)*1] + fp7;
LIBINT2_REALTYPE fp4;
fp4 = fp6 - fp5;
target[((hsi*18+15)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp3;
fp3 = inteval->AB_y[vi] * src1[((hsi*6+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*10+8)*lowdim+lsi)*1] + fp3;
target[((hsi*18+16)*lowdim+lsi)*1] = fp2;
LIBINT2_REALTYPE fp1;
fp1 = inteval->AB_z[vi] * src1[((hsi*6+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*10+9)*lowdim+lsi)*1] + fp1;
target[((hsi*18+17)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp21;
fp21 = 1.0000000000000000e+00 * src2[((hsi*6+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->AB_x[vi] * src1[((hsi*6+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*10+3)*lowdim+lsi)*1] + fp23;
LIBINT2_REALTYPE fp20;
fp20 = fp22 - fp21;
target[((hsi*18+9)*lowdim+lsi)*1] = fp20;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 48 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
