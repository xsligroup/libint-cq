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
#include <HRRPart0ket0bra0kh.h>
#include <HRRPart0ket0bra0kh001.h>
#include <HRRPart0ket0bra0kh010.h>
#include <HRRPart0ket0bra0kh100.h>
#include <HRRPart0ket0bra0ki001.h>
#include <HRRPart0ket0bra0ki010.h>
#include <HRRPart0ket0bra0ki100.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0kp001.h>
#include <HRRPart0ket0bra0kp010.h>
#include <HRRPart0ket0bra0kp100.h>
#include <HRRPart0ket0bra0k001d.h>
#include <HRRPart0ket0bra0k001f.h>
#include <HRRPart0ket0bra0k001g.h>
#include <HRRPart0ket0bra0k001h.h>
#include <HRRPart0ket0bra0k001i.h>
#include <HRRPart0ket0bra0k001p.h>
#include <HRRPart0ket0bra0k010d.h>
#include <HRRPart0ket0bra0k010f.h>
#include <HRRPart0ket0bra0k010g.h>
#include <HRRPart0ket0bra0k010h.h>
#include <HRRPart0ket0bra0k010i.h>
#include <HRRPart0ket0bra0k010p.h>
#include <HRRPart0ket0bra0k100d.h>
#include <HRRPart0ket0bra0k100f.h>
#include <HRRPart0ket0bra0k100g.h>
#include <HRRPart0ket0bra0k100h.h>
#include <HRRPart0ket0bra0k100i.h>
#include <HRRPart0ket0bra0k100p.h>
#include <HRRPart0ket0bra0ld.h>
#include <HRRPart0ket0bra0ld001.h>
#include <HRRPart0ket0bra0ld010.h>
#include <HRRPart0ket0bra0ld100.h>
#include <HRRPart0ket0bra0lf.h>
#include <HRRPart0ket0bra0lf001.h>
#include <HRRPart0ket0bra0lf010.h>
#include <HRRPart0ket0bra0lf100.h>
#include <HRRPart0ket0bra0lg.h>
#include <HRRPart0ket0bra0lg001.h>
#include <HRRPart0ket0bra0lg010.h>
#include <HRRPart0ket0bra0lg100.h>
#include <HRRPart0ket0bra0lh001.h>
#include <HRRPart0ket0bra0lh010.h>
#include <HRRPart0ket0bra0lh100.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0lp001.h>
#include <HRRPart0ket0bra0lp010.h>
#include <HRRPart0ket0bra0lp100.h>
#include <HRRPart0ket0bra0l001d.h>
#include <HRRPart0ket0bra0l001f.h>
#include <HRRPart0ket0bra0l001g.h>
#include <HRRPart0ket0bra0l001h.h>
#include <HRRPart0ket0bra0l001p.h>
#include <HRRPart0ket0bra0l010d.h>
#include <HRRPart0ket0bra0l010f.h>
#include <HRRPart0ket0bra0l010g.h>
#include <HRRPart0ket0bra0l010h.h>
#include <HRRPart0ket0bra0l010p.h>
#include <HRRPart0ket0bra0l100d.h>
#include <HRRPart0ket0bra0l100f.h>
#include <HRRPart0ket0bra0l100g.h>
#include <HRRPart0ket0bra0l100h.h>
#include <HRRPart0ket0bra0l100p.h>
#include <HRRPart0ket0bra0md.h>
#include <HRRPart0ket0bra0md001.h>
#include <HRRPart0ket0bra0md010.h>
#include <HRRPart0ket0bra0md100.h>
#include <HRRPart0ket0bra0mf.h>
#include <HRRPart0ket0bra0mf001.h>
#include <HRRPart0ket0bra0mf010.h>
#include <HRRPart0ket0bra0mf100.h>
#include <HRRPart0ket0bra0mg001.h>
#include <HRRPart0ket0bra0mg010.h>
#include <HRRPart0ket0bra0mg100.h>
#include <HRRPart0ket0bra0mp.h>
#include <HRRPart0ket0bra0mp001.h>
#include <HRRPart0ket0bra0mp010.h>
#include <HRRPart0ket0bra0mp100.h>
#include <HRRPart0ket0bra0m001d.h>
#include <HRRPart0ket0bra0m001f.h>
#include <HRRPart0ket0bra0m001g.h>
#include <HRRPart0ket0bra0m001p.h>
#include <HRRPart0ket0bra0m010d.h>
#include <HRRPart0ket0bra0m010f.h>
#include <HRRPart0ket0bra0m010g.h>
#include <HRRPart0ket0bra0m010p.h>
#include <HRRPart0ket0bra0m100d.h>
#include <HRRPart0ket0bra0m100f.h>
#include <HRRPart0ket0bra0m100g.h>
#include <HRRPart0ket0bra0m100p.h>
#include <HRRPart0ket0bra0pdp001.h>
#include <HRRPart0ket0bra0pdp010.h>
#include <HRRPart0ket0bra0pdp100.h>
#include <HRRPart0ket0bra0pd001p.h>
#include <HRRPart0ket0bra0pd010p.h>
#include <HRRPart0ket0bra0pd100p.h>
#include <HRRPart0ket0bra0ppd001.h>
#include <HRRPart0ket0bra0ppd010.h>
#include <HRRPart0ket0bra0ppd100.h>
#include <HRRPart0ket0bra0ppp.h>
#include <HRRPart0ket0bra0ppp001.h>
#include <HRRPart0ket0bra0ppp010.h>
#include <HRRPart0ket0bra0ppp100.h>
#include <HRRPart0ket0bra0pp001d.h>
#include <HRRPart0ket0bra0pp001p.h>
#include <HRRPart0ket0bra0pp010d.h>
#include <HRRPart0ket0bra0pp010p.h>
#include <HRRPart0ket0bra0pp100d.h>
#include <HRRPart0ket0bra0pp100p.h>
#include <HRRPart0ket0bra0psd.h>
#include <HRRPart0ket0bra0psd001.h>
#include <HRRPart0ket0bra0psd010.h>
#include <HRRPart0ket0bra0psd100.h>
#include <HRRPart0ket0bra0psf001.h>
#include <HRRPart0ket0bra0psf010.h>
#include <HRRPart0ket0bra0psf100.h>
#include <HRRPart0ket0bra0psp.h>
#include <HRRPart0ket0bra0psp001.h>
#include <HRRPart0ket0bra0psp010.h>
#include <HRRPart0ket0bra0psp100.h>
#include <HRRPart0ket0bra0ps001d.h>
#include <HRRPart0ket0bra0ps001f.h>
#include <HRRPart0ket0bra0ps001p.h>
#include <HRRPart0ket0bra0ps010d.h>
#include <HRRPart0ket0bra0ps010f.h>
#include <HRRPart0ket0bra0ps010p.h>
#include <HRRPart0ket0bra0ps100d.h>
#include <HRRPart0ket0bra0ps100f.h>
#include <HRRPart0ket0bra0ps100p.h>
#include <_elecpotderiv1_I_K_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_I_K(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3227)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_I_K_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9275)*1+lsi)*1]), &(inteval->stack[((hsi*55+630)*1+lsi)*1]), &(inteval->stack[((hsi*45+730)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+9410)*1+lsi)*1]), &(inteval->stack[((hsi*66+509)*1+lsi)*1]), &(inteval->stack[((hsi*55+630)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+9575)*1+lsi)*1]), &(inteval->stack[((hsi*165+9410)*1+lsi)*1]), &(inteval->stack[((hsi*135+9275)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+9845)*1+lsi)*1]), &(inteval->stack[((hsi*78+365)*1+lsi)*1]), &(inteval->stack[((hsi*66+509)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+10043)*1+lsi)*1]), &(inteval->stack[((hsi*198+9845)*1+lsi)*1]), &(inteval->stack[((hsi*165+9410)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+10373)*1+lsi)*1]), &(inteval->stack[((hsi*330+10043)*1+lsi)*1]), &(inteval->stack[((hsi*270+9575)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+10823)*1+lsi)*1]), &(inteval->stack[((hsi*45+730)*1+lsi)*1]), &(inteval->stack[((hsi*36+811)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+10931)*1+lsi)*1]), &(inteval->stack[((hsi*135+9275)*1+lsi)*1]), &(inteval->stack[((hsi*108+10823)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+11147)*1+lsi)*1]), &(inteval->stack[((hsi*270+9575)*1+lsi)*1]), &(inteval->stack[((hsi*216+10931)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+11507)*1+lsi)*1]), &(inteval->stack[((hsi*450+10373)*1+lsi)*1]), &(inteval->stack[((hsi*360+11147)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+12047)*1+lsi)*1]), &(inteval->stack[((hsi*91+196)*1+lsi)*1]), &(inteval->stack[((hsi*78+365)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+12281)*1+lsi)*1]), &(inteval->stack[((hsi*234+12047)*1+lsi)*1]), &(inteval->stack[((hsi*198+9845)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+12677)*1+lsi)*1]), &(inteval->stack[((hsi*396+12281)*1+lsi)*1]), &(inteval->stack[((hsi*330+10043)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+13227)*1+lsi)*1]), &(inteval->stack[((hsi*550+12677)*1+lsi)*1]), &(inteval->stack[((hsi*450+10373)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+13902)*1+lsi)*1]), &(inteval->stack[((hsi*675+13227)*1+lsi)*1]), &(inteval->stack[((hsi*540+11507)*1+lsi)*1]),1);
HRRPart0ket0bra0l001p(inteval, &(inteval->stack[((hsi*135+14658)*1+lsi)*1]), &(inteval->stack[((hsi*55+3091)*1+lsi)*1]), &(inteval->stack[((hsi*45+3146)*1+lsi)*1]), &(inteval->stack[((hsi*45+730)*1+lsi)*1]),1);
HRRPart0ket0bra0m001p(inteval, &(inteval->stack[((hsi*165+14793)*1+lsi)*1]), &(inteval->stack[((hsi*66+3025)*1+lsi)*1]), &(inteval->stack[((hsi*55+3091)*1+lsi)*1]), &(inteval->stack[((hsi*55+630)*1+lsi)*1]),1);
HRRPart0ket0bra0l001d(inteval, &(inteval->stack[((hsi*270+14958)*1+lsi)*1]), &(inteval->stack[((hsi*165+14793)*1+lsi)*1]), &(inteval->stack[((hsi*135+14658)*1+lsi)*1]), &(inteval->stack[((hsi*135+9275)*1+lsi)*1]),1);
HRRPart0ket0bra0ps001p(inteval, &(inteval->stack[((hsi*198+15228)*1+lsi)*1]), &(inteval->stack[((hsi*78+2947)*1+lsi)*1]), &(inteval->stack[((hsi*66+3025)*1+lsi)*1]), &(inteval->stack[((hsi*66+509)*1+lsi)*1]),1);
HRRPart0ket0bra0m001d(inteval, &(inteval->stack[((hsi*330+15426)*1+lsi)*1]), &(inteval->stack[((hsi*198+15228)*1+lsi)*1]), &(inteval->stack[((hsi*165+14793)*1+lsi)*1]), &(inteval->stack[((hsi*165+9410)*1+lsi)*1]),1);
HRRPart0ket0bra0l001f(inteval, &(inteval->stack[((hsi*450+15756)*1+lsi)*1]), &(inteval->stack[((hsi*330+15426)*1+lsi)*1]), &(inteval->stack[((hsi*270+14958)*1+lsi)*1]), &(inteval->stack[((hsi*270+9575)*1+lsi)*1]),1);
HRRPart0ket0bra0pp001p(inteval, &(inteval->stack[((hsi*234+16206)*1+lsi)*1]), &(inteval->stack[((hsi*91+2856)*1+lsi)*1]), &(inteval->stack[((hsi*78+2947)*1+lsi)*1]), &(inteval->stack[((hsi*78+365)*1+lsi)*1]),1);
HRRPart0ket0bra0ps001d(inteval, &(inteval->stack[((hsi*396+16440)*1+lsi)*1]), &(inteval->stack[((hsi*234+16206)*1+lsi)*1]), &(inteval->stack[((hsi*198+15228)*1+lsi)*1]), &(inteval->stack[((hsi*198+9845)*1+lsi)*1]),1);
HRRPart0ket0bra0m001f(inteval, &(inteval->stack[((hsi*550+16836)*1+lsi)*1]), &(inteval->stack[((hsi*396+16440)*1+lsi)*1]), &(inteval->stack[((hsi*330+15426)*1+lsi)*1]), &(inteval->stack[((hsi*330+10043)*1+lsi)*1]),1);
HRRPart0ket0bra0l001g(inteval, &(inteval->stack[((hsi*675+17386)*1+lsi)*1]), &(inteval->stack[((hsi*550+16836)*1+lsi)*1]), &(inteval->stack[((hsi*450+15756)*1+lsi)*1]), &(inteval->stack[((hsi*450+10373)*1+lsi)*1]),1);
HRRPart0ket0bra0k001p(inteval, &(inteval->stack[((hsi*108+15228)*1+lsi)*1]), &(inteval->stack[((hsi*45+3146)*1+lsi)*1]), &(inteval->stack[((hsi*36+3191)*1+lsi)*1]), &(inteval->stack[((hsi*36+811)*1+lsi)*1]),1);
HRRPart0ket0bra0k001d(inteval, &(inteval->stack[((hsi*216+15336)*1+lsi)*1]), &(inteval->stack[((hsi*135+14658)*1+lsi)*1]), &(inteval->stack[((hsi*108+15228)*1+lsi)*1]), &(inteval->stack[((hsi*108+10823)*1+lsi)*1]),1);
HRRPart0ket0bra0k001f(inteval, &(inteval->stack[((hsi*360+18061)*1+lsi)*1]), &(inteval->stack[((hsi*270+14958)*1+lsi)*1]), &(inteval->stack[((hsi*216+15336)*1+lsi)*1]), &(inteval->stack[((hsi*216+10931)*1+lsi)*1]),1);
HRRPart0ket0bra0k001g(inteval, &(inteval->stack[((hsi*540+14658)*1+lsi)*1]), &(inteval->stack[((hsi*450+15756)*1+lsi)*1]), &(inteval->stack[((hsi*360+18061)*1+lsi)*1]), &(inteval->stack[((hsi*360+11147)*1+lsi)*1]),1);
HRRPart0ket0bra0k001h(inteval, &(inteval->stack[((hsi*756+15198)*1+lsi)*1]), &(inteval->stack[((hsi*675+17386)*1+lsi)*1]), &(inteval->stack[((hsi*540+14658)*1+lsi)*1]), &(inteval->stack[((hsi*540+11507)*1+lsi)*1]),1);
HRRPart0ket0bra0pd001p(inteval, &(inteval->stack[((hsi*273+14658)*1+lsi)*1]), &(inteval->stack[((hsi*105+2751)*1+lsi)*1]), &(inteval->stack[((hsi*91+2856)*1+lsi)*1]), &(inteval->stack[((hsi*91+196)*1+lsi)*1]),1);
HRRPart0ket0bra0pp001d(inteval, &(inteval->stack[((hsi*468+2751)*1+lsi)*1]), &(inteval->stack[((hsi*273+14658)*1+lsi)*1]), &(inteval->stack[((hsi*234+16206)*1+lsi)*1]), &(inteval->stack[((hsi*234+12047)*1+lsi)*1]),1);
HRRPart0ket0bra0ps001f(inteval, &(inteval->stack[((hsi*660+18061)*1+lsi)*1]), &(inteval->stack[((hsi*468+2751)*1+lsi)*1]), &(inteval->stack[((hsi*396+16440)*1+lsi)*1]), &(inteval->stack[((hsi*396+12281)*1+lsi)*1]),1);
HRRPart0ket0bra0m001g(inteval, &(inteval->stack[((hsi*825+15954)*1+lsi)*1]), &(inteval->stack[((hsi*660+18061)*1+lsi)*1]), &(inteval->stack[((hsi*550+16836)*1+lsi)*1]), &(inteval->stack[((hsi*550+12677)*1+lsi)*1]),1);
HRRPart0ket0bra0l001h(inteval, &(inteval->stack[((hsi*945+18061)*1+lsi)*1]), &(inteval->stack[((hsi*825+15954)*1+lsi)*1]), &(inteval->stack[((hsi*675+17386)*1+lsi)*1]), &(inteval->stack[((hsi*675+13227)*1+lsi)*1]),1);
HRRPart0ket0bra0k001i(inteval, &(inteval->stack[((hsi*1008+8267)*1+lsi)*1]), &(inteval->stack[((hsi*945+18061)*1+lsi)*1]), &(inteval->stack[((hsi*756+15198)*1+lsi)*1]), &(inteval->stack[((hsi*756+13902)*1+lsi)*1]),1);
HRRPart0ket0bra0l010p(inteval, &(inteval->stack[((hsi*135+15954)*1+lsi)*1]), &(inteval->stack[((hsi*55+2615)*1+lsi)*1]), &(inteval->stack[((hsi*45+2670)*1+lsi)*1]), &(inteval->stack[((hsi*45+730)*1+lsi)*1]),1);
HRRPart0ket0bra0m010p(inteval, &(inteval->stack[((hsi*165+16089)*1+lsi)*1]), &(inteval->stack[((hsi*66+2549)*1+lsi)*1]), &(inteval->stack[((hsi*55+2615)*1+lsi)*1]), &(inteval->stack[((hsi*55+630)*1+lsi)*1]),1);
HRRPart0ket0bra0l010d(inteval, &(inteval->stack[((hsi*270+16254)*1+lsi)*1]), &(inteval->stack[((hsi*165+16089)*1+lsi)*1]), &(inteval->stack[((hsi*135+15954)*1+lsi)*1]), &(inteval->stack[((hsi*135+9275)*1+lsi)*1]),1);
HRRPart0ket0bra0ps010p(inteval, &(inteval->stack[((hsi*198+16524)*1+lsi)*1]), &(inteval->stack[((hsi*78+2471)*1+lsi)*1]), &(inteval->stack[((hsi*66+2549)*1+lsi)*1]), &(inteval->stack[((hsi*66+509)*1+lsi)*1]),1);
HRRPart0ket0bra0m010d(inteval, &(inteval->stack[((hsi*330+16722)*1+lsi)*1]), &(inteval->stack[((hsi*198+16524)*1+lsi)*1]), &(inteval->stack[((hsi*165+16089)*1+lsi)*1]), &(inteval->stack[((hsi*165+9410)*1+lsi)*1]),1);
HRRPart0ket0bra0l010f(inteval, &(inteval->stack[((hsi*450+17052)*1+lsi)*1]), &(inteval->stack[((hsi*330+16722)*1+lsi)*1]), &(inteval->stack[((hsi*270+16254)*1+lsi)*1]), &(inteval->stack[((hsi*270+9575)*1+lsi)*1]),1);
HRRPart0ket0bra0pp010p(inteval, &(inteval->stack[((hsi*234+17502)*1+lsi)*1]), &(inteval->stack[((hsi*91+2380)*1+lsi)*1]), &(inteval->stack[((hsi*78+2471)*1+lsi)*1]), &(inteval->stack[((hsi*78+365)*1+lsi)*1]),1);
HRRPart0ket0bra0ps010d(inteval, &(inteval->stack[((hsi*396+14658)*1+lsi)*1]), &(inteval->stack[((hsi*234+17502)*1+lsi)*1]), &(inteval->stack[((hsi*198+16524)*1+lsi)*1]), &(inteval->stack[((hsi*198+9845)*1+lsi)*1]),1);
HRRPart0ket0bra0m010f(inteval, &(inteval->stack[((hsi*550+19006)*1+lsi)*1]), &(inteval->stack[((hsi*396+14658)*1+lsi)*1]), &(inteval->stack[((hsi*330+16722)*1+lsi)*1]), &(inteval->stack[((hsi*330+10043)*1+lsi)*1]),1);
HRRPart0ket0bra0l010g(inteval, &(inteval->stack[((hsi*675+19556)*1+lsi)*1]), &(inteval->stack[((hsi*550+19006)*1+lsi)*1]), &(inteval->stack[((hsi*450+17052)*1+lsi)*1]), &(inteval->stack[((hsi*450+10373)*1+lsi)*1]),1);
HRRPart0ket0bra0k010p(inteval, &(inteval->stack[((hsi*108+16524)*1+lsi)*1]), &(inteval->stack[((hsi*45+2670)*1+lsi)*1]), &(inteval->stack[((hsi*36+2715)*1+lsi)*1]), &(inteval->stack[((hsi*36+811)*1+lsi)*1]),1);
HRRPart0ket0bra0k010d(inteval, &(inteval->stack[((hsi*216+2471)*1+lsi)*1]), &(inteval->stack[((hsi*135+15954)*1+lsi)*1]), &(inteval->stack[((hsi*108+16524)*1+lsi)*1]), &(inteval->stack[((hsi*108+10823)*1+lsi)*1]),1);
HRRPart0ket0bra0k010f(inteval, &(inteval->stack[((hsi*360+2687)*1+lsi)*1]), &(inteval->stack[((hsi*270+16254)*1+lsi)*1]), &(inteval->stack[((hsi*216+2471)*1+lsi)*1]), &(inteval->stack[((hsi*216+10931)*1+lsi)*1]),1);
HRRPart0ket0bra0k010g(inteval, &(inteval->stack[((hsi*540+15954)*1+lsi)*1]), &(inteval->stack[((hsi*450+17052)*1+lsi)*1]), &(inteval->stack[((hsi*360+2687)*1+lsi)*1]), &(inteval->stack[((hsi*360+11147)*1+lsi)*1]),1);
HRRPart0ket0bra0k010h(inteval, &(inteval->stack[((hsi*756+2471)*1+lsi)*1]), &(inteval->stack[((hsi*675+19556)*1+lsi)*1]), &(inteval->stack[((hsi*540+15954)*1+lsi)*1]), &(inteval->stack[((hsi*540+11507)*1+lsi)*1]),1);
HRRPart0ket0bra0pd010p(inteval, &(inteval->stack[((hsi*273+15954)*1+lsi)*1]), &(inteval->stack[((hsi*105+2275)*1+lsi)*1]), &(inteval->stack[((hsi*91+2380)*1+lsi)*1]), &(inteval->stack[((hsi*91+196)*1+lsi)*1]),1);
HRRPart0ket0bra0pp010d(inteval, &(inteval->stack[((hsi*468+16227)*1+lsi)*1]), &(inteval->stack[((hsi*273+15954)*1+lsi)*1]), &(inteval->stack[((hsi*234+17502)*1+lsi)*1]), &(inteval->stack[((hsi*234+12047)*1+lsi)*1]),1);
HRRPart0ket0bra0ps010f(inteval, &(inteval->stack[((hsi*660+16695)*1+lsi)*1]), &(inteval->stack[((hsi*468+16227)*1+lsi)*1]), &(inteval->stack[((hsi*396+14658)*1+lsi)*1]), &(inteval->stack[((hsi*396+12281)*1+lsi)*1]),1);
HRRPart0ket0bra0m010g(inteval, &(inteval->stack[((hsi*825+20231)*1+lsi)*1]), &(inteval->stack[((hsi*660+16695)*1+lsi)*1]), &(inteval->stack[((hsi*550+19006)*1+lsi)*1]), &(inteval->stack[((hsi*550+12677)*1+lsi)*1]),1);
HRRPart0ket0bra0l010h(inteval, &(inteval->stack[((hsi*945+15954)*1+lsi)*1]), &(inteval->stack[((hsi*825+20231)*1+lsi)*1]), &(inteval->stack[((hsi*675+19556)*1+lsi)*1]), &(inteval->stack[((hsi*675+13227)*1+lsi)*1]),1);
HRRPart0ket0bra0k010i(inteval, &(inteval->stack[((hsi*1008+7259)*1+lsi)*1]), &(inteval->stack[((hsi*945+15954)*1+lsi)*1]), &(inteval->stack[((hsi*756+2471)*1+lsi)*1]), &(inteval->stack[((hsi*756+13902)*1+lsi)*1]),1);
HRRPart0ket0bra0l100p(inteval, &(inteval->stack[((hsi*135+16899)*1+lsi)*1]), &(inteval->stack[((hsi*55+2139)*1+lsi)*1]), &(inteval->stack[((hsi*45+2194)*1+lsi)*1]), &(inteval->stack[((hsi*45+730)*1+lsi)*1]),1);
HRRPart0ket0bra0m100p(inteval, &(inteval->stack[((hsi*165+17034)*1+lsi)*1]), &(inteval->stack[((hsi*66+2073)*1+lsi)*1]), &(inteval->stack[((hsi*55+2139)*1+lsi)*1]), &(inteval->stack[((hsi*55+630)*1+lsi)*1]),1);
HRRPart0ket0bra0l100d(inteval, &(inteval->stack[((hsi*270+17199)*1+lsi)*1]), &(inteval->stack[((hsi*165+17034)*1+lsi)*1]), &(inteval->stack[((hsi*135+16899)*1+lsi)*1]), &(inteval->stack[((hsi*135+9275)*1+lsi)*1]),1);
HRRPart0ket0bra0ps100p(inteval, &(inteval->stack[((hsi*198+17469)*1+lsi)*1]), &(inteval->stack[((hsi*78+1995)*1+lsi)*1]), &(inteval->stack[((hsi*66+2073)*1+lsi)*1]), &(inteval->stack[((hsi*66+509)*1+lsi)*1]),1);
HRRPart0ket0bra0m100d(inteval, &(inteval->stack[((hsi*330+14658)*1+lsi)*1]), &(inteval->stack[((hsi*198+17469)*1+lsi)*1]), &(inteval->stack[((hsi*165+17034)*1+lsi)*1]), &(inteval->stack[((hsi*165+9410)*1+lsi)*1]),1);
HRRPart0ket0bra0l100f(inteval, &(inteval->stack[((hsi*450+19006)*1+lsi)*1]), &(inteval->stack[((hsi*330+14658)*1+lsi)*1]), &(inteval->stack[((hsi*270+17199)*1+lsi)*1]), &(inteval->stack[((hsi*270+9575)*1+lsi)*1]),1);
HRRPart0ket0bra0pp100p(inteval, &(inteval->stack[((hsi*234+17667)*1+lsi)*1]), &(inteval->stack[((hsi*91+1904)*1+lsi)*1]), &(inteval->stack[((hsi*78+1995)*1+lsi)*1]), &(inteval->stack[((hsi*78+365)*1+lsi)*1]),1);
HRRPart0ket0bra0ps100d(inteval, &(inteval->stack[((hsi*396+19456)*1+lsi)*1]), &(inteval->stack[((hsi*234+17667)*1+lsi)*1]), &(inteval->stack[((hsi*198+17469)*1+lsi)*1]), &(inteval->stack[((hsi*198+9845)*1+lsi)*1]),1);
HRRPart0ket0bra0m100f(inteval, &(inteval->stack[((hsi*550+19852)*1+lsi)*1]), &(inteval->stack[((hsi*396+19456)*1+lsi)*1]), &(inteval->stack[((hsi*330+14658)*1+lsi)*1]), &(inteval->stack[((hsi*330+10043)*1+lsi)*1]),1);
HRRPart0ket0bra0l100g(inteval, &(inteval->stack[((hsi*675+20402)*1+lsi)*1]), &(inteval->stack[((hsi*550+19852)*1+lsi)*1]), &(inteval->stack[((hsi*450+19006)*1+lsi)*1]), &(inteval->stack[((hsi*450+10373)*1+lsi)*1]),1);
HRRPart0ket0bra0k100p(inteval, &(inteval->stack[((hsi*108+14658)*1+lsi)*1]), &(inteval->stack[((hsi*45+2194)*1+lsi)*1]), &(inteval->stack[((hsi*36+2239)*1+lsi)*1]), &(inteval->stack[((hsi*36+811)*1+lsi)*1]),1);
HRRPart0ket0bra0k100d(inteval, &(inteval->stack[((hsi*216+1995)*1+lsi)*1]), &(inteval->stack[((hsi*135+16899)*1+lsi)*1]), &(inteval->stack[((hsi*108+14658)*1+lsi)*1]), &(inteval->stack[((hsi*108+10823)*1+lsi)*1]),1);
HRRPart0ket0bra0k100f(inteval, &(inteval->stack[((hsi*360+14658)*1+lsi)*1]), &(inteval->stack[((hsi*270+17199)*1+lsi)*1]), &(inteval->stack[((hsi*216+1995)*1+lsi)*1]), &(inteval->stack[((hsi*216+10931)*1+lsi)*1]),1);
HRRPart0ket0bra0k100g(inteval, &(inteval->stack[((hsi*540+16899)*1+lsi)*1]), &(inteval->stack[((hsi*450+19006)*1+lsi)*1]), &(inteval->stack[((hsi*360+14658)*1+lsi)*1]), &(inteval->stack[((hsi*360+11147)*1+lsi)*1]),1);
HRRPart0ket0bra0k100h(inteval, &(inteval->stack[((hsi*756+21077)*1+lsi)*1]), &(inteval->stack[((hsi*675+20402)*1+lsi)*1]), &(inteval->stack[((hsi*540+16899)*1+lsi)*1]), &(inteval->stack[((hsi*540+11507)*1+lsi)*1]),1);
HRRPart0ket0bra0pd100p(inteval, &(inteval->stack[((hsi*273+16899)*1+lsi)*1]), &(inteval->stack[((hsi*105+1799)*1+lsi)*1]), &(inteval->stack[((hsi*91+1904)*1+lsi)*1]), &(inteval->stack[((hsi*91+196)*1+lsi)*1]),1);
HRRPart0ket0bra0pp100d(inteval, &(inteval->stack[((hsi*468+1799)*1+lsi)*1]), &(inteval->stack[((hsi*273+16899)*1+lsi)*1]), &(inteval->stack[((hsi*234+17667)*1+lsi)*1]), &(inteval->stack[((hsi*234+12047)*1+lsi)*1]),1);
HRRPart0ket0bra0ps100f(inteval, &(inteval->stack[((hsi*660+16899)*1+lsi)*1]), &(inteval->stack[((hsi*468+1799)*1+lsi)*1]), &(inteval->stack[((hsi*396+19456)*1+lsi)*1]), &(inteval->stack[((hsi*396+12281)*1+lsi)*1]),1);
HRRPart0ket0bra0m100g(inteval, &(inteval->stack[((hsi*825+19006)*1+lsi)*1]), &(inteval->stack[((hsi*660+16899)*1+lsi)*1]), &(inteval->stack[((hsi*550+19852)*1+lsi)*1]), &(inteval->stack[((hsi*550+12677)*1+lsi)*1]),1);
HRRPart0ket0bra0l100h(inteval, &(inteval->stack[((hsi*945+16899)*1+lsi)*1]), &(inteval->stack[((hsi*825+19006)*1+lsi)*1]), &(inteval->stack[((hsi*675+20402)*1+lsi)*1]), &(inteval->stack[((hsi*675+13227)*1+lsi)*1]),1);
HRRPart0ket0bra0k100i(inteval, &(inteval->stack[((hsi*1008+6251)*1+lsi)*1]), &(inteval->stack[((hsi*945+16899)*1+lsi)*1]), &(inteval->stack[((hsi*756+21077)*1+lsi)*1]), &(inteval->stack[((hsi*756+13902)*1+lsi)*1]),1);
HRRPart0ket0bra0lp001(inteval, &(inteval->stack[((hsi*135+19006)*1+lsi)*1]), &(inteval->stack[((hsi*55+1663)*1+lsi)*1]), &(inteval->stack[((hsi*45+1718)*1+lsi)*1]), &(inteval->stack[((hsi*45+730)*1+lsi)*1]),1);
HRRPart0ket0bra0mp001(inteval, &(inteval->stack[((hsi*165+19141)*1+lsi)*1]), &(inteval->stack[((hsi*66+1597)*1+lsi)*1]), &(inteval->stack[((hsi*55+1663)*1+lsi)*1]), &(inteval->stack[((hsi*55+630)*1+lsi)*1]),1);
HRRPart0ket0bra0ld001(inteval, &(inteval->stack[((hsi*270+19306)*1+lsi)*1]), &(inteval->stack[((hsi*165+19141)*1+lsi)*1]), &(inteval->stack[((hsi*135+19006)*1+lsi)*1]), &(inteval->stack[((hsi*135+9275)*1+lsi)*1]),1);
HRRPart0ket0bra0psp001(inteval, &(inteval->stack[((hsi*198+19576)*1+lsi)*1]), &(inteval->stack[((hsi*78+1519)*1+lsi)*1]), &(inteval->stack[((hsi*66+1597)*1+lsi)*1]), &(inteval->stack[((hsi*66+509)*1+lsi)*1]),1);
HRRPart0ket0bra0md001(inteval, &(inteval->stack[((hsi*330+19774)*1+lsi)*1]), &(inteval->stack[((hsi*198+19576)*1+lsi)*1]), &(inteval->stack[((hsi*165+19141)*1+lsi)*1]), &(inteval->stack[((hsi*165+9410)*1+lsi)*1]),1);
HRRPart0ket0bra0lf001(inteval, &(inteval->stack[((hsi*450+20104)*1+lsi)*1]), &(inteval->stack[((hsi*330+19774)*1+lsi)*1]), &(inteval->stack[((hsi*270+19306)*1+lsi)*1]), &(inteval->stack[((hsi*270+9575)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp001(inteval, &(inteval->stack[((hsi*234+1799)*1+lsi)*1]), &(inteval->stack[((hsi*91+1428)*1+lsi)*1]), &(inteval->stack[((hsi*78+1519)*1+lsi)*1]), &(inteval->stack[((hsi*78+365)*1+lsi)*1]),1);
HRRPart0ket0bra0psd001(inteval, &(inteval->stack[((hsi*396+14658)*1+lsi)*1]), &(inteval->stack[((hsi*234+1799)*1+lsi)*1]), &(inteval->stack[((hsi*198+19576)*1+lsi)*1]), &(inteval->stack[((hsi*198+9845)*1+lsi)*1]),1);
HRRPart0ket0bra0mf001(inteval, &(inteval->stack[((hsi*550+21833)*1+lsi)*1]), &(inteval->stack[((hsi*396+14658)*1+lsi)*1]), &(inteval->stack[((hsi*330+19774)*1+lsi)*1]), &(inteval->stack[((hsi*330+10043)*1+lsi)*1]),1);
HRRPart0ket0bra0lg001(inteval, &(inteval->stack[((hsi*675+22383)*1+lsi)*1]), &(inteval->stack[((hsi*550+21833)*1+lsi)*1]), &(inteval->stack[((hsi*450+20104)*1+lsi)*1]), &(inteval->stack[((hsi*450+10373)*1+lsi)*1]),1);
HRRPart0ket0bra0kp001(inteval, &(inteval->stack[((hsi*108+19576)*1+lsi)*1]), &(inteval->stack[((hsi*45+1718)*1+lsi)*1]), &(inteval->stack[((hsi*36+1763)*1+lsi)*1]), &(inteval->stack[((hsi*36+811)*1+lsi)*1]),1);
HRRPart0ket0bra0kd001(inteval, &(inteval->stack[((hsi*216+20554)*1+lsi)*1]), &(inteval->stack[((hsi*135+19006)*1+lsi)*1]), &(inteval->stack[((hsi*108+19576)*1+lsi)*1]), &(inteval->stack[((hsi*108+10823)*1+lsi)*1]),1);
HRRPart0ket0bra0kf001(inteval, &(inteval->stack[((hsi*360+19576)*1+lsi)*1]), &(inteval->stack[((hsi*270+19306)*1+lsi)*1]), &(inteval->stack[((hsi*216+20554)*1+lsi)*1]), &(inteval->stack[((hsi*216+10931)*1+lsi)*1]),1);
HRRPart0ket0bra0kg001(inteval, &(inteval->stack[((hsi*540+19006)*1+lsi)*1]), &(inteval->stack[((hsi*450+20104)*1+lsi)*1]), &(inteval->stack[((hsi*360+19576)*1+lsi)*1]), &(inteval->stack[((hsi*360+11147)*1+lsi)*1]),1);
HRRPart0ket0bra0kh001(inteval, &(inteval->stack[((hsi*756+19546)*1+lsi)*1]), &(inteval->stack[((hsi*675+22383)*1+lsi)*1]), &(inteval->stack[((hsi*540+19006)*1+lsi)*1]), &(inteval->stack[((hsi*540+11507)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp001(inteval, &(inteval->stack[((hsi*273+20302)*1+lsi)*1]), &(inteval->stack[((hsi*105+1323)*1+lsi)*1]), &(inteval->stack[((hsi*91+1428)*1+lsi)*1]), &(inteval->stack[((hsi*91+196)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd001(inteval, &(inteval->stack[((hsi*468+19006)*1+lsi)*1]), &(inteval->stack[((hsi*273+20302)*1+lsi)*1]), &(inteval->stack[((hsi*234+1799)*1+lsi)*1]), &(inteval->stack[((hsi*234+12047)*1+lsi)*1]),1);
HRRPart0ket0bra0psf001(inteval, &(inteval->stack[((hsi*660+1323)*1+lsi)*1]), &(inteval->stack[((hsi*468+19006)*1+lsi)*1]), &(inteval->stack[((hsi*396+14658)*1+lsi)*1]), &(inteval->stack[((hsi*396+12281)*1+lsi)*1]),1);
HRRPart0ket0bra0mg001(inteval, &(inteval->stack[((hsi*825+23058)*1+lsi)*1]), &(inteval->stack[((hsi*660+1323)*1+lsi)*1]), &(inteval->stack[((hsi*550+21833)*1+lsi)*1]), &(inteval->stack[((hsi*550+12677)*1+lsi)*1]),1);
HRRPart0ket0bra0lh001(inteval, &(inteval->stack[((hsi*945+1323)*1+lsi)*1]), &(inteval->stack[((hsi*825+23058)*1+lsi)*1]), &(inteval->stack[((hsi*675+22383)*1+lsi)*1]), &(inteval->stack[((hsi*675+13227)*1+lsi)*1]),1);
HRRPart0ket0bra0ki001(inteval, &(inteval->stack[((hsi*1008+5243)*1+lsi)*1]), &(inteval->stack[((hsi*945+1323)*1+lsi)*1]), &(inteval->stack[((hsi*756+19546)*1+lsi)*1]), &(inteval->stack[((hsi*756+13902)*1+lsi)*1]),1);
HRRPart0ket0bra0lp010(inteval, &(inteval->stack[((hsi*135+20302)*1+lsi)*1]), &(inteval->stack[((hsi*55+1187)*1+lsi)*1]), &(inteval->stack[((hsi*45+1242)*1+lsi)*1]), &(inteval->stack[((hsi*45+730)*1+lsi)*1]),1);
HRRPart0ket0bra0mp010(inteval, &(inteval->stack[((hsi*165+20437)*1+lsi)*1]), &(inteval->stack[((hsi*66+1121)*1+lsi)*1]), &(inteval->stack[((hsi*55+1187)*1+lsi)*1]), &(inteval->stack[((hsi*55+630)*1+lsi)*1]),1);
HRRPart0ket0bra0ld010(inteval, &(inteval->stack[((hsi*270+19006)*1+lsi)*1]), &(inteval->stack[((hsi*165+20437)*1+lsi)*1]), &(inteval->stack[((hsi*135+20302)*1+lsi)*1]), &(inteval->stack[((hsi*135+9275)*1+lsi)*1]),1);
HRRPart0ket0bra0psp010(inteval, &(inteval->stack[((hsi*198+14658)*1+lsi)*1]), &(inteval->stack[((hsi*78+1043)*1+lsi)*1]), &(inteval->stack[((hsi*66+1121)*1+lsi)*1]), &(inteval->stack[((hsi*66+509)*1+lsi)*1]),1);
HRRPart0ket0bra0md010(inteval, &(inteval->stack[((hsi*330+20602)*1+lsi)*1]), &(inteval->stack[((hsi*198+14658)*1+lsi)*1]), &(inteval->stack[((hsi*165+20437)*1+lsi)*1]), &(inteval->stack[((hsi*165+9410)*1+lsi)*1]),1);
HRRPart0ket0bra0lf010(inteval, &(inteval->stack[((hsi*450+21833)*1+lsi)*1]), &(inteval->stack[((hsi*330+20602)*1+lsi)*1]), &(inteval->stack[((hsi*270+19006)*1+lsi)*1]), &(inteval->stack[((hsi*270+9575)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp010(inteval, &(inteval->stack[((hsi*234+14856)*1+lsi)*1]), &(inteval->stack[((hsi*91+952)*1+lsi)*1]), &(inteval->stack[((hsi*78+1043)*1+lsi)*1]), &(inteval->stack[((hsi*78+365)*1+lsi)*1]),1);
HRRPart0ket0bra0psd010(inteval, &(inteval->stack[((hsi*396+22283)*1+lsi)*1]), &(inteval->stack[((hsi*234+14856)*1+lsi)*1]), &(inteval->stack[((hsi*198+14658)*1+lsi)*1]), &(inteval->stack[((hsi*198+9845)*1+lsi)*1]),1);
HRRPart0ket0bra0mf010(inteval, &(inteval->stack[((hsi*550+22679)*1+lsi)*1]), &(inteval->stack[((hsi*396+22283)*1+lsi)*1]), &(inteval->stack[((hsi*330+20602)*1+lsi)*1]), &(inteval->stack[((hsi*330+10043)*1+lsi)*1]),1);
HRRPart0ket0bra0lg010(inteval, &(inteval->stack[((hsi*675+23229)*1+lsi)*1]), &(inteval->stack[((hsi*550+22679)*1+lsi)*1]), &(inteval->stack[((hsi*450+21833)*1+lsi)*1]), &(inteval->stack[((hsi*450+10373)*1+lsi)*1]),1);
HRRPart0ket0bra0kp010(inteval, &(inteval->stack[((hsi*108+15090)*1+lsi)*1]), &(inteval->stack[((hsi*45+1242)*1+lsi)*1]), &(inteval->stack[((hsi*36+1287)*1+lsi)*1]), &(inteval->stack[((hsi*36+811)*1+lsi)*1]),1);
HRRPart0ket0bra0kd010(inteval, &(inteval->stack[((hsi*216+20437)*1+lsi)*1]), &(inteval->stack[((hsi*135+20302)*1+lsi)*1]), &(inteval->stack[((hsi*108+15090)*1+lsi)*1]), &(inteval->stack[((hsi*108+10823)*1+lsi)*1]),1);
HRRPart0ket0bra0kf010(inteval, &(inteval->stack[((hsi*360+20653)*1+lsi)*1]), &(inteval->stack[((hsi*270+19006)*1+lsi)*1]), &(inteval->stack[((hsi*216+20437)*1+lsi)*1]), &(inteval->stack[((hsi*216+10931)*1+lsi)*1]),1);
HRRPart0ket0bra0kg010(inteval, &(inteval->stack[((hsi*540+19006)*1+lsi)*1]), &(inteval->stack[((hsi*450+21833)*1+lsi)*1]), &(inteval->stack[((hsi*360+20653)*1+lsi)*1]), &(inteval->stack[((hsi*360+11147)*1+lsi)*1]),1);
HRRPart0ket0bra0kh010(inteval, &(inteval->stack[((hsi*756+20302)*1+lsi)*1]), &(inteval->stack[((hsi*675+23229)*1+lsi)*1]), &(inteval->stack[((hsi*540+19006)*1+lsi)*1]), &(inteval->stack[((hsi*540+11507)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp010(inteval, &(inteval->stack[((hsi*273+19006)*1+lsi)*1]), &(inteval->stack[((hsi*105+847)*1+lsi)*1]), &(inteval->stack[((hsi*91+952)*1+lsi)*1]), &(inteval->stack[((hsi*91+196)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd010(inteval, &(inteval->stack[((hsi*468+847)*1+lsi)*1]), &(inteval->stack[((hsi*273+19006)*1+lsi)*1]), &(inteval->stack[((hsi*234+14856)*1+lsi)*1]), &(inteval->stack[((hsi*234+12047)*1+lsi)*1]),1);
HRRPart0ket0bra0psf010(inteval, &(inteval->stack[((hsi*660+23904)*1+lsi)*1]), &(inteval->stack[((hsi*468+847)*1+lsi)*1]), &(inteval->stack[((hsi*396+22283)*1+lsi)*1]), &(inteval->stack[((hsi*396+12281)*1+lsi)*1]),1);
HRRPart0ket0bra0mg010(inteval, &(inteval->stack[((hsi*825+21833)*1+lsi)*1]), &(inteval->stack[((hsi*660+23904)*1+lsi)*1]), &(inteval->stack[((hsi*550+22679)*1+lsi)*1]), &(inteval->stack[((hsi*550+12677)*1+lsi)*1]),1);
HRRPart0ket0bra0lh010(inteval, &(inteval->stack[((hsi*945+23904)*1+lsi)*1]), &(inteval->stack[((hsi*825+21833)*1+lsi)*1]), &(inteval->stack[((hsi*675+23229)*1+lsi)*1]), &(inteval->stack[((hsi*675+13227)*1+lsi)*1]),1);
HRRPart0ket0bra0ki010(inteval, &(inteval->stack[((hsi*1008+4235)*1+lsi)*1]), &(inteval->stack[((hsi*945+23904)*1+lsi)*1]), &(inteval->stack[((hsi*756+20302)*1+lsi)*1]), &(inteval->stack[((hsi*756+13902)*1+lsi)*1]),1);
HRRPart0ket0bra0lp100(inteval, &(inteval->stack[((hsi*135+21833)*1+lsi)*1]), &(inteval->stack[((hsi*55+575)*1+lsi)*1]), &(inteval->stack[((hsi*45+685)*1+lsi)*1]), &(inteval->stack[((hsi*45+730)*1+lsi)*1]),1);
HRRPart0ket0bra0mp100(inteval, &(inteval->stack[((hsi*165+21968)*1+lsi)*1]), &(inteval->stack[((hsi*66+443)*1+lsi)*1]), &(inteval->stack[((hsi*55+575)*1+lsi)*1]), &(inteval->stack[((hsi*55+630)*1+lsi)*1]),1);
HRRPart0ket0bra0ld100(inteval, &(inteval->stack[((hsi*270+22133)*1+lsi)*1]), &(inteval->stack[((hsi*165+21968)*1+lsi)*1]), &(inteval->stack[((hsi*135+21833)*1+lsi)*1]), &(inteval->stack[((hsi*135+9275)*1+lsi)*1]),1);
HRRPart0ket0bra0psp100(inteval, &(inteval->stack[((hsi*198+22403)*1+lsi)*1]), &(inteval->stack[((hsi*78+287)*1+lsi)*1]), &(inteval->stack[((hsi*66+443)*1+lsi)*1]), &(inteval->stack[((hsi*66+509)*1+lsi)*1]),1);
HRRPart0ket0bra0md100(inteval, &(inteval->stack[((hsi*330+22601)*1+lsi)*1]), &(inteval->stack[((hsi*198+22403)*1+lsi)*1]), &(inteval->stack[((hsi*165+21968)*1+lsi)*1]), &(inteval->stack[((hsi*165+9410)*1+lsi)*1]),1);
HRRPart0ket0bra0lf100(inteval, &(inteval->stack[((hsi*450+22931)*1+lsi)*1]), &(inteval->stack[((hsi*330+22601)*1+lsi)*1]), &(inteval->stack[((hsi*270+22133)*1+lsi)*1]), &(inteval->stack[((hsi*270+9575)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp100(inteval, &(inteval->stack[((hsi*234+9275)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]), &(inteval->stack[((hsi*78+287)*1+lsi)*1]), &(inteval->stack[((hsi*78+365)*1+lsi)*1]),1);
HRRPart0ket0bra0psd100(inteval, &(inteval->stack[((hsi*396+19006)*1+lsi)*1]), &(inteval->stack[((hsi*234+9275)*1+lsi)*1]), &(inteval->stack[((hsi*198+22403)*1+lsi)*1]), &(inteval->stack[((hsi*198+9845)*1+lsi)*1]),1);
HRRPart0ket0bra0mf100(inteval, &(inteval->stack[((hsi*550+24849)*1+lsi)*1]), &(inteval->stack[((hsi*396+19006)*1+lsi)*1]), &(inteval->stack[((hsi*330+22601)*1+lsi)*1]), &(inteval->stack[((hsi*330+10043)*1+lsi)*1]),1);
HRRPart0ket0bra0lg100(inteval, &(inteval->stack[((hsi*675+9509)*1+lsi)*1]), &(inteval->stack[((hsi*550+24849)*1+lsi)*1]), &(inteval->stack[((hsi*450+22931)*1+lsi)*1]), &(inteval->stack[((hsi*450+10373)*1+lsi)*1]),1);
HRRPart0ket0bra0kp100(inteval, &(inteval->stack[((hsi*108+10184)*1+lsi)*1]), &(inteval->stack[((hsi*45+685)*1+lsi)*1]), &(inteval->stack[((hsi*36+775)*1+lsi)*1]), &(inteval->stack[((hsi*36+811)*1+lsi)*1]),1);
HRRPart0ket0bra0kd100(inteval, &(inteval->stack[((hsi*216+287)*1+lsi)*1]), &(inteval->stack[((hsi*135+21833)*1+lsi)*1]), &(inteval->stack[((hsi*108+10184)*1+lsi)*1]), &(inteval->stack[((hsi*108+10823)*1+lsi)*1]),1);
HRRPart0ket0bra0kf100(inteval, &(inteval->stack[((hsi*360+503)*1+lsi)*1]), &(inteval->stack[((hsi*270+22133)*1+lsi)*1]), &(inteval->stack[((hsi*216+287)*1+lsi)*1]), &(inteval->stack[((hsi*216+10931)*1+lsi)*1]),1);
HRRPart0ket0bra0kg100(inteval, &(inteval->stack[((hsi*540+14658)*1+lsi)*1]), &(inteval->stack[((hsi*450+22931)*1+lsi)*1]), &(inteval->stack[((hsi*360+503)*1+lsi)*1]), &(inteval->stack[((hsi*360+11147)*1+lsi)*1]),1);
HRRPart0ket0bra0kh100(inteval, &(inteval->stack[((hsi*756+21833)*1+lsi)*1]), &(inteval->stack[((hsi*675+9509)*1+lsi)*1]), &(inteval->stack[((hsi*540+14658)*1+lsi)*1]), &(inteval->stack[((hsi*540+11507)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp100(inteval, &(inteval->stack[((hsi*273+10184)*1+lsi)*1]), &(inteval->stack[((hsi*105+0)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]), &(inteval->stack[((hsi*91+196)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd100(inteval, &(inteval->stack[((hsi*468+10457)*1+lsi)*1]), &(inteval->stack[((hsi*273+10184)*1+lsi)*1]), &(inteval->stack[((hsi*234+9275)*1+lsi)*1]), &(inteval->stack[((hsi*234+12047)*1+lsi)*1]),1);
HRRPart0ket0bra0psf100(inteval, &(inteval->stack[((hsi*660+10925)*1+lsi)*1]), &(inteval->stack[((hsi*468+10457)*1+lsi)*1]), &(inteval->stack[((hsi*396+19006)*1+lsi)*1]), &(inteval->stack[((hsi*396+12281)*1+lsi)*1]),1);
HRRPart0ket0bra0mg100(inteval, &(inteval->stack[((hsi*825+0)*1+lsi)*1]), &(inteval->stack[((hsi*660+10925)*1+lsi)*1]), &(inteval->stack[((hsi*550+24849)*1+lsi)*1]), &(inteval->stack[((hsi*550+12677)*1+lsi)*1]),1);
HRRPart0ket0bra0lh100(inteval, &(inteval->stack[((hsi*945+10184)*1+lsi)*1]), &(inteval->stack[((hsi*825+0)*1+lsi)*1]), &(inteval->stack[((hsi*675+9509)*1+lsi)*1]), &(inteval->stack[((hsi*675+13227)*1+lsi)*1]),1);
HRRPart0ket0bra0ki100(inteval, &(inteval->stack[((hsi*1008+3227)*1+lsi)*1]), &(inteval->stack[((hsi*945+10184)*1+lsi)*1]), &(inteval->stack[((hsi*756+21833)*1+lsi)*1]), &(inteval->stack[((hsi*756+13902)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1008+3227)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1008+4235)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1008+5243)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1008+6251)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1008+7259)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1008+8267)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
