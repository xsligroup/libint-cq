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
#include <CR_DerivGaussP1InBra_aB_K__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_I__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_I__0__I__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,39664)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_I__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*2352+124336)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31264)*1+lsi)*1]), &(inteval->stack[((hsi*784+37088)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*3024+126688)*1+lsi)*1]), &(inteval->stack[((hsi*1296+27664)*1+lsi)*1]), &(inteval->stack[((hsi*1008+34288)*1+lsi)*1]), &(inteval->stack[((hsi*1008+38656)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+74944)*1+lsi)*1]), &(inteval->stack[((hsi*3024+126688)*1+lsi)*1]), &(inteval->stack[((hsi*2352+124336)*1+lsi)*1]),84);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*2352+129712)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18976)*1+lsi)*1]), &(inteval->stack[((hsi*784+24800)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*3024+132064)*1+lsi)*1]), &(inteval->stack[((hsi*1296+15376)*1+lsi)*1]), &(inteval->stack[((hsi*1008+22000)*1+lsi)*1]), &(inteval->stack[((hsi*1008+38656)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+67888)*1+lsi)*1]), &(inteval->stack[((hsi*3024+132064)*1+lsi)*1]), &(inteval->stack[((hsi*2352+129712)*1+lsi)*1]),84);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*2352+135088)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5904)*1+lsi)*1]), &(inteval->stack[((hsi*784+12512)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*3024+137440)*1+lsi)*1]), &(inteval->stack[((hsi*1296+2304)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9712)*1+lsi)*1]), &(inteval->stack[((hsi*1008+38656)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+60832)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137440)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135088)*1+lsi)*1]),84);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*2352+140464)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30256)*1+lsi)*1]), &(inteval->stack[((hsi*784+36304)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*3024+142816)*1+lsi)*1]), &(inteval->stack[((hsi*1296+26368)*1+lsi)*1]), &(inteval->stack[((hsi*1008+33280)*1+lsi)*1]), &(inteval->stack[((hsi*1008+38656)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+53776)*1+lsi)*1]), &(inteval->stack[((hsi*3024+142816)*1+lsi)*1]), &(inteval->stack[((hsi*2352+140464)*1+lsi)*1]),84);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*2352+145840)*1+lsi)*1]), &(inteval->stack[((hsi*1008+17968)*1+lsi)*1]), &(inteval->stack[((hsi*784+24016)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*3024+148192)*1+lsi)*1]), &(inteval->stack[((hsi*1296+14080)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20992)*1+lsi)*1]), &(inteval->stack[((hsi*1008+38656)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+46720)*1+lsi)*1]), &(inteval->stack[((hsi*3024+148192)*1+lsi)*1]), &(inteval->stack[((hsi*2352+145840)*1+lsi)*1]),84);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*2352+151216)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4896)*1+lsi)*1]), &(inteval->stack[((hsi*784+11728)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*3024+153568)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1008)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8704)*1+lsi)*1]), &(inteval->stack[((hsi*1008+38656)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+39664)*1+lsi)*1]), &(inteval->stack[((hsi*3024+153568)*1+lsi)*1]), &(inteval->stack[((hsi*2352+151216)*1+lsi)*1]),84);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*2352+156592)*1+lsi)*1]), &(inteval->stack[((hsi*1008+35296)*1+lsi)*1]), &(inteval->stack[((hsi*784+37872)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*3024+158944)*1+lsi)*1]), &(inteval->stack[((hsi*1296+28960)*1+lsi)*1]), &(inteval->stack[((hsi*1008+32272)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+117280)*1+lsi)*1]), &(inteval->stack[((hsi*3024+158944)*1+lsi)*1]), &(inteval->stack[((hsi*2352+156592)*1+lsi)*1]),84);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*2352+161968)*1+lsi)*1]), &(inteval->stack[((hsi*1008+23008)*1+lsi)*1]), &(inteval->stack[((hsi*784+25584)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*3024+164320)*1+lsi)*1]), &(inteval->stack[((hsi*1296+16672)*1+lsi)*1]), &(inteval->stack[((hsi*1008+19984)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+110224)*1+lsi)*1]), &(inteval->stack[((hsi*3024+164320)*1+lsi)*1]), &(inteval->stack[((hsi*2352+161968)*1+lsi)*1]),84);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*2352+167344)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10720)*1+lsi)*1]), &(inteval->stack[((hsi*784+13296)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*3024+169696)*1+lsi)*1]), &(inteval->stack[((hsi*1296+3600)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6912)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+103168)*1+lsi)*1]), &(inteval->stack[((hsi*3024+169696)*1+lsi)*1]), &(inteval->stack[((hsi*2352+167344)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+38656)*1+lsi)*1]), &(inteval->stack[((hsi*784+36304)*1+lsi)*1]), &(inteval->stack[((hsi*784+37088)*1+lsi)*1]), &(inteval->stack[((hsi*784+37872)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+36304)*1+lsi)*1]), &(inteval->stack[((hsi*1008+33280)*1+lsi)*1]), &(inteval->stack[((hsi*1008+34288)*1+lsi)*1]), &(inteval->stack[((hsi*1008+35296)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*2352+33280)*1+lsi)*1]), &(inteval->stack[((hsi*1008+36304)*1+lsi)*1]), &(inteval->stack[((hsi*784+38656)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_K__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+35632)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30256)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31264)*1+lsi)*1]), &(inteval->stack[((hsi*1008+32272)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+36640)*1+lsi)*1]), &(inteval->stack[((hsi*1296+26368)*1+lsi)*1]), &(inteval->stack[((hsi*1296+27664)*1+lsi)*1]), &(inteval->stack[((hsi*1296+28960)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*3024+26368)*1+lsi)*1]), &(inteval->stack[((hsi*1296+36640)*1+lsi)*1]), &(inteval->stack[((hsi*1008+35632)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+96112)*1+lsi)*1]), &(inteval->stack[((hsi*3024+26368)*1+lsi)*1]), &(inteval->stack[((hsi*2352+33280)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+35632)*1+lsi)*1]), &(inteval->stack[((hsi*784+24016)*1+lsi)*1]), &(inteval->stack[((hsi*784+24800)*1+lsi)*1]), &(inteval->stack[((hsi*784+25584)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+29392)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20992)*1+lsi)*1]), &(inteval->stack[((hsi*1008+22000)*1+lsi)*1]), &(inteval->stack[((hsi*1008+23008)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*2352+20992)*1+lsi)*1]), &(inteval->stack[((hsi*1008+29392)*1+lsi)*1]), &(inteval->stack[((hsi*784+35632)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_K__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+35632)*1+lsi)*1]), &(inteval->stack[((hsi*1008+17968)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18976)*1+lsi)*1]), &(inteval->stack[((hsi*1008+19984)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+29392)*1+lsi)*1]), &(inteval->stack[((hsi*1296+14080)*1+lsi)*1]), &(inteval->stack[((hsi*1296+15376)*1+lsi)*1]), &(inteval->stack[((hsi*1296+16672)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*3024+23344)*1+lsi)*1]), &(inteval->stack[((hsi*1296+29392)*1+lsi)*1]), &(inteval->stack[((hsi*1008+35632)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+89056)*1+lsi)*1]), &(inteval->stack[((hsi*3024+23344)*1+lsi)*1]), &(inteval->stack[((hsi*2352+20992)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+14080)*1+lsi)*1]), &(inteval->stack[((hsi*784+11728)*1+lsi)*1]), &(inteval->stack[((hsi*784+12512)*1+lsi)*1]), &(inteval->stack[((hsi*784+13296)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+14864)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8704)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9712)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10720)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*2352+8704)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14864)*1+lsi)*1]), &(inteval->stack[((hsi*784+14080)*1+lsi)*1]), &(inteval->stack[((hsi*784+7920)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_K__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+11056)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4896)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5904)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6912)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+12064)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1008)*1+lsi)*1]), &(inteval->stack[((hsi*1296+2304)*1+lsi)*1]), &(inteval->stack[((hsi*1296+3600)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*3024+1008)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12064)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11056)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7056+82000)*1+lsi)*1]), &(inteval->stack[((hsi*3024+1008)*1+lsi)*1]), &(inteval->stack[((hsi*2352+8704)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7056+39664)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*7056+46720)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*7056+53776)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*7056+60832)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*7056+67888)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*7056+74944)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*7056+82000)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*7056+89056)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*7056+96112)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*7056+103168)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*7056+110224)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*7056+117280)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
