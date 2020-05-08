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
#include <deriv1_aB_D__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_D__0__H__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4884)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+13956)*1+lsi)*1]), &(inteval->stack[((hsi*168+3060)*1+lsi)*1]), &(inteval->stack[((hsi*126+3612)*1+lsi)*1]),6);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*378+14334)*1+lsi)*1]), &(inteval->stack[((hsi*168+4590)*1+lsi)*1]), &(inteval->stack[((hsi*126+4758)*1+lsi)*1]), &(inteval->stack[((hsi*126+3612)*1+lsi)*1]),6);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*504+14712)*1+lsi)*1]), &(inteval->stack[((hsi*216+4374)*1+lsi)*1]), &(inteval->stack[((hsi*168+4590)*1+lsi)*1]), &(inteval->stack[((hsi*168+3060)*1+lsi)*1]),6);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*756+13200)*1+lsi)*1]), &(inteval->stack[((hsi*504+14712)*1+lsi)*1]), &(inteval->stack[((hsi*378+14334)*1+lsi)*1]), &(inteval->stack[((hsi*378+13956)*1+lsi)*1]),6);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*378+15216)*1+lsi)*1]), &(inteval->stack[((hsi*168+4080)*1+lsi)*1]), &(inteval->stack[((hsi*126+4248)*1+lsi)*1]), &(inteval->stack[((hsi*126+3612)*1+lsi)*1]),6);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*504+15594)*1+lsi)*1]), &(inteval->stack[((hsi*216+3864)*1+lsi)*1]), &(inteval->stack[((hsi*168+4080)*1+lsi)*1]), &(inteval->stack[((hsi*168+3060)*1+lsi)*1]),6);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*756+12444)*1+lsi)*1]), &(inteval->stack[((hsi*504+15594)*1+lsi)*1]), &(inteval->stack[((hsi*378+15216)*1+lsi)*1]), &(inteval->stack[((hsi*378+13956)*1+lsi)*1]),6);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*378+16098)*1+lsi)*1]), &(inteval->stack[((hsi*168+3444)*1+lsi)*1]), &(inteval->stack[((hsi*126+3738)*1+lsi)*1]), &(inteval->stack[((hsi*126+3612)*1+lsi)*1]),6);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*504+16476)*1+lsi)*1]), &(inteval->stack[((hsi*216+3228)*1+lsi)*1]), &(inteval->stack[((hsi*168+3444)*1+lsi)*1]), &(inteval->stack[((hsi*168+3060)*1+lsi)*1]),6);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*756+11688)*1+lsi)*1]), &(inteval->stack[((hsi*504+16476)*1+lsi)*1]), &(inteval->stack[((hsi*378+16098)*1+lsi)*1]), &(inteval->stack[((hsi*378+13956)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+16980)*1+lsi)*1]), &(inteval->stack[((hsi*168+1236)*1+lsi)*1]), &(inteval->stack[((hsi*168+2766)*1+lsi)*1]), &(inteval->stack[((hsi*168+4590)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+4590)*1+lsi)*1]), &(inteval->stack[((hsi*126+1404)*1+lsi)*1]), &(inteval->stack[((hsi*126+2934)*1+lsi)*1]), &(inteval->stack[((hsi*126+4758)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*378+17148)*1+lsi)*1]), &(inteval->stack[((hsi*168+16980)*1+lsi)*1]), &(inteval->stack[((hsi*126+4590)*1+lsi)*1]), &(inteval->stack[((hsi*126+3612)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+4590)*1+lsi)*1]), &(inteval->stack[((hsi*216+1020)*1+lsi)*1]), &(inteval->stack[((hsi*216+2550)*1+lsi)*1]), &(inteval->stack[((hsi*216+4374)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*504+17526)*1+lsi)*1]), &(inteval->stack[((hsi*216+4590)*1+lsi)*1]), &(inteval->stack[((hsi*168+16980)*1+lsi)*1]), &(inteval->stack[((hsi*168+3060)*1+lsi)*1]),6);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*756+10932)*1+lsi)*1]), &(inteval->stack[((hsi*504+17526)*1+lsi)*1]), &(inteval->stack[((hsi*378+17148)*1+lsi)*1]), &(inteval->stack[((hsi*378+13956)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+16980)*1+lsi)*1]), &(inteval->stack[((hsi*168+726)*1+lsi)*1]), &(inteval->stack[((hsi*168+2256)*1+lsi)*1]), &(inteval->stack[((hsi*168+4080)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+4374)*1+lsi)*1]), &(inteval->stack[((hsi*126+894)*1+lsi)*1]), &(inteval->stack[((hsi*126+2424)*1+lsi)*1]), &(inteval->stack[((hsi*126+4248)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*378+4500)*1+lsi)*1]), &(inteval->stack[((hsi*168+16980)*1+lsi)*1]), &(inteval->stack[((hsi*126+4374)*1+lsi)*1]), &(inteval->stack[((hsi*126+3612)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+4080)*1+lsi)*1]), &(inteval->stack[((hsi*216+510)*1+lsi)*1]), &(inteval->stack[((hsi*216+2040)*1+lsi)*1]), &(inteval->stack[((hsi*216+3864)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*504+18030)*1+lsi)*1]), &(inteval->stack[((hsi*216+4080)*1+lsi)*1]), &(inteval->stack[((hsi*168+16980)*1+lsi)*1]), &(inteval->stack[((hsi*168+3060)*1+lsi)*1]),6);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*756+10176)*1+lsi)*1]), &(inteval->stack[((hsi*504+18030)*1+lsi)*1]), &(inteval->stack[((hsi*378+4500)*1+lsi)*1]), &(inteval->stack[((hsi*378+13956)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+16980)*1+lsi)*1]), &(inteval->stack[((hsi*168+216)*1+lsi)*1]), &(inteval->stack[((hsi*168+1746)*1+lsi)*1]), &(inteval->stack[((hsi*168+3444)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+3864)*1+lsi)*1]), &(inteval->stack[((hsi*126+384)*1+lsi)*1]), &(inteval->stack[((hsi*126+1914)*1+lsi)*1]), &(inteval->stack[((hsi*126+3738)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*378+3990)*1+lsi)*1]), &(inteval->stack[((hsi*168+16980)*1+lsi)*1]), &(inteval->stack[((hsi*126+3864)*1+lsi)*1]), &(inteval->stack[((hsi*126+3612)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+3444)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]), &(inteval->stack[((hsi*216+1530)*1+lsi)*1]), &(inteval->stack[((hsi*216+3228)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*504+18534)*1+lsi)*1]), &(inteval->stack[((hsi*216+3444)*1+lsi)*1]), &(inteval->stack[((hsi*168+16980)*1+lsi)*1]), &(inteval->stack[((hsi*168+3060)*1+lsi)*1]),6);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*756+9420)*1+lsi)*1]), &(inteval->stack[((hsi*504+18534)*1+lsi)*1]), &(inteval->stack[((hsi*378+3990)*1+lsi)*1]), &(inteval->stack[((hsi*378+13956)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+3060)*1+lsi)*1]), &(inteval->stack[((hsi*168+2766)*1+lsi)*1]), &(inteval->stack[((hsi*126+2934)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+3438)*1+lsi)*1]), &(inteval->stack[((hsi*216+2550)*1+lsi)*1]), &(inteval->stack[((hsi*168+2766)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+8664)*1+lsi)*1]), &(inteval->stack[((hsi*504+3438)*1+lsi)*1]), &(inteval->stack[((hsi*378+3060)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+2550)*1+lsi)*1]), &(inteval->stack[((hsi*168+2256)*1+lsi)*1]), &(inteval->stack[((hsi*126+2424)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+19038)*1+lsi)*1]), &(inteval->stack[((hsi*216+2040)*1+lsi)*1]), &(inteval->stack[((hsi*168+2256)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+7908)*1+lsi)*1]), &(inteval->stack[((hsi*504+19038)*1+lsi)*1]), &(inteval->stack[((hsi*378+2550)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+2040)*1+lsi)*1]), &(inteval->stack[((hsi*168+1746)*1+lsi)*1]), &(inteval->stack[((hsi*126+1914)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+19542)*1+lsi)*1]), &(inteval->stack[((hsi*216+1530)*1+lsi)*1]), &(inteval->stack[((hsi*168+1746)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+7152)*1+lsi)*1]), &(inteval->stack[((hsi*504+19542)*1+lsi)*1]), &(inteval->stack[((hsi*378+2040)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+1530)*1+lsi)*1]), &(inteval->stack[((hsi*168+1236)*1+lsi)*1]), &(inteval->stack[((hsi*126+1404)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+20046)*1+lsi)*1]), &(inteval->stack[((hsi*216+1020)*1+lsi)*1]), &(inteval->stack[((hsi*168+1236)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+6396)*1+lsi)*1]), &(inteval->stack[((hsi*504+20046)*1+lsi)*1]), &(inteval->stack[((hsi*378+1530)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+1020)*1+lsi)*1]), &(inteval->stack[((hsi*168+726)*1+lsi)*1]), &(inteval->stack[((hsi*126+894)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+20550)*1+lsi)*1]), &(inteval->stack[((hsi*216+510)*1+lsi)*1]), &(inteval->stack[((hsi*168+726)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+5640)*1+lsi)*1]), &(inteval->stack[((hsi*504+20550)*1+lsi)*1]), &(inteval->stack[((hsi*378+1020)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+510)*1+lsi)*1]), &(inteval->stack[((hsi*168+216)*1+lsi)*1]), &(inteval->stack[((hsi*126+384)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+21054)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]), &(inteval->stack[((hsi*168+216)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+4884)*1+lsi)*1]), &(inteval->stack[((hsi*504+21054)*1+lsi)*1]), &(inteval->stack[((hsi*378+510)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*756+4884)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*756+5640)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*756+6396)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*756+7152)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*756+7908)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*756+8664)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*756+9420)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*756+10176)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*756+10932)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*756+11688)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*756+12444)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*756+13200)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
