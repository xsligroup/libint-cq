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
#include <CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001d.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010d.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100d.h>
#include <HRRPart1bra0ket0g100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1_aB_I__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_I__0__G__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,17136)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_I__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+47376)*1+lsi)*1]), &(inteval->stack[((hsi*588+10752)*1+lsi)*1]), &(inteval->stack[((hsi*420+12712)*1+lsi)*1]),28);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*1260+48636)*1+lsi)*1]), &(inteval->stack[((hsi*588+16128)*1+lsi)*1]), &(inteval->stack[((hsi*420+16716)*1+lsi)*1]), &(inteval->stack[((hsi*420+12712)*1+lsi)*1]),28);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+49896)*1+lsi)*1]), &(inteval->stack[((hsi*784+15344)*1+lsi)*1]), &(inteval->stack[((hsi*588+16128)*1+lsi)*1]), &(inteval->stack[((hsi*588+10752)*1+lsi)*1]),28);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*2520+44856)*1+lsi)*1]), &(inteval->stack[((hsi*1764+49896)*1+lsi)*1]), &(inteval->stack[((hsi*1260+48636)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47376)*1+lsi)*1]),28);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*1260+51660)*1+lsi)*1]), &(inteval->stack[((hsi*588+14336)*1+lsi)*1]), &(inteval->stack[((hsi*420+14924)*1+lsi)*1]), &(inteval->stack[((hsi*420+12712)*1+lsi)*1]),28);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+52920)*1+lsi)*1]), &(inteval->stack[((hsi*784+13552)*1+lsi)*1]), &(inteval->stack[((hsi*588+14336)*1+lsi)*1]), &(inteval->stack[((hsi*588+10752)*1+lsi)*1]),28);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*2520+42336)*1+lsi)*1]), &(inteval->stack[((hsi*1764+52920)*1+lsi)*1]), &(inteval->stack[((hsi*1260+51660)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47376)*1+lsi)*1]),28);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*1260+54684)*1+lsi)*1]), &(inteval->stack[((hsi*588+12124)*1+lsi)*1]), &(inteval->stack[((hsi*420+13132)*1+lsi)*1]), &(inteval->stack[((hsi*420+12712)*1+lsi)*1]),28);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+55944)*1+lsi)*1]), &(inteval->stack[((hsi*784+11340)*1+lsi)*1]), &(inteval->stack[((hsi*588+12124)*1+lsi)*1]), &(inteval->stack[((hsi*588+10752)*1+lsi)*1]),28);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*2520+39816)*1+lsi)*1]), &(inteval->stack[((hsi*1764+55944)*1+lsi)*1]), &(inteval->stack[((hsi*1260+54684)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47376)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+57708)*1+lsi)*1]), &(inteval->stack[((hsi*588+4368)*1+lsi)*1]), &(inteval->stack[((hsi*588+9744)*1+lsi)*1]), &(inteval->stack[((hsi*588+16128)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+16128)*1+lsi)*1]), &(inteval->stack[((hsi*420+4956)*1+lsi)*1]), &(inteval->stack[((hsi*420+10332)*1+lsi)*1]), &(inteval->stack[((hsi*420+16716)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*1260+58296)*1+lsi)*1]), &(inteval->stack[((hsi*588+57708)*1+lsi)*1]), &(inteval->stack[((hsi*420+16128)*1+lsi)*1]), &(inteval->stack[((hsi*420+12712)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+16128)*1+lsi)*1]), &(inteval->stack[((hsi*784+3584)*1+lsi)*1]), &(inteval->stack[((hsi*784+8960)*1+lsi)*1]), &(inteval->stack[((hsi*784+15344)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1764+59556)*1+lsi)*1]), &(inteval->stack[((hsi*784+16128)*1+lsi)*1]), &(inteval->stack[((hsi*588+57708)*1+lsi)*1]), &(inteval->stack[((hsi*588+10752)*1+lsi)*1]),28);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*2520+37296)*1+lsi)*1]), &(inteval->stack[((hsi*1764+59556)*1+lsi)*1]), &(inteval->stack[((hsi*1260+58296)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47376)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+57708)*1+lsi)*1]), &(inteval->stack[((hsi*588+2576)*1+lsi)*1]), &(inteval->stack[((hsi*588+7952)*1+lsi)*1]), &(inteval->stack[((hsi*588+14336)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+15344)*1+lsi)*1]), &(inteval->stack[((hsi*420+3164)*1+lsi)*1]), &(inteval->stack[((hsi*420+8540)*1+lsi)*1]), &(inteval->stack[((hsi*420+14924)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*1260+15764)*1+lsi)*1]), &(inteval->stack[((hsi*588+57708)*1+lsi)*1]), &(inteval->stack[((hsi*420+15344)*1+lsi)*1]), &(inteval->stack[((hsi*420+12712)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+14336)*1+lsi)*1]), &(inteval->stack[((hsi*784+1792)*1+lsi)*1]), &(inteval->stack[((hsi*784+7168)*1+lsi)*1]), &(inteval->stack[((hsi*784+13552)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1764+61320)*1+lsi)*1]), &(inteval->stack[((hsi*784+14336)*1+lsi)*1]), &(inteval->stack[((hsi*588+57708)*1+lsi)*1]), &(inteval->stack[((hsi*588+10752)*1+lsi)*1]),28);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*2520+34776)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61320)*1+lsi)*1]), &(inteval->stack[((hsi*1260+15764)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47376)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+57708)*1+lsi)*1]), &(inteval->stack[((hsi*588+784)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]), &(inteval->stack[((hsi*588+12124)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+13552)*1+lsi)*1]), &(inteval->stack[((hsi*420+1372)*1+lsi)*1]), &(inteval->stack[((hsi*420+6748)*1+lsi)*1]), &(inteval->stack[((hsi*420+13132)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*1260+13972)*1+lsi)*1]), &(inteval->stack[((hsi*588+57708)*1+lsi)*1]), &(inteval->stack[((hsi*420+13552)*1+lsi)*1]), &(inteval->stack[((hsi*420+12712)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+12124)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]), &(inteval->stack[((hsi*784+5376)*1+lsi)*1]), &(inteval->stack[((hsi*784+11340)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1764+63084)*1+lsi)*1]), &(inteval->stack[((hsi*784+12124)*1+lsi)*1]), &(inteval->stack[((hsi*588+57708)*1+lsi)*1]), &(inteval->stack[((hsi*588+10752)*1+lsi)*1]),28);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*2520+32256)*1+lsi)*1]), &(inteval->stack[((hsi*1764+63084)*1+lsi)*1]), &(inteval->stack[((hsi*1260+13972)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47376)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+10752)*1+lsi)*1]), &(inteval->stack[((hsi*588+9744)*1+lsi)*1]), &(inteval->stack[((hsi*420+10332)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+12012)*1+lsi)*1]), &(inteval->stack[((hsi*784+8960)*1+lsi)*1]), &(inteval->stack[((hsi*588+9744)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+29736)*1+lsi)*1]), &(inteval->stack[((hsi*1764+12012)*1+lsi)*1]), &(inteval->stack[((hsi*1260+10752)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+8960)*1+lsi)*1]), &(inteval->stack[((hsi*588+7952)*1+lsi)*1]), &(inteval->stack[((hsi*420+8540)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+64848)*1+lsi)*1]), &(inteval->stack[((hsi*784+7168)*1+lsi)*1]), &(inteval->stack[((hsi*588+7952)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+27216)*1+lsi)*1]), &(inteval->stack[((hsi*1764+64848)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8960)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+7168)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]), &(inteval->stack[((hsi*420+6748)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+66612)*1+lsi)*1]), &(inteval->stack[((hsi*784+5376)*1+lsi)*1]), &(inteval->stack[((hsi*588+6160)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+24696)*1+lsi)*1]), &(inteval->stack[((hsi*1764+66612)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7168)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+5376)*1+lsi)*1]), &(inteval->stack[((hsi*588+4368)*1+lsi)*1]), &(inteval->stack[((hsi*420+4956)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+68376)*1+lsi)*1]), &(inteval->stack[((hsi*784+3584)*1+lsi)*1]), &(inteval->stack[((hsi*588+4368)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+22176)*1+lsi)*1]), &(inteval->stack[((hsi*1764+68376)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5376)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+3584)*1+lsi)*1]), &(inteval->stack[((hsi*588+2576)*1+lsi)*1]), &(inteval->stack[((hsi*420+3164)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+70140)*1+lsi)*1]), &(inteval->stack[((hsi*784+1792)*1+lsi)*1]), &(inteval->stack[((hsi*588+2576)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+19656)*1+lsi)*1]), &(inteval->stack[((hsi*1764+70140)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3584)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+1792)*1+lsi)*1]), &(inteval->stack[((hsi*588+784)*1+lsi)*1]), &(inteval->stack[((hsi*420+1372)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+71904)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+784)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+17136)*1+lsi)*1]), &(inteval->stack[((hsi*1764+71904)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1792)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2520+17136)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2520+19656)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2520+22176)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2520+24696)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2520+27216)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2520+29736)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2520+32256)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2520+34776)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2520+37296)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2520+39816)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2520+42336)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2520+44856)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
