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
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1_aB_G__0__H__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_G__0__H__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6930)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__H__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*945+17325)*1+lsi)*1]), &(inteval->stack[((hsi*420+6195)*1+lsi)*1]), &(inteval->stack[((hsi*315+6615)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*945+16380)*1+lsi)*1]), &(inteval->stack[((hsi*420+5460)*1+lsi)*1]), &(inteval->stack[((hsi*315+5880)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*945+15435)*1+lsi)*1]), &(inteval->stack[((hsi*420+4725)*1+lsi)*1]), &(inteval->stack[((hsi*315+5145)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+18270)*1+lsi)*1]), &(inteval->stack[((hsi*315+2205)*1+lsi)*1]), &(inteval->stack[((hsi*315+4410)*1+lsi)*1]), &(inteval->stack[((hsi*315+6615)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+18585)*1+lsi)*1]), &(inteval->stack[((hsi*420+1785)*1+lsi)*1]), &(inteval->stack[((hsi*420+3990)*1+lsi)*1]), &(inteval->stack[((hsi*420+6195)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*945+14490)*1+lsi)*1]), &(inteval->stack[((hsi*420+18585)*1+lsi)*1]), &(inteval->stack[((hsi*315+18270)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+19005)*1+lsi)*1]), &(inteval->stack[((hsi*315+1470)*1+lsi)*1]), &(inteval->stack[((hsi*315+3675)*1+lsi)*1]), &(inteval->stack[((hsi*315+5880)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+19320)*1+lsi)*1]), &(inteval->stack[((hsi*420+1050)*1+lsi)*1]), &(inteval->stack[((hsi*420+3255)*1+lsi)*1]), &(inteval->stack[((hsi*420+5460)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*945+13545)*1+lsi)*1]), &(inteval->stack[((hsi*420+19320)*1+lsi)*1]), &(inteval->stack[((hsi*315+19005)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+19740)*1+lsi)*1]), &(inteval->stack[((hsi*315+735)*1+lsi)*1]), &(inteval->stack[((hsi*315+2940)*1+lsi)*1]), &(inteval->stack[((hsi*315+5145)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+20055)*1+lsi)*1]), &(inteval->stack[((hsi*420+315)*1+lsi)*1]), &(inteval->stack[((hsi*420+2520)*1+lsi)*1]), &(inteval->stack[((hsi*420+4725)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*945+12600)*1+lsi)*1]), &(inteval->stack[((hsi*420+20055)*1+lsi)*1]), &(inteval->stack[((hsi*315+19740)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+11655)*1+lsi)*1]), &(inteval->stack[((hsi*420+3990)*1+lsi)*1]), &(inteval->stack[((hsi*315+4410)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+10710)*1+lsi)*1]), &(inteval->stack[((hsi*420+3255)*1+lsi)*1]), &(inteval->stack[((hsi*315+3675)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+9765)*1+lsi)*1]), &(inteval->stack[((hsi*420+2520)*1+lsi)*1]), &(inteval->stack[((hsi*315+2940)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+8820)*1+lsi)*1]), &(inteval->stack[((hsi*420+1785)*1+lsi)*1]), &(inteval->stack[((hsi*315+2205)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+7875)*1+lsi)*1]), &(inteval->stack[((hsi*420+1050)*1+lsi)*1]), &(inteval->stack[((hsi*315+1470)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+6930)*1+lsi)*1]), &(inteval->stack[((hsi*420+315)*1+lsi)*1]), &(inteval->stack[((hsi*315+735)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*945+6930)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*945+7875)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*945+8820)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*945+9765)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*945+10710)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*945+11655)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*945+12600)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*945+13545)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*945+14490)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*945+15435)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*945+16380)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*945+17325)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
