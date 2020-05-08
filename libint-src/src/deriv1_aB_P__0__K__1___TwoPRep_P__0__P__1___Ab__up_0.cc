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
#include <CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart0bra0ket0pp001.h>
#include <HRRPart0bra0ket0pp010.h>
#include <HRRPart0bra0ket0pp100.h>
#include <HRRPart0bra0ket0p001p.h>
#include <HRRPart0bra0ket0p010p.h>
#include <HRRPart0bra0ket0p100p.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_P__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_P__0__K__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7020)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*324+18684)*1+lsi)*1]), &(inteval->stack[((hsi*216+5724)*1+lsi)*1]), &(inteval->stack[((hsi*108+6669)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),36);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*405+19008)*1+lsi)*1]), &(inteval->stack[((hsi*270+4968)*1+lsi)*1]), &(inteval->stack[((hsi*135+6291)*1+lsi)*1]), &(inteval->stack[((hsi*135+6885)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+11880)*1+lsi)*1]), &(inteval->stack[((hsi*405+19008)*1+lsi)*1]), &(inteval->stack[((hsi*324+18684)*1+lsi)*1]),9);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*324+19413)*1+lsi)*1]), &(inteval->stack[((hsi*216+3537)*1+lsi)*1]), &(inteval->stack[((hsi*108+4482)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),36);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*405+19737)*1+lsi)*1]), &(inteval->stack[((hsi*270+2781)*1+lsi)*1]), &(inteval->stack[((hsi*135+4104)*1+lsi)*1]), &(inteval->stack[((hsi*135+6885)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+10908)*1+lsi)*1]), &(inteval->stack[((hsi*405+19737)*1+lsi)*1]), &(inteval->stack[((hsi*324+19413)*1+lsi)*1]),9);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*324+20142)*1+lsi)*1]), &(inteval->stack[((hsi*216+1242)*1+lsi)*1]), &(inteval->stack[((hsi*108+2295)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),36);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*405+20466)*1+lsi)*1]), &(inteval->stack[((hsi*270+486)*1+lsi)*1]), &(inteval->stack[((hsi*135+1917)*1+lsi)*1]), &(inteval->stack[((hsi*135+6885)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+9936)*1+lsi)*1]), &(inteval->stack[((hsi*405+20466)*1+lsi)*1]), &(inteval->stack[((hsi*324+20142)*1+lsi)*1]),9);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*324+20871)*1+lsi)*1]), &(inteval->stack[((hsi*216+5508)*1+lsi)*1]), &(inteval->stack[((hsi*108+6561)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),36);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*405+21195)*1+lsi)*1]), &(inteval->stack[((hsi*270+4698)*1+lsi)*1]), &(inteval->stack[((hsi*135+6156)*1+lsi)*1]), &(inteval->stack[((hsi*135+6885)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+8964)*1+lsi)*1]), &(inteval->stack[((hsi*405+21195)*1+lsi)*1]), &(inteval->stack[((hsi*324+20871)*1+lsi)*1]),9);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*324+21600)*1+lsi)*1]), &(inteval->stack[((hsi*216+3321)*1+lsi)*1]), &(inteval->stack[((hsi*108+4374)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),36);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*405+21924)*1+lsi)*1]), &(inteval->stack[((hsi*270+2511)*1+lsi)*1]), &(inteval->stack[((hsi*135+3969)*1+lsi)*1]), &(inteval->stack[((hsi*135+6885)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+7992)*1+lsi)*1]), &(inteval->stack[((hsi*405+21924)*1+lsi)*1]), &(inteval->stack[((hsi*324+21600)*1+lsi)*1]),9);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*324+22329)*1+lsi)*1]), &(inteval->stack[((hsi*216+1026)*1+lsi)*1]), &(inteval->stack[((hsi*108+2187)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),36);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*405+22653)*1+lsi)*1]), &(inteval->stack[((hsi*270+216)*1+lsi)*1]), &(inteval->stack[((hsi*135+1782)*1+lsi)*1]), &(inteval->stack[((hsi*135+6885)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+7020)*1+lsi)*1]), &(inteval->stack[((hsi*405+22653)*1+lsi)*1]), &(inteval->stack[((hsi*324+22329)*1+lsi)*1]),9);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*324+23058)*1+lsi)*1]), &(inteval->stack[((hsi*135+6426)*1+lsi)*1]), &(inteval->stack[((hsi*108+6777)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),3);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*648+23382)*1+lsi)*1]), &(inteval->stack[((hsi*270+5238)*1+lsi)*1]), &(inteval->stack[((hsi*216+5940)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*972+17712)*1+lsi)*1]), &(inteval->stack[((hsi*648+23382)*1+lsi)*1]), &(inteval->stack[((hsi*324+23058)*1+lsi)*1]),108);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*324+24030)*1+lsi)*1]), &(inteval->stack[((hsi*135+4239)*1+lsi)*1]), &(inteval->stack[((hsi*108+4590)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),3);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*648+24354)*1+lsi)*1]), &(inteval->stack[((hsi*270+3051)*1+lsi)*1]), &(inteval->stack[((hsi*216+3753)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*972+16740)*1+lsi)*1]), &(inteval->stack[((hsi*648+24354)*1+lsi)*1]), &(inteval->stack[((hsi*324+24030)*1+lsi)*1]),108);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*324+25002)*1+lsi)*1]), &(inteval->stack[((hsi*135+2052)*1+lsi)*1]), &(inteval->stack[((hsi*108+2403)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),3);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*648+25326)*1+lsi)*1]), &(inteval->stack[((hsi*270+756)*1+lsi)*1]), &(inteval->stack[((hsi*216+1458)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*972+15768)*1+lsi)*1]), &(inteval->stack[((hsi*648+25326)*1+lsi)*1]), &(inteval->stack[((hsi*324+25002)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+6885)*1+lsi)*1]), &(inteval->stack[((hsi*108+6561)*1+lsi)*1]), &(inteval->stack[((hsi*108+6669)*1+lsi)*1]), &(inteval->stack[((hsi*108+6777)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+6561)*1+lsi)*1]), &(inteval->stack[((hsi*135+6156)*1+lsi)*1]), &(inteval->stack[((hsi*135+6291)*1+lsi)*1]), &(inteval->stack[((hsi*135+6426)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*324+6156)*1+lsi)*1]), &(inteval->stack[((hsi*135+6561)*1+lsi)*1]), &(inteval->stack[((hsi*108+6885)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+6480)*1+lsi)*1]), &(inteval->stack[((hsi*216+5508)*1+lsi)*1]), &(inteval->stack[((hsi*216+5724)*1+lsi)*1]), &(inteval->stack[((hsi*216+5940)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+5508)*1+lsi)*1]), &(inteval->stack[((hsi*270+4698)*1+lsi)*1]), &(inteval->stack[((hsi*270+4968)*1+lsi)*1]), &(inteval->stack[((hsi*270+5238)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*648+4698)*1+lsi)*1]), &(inteval->stack[((hsi*270+5508)*1+lsi)*1]), &(inteval->stack[((hsi*216+6480)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*972+14796)*1+lsi)*1]), &(inteval->stack[((hsi*648+4698)*1+lsi)*1]), &(inteval->stack[((hsi*324+6156)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+5346)*1+lsi)*1]), &(inteval->stack[((hsi*108+4374)*1+lsi)*1]), &(inteval->stack[((hsi*108+4482)*1+lsi)*1]), &(inteval->stack[((hsi*108+4590)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+5454)*1+lsi)*1]), &(inteval->stack[((hsi*135+3969)*1+lsi)*1]), &(inteval->stack[((hsi*135+4104)*1+lsi)*1]), &(inteval->stack[((hsi*135+4239)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*324+3969)*1+lsi)*1]), &(inteval->stack[((hsi*135+5454)*1+lsi)*1]), &(inteval->stack[((hsi*108+5346)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+5346)*1+lsi)*1]), &(inteval->stack[((hsi*216+3321)*1+lsi)*1]), &(inteval->stack[((hsi*216+3537)*1+lsi)*1]), &(inteval->stack[((hsi*216+3753)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+3321)*1+lsi)*1]), &(inteval->stack[((hsi*270+2511)*1+lsi)*1]), &(inteval->stack[((hsi*270+2781)*1+lsi)*1]), &(inteval->stack[((hsi*270+3051)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*648+2511)*1+lsi)*1]), &(inteval->stack[((hsi*270+3321)*1+lsi)*1]), &(inteval->stack[((hsi*216+5346)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*972+13824)*1+lsi)*1]), &(inteval->stack[((hsi*648+2511)*1+lsi)*1]), &(inteval->stack[((hsi*324+3969)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+3159)*1+lsi)*1]), &(inteval->stack[((hsi*108+2187)*1+lsi)*1]), &(inteval->stack[((hsi*108+2295)*1+lsi)*1]), &(inteval->stack[((hsi*108+2403)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+5346)*1+lsi)*1]), &(inteval->stack[((hsi*135+1782)*1+lsi)*1]), &(inteval->stack[((hsi*135+1917)*1+lsi)*1]), &(inteval->stack[((hsi*135+2052)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*324+1782)*1+lsi)*1]), &(inteval->stack[((hsi*135+5346)*1+lsi)*1]), &(inteval->stack[((hsi*108+3159)*1+lsi)*1]), &(inteval->stack[((hsi*108+1674)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+5346)*1+lsi)*1]), &(inteval->stack[((hsi*216+1026)*1+lsi)*1]), &(inteval->stack[((hsi*216+1242)*1+lsi)*1]), &(inteval->stack[((hsi*216+1458)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+3159)*1+lsi)*1]), &(inteval->stack[((hsi*270+216)*1+lsi)*1]), &(inteval->stack[((hsi*270+486)*1+lsi)*1]), &(inteval->stack[((hsi*270+756)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*648+216)*1+lsi)*1]), &(inteval->stack[((hsi*270+3159)*1+lsi)*1]), &(inteval->stack[((hsi*216+5346)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*972+12852)*1+lsi)*1]), &(inteval->stack[((hsi*648+216)*1+lsi)*1]), &(inteval->stack[((hsi*324+1782)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*972+7020)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*972+7992)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*972+8964)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*972+9936)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*972+10908)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*972+11880)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*972+12852)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*972+13824)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*972+14796)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*972+15768)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*972+16740)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*972+17712)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
