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
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_H__0__I__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_H__0__I__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12936)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_H__0__I__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+21756)*1+lsi)*1]), &(inteval->stack[((hsi*784+9016)*1+lsi)*1]), &(inteval->stack[((hsi*588+11172)*1+lsi)*1]), &(inteval->stack[((hsi*588+12348)*1+lsi)*1]),28);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+19992)*1+lsi)*1]), &(inteval->stack[((hsi*784+4900)*1+lsi)*1]), &(inteval->stack[((hsi*588+7056)*1+lsi)*1]), &(inteval->stack[((hsi*588+12348)*1+lsi)*1]),28);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+18228)*1+lsi)*1]), &(inteval->stack[((hsi*784+784)*1+lsi)*1]), &(inteval->stack[((hsi*588+2940)*1+lsi)*1]), &(inteval->stack[((hsi*588+12348)*1+lsi)*1]),28);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*1764+16464)*1+lsi)*1]), &(inteval->stack[((hsi*784+8232)*1+lsi)*1]), &(inteval->stack[((hsi*588+10584)*1+lsi)*1]), &(inteval->stack[((hsi*588+12348)*1+lsi)*1]),28);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*1764+14700)*1+lsi)*1]), &(inteval->stack[((hsi*784+4116)*1+lsi)*1]), &(inteval->stack[((hsi*588+6468)*1+lsi)*1]), &(inteval->stack[((hsi*588+12348)*1+lsi)*1]),28);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*1764+12936)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+2352)*1+lsi)*1]), &(inteval->stack[((hsi*588+12348)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+32340)*1+lsi)*1]), &(inteval->stack[((hsi*784+9800)*1+lsi)*1]), &(inteval->stack[((hsi*588+11760)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+30576)*1+lsi)*1]), &(inteval->stack[((hsi*784+5684)*1+lsi)*1]), &(inteval->stack[((hsi*588+7644)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+28812)*1+lsi)*1]), &(inteval->stack[((hsi*784+1568)*1+lsi)*1]), &(inteval->stack[((hsi*588+3528)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+34104)*1+lsi)*1]), &(inteval->stack[((hsi*588+10584)*1+lsi)*1]), &(inteval->stack[((hsi*588+11172)*1+lsi)*1]), &(inteval->stack[((hsi*588+11760)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+34692)*1+lsi)*1]), &(inteval->stack[((hsi*784+8232)*1+lsi)*1]), &(inteval->stack[((hsi*784+9016)*1+lsi)*1]), &(inteval->stack[((hsi*784+9800)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+27048)*1+lsi)*1]), &(inteval->stack[((hsi*784+34692)*1+lsi)*1]), &(inteval->stack[((hsi*588+34104)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+35476)*1+lsi)*1]), &(inteval->stack[((hsi*588+6468)*1+lsi)*1]), &(inteval->stack[((hsi*588+7056)*1+lsi)*1]), &(inteval->stack[((hsi*588+7644)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+36064)*1+lsi)*1]), &(inteval->stack[((hsi*784+4116)*1+lsi)*1]), &(inteval->stack[((hsi*784+4900)*1+lsi)*1]), &(inteval->stack[((hsi*784+5684)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+25284)*1+lsi)*1]), &(inteval->stack[((hsi*784+36064)*1+lsi)*1]), &(inteval->stack[((hsi*588+35476)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+36848)*1+lsi)*1]), &(inteval->stack[((hsi*588+2352)*1+lsi)*1]), &(inteval->stack[((hsi*588+2940)*1+lsi)*1]), &(inteval->stack[((hsi*588+3528)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+37436)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]), &(inteval->stack[((hsi*784+784)*1+lsi)*1]), &(inteval->stack[((hsi*784+1568)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+23520)*1+lsi)*1]), &(inteval->stack[((hsi*784+37436)*1+lsi)*1]), &(inteval->stack[((hsi*588+36848)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1764+12936)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1764+14700)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1764+16464)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1764+18228)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1764+19992)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1764+21756)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1764+23520)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1764+25284)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1764+27048)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1764+28812)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1764+30576)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1764+32340)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
