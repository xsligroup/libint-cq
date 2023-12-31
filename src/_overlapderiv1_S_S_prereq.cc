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
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv1_S_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + fp11;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + fp13;
LIBINT2_REALTYPE fp33;
fp33 = fp22 * fp20;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PB_z[vi] * fp8;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp6;
LIBINT2_REALTYPE fp24;
fp24 = fp33 * fp15;
LIBINT2_REALTYPE fp25;
fp25 = inteval->two_alpha0_ket[vi] * fp24;
LIBINT2_REALTYPE fp5;
fp5 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + fp8;
LIBINT2_REALTYPE fp9;
fp9 = inteval->PB_y[vi] * fp11;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + fp9;
LIBINT2_REALTYPE fp27;
fp27 = fp22 * fp18;
LIBINT2_REALTYPE fp26;
fp26 = fp27 * fp17;
LIBINT2_REALTYPE fp28;
fp28 = inteval->two_alpha0_ket[vi] * fp26;
LIBINT2_REALTYPE fp4;
fp4 = fp28;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp12;
fp12 = inteval->PB_x[vi] * fp13;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp12;
LIBINT2_REALTYPE fp30;
fp30 = fp21 * fp20;
LIBINT2_REALTYPE fp29;
fp29 = fp30 * fp17;
LIBINT2_REALTYPE fp31;
fp31 = inteval->two_alpha0_ket[vi] * fp29;
LIBINT2_REALTYPE fp3;
fp3 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp7;
fp7 = inteval->PA_z[vi] * fp8;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + fp7;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp16;
LIBINT2_REALTYPE fp34;
fp34 = inteval->two_alpha0_bra[vi] * fp32;
LIBINT2_REALTYPE fp2;
fp2 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp10;
fp10 = inteval->PA_y[vi] * fp11;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp36;
fp36 = fp22 * fp19;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp17;
LIBINT2_REALTYPE fp37;
fp37 = inteval->two_alpha0_bra[vi] * fp35;
LIBINT2_REALTYPE fp1;
fp1 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp14;
fp14 = inteval->PA_x[vi] * fp13;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + fp14;
LIBINT2_REALTYPE fp39;
fp39 = fp23 * fp20;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp17;
LIBINT2_REALTYPE fp40;
fp40 = inteval->two_alpha0_bra[vi] * fp38;
LIBINT2_REALTYPE fp0;
fp0 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 41 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
