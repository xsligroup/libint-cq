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
#include <CR_DerivGaussP1InBra_aB_H__0__H002__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H011__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H020__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H101__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H110__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H200__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H001__0__H001__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H001__0__H010__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H001__0__H100__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H010__0__H001__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H010__0__H010__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H010__0__H100__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H100__0__H001__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H100__0__H010__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H100__0__H100__1___TwoPRep_unit__0__unit__1___Ab__up_0.h>
#include <deriv2eri2_aB_H__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv2eri2_aB_H__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2646)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv2eri2_aB_H__0__H__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_DerivGaussP1InBra_aB_H001__0__H001__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+6174)*1+lsi)*1]), &(inteval->stack[((hsi*441+2205)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H002__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+8820)*1+lsi)*1]), &(inteval->stack[((hsi*441+6174)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H001__0__H010__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+5733)*1+lsi)*1]), &(inteval->stack[((hsi*441+1764)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H011__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+8379)*1+lsi)*1]), &(inteval->stack[((hsi*441+5733)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H010__0__H010__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+4410)*1+lsi)*1]), &(inteval->stack[((hsi*441+1323)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H020__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+7938)*1+lsi)*1]), &(inteval->stack[((hsi*441+4410)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H001__0__H100__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+5292)*1+lsi)*1]), &(inteval->stack[((hsi*441+882)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H101__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+7497)*1+lsi)*1]), &(inteval->stack[((hsi*441+5292)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H010__0__H100__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+3969)*1+lsi)*1]), &(inteval->stack[((hsi*441+441)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H110__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+7056)*1+lsi)*1]), &(inteval->stack[((hsi*441+3969)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H100__0__H100__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+2646)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H200__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+6615)*1+lsi)*1]), &(inteval->stack[((hsi*441+2646)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H010__0__H001__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+4851)*1+lsi)*1]), &(inteval->stack[((hsi*441+1764)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H100__0__H001__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+3528)*1+lsi)*1]), &(inteval->stack[((hsi*441+882)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H100__0__H010__1___TwoPRep_unit__0__unit__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+3087)*1+lsi)*1]), &(inteval->stack[((hsi*441+441)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*441+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*441+441)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*441+882)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*441+2646)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*441+3087)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*441+3528)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*441+1323)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*441+1764)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*441+3969)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*441+4410)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*441+4851)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*441+2205)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*441+5292)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*441+5733)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*441+6174)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*441+6615)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*441+7056)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*441+7497)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*441+7938)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*441+8379)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*441+8820)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
