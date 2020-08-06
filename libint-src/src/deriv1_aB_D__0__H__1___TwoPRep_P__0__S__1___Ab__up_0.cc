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
#include <CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0dp001.h>
#include <HRRPart0bra0ket0dp010.h>
#include <HRRPart0bra0ket0dp100.h>
#include <HRRPart0bra0ket0d001p.h>
#include <HRRPart0bra0ket0d010p.h>
#include <HRRPart0bra0ket0d100p.h>
#include <deriv1_aB_D__0__H__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__H__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3150)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__H__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*378+5040)*1+lsi)*1]), &(inteval->stack[((hsi*210+2226)*1+lsi)*1]), &(inteval->stack[((hsi*126+2772)*1+lsi)*1]), &(inteval->stack[((hsi*126+3024)*1+lsi)*1]),21);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*378+4662)*1+lsi)*1]), &(inteval->stack[((hsi*210+1218)*1+lsi)*1]), &(inteval->stack[((hsi*126+1764)*1+lsi)*1]), &(inteval->stack[((hsi*126+3024)*1+lsi)*1]),21);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*378+4284)*1+lsi)*1]), &(inteval->stack[((hsi*210+210)*1+lsi)*1]), &(inteval->stack[((hsi*126+756)*1+lsi)*1]), &(inteval->stack[((hsi*126+3024)*1+lsi)*1]),21);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*378+3906)*1+lsi)*1]), &(inteval->stack[((hsi*210+2016)*1+lsi)*1]), &(inteval->stack[((hsi*126+2646)*1+lsi)*1]), &(inteval->stack[((hsi*126+3024)*1+lsi)*1]),21);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*378+3528)*1+lsi)*1]), &(inteval->stack[((hsi*210+1008)*1+lsi)*1]), &(inteval->stack[((hsi*126+1638)*1+lsi)*1]), &(inteval->stack[((hsi*126+3024)*1+lsi)*1]),21);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*378+3150)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]), &(inteval->stack[((hsi*126+630)*1+lsi)*1]), &(inteval->stack[((hsi*126+3024)*1+lsi)*1]),21);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+7308)*1+lsi)*1]), &(inteval->stack[((hsi*210+2436)*1+lsi)*1]), &(inteval->stack[((hsi*126+2898)*1+lsi)*1]),21);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+6930)*1+lsi)*1]), &(inteval->stack[((hsi*210+1428)*1+lsi)*1]), &(inteval->stack[((hsi*126+1890)*1+lsi)*1]),21);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+6552)*1+lsi)*1]), &(inteval->stack[((hsi*210+420)*1+lsi)*1]), &(inteval->stack[((hsi*126+882)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+7686)*1+lsi)*1]), &(inteval->stack[((hsi*126+2646)*1+lsi)*1]), &(inteval->stack[((hsi*126+2772)*1+lsi)*1]), &(inteval->stack[((hsi*126+2898)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+7812)*1+lsi)*1]), &(inteval->stack[((hsi*210+2016)*1+lsi)*1]), &(inteval->stack[((hsi*210+2226)*1+lsi)*1]), &(inteval->stack[((hsi*210+2436)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+6174)*1+lsi)*1]), &(inteval->stack[((hsi*210+7812)*1+lsi)*1]), &(inteval->stack[((hsi*126+7686)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+8022)*1+lsi)*1]), &(inteval->stack[((hsi*126+1638)*1+lsi)*1]), &(inteval->stack[((hsi*126+1764)*1+lsi)*1]), &(inteval->stack[((hsi*126+1890)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+8148)*1+lsi)*1]), &(inteval->stack[((hsi*210+1008)*1+lsi)*1]), &(inteval->stack[((hsi*210+1218)*1+lsi)*1]), &(inteval->stack[((hsi*210+1428)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+5796)*1+lsi)*1]), &(inteval->stack[((hsi*210+8148)*1+lsi)*1]), &(inteval->stack[((hsi*126+8022)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+8358)*1+lsi)*1]), &(inteval->stack[((hsi*126+630)*1+lsi)*1]), &(inteval->stack[((hsi*126+756)*1+lsi)*1]), &(inteval->stack[((hsi*126+882)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+8484)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+210)*1+lsi)*1]), &(inteval->stack[((hsi*210+420)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+5418)*1+lsi)*1]), &(inteval->stack[((hsi*210+8484)*1+lsi)*1]), &(inteval->stack[((hsi*126+8358)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*378+3150)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*378+3528)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*378+3906)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*378+4284)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*378+4662)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*378+5040)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*378+5418)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*378+5796)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*378+6174)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*378+6552)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*378+6930)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*378+7308)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
