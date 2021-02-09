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
#include <CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_F__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__I__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,15460)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*840+45700)*1+lsi)*1]), &(inteval->stack[((hsi*360+14820)*1+lsi)*1]), &(inteval->stack[((hsi*280+15180)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),10);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1260+46540)*1+lsi)*1]), &(inteval->stack[((hsi*540+13860)*1+lsi)*1]), &(inteval->stack[((hsi*420+14400)*1+lsi)*1]), &(inteval->stack[((hsi*420+10240)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2520+43180)*1+lsi)*1]), &(inteval->stack[((hsi*1260+46540)*1+lsi)*1]), &(inteval->stack[((hsi*840+45700)*1+lsi)*1]),84);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*840+47800)*1+lsi)*1]), &(inteval->stack[((hsi*360+13220)*1+lsi)*1]), &(inteval->stack[((hsi*280+13580)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),10);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1260+48640)*1+lsi)*1]), &(inteval->stack[((hsi*540+12260)*1+lsi)*1]), &(inteval->stack[((hsi*420+12800)*1+lsi)*1]), &(inteval->stack[((hsi*420+10240)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2520+40660)*1+lsi)*1]), &(inteval->stack[((hsi*1260+48640)*1+lsi)*1]), &(inteval->stack[((hsi*840+47800)*1+lsi)*1]),84);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*840+49900)*1+lsi)*1]), &(inteval->stack[((hsi*360+11620)*1+lsi)*1]), &(inteval->stack[((hsi*280+11980)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),10);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1260+50740)*1+lsi)*1]), &(inteval->stack[((hsi*540+10660)*1+lsi)*1]), &(inteval->stack[((hsi*420+11200)*1+lsi)*1]), &(inteval->stack[((hsi*420+10240)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2520+38140)*1+lsi)*1]), &(inteval->stack[((hsi*1260+50740)*1+lsi)*1]), &(inteval->stack[((hsi*840+49900)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+52000)*1+lsi)*1]), &(inteval->stack[((hsi*280+5160)*1+lsi)*1]), &(inteval->stack[((hsi*280+9960)*1+lsi)*1]), &(inteval->stack[((hsi*280+15180)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+52280)*1+lsi)*1]), &(inteval->stack[((hsi*360+4380)*1+lsi)*1]), &(inteval->stack[((hsi*360+9180)*1+lsi)*1]), &(inteval->stack[((hsi*360+14820)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*840+52640)*1+lsi)*1]), &(inteval->stack[((hsi*360+52280)*1+lsi)*1]), &(inteval->stack[((hsi*280+52000)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+14820)*1+lsi)*1]), &(inteval->stack[((hsi*420+4740)*1+lsi)*1]), &(inteval->stack[((hsi*420+9540)*1+lsi)*1]), &(inteval->stack[((hsi*420+14400)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+52000)*1+lsi)*1]), &(inteval->stack[((hsi*540+3840)*1+lsi)*1]), &(inteval->stack[((hsi*540+8640)*1+lsi)*1]), &(inteval->stack[((hsi*540+13860)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*1260+53480)*1+lsi)*1]), &(inteval->stack[((hsi*540+52000)*1+lsi)*1]), &(inteval->stack[((hsi*420+14820)*1+lsi)*1]), &(inteval->stack[((hsi*420+10240)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2520+35620)*1+lsi)*1]), &(inteval->stack[((hsi*1260+53480)*1+lsi)*1]), &(inteval->stack[((hsi*840+52640)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+13860)*1+lsi)*1]), &(inteval->stack[((hsi*280+3560)*1+lsi)*1]), &(inteval->stack[((hsi*280+8360)*1+lsi)*1]), &(inteval->stack[((hsi*280+13580)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+14140)*1+lsi)*1]), &(inteval->stack[((hsi*360+2780)*1+lsi)*1]), &(inteval->stack[((hsi*360+7580)*1+lsi)*1]), &(inteval->stack[((hsi*360+13220)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*840+14500)*1+lsi)*1]), &(inteval->stack[((hsi*360+14140)*1+lsi)*1]), &(inteval->stack[((hsi*280+13860)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+13220)*1+lsi)*1]), &(inteval->stack[((hsi*420+3140)*1+lsi)*1]), &(inteval->stack[((hsi*420+7940)*1+lsi)*1]), &(inteval->stack[((hsi*420+12800)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+13640)*1+lsi)*1]), &(inteval->stack[((hsi*540+2240)*1+lsi)*1]), &(inteval->stack[((hsi*540+7040)*1+lsi)*1]), &(inteval->stack[((hsi*540+12260)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*1260+54740)*1+lsi)*1]), &(inteval->stack[((hsi*540+13640)*1+lsi)*1]), &(inteval->stack[((hsi*420+13220)*1+lsi)*1]), &(inteval->stack[((hsi*420+10240)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2520+33100)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54740)*1+lsi)*1]), &(inteval->stack[((hsi*840+14500)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+12260)*1+lsi)*1]), &(inteval->stack[((hsi*280+1680)*1+lsi)*1]), &(inteval->stack[((hsi*280+6760)*1+lsi)*1]), &(inteval->stack[((hsi*280+11980)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+12540)*1+lsi)*1]), &(inteval->stack[((hsi*360+540)*1+lsi)*1]), &(inteval->stack[((hsi*360+5980)*1+lsi)*1]), &(inteval->stack[((hsi*360+11620)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*840+12900)*1+lsi)*1]), &(inteval->stack[((hsi*360+12540)*1+lsi)*1]), &(inteval->stack[((hsi*280+12260)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+11620)*1+lsi)*1]), &(inteval->stack[((hsi*420+1260)*1+lsi)*1]), &(inteval->stack[((hsi*420+6340)*1+lsi)*1]), &(inteval->stack[((hsi*420+11200)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+12040)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+5440)*1+lsi)*1]), &(inteval->stack[((hsi*540+10660)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*1260+56000)*1+lsi)*1]), &(inteval->stack[((hsi*540+12040)*1+lsi)*1]), &(inteval->stack[((hsi*420+11620)*1+lsi)*1]), &(inteval->stack[((hsi*420+10240)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2520+30580)*1+lsi)*1]), &(inteval->stack[((hsi*1260+56000)*1+lsi)*1]), &(inteval->stack[((hsi*840+12900)*1+lsi)*1]),84);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*840+10240)*1+lsi)*1]), &(inteval->stack[((hsi*420+9540)*1+lsi)*1]), &(inteval->stack[((hsi*280+9960)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),28);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*1080+11080)*1+lsi)*1]), &(inteval->stack[((hsi*540+8640)*1+lsi)*1]), &(inteval->stack[((hsi*360+9180)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2520+28060)*1+lsi)*1]), &(inteval->stack[((hsi*1080+11080)*1+lsi)*1]), &(inteval->stack[((hsi*840+10240)*1+lsi)*1]),30);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*840+8640)*1+lsi)*1]), &(inteval->stack[((hsi*420+7940)*1+lsi)*1]), &(inteval->stack[((hsi*280+8360)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),28);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*1080+57260)*1+lsi)*1]), &(inteval->stack[((hsi*540+7040)*1+lsi)*1]), &(inteval->stack[((hsi*360+7580)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2520+25540)*1+lsi)*1]), &(inteval->stack[((hsi*1080+57260)*1+lsi)*1]), &(inteval->stack[((hsi*840+8640)*1+lsi)*1]),30);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*840+7040)*1+lsi)*1]), &(inteval->stack[((hsi*420+6340)*1+lsi)*1]), &(inteval->stack[((hsi*280+6760)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),28);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*1080+58340)*1+lsi)*1]), &(inteval->stack[((hsi*540+5440)*1+lsi)*1]), &(inteval->stack[((hsi*360+5980)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2520+23020)*1+lsi)*1]), &(inteval->stack[((hsi*1080+58340)*1+lsi)*1]), &(inteval->stack[((hsi*840+7040)*1+lsi)*1]),30);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*840+5440)*1+lsi)*1]), &(inteval->stack[((hsi*420+4740)*1+lsi)*1]), &(inteval->stack[((hsi*280+5160)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),28);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*1080+59420)*1+lsi)*1]), &(inteval->stack[((hsi*540+3840)*1+lsi)*1]), &(inteval->stack[((hsi*360+4380)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2520+20500)*1+lsi)*1]), &(inteval->stack[((hsi*1080+59420)*1+lsi)*1]), &(inteval->stack[((hsi*840+5440)*1+lsi)*1]),30);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*840+3840)*1+lsi)*1]), &(inteval->stack[((hsi*420+3140)*1+lsi)*1]), &(inteval->stack[((hsi*280+3560)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),28);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*1080+60500)*1+lsi)*1]), &(inteval->stack[((hsi*540+2240)*1+lsi)*1]), &(inteval->stack[((hsi*360+2780)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2520+17980)*1+lsi)*1]), &(inteval->stack[((hsi*1080+60500)*1+lsi)*1]), &(inteval->stack[((hsi*840+3840)*1+lsi)*1]),30);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*840+2240)*1+lsi)*1]), &(inteval->stack[((hsi*420+1260)*1+lsi)*1]), &(inteval->stack[((hsi*280+1680)*1+lsi)*1]), &(inteval->stack[((hsi*280+1960)*1+lsi)*1]),28);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*1080+61580)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*360+540)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2520+15460)*1+lsi)*1]), &(inteval->stack[((hsi*1080+61580)*1+lsi)*1]), &(inteval->stack[((hsi*840+2240)*1+lsi)*1]),30);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2520+15460)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2520+17980)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2520+20500)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2520+23020)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2520+25540)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2520+28060)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2520+30580)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2520+33100)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2520+35620)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2520+38140)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2520+40660)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2520+43180)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
