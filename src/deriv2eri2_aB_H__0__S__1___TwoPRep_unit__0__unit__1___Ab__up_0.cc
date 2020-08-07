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
#include <CR_DerivGaussP1InBra_aB_H__0__S002__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__S011__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__S020__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__S101__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__S110__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__S200__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H001__0__S001__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H001__0__S010__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H001__0__S100__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H010__0__S001__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H010__0__S010__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H010__0__S100__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H100__0__S001__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H100__0__S010__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H100__0__S100__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <deriv2eri2_aB_H__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv2eri2_aB_H__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,126)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv2eri2_aB_H__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_DerivGaussP1InBra_aB_H001__0__S001__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+294)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__S002__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+420)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H001__0__S010__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+273)*1+lsi)*1]), &(inteval->stack[((hsi*21+84)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__S011__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+399)*1+lsi)*1]), &(inteval->stack[((hsi*21+273)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H010__0__S010__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+210)*1+lsi)*1]), &(inteval->stack[((hsi*21+63)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__S020__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+378)*1+lsi)*1]), &(inteval->stack[((hsi*21+210)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H001__0__S100__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+252)*1+lsi)*1]), &(inteval->stack[((hsi*21+42)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__S101__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+357)*1+lsi)*1]), &(inteval->stack[((hsi*21+252)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H010__0__S100__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+189)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__S110__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+336)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H100__0__S100__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+126)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__S200__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+315)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H010__0__S001__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+231)*1+lsi)*1]), &(inteval->stack[((hsi*21+84)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H100__0__S001__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+168)*1+lsi)*1]), &(inteval->stack[((hsi*21+42)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H100__0__S010__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+147)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*21+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*21+21)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*21+42)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*21+126)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*21+147)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*21+168)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*21+63)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*21+84)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*21+189)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*21+210)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*21+231)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*21+105)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*21+252)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*21+273)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*21+294)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*21+315)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*21+336)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*21+357)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*21+378)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*21+399)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*21+420)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
