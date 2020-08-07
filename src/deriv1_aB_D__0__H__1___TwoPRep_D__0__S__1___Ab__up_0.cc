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
#include <CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dd001.h>
#include <HRRPart0bra0ket0dd010.h>
#include <HRRPart0bra0ket0dd100.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0dp001.h>
#include <HRRPart0bra0ket0dp010.h>
#include <HRRPart0bra0ket0dp100.h>
#include <HRRPart0bra0ket0d001d.h>
#include <HRRPart0bra0ket0d001p.h>
#include <HRRPart0bra0ket0d010d.h>
#include <HRRPart0bra0ket0d010p.h>
#include <HRRPart0bra0ket0d100d.h>
#include <HRRPart0bra0ket0d100p.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100p.h>
#include <deriv1_aB_D__0__H__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__H__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6195)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__H__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+15267)*1+lsi)*1]), &(inteval->stack[((hsi*210+5859)*1+lsi)*1]), &(inteval->stack[((hsi*126+6069)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+15645)*1+lsi)*1]), &(inteval->stack[((hsi*315+5544)*1+lsi)*1]), &(inteval->stack[((hsi*210+5859)*1+lsi)*1]),21);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*756+14511)*1+lsi)*1]), &(inteval->stack[((hsi*630+15645)*1+lsi)*1]), &(inteval->stack[((hsi*378+15267)*1+lsi)*1]),21);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+16275)*1+lsi)*1]), &(inteval->stack[((hsi*210+5208)*1+lsi)*1]), &(inteval->stack[((hsi*126+5418)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+16653)*1+lsi)*1]), &(inteval->stack[((hsi*315+4893)*1+lsi)*1]), &(inteval->stack[((hsi*210+5208)*1+lsi)*1]),21);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*756+13755)*1+lsi)*1]), &(inteval->stack[((hsi*630+16653)*1+lsi)*1]), &(inteval->stack[((hsi*378+16275)*1+lsi)*1]),21);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+17283)*1+lsi)*1]), &(inteval->stack[((hsi*210+4557)*1+lsi)*1]), &(inteval->stack[((hsi*126+4767)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+17661)*1+lsi)*1]), &(inteval->stack[((hsi*315+4242)*1+lsi)*1]), &(inteval->stack[((hsi*210+4557)*1+lsi)*1]),21);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*756+12999)*1+lsi)*1]), &(inteval->stack[((hsi*630+17661)*1+lsi)*1]), &(inteval->stack[((hsi*378+17283)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+18291)*1+lsi)*1]), &(inteval->stack[((hsi*210+1953)*1+lsi)*1]), &(inteval->stack[((hsi*210+3906)*1+lsi)*1]), &(inteval->stack[((hsi*210+5859)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+5859)*1+lsi)*1]), &(inteval->stack[((hsi*126+2163)*1+lsi)*1]), &(inteval->stack[((hsi*126+4116)*1+lsi)*1]), &(inteval->stack[((hsi*126+6069)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+18501)*1+lsi)*1]), &(inteval->stack[((hsi*210+18291)*1+lsi)*1]), &(inteval->stack[((hsi*126+5859)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+5859)*1+lsi)*1]), &(inteval->stack[((hsi*315+1638)*1+lsi)*1]), &(inteval->stack[((hsi*315+3591)*1+lsi)*1]), &(inteval->stack[((hsi*315+5544)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+18879)*1+lsi)*1]), &(inteval->stack[((hsi*315+5859)*1+lsi)*1]), &(inteval->stack[((hsi*210+18291)*1+lsi)*1]),21);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*756+12243)*1+lsi)*1]), &(inteval->stack[((hsi*630+18879)*1+lsi)*1]), &(inteval->stack[((hsi*378+18501)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+18291)*1+lsi)*1]), &(inteval->stack[((hsi*210+1302)*1+lsi)*1]), &(inteval->stack[((hsi*210+3255)*1+lsi)*1]), &(inteval->stack[((hsi*210+5208)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+5544)*1+lsi)*1]), &(inteval->stack[((hsi*126+1512)*1+lsi)*1]), &(inteval->stack[((hsi*126+3465)*1+lsi)*1]), &(inteval->stack[((hsi*126+5418)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+5670)*1+lsi)*1]), &(inteval->stack[((hsi*210+18291)*1+lsi)*1]), &(inteval->stack[((hsi*126+5544)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+5208)*1+lsi)*1]), &(inteval->stack[((hsi*315+987)*1+lsi)*1]), &(inteval->stack[((hsi*315+2940)*1+lsi)*1]), &(inteval->stack[((hsi*315+4893)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+19509)*1+lsi)*1]), &(inteval->stack[((hsi*315+5208)*1+lsi)*1]), &(inteval->stack[((hsi*210+18291)*1+lsi)*1]),21);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*756+11487)*1+lsi)*1]), &(inteval->stack[((hsi*630+19509)*1+lsi)*1]), &(inteval->stack[((hsi*378+5670)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+18291)*1+lsi)*1]), &(inteval->stack[((hsi*210+315)*1+lsi)*1]), &(inteval->stack[((hsi*210+2604)*1+lsi)*1]), &(inteval->stack[((hsi*210+4557)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+4893)*1+lsi)*1]), &(inteval->stack[((hsi*126+735)*1+lsi)*1]), &(inteval->stack[((hsi*126+2814)*1+lsi)*1]), &(inteval->stack[((hsi*126+4767)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+5019)*1+lsi)*1]), &(inteval->stack[((hsi*210+18291)*1+lsi)*1]), &(inteval->stack[((hsi*126+4893)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+4557)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+2289)*1+lsi)*1]), &(inteval->stack[((hsi*315+4242)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+20139)*1+lsi)*1]), &(inteval->stack[((hsi*315+4557)*1+lsi)*1]), &(inteval->stack[((hsi*210+18291)*1+lsi)*1]),21);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*756+10731)*1+lsi)*1]), &(inteval->stack[((hsi*630+20139)*1+lsi)*1]), &(inteval->stack[((hsi*378+5019)*1+lsi)*1]),21);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+4242)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]), &(inteval->stack[((hsi*126+861)*1+lsi)*1]),21);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*378+4620)*1+lsi)*1]), &(inteval->stack[((hsi*210+3906)*1+lsi)*1]), &(inteval->stack[((hsi*126+4116)*1+lsi)*1]), &(inteval->stack[((hsi*126+861)*1+lsi)*1]),21);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*630+20769)*1+lsi)*1]), &(inteval->stack[((hsi*315+3591)*1+lsi)*1]), &(inteval->stack[((hsi*210+3906)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart0bra0ket0dd001(inteval, &(inteval->stack[((hsi*756+9975)*1+lsi)*1]), &(inteval->stack[((hsi*630+20769)*1+lsi)*1]), &(inteval->stack[((hsi*378+4620)*1+lsi)*1]), &(inteval->stack[((hsi*378+4242)*1+lsi)*1]),21);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*378+3591)*1+lsi)*1]), &(inteval->stack[((hsi*210+3255)*1+lsi)*1]), &(inteval->stack[((hsi*126+3465)*1+lsi)*1]), &(inteval->stack[((hsi*126+861)*1+lsi)*1]),21);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*630+21399)*1+lsi)*1]), &(inteval->stack[((hsi*315+2940)*1+lsi)*1]), &(inteval->stack[((hsi*210+3255)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart0bra0ket0dd010(inteval, &(inteval->stack[((hsi*756+9219)*1+lsi)*1]), &(inteval->stack[((hsi*630+21399)*1+lsi)*1]), &(inteval->stack[((hsi*378+3591)*1+lsi)*1]), &(inteval->stack[((hsi*378+4242)*1+lsi)*1]),21);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*378+2940)*1+lsi)*1]), &(inteval->stack[((hsi*210+2604)*1+lsi)*1]), &(inteval->stack[((hsi*126+2814)*1+lsi)*1]), &(inteval->stack[((hsi*126+861)*1+lsi)*1]),21);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*630+22029)*1+lsi)*1]), &(inteval->stack[((hsi*315+2289)*1+lsi)*1]), &(inteval->stack[((hsi*210+2604)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart0bra0ket0dd100(inteval, &(inteval->stack[((hsi*756+8463)*1+lsi)*1]), &(inteval->stack[((hsi*630+22029)*1+lsi)*1]), &(inteval->stack[((hsi*378+2940)*1+lsi)*1]), &(inteval->stack[((hsi*378+4242)*1+lsi)*1]),21);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*378+2289)*1+lsi)*1]), &(inteval->stack[((hsi*210+1953)*1+lsi)*1]), &(inteval->stack[((hsi*126+2163)*1+lsi)*1]), &(inteval->stack[((hsi*126+861)*1+lsi)*1]),21);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*630+22659)*1+lsi)*1]), &(inteval->stack[((hsi*315+1638)*1+lsi)*1]), &(inteval->stack[((hsi*210+1953)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart0bra0ket0d001d(inteval, &(inteval->stack[((hsi*756+7707)*1+lsi)*1]), &(inteval->stack[((hsi*630+22659)*1+lsi)*1]), &(inteval->stack[((hsi*378+2289)*1+lsi)*1]), &(inteval->stack[((hsi*378+4242)*1+lsi)*1]),21);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*378+1638)*1+lsi)*1]), &(inteval->stack[((hsi*210+1302)*1+lsi)*1]), &(inteval->stack[((hsi*126+1512)*1+lsi)*1]), &(inteval->stack[((hsi*126+861)*1+lsi)*1]),21);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*630+23289)*1+lsi)*1]), &(inteval->stack[((hsi*315+987)*1+lsi)*1]), &(inteval->stack[((hsi*210+1302)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart0bra0ket0d010d(inteval, &(inteval->stack[((hsi*756+6951)*1+lsi)*1]), &(inteval->stack[((hsi*630+23289)*1+lsi)*1]), &(inteval->stack[((hsi*378+1638)*1+lsi)*1]), &(inteval->stack[((hsi*378+4242)*1+lsi)*1]),21);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*378+987)*1+lsi)*1]), &(inteval->stack[((hsi*210+315)*1+lsi)*1]), &(inteval->stack[((hsi*126+735)*1+lsi)*1]), &(inteval->stack[((hsi*126+861)*1+lsi)*1]),21);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*630+23919)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+315)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart0bra0ket0d100d(inteval, &(inteval->stack[((hsi*756+6195)*1+lsi)*1]), &(inteval->stack[((hsi*630+23919)*1+lsi)*1]), &(inteval->stack[((hsi*378+987)*1+lsi)*1]), &(inteval->stack[((hsi*378+4242)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*756+6195)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*756+6951)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*756+7707)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*756+8463)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*756+9219)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*756+9975)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*756+10731)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*756+11487)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*756+12243)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*756+12999)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*756+13755)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*756+14511)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
