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
#include <CR_DerivGaussP1InBra_aB_K__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_K__0__I__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_K__0__I__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,21744)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_K__0__I__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*3024+55008)*1+lsi)*1]), &(inteval->stack[((hsi*1296+19440)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20736)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13824)*1+lsi)*1]),36);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*3024+51984)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17136)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18432)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13824)*1+lsi)*1]),36);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*3024+48960)*1+lsi)*1]), &(inteval->stack[((hsi*1296+14832)*1+lsi)*1]), &(inteval->stack[((hsi*1008+16128)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13824)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+58032)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5904)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12816)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20736)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+59040)*1+lsi)*1]), &(inteval->stack[((hsi*1296+4608)*1+lsi)*1]), &(inteval->stack[((hsi*1296+11520)*1+lsi)*1]), &(inteval->stack[((hsi*1296+19440)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*3024+45936)*1+lsi)*1]), &(inteval->stack[((hsi*1296+59040)*1+lsi)*1]), &(inteval->stack[((hsi*1008+58032)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13824)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+60336)*1+lsi)*1]), &(inteval->stack[((hsi*1008+3600)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10512)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18432)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+61344)*1+lsi)*1]), &(inteval->stack[((hsi*1296+2304)*1+lsi)*1]), &(inteval->stack[((hsi*1296+9216)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17136)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*3024+42912)*1+lsi)*1]), &(inteval->stack[((hsi*1296+61344)*1+lsi)*1]), &(inteval->stack[((hsi*1008+60336)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13824)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+62640)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1296)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8208)*1+lsi)*1]), &(inteval->stack[((hsi*1008+16128)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+63648)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*1296+6912)*1+lsi)*1]), &(inteval->stack[((hsi*1296+14832)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*3024+39888)*1+lsi)*1]), &(inteval->stack[((hsi*1296+63648)*1+lsi)*1]), &(inteval->stack[((hsi*1008+62640)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13824)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+36864)*1+lsi)*1]), &(inteval->stack[((hsi*1296+11520)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12816)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+33840)*1+lsi)*1]), &(inteval->stack[((hsi*1296+9216)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10512)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+30816)*1+lsi)*1]), &(inteval->stack[((hsi*1296+6912)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8208)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+27792)*1+lsi)*1]), &(inteval->stack[((hsi*1296+4608)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5904)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+24768)*1+lsi)*1]), &(inteval->stack[((hsi*1296+2304)*1+lsi)*1]), &(inteval->stack[((hsi*1008+3600)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+21744)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1296)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3024+21744)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3024+24768)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3024+27792)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3024+30816)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3024+33840)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3024+36864)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3024+39888)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3024+42912)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3024+45936)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*3024+48960)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*3024+51984)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*3024+55008)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
