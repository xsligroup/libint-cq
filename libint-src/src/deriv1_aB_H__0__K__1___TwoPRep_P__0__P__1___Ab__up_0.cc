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
#include <CR_DerivGaussP1InBra_aB_H__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100p.h>
#include <deriv1_aB_H__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_H__0__K__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,38430)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*2268+120078)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30366)*1+lsi)*1]), &(inteval->stack[((hsi*756+35973)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),36);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*2835+122346)*1+lsi)*1]), &(inteval->stack[((hsi*1260+26838)*1+lsi)*1]), &(inteval->stack[((hsi*945+33327)*1+lsi)*1]), &(inteval->stack[((hsi*945+37485)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*6804+72450)*1+lsi)*1]), &(inteval->stack[((hsi*2835+122346)*1+lsi)*1]), &(inteval->stack[((hsi*2268+120078)*1+lsi)*1]),63);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*2268+125181)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18459)*1+lsi)*1]), &(inteval->stack[((hsi*756+24066)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),36);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*2835+127449)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14931)*1+lsi)*1]), &(inteval->stack[((hsi*945+21420)*1+lsi)*1]), &(inteval->stack[((hsi*945+37485)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*6804+65646)*1+lsi)*1]), &(inteval->stack[((hsi*2835+127449)*1+lsi)*1]), &(inteval->stack[((hsi*2268+125181)*1+lsi)*1]),63);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*2268+130284)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5796)*1+lsi)*1]), &(inteval->stack[((hsi*756+12159)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),36);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*2835+132552)*1+lsi)*1]), &(inteval->stack[((hsi*1260+2268)*1+lsi)*1]), &(inteval->stack[((hsi*945+9513)*1+lsi)*1]), &(inteval->stack[((hsi*945+37485)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*6804+58842)*1+lsi)*1]), &(inteval->stack[((hsi*2835+132552)*1+lsi)*1]), &(inteval->stack[((hsi*2268+130284)*1+lsi)*1]),63);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*2268+135387)*1+lsi)*1]), &(inteval->stack[((hsi*1008+29358)*1+lsi)*1]), &(inteval->stack[((hsi*756+35217)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),36);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*2835+137655)*1+lsi)*1]), &(inteval->stack[((hsi*1260+25578)*1+lsi)*1]), &(inteval->stack[((hsi*945+32382)*1+lsi)*1]), &(inteval->stack[((hsi*945+37485)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*6804+52038)*1+lsi)*1]), &(inteval->stack[((hsi*2835+137655)*1+lsi)*1]), &(inteval->stack[((hsi*2268+135387)*1+lsi)*1]),63);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*2268+140490)*1+lsi)*1]), &(inteval->stack[((hsi*1008+17451)*1+lsi)*1]), &(inteval->stack[((hsi*756+23310)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),36);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*2835+142758)*1+lsi)*1]), &(inteval->stack[((hsi*1260+13671)*1+lsi)*1]), &(inteval->stack[((hsi*945+20475)*1+lsi)*1]), &(inteval->stack[((hsi*945+37485)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*6804+45234)*1+lsi)*1]), &(inteval->stack[((hsi*2835+142758)*1+lsi)*1]), &(inteval->stack[((hsi*2268+140490)*1+lsi)*1]),63);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*2268+145593)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4788)*1+lsi)*1]), &(inteval->stack[((hsi*756+11403)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),36);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*2835+147861)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1008)*1+lsi)*1]), &(inteval->stack[((hsi*945+8568)*1+lsi)*1]), &(inteval->stack[((hsi*945+37485)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*6804+38430)*1+lsi)*1]), &(inteval->stack[((hsi*2835+147861)*1+lsi)*1]), &(inteval->stack[((hsi*2268+145593)*1+lsi)*1]),63);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*2268+150696)*1+lsi)*1]), &(inteval->stack[((hsi*945+34272)*1+lsi)*1]), &(inteval->stack[((hsi*756+36729)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),21);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3024+152964)*1+lsi)*1]), &(inteval->stack[((hsi*1260+28098)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31374)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6804+113274)*1+lsi)*1]), &(inteval->stack[((hsi*3024+152964)*1+lsi)*1]), &(inteval->stack[((hsi*2268+150696)*1+lsi)*1]),108);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*2268+155988)*1+lsi)*1]), &(inteval->stack[((hsi*945+22365)*1+lsi)*1]), &(inteval->stack[((hsi*756+24822)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),21);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3024+158256)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16191)*1+lsi)*1]), &(inteval->stack[((hsi*1008+19467)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6804+106470)*1+lsi)*1]), &(inteval->stack[((hsi*3024+158256)*1+lsi)*1]), &(inteval->stack[((hsi*2268+155988)*1+lsi)*1]),108);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*2268+161280)*1+lsi)*1]), &(inteval->stack[((hsi*945+10458)*1+lsi)*1]), &(inteval->stack[((hsi*756+12915)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),21);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3024+163548)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3528)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6804)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6804+99666)*1+lsi)*1]), &(inteval->stack[((hsi*3024+163548)*1+lsi)*1]), &(inteval->stack[((hsi*2268+161280)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+37485)*1+lsi)*1]), &(inteval->stack[((hsi*756+35217)*1+lsi)*1]), &(inteval->stack[((hsi*756+35973)*1+lsi)*1]), &(inteval->stack[((hsi*756+36729)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+35217)*1+lsi)*1]), &(inteval->stack[((hsi*945+32382)*1+lsi)*1]), &(inteval->stack[((hsi*945+33327)*1+lsi)*1]), &(inteval->stack[((hsi*945+34272)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*2268+32382)*1+lsi)*1]), &(inteval->stack[((hsi*945+35217)*1+lsi)*1]), &(inteval->stack[((hsi*756+37485)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+34650)*1+lsi)*1]), &(inteval->stack[((hsi*1008+29358)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30366)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31374)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+29358)*1+lsi)*1]), &(inteval->stack[((hsi*1260+25578)*1+lsi)*1]), &(inteval->stack[((hsi*1260+26838)*1+lsi)*1]), &(inteval->stack[((hsi*1260+28098)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*3024+25578)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29358)*1+lsi)*1]), &(inteval->stack[((hsi*1008+34650)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6804+92862)*1+lsi)*1]), &(inteval->stack[((hsi*3024+25578)*1+lsi)*1]), &(inteval->stack[((hsi*2268+32382)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+28602)*1+lsi)*1]), &(inteval->stack[((hsi*756+23310)*1+lsi)*1]), &(inteval->stack[((hsi*756+24066)*1+lsi)*1]), &(inteval->stack[((hsi*756+24822)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+34650)*1+lsi)*1]), &(inteval->stack[((hsi*945+20475)*1+lsi)*1]), &(inteval->stack[((hsi*945+21420)*1+lsi)*1]), &(inteval->stack[((hsi*945+22365)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*2268+20475)*1+lsi)*1]), &(inteval->stack[((hsi*945+34650)*1+lsi)*1]), &(inteval->stack[((hsi*756+28602)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+34650)*1+lsi)*1]), &(inteval->stack[((hsi*1008+17451)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18459)*1+lsi)*1]), &(inteval->stack[((hsi*1008+19467)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+28602)*1+lsi)*1]), &(inteval->stack[((hsi*1260+13671)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14931)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16191)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*3024+13671)*1+lsi)*1]), &(inteval->stack[((hsi*1260+28602)*1+lsi)*1]), &(inteval->stack[((hsi*1008+34650)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6804+86058)*1+lsi)*1]), &(inteval->stack[((hsi*3024+13671)*1+lsi)*1]), &(inteval->stack[((hsi*2268+20475)*1+lsi)*1]),108);
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+16695)*1+lsi)*1]), &(inteval->stack[((hsi*756+11403)*1+lsi)*1]), &(inteval->stack[((hsi*756+12159)*1+lsi)*1]), &(inteval->stack[((hsi*756+12915)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+28602)*1+lsi)*1]), &(inteval->stack[((hsi*945+8568)*1+lsi)*1]), &(inteval->stack[((hsi*945+9513)*1+lsi)*1]), &(inteval->stack[((hsi*945+10458)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*2268+8568)*1+lsi)*1]), &(inteval->stack[((hsi*945+28602)*1+lsi)*1]), &(inteval->stack[((hsi*756+16695)*1+lsi)*1]), &(inteval->stack[((hsi*756+7812)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+34650)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4788)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5796)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6804)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+28602)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1008)*1+lsi)*1]), &(inteval->stack[((hsi*1260+2268)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3528)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*3024+1008)*1+lsi)*1]), &(inteval->stack[((hsi*1260+28602)*1+lsi)*1]), &(inteval->stack[((hsi*1008+34650)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6804+79254)*1+lsi)*1]), &(inteval->stack[((hsi*3024+1008)*1+lsi)*1]), &(inteval->stack[((hsi*2268+8568)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6804+38430)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*6804+45234)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*6804+52038)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*6804+58842)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*6804+65646)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*6804+72450)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*6804+79254)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*6804+86058)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*6804+92862)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*6804+99666)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*6804+106470)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*6804+113274)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
