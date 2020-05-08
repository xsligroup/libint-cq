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
#include <CR_DerivGaussP1InBra_aB_P__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_P__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_P__0__K__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3915)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+11691)*1+lsi)*1]), &(inteval->stack[((hsi*135+2448)*1+lsi)*1]), &(inteval->stack[((hsi*108+2883)*1+lsi)*1]),3);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*324+12015)*1+lsi)*1]), &(inteval->stack[((hsi*135+3672)*1+lsi)*1]), &(inteval->stack[((hsi*108+3807)*1+lsi)*1]), &(inteval->stack[((hsi*108+2883)*1+lsi)*1]),3);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*405+12339)*1+lsi)*1]), &(inteval->stack[((hsi*165+3507)*1+lsi)*1]), &(inteval->stack[((hsi*135+3672)*1+lsi)*1]), &(inteval->stack[((hsi*135+2448)*1+lsi)*1]),3);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*648+11043)*1+lsi)*1]), &(inteval->stack[((hsi*405+12339)*1+lsi)*1]), &(inteval->stack[((hsi*324+12015)*1+lsi)*1]), &(inteval->stack[((hsi*324+11691)*1+lsi)*1]),3);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*324+12744)*1+lsi)*1]), &(inteval->stack[((hsi*135+3264)*1+lsi)*1]), &(inteval->stack[((hsi*108+3399)*1+lsi)*1]), &(inteval->stack[((hsi*108+2883)*1+lsi)*1]),3);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*405+13068)*1+lsi)*1]), &(inteval->stack[((hsi*165+3099)*1+lsi)*1]), &(inteval->stack[((hsi*135+3264)*1+lsi)*1]), &(inteval->stack[((hsi*135+2448)*1+lsi)*1]),3);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*648+10395)*1+lsi)*1]), &(inteval->stack[((hsi*405+13068)*1+lsi)*1]), &(inteval->stack[((hsi*324+12744)*1+lsi)*1]), &(inteval->stack[((hsi*324+11691)*1+lsi)*1]),3);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*324+13473)*1+lsi)*1]), &(inteval->stack[((hsi*135+2748)*1+lsi)*1]), &(inteval->stack[((hsi*108+2991)*1+lsi)*1]), &(inteval->stack[((hsi*108+2883)*1+lsi)*1]),3);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*405+13797)*1+lsi)*1]), &(inteval->stack[((hsi*165+2583)*1+lsi)*1]), &(inteval->stack[((hsi*135+2748)*1+lsi)*1]), &(inteval->stack[((hsi*135+2448)*1+lsi)*1]),3);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*648+9747)*1+lsi)*1]), &(inteval->stack[((hsi*405+13797)*1+lsi)*1]), &(inteval->stack[((hsi*324+13473)*1+lsi)*1]), &(inteval->stack[((hsi*324+11691)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+14202)*1+lsi)*1]), &(inteval->stack[((hsi*135+981)*1+lsi)*1]), &(inteval->stack[((hsi*135+2205)*1+lsi)*1]), &(inteval->stack[((hsi*135+3672)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+3672)*1+lsi)*1]), &(inteval->stack[((hsi*108+1116)*1+lsi)*1]), &(inteval->stack[((hsi*108+2340)*1+lsi)*1]), &(inteval->stack[((hsi*108+3807)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*324+14337)*1+lsi)*1]), &(inteval->stack[((hsi*135+14202)*1+lsi)*1]), &(inteval->stack[((hsi*108+3672)*1+lsi)*1]), &(inteval->stack[((hsi*108+2883)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*165+3672)*1+lsi)*1]), &(inteval->stack[((hsi*165+816)*1+lsi)*1]), &(inteval->stack[((hsi*165+2040)*1+lsi)*1]), &(inteval->stack[((hsi*165+3507)*1+lsi)*1]));
HRRPart1bra0ket0l001p(inteval, &(inteval->stack[((hsi*405+14661)*1+lsi)*1]), &(inteval->stack[((hsi*165+3672)*1+lsi)*1]), &(inteval->stack[((hsi*135+14202)*1+lsi)*1]), &(inteval->stack[((hsi*135+2448)*1+lsi)*1]),3);
HRRPart1bra0ket0k001d(inteval, &(inteval->stack[((hsi*648+9099)*1+lsi)*1]), &(inteval->stack[((hsi*405+14661)*1+lsi)*1]), &(inteval->stack[((hsi*324+14337)*1+lsi)*1]), &(inteval->stack[((hsi*324+11691)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+14202)*1+lsi)*1]), &(inteval->stack[((hsi*135+573)*1+lsi)*1]), &(inteval->stack[((hsi*135+1797)*1+lsi)*1]), &(inteval->stack[((hsi*135+3264)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+3507)*1+lsi)*1]), &(inteval->stack[((hsi*108+708)*1+lsi)*1]), &(inteval->stack[((hsi*108+1932)*1+lsi)*1]), &(inteval->stack[((hsi*108+3399)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*324+15066)*1+lsi)*1]), &(inteval->stack[((hsi*135+14202)*1+lsi)*1]), &(inteval->stack[((hsi*108+3507)*1+lsi)*1]), &(inteval->stack[((hsi*108+2883)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*165+3264)*1+lsi)*1]), &(inteval->stack[((hsi*165+408)*1+lsi)*1]), &(inteval->stack[((hsi*165+1632)*1+lsi)*1]), &(inteval->stack[((hsi*165+3099)*1+lsi)*1]));
HRRPart1bra0ket0l010p(inteval, &(inteval->stack[((hsi*405+3429)*1+lsi)*1]), &(inteval->stack[((hsi*165+3264)*1+lsi)*1]), &(inteval->stack[((hsi*135+14202)*1+lsi)*1]), &(inteval->stack[((hsi*135+2448)*1+lsi)*1]),3);
HRRPart1bra0ket0k010d(inteval, &(inteval->stack[((hsi*648+8451)*1+lsi)*1]), &(inteval->stack[((hsi*405+3429)*1+lsi)*1]), &(inteval->stack[((hsi*324+15066)*1+lsi)*1]), &(inteval->stack[((hsi*324+11691)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+14202)*1+lsi)*1]), &(inteval->stack[((hsi*135+165)*1+lsi)*1]), &(inteval->stack[((hsi*135+1389)*1+lsi)*1]), &(inteval->stack[((hsi*135+2748)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+3099)*1+lsi)*1]), &(inteval->stack[((hsi*108+300)*1+lsi)*1]), &(inteval->stack[((hsi*108+1524)*1+lsi)*1]), &(inteval->stack[((hsi*108+2991)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*324+15390)*1+lsi)*1]), &(inteval->stack[((hsi*135+14202)*1+lsi)*1]), &(inteval->stack[((hsi*108+3099)*1+lsi)*1]), &(inteval->stack[((hsi*108+2883)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*165+2748)*1+lsi)*1]), &(inteval->stack[((hsi*165+0)*1+lsi)*1]), &(inteval->stack[((hsi*165+1224)*1+lsi)*1]), &(inteval->stack[((hsi*165+2583)*1+lsi)*1]));
HRRPart1bra0ket0l100p(inteval, &(inteval->stack[((hsi*405+2913)*1+lsi)*1]), &(inteval->stack[((hsi*165+2748)*1+lsi)*1]), &(inteval->stack[((hsi*135+14202)*1+lsi)*1]), &(inteval->stack[((hsi*135+2448)*1+lsi)*1]),3);
HRRPart1bra0ket0k100d(inteval, &(inteval->stack[((hsi*648+7803)*1+lsi)*1]), &(inteval->stack[((hsi*405+2913)*1+lsi)*1]), &(inteval->stack[((hsi*324+15390)*1+lsi)*1]), &(inteval->stack[((hsi*324+11691)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+2448)*1+lsi)*1]), &(inteval->stack[((hsi*135+2205)*1+lsi)*1]), &(inteval->stack[((hsi*108+2340)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+15714)*1+lsi)*1]), &(inteval->stack[((hsi*165+2040)*1+lsi)*1]), &(inteval->stack[((hsi*135+2205)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+7155)*1+lsi)*1]), &(inteval->stack[((hsi*405+15714)*1+lsi)*1]), &(inteval->stack[((hsi*324+2448)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+2040)*1+lsi)*1]), &(inteval->stack[((hsi*135+1797)*1+lsi)*1]), &(inteval->stack[((hsi*108+1932)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+16119)*1+lsi)*1]), &(inteval->stack[((hsi*165+1632)*1+lsi)*1]), &(inteval->stack[((hsi*135+1797)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+6507)*1+lsi)*1]), &(inteval->stack[((hsi*405+16119)*1+lsi)*1]), &(inteval->stack[((hsi*324+2040)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+1632)*1+lsi)*1]), &(inteval->stack[((hsi*135+1389)*1+lsi)*1]), &(inteval->stack[((hsi*108+1524)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+16524)*1+lsi)*1]), &(inteval->stack[((hsi*165+1224)*1+lsi)*1]), &(inteval->stack[((hsi*135+1389)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+5859)*1+lsi)*1]), &(inteval->stack[((hsi*405+16524)*1+lsi)*1]), &(inteval->stack[((hsi*324+1632)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+1224)*1+lsi)*1]), &(inteval->stack[((hsi*135+981)*1+lsi)*1]), &(inteval->stack[((hsi*108+1116)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+16929)*1+lsi)*1]), &(inteval->stack[((hsi*165+816)*1+lsi)*1]), &(inteval->stack[((hsi*135+981)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+5211)*1+lsi)*1]), &(inteval->stack[((hsi*405+16929)*1+lsi)*1]), &(inteval->stack[((hsi*324+1224)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+816)*1+lsi)*1]), &(inteval->stack[((hsi*135+573)*1+lsi)*1]), &(inteval->stack[((hsi*108+708)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+17334)*1+lsi)*1]), &(inteval->stack[((hsi*165+408)*1+lsi)*1]), &(inteval->stack[((hsi*135+573)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+4563)*1+lsi)*1]), &(inteval->stack[((hsi*405+17334)*1+lsi)*1]), &(inteval->stack[((hsi*324+816)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+408)*1+lsi)*1]), &(inteval->stack[((hsi*135+165)*1+lsi)*1]), &(inteval->stack[((hsi*108+300)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+17739)*1+lsi)*1]), &(inteval->stack[((hsi*165+0)*1+lsi)*1]), &(inteval->stack[((hsi*135+165)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+3915)*1+lsi)*1]), &(inteval->stack[((hsi*405+17739)*1+lsi)*1]), &(inteval->stack[((hsi*324+408)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*648+3915)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*648+4563)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*648+5211)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*648+5859)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*648+6507)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*648+7155)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*648+7803)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*648+8451)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*648+9099)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*648+9747)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*648+10395)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*648+11043)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
