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
#include <CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_K__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kd001.h>
#include <HRRPart1bra0ket0kd010.h>
#include <HRRPart1bra0ket0kd100.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0k001d.h>
#include <HRRPart1bra0ket0k001p.h>
#include <HRRPart1bra0ket0k010d.h>
#include <HRRPart1bra0ket0k010p.h>
#include <HRRPart1bra0ket0k100d.h>
#include <HRRPart1bra0ket0k100p.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0lp001.h>
#include <HRRPart1bra0ket0lp010.h>
#include <HRRPart1bra0ket0lp100.h>
#include <HRRPart1bra0ket0l001p.h>
#include <HRRPart1bra0ket0l010p.h>
#include <HRRPart1bra0ket0l100p.h>
#include <deriv1_aB_K__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_K__0__K__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,46980)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_K__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+140292)*1+lsi)*1]), &(inteval->stack[((hsi*1620+29376)*1+lsi)*1]), &(inteval->stack[((hsi*1296+34596)*1+lsi)*1]),36);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3888+144180)*1+lsi)*1]), &(inteval->stack[((hsi*1620+44064)*1+lsi)*1]), &(inteval->stack[((hsi*1296+45684)*1+lsi)*1]), &(inteval->stack[((hsi*1296+34596)*1+lsi)*1]),36);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*4860+148068)*1+lsi)*1]), &(inteval->stack[((hsi*1980+42084)*1+lsi)*1]), &(inteval->stack[((hsi*1620+44064)*1+lsi)*1]), &(inteval->stack[((hsi*1620+29376)*1+lsi)*1]),36);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*7776+132516)*1+lsi)*1]), &(inteval->stack[((hsi*4860+148068)*1+lsi)*1]), &(inteval->stack[((hsi*3888+144180)*1+lsi)*1]), &(inteval->stack[((hsi*3888+140292)*1+lsi)*1]),36);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3888+152928)*1+lsi)*1]), &(inteval->stack[((hsi*1620+39168)*1+lsi)*1]), &(inteval->stack[((hsi*1296+40788)*1+lsi)*1]), &(inteval->stack[((hsi*1296+34596)*1+lsi)*1]),36);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*4860+156816)*1+lsi)*1]), &(inteval->stack[((hsi*1980+37188)*1+lsi)*1]), &(inteval->stack[((hsi*1620+39168)*1+lsi)*1]), &(inteval->stack[((hsi*1620+29376)*1+lsi)*1]),36);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*7776+124740)*1+lsi)*1]), &(inteval->stack[((hsi*4860+156816)*1+lsi)*1]), &(inteval->stack[((hsi*3888+152928)*1+lsi)*1]), &(inteval->stack[((hsi*3888+140292)*1+lsi)*1]),36);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3888+161676)*1+lsi)*1]), &(inteval->stack[((hsi*1620+32976)*1+lsi)*1]), &(inteval->stack[((hsi*1296+35892)*1+lsi)*1]), &(inteval->stack[((hsi*1296+34596)*1+lsi)*1]),36);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*4860+165564)*1+lsi)*1]), &(inteval->stack[((hsi*1980+30996)*1+lsi)*1]), &(inteval->stack[((hsi*1620+32976)*1+lsi)*1]), &(inteval->stack[((hsi*1620+29376)*1+lsi)*1]),36);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*7776+116964)*1+lsi)*1]), &(inteval->stack[((hsi*4860+165564)*1+lsi)*1]), &(inteval->stack[((hsi*3888+161676)*1+lsi)*1]), &(inteval->stack[((hsi*3888+140292)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+170424)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11772)*1+lsi)*1]), &(inteval->stack[((hsi*1620+26460)*1+lsi)*1]), &(inteval->stack[((hsi*1620+44064)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+44064)*1+lsi)*1]), &(inteval->stack[((hsi*1296+13392)*1+lsi)*1]), &(inteval->stack[((hsi*1296+28080)*1+lsi)*1]), &(inteval->stack[((hsi*1296+45684)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*3888+172044)*1+lsi)*1]), &(inteval->stack[((hsi*1620+170424)*1+lsi)*1]), &(inteval->stack[((hsi*1296+44064)*1+lsi)*1]), &(inteval->stack[((hsi*1296+34596)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1980+44064)*1+lsi)*1]), &(inteval->stack[((hsi*1980+9792)*1+lsi)*1]), &(inteval->stack[((hsi*1980+24480)*1+lsi)*1]), &(inteval->stack[((hsi*1980+42084)*1+lsi)*1]));
HRRPart1bra0ket0l001p(inteval, &(inteval->stack[((hsi*4860+175932)*1+lsi)*1]), &(inteval->stack[((hsi*1980+44064)*1+lsi)*1]), &(inteval->stack[((hsi*1620+170424)*1+lsi)*1]), &(inteval->stack[((hsi*1620+29376)*1+lsi)*1]),36);
HRRPart1bra0ket0k001d(inteval, &(inteval->stack[((hsi*7776+109188)*1+lsi)*1]), &(inteval->stack[((hsi*4860+175932)*1+lsi)*1]), &(inteval->stack[((hsi*3888+172044)*1+lsi)*1]), &(inteval->stack[((hsi*3888+140292)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+170424)*1+lsi)*1]), &(inteval->stack[((hsi*1620+6876)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21564)*1+lsi)*1]), &(inteval->stack[((hsi*1620+39168)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+42084)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8496)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23184)*1+lsi)*1]), &(inteval->stack[((hsi*1296+40788)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*3888+180792)*1+lsi)*1]), &(inteval->stack[((hsi*1620+170424)*1+lsi)*1]), &(inteval->stack[((hsi*1296+42084)*1+lsi)*1]), &(inteval->stack[((hsi*1296+34596)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1980+39168)*1+lsi)*1]), &(inteval->stack[((hsi*1980+4896)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19584)*1+lsi)*1]), &(inteval->stack[((hsi*1980+37188)*1+lsi)*1]));
HRRPart1bra0ket0l010p(inteval, &(inteval->stack[((hsi*4860+41148)*1+lsi)*1]), &(inteval->stack[((hsi*1980+39168)*1+lsi)*1]), &(inteval->stack[((hsi*1620+170424)*1+lsi)*1]), &(inteval->stack[((hsi*1620+29376)*1+lsi)*1]),36);
HRRPart1bra0ket0k010d(inteval, &(inteval->stack[((hsi*7776+101412)*1+lsi)*1]), &(inteval->stack[((hsi*4860+41148)*1+lsi)*1]), &(inteval->stack[((hsi*3888+180792)*1+lsi)*1]), &(inteval->stack[((hsi*3888+140292)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1620+170424)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1980)*1+lsi)*1]), &(inteval->stack[((hsi*1620+16668)*1+lsi)*1]), &(inteval->stack[((hsi*1620+32976)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_K__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1296+37188)*1+lsi)*1]), &(inteval->stack[((hsi*1296+3600)*1+lsi)*1]), &(inteval->stack[((hsi*1296+18288)*1+lsi)*1]), &(inteval->stack[((hsi*1296+35892)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*3888+184680)*1+lsi)*1]), &(inteval->stack[((hsi*1620+170424)*1+lsi)*1]), &(inteval->stack[((hsi*1296+37188)*1+lsi)*1]), &(inteval->stack[((hsi*1296+34596)*1+lsi)*1]),36);
CR_DerivGaussP1InBra_aB_K__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1980+32976)*1+lsi)*1]), &(inteval->stack[((hsi*1980+0)*1+lsi)*1]), &(inteval->stack[((hsi*1980+14688)*1+lsi)*1]), &(inteval->stack[((hsi*1980+30996)*1+lsi)*1]));
HRRPart1bra0ket0l100p(inteval, &(inteval->stack[((hsi*4860+34956)*1+lsi)*1]), &(inteval->stack[((hsi*1980+32976)*1+lsi)*1]), &(inteval->stack[((hsi*1620+170424)*1+lsi)*1]), &(inteval->stack[((hsi*1620+29376)*1+lsi)*1]),36);
HRRPart1bra0ket0k100d(inteval, &(inteval->stack[((hsi*7776+93636)*1+lsi)*1]), &(inteval->stack[((hsi*4860+34956)*1+lsi)*1]), &(inteval->stack[((hsi*3888+184680)*1+lsi)*1]), &(inteval->stack[((hsi*3888+140292)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+29376)*1+lsi)*1]), &(inteval->stack[((hsi*1620+26460)*1+lsi)*1]), &(inteval->stack[((hsi*1296+28080)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+188568)*1+lsi)*1]), &(inteval->stack[((hsi*1980+24480)*1+lsi)*1]), &(inteval->stack[((hsi*1620+26460)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+85860)*1+lsi)*1]), &(inteval->stack[((hsi*4860+188568)*1+lsi)*1]), &(inteval->stack[((hsi*3888+29376)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+24480)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21564)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23184)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+193428)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19584)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21564)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+78084)*1+lsi)*1]), &(inteval->stack[((hsi*4860+193428)*1+lsi)*1]), &(inteval->stack[((hsi*3888+24480)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+19584)*1+lsi)*1]), &(inteval->stack[((hsi*1620+16668)*1+lsi)*1]), &(inteval->stack[((hsi*1296+18288)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+198288)*1+lsi)*1]), &(inteval->stack[((hsi*1980+14688)*1+lsi)*1]), &(inteval->stack[((hsi*1620+16668)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+70308)*1+lsi)*1]), &(inteval->stack[((hsi*4860+198288)*1+lsi)*1]), &(inteval->stack[((hsi*3888+19584)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+14688)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11772)*1+lsi)*1]), &(inteval->stack[((hsi*1296+13392)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+203148)*1+lsi)*1]), &(inteval->stack[((hsi*1980+9792)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11772)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+62532)*1+lsi)*1]), &(inteval->stack[((hsi*4860+203148)*1+lsi)*1]), &(inteval->stack[((hsi*3888+14688)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+9792)*1+lsi)*1]), &(inteval->stack[((hsi*1620+6876)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8496)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+208008)*1+lsi)*1]), &(inteval->stack[((hsi*1980+4896)*1+lsi)*1]), &(inteval->stack[((hsi*1620+6876)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+54756)*1+lsi)*1]), &(inteval->stack[((hsi*4860+208008)*1+lsi)*1]), &(inteval->stack[((hsi*3888+9792)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+4896)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1980)*1+lsi)*1]), &(inteval->stack[((hsi*1296+3600)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+212868)*1+lsi)*1]), &(inteval->stack[((hsi*1980+0)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1980)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+46980)*1+lsi)*1]), &(inteval->stack[((hsi*4860+212868)*1+lsi)*1]), &(inteval->stack[((hsi*3888+4896)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7776+46980)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*7776+54756)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*7776+62532)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*7776+70308)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*7776+78084)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*7776+85860)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*7776+93636)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*7776+101412)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*7776+109188)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*7776+116964)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*7776+124740)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*7776+132516)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
