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
#include <CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100p.h>
#include <deriv1_aB_F__0__K__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_F__0__K__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8460)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__K__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*1080+13860)*1+lsi)*1]), &(inteval->stack[((hsi*540+5940)*1+lsi)*1]), &(inteval->stack[((hsi*360+7380)*1+lsi)*1]), &(inteval->stack[((hsi*360+8100)*1+lsi)*1]),36);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*1080+12780)*1+lsi)*1]), &(inteval->stack[((hsi*540+3240)*1+lsi)*1]), &(inteval->stack[((hsi*360+4680)*1+lsi)*1]), &(inteval->stack[((hsi*360+8100)*1+lsi)*1]),36);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*1080+11700)*1+lsi)*1]), &(inteval->stack[((hsi*540+540)*1+lsi)*1]), &(inteval->stack[((hsi*360+1980)*1+lsi)*1]), &(inteval->stack[((hsi*360+8100)*1+lsi)*1]),36);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*1080+10620)*1+lsi)*1]), &(inteval->stack[((hsi*540+5400)*1+lsi)*1]), &(inteval->stack[((hsi*360+7020)*1+lsi)*1]), &(inteval->stack[((hsi*360+8100)*1+lsi)*1]),36);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*1080+9540)*1+lsi)*1]), &(inteval->stack[((hsi*540+2700)*1+lsi)*1]), &(inteval->stack[((hsi*360+4320)*1+lsi)*1]), &(inteval->stack[((hsi*360+8100)*1+lsi)*1]),36);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*1080+8460)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*360+1620)*1+lsi)*1]), &(inteval->stack[((hsi*360+8100)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+20340)*1+lsi)*1]), &(inteval->stack[((hsi*540+6480)*1+lsi)*1]), &(inteval->stack[((hsi*360+7740)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+19260)*1+lsi)*1]), &(inteval->stack[((hsi*540+3780)*1+lsi)*1]), &(inteval->stack[((hsi*360+5040)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+18180)*1+lsi)*1]), &(inteval->stack[((hsi*540+1080)*1+lsi)*1]), &(inteval->stack[((hsi*360+2340)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+21420)*1+lsi)*1]), &(inteval->stack[((hsi*360+7020)*1+lsi)*1]), &(inteval->stack[((hsi*360+7380)*1+lsi)*1]), &(inteval->stack[((hsi*360+7740)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+21780)*1+lsi)*1]), &(inteval->stack[((hsi*540+5400)*1+lsi)*1]), &(inteval->stack[((hsi*540+5940)*1+lsi)*1]), &(inteval->stack[((hsi*540+6480)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+17100)*1+lsi)*1]), &(inteval->stack[((hsi*540+21780)*1+lsi)*1]), &(inteval->stack[((hsi*360+21420)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+22320)*1+lsi)*1]), &(inteval->stack[((hsi*360+4320)*1+lsi)*1]), &(inteval->stack[((hsi*360+4680)*1+lsi)*1]), &(inteval->stack[((hsi*360+5040)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+22680)*1+lsi)*1]), &(inteval->stack[((hsi*540+2700)*1+lsi)*1]), &(inteval->stack[((hsi*540+3240)*1+lsi)*1]), &(inteval->stack[((hsi*540+3780)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+16020)*1+lsi)*1]), &(inteval->stack[((hsi*540+22680)*1+lsi)*1]), &(inteval->stack[((hsi*360+22320)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+23220)*1+lsi)*1]), &(inteval->stack[((hsi*360+1620)*1+lsi)*1]), &(inteval->stack[((hsi*360+1980)*1+lsi)*1]), &(inteval->stack[((hsi*360+2340)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+23580)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+540)*1+lsi)*1]), &(inteval->stack[((hsi*540+1080)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+14940)*1+lsi)*1]), &(inteval->stack[((hsi*540+23580)*1+lsi)*1]), &(inteval->stack[((hsi*360+23220)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1080+8460)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1080+9540)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1080+10620)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1080+11700)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1080+12780)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1080+13860)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1080+14940)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1080+16020)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1080+17100)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1080+18180)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1080+19260)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1080+20340)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
