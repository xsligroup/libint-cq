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
#include <CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_L__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_L__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_L__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_L__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_L__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_L__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0kp001.h>
#include <HRRPart0bra0ket0kp010.h>
#include <HRRPart0bra0ket0kp100.h>
#include <HRRPart0bra0ket0k001p.h>
#include <HRRPart0bra0ket0k010p.h>
#include <HRRPart0bra0ket0k100p.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_K__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_K__0__K__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,63585)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_K__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*3888+203553)*1+lsi)*1]), &(inteval->stack[((hsi*1620+49977)*1+lsi)*1]), &(inteval->stack[((hsi*1296+59373)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*4860+207441)*1+lsi)*1]), &(inteval->stack[((hsi*2025+44307)*1+lsi)*1]), &(inteval->stack[((hsi*1620+54837)*1+lsi)*1]), &(inteval->stack[((hsi*1620+61965)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+121905)*1+lsi)*1]), &(inteval->stack[((hsi*4860+207441)*1+lsi)*1]), &(inteval->stack[((hsi*3888+203553)*1+lsi)*1]),108);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*3888+212301)*1+lsi)*1]), &(inteval->stack[((hsi*1620+48357)*1+lsi)*1]), &(inteval->stack[((hsi*1296+58077)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*4860+216189)*1+lsi)*1]), &(inteval->stack[((hsi*2025+42282)*1+lsi)*1]), &(inteval->stack[((hsi*1620+53217)*1+lsi)*1]), &(inteval->stack[((hsi*1620+61965)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+86913)*1+lsi)*1]), &(inteval->stack[((hsi*4860+216189)*1+lsi)*1]), &(inteval->stack[((hsi*3888+212301)*1+lsi)*1]),108);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*3888+221049)*1+lsi)*1]), &(inteval->stack[((hsi*1620+30294)*1+lsi)*1]), &(inteval->stack[((hsi*1296+39690)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*4860+224937)*1+lsi)*1]), &(inteval->stack[((hsi*2025+24624)*1+lsi)*1]), &(inteval->stack[((hsi*1620+35154)*1+lsi)*1]), &(inteval->stack[((hsi*1620+61965)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+110241)*1+lsi)*1]), &(inteval->stack[((hsi*4860+224937)*1+lsi)*1]), &(inteval->stack[((hsi*3888+221049)*1+lsi)*1]),108);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*3888+229797)*1+lsi)*1]), &(inteval->stack[((hsi*1620+28674)*1+lsi)*1]), &(inteval->stack[((hsi*1296+38394)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*4860+233685)*1+lsi)*1]), &(inteval->stack[((hsi*2025+22599)*1+lsi)*1]), &(inteval->stack[((hsi*1620+33534)*1+lsi)*1]), &(inteval->stack[((hsi*1620+61965)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+75249)*1+lsi)*1]), &(inteval->stack[((hsi*4860+233685)*1+lsi)*1]), &(inteval->stack[((hsi*3888+229797)*1+lsi)*1]),108);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*3888+238545)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9315)*1+lsi)*1]), &(inteval->stack[((hsi*1296+20007)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*4860+242433)*1+lsi)*1]), &(inteval->stack[((hsi*2025+3645)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15471)*1+lsi)*1]), &(inteval->stack[((hsi*1620+61965)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+98577)*1+lsi)*1]), &(inteval->stack[((hsi*4860+242433)*1+lsi)*1]), &(inteval->stack[((hsi*3888+238545)*1+lsi)*1]),108);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*3888+247293)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7695)*1+lsi)*1]), &(inteval->stack[((hsi*1296+18711)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*4860+251181)*1+lsi)*1]), &(inteval->stack[((hsi*2025+1620)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13851)*1+lsi)*1]), &(inteval->stack[((hsi*1620+61965)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+63585)*1+lsi)*1]), &(inteval->stack[((hsi*4860+251181)*1+lsi)*1]), &(inteval->stack[((hsi*3888+247293)*1+lsi)*1]),108);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3888+256041)*1+lsi)*1]), &(inteval->stack[((hsi*1620+56457)*1+lsi)*1]), &(inteval->stack[((hsi*1296+60669)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*4860+259929)*1+lsi)*1]), &(inteval->stack[((hsi*2025+46332)*1+lsi)*1]), &(inteval->stack[((hsi*1620+51597)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+191889)*1+lsi)*1]), &(inteval->stack[((hsi*4860+259929)*1+lsi)*1]), &(inteval->stack[((hsi*3888+256041)*1+lsi)*1]),108);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3888+264789)*1+lsi)*1]), &(inteval->stack[((hsi*1620+36774)*1+lsi)*1]), &(inteval->stack[((hsi*1296+40986)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*4860+268677)*1+lsi)*1]), &(inteval->stack[((hsi*2025+26649)*1+lsi)*1]), &(inteval->stack[((hsi*1620+31914)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+180225)*1+lsi)*1]), &(inteval->stack[((hsi*4860+268677)*1+lsi)*1]), &(inteval->stack[((hsi*3888+264789)*1+lsi)*1]),108);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3888+273537)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17091)*1+lsi)*1]), &(inteval->stack[((hsi*1296+21303)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*4860+277425)*1+lsi)*1]), &(inteval->stack[((hsi*2025+5670)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10935)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+168561)*1+lsi)*1]), &(inteval->stack[((hsi*4860+277425)*1+lsi)*1]), &(inteval->stack[((hsi*3888+273537)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+61965)*1+lsi)*1]), &(inteval->stack[((hsi*1296+58077)*1+lsi)*1]), &(inteval->stack[((hsi*1296+59373)*1+lsi)*1]), &(inteval->stack[((hsi*1296+60669)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+58077)*1+lsi)*1]), &(inteval->stack[((hsi*1620+53217)*1+lsi)*1]), &(inteval->stack[((hsi*1620+54837)*1+lsi)*1]), &(inteval->stack[((hsi*1620+56457)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*3888+53217)*1+lsi)*1]), &(inteval->stack[((hsi*1620+58077)*1+lsi)*1]), &(inteval->stack[((hsi*1296+61965)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_L__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+57105)*1+lsi)*1]), &(inteval->stack[((hsi*1620+48357)*1+lsi)*1]), &(inteval->stack[((hsi*1620+49977)*1+lsi)*1]), &(inteval->stack[((hsi*1620+51597)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_L__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2025+58725)*1+lsi)*1]), &(inteval->stack[((hsi*2025+42282)*1+lsi)*1]), &(inteval->stack[((hsi*2025+44307)*1+lsi)*1]), &(inteval->stack[((hsi*2025+46332)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*4860+42282)*1+lsi)*1]), &(inteval->stack[((hsi*2025+58725)*1+lsi)*1]), &(inteval->stack[((hsi*1620+57105)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+156897)*1+lsi)*1]), &(inteval->stack[((hsi*4860+42282)*1+lsi)*1]), &(inteval->stack[((hsi*3888+53217)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+57105)*1+lsi)*1]), &(inteval->stack[((hsi*1296+38394)*1+lsi)*1]), &(inteval->stack[((hsi*1296+39690)*1+lsi)*1]), &(inteval->stack[((hsi*1296+40986)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+47142)*1+lsi)*1]), &(inteval->stack[((hsi*1620+33534)*1+lsi)*1]), &(inteval->stack[((hsi*1620+35154)*1+lsi)*1]), &(inteval->stack[((hsi*1620+36774)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*3888+33534)*1+lsi)*1]), &(inteval->stack[((hsi*1620+47142)*1+lsi)*1]), &(inteval->stack[((hsi*1296+57105)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_L__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+57105)*1+lsi)*1]), &(inteval->stack[((hsi*1620+28674)*1+lsi)*1]), &(inteval->stack[((hsi*1620+30294)*1+lsi)*1]), &(inteval->stack[((hsi*1620+31914)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_L__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2025+47142)*1+lsi)*1]), &(inteval->stack[((hsi*2025+22599)*1+lsi)*1]), &(inteval->stack[((hsi*2025+24624)*1+lsi)*1]), &(inteval->stack[((hsi*2025+26649)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*4860+37422)*1+lsi)*1]), &(inteval->stack[((hsi*2025+47142)*1+lsi)*1]), &(inteval->stack[((hsi*1620+57105)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+145233)*1+lsi)*1]), &(inteval->stack[((hsi*4860+37422)*1+lsi)*1]), &(inteval->stack[((hsi*3888+33534)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+22599)*1+lsi)*1]), &(inteval->stack[((hsi*1296+18711)*1+lsi)*1]), &(inteval->stack[((hsi*1296+20007)*1+lsi)*1]), &(inteval->stack[((hsi*1296+21303)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+23895)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13851)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15471)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17091)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*3888+13851)*1+lsi)*1]), &(inteval->stack[((hsi*1620+23895)*1+lsi)*1]), &(inteval->stack[((hsi*1296+22599)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12555)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_L__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+17739)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7695)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9315)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10935)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_L__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*2025+19359)*1+lsi)*1]), &(inteval->stack[((hsi*2025+1620)*1+lsi)*1]), &(inteval->stack[((hsi*2025+3645)*1+lsi)*1]), &(inteval->stack[((hsi*2025+5670)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*4860+1620)*1+lsi)*1]), &(inteval->stack[((hsi*2025+19359)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17739)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*11664+133569)*1+lsi)*1]), &(inteval->stack[((hsi*4860+1620)*1+lsi)*1]), &(inteval->stack[((hsi*3888+13851)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*11664+63585)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*11664+75249)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*11664+86913)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*11664+98577)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*11664+110241)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*11664+121905)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*11664+133569)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*11664+145233)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*11664+156897)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*11664+168561)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*11664+180225)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*11664+191889)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
