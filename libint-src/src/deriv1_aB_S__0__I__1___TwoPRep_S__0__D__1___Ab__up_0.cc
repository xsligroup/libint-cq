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
#include <CR_DerivGaussP1InBra_aB_S__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0id001.h>
#include <HRRPart1bra0ket0id010.h>
#include <HRRPart1bra0ket0id100.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001d.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010d.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100d.h>
#include <HRRPart1bra0ket0i100p.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_S__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_S__0__I__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1045)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_S__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3061)*1+lsi)*1]), &(inteval->stack[((hsi*36+654)*1+lsi)*1]), &(inteval->stack[((hsi*28+771)*1+lsi)*1]),1);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+3145)*1+lsi)*1]), &(inteval->stack[((hsi*36+981)*1+lsi)*1]), &(inteval->stack[((hsi*28+1017)*1+lsi)*1]), &(inteval->stack[((hsi*28+771)*1+lsi)*1]),1);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+3229)*1+lsi)*1]), &(inteval->stack[((hsi*45+936)*1+lsi)*1]), &(inteval->stack[((hsi*36+981)*1+lsi)*1]), &(inteval->stack[((hsi*36+654)*1+lsi)*1]),1);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*168+2893)*1+lsi)*1]), &(inteval->stack[((hsi*108+3229)*1+lsi)*1]), &(inteval->stack[((hsi*84+3145)*1+lsi)*1]), &(inteval->stack[((hsi*84+3061)*1+lsi)*1]),1);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+3337)*1+lsi)*1]), &(inteval->stack[((hsi*36+872)*1+lsi)*1]), &(inteval->stack[((hsi*28+908)*1+lsi)*1]), &(inteval->stack[((hsi*28+771)*1+lsi)*1]),1);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+3421)*1+lsi)*1]), &(inteval->stack[((hsi*45+827)*1+lsi)*1]), &(inteval->stack[((hsi*36+872)*1+lsi)*1]), &(inteval->stack[((hsi*36+654)*1+lsi)*1]),1);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*168+2725)*1+lsi)*1]), &(inteval->stack[((hsi*108+3421)*1+lsi)*1]), &(inteval->stack[((hsi*84+3337)*1+lsi)*1]), &(inteval->stack[((hsi*84+3061)*1+lsi)*1]),1);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+3529)*1+lsi)*1]), &(inteval->stack[((hsi*36+735)*1+lsi)*1]), &(inteval->stack[((hsi*28+799)*1+lsi)*1]), &(inteval->stack[((hsi*28+771)*1+lsi)*1]),1);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+3613)*1+lsi)*1]), &(inteval->stack[((hsi*45+690)*1+lsi)*1]), &(inteval->stack[((hsi*36+735)*1+lsi)*1]), &(inteval->stack[((hsi*36+654)*1+lsi)*1]),1);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*168+2557)*1+lsi)*1]), &(inteval->stack[((hsi*108+3613)*1+lsi)*1]), &(inteval->stack[((hsi*84+3529)*1+lsi)*1]), &(inteval->stack[((hsi*84+3061)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+3721)*1+lsi)*1]), &(inteval->stack[((hsi*36+263)*1+lsi)*1]), &(inteval->stack[((hsi*36+590)*1+lsi)*1]), &(inteval->stack[((hsi*36+981)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+981)*1+lsi)*1]), &(inteval->stack[((hsi*28+299)*1+lsi)*1]), &(inteval->stack[((hsi*28+626)*1+lsi)*1]), &(inteval->stack[((hsi*28+1017)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+3757)*1+lsi)*1]), &(inteval->stack[((hsi*36+3721)*1+lsi)*1]), &(inteval->stack[((hsi*28+981)*1+lsi)*1]), &(inteval->stack[((hsi*28+771)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+981)*1+lsi)*1]), &(inteval->stack[((hsi*45+218)*1+lsi)*1]), &(inteval->stack[((hsi*45+545)*1+lsi)*1]), &(inteval->stack[((hsi*45+936)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+3841)*1+lsi)*1]), &(inteval->stack[((hsi*45+981)*1+lsi)*1]), &(inteval->stack[((hsi*36+3721)*1+lsi)*1]), &(inteval->stack[((hsi*36+654)*1+lsi)*1]),1);
HRRPart1bra0ket0i001d(inteval, &(inteval->stack[((hsi*168+2389)*1+lsi)*1]), &(inteval->stack[((hsi*108+3841)*1+lsi)*1]), &(inteval->stack[((hsi*84+3757)*1+lsi)*1]), &(inteval->stack[((hsi*84+3061)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+3721)*1+lsi)*1]), &(inteval->stack[((hsi*36+154)*1+lsi)*1]), &(inteval->stack[((hsi*36+481)*1+lsi)*1]), &(inteval->stack[((hsi*36+872)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+936)*1+lsi)*1]), &(inteval->stack[((hsi*28+190)*1+lsi)*1]), &(inteval->stack[((hsi*28+517)*1+lsi)*1]), &(inteval->stack[((hsi*28+908)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+3949)*1+lsi)*1]), &(inteval->stack[((hsi*36+3721)*1+lsi)*1]), &(inteval->stack[((hsi*28+936)*1+lsi)*1]), &(inteval->stack[((hsi*28+771)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+872)*1+lsi)*1]), &(inteval->stack[((hsi*45+109)*1+lsi)*1]), &(inteval->stack[((hsi*45+436)*1+lsi)*1]), &(inteval->stack[((hsi*45+827)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+917)*1+lsi)*1]), &(inteval->stack[((hsi*45+872)*1+lsi)*1]), &(inteval->stack[((hsi*36+3721)*1+lsi)*1]), &(inteval->stack[((hsi*36+654)*1+lsi)*1]),1);
HRRPart1bra0ket0i010d(inteval, &(inteval->stack[((hsi*168+2221)*1+lsi)*1]), &(inteval->stack[((hsi*108+917)*1+lsi)*1]), &(inteval->stack[((hsi*84+3949)*1+lsi)*1]), &(inteval->stack[((hsi*84+3061)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+3721)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*36+372)*1+lsi)*1]), &(inteval->stack[((hsi*36+735)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+827)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]), &(inteval->stack[((hsi*28+408)*1+lsi)*1]), &(inteval->stack[((hsi*28+799)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+4033)*1+lsi)*1]), &(inteval->stack[((hsi*36+3721)*1+lsi)*1]), &(inteval->stack[((hsi*28+827)*1+lsi)*1]), &(inteval->stack[((hsi*28+771)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+735)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+327)*1+lsi)*1]), &(inteval->stack[((hsi*45+690)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+780)*1+lsi)*1]), &(inteval->stack[((hsi*45+735)*1+lsi)*1]), &(inteval->stack[((hsi*36+3721)*1+lsi)*1]), &(inteval->stack[((hsi*36+654)*1+lsi)*1]),1);
HRRPart1bra0ket0i100d(inteval, &(inteval->stack[((hsi*168+2053)*1+lsi)*1]), &(inteval->stack[((hsi*108+780)*1+lsi)*1]), &(inteval->stack[((hsi*84+4033)*1+lsi)*1]), &(inteval->stack[((hsi*84+3061)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+654)*1+lsi)*1]), &(inteval->stack[((hsi*36+590)*1+lsi)*1]), &(inteval->stack[((hsi*28+626)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4117)*1+lsi)*1]), &(inteval->stack[((hsi*45+545)*1+lsi)*1]), &(inteval->stack[((hsi*36+590)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+1885)*1+lsi)*1]), &(inteval->stack[((hsi*108+4117)*1+lsi)*1]), &(inteval->stack[((hsi*84+654)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+545)*1+lsi)*1]), &(inteval->stack[((hsi*36+481)*1+lsi)*1]), &(inteval->stack[((hsi*28+517)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4225)*1+lsi)*1]), &(inteval->stack[((hsi*45+436)*1+lsi)*1]), &(inteval->stack[((hsi*36+481)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+1717)*1+lsi)*1]), &(inteval->stack[((hsi*108+4225)*1+lsi)*1]), &(inteval->stack[((hsi*84+545)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+436)*1+lsi)*1]), &(inteval->stack[((hsi*36+372)*1+lsi)*1]), &(inteval->stack[((hsi*28+408)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4333)*1+lsi)*1]), &(inteval->stack[((hsi*45+327)*1+lsi)*1]), &(inteval->stack[((hsi*36+372)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+1549)*1+lsi)*1]), &(inteval->stack[((hsi*108+4333)*1+lsi)*1]), &(inteval->stack[((hsi*84+436)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+327)*1+lsi)*1]), &(inteval->stack[((hsi*36+263)*1+lsi)*1]), &(inteval->stack[((hsi*28+299)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4441)*1+lsi)*1]), &(inteval->stack[((hsi*45+218)*1+lsi)*1]), &(inteval->stack[((hsi*36+263)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+1381)*1+lsi)*1]), &(inteval->stack[((hsi*108+4441)*1+lsi)*1]), &(inteval->stack[((hsi*84+327)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+218)*1+lsi)*1]), &(inteval->stack[((hsi*36+154)*1+lsi)*1]), &(inteval->stack[((hsi*28+190)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4549)*1+lsi)*1]), &(inteval->stack[((hsi*45+109)*1+lsi)*1]), &(inteval->stack[((hsi*36+154)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+1213)*1+lsi)*1]), &(inteval->stack[((hsi*108+4549)*1+lsi)*1]), &(inteval->stack[((hsi*84+218)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+109)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4657)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+1045)*1+lsi)*1]), &(inteval->stack[((hsi*108+4657)*1+lsi)*1]), &(inteval->stack[((hsi*84+109)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*168+1045)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*168+1213)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*168+1381)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*168+1549)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*168+1717)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*168+1885)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*168+2053)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*168+2221)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*168+2389)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*168+2557)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*168+2725)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*168+2893)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
