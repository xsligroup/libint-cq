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
void deriv2eri2_aB_S__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp18;
fp18 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp17;
fp17 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp18;
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp16;
fp16 = fp19 * fp17;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * fp22;
LIBINT2_REALTYPE fp6;
fp6 = fp7 + fp16;
LIBINT2_REALTYPE fp29;
fp29 = inteval->two_alpha0_bra[vi] * fp6;
LIBINT2_REALTYPE fp28;
fp28 = fp29 - fp36;
LIBINT2_REALTYPE fp8;
fp8 = inteval->two_alpha0_bra[vi] * fp28;
LIBINT2_REALTYPE fp5;
fp5 = fp8;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp25;
fp25 = inteval->WP_z[vi] * fp23;
LIBINT2_REALTYPE fp30;
fp30 = inteval->two_alpha0_bra[vi] * fp25;
LIBINT2_REALTYPE fp9;
fp9 = inteval->two_alpha0_bra[vi] * fp30;
LIBINT2_REALTYPE fp4;
fp4 = fp9;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp11;
fp11 = inteval->WP_y[vi] * fp23;
LIBINT2_REALTYPE fp10;
fp10 = fp11 + fp16;
LIBINT2_REALTYPE fp32;
fp32 = inteval->two_alpha0_bra[vi] * fp10;
LIBINT2_REALTYPE fp31;
fp31 = fp32 - fp36;
LIBINT2_REALTYPE fp12;
fp12 = inteval->two_alpha0_bra[vi] * fp31;
LIBINT2_REALTYPE fp3;
fp3 = fp12;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_z[vi] * fp24;
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha0_bra[vi] * fp26;
LIBINT2_REALTYPE fp13;
fp13 = inteval->two_alpha0_bra[vi] * fp33;
LIBINT2_REALTYPE fp2;
fp2 = fp13;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_y[vi] * fp24;
LIBINT2_REALTYPE fp34;
fp34 = inteval->two_alpha0_bra[vi] * fp27;
LIBINT2_REALTYPE fp14;
fp14 = inteval->two_alpha0_bra[vi] * fp34;
LIBINT2_REALTYPE fp1;
fp1 = fp14;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_x[vi] * fp24;
LIBINT2_REALTYPE fp15;
fp15 = fp20 + fp16;
LIBINT2_REALTYPE fp37;
fp37 = inteval->two_alpha0_bra[vi] * fp15;
LIBINT2_REALTYPE fp35;
fp35 = fp37 - fp36;
LIBINT2_REALTYPE fp21;
fp21 = inteval->two_alpha0_bra[vi] * fp35;
LIBINT2_REALTYPE fp0;
fp0 = fp21;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 38 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
