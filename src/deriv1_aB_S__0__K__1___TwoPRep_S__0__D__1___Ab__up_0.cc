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
#include <CR_DerivGaussP1InBra_aB_S__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_S__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_S__0__K__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1305)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_S__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3897)*1+lsi)*1]), &(inteval->stack[((hsi*45+816)*1+lsi)*1]), &(inteval->stack[((hsi*36+961)*1+lsi)*1]),1);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+4005)*1+lsi)*1]), &(inteval->stack[((hsi*45+1224)*1+lsi)*1]), &(inteval->stack[((hsi*36+1269)*1+lsi)*1]), &(inteval->stack[((hsi*36+961)*1+lsi)*1]),1);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*135+4113)*1+lsi)*1]), &(inteval->stack[((hsi*55+1169)*1+lsi)*1]), &(inteval->stack[((hsi*45+1224)*1+lsi)*1]), &(inteval->stack[((hsi*45+816)*1+lsi)*1]),1);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*216+3681)*1+lsi)*1]), &(inteval->stack[((hsi*135+4113)*1+lsi)*1]), &(inteval->stack[((hsi*108+4005)*1+lsi)*1]), &(inteval->stack[((hsi*108+3897)*1+lsi)*1]),1);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+4248)*1+lsi)*1]), &(inteval->stack[((hsi*45+1088)*1+lsi)*1]), &(inteval->stack[((hsi*36+1133)*1+lsi)*1]), &(inteval->stack[((hsi*36+961)*1+lsi)*1]),1);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*55+1033)*1+lsi)*1]), &(inteval->stack[((hsi*45+1088)*1+lsi)*1]), &(inteval->stack[((hsi*45+816)*1+lsi)*1]),1);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*216+3465)*1+lsi)*1]), &(inteval->stack[((hsi*135+4356)*1+lsi)*1]), &(inteval->stack[((hsi*108+4248)*1+lsi)*1]), &(inteval->stack[((hsi*108+3897)*1+lsi)*1]),1);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+4491)*1+lsi)*1]), &(inteval->stack[((hsi*45+916)*1+lsi)*1]), &(inteval->stack[((hsi*36+997)*1+lsi)*1]), &(inteval->stack[((hsi*36+961)*1+lsi)*1]),1);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*135+4599)*1+lsi)*1]), &(inteval->stack[((hsi*55+861)*1+lsi)*1]), &(inteval->stack[((hsi*45+916)*1+lsi)*1]), &(inteval->stack[((hsi*45+816)*1+lsi)*1]),1);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*216+3249)*1+lsi)*1]), &(inteval->stack[((hsi*135+4599)*1+lsi)*1]), &(inteval->stack[((hsi*108+4491)*1+lsi)*1]), &(inteval->stack[((hsi*108+3897)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__L001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+4734)*1+lsi)*1]), &(inteval->stack[((hsi*45+327)*1+lsi)*1]), &(inteval->stack[((hsi*45+735)*1+lsi)*1]), &(inteval->stack[((hsi*45+1224)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1224)*1+lsi)*1]), &(inteval->stack[((hsi*36+372)*1+lsi)*1]), &(inteval->stack[((hsi*36+780)*1+lsi)*1]), &(inteval->stack[((hsi*36+1269)*1+lsi)*1]));
HRRPart1bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+4779)*1+lsi)*1]), &(inteval->stack[((hsi*45+4734)*1+lsi)*1]), &(inteval->stack[((hsi*36+1224)*1+lsi)*1]), &(inteval->stack[((hsi*36+961)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__M001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*55+1224)*1+lsi)*1]), &(inteval->stack[((hsi*55+272)*1+lsi)*1]), &(inteval->stack[((hsi*55+680)*1+lsi)*1]), &(inteval->stack[((hsi*55+1169)*1+lsi)*1]));
HRRPart1bra0ket0l001p(inteval, &(inteval->stack[((hsi*135+4887)*1+lsi)*1]), &(inteval->stack[((hsi*55+1224)*1+lsi)*1]), &(inteval->stack[((hsi*45+4734)*1+lsi)*1]), &(inteval->stack[((hsi*45+816)*1+lsi)*1]),1);
HRRPart1bra0ket0k001d(inteval, &(inteval->stack[((hsi*216+3033)*1+lsi)*1]), &(inteval->stack[((hsi*135+4887)*1+lsi)*1]), &(inteval->stack[((hsi*108+4779)*1+lsi)*1]), &(inteval->stack[((hsi*108+3897)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__L010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+4734)*1+lsi)*1]), &(inteval->stack[((hsi*45+191)*1+lsi)*1]), &(inteval->stack[((hsi*45+599)*1+lsi)*1]), &(inteval->stack[((hsi*45+1088)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1169)*1+lsi)*1]), &(inteval->stack[((hsi*36+236)*1+lsi)*1]), &(inteval->stack[((hsi*36+644)*1+lsi)*1]), &(inteval->stack[((hsi*36+1133)*1+lsi)*1]));
HRRPart1bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+5022)*1+lsi)*1]), &(inteval->stack[((hsi*45+4734)*1+lsi)*1]), &(inteval->stack[((hsi*36+1169)*1+lsi)*1]), &(inteval->stack[((hsi*36+961)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__M010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*55+1088)*1+lsi)*1]), &(inteval->stack[((hsi*55+136)*1+lsi)*1]), &(inteval->stack[((hsi*55+544)*1+lsi)*1]), &(inteval->stack[((hsi*55+1033)*1+lsi)*1]));
HRRPart1bra0ket0l010p(inteval, &(inteval->stack[((hsi*135+1143)*1+lsi)*1]), &(inteval->stack[((hsi*55+1088)*1+lsi)*1]), &(inteval->stack[((hsi*45+4734)*1+lsi)*1]), &(inteval->stack[((hsi*45+816)*1+lsi)*1]),1);
HRRPart1bra0ket0k010d(inteval, &(inteval->stack[((hsi*216+2817)*1+lsi)*1]), &(inteval->stack[((hsi*135+1143)*1+lsi)*1]), &(inteval->stack[((hsi*108+5022)*1+lsi)*1]), &(inteval->stack[((hsi*108+3897)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__L100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+4734)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*45+463)*1+lsi)*1]), &(inteval->stack[((hsi*45+916)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1033)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]), &(inteval->stack[((hsi*36+508)*1+lsi)*1]), &(inteval->stack[((hsi*36+997)*1+lsi)*1]));
HRRPart1bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+5130)*1+lsi)*1]), &(inteval->stack[((hsi*45+4734)*1+lsi)*1]), &(inteval->stack[((hsi*36+1033)*1+lsi)*1]), &(inteval->stack[((hsi*36+961)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__M100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*55+916)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+408)*1+lsi)*1]), &(inteval->stack[((hsi*55+861)*1+lsi)*1]));
HRRPart1bra0ket0l100p(inteval, &(inteval->stack[((hsi*135+971)*1+lsi)*1]), &(inteval->stack[((hsi*55+916)*1+lsi)*1]), &(inteval->stack[((hsi*45+4734)*1+lsi)*1]), &(inteval->stack[((hsi*45+816)*1+lsi)*1]),1);
HRRPart1bra0ket0k100d(inteval, &(inteval->stack[((hsi*216+2601)*1+lsi)*1]), &(inteval->stack[((hsi*135+971)*1+lsi)*1]), &(inteval->stack[((hsi*108+5130)*1+lsi)*1]), &(inteval->stack[((hsi*108+3897)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+816)*1+lsi)*1]), &(inteval->stack[((hsi*45+735)*1+lsi)*1]), &(inteval->stack[((hsi*36+780)*1+lsi)*1]),1);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5238)*1+lsi)*1]), &(inteval->stack[((hsi*55+680)*1+lsi)*1]), &(inteval->stack[((hsi*45+735)*1+lsi)*1]),1);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*216+2385)*1+lsi)*1]), &(inteval->stack[((hsi*135+5238)*1+lsi)*1]), &(inteval->stack[((hsi*108+816)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+680)*1+lsi)*1]), &(inteval->stack[((hsi*45+599)*1+lsi)*1]), &(inteval->stack[((hsi*36+644)*1+lsi)*1]),1);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5373)*1+lsi)*1]), &(inteval->stack[((hsi*55+544)*1+lsi)*1]), &(inteval->stack[((hsi*45+599)*1+lsi)*1]),1);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*216+2169)*1+lsi)*1]), &(inteval->stack[((hsi*135+5373)*1+lsi)*1]), &(inteval->stack[((hsi*108+680)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+544)*1+lsi)*1]), &(inteval->stack[((hsi*45+463)*1+lsi)*1]), &(inteval->stack[((hsi*36+508)*1+lsi)*1]),1);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5508)*1+lsi)*1]), &(inteval->stack[((hsi*55+408)*1+lsi)*1]), &(inteval->stack[((hsi*45+463)*1+lsi)*1]),1);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1953)*1+lsi)*1]), &(inteval->stack[((hsi*135+5508)*1+lsi)*1]), &(inteval->stack[((hsi*108+544)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+408)*1+lsi)*1]), &(inteval->stack[((hsi*45+327)*1+lsi)*1]), &(inteval->stack[((hsi*36+372)*1+lsi)*1]),1);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5643)*1+lsi)*1]), &(inteval->stack[((hsi*55+272)*1+lsi)*1]), &(inteval->stack[((hsi*45+327)*1+lsi)*1]),1);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1737)*1+lsi)*1]), &(inteval->stack[((hsi*135+5643)*1+lsi)*1]), &(inteval->stack[((hsi*108+408)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+272)*1+lsi)*1]), &(inteval->stack[((hsi*45+191)*1+lsi)*1]), &(inteval->stack[((hsi*36+236)*1+lsi)*1]),1);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5778)*1+lsi)*1]), &(inteval->stack[((hsi*55+136)*1+lsi)*1]), &(inteval->stack[((hsi*45+191)*1+lsi)*1]),1);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1521)*1+lsi)*1]), &(inteval->stack[((hsi*135+5778)*1+lsi)*1]), &(inteval->stack[((hsi*108+272)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+136)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]),1);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5913)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]),1);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1305)*1+lsi)*1]), &(inteval->stack[((hsi*135+5913)*1+lsi)*1]), &(inteval->stack[((hsi*108+136)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*216+1305)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*216+1521)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*216+1737)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*216+1953)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*216+2169)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*216+2385)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*216+2601)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*216+2817)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*216+3033)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*216+3249)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*216+3465)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*216+3681)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
