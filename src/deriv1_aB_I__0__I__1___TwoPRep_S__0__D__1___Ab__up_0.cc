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
#include <CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_I__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_I__0__I__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,29260)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_I__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+85708)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18312)*1+lsi)*1]), &(inteval->stack[((hsi*784+21588)*1+lsi)*1]),28);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*2352+88060)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27468)*1+lsi)*1]), &(inteval->stack[((hsi*784+28476)*1+lsi)*1]), &(inteval->stack[((hsi*784+21588)*1+lsi)*1]),28);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3024+90412)*1+lsi)*1]), &(inteval->stack[((hsi*1260+26208)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27468)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18312)*1+lsi)*1]),28);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*4704+81004)*1+lsi)*1]), &(inteval->stack[((hsi*3024+90412)*1+lsi)*1]), &(inteval->stack[((hsi*2352+88060)*1+lsi)*1]), &(inteval->stack[((hsi*2352+85708)*1+lsi)*1]),28);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*2352+93436)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24416)*1+lsi)*1]), &(inteval->stack[((hsi*784+25424)*1+lsi)*1]), &(inteval->stack[((hsi*784+21588)*1+lsi)*1]),28);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3024+95788)*1+lsi)*1]), &(inteval->stack[((hsi*1260+23156)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24416)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18312)*1+lsi)*1]),28);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*4704+76300)*1+lsi)*1]), &(inteval->stack[((hsi*3024+95788)*1+lsi)*1]), &(inteval->stack[((hsi*2352+93436)*1+lsi)*1]), &(inteval->stack[((hsi*2352+85708)*1+lsi)*1]),28);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*2352+98812)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20580)*1+lsi)*1]), &(inteval->stack[((hsi*784+22372)*1+lsi)*1]), &(inteval->stack[((hsi*784+21588)*1+lsi)*1]),28);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3024+101164)*1+lsi)*1]), &(inteval->stack[((hsi*1260+19320)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20580)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18312)*1+lsi)*1]),28);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*4704+71596)*1+lsi)*1]), &(inteval->stack[((hsi*3024+101164)*1+lsi)*1]), &(inteval->stack[((hsi*2352+98812)*1+lsi)*1]), &(inteval->stack[((hsi*2352+85708)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+104188)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7364)*1+lsi)*1]), &(inteval->stack[((hsi*1008+16520)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27468)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+27468)*1+lsi)*1]), &(inteval->stack[((hsi*784+8372)*1+lsi)*1]), &(inteval->stack[((hsi*784+17528)*1+lsi)*1]), &(inteval->stack[((hsi*784+28476)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*2352+105196)*1+lsi)*1]), &(inteval->stack[((hsi*1008+104188)*1+lsi)*1]), &(inteval->stack[((hsi*784+27468)*1+lsi)*1]), &(inteval->stack[((hsi*784+21588)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+27468)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6104)*1+lsi)*1]), &(inteval->stack[((hsi*1260+15260)*1+lsi)*1]), &(inteval->stack[((hsi*1260+26208)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*3024+107548)*1+lsi)*1]), &(inteval->stack[((hsi*1260+27468)*1+lsi)*1]), &(inteval->stack[((hsi*1008+104188)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18312)*1+lsi)*1]),28);
HRRPart1bra0ket0i001d(inteval, &(inteval->stack[((hsi*4704+66892)*1+lsi)*1]), &(inteval->stack[((hsi*3024+107548)*1+lsi)*1]), &(inteval->stack[((hsi*2352+105196)*1+lsi)*1]), &(inteval->stack[((hsi*2352+85708)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+104188)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4312)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13468)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24416)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+26208)*1+lsi)*1]), &(inteval->stack[((hsi*784+5320)*1+lsi)*1]), &(inteval->stack[((hsi*784+14476)*1+lsi)*1]), &(inteval->stack[((hsi*784+25424)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*2352+110572)*1+lsi)*1]), &(inteval->stack[((hsi*1008+104188)*1+lsi)*1]), &(inteval->stack[((hsi*784+26208)*1+lsi)*1]), &(inteval->stack[((hsi*784+21588)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+24416)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3052)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12208)*1+lsi)*1]), &(inteval->stack[((hsi*1260+23156)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*3024+25676)*1+lsi)*1]), &(inteval->stack[((hsi*1260+24416)*1+lsi)*1]), &(inteval->stack[((hsi*1008+104188)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18312)*1+lsi)*1]),28);
HRRPart1bra0ket0i010d(inteval, &(inteval->stack[((hsi*4704+62188)*1+lsi)*1]), &(inteval->stack[((hsi*3024+25676)*1+lsi)*1]), &(inteval->stack[((hsi*2352+110572)*1+lsi)*1]), &(inteval->stack[((hsi*2352+85708)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+104188)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1260)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10416)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20580)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+23156)*1+lsi)*1]), &(inteval->stack[((hsi*784+2268)*1+lsi)*1]), &(inteval->stack[((hsi*784+11424)*1+lsi)*1]), &(inteval->stack[((hsi*784+22372)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*2352+112924)*1+lsi)*1]), &(inteval->stack[((hsi*1008+104188)*1+lsi)*1]), &(inteval->stack[((hsi*784+23156)*1+lsi)*1]), &(inteval->stack[((hsi*784+21588)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1260+20580)*1+lsi)*1]), &(inteval->stack[((hsi*1260+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9156)*1+lsi)*1]), &(inteval->stack[((hsi*1260+19320)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*3024+21840)*1+lsi)*1]), &(inteval->stack[((hsi*1260+20580)*1+lsi)*1]), &(inteval->stack[((hsi*1008+104188)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18312)*1+lsi)*1]),28);
HRRPart1bra0ket0i100d(inteval, &(inteval->stack[((hsi*4704+57484)*1+lsi)*1]), &(inteval->stack[((hsi*3024+21840)*1+lsi)*1]), &(inteval->stack[((hsi*2352+112924)*1+lsi)*1]), &(inteval->stack[((hsi*2352+85708)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+18312)*1+lsi)*1]), &(inteval->stack[((hsi*1008+16520)*1+lsi)*1]), &(inteval->stack[((hsi*784+17528)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+115276)*1+lsi)*1]), &(inteval->stack[((hsi*1260+15260)*1+lsi)*1]), &(inteval->stack[((hsi*1008+16520)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+52780)*1+lsi)*1]), &(inteval->stack[((hsi*3024+115276)*1+lsi)*1]), &(inteval->stack[((hsi*2352+18312)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+15260)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13468)*1+lsi)*1]), &(inteval->stack[((hsi*784+14476)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+118300)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12208)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13468)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+48076)*1+lsi)*1]), &(inteval->stack[((hsi*3024+118300)*1+lsi)*1]), &(inteval->stack[((hsi*2352+15260)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+12208)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10416)*1+lsi)*1]), &(inteval->stack[((hsi*784+11424)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+121324)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9156)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10416)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+43372)*1+lsi)*1]), &(inteval->stack[((hsi*3024+121324)*1+lsi)*1]), &(inteval->stack[((hsi*2352+12208)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+9156)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7364)*1+lsi)*1]), &(inteval->stack[((hsi*784+8372)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+124348)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6104)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7364)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+38668)*1+lsi)*1]), &(inteval->stack[((hsi*3024+124348)*1+lsi)*1]), &(inteval->stack[((hsi*2352+9156)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+6104)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4312)*1+lsi)*1]), &(inteval->stack[((hsi*784+5320)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+127372)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3052)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4312)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+33964)*1+lsi)*1]), &(inteval->stack[((hsi*3024+127372)*1+lsi)*1]), &(inteval->stack[((hsi*2352+6104)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+3052)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1260)*1+lsi)*1]), &(inteval->stack[((hsi*784+2268)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+130396)*1+lsi)*1]), &(inteval->stack[((hsi*1260+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1260)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+29260)*1+lsi)*1]), &(inteval->stack[((hsi*3024+130396)*1+lsi)*1]), &(inteval->stack[((hsi*2352+3052)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4704+29260)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*4704+33964)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*4704+38668)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*4704+43372)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*4704+48076)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*4704+52780)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*4704+57484)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*4704+62188)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*4704+66892)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*4704+71596)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*4704+76300)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*4704+81004)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
