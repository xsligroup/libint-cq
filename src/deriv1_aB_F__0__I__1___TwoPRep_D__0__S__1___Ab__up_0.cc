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
#include <CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fd001.h>
#include <HRRPart0bra0ket0fd010.h>
#include <HRRPart0bra0ket0fd100.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001d.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010d.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100d.h>
#include <HRRPart0bra0ket0f100p.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100p.h>
#include <deriv1_aB_F__0__I__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__I__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12292)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__I__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+32452)*1+lsi)*1]), &(inteval->stack[((hsi*420+11592)*1+lsi)*1]), &(inteval->stack[((hsi*280+12012)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+33292)*1+lsi)*1]), &(inteval->stack[((hsi*588+11004)*1+lsi)*1]), &(inteval->stack[((hsi*420+11592)*1+lsi)*1]),28);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+30772)*1+lsi)*1]), &(inteval->stack[((hsi*1260+33292)*1+lsi)*1]), &(inteval->stack[((hsi*840+32452)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+34552)*1+lsi)*1]), &(inteval->stack[((hsi*420+10304)*1+lsi)*1]), &(inteval->stack[((hsi*280+10724)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+35392)*1+lsi)*1]), &(inteval->stack[((hsi*588+9716)*1+lsi)*1]), &(inteval->stack[((hsi*420+10304)*1+lsi)*1]),28);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+29092)*1+lsi)*1]), &(inteval->stack[((hsi*1260+35392)*1+lsi)*1]), &(inteval->stack[((hsi*840+34552)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+36652)*1+lsi)*1]), &(inteval->stack[((hsi*420+9016)*1+lsi)*1]), &(inteval->stack[((hsi*280+9436)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+37492)*1+lsi)*1]), &(inteval->stack[((hsi*588+8428)*1+lsi)*1]), &(inteval->stack[((hsi*420+9016)*1+lsi)*1]),28);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+27412)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37492)*1+lsi)*1]), &(inteval->stack[((hsi*840+36652)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+38752)*1+lsi)*1]), &(inteval->stack[((hsi*420+3864)*1+lsi)*1]), &(inteval->stack[((hsi*420+7728)*1+lsi)*1]), &(inteval->stack[((hsi*420+11592)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+11592)*1+lsi)*1]), &(inteval->stack[((hsi*280+4284)*1+lsi)*1]), &(inteval->stack[((hsi*280+8148)*1+lsi)*1]), &(inteval->stack[((hsi*280+12012)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+39172)*1+lsi)*1]), &(inteval->stack[((hsi*420+38752)*1+lsi)*1]), &(inteval->stack[((hsi*280+11592)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_H__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+11592)*1+lsi)*1]), &(inteval->stack[((hsi*588+3276)*1+lsi)*1]), &(inteval->stack[((hsi*588+7140)*1+lsi)*1]), &(inteval->stack[((hsi*588+11004)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+40012)*1+lsi)*1]), &(inteval->stack[((hsi*588+11592)*1+lsi)*1]), &(inteval->stack[((hsi*420+38752)*1+lsi)*1]),28);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+25732)*1+lsi)*1]), &(inteval->stack[((hsi*1260+40012)*1+lsi)*1]), &(inteval->stack[((hsi*840+39172)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+38752)*1+lsi)*1]), &(inteval->stack[((hsi*420+2576)*1+lsi)*1]), &(inteval->stack[((hsi*420+6440)*1+lsi)*1]), &(inteval->stack[((hsi*420+10304)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+11004)*1+lsi)*1]), &(inteval->stack[((hsi*280+2996)*1+lsi)*1]), &(inteval->stack[((hsi*280+6860)*1+lsi)*1]), &(inteval->stack[((hsi*280+10724)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+11284)*1+lsi)*1]), &(inteval->stack[((hsi*420+38752)*1+lsi)*1]), &(inteval->stack[((hsi*280+11004)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_H__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+10304)*1+lsi)*1]), &(inteval->stack[((hsi*588+1988)*1+lsi)*1]), &(inteval->stack[((hsi*588+5852)*1+lsi)*1]), &(inteval->stack[((hsi*588+9716)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+41272)*1+lsi)*1]), &(inteval->stack[((hsi*588+10304)*1+lsi)*1]), &(inteval->stack[((hsi*420+38752)*1+lsi)*1]),28);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+24052)*1+lsi)*1]), &(inteval->stack[((hsi*1260+41272)*1+lsi)*1]), &(inteval->stack[((hsi*840+11284)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+38752)*1+lsi)*1]), &(inteval->stack[((hsi*420+588)*1+lsi)*1]), &(inteval->stack[((hsi*420+5152)*1+lsi)*1]), &(inteval->stack[((hsi*420+9016)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+9716)*1+lsi)*1]), &(inteval->stack[((hsi*280+1428)*1+lsi)*1]), &(inteval->stack[((hsi*280+5572)*1+lsi)*1]), &(inteval->stack[((hsi*280+9436)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+9996)*1+lsi)*1]), &(inteval->stack[((hsi*420+38752)*1+lsi)*1]), &(inteval->stack[((hsi*280+9716)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_H__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+9016)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+4564)*1+lsi)*1]), &(inteval->stack[((hsi*588+8428)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+42532)*1+lsi)*1]), &(inteval->stack[((hsi*588+9016)*1+lsi)*1]), &(inteval->stack[((hsi*420+38752)*1+lsi)*1]),28);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+22372)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42532)*1+lsi)*1]), &(inteval->stack[((hsi*840+9996)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+8428)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]), &(inteval->stack[((hsi*280+1708)*1+lsi)*1]),28);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*840+43792)*1+lsi)*1]), &(inteval->stack[((hsi*420+7728)*1+lsi)*1]), &(inteval->stack[((hsi*280+8148)*1+lsi)*1]), &(inteval->stack[((hsi*280+1708)*1+lsi)*1]),28);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*1260+44632)*1+lsi)*1]), &(inteval->stack[((hsi*588+7140)*1+lsi)*1]), &(inteval->stack[((hsi*420+7728)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart0bra0ket0fd001(inteval, &(inteval->stack[((hsi*1680+20692)*1+lsi)*1]), &(inteval->stack[((hsi*1260+44632)*1+lsi)*1]), &(inteval->stack[((hsi*840+43792)*1+lsi)*1]), &(inteval->stack[((hsi*840+8428)*1+lsi)*1]),28);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*840+7140)*1+lsi)*1]), &(inteval->stack[((hsi*420+6440)*1+lsi)*1]), &(inteval->stack[((hsi*280+6860)*1+lsi)*1]), &(inteval->stack[((hsi*280+1708)*1+lsi)*1]),28);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*1260+45892)*1+lsi)*1]), &(inteval->stack[((hsi*588+5852)*1+lsi)*1]), &(inteval->stack[((hsi*420+6440)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart0bra0ket0fd010(inteval, &(inteval->stack[((hsi*1680+19012)*1+lsi)*1]), &(inteval->stack[((hsi*1260+45892)*1+lsi)*1]), &(inteval->stack[((hsi*840+7140)*1+lsi)*1]), &(inteval->stack[((hsi*840+8428)*1+lsi)*1]),28);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*840+5852)*1+lsi)*1]), &(inteval->stack[((hsi*420+5152)*1+lsi)*1]), &(inteval->stack[((hsi*280+5572)*1+lsi)*1]), &(inteval->stack[((hsi*280+1708)*1+lsi)*1]),28);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*1260+47152)*1+lsi)*1]), &(inteval->stack[((hsi*588+4564)*1+lsi)*1]), &(inteval->stack[((hsi*420+5152)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart0bra0ket0fd100(inteval, &(inteval->stack[((hsi*1680+17332)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47152)*1+lsi)*1]), &(inteval->stack[((hsi*840+5852)*1+lsi)*1]), &(inteval->stack[((hsi*840+8428)*1+lsi)*1]),28);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*840+4564)*1+lsi)*1]), &(inteval->stack[((hsi*420+3864)*1+lsi)*1]), &(inteval->stack[((hsi*280+4284)*1+lsi)*1]), &(inteval->stack[((hsi*280+1708)*1+lsi)*1]),28);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*1260+48412)*1+lsi)*1]), &(inteval->stack[((hsi*588+3276)*1+lsi)*1]), &(inteval->stack[((hsi*420+3864)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart0bra0ket0f001d(inteval, &(inteval->stack[((hsi*1680+15652)*1+lsi)*1]), &(inteval->stack[((hsi*1260+48412)*1+lsi)*1]), &(inteval->stack[((hsi*840+4564)*1+lsi)*1]), &(inteval->stack[((hsi*840+8428)*1+lsi)*1]),28);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*840+3276)*1+lsi)*1]), &(inteval->stack[((hsi*420+2576)*1+lsi)*1]), &(inteval->stack[((hsi*280+2996)*1+lsi)*1]), &(inteval->stack[((hsi*280+1708)*1+lsi)*1]),28);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*1260+49672)*1+lsi)*1]), &(inteval->stack[((hsi*588+1988)*1+lsi)*1]), &(inteval->stack[((hsi*420+2576)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart0bra0ket0f010d(inteval, &(inteval->stack[((hsi*1680+13972)*1+lsi)*1]), &(inteval->stack[((hsi*1260+49672)*1+lsi)*1]), &(inteval->stack[((hsi*840+3276)*1+lsi)*1]), &(inteval->stack[((hsi*840+8428)*1+lsi)*1]),28);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*840+1988)*1+lsi)*1]), &(inteval->stack[((hsi*420+588)*1+lsi)*1]), &(inteval->stack[((hsi*280+1428)*1+lsi)*1]), &(inteval->stack[((hsi*280+1708)*1+lsi)*1]),28);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*1260+50932)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+588)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
HRRPart0bra0ket0f100d(inteval, &(inteval->stack[((hsi*1680+12292)*1+lsi)*1]), &(inteval->stack[((hsi*1260+50932)*1+lsi)*1]), &(inteval->stack[((hsi*840+1988)*1+lsi)*1]), &(inteval->stack[((hsi*840+8428)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1680+12292)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1680+13972)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1680+15652)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1680+17332)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1680+19012)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1680+20692)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1680+22372)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1680+24052)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1680+25732)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1680+27412)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1680+29092)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1680+30772)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
