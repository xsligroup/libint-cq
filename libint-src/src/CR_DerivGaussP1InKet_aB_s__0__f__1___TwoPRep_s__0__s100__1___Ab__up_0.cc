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
void CR_DerivGaussP1InKet_aB_s__0__f__1___TwoPRep_s__0__s100__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = inteval->two_alpha1_ket[vi] * src0[((hsi*30+27)*1+lsi)*1];
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->two_alpha1_ket[vi] * src0[((hsi*30+24)*1+lsi)*1];
target[((hsi*10+8)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp2;
fp2 = inteval->two_alpha1_ket[vi] * src0[((hsi*30+21)*1+lsi)*1];
target[((hsi*10+7)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp3;
fp3 = inteval->two_alpha1_ket[vi] * src0[((hsi*30+18)*1+lsi)*1];
target[((hsi*10+6)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp4;
fp4 = inteval->two_alpha1_ket[vi] * src0[((hsi*30+15)*1+lsi)*1];
target[((hsi*10+5)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp5;
fp5 = inteval->two_alpha1_ket[vi] * src0[((hsi*30+12)*1+lsi)*1];
target[((hsi*10+4)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp6;
fp6 = inteval->two_alpha1_ket[vi] * src0[((hsi*30+9)*1+lsi)*1];
target[((hsi*10+3)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp7;
fp7 = inteval->two_alpha1_ket[vi] * src0[((hsi*30+6)*1+lsi)*1];
target[((hsi*10+2)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp8;
fp8 = inteval->two_alpha1_ket[vi] * src0[((hsi*30+3)*1+lsi)*1];
target[((hsi*10+1)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp9;
fp9 = inteval->two_alpha1_ket[vi] * src0[((hsi*30+0)*1+lsi)*1];
target[((hsi*10+0)*1+lsi)*1] = fp9;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 10 */
}

#ifdef __cplusplus
};
#endif
