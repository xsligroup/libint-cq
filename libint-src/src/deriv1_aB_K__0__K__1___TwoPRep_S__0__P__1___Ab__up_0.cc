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
#include <CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_K__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_K__0__K__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,27540)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_K__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3888+70308)*1+lsi)*1]), &(inteval->stack[((hsi*1620+24624)*1+lsi)*1]), &(inteval->stack[((hsi*1296+26244)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3888+66420)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21708)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23328)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3888+62532)*1+lsi)*1]), &(inteval->stack[((hsi*1620+18792)*1+lsi)*1]), &(inteval->stack[((hsi*1296+20412)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+74196)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8748)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17496)*1+lsi)*1]), &(inteval->stack[((hsi*1296+26244)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+75492)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7128)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15876)*1+lsi)*1]), &(inteval->stack[((hsi*1620+24624)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*3888+58644)*1+lsi)*1]), &(inteval->stack[((hsi*1620+75492)*1+lsi)*1]), &(inteval->stack[((hsi*1296+74196)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+77112)*1+lsi)*1]), &(inteval->stack[((hsi*1296+5832)*1+lsi)*1]), &(inteval->stack[((hsi*1296+14580)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23328)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+78408)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4212)*1+lsi)*1]), &(inteval->stack[((hsi*1620+12960)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21708)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*3888+54756)*1+lsi)*1]), &(inteval->stack[((hsi*1620+78408)*1+lsi)*1]), &(inteval->stack[((hsi*1296+77112)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+80028)*1+lsi)*1]), &(inteval->stack[((hsi*1296+2916)*1+lsi)*1]), &(inteval->stack[((hsi*1296+11664)*1+lsi)*1]), &(inteval->stack[((hsi*1296+20412)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+81324)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1296)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10044)*1+lsi)*1]), &(inteval->stack[((hsi*1620+18792)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*3888+50868)*1+lsi)*1]), &(inteval->stack[((hsi*1620+81324)*1+lsi)*1]), &(inteval->stack[((hsi*1296+80028)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+46980)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15876)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17496)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+43092)*1+lsi)*1]), &(inteval->stack[((hsi*1620+12960)*1+lsi)*1]), &(inteval->stack[((hsi*1296+14580)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+39204)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10044)*1+lsi)*1]), &(inteval->stack[((hsi*1296+11664)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+35316)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7128)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8748)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+31428)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4212)*1+lsi)*1]), &(inteval->stack[((hsi*1296+5832)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+27540)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1296)*1+lsi)*1]), &(inteval->stack[((hsi*1296+2916)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3888+27540)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3888+31428)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3888+35316)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3888+39204)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3888+43092)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3888+46980)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3888+50868)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3888+54756)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3888+58644)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*3888+62532)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*3888+66420)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*3888+70308)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
