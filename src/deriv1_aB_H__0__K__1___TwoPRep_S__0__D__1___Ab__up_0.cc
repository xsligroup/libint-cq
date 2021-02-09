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
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kd001.h>
#include <HRRPart1bra0ket0kd010.h>
#include <HRRPart1bra0ket0kd100.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001d.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010d.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100d.h>
#include <HRRPart1bra0ket0k100p.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0lp001.h>
#include <HRRPart1bra0ket0lp010.h>
#include <HRRPart1bra0ket0lp100.h>
#include <HRRPart1bra0ket0l001p.h>
#include <HRRPart1bra0ket0l010p.h>
#include <HRRPart1bra0ket0l100p.h>
#include <deriv1_aB_H__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_H__0__K__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,27405)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+81837)*1+lsi)*1]), &(inteval->stack[((hsi*945+17136)*1+lsi)*1]), &(inteval->stack[((hsi*756+20181)*1+lsi)*1]),21);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*2268+84105)*1+lsi)*1]), &(inteval->stack[((hsi*945+25704)*1+lsi)*1]), &(inteval->stack[((hsi*756+26649)*1+lsi)*1]), &(inteval->stack[((hsi*756+20181)*1+lsi)*1]),21);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*2835+86373)*1+lsi)*1]), &(inteval->stack[((hsi*1155+24549)*1+lsi)*1]), &(inteval->stack[((hsi*945+25704)*1+lsi)*1]), &(inteval->stack[((hsi*945+17136)*1+lsi)*1]),21);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*4536+77301)*1+lsi)*1]), &(inteval->stack[((hsi*2835+86373)*1+lsi)*1]), &(inteval->stack[((hsi*2268+84105)*1+lsi)*1]), &(inteval->stack[((hsi*2268+81837)*1+lsi)*1]),21);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*2268+89208)*1+lsi)*1]), &(inteval->stack[((hsi*945+22848)*1+lsi)*1]), &(inteval->stack[((hsi*756+23793)*1+lsi)*1]), &(inteval->stack[((hsi*756+20181)*1+lsi)*1]),21);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*2835+91476)*1+lsi)*1]), &(inteval->stack[((hsi*1155+21693)*1+lsi)*1]), &(inteval->stack[((hsi*945+22848)*1+lsi)*1]), &(inteval->stack[((hsi*945+17136)*1+lsi)*1]),21);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*4536+72765)*1+lsi)*1]), &(inteval->stack[((hsi*2835+91476)*1+lsi)*1]), &(inteval->stack[((hsi*2268+89208)*1+lsi)*1]), &(inteval->stack[((hsi*2268+81837)*1+lsi)*1]),21);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*2268+94311)*1+lsi)*1]), &(inteval->stack[((hsi*945+19236)*1+lsi)*1]), &(inteval->stack[((hsi*756+20937)*1+lsi)*1]), &(inteval->stack[((hsi*756+20181)*1+lsi)*1]),21);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*2835+96579)*1+lsi)*1]), &(inteval->stack[((hsi*1155+18081)*1+lsi)*1]), &(inteval->stack[((hsi*945+19236)*1+lsi)*1]), &(inteval->stack[((hsi*945+17136)*1+lsi)*1]),21);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*4536+68229)*1+lsi)*1]), &(inteval->stack[((hsi*2835+96579)*1+lsi)*1]), &(inteval->stack[((hsi*2268+94311)*1+lsi)*1]), &(inteval->stack[((hsi*2268+81837)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+99414)*1+lsi)*1]), &(inteval->stack[((hsi*945+6867)*1+lsi)*1]), &(inteval->stack[((hsi*945+15435)*1+lsi)*1]), &(inteval->stack[((hsi*945+25704)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+25704)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]), &(inteval->stack[((hsi*756+16380)*1+lsi)*1]), &(inteval->stack[((hsi*756+26649)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*2268+100359)*1+lsi)*1]), &(inteval->stack[((hsi*945+99414)*1+lsi)*1]), &(inteval->stack[((hsi*756+25704)*1+lsi)*1]), &(inteval->stack[((hsi*756+20181)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1155+25704)*1+lsi)*1]), &(inteval->stack[((hsi*1155+5712)*1+lsi)*1]), &(inteval->stack[((hsi*1155+14280)*1+lsi)*1]), &(inteval->stack[((hsi*1155+24549)*1+lsi)*1]));
HRRPart1bra0ket0l001p(inteval, &(inteval->stack[((hsi*2835+102627)*1+lsi)*1]), &(inteval->stack[((hsi*1155+25704)*1+lsi)*1]), &(inteval->stack[((hsi*945+99414)*1+lsi)*1]), &(inteval->stack[((hsi*945+17136)*1+lsi)*1]),21);
HRRPart1bra0ket0k001d(inteval, &(inteval->stack[((hsi*4536+63693)*1+lsi)*1]), &(inteval->stack[((hsi*2835+102627)*1+lsi)*1]), &(inteval->stack[((hsi*2268+100359)*1+lsi)*1]), &(inteval->stack[((hsi*2268+81837)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+99414)*1+lsi)*1]), &(inteval->stack[((hsi*945+4011)*1+lsi)*1]), &(inteval->stack[((hsi*945+12579)*1+lsi)*1]), &(inteval->stack[((hsi*945+22848)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+24549)*1+lsi)*1]), &(inteval->stack[((hsi*756+4956)*1+lsi)*1]), &(inteval->stack[((hsi*756+13524)*1+lsi)*1]), &(inteval->stack[((hsi*756+23793)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*2268+105462)*1+lsi)*1]), &(inteval->stack[((hsi*945+99414)*1+lsi)*1]), &(inteval->stack[((hsi*756+24549)*1+lsi)*1]), &(inteval->stack[((hsi*756+20181)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1155+22848)*1+lsi)*1]), &(inteval->stack[((hsi*1155+2856)*1+lsi)*1]), &(inteval->stack[((hsi*1155+11424)*1+lsi)*1]), &(inteval->stack[((hsi*1155+21693)*1+lsi)*1]));
HRRPart1bra0ket0l010p(inteval, &(inteval->stack[((hsi*2835+24003)*1+lsi)*1]), &(inteval->stack[((hsi*1155+22848)*1+lsi)*1]), &(inteval->stack[((hsi*945+99414)*1+lsi)*1]), &(inteval->stack[((hsi*945+17136)*1+lsi)*1]),21);
HRRPart1bra0ket0k010d(inteval, &(inteval->stack[((hsi*4536+59157)*1+lsi)*1]), &(inteval->stack[((hsi*2835+24003)*1+lsi)*1]), &(inteval->stack[((hsi*2268+105462)*1+lsi)*1]), &(inteval->stack[((hsi*2268+81837)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+99414)*1+lsi)*1]), &(inteval->stack[((hsi*945+1155)*1+lsi)*1]), &(inteval->stack[((hsi*945+9723)*1+lsi)*1]), &(inteval->stack[((hsi*945+19236)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+21693)*1+lsi)*1]), &(inteval->stack[((hsi*756+2100)*1+lsi)*1]), &(inteval->stack[((hsi*756+10668)*1+lsi)*1]), &(inteval->stack[((hsi*756+20937)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*2268+107730)*1+lsi)*1]), &(inteval->stack[((hsi*945+99414)*1+lsi)*1]), &(inteval->stack[((hsi*756+21693)*1+lsi)*1]), &(inteval->stack[((hsi*756+20181)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1155+19236)*1+lsi)*1]), &(inteval->stack[((hsi*1155+0)*1+lsi)*1]), &(inteval->stack[((hsi*1155+8568)*1+lsi)*1]), &(inteval->stack[((hsi*1155+18081)*1+lsi)*1]));
HRRPart1bra0ket0l100p(inteval, &(inteval->stack[((hsi*2835+20391)*1+lsi)*1]), &(inteval->stack[((hsi*1155+19236)*1+lsi)*1]), &(inteval->stack[((hsi*945+99414)*1+lsi)*1]), &(inteval->stack[((hsi*945+17136)*1+lsi)*1]),21);
HRRPart1bra0ket0k100d(inteval, &(inteval->stack[((hsi*4536+54621)*1+lsi)*1]), &(inteval->stack[((hsi*2835+20391)*1+lsi)*1]), &(inteval->stack[((hsi*2268+107730)*1+lsi)*1]), &(inteval->stack[((hsi*2268+81837)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+17136)*1+lsi)*1]), &(inteval->stack[((hsi*945+15435)*1+lsi)*1]), &(inteval->stack[((hsi*756+16380)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+109998)*1+lsi)*1]), &(inteval->stack[((hsi*1155+14280)*1+lsi)*1]), &(inteval->stack[((hsi*945+15435)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+50085)*1+lsi)*1]), &(inteval->stack[((hsi*2835+109998)*1+lsi)*1]), &(inteval->stack[((hsi*2268+17136)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+14280)*1+lsi)*1]), &(inteval->stack[((hsi*945+12579)*1+lsi)*1]), &(inteval->stack[((hsi*756+13524)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+112833)*1+lsi)*1]), &(inteval->stack[((hsi*1155+11424)*1+lsi)*1]), &(inteval->stack[((hsi*945+12579)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+45549)*1+lsi)*1]), &(inteval->stack[((hsi*2835+112833)*1+lsi)*1]), &(inteval->stack[((hsi*2268+14280)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+11424)*1+lsi)*1]), &(inteval->stack[((hsi*945+9723)*1+lsi)*1]), &(inteval->stack[((hsi*756+10668)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+115668)*1+lsi)*1]), &(inteval->stack[((hsi*1155+8568)*1+lsi)*1]), &(inteval->stack[((hsi*945+9723)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+41013)*1+lsi)*1]), &(inteval->stack[((hsi*2835+115668)*1+lsi)*1]), &(inteval->stack[((hsi*2268+11424)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+8568)*1+lsi)*1]), &(inteval->stack[((hsi*945+6867)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+118503)*1+lsi)*1]), &(inteval->stack[((hsi*1155+5712)*1+lsi)*1]), &(inteval->stack[((hsi*945+6867)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+36477)*1+lsi)*1]), &(inteval->stack[((hsi*2835+118503)*1+lsi)*1]), &(inteval->stack[((hsi*2268+8568)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+5712)*1+lsi)*1]), &(inteval->stack[((hsi*945+4011)*1+lsi)*1]), &(inteval->stack[((hsi*756+4956)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+121338)*1+lsi)*1]), &(inteval->stack[((hsi*1155+2856)*1+lsi)*1]), &(inteval->stack[((hsi*945+4011)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+31941)*1+lsi)*1]), &(inteval->stack[((hsi*2835+121338)*1+lsi)*1]), &(inteval->stack[((hsi*2268+5712)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+2856)*1+lsi)*1]), &(inteval->stack[((hsi*945+1155)*1+lsi)*1]), &(inteval->stack[((hsi*756+2100)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+124173)*1+lsi)*1]), &(inteval->stack[((hsi*1155+0)*1+lsi)*1]), &(inteval->stack[((hsi*945+1155)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+27405)*1+lsi)*1]), &(inteval->stack[((hsi*2835+124173)*1+lsi)*1]), &(inteval->stack[((hsi*2268+2856)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4536+27405)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*4536+31941)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*4536+36477)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*4536+41013)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*4536+45549)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*4536+50085)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*4536+54621)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*4536+59157)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*4536+63693)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*4536+68229)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*4536+72765)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*4536+77301)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
