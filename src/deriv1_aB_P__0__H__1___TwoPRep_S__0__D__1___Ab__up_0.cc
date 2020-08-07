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
#include <CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001d.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010d.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100d.h>
#include <HRRPart1bra0ket0h100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_P__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_P__0__H__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2442)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+6978)*1+lsi)*1]), &(inteval->stack[((hsi*84+1530)*1+lsi)*1]), &(inteval->stack[((hsi*63+1806)*1+lsi)*1]),3);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*189+7167)*1+lsi)*1]), &(inteval->stack[((hsi*84+2295)*1+lsi)*1]), &(inteval->stack[((hsi*63+2379)*1+lsi)*1]), &(inteval->stack[((hsi*63+1806)*1+lsi)*1]),3);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*252+7356)*1+lsi)*1]), &(inteval->stack[((hsi*108+2187)*1+lsi)*1]), &(inteval->stack[((hsi*84+2295)*1+lsi)*1]), &(inteval->stack[((hsi*84+1530)*1+lsi)*1]),3);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*378+6600)*1+lsi)*1]), &(inteval->stack[((hsi*252+7356)*1+lsi)*1]), &(inteval->stack[((hsi*189+7167)*1+lsi)*1]), &(inteval->stack[((hsi*189+6978)*1+lsi)*1]),3);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*189+7608)*1+lsi)*1]), &(inteval->stack[((hsi*84+2040)*1+lsi)*1]), &(inteval->stack[((hsi*63+2124)*1+lsi)*1]), &(inteval->stack[((hsi*63+1806)*1+lsi)*1]),3);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*252+7797)*1+lsi)*1]), &(inteval->stack[((hsi*108+1932)*1+lsi)*1]), &(inteval->stack[((hsi*84+2040)*1+lsi)*1]), &(inteval->stack[((hsi*84+1530)*1+lsi)*1]),3);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*378+6222)*1+lsi)*1]), &(inteval->stack[((hsi*252+7797)*1+lsi)*1]), &(inteval->stack[((hsi*189+7608)*1+lsi)*1]), &(inteval->stack[((hsi*189+6978)*1+lsi)*1]),3);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*189+8049)*1+lsi)*1]), &(inteval->stack[((hsi*84+1722)*1+lsi)*1]), &(inteval->stack[((hsi*63+1869)*1+lsi)*1]), &(inteval->stack[((hsi*63+1806)*1+lsi)*1]),3);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*252+8238)*1+lsi)*1]), &(inteval->stack[((hsi*108+1614)*1+lsi)*1]), &(inteval->stack[((hsi*84+1722)*1+lsi)*1]), &(inteval->stack[((hsi*84+1530)*1+lsi)*1]),3);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*378+5844)*1+lsi)*1]), &(inteval->stack[((hsi*252+8238)*1+lsi)*1]), &(inteval->stack[((hsi*189+8049)*1+lsi)*1]), &(inteval->stack[((hsi*189+6978)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+8490)*1+lsi)*1]), &(inteval->stack[((hsi*84+618)*1+lsi)*1]), &(inteval->stack[((hsi*84+1383)*1+lsi)*1]), &(inteval->stack[((hsi*84+2295)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+2295)*1+lsi)*1]), &(inteval->stack[((hsi*63+702)*1+lsi)*1]), &(inteval->stack[((hsi*63+1467)*1+lsi)*1]), &(inteval->stack[((hsi*63+2379)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*189+8574)*1+lsi)*1]), &(inteval->stack[((hsi*84+8490)*1+lsi)*1]), &(inteval->stack[((hsi*63+2295)*1+lsi)*1]), &(inteval->stack[((hsi*63+1806)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+2295)*1+lsi)*1]), &(inteval->stack[((hsi*108+510)*1+lsi)*1]), &(inteval->stack[((hsi*108+1275)*1+lsi)*1]), &(inteval->stack[((hsi*108+2187)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*252+8763)*1+lsi)*1]), &(inteval->stack[((hsi*108+2295)*1+lsi)*1]), &(inteval->stack[((hsi*84+8490)*1+lsi)*1]), &(inteval->stack[((hsi*84+1530)*1+lsi)*1]),3);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*378+5466)*1+lsi)*1]), &(inteval->stack[((hsi*252+8763)*1+lsi)*1]), &(inteval->stack[((hsi*189+8574)*1+lsi)*1]), &(inteval->stack[((hsi*189+6978)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+8490)*1+lsi)*1]), &(inteval->stack[((hsi*84+363)*1+lsi)*1]), &(inteval->stack[((hsi*84+1128)*1+lsi)*1]), &(inteval->stack[((hsi*84+2040)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+2187)*1+lsi)*1]), &(inteval->stack[((hsi*63+447)*1+lsi)*1]), &(inteval->stack[((hsi*63+1212)*1+lsi)*1]), &(inteval->stack[((hsi*63+2124)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*189+2250)*1+lsi)*1]), &(inteval->stack[((hsi*84+8490)*1+lsi)*1]), &(inteval->stack[((hsi*63+2187)*1+lsi)*1]), &(inteval->stack[((hsi*63+1806)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+2040)*1+lsi)*1]), &(inteval->stack[((hsi*108+255)*1+lsi)*1]), &(inteval->stack[((hsi*108+1020)*1+lsi)*1]), &(inteval->stack[((hsi*108+1932)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*252+9015)*1+lsi)*1]), &(inteval->stack[((hsi*108+2040)*1+lsi)*1]), &(inteval->stack[((hsi*84+8490)*1+lsi)*1]), &(inteval->stack[((hsi*84+1530)*1+lsi)*1]),3);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*378+5088)*1+lsi)*1]), &(inteval->stack[((hsi*252+9015)*1+lsi)*1]), &(inteval->stack[((hsi*189+2250)*1+lsi)*1]), &(inteval->stack[((hsi*189+6978)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+8490)*1+lsi)*1]), &(inteval->stack[((hsi*84+108)*1+lsi)*1]), &(inteval->stack[((hsi*84+873)*1+lsi)*1]), &(inteval->stack[((hsi*84+1722)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+1932)*1+lsi)*1]), &(inteval->stack[((hsi*63+192)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]), &(inteval->stack[((hsi*63+1869)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*189+1995)*1+lsi)*1]), &(inteval->stack[((hsi*84+8490)*1+lsi)*1]), &(inteval->stack[((hsi*63+1932)*1+lsi)*1]), &(inteval->stack[((hsi*63+1806)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+1722)*1+lsi)*1]), &(inteval->stack[((hsi*108+0)*1+lsi)*1]), &(inteval->stack[((hsi*108+765)*1+lsi)*1]), &(inteval->stack[((hsi*108+1614)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*252+9267)*1+lsi)*1]), &(inteval->stack[((hsi*108+1722)*1+lsi)*1]), &(inteval->stack[((hsi*84+8490)*1+lsi)*1]), &(inteval->stack[((hsi*84+1530)*1+lsi)*1]),3);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*378+4710)*1+lsi)*1]), &(inteval->stack[((hsi*252+9267)*1+lsi)*1]), &(inteval->stack[((hsi*189+1995)*1+lsi)*1]), &(inteval->stack[((hsi*189+6978)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+1530)*1+lsi)*1]), &(inteval->stack[((hsi*84+1383)*1+lsi)*1]), &(inteval->stack[((hsi*63+1467)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+1719)*1+lsi)*1]), &(inteval->stack[((hsi*108+1275)*1+lsi)*1]), &(inteval->stack[((hsi*84+1383)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+4332)*1+lsi)*1]), &(inteval->stack[((hsi*252+1719)*1+lsi)*1]), &(inteval->stack[((hsi*189+1530)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+1275)*1+lsi)*1]), &(inteval->stack[((hsi*84+1128)*1+lsi)*1]), &(inteval->stack[((hsi*63+1212)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+9519)*1+lsi)*1]), &(inteval->stack[((hsi*108+1020)*1+lsi)*1]), &(inteval->stack[((hsi*84+1128)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+3954)*1+lsi)*1]), &(inteval->stack[((hsi*252+9519)*1+lsi)*1]), &(inteval->stack[((hsi*189+1275)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+1020)*1+lsi)*1]), &(inteval->stack[((hsi*84+873)*1+lsi)*1]), &(inteval->stack[((hsi*63+957)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+9771)*1+lsi)*1]), &(inteval->stack[((hsi*108+765)*1+lsi)*1]), &(inteval->stack[((hsi*84+873)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+3576)*1+lsi)*1]), &(inteval->stack[((hsi*252+9771)*1+lsi)*1]), &(inteval->stack[((hsi*189+1020)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+765)*1+lsi)*1]), &(inteval->stack[((hsi*84+618)*1+lsi)*1]), &(inteval->stack[((hsi*63+702)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+10023)*1+lsi)*1]), &(inteval->stack[((hsi*108+510)*1+lsi)*1]), &(inteval->stack[((hsi*84+618)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+3198)*1+lsi)*1]), &(inteval->stack[((hsi*252+10023)*1+lsi)*1]), &(inteval->stack[((hsi*189+765)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+510)*1+lsi)*1]), &(inteval->stack[((hsi*84+363)*1+lsi)*1]), &(inteval->stack[((hsi*63+447)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+10275)*1+lsi)*1]), &(inteval->stack[((hsi*108+255)*1+lsi)*1]), &(inteval->stack[((hsi*84+363)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+2820)*1+lsi)*1]), &(inteval->stack[((hsi*252+10275)*1+lsi)*1]), &(inteval->stack[((hsi*189+510)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+255)*1+lsi)*1]), &(inteval->stack[((hsi*84+108)*1+lsi)*1]), &(inteval->stack[((hsi*63+192)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+10527)*1+lsi)*1]), &(inteval->stack[((hsi*108+0)*1+lsi)*1]), &(inteval->stack[((hsi*84+108)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+2442)*1+lsi)*1]), &(inteval->stack[((hsi*252+10527)*1+lsi)*1]), &(inteval->stack[((hsi*189+255)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*378+2442)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*378+2820)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*378+3198)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*378+3576)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*378+3954)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*378+4332)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*378+4710)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*378+5088)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*378+5466)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*378+5844)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*378+6222)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*378+6600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
