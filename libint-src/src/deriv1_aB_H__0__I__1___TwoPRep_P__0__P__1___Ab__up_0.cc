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
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_H__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_H__0__I__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,30352)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+93856)*1+lsi)*1]), &(inteval->stack[((hsi*784+23996)*1+lsi)*1]), &(inteval->stack[((hsi*588+28420)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),28);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*2268+95620)*1+lsi)*1]), &(inteval->stack[((hsi*1008+21196)*1+lsi)*1]), &(inteval->stack[((hsi*756+26320)*1+lsi)*1]), &(inteval->stack[((hsi*756+29596)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5292+56812)*1+lsi)*1]), &(inteval->stack[((hsi*2268+95620)*1+lsi)*1]), &(inteval->stack[((hsi*1764+93856)*1+lsi)*1]),63);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+97888)*1+lsi)*1]), &(inteval->stack[((hsi*784+14588)*1+lsi)*1]), &(inteval->stack[((hsi*588+19012)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),28);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*2268+99652)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11788)*1+lsi)*1]), &(inteval->stack[((hsi*756+16912)*1+lsi)*1]), &(inteval->stack[((hsi*756+29596)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5292+51520)*1+lsi)*1]), &(inteval->stack[((hsi*2268+99652)*1+lsi)*1]), &(inteval->stack[((hsi*1764+97888)*1+lsi)*1]),63);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+101920)*1+lsi)*1]), &(inteval->stack[((hsi*784+4592)*1+lsi)*1]), &(inteval->stack[((hsi*588+9604)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),28);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*2268+103684)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1792)*1+lsi)*1]), &(inteval->stack[((hsi*756+7504)*1+lsi)*1]), &(inteval->stack[((hsi*756+29596)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5292+46228)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103684)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101920)*1+lsi)*1]),63);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*1764+105952)*1+lsi)*1]), &(inteval->stack[((hsi*784+23212)*1+lsi)*1]), &(inteval->stack[((hsi*588+27832)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),28);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*2268+107716)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20188)*1+lsi)*1]), &(inteval->stack[((hsi*756+25564)*1+lsi)*1]), &(inteval->stack[((hsi*756+29596)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5292+40936)*1+lsi)*1]), &(inteval->stack[((hsi*2268+107716)*1+lsi)*1]), &(inteval->stack[((hsi*1764+105952)*1+lsi)*1]),63);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*1764+109984)*1+lsi)*1]), &(inteval->stack[((hsi*784+13804)*1+lsi)*1]), &(inteval->stack[((hsi*588+18424)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),28);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*2268+111748)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10780)*1+lsi)*1]), &(inteval->stack[((hsi*756+16156)*1+lsi)*1]), &(inteval->stack[((hsi*756+29596)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5292+35644)*1+lsi)*1]), &(inteval->stack[((hsi*2268+111748)*1+lsi)*1]), &(inteval->stack[((hsi*1764+109984)*1+lsi)*1]),63);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*1764+114016)*1+lsi)*1]), &(inteval->stack[((hsi*784+3808)*1+lsi)*1]), &(inteval->stack[((hsi*588+9016)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),28);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*2268+115780)*1+lsi)*1]), &(inteval->stack[((hsi*1008+784)*1+lsi)*1]), &(inteval->stack[((hsi*756+6748)*1+lsi)*1]), &(inteval->stack[((hsi*756+29596)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5292+30352)*1+lsi)*1]), &(inteval->stack[((hsi*2268+115780)*1+lsi)*1]), &(inteval->stack[((hsi*1764+114016)*1+lsi)*1]),63);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1764+118048)*1+lsi)*1]), &(inteval->stack[((hsi*756+27076)*1+lsi)*1]), &(inteval->stack[((hsi*588+29008)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),21);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*2352+119812)*1+lsi)*1]), &(inteval->stack[((hsi*1008+22204)*1+lsi)*1]), &(inteval->stack[((hsi*784+24780)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5292+88564)*1+lsi)*1]), &(inteval->stack[((hsi*2352+119812)*1+lsi)*1]), &(inteval->stack[((hsi*1764+118048)*1+lsi)*1]),84);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1764+122164)*1+lsi)*1]), &(inteval->stack[((hsi*756+17668)*1+lsi)*1]), &(inteval->stack[((hsi*588+19600)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),21);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*2352+123928)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12796)*1+lsi)*1]), &(inteval->stack[((hsi*784+15372)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5292+83272)*1+lsi)*1]), &(inteval->stack[((hsi*2352+123928)*1+lsi)*1]), &(inteval->stack[((hsi*1764+122164)*1+lsi)*1]),84);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1764+126280)*1+lsi)*1]), &(inteval->stack[((hsi*756+8260)*1+lsi)*1]), &(inteval->stack[((hsi*588+10192)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),21);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*2352+128044)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2800)*1+lsi)*1]), &(inteval->stack[((hsi*784+5376)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5292+77980)*1+lsi)*1]), &(inteval->stack[((hsi*2352+128044)*1+lsi)*1]), &(inteval->stack[((hsi*1764+126280)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+29596)*1+lsi)*1]), &(inteval->stack[((hsi*588+27832)*1+lsi)*1]), &(inteval->stack[((hsi*588+28420)*1+lsi)*1]), &(inteval->stack[((hsi*588+29008)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+27832)*1+lsi)*1]), &(inteval->stack[((hsi*756+25564)*1+lsi)*1]), &(inteval->stack[((hsi*756+26320)*1+lsi)*1]), &(inteval->stack[((hsi*756+27076)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*1764+25564)*1+lsi)*1]), &(inteval->stack[((hsi*756+27832)*1+lsi)*1]), &(inteval->stack[((hsi*588+29596)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+27328)*1+lsi)*1]), &(inteval->stack[((hsi*784+23212)*1+lsi)*1]), &(inteval->stack[((hsi*784+23996)*1+lsi)*1]), &(inteval->stack[((hsi*784+24780)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+23212)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20188)*1+lsi)*1]), &(inteval->stack[((hsi*1008+21196)*1+lsi)*1]), &(inteval->stack[((hsi*1008+22204)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*2352+20188)*1+lsi)*1]), &(inteval->stack[((hsi*1008+23212)*1+lsi)*1]), &(inteval->stack[((hsi*784+27328)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5292+72688)*1+lsi)*1]), &(inteval->stack[((hsi*2352+20188)*1+lsi)*1]), &(inteval->stack[((hsi*1764+25564)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+22540)*1+lsi)*1]), &(inteval->stack[((hsi*588+18424)*1+lsi)*1]), &(inteval->stack[((hsi*588+19012)*1+lsi)*1]), &(inteval->stack[((hsi*588+19600)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+27328)*1+lsi)*1]), &(inteval->stack[((hsi*756+16156)*1+lsi)*1]), &(inteval->stack[((hsi*756+16912)*1+lsi)*1]), &(inteval->stack[((hsi*756+17668)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*1764+16156)*1+lsi)*1]), &(inteval->stack[((hsi*756+27328)*1+lsi)*1]), &(inteval->stack[((hsi*588+22540)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+27328)*1+lsi)*1]), &(inteval->stack[((hsi*784+13804)*1+lsi)*1]), &(inteval->stack[((hsi*784+14588)*1+lsi)*1]), &(inteval->stack[((hsi*784+15372)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+22540)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10780)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11788)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12796)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*2352+10780)*1+lsi)*1]), &(inteval->stack[((hsi*1008+22540)*1+lsi)*1]), &(inteval->stack[((hsi*784+27328)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5292+67396)*1+lsi)*1]), &(inteval->stack[((hsi*2352+10780)*1+lsi)*1]), &(inteval->stack[((hsi*1764+16156)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+13132)*1+lsi)*1]), &(inteval->stack[((hsi*588+9016)*1+lsi)*1]), &(inteval->stack[((hsi*588+9604)*1+lsi)*1]), &(inteval->stack[((hsi*588+10192)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+22540)*1+lsi)*1]), &(inteval->stack[((hsi*756+6748)*1+lsi)*1]), &(inteval->stack[((hsi*756+7504)*1+lsi)*1]), &(inteval->stack[((hsi*756+8260)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*1764+6748)*1+lsi)*1]), &(inteval->stack[((hsi*756+22540)*1+lsi)*1]), &(inteval->stack[((hsi*588+13132)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+27328)*1+lsi)*1]), &(inteval->stack[((hsi*784+3808)*1+lsi)*1]), &(inteval->stack[((hsi*784+4592)*1+lsi)*1]), &(inteval->stack[((hsi*784+5376)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+22540)*1+lsi)*1]), &(inteval->stack[((hsi*1008+784)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1792)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2800)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*2352+784)*1+lsi)*1]), &(inteval->stack[((hsi*1008+22540)*1+lsi)*1]), &(inteval->stack[((hsi*784+27328)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5292+62104)*1+lsi)*1]), &(inteval->stack[((hsi*2352+784)*1+lsi)*1]), &(inteval->stack[((hsi*1764+6748)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5292+30352)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*5292+35644)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*5292+40936)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*5292+46228)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*5292+51520)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*5292+56812)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*5292+62104)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*5292+67396)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*5292+72688)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*5292+77980)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*5292+83272)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*5292+88564)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
