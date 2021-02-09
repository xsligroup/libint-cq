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
#include <CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0dp001.h>
#include <HRRPart0bra0ket0dp010.h>
#include <HRRPart0bra0ket0dp100.h>
#include <HRRPart0bra0ket0d001p.h>
#include <HRRPart0bra0ket0d010p.h>
#include <HRRPart0bra0ket0d100p.h>
#include <deriv1_aB_D__0__I__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__I__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4200)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__I__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*504+6720)*1+lsi)*1]), &(inteval->stack[((hsi*280+2968)*1+lsi)*1]), &(inteval->stack[((hsi*168+3696)*1+lsi)*1]), &(inteval->stack[((hsi*168+4032)*1+lsi)*1]),28);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*504+6216)*1+lsi)*1]), &(inteval->stack[((hsi*280+1624)*1+lsi)*1]), &(inteval->stack[((hsi*168+2352)*1+lsi)*1]), &(inteval->stack[((hsi*168+4032)*1+lsi)*1]),28);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*504+5712)*1+lsi)*1]), &(inteval->stack[((hsi*280+280)*1+lsi)*1]), &(inteval->stack[((hsi*168+1008)*1+lsi)*1]), &(inteval->stack[((hsi*168+4032)*1+lsi)*1]),28);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*504+5208)*1+lsi)*1]), &(inteval->stack[((hsi*280+2688)*1+lsi)*1]), &(inteval->stack[((hsi*168+3528)*1+lsi)*1]), &(inteval->stack[((hsi*168+4032)*1+lsi)*1]),28);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*504+4704)*1+lsi)*1]), &(inteval->stack[((hsi*280+1344)*1+lsi)*1]), &(inteval->stack[((hsi*168+2184)*1+lsi)*1]), &(inteval->stack[((hsi*168+4032)*1+lsi)*1]),28);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*504+4200)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]), &(inteval->stack[((hsi*168+840)*1+lsi)*1]), &(inteval->stack[((hsi*168+4032)*1+lsi)*1]),28);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+9744)*1+lsi)*1]), &(inteval->stack[((hsi*280+3248)*1+lsi)*1]), &(inteval->stack[((hsi*168+3864)*1+lsi)*1]),28);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+9240)*1+lsi)*1]), &(inteval->stack[((hsi*280+1904)*1+lsi)*1]), &(inteval->stack[((hsi*168+2520)*1+lsi)*1]),28);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+8736)*1+lsi)*1]), &(inteval->stack[((hsi*280+560)*1+lsi)*1]), &(inteval->stack[((hsi*168+1176)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+10248)*1+lsi)*1]), &(inteval->stack[((hsi*168+3528)*1+lsi)*1]), &(inteval->stack[((hsi*168+3696)*1+lsi)*1]), &(inteval->stack[((hsi*168+3864)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+10416)*1+lsi)*1]), &(inteval->stack[((hsi*280+2688)*1+lsi)*1]), &(inteval->stack[((hsi*280+2968)*1+lsi)*1]), &(inteval->stack[((hsi*280+3248)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+8232)*1+lsi)*1]), &(inteval->stack[((hsi*280+10416)*1+lsi)*1]), &(inteval->stack[((hsi*168+10248)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+10696)*1+lsi)*1]), &(inteval->stack[((hsi*168+2184)*1+lsi)*1]), &(inteval->stack[((hsi*168+2352)*1+lsi)*1]), &(inteval->stack[((hsi*168+2520)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+10864)*1+lsi)*1]), &(inteval->stack[((hsi*280+1344)*1+lsi)*1]), &(inteval->stack[((hsi*280+1624)*1+lsi)*1]), &(inteval->stack[((hsi*280+1904)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+7728)*1+lsi)*1]), &(inteval->stack[((hsi*280+10864)*1+lsi)*1]), &(inteval->stack[((hsi*168+10696)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+11144)*1+lsi)*1]), &(inteval->stack[((hsi*168+840)*1+lsi)*1]), &(inteval->stack[((hsi*168+1008)*1+lsi)*1]), &(inteval->stack[((hsi*168+1176)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+11312)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]), &(inteval->stack[((hsi*280+280)*1+lsi)*1]), &(inteval->stack[((hsi*280+560)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+7224)*1+lsi)*1]), &(inteval->stack[((hsi*280+11312)*1+lsi)*1]), &(inteval->stack[((hsi*168+11144)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*504+4200)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*504+4704)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*504+5208)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*504+5712)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*504+6216)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*504+6720)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*504+7224)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*504+7728)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*504+8232)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*504+8736)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*504+9240)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*504+9744)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
