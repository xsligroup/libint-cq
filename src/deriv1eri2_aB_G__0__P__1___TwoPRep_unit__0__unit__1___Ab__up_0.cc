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
#include <CR_DerivGaussP1InBra_aB_G__0__P001__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__P010__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__P100__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <deriv1eri2_aB_G__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri2_aB_G__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,135)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri2_aB_G__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_DerivGaussP1InBra_aB_G__0__P001__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+225)*1+lsi)*1]), &(inteval->stack[((hsi*45+90)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__P010__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+180)*1+lsi)*1]), &(inteval->stack[((hsi*45+45)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__P100__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+135)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*45+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*45+45)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*45+90)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*45+135)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*45+180)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*45+225)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif