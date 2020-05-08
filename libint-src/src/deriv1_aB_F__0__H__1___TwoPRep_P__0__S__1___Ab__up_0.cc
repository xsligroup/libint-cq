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
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100p.h>
#include <deriv1_aB_F__0__H__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_F__0__H__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4935)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__H__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*630+8085)*1+lsi)*1]), &(inteval->stack[((hsi*315+3465)*1+lsi)*1]), &(inteval->stack[((hsi*210+4305)*1+lsi)*1]), &(inteval->stack[((hsi*210+4725)*1+lsi)*1]),21);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*630+7455)*1+lsi)*1]), &(inteval->stack[((hsi*315+1890)*1+lsi)*1]), &(inteval->stack[((hsi*210+2730)*1+lsi)*1]), &(inteval->stack[((hsi*210+4725)*1+lsi)*1]),21);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*630+6825)*1+lsi)*1]), &(inteval->stack[((hsi*315+315)*1+lsi)*1]), &(inteval->stack[((hsi*210+1155)*1+lsi)*1]), &(inteval->stack[((hsi*210+4725)*1+lsi)*1]),21);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*630+6195)*1+lsi)*1]), &(inteval->stack[((hsi*315+3150)*1+lsi)*1]), &(inteval->stack[((hsi*210+4095)*1+lsi)*1]), &(inteval->stack[((hsi*210+4725)*1+lsi)*1]),21);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*630+5565)*1+lsi)*1]), &(inteval->stack[((hsi*315+1575)*1+lsi)*1]), &(inteval->stack[((hsi*210+2520)*1+lsi)*1]), &(inteval->stack[((hsi*210+4725)*1+lsi)*1]),21);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*630+4935)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+945)*1+lsi)*1]), &(inteval->stack[((hsi*210+4725)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+11865)*1+lsi)*1]), &(inteval->stack[((hsi*315+3780)*1+lsi)*1]), &(inteval->stack[((hsi*210+4515)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+11235)*1+lsi)*1]), &(inteval->stack[((hsi*315+2205)*1+lsi)*1]), &(inteval->stack[((hsi*210+2940)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+10605)*1+lsi)*1]), &(inteval->stack[((hsi*315+630)*1+lsi)*1]), &(inteval->stack[((hsi*210+1365)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+12495)*1+lsi)*1]), &(inteval->stack[((hsi*210+4095)*1+lsi)*1]), &(inteval->stack[((hsi*210+4305)*1+lsi)*1]), &(inteval->stack[((hsi*210+4515)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+12705)*1+lsi)*1]), &(inteval->stack[((hsi*315+3150)*1+lsi)*1]), &(inteval->stack[((hsi*315+3465)*1+lsi)*1]), &(inteval->stack[((hsi*315+3780)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+9975)*1+lsi)*1]), &(inteval->stack[((hsi*315+12705)*1+lsi)*1]), &(inteval->stack[((hsi*210+12495)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+13020)*1+lsi)*1]), &(inteval->stack[((hsi*210+2520)*1+lsi)*1]), &(inteval->stack[((hsi*210+2730)*1+lsi)*1]), &(inteval->stack[((hsi*210+2940)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+13230)*1+lsi)*1]), &(inteval->stack[((hsi*315+1575)*1+lsi)*1]), &(inteval->stack[((hsi*315+1890)*1+lsi)*1]), &(inteval->stack[((hsi*315+2205)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+9345)*1+lsi)*1]), &(inteval->stack[((hsi*315+13230)*1+lsi)*1]), &(inteval->stack[((hsi*210+13020)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+13545)*1+lsi)*1]), &(inteval->stack[((hsi*210+945)*1+lsi)*1]), &(inteval->stack[((hsi*210+1155)*1+lsi)*1]), &(inteval->stack[((hsi*210+1365)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+13755)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+315)*1+lsi)*1]), &(inteval->stack[((hsi*315+630)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+8715)*1+lsi)*1]), &(inteval->stack[((hsi*315+13755)*1+lsi)*1]), &(inteval->stack[((hsi*210+13545)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*630+4935)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*630+5565)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*630+6195)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*630+6825)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*630+7455)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*630+8085)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*630+8715)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*630+9345)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*630+9975)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*630+10605)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*630+11235)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*630+11865)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
