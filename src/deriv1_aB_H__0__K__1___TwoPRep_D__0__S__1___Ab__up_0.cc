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
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hd001.h>
#include <HRRPart0bra0ket0hd010.h>
#include <HRRPart0bra0ket0hd100.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001d.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010d.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100d.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i100p.h>
#include <deriv1_aB_H__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_H__0__K__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,29304)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+83736)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27540)*1+lsi)*1]), &(inteval->stack[((hsi*756+28548)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+86004)*1+lsi)*1]), &(inteval->stack[((hsi*1296+26244)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27540)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+79200)*1+lsi)*1]), &(inteval->stack[((hsi*3024+86004)*1+lsi)*1]), &(inteval->stack[((hsi*2268+83736)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+89028)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24480)*1+lsi)*1]), &(inteval->stack[((hsi*756+25488)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+91296)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23184)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24480)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+74664)*1+lsi)*1]), &(inteval->stack[((hsi*3024+91296)*1+lsi)*1]), &(inteval->stack[((hsi*2268+89028)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+94320)*1+lsi)*1]), &(inteval->stack[((hsi*1008+21420)*1+lsi)*1]), &(inteval->stack[((hsi*756+22428)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+96588)*1+lsi)*1]), &(inteval->stack[((hsi*1296+20124)*1+lsi)*1]), &(inteval->stack[((hsi*1008+21420)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+70128)*1+lsi)*1]), &(inteval->stack[((hsi*3024+96588)*1+lsi)*1]), &(inteval->stack[((hsi*2268+94320)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+99612)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9180)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18360)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27540)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+27540)*1+lsi)*1]), &(inteval->stack[((hsi*756+10188)*1+lsi)*1]), &(inteval->stack[((hsi*756+19368)*1+lsi)*1]), &(inteval->stack[((hsi*756+28548)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+100620)*1+lsi)*1]), &(inteval->stack[((hsi*1008+99612)*1+lsi)*1]), &(inteval->stack[((hsi*756+27540)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+27540)*1+lsi)*1]), &(inteval->stack[((hsi*1296+7884)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17064)*1+lsi)*1]), &(inteval->stack[((hsi*1296+26244)*1+lsi)*1]));
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+102888)*1+lsi)*1]), &(inteval->stack[((hsi*1296+27540)*1+lsi)*1]), &(inteval->stack[((hsi*1008+99612)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+65592)*1+lsi)*1]), &(inteval->stack[((hsi*3024+102888)*1+lsi)*1]), &(inteval->stack[((hsi*2268+100620)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+99612)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6120)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15300)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24480)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+26244)*1+lsi)*1]), &(inteval->stack[((hsi*756+7128)*1+lsi)*1]), &(inteval->stack[((hsi*756+16308)*1+lsi)*1]), &(inteval->stack[((hsi*756+25488)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+27000)*1+lsi)*1]), &(inteval->stack[((hsi*1008+99612)*1+lsi)*1]), &(inteval->stack[((hsi*756+26244)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+24480)*1+lsi)*1]), &(inteval->stack[((hsi*1296+4824)*1+lsi)*1]), &(inteval->stack[((hsi*1296+14004)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23184)*1+lsi)*1]));
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+105912)*1+lsi)*1]), &(inteval->stack[((hsi*1296+24480)*1+lsi)*1]), &(inteval->stack[((hsi*1008+99612)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+61056)*1+lsi)*1]), &(inteval->stack[((hsi*3024+105912)*1+lsi)*1]), &(inteval->stack[((hsi*2268+27000)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+99612)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1296)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12240)*1+lsi)*1]), &(inteval->stack[((hsi*1008+21420)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+23184)*1+lsi)*1]), &(inteval->stack[((hsi*756+3312)*1+lsi)*1]), &(inteval->stack[((hsi*756+13248)*1+lsi)*1]), &(inteval->stack[((hsi*756+22428)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+23940)*1+lsi)*1]), &(inteval->stack[((hsi*1008+99612)*1+lsi)*1]), &(inteval->stack[((hsi*756+23184)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+21420)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*1296+10944)*1+lsi)*1]), &(inteval->stack[((hsi*1296+20124)*1+lsi)*1]));
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+108936)*1+lsi)*1]), &(inteval->stack[((hsi*1296+21420)*1+lsi)*1]), &(inteval->stack[((hsi*1008+99612)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+56520)*1+lsi)*1]), &(inteval->stack[((hsi*3024+108936)*1+lsi)*1]), &(inteval->stack[((hsi*2268+23940)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+20124)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2304)*1+lsi)*1]), &(inteval->stack[((hsi*756+4068)*1+lsi)*1]),36);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*2268+111960)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18360)*1+lsi)*1]), &(inteval->stack[((hsi*756+19368)*1+lsi)*1]), &(inteval->stack[((hsi*756+4068)*1+lsi)*1]),36);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*3024+114228)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17064)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18360)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2304)*1+lsi)*1]),36);
HRRPart0bra0ket0hd001(inteval, &(inteval->stack[((hsi*4536+51984)*1+lsi)*1]), &(inteval->stack[((hsi*3024+114228)*1+lsi)*1]), &(inteval->stack[((hsi*2268+111960)*1+lsi)*1]), &(inteval->stack[((hsi*2268+20124)*1+lsi)*1]),36);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*2268+17064)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15300)*1+lsi)*1]), &(inteval->stack[((hsi*756+16308)*1+lsi)*1]), &(inteval->stack[((hsi*756+4068)*1+lsi)*1]),36);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*3024+117252)*1+lsi)*1]), &(inteval->stack[((hsi*1296+14004)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15300)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2304)*1+lsi)*1]),36);
HRRPart0bra0ket0hd010(inteval, &(inteval->stack[((hsi*4536+47448)*1+lsi)*1]), &(inteval->stack[((hsi*3024+117252)*1+lsi)*1]), &(inteval->stack[((hsi*2268+17064)*1+lsi)*1]), &(inteval->stack[((hsi*2268+20124)*1+lsi)*1]),36);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*2268+14004)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12240)*1+lsi)*1]), &(inteval->stack[((hsi*756+13248)*1+lsi)*1]), &(inteval->stack[((hsi*756+4068)*1+lsi)*1]),36);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*3024+120276)*1+lsi)*1]), &(inteval->stack[((hsi*1296+10944)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12240)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2304)*1+lsi)*1]),36);
HRRPart0bra0ket0hd100(inteval, &(inteval->stack[((hsi*4536+42912)*1+lsi)*1]), &(inteval->stack[((hsi*3024+120276)*1+lsi)*1]), &(inteval->stack[((hsi*2268+14004)*1+lsi)*1]), &(inteval->stack[((hsi*2268+20124)*1+lsi)*1]),36);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*2268+10944)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9180)*1+lsi)*1]), &(inteval->stack[((hsi*756+10188)*1+lsi)*1]), &(inteval->stack[((hsi*756+4068)*1+lsi)*1]),36);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*3024+123300)*1+lsi)*1]), &(inteval->stack[((hsi*1296+7884)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9180)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2304)*1+lsi)*1]),36);
HRRPart0bra0ket0h001d(inteval, &(inteval->stack[((hsi*4536+38376)*1+lsi)*1]), &(inteval->stack[((hsi*3024+123300)*1+lsi)*1]), &(inteval->stack[((hsi*2268+10944)*1+lsi)*1]), &(inteval->stack[((hsi*2268+20124)*1+lsi)*1]),36);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*2268+7884)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6120)*1+lsi)*1]), &(inteval->stack[((hsi*756+7128)*1+lsi)*1]), &(inteval->stack[((hsi*756+4068)*1+lsi)*1]),36);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*3024+126324)*1+lsi)*1]), &(inteval->stack[((hsi*1296+4824)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6120)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2304)*1+lsi)*1]),36);
HRRPart0bra0ket0h010d(inteval, &(inteval->stack[((hsi*4536+33840)*1+lsi)*1]), &(inteval->stack[((hsi*3024+126324)*1+lsi)*1]), &(inteval->stack[((hsi*2268+7884)*1+lsi)*1]), &(inteval->stack[((hsi*2268+20124)*1+lsi)*1]),36);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*2268+4824)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1296)*1+lsi)*1]), &(inteval->stack[((hsi*756+3312)*1+lsi)*1]), &(inteval->stack[((hsi*756+4068)*1+lsi)*1]),36);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*3024+129348)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1296)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2304)*1+lsi)*1]),36);
HRRPart0bra0ket0h100d(inteval, &(inteval->stack[((hsi*4536+29304)*1+lsi)*1]), &(inteval->stack[((hsi*3024+129348)*1+lsi)*1]), &(inteval->stack[((hsi*2268+4824)*1+lsi)*1]), &(inteval->stack[((hsi*2268+20124)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4536+29304)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*4536+33840)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*4536+38376)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*4536+42912)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*4536+47448)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*4536+51984)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*4536+56520)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*4536+61056)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*4536+65592)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*4536+70128)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*4536+74664)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*4536+79200)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
