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
#include <CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_P__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_P__0__I__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3135)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+9183)*1+lsi)*1]), &(inteval->stack[((hsi*108+1962)*1+lsi)*1]), &(inteval->stack[((hsi*84+2313)*1+lsi)*1]),3);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*252+9435)*1+lsi)*1]), &(inteval->stack[((hsi*108+2943)*1+lsi)*1]), &(inteval->stack[((hsi*84+3051)*1+lsi)*1]), &(inteval->stack[((hsi*84+2313)*1+lsi)*1]),3);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*324+9687)*1+lsi)*1]), &(inteval->stack[((hsi*135+2808)*1+lsi)*1]), &(inteval->stack[((hsi*108+2943)*1+lsi)*1]), &(inteval->stack[((hsi*108+1962)*1+lsi)*1]),3);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*504+8679)*1+lsi)*1]), &(inteval->stack[((hsi*324+9687)*1+lsi)*1]), &(inteval->stack[((hsi*252+9435)*1+lsi)*1]), &(inteval->stack[((hsi*252+9183)*1+lsi)*1]),3);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*252+10011)*1+lsi)*1]), &(inteval->stack[((hsi*108+2616)*1+lsi)*1]), &(inteval->stack[((hsi*84+2724)*1+lsi)*1]), &(inteval->stack[((hsi*84+2313)*1+lsi)*1]),3);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*324+10263)*1+lsi)*1]), &(inteval->stack[((hsi*135+2481)*1+lsi)*1]), &(inteval->stack[((hsi*108+2616)*1+lsi)*1]), &(inteval->stack[((hsi*108+1962)*1+lsi)*1]),3);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*504+8175)*1+lsi)*1]), &(inteval->stack[((hsi*324+10263)*1+lsi)*1]), &(inteval->stack[((hsi*252+10011)*1+lsi)*1]), &(inteval->stack[((hsi*252+9183)*1+lsi)*1]),3);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*252+10587)*1+lsi)*1]), &(inteval->stack[((hsi*108+2205)*1+lsi)*1]), &(inteval->stack[((hsi*84+2397)*1+lsi)*1]), &(inteval->stack[((hsi*84+2313)*1+lsi)*1]),3);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*324+10839)*1+lsi)*1]), &(inteval->stack[((hsi*135+2070)*1+lsi)*1]), &(inteval->stack[((hsi*108+2205)*1+lsi)*1]), &(inteval->stack[((hsi*108+1962)*1+lsi)*1]),3);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*504+7671)*1+lsi)*1]), &(inteval->stack[((hsi*324+10839)*1+lsi)*1]), &(inteval->stack[((hsi*252+10587)*1+lsi)*1]), &(inteval->stack[((hsi*252+9183)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+11163)*1+lsi)*1]), &(inteval->stack[((hsi*108+789)*1+lsi)*1]), &(inteval->stack[((hsi*108+1770)*1+lsi)*1]), &(inteval->stack[((hsi*108+2943)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+2943)*1+lsi)*1]), &(inteval->stack[((hsi*84+897)*1+lsi)*1]), &(inteval->stack[((hsi*84+1878)*1+lsi)*1]), &(inteval->stack[((hsi*84+3051)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*252+11271)*1+lsi)*1]), &(inteval->stack[((hsi*108+11163)*1+lsi)*1]), &(inteval->stack[((hsi*84+2943)*1+lsi)*1]), &(inteval->stack[((hsi*84+2313)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+2943)*1+lsi)*1]), &(inteval->stack[((hsi*135+654)*1+lsi)*1]), &(inteval->stack[((hsi*135+1635)*1+lsi)*1]), &(inteval->stack[((hsi*135+2808)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*324+11523)*1+lsi)*1]), &(inteval->stack[((hsi*135+2943)*1+lsi)*1]), &(inteval->stack[((hsi*108+11163)*1+lsi)*1]), &(inteval->stack[((hsi*108+1962)*1+lsi)*1]),3);
HRRPart1bra0ket0i001d(inteval, &(inteval->stack[((hsi*504+7167)*1+lsi)*1]), &(inteval->stack[((hsi*324+11523)*1+lsi)*1]), &(inteval->stack[((hsi*252+11271)*1+lsi)*1]), &(inteval->stack[((hsi*252+9183)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+11163)*1+lsi)*1]), &(inteval->stack[((hsi*108+462)*1+lsi)*1]), &(inteval->stack[((hsi*108+1443)*1+lsi)*1]), &(inteval->stack[((hsi*108+2616)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+2808)*1+lsi)*1]), &(inteval->stack[((hsi*84+570)*1+lsi)*1]), &(inteval->stack[((hsi*84+1551)*1+lsi)*1]), &(inteval->stack[((hsi*84+2724)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*252+11847)*1+lsi)*1]), &(inteval->stack[((hsi*108+11163)*1+lsi)*1]), &(inteval->stack[((hsi*84+2808)*1+lsi)*1]), &(inteval->stack[((hsi*84+2313)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+2616)*1+lsi)*1]), &(inteval->stack[((hsi*135+327)*1+lsi)*1]), &(inteval->stack[((hsi*135+1308)*1+lsi)*1]), &(inteval->stack[((hsi*135+2481)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*324+2751)*1+lsi)*1]), &(inteval->stack[((hsi*135+2616)*1+lsi)*1]), &(inteval->stack[((hsi*108+11163)*1+lsi)*1]), &(inteval->stack[((hsi*108+1962)*1+lsi)*1]),3);
HRRPart1bra0ket0i010d(inteval, &(inteval->stack[((hsi*504+6663)*1+lsi)*1]), &(inteval->stack[((hsi*324+2751)*1+lsi)*1]), &(inteval->stack[((hsi*252+11847)*1+lsi)*1]), &(inteval->stack[((hsi*252+9183)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+11163)*1+lsi)*1]), &(inteval->stack[((hsi*108+135)*1+lsi)*1]), &(inteval->stack[((hsi*108+1116)*1+lsi)*1]), &(inteval->stack[((hsi*108+2205)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+2481)*1+lsi)*1]), &(inteval->stack[((hsi*84+243)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]), &(inteval->stack[((hsi*84+2397)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*252+12099)*1+lsi)*1]), &(inteval->stack[((hsi*108+11163)*1+lsi)*1]), &(inteval->stack[((hsi*84+2481)*1+lsi)*1]), &(inteval->stack[((hsi*84+2313)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+2205)*1+lsi)*1]), &(inteval->stack[((hsi*135+0)*1+lsi)*1]), &(inteval->stack[((hsi*135+981)*1+lsi)*1]), &(inteval->stack[((hsi*135+2070)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*324+2340)*1+lsi)*1]), &(inteval->stack[((hsi*135+2205)*1+lsi)*1]), &(inteval->stack[((hsi*108+11163)*1+lsi)*1]), &(inteval->stack[((hsi*108+1962)*1+lsi)*1]),3);
HRRPart1bra0ket0i100d(inteval, &(inteval->stack[((hsi*504+6159)*1+lsi)*1]), &(inteval->stack[((hsi*324+2340)*1+lsi)*1]), &(inteval->stack[((hsi*252+12099)*1+lsi)*1]), &(inteval->stack[((hsi*252+9183)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+1962)*1+lsi)*1]), &(inteval->stack[((hsi*108+1770)*1+lsi)*1]), &(inteval->stack[((hsi*84+1878)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+12351)*1+lsi)*1]), &(inteval->stack[((hsi*135+1635)*1+lsi)*1]), &(inteval->stack[((hsi*108+1770)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+5655)*1+lsi)*1]), &(inteval->stack[((hsi*324+12351)*1+lsi)*1]), &(inteval->stack[((hsi*252+1962)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+1635)*1+lsi)*1]), &(inteval->stack[((hsi*108+1443)*1+lsi)*1]), &(inteval->stack[((hsi*84+1551)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+12675)*1+lsi)*1]), &(inteval->stack[((hsi*135+1308)*1+lsi)*1]), &(inteval->stack[((hsi*108+1443)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+5151)*1+lsi)*1]), &(inteval->stack[((hsi*324+12675)*1+lsi)*1]), &(inteval->stack[((hsi*252+1635)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+1308)*1+lsi)*1]), &(inteval->stack[((hsi*108+1116)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+12999)*1+lsi)*1]), &(inteval->stack[((hsi*135+981)*1+lsi)*1]), &(inteval->stack[((hsi*108+1116)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+4647)*1+lsi)*1]), &(inteval->stack[((hsi*324+12999)*1+lsi)*1]), &(inteval->stack[((hsi*252+1308)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+981)*1+lsi)*1]), &(inteval->stack[((hsi*108+789)*1+lsi)*1]), &(inteval->stack[((hsi*84+897)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+13323)*1+lsi)*1]), &(inteval->stack[((hsi*135+654)*1+lsi)*1]), &(inteval->stack[((hsi*108+789)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+4143)*1+lsi)*1]), &(inteval->stack[((hsi*324+13323)*1+lsi)*1]), &(inteval->stack[((hsi*252+981)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+654)*1+lsi)*1]), &(inteval->stack[((hsi*108+462)*1+lsi)*1]), &(inteval->stack[((hsi*84+570)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+13647)*1+lsi)*1]), &(inteval->stack[((hsi*135+327)*1+lsi)*1]), &(inteval->stack[((hsi*108+462)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+3639)*1+lsi)*1]), &(inteval->stack[((hsi*324+13647)*1+lsi)*1]), &(inteval->stack[((hsi*252+654)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+327)*1+lsi)*1]), &(inteval->stack[((hsi*108+135)*1+lsi)*1]), &(inteval->stack[((hsi*84+243)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+13971)*1+lsi)*1]), &(inteval->stack[((hsi*135+0)*1+lsi)*1]), &(inteval->stack[((hsi*108+135)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+3135)*1+lsi)*1]), &(inteval->stack[((hsi*324+13971)*1+lsi)*1]), &(inteval->stack[((hsi*252+327)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*504+3135)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*504+3639)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*504+4143)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*504+4647)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*504+5151)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*504+5655)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*504+6159)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*504+6663)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*504+7167)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*504+7671)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*504+8175)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*504+8679)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
