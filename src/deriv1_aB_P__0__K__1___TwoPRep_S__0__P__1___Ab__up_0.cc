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
#include <CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_P__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_P__0__K__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2295)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__K__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*324+5859)*1+lsi)*1]), &(inteval->stack[((hsi*135+2052)*1+lsi)*1]), &(inteval->stack[((hsi*108+2187)*1+lsi)*1]), &(inteval->stack[((hsi*108+0)*1+lsi)*1]),3);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*324+5535)*1+lsi)*1]), &(inteval->stack[((hsi*135+1809)*1+lsi)*1]), &(inteval->stack[((hsi*108+1944)*1+lsi)*1]), &(inteval->stack[((hsi*108+0)*1+lsi)*1]),3);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*324+5211)*1+lsi)*1]), &(inteval->stack[((hsi*135+1566)*1+lsi)*1]), &(inteval->stack[((hsi*108+1701)*1+lsi)*1]), &(inteval->stack[((hsi*108+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+6183)*1+lsi)*1]), &(inteval->stack[((hsi*108+729)*1+lsi)*1]), &(inteval->stack[((hsi*108+1458)*1+lsi)*1]), &(inteval->stack[((hsi*108+2187)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+6291)*1+lsi)*1]), &(inteval->stack[((hsi*135+594)*1+lsi)*1]), &(inteval->stack[((hsi*135+1323)*1+lsi)*1]), &(inteval->stack[((hsi*135+2052)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*324+4887)*1+lsi)*1]), &(inteval->stack[((hsi*135+6291)*1+lsi)*1]), &(inteval->stack[((hsi*108+6183)*1+lsi)*1]), &(inteval->stack[((hsi*108+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+6426)*1+lsi)*1]), &(inteval->stack[((hsi*108+486)*1+lsi)*1]), &(inteval->stack[((hsi*108+1215)*1+lsi)*1]), &(inteval->stack[((hsi*108+1944)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+6534)*1+lsi)*1]), &(inteval->stack[((hsi*135+351)*1+lsi)*1]), &(inteval->stack[((hsi*135+1080)*1+lsi)*1]), &(inteval->stack[((hsi*135+1809)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*324+4563)*1+lsi)*1]), &(inteval->stack[((hsi*135+6534)*1+lsi)*1]), &(inteval->stack[((hsi*108+6426)*1+lsi)*1]), &(inteval->stack[((hsi*108+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+6669)*1+lsi)*1]), &(inteval->stack[((hsi*108+243)*1+lsi)*1]), &(inteval->stack[((hsi*108+972)*1+lsi)*1]), &(inteval->stack[((hsi*108+1701)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+6777)*1+lsi)*1]), &(inteval->stack[((hsi*135+108)*1+lsi)*1]), &(inteval->stack[((hsi*135+837)*1+lsi)*1]), &(inteval->stack[((hsi*135+1566)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*324+4239)*1+lsi)*1]), &(inteval->stack[((hsi*135+6777)*1+lsi)*1]), &(inteval->stack[((hsi*108+6669)*1+lsi)*1]), &(inteval->stack[((hsi*108+0)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+3915)*1+lsi)*1]), &(inteval->stack[((hsi*135+1323)*1+lsi)*1]), &(inteval->stack[((hsi*108+1458)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+3591)*1+lsi)*1]), &(inteval->stack[((hsi*135+1080)*1+lsi)*1]), &(inteval->stack[((hsi*108+1215)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+3267)*1+lsi)*1]), &(inteval->stack[((hsi*135+837)*1+lsi)*1]), &(inteval->stack[((hsi*108+972)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+2943)*1+lsi)*1]), &(inteval->stack[((hsi*135+594)*1+lsi)*1]), &(inteval->stack[((hsi*108+729)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+2619)*1+lsi)*1]), &(inteval->stack[((hsi*135+351)*1+lsi)*1]), &(inteval->stack[((hsi*108+486)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+2295)*1+lsi)*1]), &(inteval->stack[((hsi*135+108)*1+lsi)*1]), &(inteval->stack[((hsi*108+243)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*324+2295)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*324+2619)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*324+2943)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*324+3267)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*324+3591)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*324+3915)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*324+4239)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*324+4563)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*324+4887)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*324+5211)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*324+5535)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*324+5859)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
