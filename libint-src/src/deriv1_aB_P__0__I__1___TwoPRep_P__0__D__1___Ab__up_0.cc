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
#include <CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_P__0__I__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_P__0__I__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9540)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__I__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+27684)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),3);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*252+27936)*1+lsi)*1]), &(inteval->stack[((hsi*108+9348)*1+lsi)*1]), &(inteval->stack[((hsi*84+9456)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),3);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*324+28188)*1+lsi)*1]), &(inteval->stack[((hsi*135+9213)*1+lsi)*1]), &(inteval->stack[((hsi*108+9348)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),3);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*504+28512)*1+lsi)*1]), &(inteval->stack[((hsi*324+28188)*1+lsi)*1]), &(inteval->stack[((hsi*252+27936)*1+lsi)*1]), &(inteval->stack[((hsi*252+27684)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+27936)*1+lsi)*1]), &(inteval->stack[((hsi*216+6213)*1+lsi)*1]), &(inteval->stack[((hsi*168+6915)*1+lsi)*1]),6);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*504+29016)*1+lsi)*1]), &(inteval->stack[((hsi*216+8829)*1+lsi)*1]), &(inteval->stack[((hsi*168+9045)*1+lsi)*1]), &(inteval->stack[((hsi*168+6915)*1+lsi)*1]),6);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*648+29520)*1+lsi)*1]), &(inteval->stack[((hsi*270+8559)*1+lsi)*1]), &(inteval->stack[((hsi*216+8829)*1+lsi)*1]), &(inteval->stack[((hsi*216+6213)*1+lsi)*1]),6);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*1008+30168)*1+lsi)*1]), &(inteval->stack[((hsi*648+29520)*1+lsi)*1]), &(inteval->stack[((hsi*504+29016)*1+lsi)*1]), &(inteval->stack[((hsi*504+27936)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1512+26172)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30168)*1+lsi)*1]), &(inteval->stack[((hsi*504+28512)*1+lsi)*1]),168);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*252+29016)*1+lsi)*1]), &(inteval->stack[((hsi*108+8367)*1+lsi)*1]), &(inteval->stack[((hsi*84+8475)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),3);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*324+29268)*1+lsi)*1]), &(inteval->stack[((hsi*135+8232)*1+lsi)*1]), &(inteval->stack[((hsi*108+8367)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),3);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*504+29592)*1+lsi)*1]), &(inteval->stack[((hsi*324+29268)*1+lsi)*1]), &(inteval->stack[((hsi*252+29016)*1+lsi)*1]), &(inteval->stack[((hsi*252+27684)*1+lsi)*1]),3);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*504+29016)*1+lsi)*1]), &(inteval->stack[((hsi*216+7848)*1+lsi)*1]), &(inteval->stack[((hsi*168+8064)*1+lsi)*1]), &(inteval->stack[((hsi*168+6915)*1+lsi)*1]),6);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*648+31176)*1+lsi)*1]), &(inteval->stack[((hsi*270+7578)*1+lsi)*1]), &(inteval->stack[((hsi*216+7848)*1+lsi)*1]), &(inteval->stack[((hsi*216+6213)*1+lsi)*1]),6);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*1008+31824)*1+lsi)*1]), &(inteval->stack[((hsi*648+31176)*1+lsi)*1]), &(inteval->stack[((hsi*504+29016)*1+lsi)*1]), &(inteval->stack[((hsi*504+27936)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1512+24660)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31824)*1+lsi)*1]), &(inteval->stack[((hsi*504+29592)*1+lsi)*1]),168);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*252+31176)*1+lsi)*1]), &(inteval->stack[((hsi*108+7386)*1+lsi)*1]), &(inteval->stack[((hsi*84+7494)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),3);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*324+29016)*1+lsi)*1]), &(inteval->stack[((hsi*135+7251)*1+lsi)*1]), &(inteval->stack[((hsi*108+7386)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),3);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*504+32832)*1+lsi)*1]), &(inteval->stack[((hsi*324+29016)*1+lsi)*1]), &(inteval->stack[((hsi*252+31176)*1+lsi)*1]), &(inteval->stack[((hsi*252+27684)*1+lsi)*1]),3);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*504+31176)*1+lsi)*1]), &(inteval->stack[((hsi*216+6699)*1+lsi)*1]), &(inteval->stack[((hsi*168+7083)*1+lsi)*1]), &(inteval->stack[((hsi*168+6915)*1+lsi)*1]),6);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*648+33336)*1+lsi)*1]), &(inteval->stack[((hsi*270+6429)*1+lsi)*1]), &(inteval->stack[((hsi*216+6699)*1+lsi)*1]), &(inteval->stack[((hsi*216+6213)*1+lsi)*1]),6);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*1008+33984)*1+lsi)*1]), &(inteval->stack[((hsi*648+33336)*1+lsi)*1]), &(inteval->stack[((hsi*504+31176)*1+lsi)*1]), &(inteval->stack[((hsi*504+27936)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1512+23148)*1+lsi)*1]), &(inteval->stack[((hsi*1008+33984)*1+lsi)*1]), &(inteval->stack[((hsi*504+32832)*1+lsi)*1]),168);
CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+33336)*1+lsi)*1]), &(inteval->stack[((hsi*108+2910)*1+lsi)*1]), &(inteval->stack[((hsi*108+5853)*1+lsi)*1]), &(inteval->stack[((hsi*108+9348)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+31176)*1+lsi)*1]), &(inteval->stack[((hsi*84+3186)*1+lsi)*1]), &(inteval->stack[((hsi*84+6129)*1+lsi)*1]), &(inteval->stack[((hsi*84+9456)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*252+29016)*1+lsi)*1]), &(inteval->stack[((hsi*108+33336)*1+lsi)*1]), &(inteval->stack[((hsi*84+31176)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+31176)*1+lsi)*1]), &(inteval->stack[((hsi*135+2559)*1+lsi)*1]), &(inteval->stack[((hsi*135+5502)*1+lsi)*1]), &(inteval->stack[((hsi*135+9213)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*324+29268)*1+lsi)*1]), &(inteval->stack[((hsi*135+31176)*1+lsi)*1]), &(inteval->stack[((hsi*108+33336)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),3);
HRRPart1bra0ket0i001d(inteval, &(inteval->stack[((hsi*504+31176)*1+lsi)*1]), &(inteval->stack[((hsi*324+29268)*1+lsi)*1]), &(inteval->stack[((hsi*252+29016)*1+lsi)*1]), &(inteval->stack[((hsi*252+27684)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+33336)*1+lsi)*1]), &(inteval->stack[((hsi*216+2694)*1+lsi)*1]), &(inteval->stack[((hsi*216+5637)*1+lsi)*1]), &(inteval->stack[((hsi*216+8829)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+29016)*1+lsi)*1]), &(inteval->stack[((hsi*168+3018)*1+lsi)*1]), &(inteval->stack[((hsi*168+5961)*1+lsi)*1]), &(inteval->stack[((hsi*168+9045)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*504+8829)*1+lsi)*1]), &(inteval->stack[((hsi*216+33336)*1+lsi)*1]), &(inteval->stack[((hsi*168+29016)*1+lsi)*1]), &(inteval->stack[((hsi*168+6915)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+29016)*1+lsi)*1]), &(inteval->stack[((hsi*270+2289)*1+lsi)*1]), &(inteval->stack[((hsi*270+5232)*1+lsi)*1]), &(inteval->stack[((hsi*270+8559)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*648+34992)*1+lsi)*1]), &(inteval->stack[((hsi*270+29016)*1+lsi)*1]), &(inteval->stack[((hsi*216+33336)*1+lsi)*1]), &(inteval->stack[((hsi*216+6213)*1+lsi)*1]),6);
HRRPart1bra0ket0i001d(inteval, &(inteval->stack[((hsi*1008+35640)*1+lsi)*1]), &(inteval->stack[((hsi*648+34992)*1+lsi)*1]), &(inteval->stack[((hsi*504+8829)*1+lsi)*1]), &(inteval->stack[((hsi*504+27936)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1512+21636)*1+lsi)*1]), &(inteval->stack[((hsi*1008+35640)*1+lsi)*1]), &(inteval->stack[((hsi*504+31176)*1+lsi)*1]),168);
CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+8559)*1+lsi)*1]), &(inteval->stack[((hsi*108+1929)*1+lsi)*1]), &(inteval->stack[((hsi*108+4872)*1+lsi)*1]), &(inteval->stack[((hsi*108+8367)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+8667)*1+lsi)*1]), &(inteval->stack[((hsi*84+2205)*1+lsi)*1]), &(inteval->stack[((hsi*84+5148)*1+lsi)*1]), &(inteval->stack[((hsi*84+8475)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*252+8751)*1+lsi)*1]), &(inteval->stack[((hsi*108+8559)*1+lsi)*1]), &(inteval->stack[((hsi*84+8667)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+34992)*1+lsi)*1]), &(inteval->stack[((hsi*135+1578)*1+lsi)*1]), &(inteval->stack[((hsi*135+4521)*1+lsi)*1]), &(inteval->stack[((hsi*135+8232)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*324+33336)*1+lsi)*1]), &(inteval->stack[((hsi*135+34992)*1+lsi)*1]), &(inteval->stack[((hsi*108+8559)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),3);
HRRPart1bra0ket0i010d(inteval, &(inteval->stack[((hsi*504+34992)*1+lsi)*1]), &(inteval->stack[((hsi*324+33336)*1+lsi)*1]), &(inteval->stack[((hsi*252+8751)*1+lsi)*1]), &(inteval->stack[((hsi*252+27684)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+8232)*1+lsi)*1]), &(inteval->stack[((hsi*216+1713)*1+lsi)*1]), &(inteval->stack[((hsi*216+4656)*1+lsi)*1]), &(inteval->stack[((hsi*216+7848)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+8448)*1+lsi)*1]), &(inteval->stack[((hsi*168+2037)*1+lsi)*1]), &(inteval->stack[((hsi*168+4980)*1+lsi)*1]), &(inteval->stack[((hsi*168+8064)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*504+8616)*1+lsi)*1]), &(inteval->stack[((hsi*216+8232)*1+lsi)*1]), &(inteval->stack[((hsi*168+8448)*1+lsi)*1]), &(inteval->stack[((hsi*168+6915)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+33336)*1+lsi)*1]), &(inteval->stack[((hsi*270+1308)*1+lsi)*1]), &(inteval->stack[((hsi*270+4251)*1+lsi)*1]), &(inteval->stack[((hsi*270+7578)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*648+7578)*1+lsi)*1]), &(inteval->stack[((hsi*270+33336)*1+lsi)*1]), &(inteval->stack[((hsi*216+8232)*1+lsi)*1]), &(inteval->stack[((hsi*216+6213)*1+lsi)*1]),6);
HRRPart1bra0ket0i010d(inteval, &(inteval->stack[((hsi*1008+36648)*1+lsi)*1]), &(inteval->stack[((hsi*648+7578)*1+lsi)*1]), &(inteval->stack[((hsi*504+8616)*1+lsi)*1]), &(inteval->stack[((hsi*504+27936)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1512+20124)*1+lsi)*1]), &(inteval->stack[((hsi*1008+36648)*1+lsi)*1]), &(inteval->stack[((hsi*504+34992)*1+lsi)*1]),168);
CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+7578)*1+lsi)*1]), &(inteval->stack[((hsi*108+756)*1+lsi)*1]), &(inteval->stack[((hsi*108+3891)*1+lsi)*1]), &(inteval->stack[((hsi*108+7386)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+7686)*1+lsi)*1]), &(inteval->stack[((hsi*84+1140)*1+lsi)*1]), &(inteval->stack[((hsi*84+4167)*1+lsi)*1]), &(inteval->stack[((hsi*84+7494)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*252+7770)*1+lsi)*1]), &(inteval->stack[((hsi*108+7578)*1+lsi)*1]), &(inteval->stack[((hsi*84+7686)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*135+8022)*1+lsi)*1]), &(inteval->stack[((hsi*135+270)*1+lsi)*1]), &(inteval->stack[((hsi*135+3540)*1+lsi)*1]), &(inteval->stack[((hsi*135+7251)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*324+8157)*1+lsi)*1]), &(inteval->stack[((hsi*135+8022)*1+lsi)*1]), &(inteval->stack[((hsi*108+7578)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),3);
HRRPart1bra0ket0i100d(inteval, &(inteval->stack[((hsi*504+8481)*1+lsi)*1]), &(inteval->stack[((hsi*324+8157)*1+lsi)*1]), &(inteval->stack[((hsi*252+7770)*1+lsi)*1]), &(inteval->stack[((hsi*252+27684)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+7251)*1+lsi)*1]), &(inteval->stack[((hsi*216+540)*1+lsi)*1]), &(inteval->stack[((hsi*216+3675)*1+lsi)*1]), &(inteval->stack[((hsi*216+6699)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+7467)*1+lsi)*1]), &(inteval->stack[((hsi*168+972)*1+lsi)*1]), &(inteval->stack[((hsi*168+3999)*1+lsi)*1]), &(inteval->stack[((hsi*168+7083)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*504+7635)*1+lsi)*1]), &(inteval->stack[((hsi*216+7251)*1+lsi)*1]), &(inteval->stack[((hsi*168+7467)*1+lsi)*1]), &(inteval->stack[((hsi*168+6915)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+33336)*1+lsi)*1]), &(inteval->stack[((hsi*270+0)*1+lsi)*1]), &(inteval->stack[((hsi*270+3270)*1+lsi)*1]), &(inteval->stack[((hsi*270+6429)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*648+6429)*1+lsi)*1]), &(inteval->stack[((hsi*270+33336)*1+lsi)*1]), &(inteval->stack[((hsi*216+7251)*1+lsi)*1]), &(inteval->stack[((hsi*216+6213)*1+lsi)*1]),6);
HRRPart1bra0ket0i100d(inteval, &(inteval->stack[((hsi*1008+37656)*1+lsi)*1]), &(inteval->stack[((hsi*648+6429)*1+lsi)*1]), &(inteval->stack[((hsi*504+7635)*1+lsi)*1]), &(inteval->stack[((hsi*504+27936)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1512+18612)*1+lsi)*1]), &(inteval->stack[((hsi*1008+37656)*1+lsi)*1]), &(inteval->stack[((hsi*504+8481)*1+lsi)*1]),168);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*324+6213)*1+lsi)*1]), &(inteval->stack[((hsi*216+5637)*1+lsi)*1]), &(inteval->stack[((hsi*108+5853)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),36);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*252+6537)*1+lsi)*1]), &(inteval->stack[((hsi*168+5961)*1+lsi)*1]), &(inteval->stack[((hsi*84+6129)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+6789)*1+lsi)*1]), &(inteval->stack[((hsi*324+6213)*1+lsi)*1]), &(inteval->stack[((hsi*252+6537)*1+lsi)*1]),9);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*405+7545)*1+lsi)*1]), &(inteval->stack[((hsi*270+5232)*1+lsi)*1]), &(inteval->stack[((hsi*135+5502)*1+lsi)*1]), &(inteval->stack[((hsi*135+405)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+5232)*1+lsi)*1]), &(inteval->stack[((hsi*405+7545)*1+lsi)*1]), &(inteval->stack[((hsi*324+6213)*1+lsi)*1]),9);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1512+17100)*1+lsi)*1]), &(inteval->stack[((hsi*972+5232)*1+lsi)*1]), &(inteval->stack[((hsi*756+6789)*1+lsi)*1]),9);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*324+7545)*1+lsi)*1]), &(inteval->stack[((hsi*216+4656)*1+lsi)*1]), &(inteval->stack[((hsi*108+4872)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),36);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*252+27684)*1+lsi)*1]), &(inteval->stack[((hsi*168+4980)*1+lsi)*1]), &(inteval->stack[((hsi*84+5148)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+38664)*1+lsi)*1]), &(inteval->stack[((hsi*324+7545)*1+lsi)*1]), &(inteval->stack[((hsi*252+27684)*1+lsi)*1]),9);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*405+27684)*1+lsi)*1]), &(inteval->stack[((hsi*270+4251)*1+lsi)*1]), &(inteval->stack[((hsi*135+4521)*1+lsi)*1]), &(inteval->stack[((hsi*135+405)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+4251)*1+lsi)*1]), &(inteval->stack[((hsi*405+27684)*1+lsi)*1]), &(inteval->stack[((hsi*324+7545)*1+lsi)*1]),9);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1512+15588)*1+lsi)*1]), &(inteval->stack[((hsi*972+4251)*1+lsi)*1]), &(inteval->stack[((hsi*756+38664)*1+lsi)*1]),9);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*324+7545)*1+lsi)*1]), &(inteval->stack[((hsi*216+3675)*1+lsi)*1]), &(inteval->stack[((hsi*108+3891)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),36);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*252+27684)*1+lsi)*1]), &(inteval->stack[((hsi*168+3999)*1+lsi)*1]), &(inteval->stack[((hsi*84+4167)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+39420)*1+lsi)*1]), &(inteval->stack[((hsi*324+7545)*1+lsi)*1]), &(inteval->stack[((hsi*252+27684)*1+lsi)*1]),9);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*405+27684)*1+lsi)*1]), &(inteval->stack[((hsi*270+3270)*1+lsi)*1]), &(inteval->stack[((hsi*135+3540)*1+lsi)*1]), &(inteval->stack[((hsi*135+405)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+3270)*1+lsi)*1]), &(inteval->stack[((hsi*405+27684)*1+lsi)*1]), &(inteval->stack[((hsi*324+7545)*1+lsi)*1]),9);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1512+14076)*1+lsi)*1]), &(inteval->stack[((hsi*972+3270)*1+lsi)*1]), &(inteval->stack[((hsi*756+39420)*1+lsi)*1]),9);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*324+7545)*1+lsi)*1]), &(inteval->stack[((hsi*216+2694)*1+lsi)*1]), &(inteval->stack[((hsi*108+2910)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),36);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*252+27684)*1+lsi)*1]), &(inteval->stack[((hsi*168+3018)*1+lsi)*1]), &(inteval->stack[((hsi*84+3186)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+40176)*1+lsi)*1]), &(inteval->stack[((hsi*324+7545)*1+lsi)*1]), &(inteval->stack[((hsi*252+27684)*1+lsi)*1]),9);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*405+27684)*1+lsi)*1]), &(inteval->stack[((hsi*270+2289)*1+lsi)*1]), &(inteval->stack[((hsi*135+2559)*1+lsi)*1]), &(inteval->stack[((hsi*135+405)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+2289)*1+lsi)*1]), &(inteval->stack[((hsi*405+27684)*1+lsi)*1]), &(inteval->stack[((hsi*324+7545)*1+lsi)*1]),9);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1512+12564)*1+lsi)*1]), &(inteval->stack[((hsi*972+2289)*1+lsi)*1]), &(inteval->stack[((hsi*756+40176)*1+lsi)*1]),9);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*324+7545)*1+lsi)*1]), &(inteval->stack[((hsi*216+1713)*1+lsi)*1]), &(inteval->stack[((hsi*108+1929)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),36);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*252+27684)*1+lsi)*1]), &(inteval->stack[((hsi*168+2037)*1+lsi)*1]), &(inteval->stack[((hsi*84+2205)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+40932)*1+lsi)*1]), &(inteval->stack[((hsi*324+7545)*1+lsi)*1]), &(inteval->stack[((hsi*252+27684)*1+lsi)*1]),9);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*405+27684)*1+lsi)*1]), &(inteval->stack[((hsi*270+1308)*1+lsi)*1]), &(inteval->stack[((hsi*135+1578)*1+lsi)*1]), &(inteval->stack[((hsi*135+405)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+1308)*1+lsi)*1]), &(inteval->stack[((hsi*405+27684)*1+lsi)*1]), &(inteval->stack[((hsi*324+7545)*1+lsi)*1]),9);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1512+11052)*1+lsi)*1]), &(inteval->stack[((hsi*972+1308)*1+lsi)*1]), &(inteval->stack[((hsi*756+40932)*1+lsi)*1]),9);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*324+7545)*1+lsi)*1]), &(inteval->stack[((hsi*216+540)*1+lsi)*1]), &(inteval->stack[((hsi*108+756)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),36);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*252+27684)*1+lsi)*1]), &(inteval->stack[((hsi*168+972)*1+lsi)*1]), &(inteval->stack[((hsi*84+1140)*1+lsi)*1]), &(inteval->stack[((hsi*84+1224)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+540)*1+lsi)*1]), &(inteval->stack[((hsi*324+7545)*1+lsi)*1]), &(inteval->stack[((hsi*252+27684)*1+lsi)*1]),9);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*405+27684)*1+lsi)*1]), &(inteval->stack[((hsi*270+0)*1+lsi)*1]), &(inteval->stack[((hsi*135+270)*1+lsi)*1]), &(inteval->stack[((hsi*135+405)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*972+41688)*1+lsi)*1]), &(inteval->stack[((hsi*405+27684)*1+lsi)*1]), &(inteval->stack[((hsi*324+7545)*1+lsi)*1]),9);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1512+9540)*1+lsi)*1]), &(inteval->stack[((hsi*972+41688)*1+lsi)*1]), &(inteval->stack[((hsi*756+540)*1+lsi)*1]),9);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1512+9540)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1512+11052)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1512+12564)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1512+14076)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1512+15588)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1512+17100)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1512+18612)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1512+20124)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1512+21636)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1512+23148)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1512+24660)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1512+26172)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
