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
#include <deriv1_aB_D__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_D__0__I__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6270)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+18366)*1+lsi)*1]), &(inteval->stack[((hsi*216+3924)*1+lsi)*1]), &(inteval->stack[((hsi*168+4626)*1+lsi)*1]),6);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*504+18870)*1+lsi)*1]), &(inteval->stack[((hsi*216+5886)*1+lsi)*1]), &(inteval->stack[((hsi*168+6102)*1+lsi)*1]), &(inteval->stack[((hsi*168+4626)*1+lsi)*1]),6);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*648+19374)*1+lsi)*1]), &(inteval->stack[((hsi*270+5616)*1+lsi)*1]), &(inteval->stack[((hsi*216+5886)*1+lsi)*1]), &(inteval->stack[((hsi*216+3924)*1+lsi)*1]),6);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*1008+17358)*1+lsi)*1]), &(inteval->stack[((hsi*648+19374)*1+lsi)*1]), &(inteval->stack[((hsi*504+18870)*1+lsi)*1]), &(inteval->stack[((hsi*504+18366)*1+lsi)*1]),6);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*504+20022)*1+lsi)*1]), &(inteval->stack[((hsi*216+5232)*1+lsi)*1]), &(inteval->stack[((hsi*168+5448)*1+lsi)*1]), &(inteval->stack[((hsi*168+4626)*1+lsi)*1]),6);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*648+20526)*1+lsi)*1]), &(inteval->stack[((hsi*270+4962)*1+lsi)*1]), &(inteval->stack[((hsi*216+5232)*1+lsi)*1]), &(inteval->stack[((hsi*216+3924)*1+lsi)*1]),6);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*1008+16350)*1+lsi)*1]), &(inteval->stack[((hsi*648+20526)*1+lsi)*1]), &(inteval->stack[((hsi*504+20022)*1+lsi)*1]), &(inteval->stack[((hsi*504+18366)*1+lsi)*1]),6);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*504+21174)*1+lsi)*1]), &(inteval->stack[((hsi*216+4410)*1+lsi)*1]), &(inteval->stack[((hsi*168+4794)*1+lsi)*1]), &(inteval->stack[((hsi*168+4626)*1+lsi)*1]),6);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*648+21678)*1+lsi)*1]), &(inteval->stack[((hsi*270+4140)*1+lsi)*1]), &(inteval->stack[((hsi*216+4410)*1+lsi)*1]), &(inteval->stack[((hsi*216+3924)*1+lsi)*1]),6);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*1008+15342)*1+lsi)*1]), &(inteval->stack[((hsi*648+21678)*1+lsi)*1]), &(inteval->stack[((hsi*504+21174)*1+lsi)*1]), &(inteval->stack[((hsi*504+18366)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+22326)*1+lsi)*1]), &(inteval->stack[((hsi*216+1578)*1+lsi)*1]), &(inteval->stack[((hsi*216+3540)*1+lsi)*1]), &(inteval->stack[((hsi*216+5886)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+5886)*1+lsi)*1]), &(inteval->stack[((hsi*168+1794)*1+lsi)*1]), &(inteval->stack[((hsi*168+3756)*1+lsi)*1]), &(inteval->stack[((hsi*168+6102)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*504+22542)*1+lsi)*1]), &(inteval->stack[((hsi*216+22326)*1+lsi)*1]), &(inteval->stack[((hsi*168+5886)*1+lsi)*1]), &(inteval->stack[((hsi*168+4626)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+5886)*1+lsi)*1]), &(inteval->stack[((hsi*270+1308)*1+lsi)*1]), &(inteval->stack[((hsi*270+3270)*1+lsi)*1]), &(inteval->stack[((hsi*270+5616)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*648+23046)*1+lsi)*1]), &(inteval->stack[((hsi*270+5886)*1+lsi)*1]), &(inteval->stack[((hsi*216+22326)*1+lsi)*1]), &(inteval->stack[((hsi*216+3924)*1+lsi)*1]),6);
HRRPart1bra0ket0i001d(inteval, &(inteval->stack[((hsi*1008+14334)*1+lsi)*1]), &(inteval->stack[((hsi*648+23046)*1+lsi)*1]), &(inteval->stack[((hsi*504+22542)*1+lsi)*1]), &(inteval->stack[((hsi*504+18366)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+22326)*1+lsi)*1]), &(inteval->stack[((hsi*216+924)*1+lsi)*1]), &(inteval->stack[((hsi*216+2886)*1+lsi)*1]), &(inteval->stack[((hsi*216+5232)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+5616)*1+lsi)*1]), &(inteval->stack[((hsi*168+1140)*1+lsi)*1]), &(inteval->stack[((hsi*168+3102)*1+lsi)*1]), &(inteval->stack[((hsi*168+5448)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*504+23694)*1+lsi)*1]), &(inteval->stack[((hsi*216+22326)*1+lsi)*1]), &(inteval->stack[((hsi*168+5616)*1+lsi)*1]), &(inteval->stack[((hsi*168+4626)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+5232)*1+lsi)*1]), &(inteval->stack[((hsi*270+654)*1+lsi)*1]), &(inteval->stack[((hsi*270+2616)*1+lsi)*1]), &(inteval->stack[((hsi*270+4962)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*648+5502)*1+lsi)*1]), &(inteval->stack[((hsi*270+5232)*1+lsi)*1]), &(inteval->stack[((hsi*216+22326)*1+lsi)*1]), &(inteval->stack[((hsi*216+3924)*1+lsi)*1]),6);
HRRPart1bra0ket0i010d(inteval, &(inteval->stack[((hsi*1008+13326)*1+lsi)*1]), &(inteval->stack[((hsi*648+5502)*1+lsi)*1]), &(inteval->stack[((hsi*504+23694)*1+lsi)*1]), &(inteval->stack[((hsi*504+18366)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+22326)*1+lsi)*1]), &(inteval->stack[((hsi*216+270)*1+lsi)*1]), &(inteval->stack[((hsi*216+2232)*1+lsi)*1]), &(inteval->stack[((hsi*216+4410)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+4962)*1+lsi)*1]), &(inteval->stack[((hsi*168+486)*1+lsi)*1]), &(inteval->stack[((hsi*168+2448)*1+lsi)*1]), &(inteval->stack[((hsi*168+4794)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*504+24198)*1+lsi)*1]), &(inteval->stack[((hsi*216+22326)*1+lsi)*1]), &(inteval->stack[((hsi*168+4962)*1+lsi)*1]), &(inteval->stack[((hsi*168+4626)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*270+4410)*1+lsi)*1]), &(inteval->stack[((hsi*270+0)*1+lsi)*1]), &(inteval->stack[((hsi*270+1962)*1+lsi)*1]), &(inteval->stack[((hsi*270+4140)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*648+4680)*1+lsi)*1]), &(inteval->stack[((hsi*270+4410)*1+lsi)*1]), &(inteval->stack[((hsi*216+22326)*1+lsi)*1]), &(inteval->stack[((hsi*216+3924)*1+lsi)*1]),6);
HRRPart1bra0ket0i100d(inteval, &(inteval->stack[((hsi*1008+12318)*1+lsi)*1]), &(inteval->stack[((hsi*648+4680)*1+lsi)*1]), &(inteval->stack[((hsi*504+24198)*1+lsi)*1]), &(inteval->stack[((hsi*504+18366)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+3924)*1+lsi)*1]), &(inteval->stack[((hsi*216+3540)*1+lsi)*1]), &(inteval->stack[((hsi*168+3756)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+24702)*1+lsi)*1]), &(inteval->stack[((hsi*270+3270)*1+lsi)*1]), &(inteval->stack[((hsi*216+3540)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+11310)*1+lsi)*1]), &(inteval->stack[((hsi*648+24702)*1+lsi)*1]), &(inteval->stack[((hsi*504+3924)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+3270)*1+lsi)*1]), &(inteval->stack[((hsi*216+2886)*1+lsi)*1]), &(inteval->stack[((hsi*168+3102)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+25350)*1+lsi)*1]), &(inteval->stack[((hsi*270+2616)*1+lsi)*1]), &(inteval->stack[((hsi*216+2886)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+10302)*1+lsi)*1]), &(inteval->stack[((hsi*648+25350)*1+lsi)*1]), &(inteval->stack[((hsi*504+3270)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+2616)*1+lsi)*1]), &(inteval->stack[((hsi*216+2232)*1+lsi)*1]), &(inteval->stack[((hsi*168+2448)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+25998)*1+lsi)*1]), &(inteval->stack[((hsi*270+1962)*1+lsi)*1]), &(inteval->stack[((hsi*216+2232)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+9294)*1+lsi)*1]), &(inteval->stack[((hsi*648+25998)*1+lsi)*1]), &(inteval->stack[((hsi*504+2616)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+1962)*1+lsi)*1]), &(inteval->stack[((hsi*216+1578)*1+lsi)*1]), &(inteval->stack[((hsi*168+1794)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+26646)*1+lsi)*1]), &(inteval->stack[((hsi*270+1308)*1+lsi)*1]), &(inteval->stack[((hsi*216+1578)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+8286)*1+lsi)*1]), &(inteval->stack[((hsi*648+26646)*1+lsi)*1]), &(inteval->stack[((hsi*504+1962)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+1308)*1+lsi)*1]), &(inteval->stack[((hsi*216+924)*1+lsi)*1]), &(inteval->stack[((hsi*168+1140)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+27294)*1+lsi)*1]), &(inteval->stack[((hsi*270+654)*1+lsi)*1]), &(inteval->stack[((hsi*216+924)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+7278)*1+lsi)*1]), &(inteval->stack[((hsi*648+27294)*1+lsi)*1]), &(inteval->stack[((hsi*504+1308)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+654)*1+lsi)*1]), &(inteval->stack[((hsi*216+270)*1+lsi)*1]), &(inteval->stack[((hsi*168+486)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+27942)*1+lsi)*1]), &(inteval->stack[((hsi*270+0)*1+lsi)*1]), &(inteval->stack[((hsi*216+270)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+6270)*1+lsi)*1]), &(inteval->stack[((hsi*648+27942)*1+lsi)*1]), &(inteval->stack[((hsi*504+654)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1008+6270)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1008+7278)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1008+8286)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1008+9294)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1008+10302)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1008+11310)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1008+12318)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1008+13326)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1008+14334)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1008+15342)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1008+16350)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1008+17358)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
