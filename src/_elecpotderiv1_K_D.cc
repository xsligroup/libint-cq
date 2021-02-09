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
#include <HRRPart0bra0ket0kd001.h>
#include <HRRPart0bra0ket0kd010.h>
#include <HRRPart0bra0ket0kd100.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0kp001.h>
#include <HRRPart0bra0ket0kp010.h>
#include <HRRPart0bra0ket0kp100.h>
#include <HRRPart0bra0ket0k001d.h>
#include <HRRPart0bra0ket0k001p.h>
#include <HRRPart0bra0ket0k010d.h>
#include <HRRPart0bra0ket0k010p.h>
#include <HRRPart0bra0ket0k100d.h>
#include <HRRPart0bra0ket0k100p.h>
#include <HRRPart0bra0ket0lp001.h>
#include <HRRPart0bra0ket0lp010.h>
#include <HRRPart0bra0ket0lp100.h>
#include <HRRPart0bra0ket0l001p.h>
#include <HRRPart0bra0ket0l010p.h>
#include <HRRPart0bra0ket0l100p.h>
#include <_elecpotderiv1_K_D_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_K_D(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,897)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_K_D_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+2193)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+2301)*1+lsi)*1]), &(inteval->stack[((hsi*45+816)*1+lsi)*1]), &(inteval->stack[((hsi*36+861)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0lp001(inteval, &(inteval->stack[((hsi*135+2409)*1+lsi)*1]), &(inteval->stack[((hsi*55+761)*1+lsi)*1]), &(inteval->stack[((hsi*45+816)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0kd001(inteval, &(inteval->stack[((hsi*216+1977)*1+lsi)*1]), &(inteval->stack[((hsi*135+2409)*1+lsi)*1]), &(inteval->stack[((hsi*108+2301)*1+lsi)*1]), &(inteval->stack[((hsi*108+2193)*1+lsi)*1]),1);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+761)*1+lsi)*1]), &(inteval->stack[((hsi*45+680)*1+lsi)*1]), &(inteval->stack[((hsi*36+725)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0lp010(inteval, &(inteval->stack[((hsi*135+2544)*1+lsi)*1]), &(inteval->stack[((hsi*55+625)*1+lsi)*1]), &(inteval->stack[((hsi*45+680)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0kd010(inteval, &(inteval->stack[((hsi*216+1761)*1+lsi)*1]), &(inteval->stack[((hsi*135+2544)*1+lsi)*1]), &(inteval->stack[((hsi*108+761)*1+lsi)*1]), &(inteval->stack[((hsi*108+2193)*1+lsi)*1]),1);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+625)*1+lsi)*1]), &(inteval->stack[((hsi*45+544)*1+lsi)*1]), &(inteval->stack[((hsi*36+589)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0lp100(inteval, &(inteval->stack[((hsi*135+2679)*1+lsi)*1]), &(inteval->stack[((hsi*55+489)*1+lsi)*1]), &(inteval->stack[((hsi*45+544)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0kd100(inteval, &(inteval->stack[((hsi*216+1545)*1+lsi)*1]), &(inteval->stack[((hsi*135+2679)*1+lsi)*1]), &(inteval->stack[((hsi*108+625)*1+lsi)*1]), &(inteval->stack[((hsi*108+2193)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+489)*1+lsi)*1]), &(inteval->stack[((hsi*45+408)*1+lsi)*1]), &(inteval->stack[((hsi*36+453)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0l001p(inteval, &(inteval->stack[((hsi*135+2814)*1+lsi)*1]), &(inteval->stack[((hsi*55+353)*1+lsi)*1]), &(inteval->stack[((hsi*45+408)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0k001d(inteval, &(inteval->stack[((hsi*216+1329)*1+lsi)*1]), &(inteval->stack[((hsi*135+2814)*1+lsi)*1]), &(inteval->stack[((hsi*108+489)*1+lsi)*1]), &(inteval->stack[((hsi*108+2193)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+353)*1+lsi)*1]), &(inteval->stack[((hsi*45+272)*1+lsi)*1]), &(inteval->stack[((hsi*36+317)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0l010p(inteval, &(inteval->stack[((hsi*135+2949)*1+lsi)*1]), &(inteval->stack[((hsi*55+217)*1+lsi)*1]), &(inteval->stack[((hsi*45+272)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0k010d(inteval, &(inteval->stack[((hsi*216+1113)*1+lsi)*1]), &(inteval->stack[((hsi*135+2949)*1+lsi)*1]), &(inteval->stack[((hsi*108+353)*1+lsi)*1]), &(inteval->stack[((hsi*108+2193)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+217)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*36+145)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0l100p(inteval, &(inteval->stack[((hsi*135+3084)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0k100d(inteval, &(inteval->stack[((hsi*216+897)*1+lsi)*1]), &(inteval->stack[((hsi*135+3084)*1+lsi)*1]), &(inteval->stack[((hsi*108+217)*1+lsi)*1]), &(inteval->stack[((hsi*108+2193)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*216+897)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*216+1113)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*216+1329)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*216+1545)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*216+1761)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*216+1977)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
