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
#include <CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1_aB_P__0__H__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_P__0__H__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1386)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__H__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*189+3465)*1+lsi)*1]), &(inteval->stack[((hsi*84+1239)*1+lsi)*1]), &(inteval->stack[((hsi*63+1323)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*189+3276)*1+lsi)*1]), &(inteval->stack[((hsi*84+1092)*1+lsi)*1]), &(inteval->stack[((hsi*63+1176)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*189+3087)*1+lsi)*1]), &(inteval->stack[((hsi*84+945)*1+lsi)*1]), &(inteval->stack[((hsi*63+1029)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+3654)*1+lsi)*1]), &(inteval->stack[((hsi*63+441)*1+lsi)*1]), &(inteval->stack[((hsi*63+882)*1+lsi)*1]), &(inteval->stack[((hsi*63+1323)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+3717)*1+lsi)*1]), &(inteval->stack[((hsi*84+357)*1+lsi)*1]), &(inteval->stack[((hsi*84+798)*1+lsi)*1]), &(inteval->stack[((hsi*84+1239)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*189+2898)*1+lsi)*1]), &(inteval->stack[((hsi*84+3717)*1+lsi)*1]), &(inteval->stack[((hsi*63+3654)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+3801)*1+lsi)*1]), &(inteval->stack[((hsi*63+294)*1+lsi)*1]), &(inteval->stack[((hsi*63+735)*1+lsi)*1]), &(inteval->stack[((hsi*63+1176)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+3864)*1+lsi)*1]), &(inteval->stack[((hsi*84+210)*1+lsi)*1]), &(inteval->stack[((hsi*84+651)*1+lsi)*1]), &(inteval->stack[((hsi*84+1092)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*189+2709)*1+lsi)*1]), &(inteval->stack[((hsi*84+3864)*1+lsi)*1]), &(inteval->stack[((hsi*63+3801)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+3948)*1+lsi)*1]), &(inteval->stack[((hsi*63+147)*1+lsi)*1]), &(inteval->stack[((hsi*63+588)*1+lsi)*1]), &(inteval->stack[((hsi*63+1029)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+4011)*1+lsi)*1]), &(inteval->stack[((hsi*84+63)*1+lsi)*1]), &(inteval->stack[((hsi*84+504)*1+lsi)*1]), &(inteval->stack[((hsi*84+945)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*189+2520)*1+lsi)*1]), &(inteval->stack[((hsi*84+4011)*1+lsi)*1]), &(inteval->stack[((hsi*63+3948)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+2331)*1+lsi)*1]), &(inteval->stack[((hsi*84+798)*1+lsi)*1]), &(inteval->stack[((hsi*63+882)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+2142)*1+lsi)*1]), &(inteval->stack[((hsi*84+651)*1+lsi)*1]), &(inteval->stack[((hsi*63+735)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+1953)*1+lsi)*1]), &(inteval->stack[((hsi*84+504)*1+lsi)*1]), &(inteval->stack[((hsi*63+588)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+1764)*1+lsi)*1]), &(inteval->stack[((hsi*84+357)*1+lsi)*1]), &(inteval->stack[((hsi*63+441)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+1575)*1+lsi)*1]), &(inteval->stack[((hsi*84+210)*1+lsi)*1]), &(inteval->stack[((hsi*63+294)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+1386)*1+lsi)*1]), &(inteval->stack[((hsi*84+63)*1+lsi)*1]), &(inteval->stack[((hsi*63+147)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*189+1386)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*189+1575)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*189+1764)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*189+1953)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*189+2142)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*189+2331)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*189+2520)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*189+2709)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*189+2898)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*189+3087)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*189+3276)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*189+3465)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
