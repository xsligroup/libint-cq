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
#include <CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_G__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_G__0__K__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11475)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1620+29295)*1+lsi)*1]), &(inteval->stack[((hsi*675+10260)*1+lsi)*1]), &(inteval->stack[((hsi*540+10935)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1620+27675)*1+lsi)*1]), &(inteval->stack[((hsi*675+9045)*1+lsi)*1]), &(inteval->stack[((hsi*540+9720)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1620+26055)*1+lsi)*1]), &(inteval->stack[((hsi*675+7830)*1+lsi)*1]), &(inteval->stack[((hsi*540+8505)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+30915)*1+lsi)*1]), &(inteval->stack[((hsi*540+3645)*1+lsi)*1]), &(inteval->stack[((hsi*540+7290)*1+lsi)*1]), &(inteval->stack[((hsi*540+10935)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+31455)*1+lsi)*1]), &(inteval->stack[((hsi*675+2970)*1+lsi)*1]), &(inteval->stack[((hsi*675+6615)*1+lsi)*1]), &(inteval->stack[((hsi*675+10260)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*1620+24435)*1+lsi)*1]), &(inteval->stack[((hsi*675+31455)*1+lsi)*1]), &(inteval->stack[((hsi*540+30915)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+32130)*1+lsi)*1]), &(inteval->stack[((hsi*540+2430)*1+lsi)*1]), &(inteval->stack[((hsi*540+6075)*1+lsi)*1]), &(inteval->stack[((hsi*540+9720)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+32670)*1+lsi)*1]), &(inteval->stack[((hsi*675+1755)*1+lsi)*1]), &(inteval->stack[((hsi*675+5400)*1+lsi)*1]), &(inteval->stack[((hsi*675+9045)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*1620+22815)*1+lsi)*1]), &(inteval->stack[((hsi*675+32670)*1+lsi)*1]), &(inteval->stack[((hsi*540+32130)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+33345)*1+lsi)*1]), &(inteval->stack[((hsi*540+1215)*1+lsi)*1]), &(inteval->stack[((hsi*540+4860)*1+lsi)*1]), &(inteval->stack[((hsi*540+8505)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+33885)*1+lsi)*1]), &(inteval->stack[((hsi*675+540)*1+lsi)*1]), &(inteval->stack[((hsi*675+4185)*1+lsi)*1]), &(inteval->stack[((hsi*675+7830)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*1620+21195)*1+lsi)*1]), &(inteval->stack[((hsi*675+33885)*1+lsi)*1]), &(inteval->stack[((hsi*540+33345)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+19575)*1+lsi)*1]), &(inteval->stack[((hsi*675+6615)*1+lsi)*1]), &(inteval->stack[((hsi*540+7290)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+17955)*1+lsi)*1]), &(inteval->stack[((hsi*675+5400)*1+lsi)*1]), &(inteval->stack[((hsi*540+6075)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+16335)*1+lsi)*1]), &(inteval->stack[((hsi*675+4185)*1+lsi)*1]), &(inteval->stack[((hsi*540+4860)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+14715)*1+lsi)*1]), &(inteval->stack[((hsi*675+2970)*1+lsi)*1]), &(inteval->stack[((hsi*540+3645)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+13095)*1+lsi)*1]), &(inteval->stack[((hsi*675+1755)*1+lsi)*1]), &(inteval->stack[((hsi*540+2430)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+11475)*1+lsi)*1]), &(inteval->stack[((hsi*675+540)*1+lsi)*1]), &(inteval->stack[((hsi*540+1215)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1620+11475)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1620+13095)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1620+14715)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1620+16335)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1620+17955)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1620+19575)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1620+21195)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1620+22815)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1620+24435)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1620+26055)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1620+27675)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1620+29295)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
