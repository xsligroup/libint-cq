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
#include <CR_DerivGaussP1InBra_aB_G__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_G__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_G__0__K__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,19575)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+58455)*1+lsi)*1]), &(inteval->stack[((hsi*675+12240)*1+lsi)*1]), &(inteval->stack[((hsi*540+14415)*1+lsi)*1]),15);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1620+60075)*1+lsi)*1]), &(inteval->stack[((hsi*675+18360)*1+lsi)*1]), &(inteval->stack[((hsi*540+19035)*1+lsi)*1]), &(inteval->stack[((hsi*540+14415)*1+lsi)*1]),15);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*2025+61695)*1+lsi)*1]), &(inteval->stack[((hsi*825+17535)*1+lsi)*1]), &(inteval->stack[((hsi*675+18360)*1+lsi)*1]), &(inteval->stack[((hsi*675+12240)*1+lsi)*1]),15);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*3240+55215)*1+lsi)*1]), &(inteval->stack[((hsi*2025+61695)*1+lsi)*1]), &(inteval->stack[((hsi*1620+60075)*1+lsi)*1]), &(inteval->stack[((hsi*1620+58455)*1+lsi)*1]),15);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1620+63720)*1+lsi)*1]), &(inteval->stack[((hsi*675+16320)*1+lsi)*1]), &(inteval->stack[((hsi*540+16995)*1+lsi)*1]), &(inteval->stack[((hsi*540+14415)*1+lsi)*1]),15);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*2025+65340)*1+lsi)*1]), &(inteval->stack[((hsi*825+15495)*1+lsi)*1]), &(inteval->stack[((hsi*675+16320)*1+lsi)*1]), &(inteval->stack[((hsi*675+12240)*1+lsi)*1]),15);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*3240+51975)*1+lsi)*1]), &(inteval->stack[((hsi*2025+65340)*1+lsi)*1]), &(inteval->stack[((hsi*1620+63720)*1+lsi)*1]), &(inteval->stack[((hsi*1620+58455)*1+lsi)*1]),15);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1620+67365)*1+lsi)*1]), &(inteval->stack[((hsi*675+13740)*1+lsi)*1]), &(inteval->stack[((hsi*540+14955)*1+lsi)*1]), &(inteval->stack[((hsi*540+14415)*1+lsi)*1]),15);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*2025+68985)*1+lsi)*1]), &(inteval->stack[((hsi*825+12915)*1+lsi)*1]), &(inteval->stack[((hsi*675+13740)*1+lsi)*1]), &(inteval->stack[((hsi*675+12240)*1+lsi)*1]),15);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*3240+48735)*1+lsi)*1]), &(inteval->stack[((hsi*2025+68985)*1+lsi)*1]), &(inteval->stack[((hsi*1620+67365)*1+lsi)*1]), &(inteval->stack[((hsi*1620+58455)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+71010)*1+lsi)*1]), &(inteval->stack[((hsi*675+4905)*1+lsi)*1]), &(inteval->stack[((hsi*675+11025)*1+lsi)*1]), &(inteval->stack[((hsi*675+18360)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+18360)*1+lsi)*1]), &(inteval->stack[((hsi*540+5580)*1+lsi)*1]), &(inteval->stack[((hsi*540+11700)*1+lsi)*1]), &(inteval->stack[((hsi*540+19035)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*1620+71685)*1+lsi)*1]), &(inteval->stack[((hsi*675+71010)*1+lsi)*1]), &(inteval->stack[((hsi*540+18360)*1+lsi)*1]), &(inteval->stack[((hsi*540+14415)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*825+18360)*1+lsi)*1]), &(inteval->stack[((hsi*825+4080)*1+lsi)*1]), &(inteval->stack[((hsi*825+10200)*1+lsi)*1]), &(inteval->stack[((hsi*825+17535)*1+lsi)*1]));
HRRPart1bra0ket0l001p(inteval, &(inteval->stack[((hsi*2025+73305)*1+lsi)*1]), &(inteval->stack[((hsi*825+18360)*1+lsi)*1]), &(inteval->stack[((hsi*675+71010)*1+lsi)*1]), &(inteval->stack[((hsi*675+12240)*1+lsi)*1]),15);
HRRPart1bra0ket0k001d(inteval, &(inteval->stack[((hsi*3240+45495)*1+lsi)*1]), &(inteval->stack[((hsi*2025+73305)*1+lsi)*1]), &(inteval->stack[((hsi*1620+71685)*1+lsi)*1]), &(inteval->stack[((hsi*1620+58455)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+71010)*1+lsi)*1]), &(inteval->stack[((hsi*675+2865)*1+lsi)*1]), &(inteval->stack[((hsi*675+8985)*1+lsi)*1]), &(inteval->stack[((hsi*675+16320)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+17535)*1+lsi)*1]), &(inteval->stack[((hsi*540+3540)*1+lsi)*1]), &(inteval->stack[((hsi*540+9660)*1+lsi)*1]), &(inteval->stack[((hsi*540+16995)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*1620+75330)*1+lsi)*1]), &(inteval->stack[((hsi*675+71010)*1+lsi)*1]), &(inteval->stack[((hsi*540+17535)*1+lsi)*1]), &(inteval->stack[((hsi*540+14415)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*825+16320)*1+lsi)*1]), &(inteval->stack[((hsi*825+2040)*1+lsi)*1]), &(inteval->stack[((hsi*825+8160)*1+lsi)*1]), &(inteval->stack[((hsi*825+15495)*1+lsi)*1]));
HRRPart1bra0ket0l010p(inteval, &(inteval->stack[((hsi*2025+17145)*1+lsi)*1]), &(inteval->stack[((hsi*825+16320)*1+lsi)*1]), &(inteval->stack[((hsi*675+71010)*1+lsi)*1]), &(inteval->stack[((hsi*675+12240)*1+lsi)*1]),15);
HRRPart1bra0ket0k010d(inteval, &(inteval->stack[((hsi*3240+42255)*1+lsi)*1]), &(inteval->stack[((hsi*2025+17145)*1+lsi)*1]), &(inteval->stack[((hsi*1620+75330)*1+lsi)*1]), &(inteval->stack[((hsi*1620+58455)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+71010)*1+lsi)*1]), &(inteval->stack[((hsi*675+825)*1+lsi)*1]), &(inteval->stack[((hsi*675+6945)*1+lsi)*1]), &(inteval->stack[((hsi*675+13740)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+15495)*1+lsi)*1]), &(inteval->stack[((hsi*540+1500)*1+lsi)*1]), &(inteval->stack[((hsi*540+7620)*1+lsi)*1]), &(inteval->stack[((hsi*540+14955)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*1620+76950)*1+lsi)*1]), &(inteval->stack[((hsi*675+71010)*1+lsi)*1]), &(inteval->stack[((hsi*540+15495)*1+lsi)*1]), &(inteval->stack[((hsi*540+14415)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*825+13740)*1+lsi)*1]), &(inteval->stack[((hsi*825+0)*1+lsi)*1]), &(inteval->stack[((hsi*825+6120)*1+lsi)*1]), &(inteval->stack[((hsi*825+12915)*1+lsi)*1]));
HRRPart1bra0ket0l100p(inteval, &(inteval->stack[((hsi*2025+14565)*1+lsi)*1]), &(inteval->stack[((hsi*825+13740)*1+lsi)*1]), &(inteval->stack[((hsi*675+71010)*1+lsi)*1]), &(inteval->stack[((hsi*675+12240)*1+lsi)*1]),15);
HRRPart1bra0ket0k100d(inteval, &(inteval->stack[((hsi*3240+39015)*1+lsi)*1]), &(inteval->stack[((hsi*2025+14565)*1+lsi)*1]), &(inteval->stack[((hsi*1620+76950)*1+lsi)*1]), &(inteval->stack[((hsi*1620+58455)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+12240)*1+lsi)*1]), &(inteval->stack[((hsi*675+11025)*1+lsi)*1]), &(inteval->stack[((hsi*540+11700)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+78570)*1+lsi)*1]), &(inteval->stack[((hsi*825+10200)*1+lsi)*1]), &(inteval->stack[((hsi*675+11025)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+35775)*1+lsi)*1]), &(inteval->stack[((hsi*2025+78570)*1+lsi)*1]), &(inteval->stack[((hsi*1620+12240)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+10200)*1+lsi)*1]), &(inteval->stack[((hsi*675+8985)*1+lsi)*1]), &(inteval->stack[((hsi*540+9660)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+80595)*1+lsi)*1]), &(inteval->stack[((hsi*825+8160)*1+lsi)*1]), &(inteval->stack[((hsi*675+8985)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+32535)*1+lsi)*1]), &(inteval->stack[((hsi*2025+80595)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10200)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+8160)*1+lsi)*1]), &(inteval->stack[((hsi*675+6945)*1+lsi)*1]), &(inteval->stack[((hsi*540+7620)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+82620)*1+lsi)*1]), &(inteval->stack[((hsi*825+6120)*1+lsi)*1]), &(inteval->stack[((hsi*675+6945)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+29295)*1+lsi)*1]), &(inteval->stack[((hsi*2025+82620)*1+lsi)*1]), &(inteval->stack[((hsi*1620+8160)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+6120)*1+lsi)*1]), &(inteval->stack[((hsi*675+4905)*1+lsi)*1]), &(inteval->stack[((hsi*540+5580)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+84645)*1+lsi)*1]), &(inteval->stack[((hsi*825+4080)*1+lsi)*1]), &(inteval->stack[((hsi*675+4905)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+26055)*1+lsi)*1]), &(inteval->stack[((hsi*2025+84645)*1+lsi)*1]), &(inteval->stack[((hsi*1620+6120)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+4080)*1+lsi)*1]), &(inteval->stack[((hsi*675+2865)*1+lsi)*1]), &(inteval->stack[((hsi*540+3540)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+86670)*1+lsi)*1]), &(inteval->stack[((hsi*825+2040)*1+lsi)*1]), &(inteval->stack[((hsi*675+2865)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+22815)*1+lsi)*1]), &(inteval->stack[((hsi*2025+86670)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4080)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+2040)*1+lsi)*1]), &(inteval->stack[((hsi*675+825)*1+lsi)*1]), &(inteval->stack[((hsi*540+1500)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+88695)*1+lsi)*1]), &(inteval->stack[((hsi*825+0)*1+lsi)*1]), &(inteval->stack[((hsi*675+825)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+19575)*1+lsi)*1]), &(inteval->stack[((hsi*2025+88695)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2040)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3240+19575)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3240+22815)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3240+26055)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3240+29295)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3240+32535)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3240+35775)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3240+39015)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3240+42255)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3240+45495)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*3240+48735)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*3240+51975)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*3240+55215)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
