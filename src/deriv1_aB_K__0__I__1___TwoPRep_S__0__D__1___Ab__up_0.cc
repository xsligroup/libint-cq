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
#include <CR_DerivGaussP1InBra_aB_K__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_K__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_K__0__I__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,37620)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_K__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+110196)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23544)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27756)*1+lsi)*1]),36);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*3024+113220)*1+lsi)*1]), &(inteval->stack[((hsi*1296+35316)*1+lsi)*1]), &(inteval->stack[((hsi*1008+36612)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27756)*1+lsi)*1]),36);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3888+116244)*1+lsi)*1]), &(inteval->stack[((hsi*1620+33696)*1+lsi)*1]), &(inteval->stack[((hsi*1296+35316)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23544)*1+lsi)*1]),36);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*6048+104148)*1+lsi)*1]), &(inteval->stack[((hsi*3888+116244)*1+lsi)*1]), &(inteval->stack[((hsi*3024+113220)*1+lsi)*1]), &(inteval->stack[((hsi*3024+110196)*1+lsi)*1]),36);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*3024+120132)*1+lsi)*1]), &(inteval->stack[((hsi*1296+31392)*1+lsi)*1]), &(inteval->stack[((hsi*1008+32688)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27756)*1+lsi)*1]),36);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3888+123156)*1+lsi)*1]), &(inteval->stack[((hsi*1620+29772)*1+lsi)*1]), &(inteval->stack[((hsi*1296+31392)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23544)*1+lsi)*1]),36);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*6048+98100)*1+lsi)*1]), &(inteval->stack[((hsi*3888+123156)*1+lsi)*1]), &(inteval->stack[((hsi*3024+120132)*1+lsi)*1]), &(inteval->stack[((hsi*3024+110196)*1+lsi)*1]),36);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*3024+127044)*1+lsi)*1]), &(inteval->stack[((hsi*1296+26460)*1+lsi)*1]), &(inteval->stack[((hsi*1008+28764)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27756)*1+lsi)*1]),36);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3888+130068)*1+lsi)*1]), &(inteval->stack[((hsi*1620+24840)*1+lsi)*1]), &(inteval->stack[((hsi*1296+26460)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23544)*1+lsi)*1]),36);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*6048+92052)*1+lsi)*1]), &(inteval->stack[((hsi*3888+130068)*1+lsi)*1]), &(inteval->stack[((hsi*3024+127044)*1+lsi)*1]), &(inteval->stack[((hsi*3024+110196)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+133956)*1+lsi)*1]), &(inteval->stack[((hsi*1296+9468)*1+lsi)*1]), &(inteval->stack[((hsi*1296+21240)*1+lsi)*1]), &(inteval->stack[((hsi*1296+35316)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+35316)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10764)*1+lsi)*1]), &(inteval->stack[((hsi*1008+22536)*1+lsi)*1]), &(inteval->stack[((hsi*1008+36612)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*3024+135252)*1+lsi)*1]), &(inteval->stack[((hsi*1296+133956)*1+lsi)*1]), &(inteval->stack[((hsi*1008+35316)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27756)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+35316)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7848)*1+lsi)*1]), &(inteval->stack[((hsi*1620+19620)*1+lsi)*1]), &(inteval->stack[((hsi*1620+33696)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*3888+138276)*1+lsi)*1]), &(inteval->stack[((hsi*1620+35316)*1+lsi)*1]), &(inteval->stack[((hsi*1296+133956)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23544)*1+lsi)*1]),36);
HRRPart1bra0ket0i001d(inteval, &(inteval->stack[((hsi*6048+86004)*1+lsi)*1]), &(inteval->stack[((hsi*3888+138276)*1+lsi)*1]), &(inteval->stack[((hsi*3024+135252)*1+lsi)*1]), &(inteval->stack[((hsi*3024+110196)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+133956)*1+lsi)*1]), &(inteval->stack[((hsi*1296+5544)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17316)*1+lsi)*1]), &(inteval->stack[((hsi*1296+31392)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+33696)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6840)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18612)*1+lsi)*1]), &(inteval->stack[((hsi*1008+32688)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*3024+142164)*1+lsi)*1]), &(inteval->stack[((hsi*1296+133956)*1+lsi)*1]), &(inteval->stack[((hsi*1008+33696)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27756)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+31392)*1+lsi)*1]), &(inteval->stack[((hsi*1620+3924)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15696)*1+lsi)*1]), &(inteval->stack[((hsi*1620+29772)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*3888+33012)*1+lsi)*1]), &(inteval->stack[((hsi*1620+31392)*1+lsi)*1]), &(inteval->stack[((hsi*1296+133956)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23544)*1+lsi)*1]),36);
HRRPart1bra0ket0i010d(inteval, &(inteval->stack[((hsi*6048+79956)*1+lsi)*1]), &(inteval->stack[((hsi*3888+33012)*1+lsi)*1]), &(inteval->stack[((hsi*3024+142164)*1+lsi)*1]), &(inteval->stack[((hsi*3024+110196)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+133956)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1620)*1+lsi)*1]), &(inteval->stack[((hsi*1296+13392)*1+lsi)*1]), &(inteval->stack[((hsi*1296+26460)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+29772)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2916)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14688)*1+lsi)*1]), &(inteval->stack[((hsi*1008+28764)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*3024+145188)*1+lsi)*1]), &(inteval->stack[((hsi*1296+133956)*1+lsi)*1]), &(inteval->stack[((hsi*1008+29772)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27756)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+26460)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11772)*1+lsi)*1]), &(inteval->stack[((hsi*1620+24840)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*3888+28080)*1+lsi)*1]), &(inteval->stack[((hsi*1620+26460)*1+lsi)*1]), &(inteval->stack[((hsi*1296+133956)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23544)*1+lsi)*1]),36);
HRRPart1bra0ket0i100d(inteval, &(inteval->stack[((hsi*6048+73908)*1+lsi)*1]), &(inteval->stack[((hsi*3888+28080)*1+lsi)*1]), &(inteval->stack[((hsi*3024+145188)*1+lsi)*1]), &(inteval->stack[((hsi*3024+110196)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+23544)*1+lsi)*1]), &(inteval->stack[((hsi*1296+21240)*1+lsi)*1]), &(inteval->stack[((hsi*1008+22536)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+148212)*1+lsi)*1]), &(inteval->stack[((hsi*1620+19620)*1+lsi)*1]), &(inteval->stack[((hsi*1296+21240)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+67860)*1+lsi)*1]), &(inteval->stack[((hsi*3888+148212)*1+lsi)*1]), &(inteval->stack[((hsi*3024+23544)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+19620)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17316)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18612)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+152100)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15696)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17316)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+61812)*1+lsi)*1]), &(inteval->stack[((hsi*3888+152100)*1+lsi)*1]), &(inteval->stack[((hsi*3024+19620)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+15696)*1+lsi)*1]), &(inteval->stack[((hsi*1296+13392)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14688)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+155988)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11772)*1+lsi)*1]), &(inteval->stack[((hsi*1296+13392)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+55764)*1+lsi)*1]), &(inteval->stack[((hsi*3888+155988)*1+lsi)*1]), &(inteval->stack[((hsi*3024+15696)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+11772)*1+lsi)*1]), &(inteval->stack[((hsi*1296+9468)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10764)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+159876)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7848)*1+lsi)*1]), &(inteval->stack[((hsi*1296+9468)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+49716)*1+lsi)*1]), &(inteval->stack[((hsi*3888+159876)*1+lsi)*1]), &(inteval->stack[((hsi*3024+11772)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+7848)*1+lsi)*1]), &(inteval->stack[((hsi*1296+5544)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6840)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+163764)*1+lsi)*1]), &(inteval->stack[((hsi*1620+3924)*1+lsi)*1]), &(inteval->stack[((hsi*1296+5544)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+43668)*1+lsi)*1]), &(inteval->stack[((hsi*3888+163764)*1+lsi)*1]), &(inteval->stack[((hsi*3024+7848)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+3924)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1620)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2916)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+167652)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1620)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+37620)*1+lsi)*1]), &(inteval->stack[((hsi*3888+167652)*1+lsi)*1]), &(inteval->stack[((hsi*3024+3924)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6048+37620)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*6048+43668)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*6048+49716)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*6048+55764)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*6048+61812)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*6048+67860)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*6048+73908)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*6048+79956)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*6048+86004)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*6048+92052)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*6048+98100)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*6048+104148)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
