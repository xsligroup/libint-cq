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
void CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_3_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_z[vi] * fp14;
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->BO_z[vi] * fp17;
LIBINT2_REALTYPE fp15;
fp15 = fp14 + fp16;
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp10;
fp10 = fp8 + fp11;
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp8;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp7;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp5;
fp5 = fp3 + fp6;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp33 * fp32;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp5;
target[((hsi*6+5)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp20;
fp20 = fp17 + fp21;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp20;
LIBINT2_REALTYPE fp24;
fp24 = fp15 + fp25;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp12;
fp12 = fp10 + fp13;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp33 * fp31;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp12;
target[((hsi*6+4)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp22;
fp22 = fp18 + fp23;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp26;
fp26 = fp20 + fp27;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_z[vi] * fp26;
LIBINT2_REALTYPE fp28;
fp28 = fp24 + fp29;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp33 * fp30;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp28;
target[((hsi*6+3)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp34 * fp32;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp12;
target[((hsi*6+2)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
fp45 = fp34 * fp31;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp28;
target[((hsi*6+1)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp35 * fp32;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp28;
target[((hsi*6+0)*1+lsi)*1] = fp46;
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
