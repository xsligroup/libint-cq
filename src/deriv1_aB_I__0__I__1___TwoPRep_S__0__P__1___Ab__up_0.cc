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
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_I__0__I__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_I__0__I__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16912)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_I__0__I__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*2352+42784)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15120)*1+lsi)*1]), &(inteval->stack[((hsi*784+16128)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*2352+40432)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13328)*1+lsi)*1]), &(inteval->stack[((hsi*784+14336)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*2352+38080)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11536)*1+lsi)*1]), &(inteval->stack[((hsi*784+12544)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+45136)*1+lsi)*1]), &(inteval->stack[((hsi*784+5376)*1+lsi)*1]), &(inteval->stack[((hsi*784+10752)*1+lsi)*1]), &(inteval->stack[((hsi*784+16128)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+45920)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4368)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9744)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15120)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*2352+35728)*1+lsi)*1]), &(inteval->stack[((hsi*1008+45920)*1+lsi)*1]), &(inteval->stack[((hsi*784+45136)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+46928)*1+lsi)*1]), &(inteval->stack[((hsi*784+3584)*1+lsi)*1]), &(inteval->stack[((hsi*784+8960)*1+lsi)*1]), &(inteval->stack[((hsi*784+14336)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+47712)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2576)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7952)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13328)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*2352+33376)*1+lsi)*1]), &(inteval->stack[((hsi*1008+47712)*1+lsi)*1]), &(inteval->stack[((hsi*784+46928)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+48720)*1+lsi)*1]), &(inteval->stack[((hsi*784+1792)*1+lsi)*1]), &(inteval->stack[((hsi*784+7168)*1+lsi)*1]), &(inteval->stack[((hsi*784+12544)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1008+49504)*1+lsi)*1]), &(inteval->stack[((hsi*1008+784)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6160)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11536)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*2352+31024)*1+lsi)*1]), &(inteval->stack[((hsi*1008+49504)*1+lsi)*1]), &(inteval->stack[((hsi*784+48720)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+28672)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9744)*1+lsi)*1]), &(inteval->stack[((hsi*784+10752)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+26320)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7952)*1+lsi)*1]), &(inteval->stack[((hsi*784+8960)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+23968)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6160)*1+lsi)*1]), &(inteval->stack[((hsi*784+7168)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+21616)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4368)*1+lsi)*1]), &(inteval->stack[((hsi*784+5376)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+19264)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2576)*1+lsi)*1]), &(inteval->stack[((hsi*784+3584)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+16912)*1+lsi)*1]), &(inteval->stack[((hsi*1008+784)*1+lsi)*1]), &(inteval->stack[((hsi*784+1792)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2352+16912)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2352+19264)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2352+21616)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2352+23968)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2352+26320)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2352+28672)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2352+31024)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2352+33376)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2352+35728)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2352+38080)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2352+40432)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2352+42784)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
