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
#include <CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100p.h>
#include <deriv1_aB_P__0__G__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_P__0__G__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1017)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__G__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*135+2502)*1+lsi)*1]), &(inteval->stack[((hsi*63+909)*1+lsi)*1]), &(inteval->stack[((hsi*45+972)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*135+2367)*1+lsi)*1]), &(inteval->stack[((hsi*63+801)*1+lsi)*1]), &(inteval->stack[((hsi*45+864)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*135+2232)*1+lsi)*1]), &(inteval->stack[((hsi*63+693)*1+lsi)*1]), &(inteval->stack[((hsi*45+756)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+2637)*1+lsi)*1]), &(inteval->stack[((hsi*45+324)*1+lsi)*1]), &(inteval->stack[((hsi*45+648)*1+lsi)*1]), &(inteval->stack[((hsi*45+972)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+2682)*1+lsi)*1]), &(inteval->stack[((hsi*63+261)*1+lsi)*1]), &(inteval->stack[((hsi*63+585)*1+lsi)*1]), &(inteval->stack[((hsi*63+909)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*135+2097)*1+lsi)*1]), &(inteval->stack[((hsi*63+2682)*1+lsi)*1]), &(inteval->stack[((hsi*45+2637)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+2745)*1+lsi)*1]), &(inteval->stack[((hsi*45+216)*1+lsi)*1]), &(inteval->stack[((hsi*45+540)*1+lsi)*1]), &(inteval->stack[((hsi*45+864)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+2790)*1+lsi)*1]), &(inteval->stack[((hsi*63+153)*1+lsi)*1]), &(inteval->stack[((hsi*63+477)*1+lsi)*1]), &(inteval->stack[((hsi*63+801)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*135+1962)*1+lsi)*1]), &(inteval->stack[((hsi*63+2790)*1+lsi)*1]), &(inteval->stack[((hsi*45+2745)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+2853)*1+lsi)*1]), &(inteval->stack[((hsi*45+108)*1+lsi)*1]), &(inteval->stack[((hsi*45+432)*1+lsi)*1]), &(inteval->stack[((hsi*45+756)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+2898)*1+lsi)*1]), &(inteval->stack[((hsi*63+45)*1+lsi)*1]), &(inteval->stack[((hsi*63+369)*1+lsi)*1]), &(inteval->stack[((hsi*63+693)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*135+1827)*1+lsi)*1]), &(inteval->stack[((hsi*63+2898)*1+lsi)*1]), &(inteval->stack[((hsi*45+2853)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+1692)*1+lsi)*1]), &(inteval->stack[((hsi*63+585)*1+lsi)*1]), &(inteval->stack[((hsi*45+648)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+1557)*1+lsi)*1]), &(inteval->stack[((hsi*63+477)*1+lsi)*1]), &(inteval->stack[((hsi*45+540)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+1422)*1+lsi)*1]), &(inteval->stack[((hsi*63+369)*1+lsi)*1]), &(inteval->stack[((hsi*45+432)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+1287)*1+lsi)*1]), &(inteval->stack[((hsi*63+261)*1+lsi)*1]), &(inteval->stack[((hsi*45+324)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+1152)*1+lsi)*1]), &(inteval->stack[((hsi*63+153)*1+lsi)*1]), &(inteval->stack[((hsi*45+216)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+1017)*1+lsi)*1]), &(inteval->stack[((hsi*63+45)*1+lsi)*1]), &(inteval->stack[((hsi*45+108)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*135+1017)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*135+1152)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*135+1287)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*135+1422)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*135+1557)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*135+1692)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*135+1827)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*135+1962)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*135+2097)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*135+2232)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*135+2367)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*135+2502)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
