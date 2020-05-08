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
#include <HRRPart0ket0bra0kg.h>
#include <HRRPart0ket0bra0kg001.h>
#include <HRRPart0ket0bra0kg010.h>
#include <HRRPart0ket0bra0kg100.h>
#include <HRRPart0ket0bra0kh001.h>
#include <HRRPart0ket0bra0kh010.h>
#include <HRRPart0ket0bra0kh100.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0kp001.h>
#include <HRRPart0ket0bra0kp010.h>
#include <HRRPart0ket0bra0kp100.h>
#include <HRRPart0ket0bra0k001d.h>
#include <HRRPart0ket0bra0k001f.h>
#include <HRRPart0ket0bra0k001g.h>
#include <HRRPart0ket0bra0k001h.h>
#include <HRRPart0ket0bra0k001p.h>
#include <HRRPart0ket0bra0k010d.h>
#include <HRRPart0ket0bra0k010f.h>
#include <HRRPart0ket0bra0k010g.h>
#include <HRRPart0ket0bra0k010h.h>
#include <HRRPart0ket0bra0k010p.h>
#include <HRRPart0ket0bra0k100d.h>
#include <HRRPart0ket0bra0k100f.h>
#include <HRRPart0ket0bra0k100g.h>
#include <HRRPart0ket0bra0k100h.h>
#include <HRRPart0ket0bra0k100p.h>
#include <HRRPart0ket0bra0ld.h>
#include <HRRPart0ket0bra0ld001.h>
#include <HRRPart0ket0bra0ld010.h>
#include <HRRPart0ket0bra0ld100.h>
#include <HRRPart0ket0bra0lf.h>
#include <HRRPart0ket0bra0lf001.h>
#include <HRRPart0ket0bra0lf010.h>
#include <HRRPart0ket0bra0lf100.h>
#include <HRRPart0ket0bra0lg001.h>
#include <HRRPart0ket0bra0lg010.h>
#include <HRRPart0ket0bra0lg100.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0lp001.h>
#include <HRRPart0ket0bra0lp010.h>
#include <HRRPart0ket0bra0lp100.h>
#include <HRRPart0ket0bra0l001d.h>
#include <HRRPart0ket0bra0l001f.h>
#include <HRRPart0ket0bra0l001g.h>
#include <HRRPart0ket0bra0l001p.h>
#include <HRRPart0ket0bra0l010d.h>
#include <HRRPart0ket0bra0l010f.h>
#include <HRRPart0ket0bra0l010g.h>
#include <HRRPart0ket0bra0l010p.h>
#include <HRRPart0ket0bra0l100d.h>
#include <HRRPart0ket0bra0l100f.h>
#include <HRRPart0ket0bra0l100g.h>
#include <HRRPart0ket0bra0l100p.h>
#include <HRRPart0ket0bra0md.h>
#include <HRRPart0ket0bra0md001.h>
#include <HRRPart0ket0bra0md010.h>
#include <HRRPart0ket0bra0md100.h>
#include <HRRPart0ket0bra0mf001.h>
#include <HRRPart0ket0bra0mf010.h>
#include <HRRPart0ket0bra0mf100.h>
#include <HRRPart0ket0bra0mp.h>
#include <HRRPart0ket0bra0mp001.h>
#include <HRRPart0ket0bra0mp010.h>
#include <HRRPart0ket0bra0mp100.h>
#include <HRRPart0ket0bra0m001d.h>
#include <HRRPart0ket0bra0m001f.h>
#include <HRRPart0ket0bra0m001p.h>
#include <HRRPart0ket0bra0m010d.h>
#include <HRRPart0ket0bra0m010f.h>
#include <HRRPart0ket0bra0m010p.h>
#include <HRRPart0ket0bra0m100d.h>
#include <HRRPart0ket0bra0m100f.h>
#include <HRRPart0ket0bra0m100p.h>
#include <HRRPart0ket0bra0ppp001.h>
#include <HRRPart0ket0bra0ppp010.h>
#include <HRRPart0ket0bra0ppp100.h>
#include <HRRPart0ket0bra0pp001p.h>
#include <HRRPart0ket0bra0pp010p.h>
#include <HRRPart0ket0bra0pp100p.h>
#include <HRRPart0ket0bra0psd001.h>
#include <HRRPart0ket0bra0psd010.h>
#include <HRRPart0ket0bra0psd100.h>
#include <HRRPart0ket0bra0psp.h>
#include <HRRPart0ket0bra0psp001.h>
#include <HRRPart0ket0bra0psp010.h>
#include <HRRPart0ket0bra0psp100.h>
#include <HRRPart0ket0bra0ps001d.h>
#include <HRRPart0ket0bra0ps001p.h>
#include <HRRPart0ket0bra0ps010d.h>
#include <HRRPart0ket0bra0ps010p.h>
#include <HRRPart0ket0bra0ps100d.h>
#include <HRRPart0ket0bra0ps100p.h>
#include <_elecpotderiv1_H_K_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_H_K(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2506)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_H_K_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+7042)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+7177)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+7342)*1+lsi)*1]), &(inteval->stack[((hsi*165+7177)*1+lsi)*1]), &(inteval->stack[((hsi*135+7042)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+7612)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+7720)*1+lsi)*1]), &(inteval->stack[((hsi*135+7042)*1+lsi)*1]), &(inteval->stack[((hsi*108+7612)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+7936)*1+lsi)*1]), &(inteval->stack[((hsi*270+7342)*1+lsi)*1]), &(inteval->stack[((hsi*216+7720)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+8296)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+8494)*1+lsi)*1]), &(inteval->stack[((hsi*198+8296)*1+lsi)*1]), &(inteval->stack[((hsi*165+7177)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+8824)*1+lsi)*1]), &(inteval->stack[((hsi*330+8494)*1+lsi)*1]), &(inteval->stack[((hsi*270+7342)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+9274)*1+lsi)*1]), &(inteval->stack[((hsi*450+8824)*1+lsi)*1]), &(inteval->stack[((hsi*360+7936)*1+lsi)*1]),1);
HRRPart0ket0bra0l001p(inteval, &(inteval->stack[((hsi*135+9814)*1+lsi)*1]), &(inteval->stack[((hsi*55+2370)*1+lsi)*1]), &(inteval->stack[((hsi*45+2425)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0ket0bra0m001p(inteval, &(inteval->stack[((hsi*165+9949)*1+lsi)*1]), &(inteval->stack[((hsi*66+2304)*1+lsi)*1]), &(inteval->stack[((hsi*55+2370)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0ket0bra0l001d(inteval, &(inteval->stack[((hsi*270+10114)*1+lsi)*1]), &(inteval->stack[((hsi*165+9949)*1+lsi)*1]), &(inteval->stack[((hsi*135+9814)*1+lsi)*1]), &(inteval->stack[((hsi*135+7042)*1+lsi)*1]),1);
HRRPart0ket0bra0ps001p(inteval, &(inteval->stack[((hsi*198+10384)*1+lsi)*1]), &(inteval->stack[((hsi*78+2226)*1+lsi)*1]), &(inteval->stack[((hsi*66+2304)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0ket0bra0m001d(inteval, &(inteval->stack[((hsi*330+10582)*1+lsi)*1]), &(inteval->stack[((hsi*198+10384)*1+lsi)*1]), &(inteval->stack[((hsi*165+9949)*1+lsi)*1]), &(inteval->stack[((hsi*165+7177)*1+lsi)*1]),1);
HRRPart0ket0bra0l001f(inteval, &(inteval->stack[((hsi*450+10912)*1+lsi)*1]), &(inteval->stack[((hsi*330+10582)*1+lsi)*1]), &(inteval->stack[((hsi*270+10114)*1+lsi)*1]), &(inteval->stack[((hsi*270+7342)*1+lsi)*1]),1);
HRRPart0ket0bra0k001p(inteval, &(inteval->stack[((hsi*108+9949)*1+lsi)*1]), &(inteval->stack[((hsi*45+2425)*1+lsi)*1]), &(inteval->stack[((hsi*36+2470)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0ket0bra0k001d(inteval, &(inteval->stack[((hsi*216+11362)*1+lsi)*1]), &(inteval->stack[((hsi*135+9814)*1+lsi)*1]), &(inteval->stack[((hsi*108+9949)*1+lsi)*1]), &(inteval->stack[((hsi*108+7612)*1+lsi)*1]),1);
HRRPart0ket0bra0k001f(inteval, &(inteval->stack[((hsi*360+11578)*1+lsi)*1]), &(inteval->stack[((hsi*270+10114)*1+lsi)*1]), &(inteval->stack[((hsi*216+11362)*1+lsi)*1]), &(inteval->stack[((hsi*216+7720)*1+lsi)*1]),1);
HRRPart0ket0bra0k001g(inteval, &(inteval->stack[((hsi*540+9814)*1+lsi)*1]), &(inteval->stack[((hsi*450+10912)*1+lsi)*1]), &(inteval->stack[((hsi*360+11578)*1+lsi)*1]), &(inteval->stack[((hsi*360+7936)*1+lsi)*1]),1);
HRRPart0ket0bra0pp001p(inteval, &(inteval->stack[((hsi*234+11362)*1+lsi)*1]), &(inteval->stack[((hsi*91+2135)*1+lsi)*1]), &(inteval->stack[((hsi*78+2226)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0ket0bra0ps001d(inteval, &(inteval->stack[((hsi*396+11596)*1+lsi)*1]), &(inteval->stack[((hsi*234+11362)*1+lsi)*1]), &(inteval->stack[((hsi*198+10384)*1+lsi)*1]), &(inteval->stack[((hsi*198+8296)*1+lsi)*1]),1);
HRRPart0ket0bra0m001f(inteval, &(inteval->stack[((hsi*550+11992)*1+lsi)*1]), &(inteval->stack[((hsi*396+11596)*1+lsi)*1]), &(inteval->stack[((hsi*330+10582)*1+lsi)*1]), &(inteval->stack[((hsi*330+8494)*1+lsi)*1]),1);
HRRPart0ket0bra0l001g(inteval, &(inteval->stack[((hsi*675+12542)*1+lsi)*1]), &(inteval->stack[((hsi*550+11992)*1+lsi)*1]), &(inteval->stack[((hsi*450+10912)*1+lsi)*1]), &(inteval->stack[((hsi*450+8824)*1+lsi)*1]),1);
HRRPart0ket0bra0k001h(inteval, &(inteval->stack[((hsi*756+6286)*1+lsi)*1]), &(inteval->stack[((hsi*675+12542)*1+lsi)*1]), &(inteval->stack[((hsi*540+9814)*1+lsi)*1]), &(inteval->stack[((hsi*540+9274)*1+lsi)*1]),1);
HRRPart0ket0bra0l010p(inteval, &(inteval->stack[((hsi*135+10354)*1+lsi)*1]), &(inteval->stack[((hsi*55+1999)*1+lsi)*1]), &(inteval->stack[((hsi*45+2054)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0ket0bra0m010p(inteval, &(inteval->stack[((hsi*165+10489)*1+lsi)*1]), &(inteval->stack[((hsi*66+1933)*1+lsi)*1]), &(inteval->stack[((hsi*55+1999)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0ket0bra0l010d(inteval, &(inteval->stack[((hsi*270+10654)*1+lsi)*1]), &(inteval->stack[((hsi*165+10489)*1+lsi)*1]), &(inteval->stack[((hsi*135+10354)*1+lsi)*1]), &(inteval->stack[((hsi*135+7042)*1+lsi)*1]),1);
HRRPart0ket0bra0ps010p(inteval, &(inteval->stack[((hsi*198+10924)*1+lsi)*1]), &(inteval->stack[((hsi*78+1855)*1+lsi)*1]), &(inteval->stack[((hsi*66+1933)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0ket0bra0m010d(inteval, &(inteval->stack[((hsi*330+11122)*1+lsi)*1]), &(inteval->stack[((hsi*198+10924)*1+lsi)*1]), &(inteval->stack[((hsi*165+10489)*1+lsi)*1]), &(inteval->stack[((hsi*165+7177)*1+lsi)*1]),1);
HRRPart0ket0bra0l010f(inteval, &(inteval->stack[((hsi*450+11452)*1+lsi)*1]), &(inteval->stack[((hsi*330+11122)*1+lsi)*1]), &(inteval->stack[((hsi*270+10654)*1+lsi)*1]), &(inteval->stack[((hsi*270+7342)*1+lsi)*1]),1);
HRRPart0ket0bra0k010p(inteval, &(inteval->stack[((hsi*108+11902)*1+lsi)*1]), &(inteval->stack[((hsi*45+2054)*1+lsi)*1]), &(inteval->stack[((hsi*36+2099)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0ket0bra0k010d(inteval, &(inteval->stack[((hsi*216+1933)*1+lsi)*1]), &(inteval->stack[((hsi*135+10354)*1+lsi)*1]), &(inteval->stack[((hsi*108+11902)*1+lsi)*1]), &(inteval->stack[((hsi*108+7612)*1+lsi)*1]),1);
HRRPart0ket0bra0k010f(inteval, &(inteval->stack[((hsi*360+11902)*1+lsi)*1]), &(inteval->stack[((hsi*270+10654)*1+lsi)*1]), &(inteval->stack[((hsi*216+1933)*1+lsi)*1]), &(inteval->stack[((hsi*216+7720)*1+lsi)*1]),1);
HRRPart0ket0bra0k010g(inteval, &(inteval->stack[((hsi*540+1933)*1+lsi)*1]), &(inteval->stack[((hsi*450+11452)*1+lsi)*1]), &(inteval->stack[((hsi*360+11902)*1+lsi)*1]), &(inteval->stack[((hsi*360+7936)*1+lsi)*1]),1);
HRRPart0ket0bra0pp010p(inteval, &(inteval->stack[((hsi*234+11902)*1+lsi)*1]), &(inteval->stack[((hsi*91+1764)*1+lsi)*1]), &(inteval->stack[((hsi*78+1855)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0ket0bra0ps010d(inteval, &(inteval->stack[((hsi*396+10354)*1+lsi)*1]), &(inteval->stack[((hsi*234+11902)*1+lsi)*1]), &(inteval->stack[((hsi*198+10924)*1+lsi)*1]), &(inteval->stack[((hsi*198+8296)*1+lsi)*1]),1);
HRRPart0ket0bra0m010f(inteval, &(inteval->stack[((hsi*550+11902)*1+lsi)*1]), &(inteval->stack[((hsi*396+10354)*1+lsi)*1]), &(inteval->stack[((hsi*330+11122)*1+lsi)*1]), &(inteval->stack[((hsi*330+8494)*1+lsi)*1]),1);
HRRPart0ket0bra0l010g(inteval, &(inteval->stack[((hsi*675+10354)*1+lsi)*1]), &(inteval->stack[((hsi*550+11902)*1+lsi)*1]), &(inteval->stack[((hsi*450+11452)*1+lsi)*1]), &(inteval->stack[((hsi*450+8824)*1+lsi)*1]),1);
HRRPart0ket0bra0k010h(inteval, &(inteval->stack[((hsi*756+5530)*1+lsi)*1]), &(inteval->stack[((hsi*675+10354)*1+lsi)*1]), &(inteval->stack[((hsi*540+1933)*1+lsi)*1]), &(inteval->stack[((hsi*540+9274)*1+lsi)*1]),1);
HRRPart0ket0bra0l100p(inteval, &(inteval->stack[((hsi*135+11029)*1+lsi)*1]), &(inteval->stack[((hsi*55+1628)*1+lsi)*1]), &(inteval->stack[((hsi*45+1683)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0ket0bra0m100p(inteval, &(inteval->stack[((hsi*165+11164)*1+lsi)*1]), &(inteval->stack[((hsi*66+1562)*1+lsi)*1]), &(inteval->stack[((hsi*55+1628)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0ket0bra0l100d(inteval, &(inteval->stack[((hsi*270+11329)*1+lsi)*1]), &(inteval->stack[((hsi*165+11164)*1+lsi)*1]), &(inteval->stack[((hsi*135+11029)*1+lsi)*1]), &(inteval->stack[((hsi*135+7042)*1+lsi)*1]),1);
HRRPart0ket0bra0ps100p(inteval, &(inteval->stack[((hsi*198+11599)*1+lsi)*1]), &(inteval->stack[((hsi*78+1484)*1+lsi)*1]), &(inteval->stack[((hsi*66+1562)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0ket0bra0m100d(inteval, &(inteval->stack[((hsi*330+11797)*1+lsi)*1]), &(inteval->stack[((hsi*198+11599)*1+lsi)*1]), &(inteval->stack[((hsi*165+11164)*1+lsi)*1]), &(inteval->stack[((hsi*165+7177)*1+lsi)*1]),1);
HRRPart0ket0bra0l100f(inteval, &(inteval->stack[((hsi*450+13217)*1+lsi)*1]), &(inteval->stack[((hsi*330+11797)*1+lsi)*1]), &(inteval->stack[((hsi*270+11329)*1+lsi)*1]), &(inteval->stack[((hsi*270+7342)*1+lsi)*1]),1);
HRRPart0ket0bra0k100p(inteval, &(inteval->stack[((hsi*108+12127)*1+lsi)*1]), &(inteval->stack[((hsi*45+1683)*1+lsi)*1]), &(inteval->stack[((hsi*36+1728)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0ket0bra0k100d(inteval, &(inteval->stack[((hsi*216+1562)*1+lsi)*1]), &(inteval->stack[((hsi*135+11029)*1+lsi)*1]), &(inteval->stack[((hsi*108+12127)*1+lsi)*1]), &(inteval->stack[((hsi*108+7612)*1+lsi)*1]),1);
HRRPart0ket0bra0k100f(inteval, &(inteval->stack[((hsi*360+12127)*1+lsi)*1]), &(inteval->stack[((hsi*270+11329)*1+lsi)*1]), &(inteval->stack[((hsi*216+1562)*1+lsi)*1]), &(inteval->stack[((hsi*216+7720)*1+lsi)*1]),1);
HRRPart0ket0bra0k100g(inteval, &(inteval->stack[((hsi*540+11029)*1+lsi)*1]), &(inteval->stack[((hsi*450+13217)*1+lsi)*1]), &(inteval->stack[((hsi*360+12127)*1+lsi)*1]), &(inteval->stack[((hsi*360+7936)*1+lsi)*1]),1);
HRRPart0ket0bra0pp100p(inteval, &(inteval->stack[((hsi*234+12127)*1+lsi)*1]), &(inteval->stack[((hsi*91+1393)*1+lsi)*1]), &(inteval->stack[((hsi*78+1484)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0ket0bra0ps100d(inteval, &(inteval->stack[((hsi*396+1393)*1+lsi)*1]), &(inteval->stack[((hsi*234+12127)*1+lsi)*1]), &(inteval->stack[((hsi*198+11599)*1+lsi)*1]), &(inteval->stack[((hsi*198+8296)*1+lsi)*1]),1);
HRRPart0ket0bra0m100f(inteval, &(inteval->stack[((hsi*550+13667)*1+lsi)*1]), &(inteval->stack[((hsi*396+1393)*1+lsi)*1]), &(inteval->stack[((hsi*330+11797)*1+lsi)*1]), &(inteval->stack[((hsi*330+8494)*1+lsi)*1]),1);
HRRPart0ket0bra0l100g(inteval, &(inteval->stack[((hsi*675+11569)*1+lsi)*1]), &(inteval->stack[((hsi*550+13667)*1+lsi)*1]), &(inteval->stack[((hsi*450+13217)*1+lsi)*1]), &(inteval->stack[((hsi*450+8824)*1+lsi)*1]),1);
HRRPart0ket0bra0k100h(inteval, &(inteval->stack[((hsi*756+4774)*1+lsi)*1]), &(inteval->stack[((hsi*675+11569)*1+lsi)*1]), &(inteval->stack[((hsi*540+11029)*1+lsi)*1]), &(inteval->stack[((hsi*540+9274)*1+lsi)*1]),1);
HRRPart0ket0bra0lp001(inteval, &(inteval->stack[((hsi*135+1393)*1+lsi)*1]), &(inteval->stack[((hsi*55+1257)*1+lsi)*1]), &(inteval->stack[((hsi*45+1312)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0ket0bra0mp001(inteval, &(inteval->stack[((hsi*165+1528)*1+lsi)*1]), &(inteval->stack[((hsi*66+1191)*1+lsi)*1]), &(inteval->stack[((hsi*55+1257)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0ket0bra0ld001(inteval, &(inteval->stack[((hsi*270+12244)*1+lsi)*1]), &(inteval->stack[((hsi*165+1528)*1+lsi)*1]), &(inteval->stack[((hsi*135+1393)*1+lsi)*1]), &(inteval->stack[((hsi*135+7042)*1+lsi)*1]),1);
HRRPart0ket0bra0psp001(inteval, &(inteval->stack[((hsi*198+1693)*1+lsi)*1]), &(inteval->stack[((hsi*78+1113)*1+lsi)*1]), &(inteval->stack[((hsi*66+1191)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0ket0bra0md001(inteval, &(inteval->stack[((hsi*330+13217)*1+lsi)*1]), &(inteval->stack[((hsi*198+1693)*1+lsi)*1]), &(inteval->stack[((hsi*165+1528)*1+lsi)*1]), &(inteval->stack[((hsi*165+7177)*1+lsi)*1]),1);
HRRPart0ket0bra0lf001(inteval, &(inteval->stack[((hsi*450+13547)*1+lsi)*1]), &(inteval->stack[((hsi*330+13217)*1+lsi)*1]), &(inteval->stack[((hsi*270+12244)*1+lsi)*1]), &(inteval->stack[((hsi*270+7342)*1+lsi)*1]),1);
HRRPart0ket0bra0kp001(inteval, &(inteval->stack[((hsi*108+1528)*1+lsi)*1]), &(inteval->stack[((hsi*45+1312)*1+lsi)*1]), &(inteval->stack[((hsi*36+1357)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0ket0bra0kd001(inteval, &(inteval->stack[((hsi*216+13997)*1+lsi)*1]), &(inteval->stack[((hsi*135+1393)*1+lsi)*1]), &(inteval->stack[((hsi*108+1528)*1+lsi)*1]), &(inteval->stack[((hsi*108+7612)*1+lsi)*1]),1);
HRRPart0ket0bra0kf001(inteval, &(inteval->stack[((hsi*360+1191)*1+lsi)*1]), &(inteval->stack[((hsi*270+12244)*1+lsi)*1]), &(inteval->stack[((hsi*216+13997)*1+lsi)*1]), &(inteval->stack[((hsi*216+7720)*1+lsi)*1]),1);
HRRPart0ket0bra0kg001(inteval, &(inteval->stack[((hsi*540+13997)*1+lsi)*1]), &(inteval->stack[((hsi*450+13547)*1+lsi)*1]), &(inteval->stack[((hsi*360+1191)*1+lsi)*1]), &(inteval->stack[((hsi*360+7936)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp001(inteval, &(inteval->stack[((hsi*234+1191)*1+lsi)*1]), &(inteval->stack[((hsi*91+1022)*1+lsi)*1]), &(inteval->stack[((hsi*78+1113)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0ket0bra0psd001(inteval, &(inteval->stack[((hsi*396+14537)*1+lsi)*1]), &(inteval->stack[((hsi*234+1191)*1+lsi)*1]), &(inteval->stack[((hsi*198+1693)*1+lsi)*1]), &(inteval->stack[((hsi*198+8296)*1+lsi)*1]),1);
HRRPart0ket0bra0mf001(inteval, &(inteval->stack[((hsi*550+1022)*1+lsi)*1]), &(inteval->stack[((hsi*396+14537)*1+lsi)*1]), &(inteval->stack[((hsi*330+13217)*1+lsi)*1]), &(inteval->stack[((hsi*330+8494)*1+lsi)*1]),1);
HRRPart0ket0bra0lg001(inteval, &(inteval->stack[((hsi*675+14537)*1+lsi)*1]), &(inteval->stack[((hsi*550+1022)*1+lsi)*1]), &(inteval->stack[((hsi*450+13547)*1+lsi)*1]), &(inteval->stack[((hsi*450+8824)*1+lsi)*1]),1);
HRRPart0ket0bra0kh001(inteval, &(inteval->stack[((hsi*756+4018)*1+lsi)*1]), &(inteval->stack[((hsi*675+14537)*1+lsi)*1]), &(inteval->stack[((hsi*540+13997)*1+lsi)*1]), &(inteval->stack[((hsi*540+9274)*1+lsi)*1]),1);
HRRPart0ket0bra0lp010(inteval, &(inteval->stack[((hsi*135+1022)*1+lsi)*1]), &(inteval->stack[((hsi*55+886)*1+lsi)*1]), &(inteval->stack[((hsi*45+941)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0ket0bra0mp010(inteval, &(inteval->stack[((hsi*165+13217)*1+lsi)*1]), &(inteval->stack[((hsi*66+820)*1+lsi)*1]), &(inteval->stack[((hsi*55+886)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0ket0bra0ld010(inteval, &(inteval->stack[((hsi*270+1157)*1+lsi)*1]), &(inteval->stack[((hsi*165+13217)*1+lsi)*1]), &(inteval->stack[((hsi*135+1022)*1+lsi)*1]), &(inteval->stack[((hsi*135+7042)*1+lsi)*1]),1);
HRRPart0ket0bra0psp010(inteval, &(inteval->stack[((hsi*198+13382)*1+lsi)*1]), &(inteval->stack[((hsi*78+742)*1+lsi)*1]), &(inteval->stack[((hsi*66+820)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0ket0bra0md010(inteval, &(inteval->stack[((hsi*330+1427)*1+lsi)*1]), &(inteval->stack[((hsi*198+13382)*1+lsi)*1]), &(inteval->stack[((hsi*165+13217)*1+lsi)*1]), &(inteval->stack[((hsi*165+7177)*1+lsi)*1]),1);
HRRPart0ket0bra0lf010(inteval, &(inteval->stack[((hsi*450+15212)*1+lsi)*1]), &(inteval->stack[((hsi*330+1427)*1+lsi)*1]), &(inteval->stack[((hsi*270+1157)*1+lsi)*1]), &(inteval->stack[((hsi*270+7342)*1+lsi)*1]),1);
HRRPart0ket0bra0kp010(inteval, &(inteval->stack[((hsi*108+13580)*1+lsi)*1]), &(inteval->stack[((hsi*45+941)*1+lsi)*1]), &(inteval->stack[((hsi*36+986)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0ket0bra0kd010(inteval, &(inteval->stack[((hsi*216+13688)*1+lsi)*1]), &(inteval->stack[((hsi*135+1022)*1+lsi)*1]), &(inteval->stack[((hsi*108+13580)*1+lsi)*1]), &(inteval->stack[((hsi*108+7612)*1+lsi)*1]),1);
HRRPart0ket0bra0kf010(inteval, &(inteval->stack[((hsi*360+15662)*1+lsi)*1]), &(inteval->stack[((hsi*270+1157)*1+lsi)*1]), &(inteval->stack[((hsi*216+13688)*1+lsi)*1]), &(inteval->stack[((hsi*216+7720)*1+lsi)*1]),1);
HRRPart0ket0bra0kg010(inteval, &(inteval->stack[((hsi*540+820)*1+lsi)*1]), &(inteval->stack[((hsi*450+15212)*1+lsi)*1]), &(inteval->stack[((hsi*360+15662)*1+lsi)*1]), &(inteval->stack[((hsi*360+7936)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp010(inteval, &(inteval->stack[((hsi*234+13580)*1+lsi)*1]), &(inteval->stack[((hsi*91+651)*1+lsi)*1]), &(inteval->stack[((hsi*78+742)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0ket0bra0psd010(inteval, &(inteval->stack[((hsi*396+15662)*1+lsi)*1]), &(inteval->stack[((hsi*234+13580)*1+lsi)*1]), &(inteval->stack[((hsi*198+13382)*1+lsi)*1]), &(inteval->stack[((hsi*198+8296)*1+lsi)*1]),1);
HRRPart0ket0bra0mf010(inteval, &(inteval->stack[((hsi*550+13217)*1+lsi)*1]), &(inteval->stack[((hsi*396+15662)*1+lsi)*1]), &(inteval->stack[((hsi*330+1427)*1+lsi)*1]), &(inteval->stack[((hsi*330+8494)*1+lsi)*1]),1);
HRRPart0ket0bra0lg010(inteval, &(inteval->stack[((hsi*675+15662)*1+lsi)*1]), &(inteval->stack[((hsi*550+13217)*1+lsi)*1]), &(inteval->stack[((hsi*450+15212)*1+lsi)*1]), &(inteval->stack[((hsi*450+8824)*1+lsi)*1]),1);
HRRPart0ket0bra0kh010(inteval, &(inteval->stack[((hsi*756+3262)*1+lsi)*1]), &(inteval->stack[((hsi*675+15662)*1+lsi)*1]), &(inteval->stack[((hsi*540+820)*1+lsi)*1]), &(inteval->stack[((hsi*540+9274)*1+lsi)*1]),1);
HRRPart0ket0bra0lp100(inteval, &(inteval->stack[((hsi*135+13217)*1+lsi)*1]), &(inteval->stack[((hsi*55+379)*1+lsi)*1]), &(inteval->stack[((hsi*45+489)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0ket0bra0mp100(inteval, &(inteval->stack[((hsi*165+13352)*1+lsi)*1]), &(inteval->stack[((hsi*66+247)*1+lsi)*1]), &(inteval->stack[((hsi*55+379)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0ket0bra0ld100(inteval, &(inteval->stack[((hsi*270+1360)*1+lsi)*1]), &(inteval->stack[((hsi*165+13352)*1+lsi)*1]), &(inteval->stack[((hsi*135+13217)*1+lsi)*1]), &(inteval->stack[((hsi*135+7042)*1+lsi)*1]),1);
HRRPart0ket0bra0psp100(inteval, &(inteval->stack[((hsi*198+13517)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]), &(inteval->stack[((hsi*66+247)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0ket0bra0md100(inteval, &(inteval->stack[((hsi*330+15212)*1+lsi)*1]), &(inteval->stack[((hsi*198+13517)*1+lsi)*1]), &(inteval->stack[((hsi*165+13352)*1+lsi)*1]), &(inteval->stack[((hsi*165+7177)*1+lsi)*1]),1);
HRRPart0ket0bra0lf100(inteval, &(inteval->stack[((hsi*450+16337)*1+lsi)*1]), &(inteval->stack[((hsi*330+15212)*1+lsi)*1]), &(inteval->stack[((hsi*270+1360)*1+lsi)*1]), &(inteval->stack[((hsi*270+7342)*1+lsi)*1]),1);
HRRPart0ket0bra0kp100(inteval, &(inteval->stack[((hsi*108+7042)*1+lsi)*1]), &(inteval->stack[((hsi*45+489)*1+lsi)*1]), &(inteval->stack[((hsi*36+579)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0ket0bra0kd100(inteval, &(inteval->stack[((hsi*216+247)*1+lsi)*1]), &(inteval->stack[((hsi*135+13217)*1+lsi)*1]), &(inteval->stack[((hsi*108+7042)*1+lsi)*1]), &(inteval->stack[((hsi*108+7612)*1+lsi)*1]),1);
HRRPart0ket0bra0kf100(inteval, &(inteval->stack[((hsi*360+7042)*1+lsi)*1]), &(inteval->stack[((hsi*270+1360)*1+lsi)*1]), &(inteval->stack[((hsi*216+247)*1+lsi)*1]), &(inteval->stack[((hsi*216+7720)*1+lsi)*1]),1);
HRRPart0ket0bra0kg100(inteval, &(inteval->stack[((hsi*540+1360)*1+lsi)*1]), &(inteval->stack[((hsi*450+16337)*1+lsi)*1]), &(inteval->stack[((hsi*360+7042)*1+lsi)*1]), &(inteval->stack[((hsi*360+7936)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp100(inteval, &(inteval->stack[((hsi*234+7042)*1+lsi)*1]), &(inteval->stack[((hsi*91+0)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0ket0bra0psd100(inteval, &(inteval->stack[((hsi*396+7276)*1+lsi)*1]), &(inteval->stack[((hsi*234+7042)*1+lsi)*1]), &(inteval->stack[((hsi*198+13517)*1+lsi)*1]), &(inteval->stack[((hsi*198+8296)*1+lsi)*1]),1);
HRRPart0ket0bra0mf100(inteval, &(inteval->stack[((hsi*550+7672)*1+lsi)*1]), &(inteval->stack[((hsi*396+7276)*1+lsi)*1]), &(inteval->stack[((hsi*330+15212)*1+lsi)*1]), &(inteval->stack[((hsi*330+8494)*1+lsi)*1]),1);
HRRPart0ket0bra0lg100(inteval, &(inteval->stack[((hsi*675+0)*1+lsi)*1]), &(inteval->stack[((hsi*550+7672)*1+lsi)*1]), &(inteval->stack[((hsi*450+16337)*1+lsi)*1]), &(inteval->stack[((hsi*450+8824)*1+lsi)*1]),1);
HRRPart0ket0bra0kh100(inteval, &(inteval->stack[((hsi*756+2506)*1+lsi)*1]), &(inteval->stack[((hsi*675+0)*1+lsi)*1]), &(inteval->stack[((hsi*540+1360)*1+lsi)*1]), &(inteval->stack[((hsi*540+9274)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*756+2506)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*756+3262)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*756+4018)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*756+4774)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*756+5530)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*756+6286)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
