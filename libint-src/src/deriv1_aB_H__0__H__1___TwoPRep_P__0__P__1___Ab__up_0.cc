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
#include <CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1_aB_H__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_H__0__H__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,23226)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*1323+70854)*1+lsi)*1]), &(inteval->stack[((hsi*588+18375)*1+lsi)*1]), &(inteval->stack[((hsi*441+21756)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+72177)*1+lsi)*1]), &(inteval->stack[((hsi*784+16219)*1+lsi)*1]), &(inteval->stack[((hsi*588+20139)*1+lsi)*1]), &(inteval->stack[((hsi*588+22638)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+43071)*1+lsi)*1]), &(inteval->stack[((hsi*1764+72177)*1+lsi)*1]), &(inteval->stack[((hsi*1323+70854)*1+lsi)*1]),63);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*1323+73941)*1+lsi)*1]), &(inteval->stack[((hsi*588+11172)*1+lsi)*1]), &(inteval->stack[((hsi*441+14553)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+75264)*1+lsi)*1]), &(inteval->stack[((hsi*784+9016)*1+lsi)*1]), &(inteval->stack[((hsi*588+12936)*1+lsi)*1]), &(inteval->stack[((hsi*588+22638)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+39102)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75264)*1+lsi)*1]), &(inteval->stack[((hsi*1323+73941)*1+lsi)*1]),63);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*1323+77028)*1+lsi)*1]), &(inteval->stack[((hsi*588+3528)*1+lsi)*1]), &(inteval->stack[((hsi*441+7350)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+78351)*1+lsi)*1]), &(inteval->stack[((hsi*784+1372)*1+lsi)*1]), &(inteval->stack[((hsi*588+5733)*1+lsi)*1]), &(inteval->stack[((hsi*588+22638)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+35133)*1+lsi)*1]), &(inteval->stack[((hsi*1764+78351)*1+lsi)*1]), &(inteval->stack[((hsi*1323+77028)*1+lsi)*1]),63);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*1323+80115)*1+lsi)*1]), &(inteval->stack[((hsi*588+17787)*1+lsi)*1]), &(inteval->stack[((hsi*441+21315)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*1764+81438)*1+lsi)*1]), &(inteval->stack[((hsi*784+15435)*1+lsi)*1]), &(inteval->stack[((hsi*588+19551)*1+lsi)*1]), &(inteval->stack[((hsi*588+22638)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+31164)*1+lsi)*1]), &(inteval->stack[((hsi*1764+81438)*1+lsi)*1]), &(inteval->stack[((hsi*1323+80115)*1+lsi)*1]),63);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*1323+83202)*1+lsi)*1]), &(inteval->stack[((hsi*588+10584)*1+lsi)*1]), &(inteval->stack[((hsi*441+14112)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*1764+84525)*1+lsi)*1]), &(inteval->stack[((hsi*784+8232)*1+lsi)*1]), &(inteval->stack[((hsi*588+12348)*1+lsi)*1]), &(inteval->stack[((hsi*588+22638)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+27195)*1+lsi)*1]), &(inteval->stack[((hsi*1764+84525)*1+lsi)*1]), &(inteval->stack[((hsi*1323+83202)*1+lsi)*1]),63);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*1323+86289)*1+lsi)*1]), &(inteval->stack[((hsi*588+2940)*1+lsi)*1]), &(inteval->stack[((hsi*441+6909)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*1764+87612)*1+lsi)*1]), &(inteval->stack[((hsi*784+588)*1+lsi)*1]), &(inteval->stack[((hsi*588+5145)*1+lsi)*1]), &(inteval->stack[((hsi*588+22638)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+23226)*1+lsi)*1]), &(inteval->stack[((hsi*1764+87612)*1+lsi)*1]), &(inteval->stack[((hsi*1323+86289)*1+lsi)*1]),63);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1323+89376)*1+lsi)*1]), &(inteval->stack[((hsi*588+20727)*1+lsi)*1]), &(inteval->stack[((hsi*441+22197)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+90699)*1+lsi)*1]), &(inteval->stack[((hsi*784+17003)*1+lsi)*1]), &(inteval->stack[((hsi*588+18963)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+66885)*1+lsi)*1]), &(inteval->stack[((hsi*1764+90699)*1+lsi)*1]), &(inteval->stack[((hsi*1323+89376)*1+lsi)*1]),63);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1323+92463)*1+lsi)*1]), &(inteval->stack[((hsi*588+13524)*1+lsi)*1]), &(inteval->stack[((hsi*441+14994)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+93786)*1+lsi)*1]), &(inteval->stack[((hsi*784+9800)*1+lsi)*1]), &(inteval->stack[((hsi*588+11760)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+62916)*1+lsi)*1]), &(inteval->stack[((hsi*1764+93786)*1+lsi)*1]), &(inteval->stack[((hsi*1323+92463)*1+lsi)*1]),63);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1323+95550)*1+lsi)*1]), &(inteval->stack[((hsi*588+6321)*1+lsi)*1]), &(inteval->stack[((hsi*441+7791)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+96873)*1+lsi)*1]), &(inteval->stack[((hsi*784+2156)*1+lsi)*1]), &(inteval->stack[((hsi*588+4116)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+58947)*1+lsi)*1]), &(inteval->stack[((hsi*1764+96873)*1+lsi)*1]), &(inteval->stack[((hsi*1323+95550)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+22638)*1+lsi)*1]), &(inteval->stack[((hsi*441+21315)*1+lsi)*1]), &(inteval->stack[((hsi*441+21756)*1+lsi)*1]), &(inteval->stack[((hsi*441+22197)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+21315)*1+lsi)*1]), &(inteval->stack[((hsi*588+19551)*1+lsi)*1]), &(inteval->stack[((hsi*588+20139)*1+lsi)*1]), &(inteval->stack[((hsi*588+20727)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1323+19551)*1+lsi)*1]), &(inteval->stack[((hsi*588+21315)*1+lsi)*1]), &(inteval->stack[((hsi*441+22638)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+20874)*1+lsi)*1]), &(inteval->stack[((hsi*588+17787)*1+lsi)*1]), &(inteval->stack[((hsi*588+18375)*1+lsi)*1]), &(inteval->stack[((hsi*588+18963)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+21462)*1+lsi)*1]), &(inteval->stack[((hsi*784+15435)*1+lsi)*1]), &(inteval->stack[((hsi*784+16219)*1+lsi)*1]), &(inteval->stack[((hsi*784+17003)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1764+15435)*1+lsi)*1]), &(inteval->stack[((hsi*784+21462)*1+lsi)*1]), &(inteval->stack[((hsi*588+20874)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+54978)*1+lsi)*1]), &(inteval->stack[((hsi*1764+15435)*1+lsi)*1]), &(inteval->stack[((hsi*1323+19551)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+17199)*1+lsi)*1]), &(inteval->stack[((hsi*441+14112)*1+lsi)*1]), &(inteval->stack[((hsi*441+14553)*1+lsi)*1]), &(inteval->stack[((hsi*441+14994)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+20874)*1+lsi)*1]), &(inteval->stack[((hsi*588+12348)*1+lsi)*1]), &(inteval->stack[((hsi*588+12936)*1+lsi)*1]), &(inteval->stack[((hsi*588+13524)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1323+12348)*1+lsi)*1]), &(inteval->stack[((hsi*588+20874)*1+lsi)*1]), &(inteval->stack[((hsi*441+17199)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+20874)*1+lsi)*1]), &(inteval->stack[((hsi*588+10584)*1+lsi)*1]), &(inteval->stack[((hsi*588+11172)*1+lsi)*1]), &(inteval->stack[((hsi*588+11760)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+17199)*1+lsi)*1]), &(inteval->stack[((hsi*784+8232)*1+lsi)*1]), &(inteval->stack[((hsi*784+9016)*1+lsi)*1]), &(inteval->stack[((hsi*784+9800)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1764+13671)*1+lsi)*1]), &(inteval->stack[((hsi*784+17199)*1+lsi)*1]), &(inteval->stack[((hsi*588+20874)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+51009)*1+lsi)*1]), &(inteval->stack[((hsi*1764+13671)*1+lsi)*1]), &(inteval->stack[((hsi*1323+12348)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+8232)*1+lsi)*1]), &(inteval->stack[((hsi*441+6909)*1+lsi)*1]), &(inteval->stack[((hsi*441+7350)*1+lsi)*1]), &(inteval->stack[((hsi*441+7791)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+8673)*1+lsi)*1]), &(inteval->stack[((hsi*588+5145)*1+lsi)*1]), &(inteval->stack[((hsi*588+5733)*1+lsi)*1]), &(inteval->stack[((hsi*588+6321)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1323+9261)*1+lsi)*1]), &(inteval->stack[((hsi*588+8673)*1+lsi)*1]), &(inteval->stack[((hsi*441+8232)*1+lsi)*1]), &(inteval->stack[((hsi*441+4704)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+4704)*1+lsi)*1]), &(inteval->stack[((hsi*588+2940)*1+lsi)*1]), &(inteval->stack[((hsi*588+3528)*1+lsi)*1]), &(inteval->stack[((hsi*588+4116)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+5292)*1+lsi)*1]), &(inteval->stack[((hsi*784+588)*1+lsi)*1]), &(inteval->stack[((hsi*784+1372)*1+lsi)*1]), &(inteval->stack[((hsi*784+2156)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1764+10584)*1+lsi)*1]), &(inteval->stack[((hsi*784+5292)*1+lsi)*1]), &(inteval->stack[((hsi*588+4704)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3969+47040)*1+lsi)*1]), &(inteval->stack[((hsi*1764+10584)*1+lsi)*1]), &(inteval->stack[((hsi*1323+9261)*1+lsi)*1]),63);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3969+23226)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3969+27195)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3969+31164)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3969+35133)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3969+39102)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3969+43071)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3969+47040)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3969+51009)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3969+54978)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*3969+58947)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*3969+62916)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*3969+66885)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
