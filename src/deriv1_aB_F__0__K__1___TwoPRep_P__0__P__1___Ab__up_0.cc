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
#include <CR_DerivGaussP1InBra_aB_F__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100p.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_F__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__K__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,19575)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*1080+58455)*1+lsi)*1]), &(inteval->stack[((hsi*540+15615)*1+lsi)*1]), &(inteval->stack[((hsi*360+18405)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),36);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*1350+59535)*1+lsi)*1]), &(inteval->stack[((hsi*675+13725)*1+lsi)*1]), &(inteval->stack[((hsi*450+17145)*1+lsi)*1]), &(inteval->stack[((hsi*450+19125)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3240+35775)*1+lsi)*1]), &(inteval->stack[((hsi*1350+59535)*1+lsi)*1]), &(inteval->stack[((hsi*1080+58455)*1+lsi)*1]),30);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*1080+60885)*1+lsi)*1]), &(inteval->stack[((hsi*540+9540)*1+lsi)*1]), &(inteval->stack[((hsi*360+12330)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),36);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*1350+61965)*1+lsi)*1]), &(inteval->stack[((hsi*675+7650)*1+lsi)*1]), &(inteval->stack[((hsi*450+11070)*1+lsi)*1]), &(inteval->stack[((hsi*450+19125)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3240+32535)*1+lsi)*1]), &(inteval->stack[((hsi*1350+61965)*1+lsi)*1]), &(inteval->stack[((hsi*1080+60885)*1+lsi)*1]),30);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*1080+63315)*1+lsi)*1]), &(inteval->stack[((hsi*540+3105)*1+lsi)*1]), &(inteval->stack[((hsi*360+6255)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),36);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*1350+64395)*1+lsi)*1]), &(inteval->stack[((hsi*675+1215)*1+lsi)*1]), &(inteval->stack[((hsi*450+4995)*1+lsi)*1]), &(inteval->stack[((hsi*450+19125)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3240+29295)*1+lsi)*1]), &(inteval->stack[((hsi*1350+64395)*1+lsi)*1]), &(inteval->stack[((hsi*1080+63315)*1+lsi)*1]),30);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*1080+65745)*1+lsi)*1]), &(inteval->stack[((hsi*540+15075)*1+lsi)*1]), &(inteval->stack[((hsi*360+18045)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),36);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*1350+66825)*1+lsi)*1]), &(inteval->stack[((hsi*675+13050)*1+lsi)*1]), &(inteval->stack[((hsi*450+16695)*1+lsi)*1]), &(inteval->stack[((hsi*450+19125)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3240+26055)*1+lsi)*1]), &(inteval->stack[((hsi*1350+66825)*1+lsi)*1]), &(inteval->stack[((hsi*1080+65745)*1+lsi)*1]),30);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*1080+68175)*1+lsi)*1]), &(inteval->stack[((hsi*540+9000)*1+lsi)*1]), &(inteval->stack[((hsi*360+11970)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),36);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*1350+69255)*1+lsi)*1]), &(inteval->stack[((hsi*675+6975)*1+lsi)*1]), &(inteval->stack[((hsi*450+10620)*1+lsi)*1]), &(inteval->stack[((hsi*450+19125)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3240+22815)*1+lsi)*1]), &(inteval->stack[((hsi*1350+69255)*1+lsi)*1]), &(inteval->stack[((hsi*1080+68175)*1+lsi)*1]),30);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*1080+70605)*1+lsi)*1]), &(inteval->stack[((hsi*540+2565)*1+lsi)*1]), &(inteval->stack[((hsi*360+5895)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),36);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*1350+71685)*1+lsi)*1]), &(inteval->stack[((hsi*675+540)*1+lsi)*1]), &(inteval->stack[((hsi*450+4545)*1+lsi)*1]), &(inteval->stack[((hsi*450+19125)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3240+19575)*1+lsi)*1]), &(inteval->stack[((hsi*1350+71685)*1+lsi)*1]), &(inteval->stack[((hsi*1080+70605)*1+lsi)*1]),30);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1080+73035)*1+lsi)*1]), &(inteval->stack[((hsi*450+17595)*1+lsi)*1]), &(inteval->stack[((hsi*360+18765)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),10);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1620+74115)*1+lsi)*1]), &(inteval->stack[((hsi*675+14400)*1+lsi)*1]), &(inteval->stack[((hsi*540+16155)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3240+55215)*1+lsi)*1]), &(inteval->stack[((hsi*1620+74115)*1+lsi)*1]), &(inteval->stack[((hsi*1080+73035)*1+lsi)*1]),108);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1080+75735)*1+lsi)*1]), &(inteval->stack[((hsi*450+11520)*1+lsi)*1]), &(inteval->stack[((hsi*360+12690)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),10);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1620+76815)*1+lsi)*1]), &(inteval->stack[((hsi*675+8325)*1+lsi)*1]), &(inteval->stack[((hsi*540+10080)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3240+51975)*1+lsi)*1]), &(inteval->stack[((hsi*1620+76815)*1+lsi)*1]), &(inteval->stack[((hsi*1080+75735)*1+lsi)*1]),108);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1080+78435)*1+lsi)*1]), &(inteval->stack[((hsi*450+5445)*1+lsi)*1]), &(inteval->stack[((hsi*360+6615)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),10);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1620+79515)*1+lsi)*1]), &(inteval->stack[((hsi*675+1890)*1+lsi)*1]), &(inteval->stack[((hsi*540+3645)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3240+48735)*1+lsi)*1]), &(inteval->stack[((hsi*1620+79515)*1+lsi)*1]), &(inteval->stack[((hsi*1080+78435)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+19125)*1+lsi)*1]), &(inteval->stack[((hsi*360+18045)*1+lsi)*1]), &(inteval->stack[((hsi*360+18405)*1+lsi)*1]), &(inteval->stack[((hsi*360+18765)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+18045)*1+lsi)*1]), &(inteval->stack[((hsi*450+16695)*1+lsi)*1]), &(inteval->stack[((hsi*450+17145)*1+lsi)*1]), &(inteval->stack[((hsi*450+17595)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*1080+16695)*1+lsi)*1]), &(inteval->stack[((hsi*450+18045)*1+lsi)*1]), &(inteval->stack[((hsi*360+19125)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+17775)*1+lsi)*1]), &(inteval->stack[((hsi*540+15075)*1+lsi)*1]), &(inteval->stack[((hsi*540+15615)*1+lsi)*1]), &(inteval->stack[((hsi*540+16155)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+15075)*1+lsi)*1]), &(inteval->stack[((hsi*675+13050)*1+lsi)*1]), &(inteval->stack[((hsi*675+13725)*1+lsi)*1]), &(inteval->stack[((hsi*675+14400)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*1620+13050)*1+lsi)*1]), &(inteval->stack[((hsi*675+15075)*1+lsi)*1]), &(inteval->stack[((hsi*540+17775)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3240+45495)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13050)*1+lsi)*1]), &(inteval->stack[((hsi*1080+16695)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+14670)*1+lsi)*1]), &(inteval->stack[((hsi*360+11970)*1+lsi)*1]), &(inteval->stack[((hsi*360+12330)*1+lsi)*1]), &(inteval->stack[((hsi*360+12690)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+17775)*1+lsi)*1]), &(inteval->stack[((hsi*450+10620)*1+lsi)*1]), &(inteval->stack[((hsi*450+11070)*1+lsi)*1]), &(inteval->stack[((hsi*450+11520)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*1080+10620)*1+lsi)*1]), &(inteval->stack[((hsi*450+17775)*1+lsi)*1]), &(inteval->stack[((hsi*360+14670)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+14670)*1+lsi)*1]), &(inteval->stack[((hsi*540+9000)*1+lsi)*1]), &(inteval->stack[((hsi*540+9540)*1+lsi)*1]), &(inteval->stack[((hsi*540+10080)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+17775)*1+lsi)*1]), &(inteval->stack[((hsi*675+6975)*1+lsi)*1]), &(inteval->stack[((hsi*675+7650)*1+lsi)*1]), &(inteval->stack[((hsi*675+8325)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*1620+6975)*1+lsi)*1]), &(inteval->stack[((hsi*675+17775)*1+lsi)*1]), &(inteval->stack[((hsi*540+14670)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3240+42255)*1+lsi)*1]), &(inteval->stack[((hsi*1620+6975)*1+lsi)*1]), &(inteval->stack[((hsi*1080+10620)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+8595)*1+lsi)*1]), &(inteval->stack[((hsi*360+5895)*1+lsi)*1]), &(inteval->stack[((hsi*360+6255)*1+lsi)*1]), &(inteval->stack[((hsi*360+6615)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+14670)*1+lsi)*1]), &(inteval->stack[((hsi*450+4545)*1+lsi)*1]), &(inteval->stack[((hsi*450+4995)*1+lsi)*1]), &(inteval->stack[((hsi*450+5445)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*1080+4545)*1+lsi)*1]), &(inteval->stack[((hsi*450+14670)*1+lsi)*1]), &(inteval->stack[((hsi*360+8595)*1+lsi)*1]), &(inteval->stack[((hsi*360+4185)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+14670)*1+lsi)*1]), &(inteval->stack[((hsi*540+2565)*1+lsi)*1]), &(inteval->stack[((hsi*540+3105)*1+lsi)*1]), &(inteval->stack[((hsi*540+3645)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+8595)*1+lsi)*1]), &(inteval->stack[((hsi*675+540)*1+lsi)*1]), &(inteval->stack[((hsi*675+1215)*1+lsi)*1]), &(inteval->stack[((hsi*675+1890)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*1620+540)*1+lsi)*1]), &(inteval->stack[((hsi*675+8595)*1+lsi)*1]), &(inteval->stack[((hsi*540+14670)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3240+39015)*1+lsi)*1]), &(inteval->stack[((hsi*1620+540)*1+lsi)*1]), &(inteval->stack[((hsi*1080+4545)*1+lsi)*1]),108);
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
