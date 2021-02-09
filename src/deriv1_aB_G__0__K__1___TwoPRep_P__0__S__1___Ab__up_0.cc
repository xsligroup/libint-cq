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
#include <CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100p.h>
#include <deriv1_aB_G__0__K__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_G__0__K__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12204)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__K__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*1620+20304)*1+lsi)*1]), &(inteval->stack[((hsi*756+8532)*1+lsi)*1]), &(inteval->stack[((hsi*540+10584)*1+lsi)*1]), &(inteval->stack[((hsi*540+11664)*1+lsi)*1]),36);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*1620+18684)*1+lsi)*1]), &(inteval->stack[((hsi*756+4644)*1+lsi)*1]), &(inteval->stack[((hsi*540+6696)*1+lsi)*1]), &(inteval->stack[((hsi*540+11664)*1+lsi)*1]),36);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*1620+17064)*1+lsi)*1]), &(inteval->stack[((hsi*756+756)*1+lsi)*1]), &(inteval->stack[((hsi*540+2808)*1+lsi)*1]), &(inteval->stack[((hsi*540+11664)*1+lsi)*1]),36);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*1620+15444)*1+lsi)*1]), &(inteval->stack[((hsi*756+7776)*1+lsi)*1]), &(inteval->stack[((hsi*540+10044)*1+lsi)*1]), &(inteval->stack[((hsi*540+11664)*1+lsi)*1]),36);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*1620+13824)*1+lsi)*1]), &(inteval->stack[((hsi*756+3888)*1+lsi)*1]), &(inteval->stack[((hsi*540+6156)*1+lsi)*1]), &(inteval->stack[((hsi*540+11664)*1+lsi)*1]),36);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*1620+12204)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+2268)*1+lsi)*1]), &(inteval->stack[((hsi*540+11664)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+30024)*1+lsi)*1]), &(inteval->stack[((hsi*756+9288)*1+lsi)*1]), &(inteval->stack[((hsi*540+11124)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+28404)*1+lsi)*1]), &(inteval->stack[((hsi*756+5400)*1+lsi)*1]), &(inteval->stack[((hsi*540+7236)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+26784)*1+lsi)*1]), &(inteval->stack[((hsi*756+1512)*1+lsi)*1]), &(inteval->stack[((hsi*540+3348)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+31644)*1+lsi)*1]), &(inteval->stack[((hsi*540+10044)*1+lsi)*1]), &(inteval->stack[((hsi*540+10584)*1+lsi)*1]), &(inteval->stack[((hsi*540+11124)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+32184)*1+lsi)*1]), &(inteval->stack[((hsi*756+7776)*1+lsi)*1]), &(inteval->stack[((hsi*756+8532)*1+lsi)*1]), &(inteval->stack[((hsi*756+9288)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+25164)*1+lsi)*1]), &(inteval->stack[((hsi*756+32184)*1+lsi)*1]), &(inteval->stack[((hsi*540+31644)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+32940)*1+lsi)*1]), &(inteval->stack[((hsi*540+6156)*1+lsi)*1]), &(inteval->stack[((hsi*540+6696)*1+lsi)*1]), &(inteval->stack[((hsi*540+7236)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+33480)*1+lsi)*1]), &(inteval->stack[((hsi*756+3888)*1+lsi)*1]), &(inteval->stack[((hsi*756+4644)*1+lsi)*1]), &(inteval->stack[((hsi*756+5400)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+23544)*1+lsi)*1]), &(inteval->stack[((hsi*756+33480)*1+lsi)*1]), &(inteval->stack[((hsi*540+32940)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+34236)*1+lsi)*1]), &(inteval->stack[((hsi*540+2268)*1+lsi)*1]), &(inteval->stack[((hsi*540+2808)*1+lsi)*1]), &(inteval->stack[((hsi*540+3348)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*756+34776)*1+lsi)*1]), &(inteval->stack[((hsi*756+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+756)*1+lsi)*1]), &(inteval->stack[((hsi*756+1512)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+21924)*1+lsi)*1]), &(inteval->stack[((hsi*756+34776)*1+lsi)*1]), &(inteval->stack[((hsi*540+34236)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1620+12204)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1620+13824)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1620+15444)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1620+17064)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1620+18684)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1620+20304)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1620+21924)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1620+23544)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1620+25164)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1620+26784)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1620+28404)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1620+30024)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
