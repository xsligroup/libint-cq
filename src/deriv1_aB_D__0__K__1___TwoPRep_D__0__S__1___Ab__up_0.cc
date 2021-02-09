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
#include <CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_D__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__K__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10620)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+26172)*1+lsi)*1]), &(inteval->stack[((hsi*360+10044)*1+lsi)*1]), &(inteval->stack[((hsi*216+10404)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+26820)*1+lsi)*1]), &(inteval->stack[((hsi*540+9504)*1+lsi)*1]), &(inteval->stack[((hsi*360+10044)*1+lsi)*1]),36);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1296+24876)*1+lsi)*1]), &(inteval->stack[((hsi*1080+26820)*1+lsi)*1]), &(inteval->stack[((hsi*648+26172)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+27900)*1+lsi)*1]), &(inteval->stack[((hsi*360+8928)*1+lsi)*1]), &(inteval->stack[((hsi*216+9288)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+28548)*1+lsi)*1]), &(inteval->stack[((hsi*540+8388)*1+lsi)*1]), &(inteval->stack[((hsi*360+8928)*1+lsi)*1]),36);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1296+23580)*1+lsi)*1]), &(inteval->stack[((hsi*1080+28548)*1+lsi)*1]), &(inteval->stack[((hsi*648+27900)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+29628)*1+lsi)*1]), &(inteval->stack[((hsi*360+7812)*1+lsi)*1]), &(inteval->stack[((hsi*216+8172)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+30276)*1+lsi)*1]), &(inteval->stack[((hsi*540+7272)*1+lsi)*1]), &(inteval->stack[((hsi*360+7812)*1+lsi)*1]),36);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1296+22284)*1+lsi)*1]), &(inteval->stack[((hsi*1080+30276)*1+lsi)*1]), &(inteval->stack[((hsi*648+29628)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+31356)*1+lsi)*1]), &(inteval->stack[((hsi*360+3348)*1+lsi)*1]), &(inteval->stack[((hsi*360+6696)*1+lsi)*1]), &(inteval->stack[((hsi*360+10044)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+10044)*1+lsi)*1]), &(inteval->stack[((hsi*216+3708)*1+lsi)*1]), &(inteval->stack[((hsi*216+7056)*1+lsi)*1]), &(inteval->stack[((hsi*216+10404)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+31716)*1+lsi)*1]), &(inteval->stack[((hsi*360+31356)*1+lsi)*1]), &(inteval->stack[((hsi*216+10044)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+10044)*1+lsi)*1]), &(inteval->stack[((hsi*540+2808)*1+lsi)*1]), &(inteval->stack[((hsi*540+6156)*1+lsi)*1]), &(inteval->stack[((hsi*540+9504)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+32364)*1+lsi)*1]), &(inteval->stack[((hsi*540+10044)*1+lsi)*1]), &(inteval->stack[((hsi*360+31356)*1+lsi)*1]),36);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1296+20988)*1+lsi)*1]), &(inteval->stack[((hsi*1080+32364)*1+lsi)*1]), &(inteval->stack[((hsi*648+31716)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+31356)*1+lsi)*1]), &(inteval->stack[((hsi*360+2232)*1+lsi)*1]), &(inteval->stack[((hsi*360+5580)*1+lsi)*1]), &(inteval->stack[((hsi*360+8928)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+9504)*1+lsi)*1]), &(inteval->stack[((hsi*216+2592)*1+lsi)*1]), &(inteval->stack[((hsi*216+5940)*1+lsi)*1]), &(inteval->stack[((hsi*216+9288)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+9720)*1+lsi)*1]), &(inteval->stack[((hsi*360+31356)*1+lsi)*1]), &(inteval->stack[((hsi*216+9504)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+8928)*1+lsi)*1]), &(inteval->stack[((hsi*540+1692)*1+lsi)*1]), &(inteval->stack[((hsi*540+5040)*1+lsi)*1]), &(inteval->stack[((hsi*540+8388)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+33444)*1+lsi)*1]), &(inteval->stack[((hsi*540+8928)*1+lsi)*1]), &(inteval->stack[((hsi*360+31356)*1+lsi)*1]),36);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1296+19692)*1+lsi)*1]), &(inteval->stack[((hsi*1080+33444)*1+lsi)*1]), &(inteval->stack[((hsi*648+9720)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+31356)*1+lsi)*1]), &(inteval->stack[((hsi*360+540)*1+lsi)*1]), &(inteval->stack[((hsi*360+4464)*1+lsi)*1]), &(inteval->stack[((hsi*360+7812)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+8388)*1+lsi)*1]), &(inteval->stack[((hsi*216+1260)*1+lsi)*1]), &(inteval->stack[((hsi*216+4824)*1+lsi)*1]), &(inteval->stack[((hsi*216+8172)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+8604)*1+lsi)*1]), &(inteval->stack[((hsi*360+31356)*1+lsi)*1]), &(inteval->stack[((hsi*216+8388)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+7812)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+3924)*1+lsi)*1]), &(inteval->stack[((hsi*540+7272)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+34524)*1+lsi)*1]), &(inteval->stack[((hsi*540+7812)*1+lsi)*1]), &(inteval->stack[((hsi*360+31356)*1+lsi)*1]),36);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1296+18396)*1+lsi)*1]), &(inteval->stack[((hsi*1080+34524)*1+lsi)*1]), &(inteval->stack[((hsi*648+8604)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+7272)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]), &(inteval->stack[((hsi*216+1476)*1+lsi)*1]),36);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*648+7920)*1+lsi)*1]), &(inteval->stack[((hsi*360+6696)*1+lsi)*1]), &(inteval->stack[((hsi*216+7056)*1+lsi)*1]), &(inteval->stack[((hsi*216+1476)*1+lsi)*1]),36);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*1080+35604)*1+lsi)*1]), &(inteval->stack[((hsi*540+6156)*1+lsi)*1]), &(inteval->stack[((hsi*360+6696)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart0bra0ket0dd001(inteval, &(inteval->stack[((hsi*1296+17100)*1+lsi)*1]), &(inteval->stack[((hsi*1080+35604)*1+lsi)*1]), &(inteval->stack[((hsi*648+7920)*1+lsi)*1]), &(inteval->stack[((hsi*648+7272)*1+lsi)*1]),36);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*648+6156)*1+lsi)*1]), &(inteval->stack[((hsi*360+5580)*1+lsi)*1]), &(inteval->stack[((hsi*216+5940)*1+lsi)*1]), &(inteval->stack[((hsi*216+1476)*1+lsi)*1]),36);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*1080+36684)*1+lsi)*1]), &(inteval->stack[((hsi*540+5040)*1+lsi)*1]), &(inteval->stack[((hsi*360+5580)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart0bra0ket0dd010(inteval, &(inteval->stack[((hsi*1296+15804)*1+lsi)*1]), &(inteval->stack[((hsi*1080+36684)*1+lsi)*1]), &(inteval->stack[((hsi*648+6156)*1+lsi)*1]), &(inteval->stack[((hsi*648+7272)*1+lsi)*1]),36);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*648+5040)*1+lsi)*1]), &(inteval->stack[((hsi*360+4464)*1+lsi)*1]), &(inteval->stack[((hsi*216+4824)*1+lsi)*1]), &(inteval->stack[((hsi*216+1476)*1+lsi)*1]),36);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*1080+37764)*1+lsi)*1]), &(inteval->stack[((hsi*540+3924)*1+lsi)*1]), &(inteval->stack[((hsi*360+4464)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart0bra0ket0dd100(inteval, &(inteval->stack[((hsi*1296+14508)*1+lsi)*1]), &(inteval->stack[((hsi*1080+37764)*1+lsi)*1]), &(inteval->stack[((hsi*648+5040)*1+lsi)*1]), &(inteval->stack[((hsi*648+7272)*1+lsi)*1]),36);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*648+3924)*1+lsi)*1]), &(inteval->stack[((hsi*360+3348)*1+lsi)*1]), &(inteval->stack[((hsi*216+3708)*1+lsi)*1]), &(inteval->stack[((hsi*216+1476)*1+lsi)*1]),36);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*1080+38844)*1+lsi)*1]), &(inteval->stack[((hsi*540+2808)*1+lsi)*1]), &(inteval->stack[((hsi*360+3348)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart0bra0ket0d001d(inteval, &(inteval->stack[((hsi*1296+13212)*1+lsi)*1]), &(inteval->stack[((hsi*1080+38844)*1+lsi)*1]), &(inteval->stack[((hsi*648+3924)*1+lsi)*1]), &(inteval->stack[((hsi*648+7272)*1+lsi)*1]),36);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*648+2808)*1+lsi)*1]), &(inteval->stack[((hsi*360+2232)*1+lsi)*1]), &(inteval->stack[((hsi*216+2592)*1+lsi)*1]), &(inteval->stack[((hsi*216+1476)*1+lsi)*1]),36);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*1080+39924)*1+lsi)*1]), &(inteval->stack[((hsi*540+1692)*1+lsi)*1]), &(inteval->stack[((hsi*360+2232)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart0bra0ket0d010d(inteval, &(inteval->stack[((hsi*1296+11916)*1+lsi)*1]), &(inteval->stack[((hsi*1080+39924)*1+lsi)*1]), &(inteval->stack[((hsi*648+2808)*1+lsi)*1]), &(inteval->stack[((hsi*648+7272)*1+lsi)*1]),36);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*648+1692)*1+lsi)*1]), &(inteval->stack[((hsi*360+540)*1+lsi)*1]), &(inteval->stack[((hsi*216+1260)*1+lsi)*1]), &(inteval->stack[((hsi*216+1476)*1+lsi)*1]),36);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*1080+41004)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*360+540)*1+lsi)*1]), &(inteval->stack[((hsi*360+900)*1+lsi)*1]),36);
HRRPart0bra0ket0d100d(inteval, &(inteval->stack[((hsi*1296+10620)*1+lsi)*1]), &(inteval->stack[((hsi*1080+41004)*1+lsi)*1]), &(inteval->stack[((hsi*648+1692)*1+lsi)*1]), &(inteval->stack[((hsi*648+7272)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1296+10620)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1296+11916)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1296+13212)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1296+14508)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1296+15804)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1296+17100)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1296+18396)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1296+19692)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1296+20988)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1296+22284)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1296+23580)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1296+24876)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
