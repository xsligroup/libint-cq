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
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100p.h>
#include <deriv1_aB_G__0__H__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_G__0__H__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7119)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__H__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*945+11844)*1+lsi)*1]), &(inteval->stack[((hsi*441+4977)*1+lsi)*1]), &(inteval->stack[((hsi*315+6174)*1+lsi)*1]), &(inteval->stack[((hsi*315+6804)*1+lsi)*1]),21);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*945+10899)*1+lsi)*1]), &(inteval->stack[((hsi*441+2709)*1+lsi)*1]), &(inteval->stack[((hsi*315+3906)*1+lsi)*1]), &(inteval->stack[((hsi*315+6804)*1+lsi)*1]),21);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*945+9954)*1+lsi)*1]), &(inteval->stack[((hsi*441+441)*1+lsi)*1]), &(inteval->stack[((hsi*315+1638)*1+lsi)*1]), &(inteval->stack[((hsi*315+6804)*1+lsi)*1]),21);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*945+9009)*1+lsi)*1]), &(inteval->stack[((hsi*441+4536)*1+lsi)*1]), &(inteval->stack[((hsi*315+5859)*1+lsi)*1]), &(inteval->stack[((hsi*315+6804)*1+lsi)*1]),21);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*945+8064)*1+lsi)*1]), &(inteval->stack[((hsi*441+2268)*1+lsi)*1]), &(inteval->stack[((hsi*315+3591)*1+lsi)*1]), &(inteval->stack[((hsi*315+6804)*1+lsi)*1]),21);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*945+7119)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+1323)*1+lsi)*1]), &(inteval->stack[((hsi*315+6804)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+17514)*1+lsi)*1]), &(inteval->stack[((hsi*441+5418)*1+lsi)*1]), &(inteval->stack[((hsi*315+6489)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+16569)*1+lsi)*1]), &(inteval->stack[((hsi*441+3150)*1+lsi)*1]), &(inteval->stack[((hsi*315+4221)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+15624)*1+lsi)*1]), &(inteval->stack[((hsi*441+882)*1+lsi)*1]), &(inteval->stack[((hsi*315+1953)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+18459)*1+lsi)*1]), &(inteval->stack[((hsi*315+5859)*1+lsi)*1]), &(inteval->stack[((hsi*315+6174)*1+lsi)*1]), &(inteval->stack[((hsi*315+6489)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+18774)*1+lsi)*1]), &(inteval->stack[((hsi*441+4536)*1+lsi)*1]), &(inteval->stack[((hsi*441+4977)*1+lsi)*1]), &(inteval->stack[((hsi*441+5418)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+14679)*1+lsi)*1]), &(inteval->stack[((hsi*441+18774)*1+lsi)*1]), &(inteval->stack[((hsi*315+18459)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+19215)*1+lsi)*1]), &(inteval->stack[((hsi*315+3591)*1+lsi)*1]), &(inteval->stack[((hsi*315+3906)*1+lsi)*1]), &(inteval->stack[((hsi*315+4221)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+19530)*1+lsi)*1]), &(inteval->stack[((hsi*441+2268)*1+lsi)*1]), &(inteval->stack[((hsi*441+2709)*1+lsi)*1]), &(inteval->stack[((hsi*441+3150)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+13734)*1+lsi)*1]), &(inteval->stack[((hsi*441+19530)*1+lsi)*1]), &(inteval->stack[((hsi*315+19215)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+19971)*1+lsi)*1]), &(inteval->stack[((hsi*315+1323)*1+lsi)*1]), &(inteval->stack[((hsi*315+1638)*1+lsi)*1]), &(inteval->stack[((hsi*315+1953)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+20286)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]), &(inteval->stack[((hsi*441+441)*1+lsi)*1]), &(inteval->stack[((hsi*441+882)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+12789)*1+lsi)*1]), &(inteval->stack[((hsi*441+20286)*1+lsi)*1]), &(inteval->stack[((hsi*315+19971)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*945+7119)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*945+8064)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*945+9009)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*945+9954)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*945+10899)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*945+11844)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*945+12789)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*945+13734)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*945+14679)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*945+15624)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*945+16569)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*945+17514)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
