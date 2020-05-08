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
#include <CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart0bra0ket0pp001.h>
#include <HRRPart0bra0ket0pp010.h>
#include <HRRPart0bra0ket0pp100.h>
#include <HRRPart0bra0ket0p001p.h>
#include <HRRPart0bra0ket0p010p.h>
#include <HRRPart0bra0ket0p100p.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001d.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010d.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100d.h>
#include <HRRPart1bra0ket0h100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_P__0__H__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_P__0__H__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7434)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__H__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+21042)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),3);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*189+21231)*1+lsi)*1]), &(inteval->stack[((hsi*84+7287)*1+lsi)*1]), &(inteval->stack[((hsi*63+7371)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),3);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*252+21420)*1+lsi)*1]), &(inteval->stack[((hsi*108+7179)*1+lsi)*1]), &(inteval->stack[((hsi*84+7287)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),3);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*378+21672)*1+lsi)*1]), &(inteval->stack[((hsi*252+21420)*1+lsi)*1]), &(inteval->stack[((hsi*189+21231)*1+lsi)*1]), &(inteval->stack[((hsi*189+21042)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+21231)*1+lsi)*1]), &(inteval->stack[((hsi*168+4845)*1+lsi)*1]), &(inteval->stack[((hsi*126+5397)*1+lsi)*1]),6);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*378+22050)*1+lsi)*1]), &(inteval->stack[((hsi*168+6885)*1+lsi)*1]), &(inteval->stack[((hsi*126+7053)*1+lsi)*1]), &(inteval->stack[((hsi*126+5397)*1+lsi)*1]),6);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*504+22428)*1+lsi)*1]), &(inteval->stack[((hsi*216+6669)*1+lsi)*1]), &(inteval->stack[((hsi*168+6885)*1+lsi)*1]), &(inteval->stack[((hsi*168+4845)*1+lsi)*1]),6);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*756+22932)*1+lsi)*1]), &(inteval->stack[((hsi*504+22428)*1+lsi)*1]), &(inteval->stack[((hsi*378+22050)*1+lsi)*1]), &(inteval->stack[((hsi*378+21231)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1134+19908)*1+lsi)*1]), &(inteval->stack[((hsi*756+22932)*1+lsi)*1]), &(inteval->stack[((hsi*378+21672)*1+lsi)*1]),126);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*189+22050)*1+lsi)*1]), &(inteval->stack[((hsi*84+6522)*1+lsi)*1]), &(inteval->stack[((hsi*63+6606)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),3);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*252+22239)*1+lsi)*1]), &(inteval->stack[((hsi*108+6414)*1+lsi)*1]), &(inteval->stack[((hsi*84+6522)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),3);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*378+22491)*1+lsi)*1]), &(inteval->stack[((hsi*252+22239)*1+lsi)*1]), &(inteval->stack[((hsi*189+22050)*1+lsi)*1]), &(inteval->stack[((hsi*189+21042)*1+lsi)*1]),3);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*378+22050)*1+lsi)*1]), &(inteval->stack[((hsi*168+6120)*1+lsi)*1]), &(inteval->stack[((hsi*126+6288)*1+lsi)*1]), &(inteval->stack[((hsi*126+5397)*1+lsi)*1]),6);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*504+23688)*1+lsi)*1]), &(inteval->stack[((hsi*216+5904)*1+lsi)*1]), &(inteval->stack[((hsi*168+6120)*1+lsi)*1]), &(inteval->stack[((hsi*168+4845)*1+lsi)*1]),6);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*756+24192)*1+lsi)*1]), &(inteval->stack[((hsi*504+23688)*1+lsi)*1]), &(inteval->stack[((hsi*378+22050)*1+lsi)*1]), &(inteval->stack[((hsi*378+21231)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1134+18774)*1+lsi)*1]), &(inteval->stack[((hsi*756+24192)*1+lsi)*1]), &(inteval->stack[((hsi*378+22491)*1+lsi)*1]),126);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*189+23688)*1+lsi)*1]), &(inteval->stack[((hsi*84+5757)*1+lsi)*1]), &(inteval->stack[((hsi*63+5841)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),3);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*252+22050)*1+lsi)*1]), &(inteval->stack[((hsi*108+5649)*1+lsi)*1]), &(inteval->stack[((hsi*84+5757)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),3);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*378+24948)*1+lsi)*1]), &(inteval->stack[((hsi*252+22050)*1+lsi)*1]), &(inteval->stack[((hsi*189+23688)*1+lsi)*1]), &(inteval->stack[((hsi*189+21042)*1+lsi)*1]),3);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*378+23688)*1+lsi)*1]), &(inteval->stack[((hsi*168+5229)*1+lsi)*1]), &(inteval->stack[((hsi*126+5523)*1+lsi)*1]), &(inteval->stack[((hsi*126+5397)*1+lsi)*1]),6);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*504+25326)*1+lsi)*1]), &(inteval->stack[((hsi*216+5013)*1+lsi)*1]), &(inteval->stack[((hsi*168+5229)*1+lsi)*1]), &(inteval->stack[((hsi*168+4845)*1+lsi)*1]),6);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*756+25830)*1+lsi)*1]), &(inteval->stack[((hsi*504+25326)*1+lsi)*1]), &(inteval->stack[((hsi*378+23688)*1+lsi)*1]), &(inteval->stack[((hsi*378+21231)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1134+17640)*1+lsi)*1]), &(inteval->stack[((hsi*756+25830)*1+lsi)*1]), &(inteval->stack[((hsi*378+24948)*1+lsi)*1]),126);
CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+25326)*1+lsi)*1]), &(inteval->stack[((hsi*84+2277)*1+lsi)*1]), &(inteval->stack[((hsi*84+4572)*1+lsi)*1]), &(inteval->stack[((hsi*84+7287)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+21609)*1+lsi)*1]), &(inteval->stack[((hsi*63+2487)*1+lsi)*1]), &(inteval->stack[((hsi*63+4782)*1+lsi)*1]), &(inteval->stack[((hsi*63+7371)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*189+23688)*1+lsi)*1]), &(inteval->stack[((hsi*84+25326)*1+lsi)*1]), &(inteval->stack[((hsi*63+21609)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+22050)*1+lsi)*1]), &(inteval->stack[((hsi*108+2001)*1+lsi)*1]), &(inteval->stack[((hsi*108+4296)*1+lsi)*1]), &(inteval->stack[((hsi*108+7179)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*252+25410)*1+lsi)*1]), &(inteval->stack[((hsi*108+22050)*1+lsi)*1]), &(inteval->stack[((hsi*84+25326)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),3);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*378+22050)*1+lsi)*1]), &(inteval->stack[((hsi*252+25410)*1+lsi)*1]), &(inteval->stack[((hsi*189+23688)*1+lsi)*1]), &(inteval->stack[((hsi*189+21042)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+25326)*1+lsi)*1]), &(inteval->stack[((hsi*168+2109)*1+lsi)*1]), &(inteval->stack[((hsi*168+4404)*1+lsi)*1]), &(inteval->stack[((hsi*168+6885)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+23688)*1+lsi)*1]), &(inteval->stack[((hsi*126+2361)*1+lsi)*1]), &(inteval->stack[((hsi*126+4656)*1+lsi)*1]), &(inteval->stack[((hsi*126+7053)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*378+23814)*1+lsi)*1]), &(inteval->stack[((hsi*168+25326)*1+lsi)*1]), &(inteval->stack[((hsi*126+23688)*1+lsi)*1]), &(inteval->stack[((hsi*126+5397)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+6885)*1+lsi)*1]), &(inteval->stack[((hsi*216+1785)*1+lsi)*1]), &(inteval->stack[((hsi*216+4080)*1+lsi)*1]), &(inteval->stack[((hsi*216+6669)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*504+26586)*1+lsi)*1]), &(inteval->stack[((hsi*216+6885)*1+lsi)*1]), &(inteval->stack[((hsi*168+25326)*1+lsi)*1]), &(inteval->stack[((hsi*168+4845)*1+lsi)*1]),6);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*756+6669)*1+lsi)*1]), &(inteval->stack[((hsi*504+26586)*1+lsi)*1]), &(inteval->stack[((hsi*378+23814)*1+lsi)*1]), &(inteval->stack[((hsi*378+21231)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1134+16506)*1+lsi)*1]), &(inteval->stack[((hsi*756+6669)*1+lsi)*1]), &(inteval->stack[((hsi*378+22050)*1+lsi)*1]),126);
CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+25326)*1+lsi)*1]), &(inteval->stack[((hsi*84+1512)*1+lsi)*1]), &(inteval->stack[((hsi*84+3807)*1+lsi)*1]), &(inteval->stack[((hsi*84+6522)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+21609)*1+lsi)*1]), &(inteval->stack[((hsi*63+1722)*1+lsi)*1]), &(inteval->stack[((hsi*63+4017)*1+lsi)*1]), &(inteval->stack[((hsi*63+6606)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*189+23688)*1+lsi)*1]), &(inteval->stack[((hsi*84+25326)*1+lsi)*1]), &(inteval->stack[((hsi*63+21609)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+25410)*1+lsi)*1]), &(inteval->stack[((hsi*108+1236)*1+lsi)*1]), &(inteval->stack[((hsi*108+3531)*1+lsi)*1]), &(inteval->stack[((hsi*108+6414)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*252+23877)*1+lsi)*1]), &(inteval->stack[((hsi*108+25410)*1+lsi)*1]), &(inteval->stack[((hsi*84+25326)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),3);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*378+25326)*1+lsi)*1]), &(inteval->stack[((hsi*252+23877)*1+lsi)*1]), &(inteval->stack[((hsi*189+23688)*1+lsi)*1]), &(inteval->stack[((hsi*189+21042)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+23688)*1+lsi)*1]), &(inteval->stack[((hsi*168+1344)*1+lsi)*1]), &(inteval->stack[((hsi*168+3639)*1+lsi)*1]), &(inteval->stack[((hsi*168+6120)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+25704)*1+lsi)*1]), &(inteval->stack[((hsi*126+1596)*1+lsi)*1]), &(inteval->stack[((hsi*126+3891)*1+lsi)*1]), &(inteval->stack[((hsi*126+6288)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*378+6120)*1+lsi)*1]), &(inteval->stack[((hsi*168+23688)*1+lsi)*1]), &(inteval->stack[((hsi*126+25704)*1+lsi)*1]), &(inteval->stack[((hsi*126+5397)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+23856)*1+lsi)*1]), &(inteval->stack[((hsi*216+1020)*1+lsi)*1]), &(inteval->stack[((hsi*216+3315)*1+lsi)*1]), &(inteval->stack[((hsi*216+5904)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*504+26586)*1+lsi)*1]), &(inteval->stack[((hsi*216+23856)*1+lsi)*1]), &(inteval->stack[((hsi*168+23688)*1+lsi)*1]), &(inteval->stack[((hsi*168+4845)*1+lsi)*1]),6);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*756+27090)*1+lsi)*1]), &(inteval->stack[((hsi*504+26586)*1+lsi)*1]), &(inteval->stack[((hsi*378+6120)*1+lsi)*1]), &(inteval->stack[((hsi*378+21231)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1134+15372)*1+lsi)*1]), &(inteval->stack[((hsi*756+27090)*1+lsi)*1]), &(inteval->stack[((hsi*378+25326)*1+lsi)*1]),126);
CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+5904)*1+lsi)*1]), &(inteval->stack[((hsi*84+600)*1+lsi)*1]), &(inteval->stack[((hsi*84+3042)*1+lsi)*1]), &(inteval->stack[((hsi*84+5757)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+21609)*1+lsi)*1]), &(inteval->stack[((hsi*63+894)*1+lsi)*1]), &(inteval->stack[((hsi*63+3252)*1+lsi)*1]), &(inteval->stack[((hsi*63+5841)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*189+5988)*1+lsi)*1]), &(inteval->stack[((hsi*84+5904)*1+lsi)*1]), &(inteval->stack[((hsi*63+21609)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+26586)*1+lsi)*1]), &(inteval->stack[((hsi*108+216)*1+lsi)*1]), &(inteval->stack[((hsi*108+2766)*1+lsi)*1]), &(inteval->stack[((hsi*108+5649)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*252+23688)*1+lsi)*1]), &(inteval->stack[((hsi*108+26586)*1+lsi)*1]), &(inteval->stack[((hsi*84+5904)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),3);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*378+26586)*1+lsi)*1]), &(inteval->stack[((hsi*252+23688)*1+lsi)*1]), &(inteval->stack[((hsi*189+5988)*1+lsi)*1]), &(inteval->stack[((hsi*189+21042)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+5649)*1+lsi)*1]), &(inteval->stack[((hsi*168+432)*1+lsi)*1]), &(inteval->stack[((hsi*168+2874)*1+lsi)*1]), &(inteval->stack[((hsi*168+5229)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+25704)*1+lsi)*1]), &(inteval->stack[((hsi*126+768)*1+lsi)*1]), &(inteval->stack[((hsi*126+3126)*1+lsi)*1]), &(inteval->stack[((hsi*126+5523)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*378+5817)*1+lsi)*1]), &(inteval->stack[((hsi*168+5649)*1+lsi)*1]), &(inteval->stack[((hsi*126+25704)*1+lsi)*1]), &(inteval->stack[((hsi*126+5397)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+23688)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]), &(inteval->stack[((hsi*216+2550)*1+lsi)*1]), &(inteval->stack[((hsi*216+5013)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*504+5013)*1+lsi)*1]), &(inteval->stack[((hsi*216+23688)*1+lsi)*1]), &(inteval->stack[((hsi*168+5649)*1+lsi)*1]), &(inteval->stack[((hsi*168+4845)*1+lsi)*1]),6);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*756+27846)*1+lsi)*1]), &(inteval->stack[((hsi*504+5013)*1+lsi)*1]), &(inteval->stack[((hsi*378+5817)*1+lsi)*1]), &(inteval->stack[((hsi*378+21231)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*1134+14238)*1+lsi)*1]), &(inteval->stack[((hsi*756+27846)*1+lsi)*1]), &(inteval->stack[((hsi*378+26586)*1+lsi)*1]),126);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*252+4845)*1+lsi)*1]), &(inteval->stack[((hsi*168+4404)*1+lsi)*1]), &(inteval->stack[((hsi*84+4572)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),28);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*189+5097)*1+lsi)*1]), &(inteval->stack[((hsi*126+4656)*1+lsi)*1]), &(inteval->stack[((hsi*63+4782)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+5286)*1+lsi)*1]), &(inteval->stack[((hsi*252+4845)*1+lsi)*1]), &(inteval->stack[((hsi*189+5097)*1+lsi)*1]),9);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*324+5853)*1+lsi)*1]), &(inteval->stack[((hsi*216+4080)*1+lsi)*1]), &(inteval->stack[((hsi*108+4296)*1+lsi)*1]), &(inteval->stack[((hsi*108+324)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+4080)*1+lsi)*1]), &(inteval->stack[((hsi*324+5853)*1+lsi)*1]), &(inteval->stack[((hsi*252+4845)*1+lsi)*1]),9);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1134+13104)*1+lsi)*1]), &(inteval->stack[((hsi*756+4080)*1+lsi)*1]), &(inteval->stack[((hsi*567+5286)*1+lsi)*1]),9);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*252+5853)*1+lsi)*1]), &(inteval->stack[((hsi*168+3639)*1+lsi)*1]), &(inteval->stack[((hsi*84+3807)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),28);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*189+21042)*1+lsi)*1]), &(inteval->stack[((hsi*126+3891)*1+lsi)*1]), &(inteval->stack[((hsi*63+4017)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+28602)*1+lsi)*1]), &(inteval->stack[((hsi*252+5853)*1+lsi)*1]), &(inteval->stack[((hsi*189+21042)*1+lsi)*1]),9);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*324+21042)*1+lsi)*1]), &(inteval->stack[((hsi*216+3315)*1+lsi)*1]), &(inteval->stack[((hsi*108+3531)*1+lsi)*1]), &(inteval->stack[((hsi*108+324)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+3315)*1+lsi)*1]), &(inteval->stack[((hsi*324+21042)*1+lsi)*1]), &(inteval->stack[((hsi*252+5853)*1+lsi)*1]),9);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1134+11970)*1+lsi)*1]), &(inteval->stack[((hsi*756+3315)*1+lsi)*1]), &(inteval->stack[((hsi*567+28602)*1+lsi)*1]),9);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*252+5853)*1+lsi)*1]), &(inteval->stack[((hsi*168+2874)*1+lsi)*1]), &(inteval->stack[((hsi*84+3042)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),28);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*189+21042)*1+lsi)*1]), &(inteval->stack[((hsi*126+3126)*1+lsi)*1]), &(inteval->stack[((hsi*63+3252)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+29169)*1+lsi)*1]), &(inteval->stack[((hsi*252+5853)*1+lsi)*1]), &(inteval->stack[((hsi*189+21042)*1+lsi)*1]),9);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*324+21042)*1+lsi)*1]), &(inteval->stack[((hsi*216+2550)*1+lsi)*1]), &(inteval->stack[((hsi*108+2766)*1+lsi)*1]), &(inteval->stack[((hsi*108+324)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+2550)*1+lsi)*1]), &(inteval->stack[((hsi*324+21042)*1+lsi)*1]), &(inteval->stack[((hsi*252+5853)*1+lsi)*1]),9);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1134+10836)*1+lsi)*1]), &(inteval->stack[((hsi*756+2550)*1+lsi)*1]), &(inteval->stack[((hsi*567+29169)*1+lsi)*1]),9);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*252+5853)*1+lsi)*1]), &(inteval->stack[((hsi*168+2109)*1+lsi)*1]), &(inteval->stack[((hsi*84+2277)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),28);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*189+21042)*1+lsi)*1]), &(inteval->stack[((hsi*126+2361)*1+lsi)*1]), &(inteval->stack[((hsi*63+2487)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+29736)*1+lsi)*1]), &(inteval->stack[((hsi*252+5853)*1+lsi)*1]), &(inteval->stack[((hsi*189+21042)*1+lsi)*1]),9);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*324+21042)*1+lsi)*1]), &(inteval->stack[((hsi*216+1785)*1+lsi)*1]), &(inteval->stack[((hsi*108+2001)*1+lsi)*1]), &(inteval->stack[((hsi*108+324)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+1785)*1+lsi)*1]), &(inteval->stack[((hsi*324+21042)*1+lsi)*1]), &(inteval->stack[((hsi*252+5853)*1+lsi)*1]),9);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1134+9702)*1+lsi)*1]), &(inteval->stack[((hsi*756+1785)*1+lsi)*1]), &(inteval->stack[((hsi*567+29736)*1+lsi)*1]),9);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*252+5853)*1+lsi)*1]), &(inteval->stack[((hsi*168+1344)*1+lsi)*1]), &(inteval->stack[((hsi*84+1512)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),28);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*189+21042)*1+lsi)*1]), &(inteval->stack[((hsi*126+1596)*1+lsi)*1]), &(inteval->stack[((hsi*63+1722)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+30303)*1+lsi)*1]), &(inteval->stack[((hsi*252+5853)*1+lsi)*1]), &(inteval->stack[((hsi*189+21042)*1+lsi)*1]),9);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*324+21042)*1+lsi)*1]), &(inteval->stack[((hsi*216+1020)*1+lsi)*1]), &(inteval->stack[((hsi*108+1236)*1+lsi)*1]), &(inteval->stack[((hsi*108+324)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+1020)*1+lsi)*1]), &(inteval->stack[((hsi*324+21042)*1+lsi)*1]), &(inteval->stack[((hsi*252+5853)*1+lsi)*1]),9);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1134+8568)*1+lsi)*1]), &(inteval->stack[((hsi*756+1020)*1+lsi)*1]), &(inteval->stack[((hsi*567+30303)*1+lsi)*1]),9);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*252+5853)*1+lsi)*1]), &(inteval->stack[((hsi*168+432)*1+lsi)*1]), &(inteval->stack[((hsi*84+600)*1+lsi)*1]), &(inteval->stack[((hsi*84+684)*1+lsi)*1]),28);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*189+21042)*1+lsi)*1]), &(inteval->stack[((hsi*126+768)*1+lsi)*1]), &(inteval->stack[((hsi*63+894)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+432)*1+lsi)*1]), &(inteval->stack[((hsi*252+5853)*1+lsi)*1]), &(inteval->stack[((hsi*189+21042)*1+lsi)*1]),9);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*324+21042)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]), &(inteval->stack[((hsi*108+216)*1+lsi)*1]), &(inteval->stack[((hsi*108+324)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*756+30870)*1+lsi)*1]), &(inteval->stack[((hsi*324+21042)*1+lsi)*1]), &(inteval->stack[((hsi*252+5853)*1+lsi)*1]),9);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1134+7434)*1+lsi)*1]), &(inteval->stack[((hsi*756+30870)*1+lsi)*1]), &(inteval->stack[((hsi*567+432)*1+lsi)*1]),9);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1134+7434)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1134+8568)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1134+9702)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1134+10836)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1134+11970)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1134+13104)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1134+14238)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1134+15372)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1134+16506)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1134+17640)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1134+18774)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1134+19908)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
