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
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_G__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_G__0__I__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,15675)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+45915)*1+lsi)*1]), &(inteval->stack[((hsi*540+9810)*1+lsi)*1]), &(inteval->stack[((hsi*420+11565)*1+lsi)*1]),15);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1260+47175)*1+lsi)*1]), &(inteval->stack[((hsi*540+14715)*1+lsi)*1]), &(inteval->stack[((hsi*420+15255)*1+lsi)*1]), &(inteval->stack[((hsi*420+11565)*1+lsi)*1]),15);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1620+48435)*1+lsi)*1]), &(inteval->stack[((hsi*675+14040)*1+lsi)*1]), &(inteval->stack[((hsi*540+14715)*1+lsi)*1]), &(inteval->stack[((hsi*540+9810)*1+lsi)*1]),15);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*2520+43395)*1+lsi)*1]), &(inteval->stack[((hsi*1620+48435)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47175)*1+lsi)*1]), &(inteval->stack[((hsi*1260+45915)*1+lsi)*1]),15);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1260+50055)*1+lsi)*1]), &(inteval->stack[((hsi*540+13080)*1+lsi)*1]), &(inteval->stack[((hsi*420+13620)*1+lsi)*1]), &(inteval->stack[((hsi*420+11565)*1+lsi)*1]),15);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1620+51315)*1+lsi)*1]), &(inteval->stack[((hsi*675+12405)*1+lsi)*1]), &(inteval->stack[((hsi*540+13080)*1+lsi)*1]), &(inteval->stack[((hsi*540+9810)*1+lsi)*1]),15);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*2520+40875)*1+lsi)*1]), &(inteval->stack[((hsi*1620+51315)*1+lsi)*1]), &(inteval->stack[((hsi*1260+50055)*1+lsi)*1]), &(inteval->stack[((hsi*1260+45915)*1+lsi)*1]),15);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1260+52935)*1+lsi)*1]), &(inteval->stack[((hsi*540+11025)*1+lsi)*1]), &(inteval->stack[((hsi*420+11985)*1+lsi)*1]), &(inteval->stack[((hsi*420+11565)*1+lsi)*1]),15);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1620+54195)*1+lsi)*1]), &(inteval->stack[((hsi*675+10350)*1+lsi)*1]), &(inteval->stack[((hsi*540+11025)*1+lsi)*1]), &(inteval->stack[((hsi*540+9810)*1+lsi)*1]),15);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*2520+38355)*1+lsi)*1]), &(inteval->stack[((hsi*1620+54195)*1+lsi)*1]), &(inteval->stack[((hsi*1260+52935)*1+lsi)*1]), &(inteval->stack[((hsi*1260+45915)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+55815)*1+lsi)*1]), &(inteval->stack[((hsi*540+3945)*1+lsi)*1]), &(inteval->stack[((hsi*540+8850)*1+lsi)*1]), &(inteval->stack[((hsi*540+14715)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+14715)*1+lsi)*1]), &(inteval->stack[((hsi*420+4485)*1+lsi)*1]), &(inteval->stack[((hsi*420+9390)*1+lsi)*1]), &(inteval->stack[((hsi*420+15255)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*1260+56355)*1+lsi)*1]), &(inteval->stack[((hsi*540+55815)*1+lsi)*1]), &(inteval->stack[((hsi*420+14715)*1+lsi)*1]), &(inteval->stack[((hsi*420+11565)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+14715)*1+lsi)*1]), &(inteval->stack[((hsi*675+3270)*1+lsi)*1]), &(inteval->stack[((hsi*675+8175)*1+lsi)*1]), &(inteval->stack[((hsi*675+14040)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*1620+57615)*1+lsi)*1]), &(inteval->stack[((hsi*675+14715)*1+lsi)*1]), &(inteval->stack[((hsi*540+55815)*1+lsi)*1]), &(inteval->stack[((hsi*540+9810)*1+lsi)*1]),15);
HRRPart1bra0ket0i001d(inteval, &(inteval->stack[((hsi*2520+35835)*1+lsi)*1]), &(inteval->stack[((hsi*1620+57615)*1+lsi)*1]), &(inteval->stack[((hsi*1260+56355)*1+lsi)*1]), &(inteval->stack[((hsi*1260+45915)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+55815)*1+lsi)*1]), &(inteval->stack[((hsi*540+2310)*1+lsi)*1]), &(inteval->stack[((hsi*540+7215)*1+lsi)*1]), &(inteval->stack[((hsi*540+13080)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+14040)*1+lsi)*1]), &(inteval->stack[((hsi*420+2850)*1+lsi)*1]), &(inteval->stack[((hsi*420+7755)*1+lsi)*1]), &(inteval->stack[((hsi*420+13620)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*1260+59235)*1+lsi)*1]), &(inteval->stack[((hsi*540+55815)*1+lsi)*1]), &(inteval->stack[((hsi*420+14040)*1+lsi)*1]), &(inteval->stack[((hsi*420+11565)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+13080)*1+lsi)*1]), &(inteval->stack[((hsi*675+1635)*1+lsi)*1]), &(inteval->stack[((hsi*675+6540)*1+lsi)*1]), &(inteval->stack[((hsi*675+12405)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*1620+13755)*1+lsi)*1]), &(inteval->stack[((hsi*675+13080)*1+lsi)*1]), &(inteval->stack[((hsi*540+55815)*1+lsi)*1]), &(inteval->stack[((hsi*540+9810)*1+lsi)*1]),15);
HRRPart1bra0ket0i010d(inteval, &(inteval->stack[((hsi*2520+33315)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13755)*1+lsi)*1]), &(inteval->stack[((hsi*1260+59235)*1+lsi)*1]), &(inteval->stack[((hsi*1260+45915)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+55815)*1+lsi)*1]), &(inteval->stack[((hsi*540+675)*1+lsi)*1]), &(inteval->stack[((hsi*540+5580)*1+lsi)*1]), &(inteval->stack[((hsi*540+11025)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+12405)*1+lsi)*1]), &(inteval->stack[((hsi*420+1215)*1+lsi)*1]), &(inteval->stack[((hsi*420+6120)*1+lsi)*1]), &(inteval->stack[((hsi*420+11985)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*1260+60495)*1+lsi)*1]), &(inteval->stack[((hsi*540+55815)*1+lsi)*1]), &(inteval->stack[((hsi*420+12405)*1+lsi)*1]), &(inteval->stack[((hsi*420+11565)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+11025)*1+lsi)*1]), &(inteval->stack[((hsi*675+0)*1+lsi)*1]), &(inteval->stack[((hsi*675+4905)*1+lsi)*1]), &(inteval->stack[((hsi*675+10350)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*1620+11700)*1+lsi)*1]), &(inteval->stack[((hsi*675+11025)*1+lsi)*1]), &(inteval->stack[((hsi*540+55815)*1+lsi)*1]), &(inteval->stack[((hsi*540+9810)*1+lsi)*1]),15);
HRRPart1bra0ket0i100d(inteval, &(inteval->stack[((hsi*2520+30795)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11700)*1+lsi)*1]), &(inteval->stack[((hsi*1260+60495)*1+lsi)*1]), &(inteval->stack[((hsi*1260+45915)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+9810)*1+lsi)*1]), &(inteval->stack[((hsi*540+8850)*1+lsi)*1]), &(inteval->stack[((hsi*420+9390)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+61755)*1+lsi)*1]), &(inteval->stack[((hsi*675+8175)*1+lsi)*1]), &(inteval->stack[((hsi*540+8850)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+28275)*1+lsi)*1]), &(inteval->stack[((hsi*1620+61755)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9810)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+8175)*1+lsi)*1]), &(inteval->stack[((hsi*540+7215)*1+lsi)*1]), &(inteval->stack[((hsi*420+7755)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+63375)*1+lsi)*1]), &(inteval->stack[((hsi*675+6540)*1+lsi)*1]), &(inteval->stack[((hsi*540+7215)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+25755)*1+lsi)*1]), &(inteval->stack[((hsi*1620+63375)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8175)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+6540)*1+lsi)*1]), &(inteval->stack[((hsi*540+5580)*1+lsi)*1]), &(inteval->stack[((hsi*420+6120)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+64995)*1+lsi)*1]), &(inteval->stack[((hsi*675+4905)*1+lsi)*1]), &(inteval->stack[((hsi*540+5580)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+23235)*1+lsi)*1]), &(inteval->stack[((hsi*1620+64995)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6540)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+4905)*1+lsi)*1]), &(inteval->stack[((hsi*540+3945)*1+lsi)*1]), &(inteval->stack[((hsi*420+4485)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+66615)*1+lsi)*1]), &(inteval->stack[((hsi*675+3270)*1+lsi)*1]), &(inteval->stack[((hsi*540+3945)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+20715)*1+lsi)*1]), &(inteval->stack[((hsi*1620+66615)*1+lsi)*1]), &(inteval->stack[((hsi*1260+4905)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+3270)*1+lsi)*1]), &(inteval->stack[((hsi*540+2310)*1+lsi)*1]), &(inteval->stack[((hsi*420+2850)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+68235)*1+lsi)*1]), &(inteval->stack[((hsi*675+1635)*1+lsi)*1]), &(inteval->stack[((hsi*540+2310)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+18195)*1+lsi)*1]), &(inteval->stack[((hsi*1620+68235)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3270)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+1635)*1+lsi)*1]), &(inteval->stack[((hsi*540+675)*1+lsi)*1]), &(inteval->stack[((hsi*420+1215)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+69855)*1+lsi)*1]), &(inteval->stack[((hsi*675+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+675)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+15675)*1+lsi)*1]), &(inteval->stack[((hsi*1620+69855)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1635)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2520+15675)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2520+18195)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2520+20715)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2520+23235)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2520+25755)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2520+28275)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2520+30795)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2520+33315)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2520+35835)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2520+38355)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2520+40875)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2520+43395)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
