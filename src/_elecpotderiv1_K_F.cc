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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kd001.h>
#include <HRRPart0bra0ket0kd010.h>
#include <HRRPart0bra0ket0kd100.h>
#include <HRRPart0bra0ket0kf001.h>
#include <HRRPart0bra0ket0kf010.h>
#include <HRRPart0bra0ket0kf100.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0kp001.h>
#include <HRRPart0bra0ket0kp010.h>
#include <HRRPart0bra0ket0kp100.h>
#include <HRRPart0bra0ket0k001d.h>
#include <HRRPart0bra0ket0k001f.h>
#include <HRRPart0bra0ket0k001p.h>
#include <HRRPart0bra0ket0k010d.h>
#include <HRRPart0bra0ket0k010f.h>
#include <HRRPart0bra0ket0k010p.h>
#include <HRRPart0bra0ket0k100d.h>
#include <HRRPart0bra0ket0k100f.h>
#include <HRRPart0bra0ket0k100p.h>
#include <HRRPart0bra0ket0ld001.h>
#include <HRRPart0bra0ket0ld010.h>
#include <HRRPart0bra0ket0ld100.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0lp001.h>
#include <HRRPart0bra0ket0lp010.h>
#include <HRRPart0bra0ket0lp100.h>
#include <HRRPart0bra0ket0l001d.h>
#include <HRRPart0bra0ket0l001p.h>
#include <HRRPart0bra0ket0l010d.h>
#include <HRRPart0bra0ket0l010p.h>
#include <HRRPart0bra0ket0l100d.h>
#include <HRRPart0bra0ket0l100p.h>
#include <HRRPart0bra0ket0mp001.h>
#include <HRRPart0bra0ket0mp010.h>
#include <HRRPart0bra0ket0mp100.h>
#include <HRRPart0bra0ket0m001p.h>
#include <HRRPart0bra0ket0m010p.h>
#include <HRRPart0bra0ket0m100p.h>
#include <_elecpotderiv1_K_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_K_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1348)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_K_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3508)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3616)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+3751)*1+lsi)*1]), &(inteval->stack[((hsi*135+3616)*1+lsi)*1]), &(inteval->stack[((hsi*108+3508)*1+lsi)*1]),1);
HRRPart0bra0ket0lp001(inteval, &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*55+1212)*1+lsi)*1]), &(inteval->stack[((hsi*45+1267)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*45+1267)*1+lsi)*1]), &(inteval->stack[((hsi*36+1312)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0kd001(inteval, &(inteval->stack[((hsi*216+4210)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*108+3508)*1+lsi)*1]),1);
HRRPart0bra0ket0mp001(inteval, &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*66+1146)*1+lsi)*1]), &(inteval->stack[((hsi*55+1212)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0ld001(inteval, &(inteval->stack[((hsi*270+4591)*1+lsi)*1]), &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*135+3616)*1+lsi)*1]),1);
HRRPart0bra0ket0kf001(inteval, &(inteval->stack[((hsi*360+3148)*1+lsi)*1]), &(inteval->stack[((hsi*270+4591)*1+lsi)*1]), &(inteval->stack[((hsi*216+4210)*1+lsi)*1]), &(inteval->stack[((hsi*216+3751)*1+lsi)*1]),1);
HRRPart0bra0ket0lp010(inteval, &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*55+1010)*1+lsi)*1]), &(inteval->stack[((hsi*45+1065)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*45+1065)*1+lsi)*1]), &(inteval->stack[((hsi*36+1110)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0kd010(inteval, &(inteval->stack[((hsi*216+1065)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*108+3508)*1+lsi)*1]),1);
HRRPart0bra0ket0mp010(inteval, &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*66+944)*1+lsi)*1]), &(inteval->stack[((hsi*55+1010)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0ld010(inteval, &(inteval->stack[((hsi*270+4861)*1+lsi)*1]), &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*135+3616)*1+lsi)*1]),1);
HRRPart0bra0ket0kf010(inteval, &(inteval->stack[((hsi*360+2788)*1+lsi)*1]), &(inteval->stack[((hsi*270+4861)*1+lsi)*1]), &(inteval->stack[((hsi*216+1065)*1+lsi)*1]), &(inteval->stack[((hsi*216+3751)*1+lsi)*1]),1);
HRRPart0bra0ket0lp100(inteval, &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*55+808)*1+lsi)*1]), &(inteval->stack[((hsi*45+863)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*45+863)*1+lsi)*1]), &(inteval->stack[((hsi*36+908)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0kd100(inteval, &(inteval->stack[((hsi*216+5131)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*108+3508)*1+lsi)*1]),1);
HRRPart0bra0ket0mp100(inteval, &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*66+742)*1+lsi)*1]), &(inteval->stack[((hsi*55+808)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0ld100(inteval, &(inteval->stack[((hsi*270+742)*1+lsi)*1]), &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*135+3616)*1+lsi)*1]),1);
HRRPart0bra0ket0kf100(inteval, &(inteval->stack[((hsi*360+2428)*1+lsi)*1]), &(inteval->stack[((hsi*270+742)*1+lsi)*1]), &(inteval->stack[((hsi*216+5131)*1+lsi)*1]), &(inteval->stack[((hsi*216+3751)*1+lsi)*1]),1);
HRRPart0bra0ket0l001p(inteval, &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*55+606)*1+lsi)*1]), &(inteval->stack[((hsi*45+661)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*45+661)*1+lsi)*1]), &(inteval->stack[((hsi*36+706)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0k001d(inteval, &(inteval->stack[((hsi*216+5347)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*108+3508)*1+lsi)*1]),1);
HRRPart0bra0ket0m001p(inteval, &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*66+540)*1+lsi)*1]), &(inteval->stack[((hsi*55+606)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l001d(inteval, &(inteval->stack[((hsi*270+5563)*1+lsi)*1]), &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*135+3616)*1+lsi)*1]),1);
HRRPart0bra0ket0k001f(inteval, &(inteval->stack[((hsi*360+2068)*1+lsi)*1]), &(inteval->stack[((hsi*270+5563)*1+lsi)*1]), &(inteval->stack[((hsi*216+5347)*1+lsi)*1]), &(inteval->stack[((hsi*216+3751)*1+lsi)*1]),1);
HRRPart0bra0ket0l010p(inteval, &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*55+404)*1+lsi)*1]), &(inteval->stack[((hsi*45+459)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*45+459)*1+lsi)*1]), &(inteval->stack[((hsi*36+504)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0k010d(inteval, &(inteval->stack[((hsi*216+459)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*108+3508)*1+lsi)*1]),1);
HRRPart0bra0ket0m010p(inteval, &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*66+338)*1+lsi)*1]), &(inteval->stack[((hsi*55+404)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l010d(inteval, &(inteval->stack[((hsi*270+5833)*1+lsi)*1]), &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*135+3616)*1+lsi)*1]),1);
HRRPart0bra0ket0k010f(inteval, &(inteval->stack[((hsi*360+1708)*1+lsi)*1]), &(inteval->stack[((hsi*270+5833)*1+lsi)*1]), &(inteval->stack[((hsi*216+459)*1+lsi)*1]), &(inteval->stack[((hsi*216+3751)*1+lsi)*1]),1);
HRRPart0bra0ket0l100p(inteval, &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*45+176)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*45+176)*1+lsi)*1]), &(inteval->stack[((hsi*36+266)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0k100d(inteval, &(inteval->stack[((hsi*216+176)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*108+4102)*1+lsi)*1]), &(inteval->stack[((hsi*108+3508)*1+lsi)*1]),1);
HRRPart0bra0ket0m100p(inteval, &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*66+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l100d(inteval, &(inteval->stack[((hsi*270+6103)*1+lsi)*1]), &(inteval->stack[((hsi*165+4426)*1+lsi)*1]), &(inteval->stack[((hsi*135+3967)*1+lsi)*1]), &(inteval->stack[((hsi*135+3616)*1+lsi)*1]),1);
HRRPart0bra0ket0k100f(inteval, &(inteval->stack[((hsi*360+1348)*1+lsi)*1]), &(inteval->stack[((hsi*270+6103)*1+lsi)*1]), &(inteval->stack[((hsi*216+176)*1+lsi)*1]), &(inteval->stack[((hsi*216+3751)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*360+1348)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*360+1708)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*360+2068)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*360+2428)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*360+2788)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*360+3148)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
