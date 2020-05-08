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
#include <CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i100p.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_I__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_I__0__K__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,50220)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_I__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*3024+159084)*1+lsi)*1]), &(inteval->stack[((hsi*1296+39564)*1+lsi)*1]), &(inteval->stack[((hsi*1008+46944)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),36);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*3780+162108)*1+lsi)*1]), &(inteval->stack[((hsi*1620+35028)*1+lsi)*1]), &(inteval->stack[((hsi*1260+43416)*1+lsi)*1]), &(inteval->stack[((hsi*1260+48960)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*9072+95580)*1+lsi)*1]), &(inteval->stack[((hsi*3780+162108)*1+lsi)*1]), &(inteval->stack[((hsi*3024+159084)*1+lsi)*1]),84);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*3024+165888)*1+lsi)*1]), &(inteval->stack[((hsi*1296+24012)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31392)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),36);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*3780+168912)*1+lsi)*1]), &(inteval->stack[((hsi*1620+19476)*1+lsi)*1]), &(inteval->stack[((hsi*1260+27864)*1+lsi)*1]), &(inteval->stack[((hsi*1260+48960)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*9072+86508)*1+lsi)*1]), &(inteval->stack[((hsi*3780+168912)*1+lsi)*1]), &(inteval->stack[((hsi*3024+165888)*1+lsi)*1]),84);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*3024+172692)*1+lsi)*1]), &(inteval->stack[((hsi*1296+7452)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15840)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),36);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*3780+175716)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2916)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12312)*1+lsi)*1]), &(inteval->stack[((hsi*1260+48960)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*9072+77436)*1+lsi)*1]), &(inteval->stack[((hsi*3780+175716)*1+lsi)*1]), &(inteval->stack[((hsi*3024+172692)*1+lsi)*1]),84);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*3024+179496)*1+lsi)*1]), &(inteval->stack[((hsi*1296+38268)*1+lsi)*1]), &(inteval->stack[((hsi*1008+45936)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),36);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*3780+182520)*1+lsi)*1]), &(inteval->stack[((hsi*1620+33408)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42156)*1+lsi)*1]), &(inteval->stack[((hsi*1260+48960)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*9072+68364)*1+lsi)*1]), &(inteval->stack[((hsi*3780+182520)*1+lsi)*1]), &(inteval->stack[((hsi*3024+179496)*1+lsi)*1]),84);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*3024+186300)*1+lsi)*1]), &(inteval->stack[((hsi*1296+22716)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30384)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),36);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*3780+189324)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17856)*1+lsi)*1]), &(inteval->stack[((hsi*1260+26604)*1+lsi)*1]), &(inteval->stack[((hsi*1260+48960)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*9072+59292)*1+lsi)*1]), &(inteval->stack[((hsi*3780+189324)*1+lsi)*1]), &(inteval->stack[((hsi*3024+186300)*1+lsi)*1]),84);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*3024+193104)*1+lsi)*1]), &(inteval->stack[((hsi*1296+6156)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14832)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),36);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*3780+196128)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1296)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11052)*1+lsi)*1]), &(inteval->stack[((hsi*1260+48960)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*9072+50220)*1+lsi)*1]), &(inteval->stack[((hsi*3780+196128)*1+lsi)*1]), &(inteval->stack[((hsi*3024+193104)*1+lsi)*1]),84);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3024+199908)*1+lsi)*1]), &(inteval->stack[((hsi*1260+44676)*1+lsi)*1]), &(inteval->stack[((hsi*1008+47952)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),28);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3888+202932)*1+lsi)*1]), &(inteval->stack[((hsi*1620+36648)*1+lsi)*1]), &(inteval->stack[((hsi*1296+40860)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*9072+150012)*1+lsi)*1]), &(inteval->stack[((hsi*3888+202932)*1+lsi)*1]), &(inteval->stack[((hsi*3024+199908)*1+lsi)*1]),108);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3024+206820)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29124)*1+lsi)*1]), &(inteval->stack[((hsi*1008+32400)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),28);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3888+209844)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21096)*1+lsi)*1]), &(inteval->stack[((hsi*1296+25308)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*9072+140940)*1+lsi)*1]), &(inteval->stack[((hsi*3888+209844)*1+lsi)*1]), &(inteval->stack[((hsi*3024+206820)*1+lsi)*1]),108);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3024+213732)*1+lsi)*1]), &(inteval->stack[((hsi*1260+13572)*1+lsi)*1]), &(inteval->stack[((hsi*1008+16848)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),28);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3888+216756)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4536)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8748)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*9072+131868)*1+lsi)*1]), &(inteval->stack[((hsi*3888+216756)*1+lsi)*1]), &(inteval->stack[((hsi*3024+213732)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+48960)*1+lsi)*1]), &(inteval->stack[((hsi*1008+45936)*1+lsi)*1]), &(inteval->stack[((hsi*1008+46944)*1+lsi)*1]), &(inteval->stack[((hsi*1008+47952)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+45936)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42156)*1+lsi)*1]), &(inteval->stack[((hsi*1260+43416)*1+lsi)*1]), &(inteval->stack[((hsi*1260+44676)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*3024+42156)*1+lsi)*1]), &(inteval->stack[((hsi*1260+45936)*1+lsi)*1]), &(inteval->stack[((hsi*1008+48960)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+45180)*1+lsi)*1]), &(inteval->stack[((hsi*1296+38268)*1+lsi)*1]), &(inteval->stack[((hsi*1296+39564)*1+lsi)*1]), &(inteval->stack[((hsi*1296+40860)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+38268)*1+lsi)*1]), &(inteval->stack[((hsi*1620+33408)*1+lsi)*1]), &(inteval->stack[((hsi*1620+35028)*1+lsi)*1]), &(inteval->stack[((hsi*1620+36648)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*3888+33408)*1+lsi)*1]), &(inteval->stack[((hsi*1620+38268)*1+lsi)*1]), &(inteval->stack[((hsi*1296+45180)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*9072+122796)*1+lsi)*1]), &(inteval->stack[((hsi*3888+33408)*1+lsi)*1]), &(inteval->stack[((hsi*3024+42156)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+45180)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30384)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31392)*1+lsi)*1]), &(inteval->stack[((hsi*1008+32400)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+37296)*1+lsi)*1]), &(inteval->stack[((hsi*1260+26604)*1+lsi)*1]), &(inteval->stack[((hsi*1260+27864)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29124)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*3024+26604)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37296)*1+lsi)*1]), &(inteval->stack[((hsi*1008+45180)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+45180)*1+lsi)*1]), &(inteval->stack[((hsi*1296+22716)*1+lsi)*1]), &(inteval->stack[((hsi*1296+24012)*1+lsi)*1]), &(inteval->stack[((hsi*1296+25308)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+37296)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17856)*1+lsi)*1]), &(inteval->stack[((hsi*1620+19476)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21096)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*3888+17856)*1+lsi)*1]), &(inteval->stack[((hsi*1620+37296)*1+lsi)*1]), &(inteval->stack[((hsi*1296+45180)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*9072+113724)*1+lsi)*1]), &(inteval->stack[((hsi*3888+17856)*1+lsi)*1]), &(inteval->stack[((hsi*3024+26604)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+45180)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14832)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15840)*1+lsi)*1]), &(inteval->stack[((hsi*1008+16848)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+21744)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11052)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12312)*1+lsi)*1]), &(inteval->stack[((hsi*1260+13572)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*3024+11052)*1+lsi)*1]), &(inteval->stack[((hsi*1260+21744)*1+lsi)*1]), &(inteval->stack[((hsi*1008+45180)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10044)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+45180)*1+lsi)*1]), &(inteval->stack[((hsi*1296+6156)*1+lsi)*1]), &(inteval->stack[((hsi*1296+7452)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8748)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+6156)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1296)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2916)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4536)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*3888+37296)*1+lsi)*1]), &(inteval->stack[((hsi*1620+6156)*1+lsi)*1]), &(inteval->stack[((hsi*1296+45180)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*9072+104652)*1+lsi)*1]), &(inteval->stack[((hsi*3888+37296)*1+lsi)*1]), &(inteval->stack[((hsi*3024+11052)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*9072+50220)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*9072+59292)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*9072+68364)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*9072+77436)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*9072+86508)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*9072+95580)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*9072+104652)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*9072+113724)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*9072+122796)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*9072+131868)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*9072+140940)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*9072+150012)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
