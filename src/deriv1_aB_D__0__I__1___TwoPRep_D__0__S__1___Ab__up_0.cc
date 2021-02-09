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
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_D__0__I__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__I__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8260)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__I__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+20356)*1+lsi)*1]), &(inteval->stack[((hsi*280+7812)*1+lsi)*1]), &(inteval->stack[((hsi*168+8092)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+20860)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]), &(inteval->stack[((hsi*280+7812)*1+lsi)*1]),28);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1008+19348)*1+lsi)*1]), &(inteval->stack[((hsi*840+20860)*1+lsi)*1]), &(inteval->stack[((hsi*504+20356)*1+lsi)*1]),28);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+21700)*1+lsi)*1]), &(inteval->stack[((hsi*280+6944)*1+lsi)*1]), &(inteval->stack[((hsi*168+7224)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+22204)*1+lsi)*1]), &(inteval->stack[((hsi*420+6524)*1+lsi)*1]), &(inteval->stack[((hsi*280+6944)*1+lsi)*1]),28);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1008+18340)*1+lsi)*1]), &(inteval->stack[((hsi*840+22204)*1+lsi)*1]), &(inteval->stack[((hsi*504+21700)*1+lsi)*1]),28);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+23044)*1+lsi)*1]), &(inteval->stack[((hsi*280+6076)*1+lsi)*1]), &(inteval->stack[((hsi*168+6356)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+23548)*1+lsi)*1]), &(inteval->stack[((hsi*420+5656)*1+lsi)*1]), &(inteval->stack[((hsi*280+6076)*1+lsi)*1]),28);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1008+17332)*1+lsi)*1]), &(inteval->stack[((hsi*840+23548)*1+lsi)*1]), &(inteval->stack[((hsi*504+23044)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+24388)*1+lsi)*1]), &(inteval->stack[((hsi*280+2604)*1+lsi)*1]), &(inteval->stack[((hsi*280+5208)*1+lsi)*1]), &(inteval->stack[((hsi*280+7812)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+7812)*1+lsi)*1]), &(inteval->stack[((hsi*168+2884)*1+lsi)*1]), &(inteval->stack[((hsi*168+5488)*1+lsi)*1]), &(inteval->stack[((hsi*168+8092)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+24668)*1+lsi)*1]), &(inteval->stack[((hsi*280+24388)*1+lsi)*1]), &(inteval->stack[((hsi*168+7812)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+7812)*1+lsi)*1]), &(inteval->stack[((hsi*420+2184)*1+lsi)*1]), &(inteval->stack[((hsi*420+4788)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+25172)*1+lsi)*1]), &(inteval->stack[((hsi*420+7812)*1+lsi)*1]), &(inteval->stack[((hsi*280+24388)*1+lsi)*1]),28);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1008+16324)*1+lsi)*1]), &(inteval->stack[((hsi*840+25172)*1+lsi)*1]), &(inteval->stack[((hsi*504+24668)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+24388)*1+lsi)*1]), &(inteval->stack[((hsi*280+1736)*1+lsi)*1]), &(inteval->stack[((hsi*280+4340)*1+lsi)*1]), &(inteval->stack[((hsi*280+6944)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+7392)*1+lsi)*1]), &(inteval->stack[((hsi*168+2016)*1+lsi)*1]), &(inteval->stack[((hsi*168+4620)*1+lsi)*1]), &(inteval->stack[((hsi*168+7224)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+7560)*1+lsi)*1]), &(inteval->stack[((hsi*280+24388)*1+lsi)*1]), &(inteval->stack[((hsi*168+7392)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+6944)*1+lsi)*1]), &(inteval->stack[((hsi*420+1316)*1+lsi)*1]), &(inteval->stack[((hsi*420+3920)*1+lsi)*1]), &(inteval->stack[((hsi*420+6524)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+26012)*1+lsi)*1]), &(inteval->stack[((hsi*420+6944)*1+lsi)*1]), &(inteval->stack[((hsi*280+24388)*1+lsi)*1]),28);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1008+15316)*1+lsi)*1]), &(inteval->stack[((hsi*840+26012)*1+lsi)*1]), &(inteval->stack[((hsi*504+7560)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+24388)*1+lsi)*1]), &(inteval->stack[((hsi*280+420)*1+lsi)*1]), &(inteval->stack[((hsi*280+3472)*1+lsi)*1]), &(inteval->stack[((hsi*280+6076)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+6524)*1+lsi)*1]), &(inteval->stack[((hsi*168+980)*1+lsi)*1]), &(inteval->stack[((hsi*168+3752)*1+lsi)*1]), &(inteval->stack[((hsi*168+6356)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+6692)*1+lsi)*1]), &(inteval->stack[((hsi*280+24388)*1+lsi)*1]), &(inteval->stack[((hsi*168+6524)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+6076)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+3052)*1+lsi)*1]), &(inteval->stack[((hsi*420+5656)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+26852)*1+lsi)*1]), &(inteval->stack[((hsi*420+6076)*1+lsi)*1]), &(inteval->stack[((hsi*280+24388)*1+lsi)*1]),28);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1008+14308)*1+lsi)*1]), &(inteval->stack[((hsi*840+26852)*1+lsi)*1]), &(inteval->stack[((hsi*504+6692)*1+lsi)*1]),28);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+5656)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]), &(inteval->stack[((hsi*168+1148)*1+lsi)*1]),28);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*504+6160)*1+lsi)*1]), &(inteval->stack[((hsi*280+5208)*1+lsi)*1]), &(inteval->stack[((hsi*168+5488)*1+lsi)*1]), &(inteval->stack[((hsi*168+1148)*1+lsi)*1]),28);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*840+27692)*1+lsi)*1]), &(inteval->stack[((hsi*420+4788)*1+lsi)*1]), &(inteval->stack[((hsi*280+5208)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart0bra0ket0dd001(inteval, &(inteval->stack[((hsi*1008+13300)*1+lsi)*1]), &(inteval->stack[((hsi*840+27692)*1+lsi)*1]), &(inteval->stack[((hsi*504+6160)*1+lsi)*1]), &(inteval->stack[((hsi*504+5656)*1+lsi)*1]),28);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*504+4788)*1+lsi)*1]), &(inteval->stack[((hsi*280+4340)*1+lsi)*1]), &(inteval->stack[((hsi*168+4620)*1+lsi)*1]), &(inteval->stack[((hsi*168+1148)*1+lsi)*1]),28);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*840+28532)*1+lsi)*1]), &(inteval->stack[((hsi*420+3920)*1+lsi)*1]), &(inteval->stack[((hsi*280+4340)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart0bra0ket0dd010(inteval, &(inteval->stack[((hsi*1008+12292)*1+lsi)*1]), &(inteval->stack[((hsi*840+28532)*1+lsi)*1]), &(inteval->stack[((hsi*504+4788)*1+lsi)*1]), &(inteval->stack[((hsi*504+5656)*1+lsi)*1]),28);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*504+3920)*1+lsi)*1]), &(inteval->stack[((hsi*280+3472)*1+lsi)*1]), &(inteval->stack[((hsi*168+3752)*1+lsi)*1]), &(inteval->stack[((hsi*168+1148)*1+lsi)*1]),28);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*840+29372)*1+lsi)*1]), &(inteval->stack[((hsi*420+3052)*1+lsi)*1]), &(inteval->stack[((hsi*280+3472)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart0bra0ket0dd100(inteval, &(inteval->stack[((hsi*1008+11284)*1+lsi)*1]), &(inteval->stack[((hsi*840+29372)*1+lsi)*1]), &(inteval->stack[((hsi*504+3920)*1+lsi)*1]), &(inteval->stack[((hsi*504+5656)*1+lsi)*1]),28);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*504+3052)*1+lsi)*1]), &(inteval->stack[((hsi*280+2604)*1+lsi)*1]), &(inteval->stack[((hsi*168+2884)*1+lsi)*1]), &(inteval->stack[((hsi*168+1148)*1+lsi)*1]),28);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*840+30212)*1+lsi)*1]), &(inteval->stack[((hsi*420+2184)*1+lsi)*1]), &(inteval->stack[((hsi*280+2604)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart0bra0ket0d001d(inteval, &(inteval->stack[((hsi*1008+10276)*1+lsi)*1]), &(inteval->stack[((hsi*840+30212)*1+lsi)*1]), &(inteval->stack[((hsi*504+3052)*1+lsi)*1]), &(inteval->stack[((hsi*504+5656)*1+lsi)*1]),28);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*504+2184)*1+lsi)*1]), &(inteval->stack[((hsi*280+1736)*1+lsi)*1]), &(inteval->stack[((hsi*168+2016)*1+lsi)*1]), &(inteval->stack[((hsi*168+1148)*1+lsi)*1]),28);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*840+31052)*1+lsi)*1]), &(inteval->stack[((hsi*420+1316)*1+lsi)*1]), &(inteval->stack[((hsi*280+1736)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart0bra0ket0d010d(inteval, &(inteval->stack[((hsi*1008+9268)*1+lsi)*1]), &(inteval->stack[((hsi*840+31052)*1+lsi)*1]), &(inteval->stack[((hsi*504+2184)*1+lsi)*1]), &(inteval->stack[((hsi*504+5656)*1+lsi)*1]),28);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*504+1316)*1+lsi)*1]), &(inteval->stack[((hsi*280+420)*1+lsi)*1]), &(inteval->stack[((hsi*168+980)*1+lsi)*1]), &(inteval->stack[((hsi*168+1148)*1+lsi)*1]),28);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*840+31892)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*280+420)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart0bra0ket0d100d(inteval, &(inteval->stack[((hsi*1008+8260)*1+lsi)*1]), &(inteval->stack[((hsi*840+31892)*1+lsi)*1]), &(inteval->stack[((hsi*504+1316)*1+lsi)*1]), &(inteval->stack[((hsi*504+5656)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1008+8260)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1008+9268)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1008+10276)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1008+11284)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1008+12292)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1008+13300)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1008+14308)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1008+15316)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1008+16324)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1008+17332)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1008+18340)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1008+19348)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
