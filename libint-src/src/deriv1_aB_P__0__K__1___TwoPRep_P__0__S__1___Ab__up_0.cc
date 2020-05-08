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
#include <CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart0bra0ket0pp001.h>
#include <HRRPart0bra0ket0pp010.h>
#include <HRRPart0bra0ket0pp100.h>
#include <HRRPart0bra0ket0p001p.h>
#include <HRRPart0bra0ket0p010p.h>
#include <HRRPart0bra0ket0p100p.h>
#include <deriv1_aB_P__0__K__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_P__0__K__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3024)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__K__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*324+4644)*1+lsi)*1]), &(inteval->stack[((hsi*216+2160)*1+lsi)*1]), &(inteval->stack[((hsi*108+2700)*1+lsi)*1]), &(inteval->stack[((hsi*108+2916)*1+lsi)*1]),36);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*324+4320)*1+lsi)*1]), &(inteval->stack[((hsi*216+1188)*1+lsi)*1]), &(inteval->stack[((hsi*108+1728)*1+lsi)*1]), &(inteval->stack[((hsi*108+2916)*1+lsi)*1]),36);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*324+3996)*1+lsi)*1]), &(inteval->stack[((hsi*216+216)*1+lsi)*1]), &(inteval->stack[((hsi*108+756)*1+lsi)*1]), &(inteval->stack[((hsi*108+2916)*1+lsi)*1]),36);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*324+3672)*1+lsi)*1]), &(inteval->stack[((hsi*216+1944)*1+lsi)*1]), &(inteval->stack[((hsi*108+2592)*1+lsi)*1]), &(inteval->stack[((hsi*108+2916)*1+lsi)*1]),36);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*324+3348)*1+lsi)*1]), &(inteval->stack[((hsi*216+972)*1+lsi)*1]), &(inteval->stack[((hsi*108+1620)*1+lsi)*1]), &(inteval->stack[((hsi*108+2916)*1+lsi)*1]),36);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*324+3024)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]), &(inteval->stack[((hsi*108+648)*1+lsi)*1]), &(inteval->stack[((hsi*108+2916)*1+lsi)*1]),36);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*324+6588)*1+lsi)*1]), &(inteval->stack[((hsi*216+2376)*1+lsi)*1]), &(inteval->stack[((hsi*108+2808)*1+lsi)*1]),36);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*324+6264)*1+lsi)*1]), &(inteval->stack[((hsi*216+1404)*1+lsi)*1]), &(inteval->stack[((hsi*108+1836)*1+lsi)*1]),36);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*324+5940)*1+lsi)*1]), &(inteval->stack[((hsi*216+432)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+6912)*1+lsi)*1]), &(inteval->stack[((hsi*108+2592)*1+lsi)*1]), &(inteval->stack[((hsi*108+2700)*1+lsi)*1]), &(inteval->stack[((hsi*108+2808)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+7020)*1+lsi)*1]), &(inteval->stack[((hsi*216+1944)*1+lsi)*1]), &(inteval->stack[((hsi*216+2160)*1+lsi)*1]), &(inteval->stack[((hsi*216+2376)*1+lsi)*1]));
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*324+5616)*1+lsi)*1]), &(inteval->stack[((hsi*216+7020)*1+lsi)*1]), &(inteval->stack[((hsi*108+6912)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+7236)*1+lsi)*1]), &(inteval->stack[((hsi*108+1620)*1+lsi)*1]), &(inteval->stack[((hsi*108+1728)*1+lsi)*1]), &(inteval->stack[((hsi*108+1836)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+7344)*1+lsi)*1]), &(inteval->stack[((hsi*216+972)*1+lsi)*1]), &(inteval->stack[((hsi*216+1188)*1+lsi)*1]), &(inteval->stack[((hsi*216+1404)*1+lsi)*1]));
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*324+5292)*1+lsi)*1]), &(inteval->stack[((hsi*216+7344)*1+lsi)*1]), &(inteval->stack[((hsi*108+7236)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+7560)*1+lsi)*1]), &(inteval->stack[((hsi*108+648)*1+lsi)*1]), &(inteval->stack[((hsi*108+756)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+7668)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]), &(inteval->stack[((hsi*216+216)*1+lsi)*1]), &(inteval->stack[((hsi*216+432)*1+lsi)*1]));
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*324+4968)*1+lsi)*1]), &(inteval->stack[((hsi*216+7668)*1+lsi)*1]), &(inteval->stack[((hsi*108+7560)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*324+3024)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*324+3348)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*324+3672)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*324+3996)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*324+4320)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*324+4644)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*324+4968)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*324+5292)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*324+5616)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*324+5940)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*324+6264)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*324+6588)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
