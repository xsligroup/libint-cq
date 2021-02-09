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
#include <HRRPart0ket0bra0kd.h>
#include <HRRPart0ket0bra0kd001.h>
#include <HRRPart0ket0bra0kd010.h>
#include <HRRPart0ket0bra0kd100.h>
#include <HRRPart0ket0bra0kf.h>
#include <HRRPart0ket0bra0kf001.h>
#include <HRRPart0ket0bra0kf010.h>
#include <HRRPart0ket0bra0kf100.h>
#include <HRRPart0ket0bra0kg001.h>
#include <HRRPart0ket0bra0kg010.h>
#include <HRRPart0ket0bra0kg100.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0kp001.h>
#include <HRRPart0ket0bra0kp010.h>
#include <HRRPart0ket0bra0kp100.h>
#include <HRRPart0ket0bra0k001d.h>
#include <HRRPart0ket0bra0k001f.h>
#include <HRRPart0ket0bra0k001g.h>
#include <HRRPart0ket0bra0k001p.h>
#include <HRRPart0ket0bra0k010d.h>
#include <HRRPart0ket0bra0k010f.h>
#include <HRRPart0ket0bra0k010g.h>
#include <HRRPart0ket0bra0k010p.h>
#include <HRRPart0ket0bra0k100d.h>
#include <HRRPart0ket0bra0k100f.h>
#include <HRRPart0ket0bra0k100g.h>
#include <HRRPart0ket0bra0k100p.h>
#include <HRRPart0ket0bra0ld.h>
#include <HRRPart0ket0bra0ld001.h>
#include <HRRPart0ket0bra0ld010.h>
#include <HRRPart0ket0bra0ld100.h>
#include <HRRPart0ket0bra0lf001.h>
#include <HRRPart0ket0bra0lf010.h>
#include <HRRPart0ket0bra0lf100.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0lp001.h>
#include <HRRPart0ket0bra0lp010.h>
#include <HRRPart0ket0bra0lp100.h>
#include <HRRPart0ket0bra0l001d.h>
#include <HRRPart0ket0bra0l001f.h>
#include <HRRPart0ket0bra0l001p.h>
#include <HRRPart0ket0bra0l010d.h>
#include <HRRPart0ket0bra0l010f.h>
#include <HRRPart0ket0bra0l010p.h>
#include <HRRPart0ket0bra0l100d.h>
#include <HRRPart0ket0bra0l100f.h>
#include <HRRPart0ket0bra0l100p.h>
#include <HRRPart0ket0bra0md001.h>
#include <HRRPart0ket0bra0md010.h>
#include <HRRPart0ket0bra0md100.h>
#include <HRRPart0ket0bra0mp.h>
#include <HRRPart0ket0bra0mp001.h>
#include <HRRPart0ket0bra0mp010.h>
#include <HRRPart0ket0bra0mp100.h>
#include <HRRPart0ket0bra0m001d.h>
#include <HRRPart0ket0bra0m001p.h>
#include <HRRPart0ket0bra0m010d.h>
#include <HRRPart0ket0bra0m010p.h>
#include <HRRPart0ket0bra0m100d.h>
#include <HRRPart0ket0bra0m100p.h>
#include <HRRPart0ket0bra0psp001.h>
#include <HRRPart0ket0bra0psp010.h>
#include <HRRPart0ket0bra0psp100.h>
#include <HRRPart0ket0bra0ps001p.h>
#include <HRRPart0ket0bra0ps010p.h>
#include <HRRPart0ket0bra0ps100p.h>
#include <_elecpotderiv1_G_K_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_G_K(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1882)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_G_K_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+5122)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+5257)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5365)*1+lsi)*1]), &(inteval->stack[((hsi*135+5122)*1+lsi)*1]), &(inteval->stack[((hsi*108+5257)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+5581)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+5746)*1+lsi)*1]), &(inteval->stack[((hsi*165+5581)*1+lsi)*1]), &(inteval->stack[((hsi*135+5122)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+6016)*1+lsi)*1]), &(inteval->stack[((hsi*270+5746)*1+lsi)*1]), &(inteval->stack[((hsi*216+5365)*1+lsi)*1]),1);
HRRPart0ket0bra0l001p(inteval, &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*55+1746)*1+lsi)*1]), &(inteval->stack[((hsi*45+1801)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0ket0bra0m001p(inteval, &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*66+1680)*1+lsi)*1]), &(inteval->stack[((hsi*55+1746)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0ket0bra0l001d(inteval, &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*135+5122)*1+lsi)*1]),1);
HRRPart0ket0bra0k001p(inteval, &(inteval->stack[((hsi*108+6946)*1+lsi)*1]), &(inteval->stack[((hsi*45+1801)*1+lsi)*1]), &(inteval->stack[((hsi*36+1846)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0ket0bra0k001d(inteval, &(inteval->stack[((hsi*216+7054)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*108+6946)*1+lsi)*1]), &(inteval->stack[((hsi*108+5257)*1+lsi)*1]),1);
HRRPart0ket0bra0k001f(inteval, &(inteval->stack[((hsi*360+7270)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*216+7054)*1+lsi)*1]), &(inteval->stack[((hsi*216+5365)*1+lsi)*1]),1);
HRRPart0ket0bra0ps001p(inteval, &(inteval->stack[((hsi*198+6946)*1+lsi)*1]), &(inteval->stack[((hsi*78+1602)*1+lsi)*1]), &(inteval->stack[((hsi*66+1680)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0ket0bra0m001d(inteval, &(inteval->stack[((hsi*330+7630)*1+lsi)*1]), &(inteval->stack[((hsi*198+6946)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*165+5581)*1+lsi)*1]),1);
HRRPart0ket0bra0l001f(inteval, &(inteval->stack[((hsi*450+7960)*1+lsi)*1]), &(inteval->stack[((hsi*330+7630)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*270+5746)*1+lsi)*1]),1);
HRRPart0ket0bra0k001g(inteval, &(inteval->stack[((hsi*540+4582)*1+lsi)*1]), &(inteval->stack[((hsi*450+7960)*1+lsi)*1]), &(inteval->stack[((hsi*360+7270)*1+lsi)*1]), &(inteval->stack[((hsi*360+6016)*1+lsi)*1]),1);
HRRPart0ket0bra0l010p(inteval, &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*55+1466)*1+lsi)*1]), &(inteval->stack[((hsi*45+1521)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0ket0bra0m010p(inteval, &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*66+1400)*1+lsi)*1]), &(inteval->stack[((hsi*55+1466)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0ket0bra0l010d(inteval, &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*135+5122)*1+lsi)*1]),1);
HRRPart0ket0bra0k010p(inteval, &(inteval->stack[((hsi*108+7630)*1+lsi)*1]), &(inteval->stack[((hsi*45+1521)*1+lsi)*1]), &(inteval->stack[((hsi*36+1566)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0ket0bra0k010d(inteval, &(inteval->stack[((hsi*216+1466)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*108+7630)*1+lsi)*1]), &(inteval->stack[((hsi*108+5257)*1+lsi)*1]),1);
HRRPart0ket0bra0k010f(inteval, &(inteval->stack[((hsi*360+8410)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*216+1466)*1+lsi)*1]), &(inteval->stack[((hsi*216+5365)*1+lsi)*1]),1);
HRRPart0ket0bra0ps010p(inteval, &(inteval->stack[((hsi*198+1466)*1+lsi)*1]), &(inteval->stack[((hsi*78+1322)*1+lsi)*1]), &(inteval->stack[((hsi*66+1400)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0ket0bra0m010d(inteval, &(inteval->stack[((hsi*330+7630)*1+lsi)*1]), &(inteval->stack[((hsi*198+1466)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*165+5581)*1+lsi)*1]),1);
HRRPart0ket0bra0l010f(inteval, &(inteval->stack[((hsi*450+1322)*1+lsi)*1]), &(inteval->stack[((hsi*330+7630)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*270+5746)*1+lsi)*1]),1);
HRRPart0ket0bra0k010g(inteval, &(inteval->stack[((hsi*540+4042)*1+lsi)*1]), &(inteval->stack[((hsi*450+1322)*1+lsi)*1]), &(inteval->stack[((hsi*360+8410)*1+lsi)*1]), &(inteval->stack[((hsi*360+6016)*1+lsi)*1]),1);
HRRPart0ket0bra0l100p(inteval, &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*55+1186)*1+lsi)*1]), &(inteval->stack[((hsi*45+1241)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0ket0bra0m100p(inteval, &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*66+1120)*1+lsi)*1]), &(inteval->stack[((hsi*55+1186)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0ket0bra0l100d(inteval, &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*135+5122)*1+lsi)*1]),1);
HRRPart0ket0bra0k100p(inteval, &(inteval->stack[((hsi*108+7630)*1+lsi)*1]), &(inteval->stack[((hsi*45+1241)*1+lsi)*1]), &(inteval->stack[((hsi*36+1286)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0ket0bra0k100d(inteval, &(inteval->stack[((hsi*216+6946)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*108+7630)*1+lsi)*1]), &(inteval->stack[((hsi*108+5257)*1+lsi)*1]),1);
HRRPart0ket0bra0k100f(inteval, &(inteval->stack[((hsi*360+8770)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*216+6946)*1+lsi)*1]), &(inteval->stack[((hsi*216+5365)*1+lsi)*1]),1);
HRRPart0ket0bra0ps100p(inteval, &(inteval->stack[((hsi*198+7630)*1+lsi)*1]), &(inteval->stack[((hsi*78+1042)*1+lsi)*1]), &(inteval->stack[((hsi*66+1120)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0ket0bra0m100d(inteval, &(inteval->stack[((hsi*330+9130)*1+lsi)*1]), &(inteval->stack[((hsi*198+7630)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*165+5581)*1+lsi)*1]),1);
HRRPart0ket0bra0l100f(inteval, &(inteval->stack[((hsi*450+9460)*1+lsi)*1]), &(inteval->stack[((hsi*330+9130)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*270+5746)*1+lsi)*1]),1);
HRRPart0ket0bra0k100g(inteval, &(inteval->stack[((hsi*540+3502)*1+lsi)*1]), &(inteval->stack[((hsi*450+9460)*1+lsi)*1]), &(inteval->stack[((hsi*360+8770)*1+lsi)*1]), &(inteval->stack[((hsi*360+6016)*1+lsi)*1]),1);
HRRPart0ket0bra0lp001(inteval, &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*55+906)*1+lsi)*1]), &(inteval->stack[((hsi*45+961)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0ket0bra0mp001(inteval, &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*66+840)*1+lsi)*1]), &(inteval->stack[((hsi*55+906)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0ket0bra0ld001(inteval, &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*135+5122)*1+lsi)*1]),1);
HRRPart0ket0bra0kp001(inteval, &(inteval->stack[((hsi*108+9130)*1+lsi)*1]), &(inteval->stack[((hsi*45+961)*1+lsi)*1]), &(inteval->stack[((hsi*36+1006)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0ket0bra0kd001(inteval, &(inteval->stack[((hsi*216+906)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*108+9130)*1+lsi)*1]), &(inteval->stack[((hsi*108+5257)*1+lsi)*1]),1);
HRRPart0ket0bra0kf001(inteval, &(inteval->stack[((hsi*360+9910)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*216+906)*1+lsi)*1]), &(inteval->stack[((hsi*216+5365)*1+lsi)*1]),1);
HRRPart0ket0bra0psp001(inteval, &(inteval->stack[((hsi*198+906)*1+lsi)*1]), &(inteval->stack[((hsi*78+762)*1+lsi)*1]), &(inteval->stack[((hsi*66+840)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0ket0bra0md001(inteval, &(inteval->stack[((hsi*330+7630)*1+lsi)*1]), &(inteval->stack[((hsi*198+906)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*165+5581)*1+lsi)*1]),1);
HRRPart0ket0bra0lf001(inteval, &(inteval->stack[((hsi*450+762)*1+lsi)*1]), &(inteval->stack[((hsi*330+7630)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*270+5746)*1+lsi)*1]),1);
HRRPart0ket0bra0kg001(inteval, &(inteval->stack[((hsi*540+2962)*1+lsi)*1]), &(inteval->stack[((hsi*450+762)*1+lsi)*1]), &(inteval->stack[((hsi*360+9910)*1+lsi)*1]), &(inteval->stack[((hsi*360+6016)*1+lsi)*1]),1);
HRRPart0ket0bra0lp010(inteval, &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*55+626)*1+lsi)*1]), &(inteval->stack[((hsi*45+681)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0ket0bra0mp010(inteval, &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*66+560)*1+lsi)*1]), &(inteval->stack[((hsi*55+626)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0ket0bra0ld010(inteval, &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*135+5122)*1+lsi)*1]),1);
HRRPart0ket0bra0kp010(inteval, &(inteval->stack[((hsi*108+7630)*1+lsi)*1]), &(inteval->stack[((hsi*45+681)*1+lsi)*1]), &(inteval->stack[((hsi*36+726)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0ket0bra0kd010(inteval, &(inteval->stack[((hsi*216+9130)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*108+7630)*1+lsi)*1]), &(inteval->stack[((hsi*108+5257)*1+lsi)*1]),1);
HRRPart0ket0bra0kf010(inteval, &(inteval->stack[((hsi*360+10270)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*216+9130)*1+lsi)*1]), &(inteval->stack[((hsi*216+5365)*1+lsi)*1]),1);
HRRPart0ket0bra0psp010(inteval, &(inteval->stack[((hsi*198+7630)*1+lsi)*1]), &(inteval->stack[((hsi*78+482)*1+lsi)*1]), &(inteval->stack[((hsi*66+560)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0ket0bra0md010(inteval, &(inteval->stack[((hsi*330+9130)*1+lsi)*1]), &(inteval->stack[((hsi*198+7630)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*165+5581)*1+lsi)*1]),1);
HRRPart0ket0bra0lf010(inteval, &(inteval->stack[((hsi*450+10630)*1+lsi)*1]), &(inteval->stack[((hsi*330+9130)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*270+5746)*1+lsi)*1]),1);
HRRPart0ket0bra0kg010(inteval, &(inteval->stack[((hsi*540+2422)*1+lsi)*1]), &(inteval->stack[((hsi*450+10630)*1+lsi)*1]), &(inteval->stack[((hsi*360+10270)*1+lsi)*1]), &(inteval->stack[((hsi*360+6016)*1+lsi)*1]),1);
HRRPart0ket0bra0lp100(inteval, &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*55+210)*1+lsi)*1]), &(inteval->stack[((hsi*45+320)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0ket0bra0mp100(inteval, &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]), &(inteval->stack[((hsi*55+210)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0ket0bra0ld100(inteval, &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*135+5122)*1+lsi)*1]),1);
HRRPart0ket0bra0kp100(inteval, &(inteval->stack[((hsi*108+9130)*1+lsi)*1]), &(inteval->stack[((hsi*45+320)*1+lsi)*1]), &(inteval->stack[((hsi*36+410)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0ket0bra0kd100(inteval, &(inteval->stack[((hsi*216+210)*1+lsi)*1]), &(inteval->stack[((hsi*135+6376)*1+lsi)*1]), &(inteval->stack[((hsi*108+9130)*1+lsi)*1]), &(inteval->stack[((hsi*108+5257)*1+lsi)*1]),1);
HRRPart0ket0bra0kf100(inteval, &(inteval->stack[((hsi*360+11080)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*216+210)*1+lsi)*1]), &(inteval->stack[((hsi*216+5365)*1+lsi)*1]),1);
HRRPart0ket0bra0psp100(inteval, &(inteval->stack[((hsi*198+210)*1+lsi)*1]), &(inteval->stack[((hsi*78+0)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0ket0bra0md100(inteval, &(inteval->stack[((hsi*330+7630)*1+lsi)*1]), &(inteval->stack[((hsi*198+210)*1+lsi)*1]), &(inteval->stack[((hsi*165+6511)*1+lsi)*1]), &(inteval->stack[((hsi*165+5581)*1+lsi)*1]),1);
HRRPart0ket0bra0lf100(inteval, &(inteval->stack[((hsi*450+0)*1+lsi)*1]), &(inteval->stack[((hsi*330+7630)*1+lsi)*1]), &(inteval->stack[((hsi*270+6676)*1+lsi)*1]), &(inteval->stack[((hsi*270+5746)*1+lsi)*1]),1);
HRRPart0ket0bra0kg100(inteval, &(inteval->stack[((hsi*540+1882)*1+lsi)*1]), &(inteval->stack[((hsi*450+0)*1+lsi)*1]), &(inteval->stack[((hsi*360+11080)*1+lsi)*1]), &(inteval->stack[((hsi*360+6016)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*540+1882)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*540+2422)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*540+2962)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*540+3502)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*540+4042)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*540+4582)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
