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
#include <CR_DerivGaussP1InBra_aB_D__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_D__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_D__0__K__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7830)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+23382)*1+lsi)*1]), &(inteval->stack[((hsi*270+4896)*1+lsi)*1]), &(inteval->stack[((hsi*216+5766)*1+lsi)*1]),6);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*648+24030)*1+lsi)*1]), &(inteval->stack[((hsi*270+7344)*1+lsi)*1]), &(inteval->stack[((hsi*216+7614)*1+lsi)*1]), &(inteval->stack[((hsi*216+5766)*1+lsi)*1]),6);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*810+24678)*1+lsi)*1]), &(inteval->stack[((hsi*330+7014)*1+lsi)*1]), &(inteval->stack[((hsi*270+7344)*1+lsi)*1]), &(inteval->stack[((hsi*270+4896)*1+lsi)*1]),6);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*1296+22086)*1+lsi)*1]), &(inteval->stack[((hsi*810+24678)*1+lsi)*1]), &(inteval->stack[((hsi*648+24030)*1+lsi)*1]), &(inteval->stack[((hsi*648+23382)*1+lsi)*1]),6);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*648+25488)*1+lsi)*1]), &(inteval->stack[((hsi*270+6528)*1+lsi)*1]), &(inteval->stack[((hsi*216+6798)*1+lsi)*1]), &(inteval->stack[((hsi*216+5766)*1+lsi)*1]),6);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*810+26136)*1+lsi)*1]), &(inteval->stack[((hsi*330+6198)*1+lsi)*1]), &(inteval->stack[((hsi*270+6528)*1+lsi)*1]), &(inteval->stack[((hsi*270+4896)*1+lsi)*1]),6);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*1296+20790)*1+lsi)*1]), &(inteval->stack[((hsi*810+26136)*1+lsi)*1]), &(inteval->stack[((hsi*648+25488)*1+lsi)*1]), &(inteval->stack[((hsi*648+23382)*1+lsi)*1]),6);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*648+26946)*1+lsi)*1]), &(inteval->stack[((hsi*270+5496)*1+lsi)*1]), &(inteval->stack[((hsi*216+5982)*1+lsi)*1]), &(inteval->stack[((hsi*216+5766)*1+lsi)*1]),6);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*810+27594)*1+lsi)*1]), &(inteval->stack[((hsi*330+5166)*1+lsi)*1]), &(inteval->stack[((hsi*270+5496)*1+lsi)*1]), &(inteval->stack[((hsi*270+4896)*1+lsi)*1]),6);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*1296+19494)*1+lsi)*1]), &(inteval->stack[((hsi*810+27594)*1+lsi)*1]), &(inteval->stack[((hsi*648+26946)*1+lsi)*1]), &(inteval->stack[((hsi*648+23382)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+28404)*1+lsi)*1]), &(inteval->stack[((hsi*270+1962)*1+lsi)*1]), &(inteval->stack[((hsi*270+4410)*1+lsi)*1]), &(inteval->stack[((hsi*270+7344)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+7344)*1+lsi)*1]), &(inteval->stack[((hsi*216+2232)*1+lsi)*1]), &(inteval->stack[((hsi*216+4680)*1+lsi)*1]), &(inteval->stack[((hsi*216+7614)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*648+28674)*1+lsi)*1]), &(inteval->stack[((hsi*270+28404)*1+lsi)*1]), &(inteval->stack[((hsi*216+7344)*1+lsi)*1]), &(inteval->stack[((hsi*216+5766)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*330+7344)*1+lsi)*1]), &(inteval->stack[((hsi*330+1632)*1+lsi)*1]), &(inteval->stack[((hsi*330+4080)*1+lsi)*1]), &(inteval->stack[((hsi*330+7014)*1+lsi)*1]));
HRRPart1bra0ket0l001p(inteval, &(inteval->stack[((hsi*810+29322)*1+lsi)*1]), &(inteval->stack[((hsi*330+7344)*1+lsi)*1]), &(inteval->stack[((hsi*270+28404)*1+lsi)*1]), &(inteval->stack[((hsi*270+4896)*1+lsi)*1]),6);
HRRPart1bra0ket0k001d(inteval, &(inteval->stack[((hsi*1296+18198)*1+lsi)*1]), &(inteval->stack[((hsi*810+29322)*1+lsi)*1]), &(inteval->stack[((hsi*648+28674)*1+lsi)*1]), &(inteval->stack[((hsi*648+23382)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+28404)*1+lsi)*1]), &(inteval->stack[((hsi*270+1146)*1+lsi)*1]), &(inteval->stack[((hsi*270+3594)*1+lsi)*1]), &(inteval->stack[((hsi*270+6528)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+7014)*1+lsi)*1]), &(inteval->stack[((hsi*216+1416)*1+lsi)*1]), &(inteval->stack[((hsi*216+3864)*1+lsi)*1]), &(inteval->stack[((hsi*216+6798)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*648+30132)*1+lsi)*1]), &(inteval->stack[((hsi*270+28404)*1+lsi)*1]), &(inteval->stack[((hsi*216+7014)*1+lsi)*1]), &(inteval->stack[((hsi*216+5766)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*330+6528)*1+lsi)*1]), &(inteval->stack[((hsi*330+816)*1+lsi)*1]), &(inteval->stack[((hsi*330+3264)*1+lsi)*1]), &(inteval->stack[((hsi*330+6198)*1+lsi)*1]));
HRRPart1bra0ket0l010p(inteval, &(inteval->stack[((hsi*810+6858)*1+lsi)*1]), &(inteval->stack[((hsi*330+6528)*1+lsi)*1]), &(inteval->stack[((hsi*270+28404)*1+lsi)*1]), &(inteval->stack[((hsi*270+4896)*1+lsi)*1]),6);
HRRPart1bra0ket0k010d(inteval, &(inteval->stack[((hsi*1296+16902)*1+lsi)*1]), &(inteval->stack[((hsi*810+6858)*1+lsi)*1]), &(inteval->stack[((hsi*648+30132)*1+lsi)*1]), &(inteval->stack[((hsi*648+23382)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+28404)*1+lsi)*1]), &(inteval->stack[((hsi*270+330)*1+lsi)*1]), &(inteval->stack[((hsi*270+2778)*1+lsi)*1]), &(inteval->stack[((hsi*270+5496)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+6198)*1+lsi)*1]), &(inteval->stack[((hsi*216+600)*1+lsi)*1]), &(inteval->stack[((hsi*216+3048)*1+lsi)*1]), &(inteval->stack[((hsi*216+5982)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*648+30780)*1+lsi)*1]), &(inteval->stack[((hsi*270+28404)*1+lsi)*1]), &(inteval->stack[((hsi*216+6198)*1+lsi)*1]), &(inteval->stack[((hsi*216+5766)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*330+5496)*1+lsi)*1]), &(inteval->stack[((hsi*330+0)*1+lsi)*1]), &(inteval->stack[((hsi*330+2448)*1+lsi)*1]), &(inteval->stack[((hsi*330+5166)*1+lsi)*1]));
HRRPart1bra0ket0l100p(inteval, &(inteval->stack[((hsi*810+5826)*1+lsi)*1]), &(inteval->stack[((hsi*330+5496)*1+lsi)*1]), &(inteval->stack[((hsi*270+28404)*1+lsi)*1]), &(inteval->stack[((hsi*270+4896)*1+lsi)*1]),6);
HRRPart1bra0ket0k100d(inteval, &(inteval->stack[((hsi*1296+15606)*1+lsi)*1]), &(inteval->stack[((hsi*810+5826)*1+lsi)*1]), &(inteval->stack[((hsi*648+30780)*1+lsi)*1]), &(inteval->stack[((hsi*648+23382)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+4896)*1+lsi)*1]), &(inteval->stack[((hsi*270+4410)*1+lsi)*1]), &(inteval->stack[((hsi*216+4680)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+31428)*1+lsi)*1]), &(inteval->stack[((hsi*330+4080)*1+lsi)*1]), &(inteval->stack[((hsi*270+4410)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+14310)*1+lsi)*1]), &(inteval->stack[((hsi*810+31428)*1+lsi)*1]), &(inteval->stack[((hsi*648+4896)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+4080)*1+lsi)*1]), &(inteval->stack[((hsi*270+3594)*1+lsi)*1]), &(inteval->stack[((hsi*216+3864)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+32238)*1+lsi)*1]), &(inteval->stack[((hsi*330+3264)*1+lsi)*1]), &(inteval->stack[((hsi*270+3594)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+13014)*1+lsi)*1]), &(inteval->stack[((hsi*810+32238)*1+lsi)*1]), &(inteval->stack[((hsi*648+4080)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+3264)*1+lsi)*1]), &(inteval->stack[((hsi*270+2778)*1+lsi)*1]), &(inteval->stack[((hsi*216+3048)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+33048)*1+lsi)*1]), &(inteval->stack[((hsi*330+2448)*1+lsi)*1]), &(inteval->stack[((hsi*270+2778)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+11718)*1+lsi)*1]), &(inteval->stack[((hsi*810+33048)*1+lsi)*1]), &(inteval->stack[((hsi*648+3264)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+2448)*1+lsi)*1]), &(inteval->stack[((hsi*270+1962)*1+lsi)*1]), &(inteval->stack[((hsi*216+2232)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+33858)*1+lsi)*1]), &(inteval->stack[((hsi*330+1632)*1+lsi)*1]), &(inteval->stack[((hsi*270+1962)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+10422)*1+lsi)*1]), &(inteval->stack[((hsi*810+33858)*1+lsi)*1]), &(inteval->stack[((hsi*648+2448)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+1632)*1+lsi)*1]), &(inteval->stack[((hsi*270+1146)*1+lsi)*1]), &(inteval->stack[((hsi*216+1416)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+34668)*1+lsi)*1]), &(inteval->stack[((hsi*330+816)*1+lsi)*1]), &(inteval->stack[((hsi*270+1146)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+9126)*1+lsi)*1]), &(inteval->stack[((hsi*810+34668)*1+lsi)*1]), &(inteval->stack[((hsi*648+1632)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+816)*1+lsi)*1]), &(inteval->stack[((hsi*270+330)*1+lsi)*1]), &(inteval->stack[((hsi*216+600)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+35478)*1+lsi)*1]), &(inteval->stack[((hsi*330+0)*1+lsi)*1]), &(inteval->stack[((hsi*270+330)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+7830)*1+lsi)*1]), &(inteval->stack[((hsi*810+35478)*1+lsi)*1]), &(inteval->stack[((hsi*648+816)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1296+7830)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1296+9126)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1296+10422)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1296+11718)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1296+13014)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1296+14310)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1296+15606)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1296+16902)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1296+18198)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1296+19494)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1296+20790)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1296+22086)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
