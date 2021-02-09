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
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kf001.h>
#include <HRRPart0bra0ket0kf010.h>
#include <HRRPart0bra0ket0kf100.h>
#include <HRRPart0bra0ket0kg.h>
#include <HRRPart0bra0ket0kg001.h>
#include <HRRPart0bra0ket0kg010.h>
#include <HRRPart0bra0ket0kg100.h>
#include <HRRPart0bra0ket0kh.h>
#include <HRRPart0bra0ket0kh001.h>
#include <HRRPart0bra0ket0kh010.h>
#include <HRRPart0bra0ket0kh100.h>
#include <HRRPart0bra0ket0ki.h>
#include <HRRPart0bra0ket0ki001.h>
#include <HRRPart0bra0ket0ki010.h>
#include <HRRPart0bra0ket0ki100.h>
#include <HRRPart0bra0ket0kk001.h>
#include <HRRPart0bra0ket0kk010.h>
#include <HRRPart0bra0ket0kk100.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0kp001.h>
#include <HRRPart0bra0ket0kp010.h>
#include <HRRPart0bra0ket0kp100.h>
#include <HRRPart0bra0ket0k001d.h>
#include <HRRPart0bra0ket0k001f.h>
#include <HRRPart0bra0ket0k001g.h>
#include <HRRPart0bra0ket0k001h.h>
#include <HRRPart0bra0ket0k001i.h>
#include <HRRPart0bra0ket0k001k.h>
#include <HRRPart0bra0ket0k001p.h>
#include <HRRPart0bra0ket0k010d.h>
#include <HRRPart0bra0ket0k010f.h>
#include <HRRPart0bra0ket0k010g.h>
#include <HRRPart0bra0ket0k010h.h>
#include <HRRPart0bra0ket0k010i.h>
#include <HRRPart0bra0ket0k010k.h>
#include <HRRPart0bra0ket0k010p.h>
#include <HRRPart0bra0ket0k100d.h>
#include <HRRPart0bra0ket0k100f.h>
#include <HRRPart0bra0ket0k100g.h>
#include <HRRPart0bra0ket0k100h.h>
#include <HRRPart0bra0ket0k100i.h>
#include <HRRPart0bra0ket0k100k.h>
#include <HRRPart0bra0ket0k100p.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0ld001.h>
#include <HRRPart0bra0ket0ld010.h>
#include <HRRPart0bra0ket0ld100.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lf001.h>
#include <HRRPart0bra0ket0lf010.h>
#include <HRRPart0bra0ket0lf100.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lg001.h>
#include <HRRPart0bra0ket0lg010.h>
#include <HRRPart0bra0ket0lg100.h>
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0lh001.h>
#include <HRRPart0bra0ket0lh010.h>
#include <HRRPart0bra0ket0lh100.h>
#include <HRRPart0bra0ket0li001.h>
#include <HRRPart0bra0ket0li010.h>
#include <HRRPart0bra0ket0li100.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0lp001.h>
#include <HRRPart0bra0ket0lp010.h>
#include <HRRPart0bra0ket0lp100.h>
#include <HRRPart0bra0ket0l001d.h>
#include <HRRPart0bra0ket0l001f.h>
#include <HRRPart0bra0ket0l001g.h>
#include <HRRPart0bra0ket0l001h.h>
#include <HRRPart0bra0ket0l001i.h>
#include <HRRPart0bra0ket0l001p.h>
#include <HRRPart0bra0ket0l010d.h>
#include <HRRPart0bra0ket0l010f.h>
#include <HRRPart0bra0ket0l010g.h>
#include <HRRPart0bra0ket0l010h.h>
#include <HRRPart0bra0ket0l010i.h>
#include <HRRPart0bra0ket0l010p.h>
#include <HRRPart0bra0ket0l100d.h>
#include <HRRPart0bra0ket0l100f.h>
#include <HRRPart0bra0ket0l100g.h>
#include <HRRPart0bra0ket0l100h.h>
#include <HRRPart0bra0ket0l100i.h>
#include <HRRPart0bra0ket0l100p.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0md001.h>
#include <HRRPart0bra0ket0md010.h>
#include <HRRPart0bra0ket0md100.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mf001.h>
#include <HRRPart0bra0ket0mf010.h>
#include <HRRPart0bra0ket0mf100.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mg001.h>
#include <HRRPart0bra0ket0mg010.h>
#include <HRRPart0bra0ket0mg100.h>
#include <HRRPart0bra0ket0mh001.h>
#include <HRRPart0bra0ket0mh010.h>
#include <HRRPart0bra0ket0mh100.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0mp001.h>
#include <HRRPart0bra0ket0mp010.h>
#include <HRRPart0bra0ket0mp100.h>
#include <HRRPart0bra0ket0m001d.h>
#include <HRRPart0bra0ket0m001f.h>
#include <HRRPart0bra0ket0m001g.h>
#include <HRRPart0bra0ket0m001h.h>
#include <HRRPart0bra0ket0m001p.h>
#include <HRRPart0bra0ket0m010d.h>
#include <HRRPart0bra0ket0m010f.h>
#include <HRRPart0bra0ket0m010g.h>
#include <HRRPart0bra0ket0m010h.h>
#include <HRRPart0bra0ket0m010p.h>
#include <HRRPart0bra0ket0m100d.h>
#include <HRRPart0bra0ket0m100f.h>
#include <HRRPart0bra0ket0m100g.h>
#include <HRRPart0bra0ket0m100h.h>
#include <HRRPart0bra0ket0m100p.h>
#include <HRRPart0bra0ket0pdd001.h>
#include <HRRPart0bra0ket0pdd010.h>
#include <HRRPart0bra0ket0pdd100.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pdp001.h>
#include <HRRPart0bra0ket0pdp010.h>
#include <HRRPart0bra0ket0pdp100.h>
#include <HRRPart0bra0ket0pd001d.h>
#include <HRRPart0bra0ket0pd001p.h>
#include <HRRPart0bra0ket0pd010d.h>
#include <HRRPart0bra0ket0pd010p.h>
#include <HRRPart0bra0ket0pd100d.h>
#include <HRRPart0bra0ket0pd100p.h>
#include <HRRPart0bra0ket0pfp001.h>
#include <HRRPart0bra0ket0pfp010.h>
#include <HRRPart0bra0ket0pfp100.h>
#include <HRRPart0bra0ket0pf001p.h>
#include <HRRPart0bra0ket0pf010p.h>
#include <HRRPart0bra0ket0pf100p.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppd001.h>
#include <HRRPart0bra0ket0ppd010.h>
#include <HRRPart0bra0ket0ppd100.h>
#include <HRRPart0bra0ket0ppf001.h>
#include <HRRPart0bra0ket0ppf010.h>
#include <HRRPart0bra0ket0ppf100.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0ppp001.h>
#include <HRRPart0bra0ket0ppp010.h>
#include <HRRPart0bra0ket0ppp100.h>
#include <HRRPart0bra0ket0pp001d.h>
#include <HRRPart0bra0ket0pp001f.h>
#include <HRRPart0bra0ket0pp001p.h>
#include <HRRPart0bra0ket0pp010d.h>
#include <HRRPart0bra0ket0pp010f.h>
#include <HRRPart0bra0ket0pp010p.h>
#include <HRRPart0bra0ket0pp100d.h>
#include <HRRPart0bra0ket0pp100f.h>
#include <HRRPart0bra0ket0pp100p.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psd001.h>
#include <HRRPart0bra0ket0psd010.h>
#include <HRRPart0bra0ket0psd100.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psf001.h>
#include <HRRPart0bra0ket0psf010.h>
#include <HRRPart0bra0ket0psf100.h>
#include <HRRPart0bra0ket0psg001.h>
#include <HRRPart0bra0ket0psg010.h>
#include <HRRPart0bra0ket0psg100.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart0bra0ket0psp001.h>
#include <HRRPart0bra0ket0psp010.h>
#include <HRRPart0bra0ket0psp100.h>
#include <HRRPart0bra0ket0ps001d.h>
#include <HRRPart0bra0ket0ps001f.h>
#include <HRRPart0bra0ket0ps001g.h>
#include <HRRPart0bra0ket0ps001p.h>
#include <HRRPart0bra0ket0ps010d.h>
#include <HRRPart0bra0ket0ps010f.h>
#include <HRRPart0bra0ket0ps010g.h>
#include <HRRPart0bra0ket0ps010p.h>
#include <HRRPart0bra0ket0ps100d.h>
#include <HRRPart0bra0ket0ps100f.h>
#include <HRRPart0bra0ket0ps100g.h>
#include <HRRPart0bra0ket0ps100p.h>
#include <_elecpotderiv1_K_K_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_K_K(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4052)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_K_K_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11828)*1+lsi)*1]), &(inteval->stack[((hsi*55+855)*1+lsi)*1]), &(inteval->stack[((hsi*45+955)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+11963)*1+lsi)*1]), &(inteval->stack[((hsi*66+734)*1+lsi)*1]), &(inteval->stack[((hsi*55+855)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+12128)*1+lsi)*1]), &(inteval->stack[((hsi*165+11963)*1+lsi)*1]), &(inteval->stack[((hsi*135+11828)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+12398)*1+lsi)*1]), &(inteval->stack[((hsi*78+590)*1+lsi)*1]), &(inteval->stack[((hsi*66+734)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+12596)*1+lsi)*1]), &(inteval->stack[((hsi*198+12398)*1+lsi)*1]), &(inteval->stack[((hsi*165+11963)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+12926)*1+lsi)*1]), &(inteval->stack[((hsi*330+12596)*1+lsi)*1]), &(inteval->stack[((hsi*270+12128)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+13376)*1+lsi)*1]), &(inteval->stack[((hsi*91+421)*1+lsi)*1]), &(inteval->stack[((hsi*78+590)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+13610)*1+lsi)*1]), &(inteval->stack[((hsi*234+13376)*1+lsi)*1]), &(inteval->stack[((hsi*198+12398)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+14006)*1+lsi)*1]), &(inteval->stack[((hsi*396+13610)*1+lsi)*1]), &(inteval->stack[((hsi*330+12596)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+14556)*1+lsi)*1]), &(inteval->stack[((hsi*550+14006)*1+lsi)*1]), &(inteval->stack[((hsi*450+12926)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+15231)*1+lsi)*1]), &(inteval->stack[((hsi*45+955)*1+lsi)*1]), &(inteval->stack[((hsi*36+1036)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+15339)*1+lsi)*1]), &(inteval->stack[((hsi*135+11828)*1+lsi)*1]), &(inteval->stack[((hsi*108+15231)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+15555)*1+lsi)*1]), &(inteval->stack[((hsi*270+12128)*1+lsi)*1]), &(inteval->stack[((hsi*216+15339)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+15915)*1+lsi)*1]), &(inteval->stack[((hsi*450+12926)*1+lsi)*1]), &(inteval->stack[((hsi*360+15555)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+16455)*1+lsi)*1]), &(inteval->stack[((hsi*675+14556)*1+lsi)*1]), &(inteval->stack[((hsi*540+15915)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+17211)*1+lsi)*1]), &(inteval->stack[((hsi*105+225)*1+lsi)*1]), &(inteval->stack[((hsi*91+421)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+17484)*1+lsi)*1]), &(inteval->stack[((hsi*273+17211)*1+lsi)*1]), &(inteval->stack[((hsi*234+13376)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+17952)*1+lsi)*1]), &(inteval->stack[((hsi*468+17484)*1+lsi)*1]), &(inteval->stack[((hsi*396+13610)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+18612)*1+lsi)*1]), &(inteval->stack[((hsi*660+17952)*1+lsi)*1]), &(inteval->stack[((hsi*550+14006)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+19437)*1+lsi)*1]), &(inteval->stack[((hsi*825+18612)*1+lsi)*1]), &(inteval->stack[((hsi*675+14556)*1+lsi)*1]),1);
HRRPart0bra0ket0ki(inteval, &(inteval->stack[((hsi*1008+20382)*1+lsi)*1]), &(inteval->stack[((hsi*945+19437)*1+lsi)*1]), &(inteval->stack[((hsi*756+16455)*1+lsi)*1]),1);
HRRPart0bra0ket0lp001(inteval, &(inteval->stack[((hsi*135+21390)*1+lsi)*1]), &(inteval->stack[((hsi*55+3916)*1+lsi)*1]), &(inteval->stack[((hsi*45+3971)*1+lsi)*1]), &(inteval->stack[((hsi*45+955)*1+lsi)*1]),1);
HRRPart0bra0ket0mp001(inteval, &(inteval->stack[((hsi*165+21525)*1+lsi)*1]), &(inteval->stack[((hsi*66+3850)*1+lsi)*1]), &(inteval->stack[((hsi*55+3916)*1+lsi)*1]), &(inteval->stack[((hsi*55+855)*1+lsi)*1]),1);
HRRPart0bra0ket0ld001(inteval, &(inteval->stack[((hsi*270+21690)*1+lsi)*1]), &(inteval->stack[((hsi*165+21525)*1+lsi)*1]), &(inteval->stack[((hsi*135+21390)*1+lsi)*1]), &(inteval->stack[((hsi*135+11828)*1+lsi)*1]),1);
HRRPart0bra0ket0psp001(inteval, &(inteval->stack[((hsi*198+21960)*1+lsi)*1]), &(inteval->stack[((hsi*78+3772)*1+lsi)*1]), &(inteval->stack[((hsi*66+3850)*1+lsi)*1]), &(inteval->stack[((hsi*66+734)*1+lsi)*1]),1);
HRRPart0bra0ket0md001(inteval, &(inteval->stack[((hsi*330+22158)*1+lsi)*1]), &(inteval->stack[((hsi*198+21960)*1+lsi)*1]), &(inteval->stack[((hsi*165+21525)*1+lsi)*1]), &(inteval->stack[((hsi*165+11963)*1+lsi)*1]),1);
HRRPart0bra0ket0lf001(inteval, &(inteval->stack[((hsi*450+22488)*1+lsi)*1]), &(inteval->stack[((hsi*330+22158)*1+lsi)*1]), &(inteval->stack[((hsi*270+21690)*1+lsi)*1]), &(inteval->stack[((hsi*270+12128)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp001(inteval, &(inteval->stack[((hsi*234+22938)*1+lsi)*1]), &(inteval->stack[((hsi*91+3681)*1+lsi)*1]), &(inteval->stack[((hsi*78+3772)*1+lsi)*1]), &(inteval->stack[((hsi*78+590)*1+lsi)*1]),1);
HRRPart0bra0ket0psd001(inteval, &(inteval->stack[((hsi*396+23172)*1+lsi)*1]), &(inteval->stack[((hsi*234+22938)*1+lsi)*1]), &(inteval->stack[((hsi*198+21960)*1+lsi)*1]), &(inteval->stack[((hsi*198+12398)*1+lsi)*1]),1);
HRRPart0bra0ket0mf001(inteval, &(inteval->stack[((hsi*550+23568)*1+lsi)*1]), &(inteval->stack[((hsi*396+23172)*1+lsi)*1]), &(inteval->stack[((hsi*330+22158)*1+lsi)*1]), &(inteval->stack[((hsi*330+12596)*1+lsi)*1]),1);
HRRPart0bra0ket0lg001(inteval, &(inteval->stack[((hsi*675+24118)*1+lsi)*1]), &(inteval->stack[((hsi*550+23568)*1+lsi)*1]), &(inteval->stack[((hsi*450+22488)*1+lsi)*1]), &(inteval->stack[((hsi*450+12926)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp001(inteval, &(inteval->stack[((hsi*273+21960)*1+lsi)*1]), &(inteval->stack[((hsi*105+3576)*1+lsi)*1]), &(inteval->stack[((hsi*91+3681)*1+lsi)*1]), &(inteval->stack[((hsi*91+421)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd001(inteval, &(inteval->stack[((hsi*468+24793)*1+lsi)*1]), &(inteval->stack[((hsi*273+21960)*1+lsi)*1]), &(inteval->stack[((hsi*234+22938)*1+lsi)*1]), &(inteval->stack[((hsi*234+13376)*1+lsi)*1]),1);
HRRPart0bra0ket0psf001(inteval, &(inteval->stack[((hsi*660+25261)*1+lsi)*1]), &(inteval->stack[((hsi*468+24793)*1+lsi)*1]), &(inteval->stack[((hsi*396+23172)*1+lsi)*1]), &(inteval->stack[((hsi*396+13610)*1+lsi)*1]),1);
HRRPart0bra0ket0mg001(inteval, &(inteval->stack[((hsi*825+25921)*1+lsi)*1]), &(inteval->stack[((hsi*660+25261)*1+lsi)*1]), &(inteval->stack[((hsi*550+23568)*1+lsi)*1]), &(inteval->stack[((hsi*550+14006)*1+lsi)*1]),1);
HRRPart0bra0ket0lh001(inteval, &(inteval->stack[((hsi*945+22938)*1+lsi)*1]), &(inteval->stack[((hsi*825+25921)*1+lsi)*1]), &(inteval->stack[((hsi*675+24118)*1+lsi)*1]), &(inteval->stack[((hsi*675+14556)*1+lsi)*1]),1);
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+3681)*1+lsi)*1]), &(inteval->stack[((hsi*45+3971)*1+lsi)*1]), &(inteval->stack[((hsi*36+4016)*1+lsi)*1]), &(inteval->stack[((hsi*36+1036)*1+lsi)*1]),1);
HRRPart0bra0ket0kd001(inteval, &(inteval->stack[((hsi*216+3789)*1+lsi)*1]), &(inteval->stack[((hsi*135+21390)*1+lsi)*1]), &(inteval->stack[((hsi*108+3681)*1+lsi)*1]), &(inteval->stack[((hsi*108+15231)*1+lsi)*1]),1);
HRRPart0bra0ket0kf001(inteval, &(inteval->stack[((hsi*360+26746)*1+lsi)*1]), &(inteval->stack[((hsi*270+21690)*1+lsi)*1]), &(inteval->stack[((hsi*216+3789)*1+lsi)*1]), &(inteval->stack[((hsi*216+15339)*1+lsi)*1]),1);
HRRPart0bra0ket0kg001(inteval, &(inteval->stack[((hsi*540+21390)*1+lsi)*1]), &(inteval->stack[((hsi*450+22488)*1+lsi)*1]), &(inteval->stack[((hsi*360+26746)*1+lsi)*1]), &(inteval->stack[((hsi*360+15555)*1+lsi)*1]),1);
HRRPart0bra0ket0kh001(inteval, &(inteval->stack[((hsi*756+26746)*1+lsi)*1]), &(inteval->stack[((hsi*675+24118)*1+lsi)*1]), &(inteval->stack[((hsi*540+21390)*1+lsi)*1]), &(inteval->stack[((hsi*540+15915)*1+lsi)*1]),1);
HRRPart0bra0ket0ki001(inteval, &(inteval->stack[((hsi*1008+27502)*1+lsi)*1]), &(inteval->stack[((hsi*945+22938)*1+lsi)*1]), &(inteval->stack[((hsi*756+26746)*1+lsi)*1]), &(inteval->stack[((hsi*756+16455)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp001(inteval, &(inteval->stack[((hsi*315+23883)*1+lsi)*1]), &(inteval->stack[((hsi*120+3456)*1+lsi)*1]), &(inteval->stack[((hsi*105+3576)*1+lsi)*1]), &(inteval->stack[((hsi*105+225)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd001(inteval, &(inteval->stack[((hsi*546+26746)*1+lsi)*1]), &(inteval->stack[((hsi*315+23883)*1+lsi)*1]), &(inteval->stack[((hsi*273+21960)*1+lsi)*1]), &(inteval->stack[((hsi*273+17211)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf001(inteval, &(inteval->stack[((hsi*780+21390)*1+lsi)*1]), &(inteval->stack[((hsi*546+26746)*1+lsi)*1]), &(inteval->stack[((hsi*468+24793)*1+lsi)*1]), &(inteval->stack[((hsi*468+17484)*1+lsi)*1]),1);
HRRPart0bra0ket0psg001(inteval, &(inteval->stack[((hsi*990+23883)*1+lsi)*1]), &(inteval->stack[((hsi*780+21390)*1+lsi)*1]), &(inteval->stack[((hsi*660+25261)*1+lsi)*1]), &(inteval->stack[((hsi*660+17952)*1+lsi)*1]),1);
HRRPart0bra0ket0mh001(inteval, &(inteval->stack[((hsi*1155+21390)*1+lsi)*1]), &(inteval->stack[((hsi*990+23883)*1+lsi)*1]), &(inteval->stack[((hsi*825+25921)*1+lsi)*1]), &(inteval->stack[((hsi*825+18612)*1+lsi)*1]),1);
HRRPart0bra0ket0li001(inteval, &(inteval->stack[((hsi*1260+23883)*1+lsi)*1]), &(inteval->stack[((hsi*1155+21390)*1+lsi)*1]), &(inteval->stack[((hsi*945+22938)*1+lsi)*1]), &(inteval->stack[((hsi*945+19437)*1+lsi)*1]),1);
HRRPart0bra0ket0kk001(inteval, &(inteval->stack[((hsi*1296+10532)*1+lsi)*1]), &(inteval->stack[((hsi*1260+23883)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27502)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20382)*1+lsi)*1]),1);
HRRPart0bra0ket0lp010(inteval, &(inteval->stack[((hsi*135+21390)*1+lsi)*1]), &(inteval->stack[((hsi*55+3320)*1+lsi)*1]), &(inteval->stack[((hsi*45+3375)*1+lsi)*1]), &(inteval->stack[((hsi*45+955)*1+lsi)*1]),1);
HRRPart0bra0ket0mp010(inteval, &(inteval->stack[((hsi*165+25143)*1+lsi)*1]), &(inteval->stack[((hsi*66+3254)*1+lsi)*1]), &(inteval->stack[((hsi*55+3320)*1+lsi)*1]), &(inteval->stack[((hsi*55+855)*1+lsi)*1]),1);
HRRPart0bra0ket0ld010(inteval, &(inteval->stack[((hsi*270+21525)*1+lsi)*1]), &(inteval->stack[((hsi*165+25143)*1+lsi)*1]), &(inteval->stack[((hsi*135+21390)*1+lsi)*1]), &(inteval->stack[((hsi*135+11828)*1+lsi)*1]),1);
HRRPart0bra0ket0psp010(inteval, &(inteval->stack[((hsi*198+25308)*1+lsi)*1]), &(inteval->stack[((hsi*78+3176)*1+lsi)*1]), &(inteval->stack[((hsi*66+3254)*1+lsi)*1]), &(inteval->stack[((hsi*66+734)*1+lsi)*1]),1);
HRRPart0bra0ket0md010(inteval, &(inteval->stack[((hsi*330+21795)*1+lsi)*1]), &(inteval->stack[((hsi*198+25308)*1+lsi)*1]), &(inteval->stack[((hsi*165+25143)*1+lsi)*1]), &(inteval->stack[((hsi*165+11963)*1+lsi)*1]),1);
HRRPart0bra0ket0lf010(inteval, &(inteval->stack[((hsi*450+25506)*1+lsi)*1]), &(inteval->stack[((hsi*330+21795)*1+lsi)*1]), &(inteval->stack[((hsi*270+21525)*1+lsi)*1]), &(inteval->stack[((hsi*270+12128)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp010(inteval, &(inteval->stack[((hsi*234+22125)*1+lsi)*1]), &(inteval->stack[((hsi*91+3085)*1+lsi)*1]), &(inteval->stack[((hsi*78+3176)*1+lsi)*1]), &(inteval->stack[((hsi*78+590)*1+lsi)*1]),1);
HRRPart0bra0ket0psd010(inteval, &(inteval->stack[((hsi*396+25956)*1+lsi)*1]), &(inteval->stack[((hsi*234+22125)*1+lsi)*1]), &(inteval->stack[((hsi*198+25308)*1+lsi)*1]), &(inteval->stack[((hsi*198+12398)*1+lsi)*1]),1);
HRRPart0bra0ket0mf010(inteval, &(inteval->stack[((hsi*550+22359)*1+lsi)*1]), &(inteval->stack[((hsi*396+25956)*1+lsi)*1]), &(inteval->stack[((hsi*330+21795)*1+lsi)*1]), &(inteval->stack[((hsi*330+12596)*1+lsi)*1]),1);
HRRPart0bra0ket0lg010(inteval, &(inteval->stack[((hsi*675+26352)*1+lsi)*1]), &(inteval->stack[((hsi*550+22359)*1+lsi)*1]), &(inteval->stack[((hsi*450+25506)*1+lsi)*1]), &(inteval->stack[((hsi*450+12926)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp010(inteval, &(inteval->stack[((hsi*273+22909)*1+lsi)*1]), &(inteval->stack[((hsi*105+2980)*1+lsi)*1]), &(inteval->stack[((hsi*91+3085)*1+lsi)*1]), &(inteval->stack[((hsi*91+421)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd010(inteval, &(inteval->stack[((hsi*468+23182)*1+lsi)*1]), &(inteval->stack[((hsi*273+22909)*1+lsi)*1]), &(inteval->stack[((hsi*234+22125)*1+lsi)*1]), &(inteval->stack[((hsi*234+13376)*1+lsi)*1]),1);
HRRPart0bra0ket0psf010(inteval, &(inteval->stack[((hsi*660+28510)*1+lsi)*1]), &(inteval->stack[((hsi*468+23182)*1+lsi)*1]), &(inteval->stack[((hsi*396+25956)*1+lsi)*1]), &(inteval->stack[((hsi*396+13610)*1+lsi)*1]),1);
HRRPart0bra0ket0mg010(inteval, &(inteval->stack[((hsi*825+29170)*1+lsi)*1]), &(inteval->stack[((hsi*660+28510)*1+lsi)*1]), &(inteval->stack[((hsi*550+22359)*1+lsi)*1]), &(inteval->stack[((hsi*550+14006)*1+lsi)*1]),1);
HRRPart0bra0ket0lh010(inteval, &(inteval->stack[((hsi*945+21795)*1+lsi)*1]), &(inteval->stack[((hsi*825+29170)*1+lsi)*1]), &(inteval->stack[((hsi*675+26352)*1+lsi)*1]), &(inteval->stack[((hsi*675+14556)*1+lsi)*1]),1);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+3456)*1+lsi)*1]), &(inteval->stack[((hsi*45+3375)*1+lsi)*1]), &(inteval->stack[((hsi*36+3420)*1+lsi)*1]), &(inteval->stack[((hsi*36+1036)*1+lsi)*1]),1);
HRRPart0bra0ket0kd010(inteval, &(inteval->stack[((hsi*216+3564)*1+lsi)*1]), &(inteval->stack[((hsi*135+21390)*1+lsi)*1]), &(inteval->stack[((hsi*108+3456)*1+lsi)*1]), &(inteval->stack[((hsi*108+15231)*1+lsi)*1]),1);
HRRPart0bra0ket0kf010(inteval, &(inteval->stack[((hsi*360+3085)*1+lsi)*1]), &(inteval->stack[((hsi*270+21525)*1+lsi)*1]), &(inteval->stack[((hsi*216+3564)*1+lsi)*1]), &(inteval->stack[((hsi*216+15339)*1+lsi)*1]),1);
HRRPart0bra0ket0kg010(inteval, &(inteval->stack[((hsi*540+3445)*1+lsi)*1]), &(inteval->stack[((hsi*450+25506)*1+lsi)*1]), &(inteval->stack[((hsi*360+3085)*1+lsi)*1]), &(inteval->stack[((hsi*360+15555)*1+lsi)*1]),1);
HRRPart0bra0ket0kh010(inteval, &(inteval->stack[((hsi*756+25143)*1+lsi)*1]), &(inteval->stack[((hsi*675+26352)*1+lsi)*1]), &(inteval->stack[((hsi*540+3445)*1+lsi)*1]), &(inteval->stack[((hsi*540+15915)*1+lsi)*1]),1);
HRRPart0bra0ket0ki010(inteval, &(inteval->stack[((hsi*1008+25899)*1+lsi)*1]), &(inteval->stack[((hsi*945+21795)*1+lsi)*1]), &(inteval->stack[((hsi*756+25143)*1+lsi)*1]), &(inteval->stack[((hsi*756+16455)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp010(inteval, &(inteval->stack[((hsi*315+3085)*1+lsi)*1]), &(inteval->stack[((hsi*120+2860)*1+lsi)*1]), &(inteval->stack[((hsi*105+2980)*1+lsi)*1]), &(inteval->stack[((hsi*105+225)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd010(inteval, &(inteval->stack[((hsi*546+25143)*1+lsi)*1]), &(inteval->stack[((hsi*315+3085)*1+lsi)*1]), &(inteval->stack[((hsi*273+22909)*1+lsi)*1]), &(inteval->stack[((hsi*273+17211)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf010(inteval, &(inteval->stack[((hsi*780+2860)*1+lsi)*1]), &(inteval->stack[((hsi*546+25143)*1+lsi)*1]), &(inteval->stack[((hsi*468+23182)*1+lsi)*1]), &(inteval->stack[((hsi*468+17484)*1+lsi)*1]),1);
HRRPart0bra0ket0psg010(inteval, &(inteval->stack[((hsi*990+22740)*1+lsi)*1]), &(inteval->stack[((hsi*780+2860)*1+lsi)*1]), &(inteval->stack[((hsi*660+28510)*1+lsi)*1]), &(inteval->stack[((hsi*660+17952)*1+lsi)*1]),1);
HRRPart0bra0ket0mh010(inteval, &(inteval->stack[((hsi*1155+2860)*1+lsi)*1]), &(inteval->stack[((hsi*990+22740)*1+lsi)*1]), &(inteval->stack[((hsi*825+29170)*1+lsi)*1]), &(inteval->stack[((hsi*825+18612)*1+lsi)*1]),1);
HRRPart0bra0ket0li010(inteval, &(inteval->stack[((hsi*1260+28510)*1+lsi)*1]), &(inteval->stack[((hsi*1155+2860)*1+lsi)*1]), &(inteval->stack[((hsi*945+21795)*1+lsi)*1]), &(inteval->stack[((hsi*945+19437)*1+lsi)*1]),1);
HRRPart0bra0ket0kk010(inteval, &(inteval->stack[((hsi*1296+9236)*1+lsi)*1]), &(inteval->stack[((hsi*1260+28510)*1+lsi)*1]), &(inteval->stack[((hsi*1008+25899)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20382)*1+lsi)*1]),1);
HRRPart0bra0ket0lp100(inteval, &(inteval->stack[((hsi*135+21390)*1+lsi)*1]), &(inteval->stack[((hsi*55+2724)*1+lsi)*1]), &(inteval->stack[((hsi*45+2779)*1+lsi)*1]), &(inteval->stack[((hsi*45+955)*1+lsi)*1]),1);
HRRPart0bra0ket0mp100(inteval, &(inteval->stack[((hsi*165+21525)*1+lsi)*1]), &(inteval->stack[((hsi*66+2658)*1+lsi)*1]), &(inteval->stack[((hsi*55+2724)*1+lsi)*1]), &(inteval->stack[((hsi*55+855)*1+lsi)*1]),1);
HRRPart0bra0ket0ld100(inteval, &(inteval->stack[((hsi*270+21690)*1+lsi)*1]), &(inteval->stack[((hsi*165+21525)*1+lsi)*1]), &(inteval->stack[((hsi*135+21390)*1+lsi)*1]), &(inteval->stack[((hsi*135+11828)*1+lsi)*1]),1);
HRRPart0bra0ket0psp100(inteval, &(inteval->stack[((hsi*198+21960)*1+lsi)*1]), &(inteval->stack[((hsi*78+2580)*1+lsi)*1]), &(inteval->stack[((hsi*66+2658)*1+lsi)*1]), &(inteval->stack[((hsi*66+734)*1+lsi)*1]),1);
HRRPart0bra0ket0md100(inteval, &(inteval->stack[((hsi*330+22158)*1+lsi)*1]), &(inteval->stack[((hsi*198+21960)*1+lsi)*1]), &(inteval->stack[((hsi*165+21525)*1+lsi)*1]), &(inteval->stack[((hsi*165+11963)*1+lsi)*1]),1);
HRRPart0bra0ket0lf100(inteval, &(inteval->stack[((hsi*450+22488)*1+lsi)*1]), &(inteval->stack[((hsi*330+22158)*1+lsi)*1]), &(inteval->stack[((hsi*270+21690)*1+lsi)*1]), &(inteval->stack[((hsi*270+12128)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp100(inteval, &(inteval->stack[((hsi*234+2860)*1+lsi)*1]), &(inteval->stack[((hsi*91+2489)*1+lsi)*1]), &(inteval->stack[((hsi*78+2580)*1+lsi)*1]), &(inteval->stack[((hsi*78+590)*1+lsi)*1]),1);
HRRPart0bra0ket0psd100(inteval, &(inteval->stack[((hsi*396+3094)*1+lsi)*1]), &(inteval->stack[((hsi*234+2860)*1+lsi)*1]), &(inteval->stack[((hsi*198+21960)*1+lsi)*1]), &(inteval->stack[((hsi*198+12398)*1+lsi)*1]),1);
HRRPart0bra0ket0mf100(inteval, &(inteval->stack[((hsi*550+22938)*1+lsi)*1]), &(inteval->stack[((hsi*396+3094)*1+lsi)*1]), &(inteval->stack[((hsi*330+22158)*1+lsi)*1]), &(inteval->stack[((hsi*330+12596)*1+lsi)*1]),1);
HRRPart0bra0ket0lg100(inteval, &(inteval->stack[((hsi*675+25143)*1+lsi)*1]), &(inteval->stack[((hsi*550+22938)*1+lsi)*1]), &(inteval->stack[((hsi*450+22488)*1+lsi)*1]), &(inteval->stack[((hsi*450+12926)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp100(inteval, &(inteval->stack[((hsi*273+26907)*1+lsi)*1]), &(inteval->stack[((hsi*105+2384)*1+lsi)*1]), &(inteval->stack[((hsi*91+2489)*1+lsi)*1]), &(inteval->stack[((hsi*91+421)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd100(inteval, &(inteval->stack[((hsi*468+3490)*1+lsi)*1]), &(inteval->stack[((hsi*273+26907)*1+lsi)*1]), &(inteval->stack[((hsi*234+2860)*1+lsi)*1]), &(inteval->stack[((hsi*234+13376)*1+lsi)*1]),1);
HRRPart0bra0ket0psf100(inteval, &(inteval->stack[((hsi*660+29770)*1+lsi)*1]), &(inteval->stack[((hsi*468+3490)*1+lsi)*1]), &(inteval->stack[((hsi*396+3094)*1+lsi)*1]), &(inteval->stack[((hsi*396+13610)*1+lsi)*1]),1);
HRRPart0bra0ket0mg100(inteval, &(inteval->stack[((hsi*825+30430)*1+lsi)*1]), &(inteval->stack[((hsi*660+29770)*1+lsi)*1]), &(inteval->stack[((hsi*550+22938)*1+lsi)*1]), &(inteval->stack[((hsi*550+14006)*1+lsi)*1]),1);
HRRPart0bra0ket0lh100(inteval, &(inteval->stack[((hsi*945+22938)*1+lsi)*1]), &(inteval->stack[((hsi*825+30430)*1+lsi)*1]), &(inteval->stack[((hsi*675+25143)*1+lsi)*1]), &(inteval->stack[((hsi*675+14556)*1+lsi)*1]),1);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+2860)*1+lsi)*1]), &(inteval->stack[((hsi*45+2779)*1+lsi)*1]), &(inteval->stack[((hsi*36+2824)*1+lsi)*1]), &(inteval->stack[((hsi*36+1036)*1+lsi)*1]),1);
HRRPart0bra0ket0kd100(inteval, &(inteval->stack[((hsi*216+21960)*1+lsi)*1]), &(inteval->stack[((hsi*135+21390)*1+lsi)*1]), &(inteval->stack[((hsi*108+2860)*1+lsi)*1]), &(inteval->stack[((hsi*108+15231)*1+lsi)*1]),1);
HRRPart0bra0ket0kf100(inteval, &(inteval->stack[((hsi*360+2489)*1+lsi)*1]), &(inteval->stack[((hsi*270+21690)*1+lsi)*1]), &(inteval->stack[((hsi*216+21960)*1+lsi)*1]), &(inteval->stack[((hsi*216+15339)*1+lsi)*1]),1);
HRRPart0bra0ket0kg100(inteval, &(inteval->stack[((hsi*540+21390)*1+lsi)*1]), &(inteval->stack[((hsi*450+22488)*1+lsi)*1]), &(inteval->stack[((hsi*360+2489)*1+lsi)*1]), &(inteval->stack[((hsi*360+15555)*1+lsi)*1]),1);
HRRPart0bra0ket0kh100(inteval, &(inteval->stack[((hsi*756+21930)*1+lsi)*1]), &(inteval->stack[((hsi*675+25143)*1+lsi)*1]), &(inteval->stack[((hsi*540+21390)*1+lsi)*1]), &(inteval->stack[((hsi*540+15915)*1+lsi)*1]),1);
HRRPart0bra0ket0ki100(inteval, &(inteval->stack[((hsi*1008+31255)*1+lsi)*1]), &(inteval->stack[((hsi*945+22938)*1+lsi)*1]), &(inteval->stack[((hsi*756+21930)*1+lsi)*1]), &(inteval->stack[((hsi*756+16455)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp100(inteval, &(inteval->stack[((hsi*315+21390)*1+lsi)*1]), &(inteval->stack[((hsi*120+2264)*1+lsi)*1]), &(inteval->stack[((hsi*105+2384)*1+lsi)*1]), &(inteval->stack[((hsi*105+225)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd100(inteval, &(inteval->stack[((hsi*546+21705)*1+lsi)*1]), &(inteval->stack[((hsi*315+21390)*1+lsi)*1]), &(inteval->stack[((hsi*273+26907)*1+lsi)*1]), &(inteval->stack[((hsi*273+17211)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf100(inteval, &(inteval->stack[((hsi*780+2264)*1+lsi)*1]), &(inteval->stack[((hsi*546+21705)*1+lsi)*1]), &(inteval->stack[((hsi*468+3490)*1+lsi)*1]), &(inteval->stack[((hsi*468+17484)*1+lsi)*1]),1);
HRRPart0bra0ket0psg100(inteval, &(inteval->stack[((hsi*990+21390)*1+lsi)*1]), &(inteval->stack[((hsi*780+2264)*1+lsi)*1]), &(inteval->stack[((hsi*660+29770)*1+lsi)*1]), &(inteval->stack[((hsi*660+17952)*1+lsi)*1]),1);
HRRPart0bra0ket0mh100(inteval, &(inteval->stack[((hsi*1155+2264)*1+lsi)*1]), &(inteval->stack[((hsi*990+21390)*1+lsi)*1]), &(inteval->stack[((hsi*825+30430)*1+lsi)*1]), &(inteval->stack[((hsi*825+18612)*1+lsi)*1]),1);
HRRPart0bra0ket0li100(inteval, &(inteval->stack[((hsi*1260+21390)*1+lsi)*1]), &(inteval->stack[((hsi*1155+2264)*1+lsi)*1]), &(inteval->stack[((hsi*945+22938)*1+lsi)*1]), &(inteval->stack[((hsi*945+19437)*1+lsi)*1]),1);
HRRPart0bra0ket0kk100(inteval, &(inteval->stack[((hsi*1296+7940)*1+lsi)*1]), &(inteval->stack[((hsi*1260+21390)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31255)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20382)*1+lsi)*1]),1);
HRRPart0bra0ket0l001p(inteval, &(inteval->stack[((hsi*135+2264)*1+lsi)*1]), &(inteval->stack[((hsi*55+2128)*1+lsi)*1]), &(inteval->stack[((hsi*45+2183)*1+lsi)*1]), &(inteval->stack[((hsi*45+955)*1+lsi)*1]),1);
HRRPart0bra0ket0m001p(inteval, &(inteval->stack[((hsi*165+2399)*1+lsi)*1]), &(inteval->stack[((hsi*66+2062)*1+lsi)*1]), &(inteval->stack[((hsi*55+2128)*1+lsi)*1]), &(inteval->stack[((hsi*55+855)*1+lsi)*1]),1);
HRRPart0bra0ket0l001d(inteval, &(inteval->stack[((hsi*270+2564)*1+lsi)*1]), &(inteval->stack[((hsi*165+2399)*1+lsi)*1]), &(inteval->stack[((hsi*135+2264)*1+lsi)*1]), &(inteval->stack[((hsi*135+11828)*1+lsi)*1]),1);
HRRPart0bra0ket0ps001p(inteval, &(inteval->stack[((hsi*198+29770)*1+lsi)*1]), &(inteval->stack[((hsi*78+1984)*1+lsi)*1]), &(inteval->stack[((hsi*66+2062)*1+lsi)*1]), &(inteval->stack[((hsi*66+734)*1+lsi)*1]),1);
HRRPart0bra0ket0m001d(inteval, &(inteval->stack[((hsi*330+29968)*1+lsi)*1]), &(inteval->stack[((hsi*198+29770)*1+lsi)*1]), &(inteval->stack[((hsi*165+2399)*1+lsi)*1]), &(inteval->stack[((hsi*165+11963)*1+lsi)*1]),1);
HRRPart0bra0ket0l001f(inteval, &(inteval->stack[((hsi*450+22650)*1+lsi)*1]), &(inteval->stack[((hsi*330+29968)*1+lsi)*1]), &(inteval->stack[((hsi*270+2564)*1+lsi)*1]), &(inteval->stack[((hsi*270+12128)*1+lsi)*1]),1);
HRRPart0bra0ket0pp001p(inteval, &(inteval->stack[((hsi*234+2834)*1+lsi)*1]), &(inteval->stack[((hsi*91+1893)*1+lsi)*1]), &(inteval->stack[((hsi*78+1984)*1+lsi)*1]), &(inteval->stack[((hsi*78+590)*1+lsi)*1]),1);
HRRPart0bra0ket0ps001d(inteval, &(inteval->stack[((hsi*396+3068)*1+lsi)*1]), &(inteval->stack[((hsi*234+2834)*1+lsi)*1]), &(inteval->stack[((hsi*198+29770)*1+lsi)*1]), &(inteval->stack[((hsi*198+12398)*1+lsi)*1]),1);
HRRPart0bra0ket0m001f(inteval, &(inteval->stack[((hsi*550+30298)*1+lsi)*1]), &(inteval->stack[((hsi*396+3068)*1+lsi)*1]), &(inteval->stack[((hsi*330+29968)*1+lsi)*1]), &(inteval->stack[((hsi*330+12596)*1+lsi)*1]),1);
HRRPart0bra0ket0l001g(inteval, &(inteval->stack[((hsi*675+23100)*1+lsi)*1]), &(inteval->stack[((hsi*550+30298)*1+lsi)*1]), &(inteval->stack[((hsi*450+22650)*1+lsi)*1]), &(inteval->stack[((hsi*450+12926)*1+lsi)*1]),1);
HRRPart0bra0ket0pd001p(inteval, &(inteval->stack[((hsi*273+25143)*1+lsi)*1]), &(inteval->stack[((hsi*105+1788)*1+lsi)*1]), &(inteval->stack[((hsi*91+1893)*1+lsi)*1]), &(inteval->stack[((hsi*91+421)*1+lsi)*1]),1);
HRRPart0bra0ket0pp001d(inteval, &(inteval->stack[((hsi*468+26907)*1+lsi)*1]), &(inteval->stack[((hsi*273+25143)*1+lsi)*1]), &(inteval->stack[((hsi*234+2834)*1+lsi)*1]), &(inteval->stack[((hsi*234+13376)*1+lsi)*1]),1);
HRRPart0bra0ket0ps001f(inteval, &(inteval->stack[((hsi*660+32263)*1+lsi)*1]), &(inteval->stack[((hsi*468+26907)*1+lsi)*1]), &(inteval->stack[((hsi*396+3068)*1+lsi)*1]), &(inteval->stack[((hsi*396+13610)*1+lsi)*1]),1);
HRRPart0bra0ket0m001g(inteval, &(inteval->stack[((hsi*825+2834)*1+lsi)*1]), &(inteval->stack[((hsi*660+32263)*1+lsi)*1]), &(inteval->stack[((hsi*550+30298)*1+lsi)*1]), &(inteval->stack[((hsi*550+14006)*1+lsi)*1]),1);
HRRPart0bra0ket0l001h(inteval, &(inteval->stack[((hsi*945+29770)*1+lsi)*1]), &(inteval->stack[((hsi*825+2834)*1+lsi)*1]), &(inteval->stack[((hsi*675+23100)*1+lsi)*1]), &(inteval->stack[((hsi*675+14556)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+23775)*1+lsi)*1]), &(inteval->stack[((hsi*45+2183)*1+lsi)*1]), &(inteval->stack[((hsi*36+2228)*1+lsi)*1]), &(inteval->stack[((hsi*36+1036)*1+lsi)*1]),1);
HRRPart0bra0ket0k001d(inteval, &(inteval->stack[((hsi*216+30715)*1+lsi)*1]), &(inteval->stack[((hsi*135+2264)*1+lsi)*1]), &(inteval->stack[((hsi*108+23775)*1+lsi)*1]), &(inteval->stack[((hsi*108+15231)*1+lsi)*1]),1);
HRRPart0bra0ket0k001f(inteval, &(inteval->stack[((hsi*360+1893)*1+lsi)*1]), &(inteval->stack[((hsi*270+2564)*1+lsi)*1]), &(inteval->stack[((hsi*216+30715)*1+lsi)*1]), &(inteval->stack[((hsi*216+15339)*1+lsi)*1]),1);
HRRPart0bra0ket0k001g(inteval, &(inteval->stack[((hsi*540+30715)*1+lsi)*1]), &(inteval->stack[((hsi*450+22650)*1+lsi)*1]), &(inteval->stack[((hsi*360+1893)*1+lsi)*1]), &(inteval->stack[((hsi*360+15555)*1+lsi)*1]),1);
HRRPart0bra0ket0k001h(inteval, &(inteval->stack[((hsi*756+1893)*1+lsi)*1]), &(inteval->stack[((hsi*675+23100)*1+lsi)*1]), &(inteval->stack[((hsi*540+30715)*1+lsi)*1]), &(inteval->stack[((hsi*540+15915)*1+lsi)*1]),1);
HRRPart0bra0ket0k001i(inteval, &(inteval->stack[((hsi*1008+22650)*1+lsi)*1]), &(inteval->stack[((hsi*945+29770)*1+lsi)*1]), &(inteval->stack[((hsi*756+1893)*1+lsi)*1]), &(inteval->stack[((hsi*756+16455)*1+lsi)*1]),1);
HRRPart0bra0ket0pf001p(inteval, &(inteval->stack[((hsi*315+1893)*1+lsi)*1]), &(inteval->stack[((hsi*120+1668)*1+lsi)*1]), &(inteval->stack[((hsi*105+1788)*1+lsi)*1]), &(inteval->stack[((hsi*105+225)*1+lsi)*1]),1);
HRRPart0bra0ket0pd001d(inteval, &(inteval->stack[((hsi*546+2208)*1+lsi)*1]), &(inteval->stack[((hsi*315+1893)*1+lsi)*1]), &(inteval->stack[((hsi*273+25143)*1+lsi)*1]), &(inteval->stack[((hsi*273+17211)*1+lsi)*1]),1);
HRRPart0bra0ket0pp001f(inteval, &(inteval->stack[((hsi*780+32923)*1+lsi)*1]), &(inteval->stack[((hsi*546+2208)*1+lsi)*1]), &(inteval->stack[((hsi*468+26907)*1+lsi)*1]), &(inteval->stack[((hsi*468+17484)*1+lsi)*1]),1);
HRRPart0bra0ket0ps001g(inteval, &(inteval->stack[((hsi*990+1668)*1+lsi)*1]), &(inteval->stack[((hsi*780+32923)*1+lsi)*1]), &(inteval->stack[((hsi*660+32263)*1+lsi)*1]), &(inteval->stack[((hsi*660+17952)*1+lsi)*1]),1);
HRRPart0bra0ket0m001h(inteval, &(inteval->stack[((hsi*1155+32263)*1+lsi)*1]), &(inteval->stack[((hsi*990+1668)*1+lsi)*1]), &(inteval->stack[((hsi*825+2834)*1+lsi)*1]), &(inteval->stack[((hsi*825+18612)*1+lsi)*1]),1);
HRRPart0bra0ket0l001i(inteval, &(inteval->stack[((hsi*1260+1668)*1+lsi)*1]), &(inteval->stack[((hsi*1155+32263)*1+lsi)*1]), &(inteval->stack[((hsi*945+29770)*1+lsi)*1]), &(inteval->stack[((hsi*945+19437)*1+lsi)*1]),1);
HRRPart0bra0ket0k001k(inteval, &(inteval->stack[((hsi*1296+6644)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1668)*1+lsi)*1]), &(inteval->stack[((hsi*1008+22650)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20382)*1+lsi)*1]),1);
HRRPart0bra0ket0l010p(inteval, &(inteval->stack[((hsi*135+29770)*1+lsi)*1]), &(inteval->stack[((hsi*55+1532)*1+lsi)*1]), &(inteval->stack[((hsi*45+1587)*1+lsi)*1]), &(inteval->stack[((hsi*45+955)*1+lsi)*1]),1);
HRRPart0bra0ket0m010p(inteval, &(inteval->stack[((hsi*165+29905)*1+lsi)*1]), &(inteval->stack[((hsi*66+1466)*1+lsi)*1]), &(inteval->stack[((hsi*55+1532)*1+lsi)*1]), &(inteval->stack[((hsi*55+855)*1+lsi)*1]),1);
HRRPart0bra0ket0l010d(inteval, &(inteval->stack[((hsi*270+30070)*1+lsi)*1]), &(inteval->stack[((hsi*165+29905)*1+lsi)*1]), &(inteval->stack[((hsi*135+29770)*1+lsi)*1]), &(inteval->stack[((hsi*135+11828)*1+lsi)*1]),1);
HRRPart0bra0ket0ps010p(inteval, &(inteval->stack[((hsi*198+2928)*1+lsi)*1]), &(inteval->stack[((hsi*78+1388)*1+lsi)*1]), &(inteval->stack[((hsi*66+1466)*1+lsi)*1]), &(inteval->stack[((hsi*66+734)*1+lsi)*1]),1);
HRRPart0bra0ket0m010d(inteval, &(inteval->stack[((hsi*330+3126)*1+lsi)*1]), &(inteval->stack[((hsi*198+2928)*1+lsi)*1]), &(inteval->stack[((hsi*165+29905)*1+lsi)*1]), &(inteval->stack[((hsi*165+11963)*1+lsi)*1]),1);
HRRPart0bra0ket0l010f(inteval, &(inteval->stack[((hsi*450+30340)*1+lsi)*1]), &(inteval->stack[((hsi*330+3126)*1+lsi)*1]), &(inteval->stack[((hsi*270+30070)*1+lsi)*1]), &(inteval->stack[((hsi*270+12128)*1+lsi)*1]),1);
HRRPart0bra0ket0pp010p(inteval, &(inteval->stack[((hsi*234+25143)*1+lsi)*1]), &(inteval->stack[((hsi*91+1297)*1+lsi)*1]), &(inteval->stack[((hsi*78+1388)*1+lsi)*1]), &(inteval->stack[((hsi*78+590)*1+lsi)*1]),1);
HRRPart0bra0ket0ps010d(inteval, &(inteval->stack[((hsi*396+3456)*1+lsi)*1]), &(inteval->stack[((hsi*234+25143)*1+lsi)*1]), &(inteval->stack[((hsi*198+2928)*1+lsi)*1]), &(inteval->stack[((hsi*198+12398)*1+lsi)*1]),1);
HRRPart0bra0ket0m010f(inteval, &(inteval->stack[((hsi*550+26907)*1+lsi)*1]), &(inteval->stack[((hsi*396+3456)*1+lsi)*1]), &(inteval->stack[((hsi*330+3126)*1+lsi)*1]), &(inteval->stack[((hsi*330+12596)*1+lsi)*1]),1);
HRRPart0bra0ket0l010g(inteval, &(inteval->stack[((hsi*675+32263)*1+lsi)*1]), &(inteval->stack[((hsi*550+26907)*1+lsi)*1]), &(inteval->stack[((hsi*450+30340)*1+lsi)*1]), &(inteval->stack[((hsi*450+12926)*1+lsi)*1]),1);
HRRPart0bra0ket0pd010p(inteval, &(inteval->stack[((hsi*273+2928)*1+lsi)*1]), &(inteval->stack[((hsi*105+1192)*1+lsi)*1]), &(inteval->stack[((hsi*91+1297)*1+lsi)*1]), &(inteval->stack[((hsi*91+421)*1+lsi)*1]),1);
HRRPart0bra0ket0pp010d(inteval, &(inteval->stack[((hsi*468+25377)*1+lsi)*1]), &(inteval->stack[((hsi*273+2928)*1+lsi)*1]), &(inteval->stack[((hsi*234+25143)*1+lsi)*1]), &(inteval->stack[((hsi*234+13376)*1+lsi)*1]),1);
HRRPart0bra0ket0ps010f(inteval, &(inteval->stack[((hsi*660+32938)*1+lsi)*1]), &(inteval->stack[((hsi*468+25377)*1+lsi)*1]), &(inteval->stack[((hsi*396+3456)*1+lsi)*1]), &(inteval->stack[((hsi*396+13610)*1+lsi)*1]),1);
HRRPart0bra0ket0m010g(inteval, &(inteval->stack[((hsi*825+3201)*1+lsi)*1]), &(inteval->stack[((hsi*660+32938)*1+lsi)*1]), &(inteval->stack[((hsi*550+26907)*1+lsi)*1]), &(inteval->stack[((hsi*550+14006)*1+lsi)*1]),1);
HRRPart0bra0ket0l010h(inteval, &(inteval->stack[((hsi*945+33598)*1+lsi)*1]), &(inteval->stack[((hsi*825+3201)*1+lsi)*1]), &(inteval->stack[((hsi*675+32263)*1+lsi)*1]), &(inteval->stack[((hsi*675+14556)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+26907)*1+lsi)*1]), &(inteval->stack[((hsi*45+1587)*1+lsi)*1]), &(inteval->stack[((hsi*36+1632)*1+lsi)*1]), &(inteval->stack[((hsi*36+1036)*1+lsi)*1]),1);
HRRPart0bra0ket0k010d(inteval, &(inteval->stack[((hsi*216+27015)*1+lsi)*1]), &(inteval->stack[((hsi*135+29770)*1+lsi)*1]), &(inteval->stack[((hsi*108+26907)*1+lsi)*1]), &(inteval->stack[((hsi*108+15231)*1+lsi)*1]),1);
HRRPart0bra0ket0k010f(inteval, &(inteval->stack[((hsi*360+30790)*1+lsi)*1]), &(inteval->stack[((hsi*270+30070)*1+lsi)*1]), &(inteval->stack[((hsi*216+27015)*1+lsi)*1]), &(inteval->stack[((hsi*216+15339)*1+lsi)*1]),1);
HRRPart0bra0ket0k010g(inteval, &(inteval->stack[((hsi*540+26907)*1+lsi)*1]), &(inteval->stack[((hsi*450+30340)*1+lsi)*1]), &(inteval->stack[((hsi*360+30790)*1+lsi)*1]), &(inteval->stack[((hsi*360+15555)*1+lsi)*1]),1);
HRRPart0bra0ket0k010h(inteval, &(inteval->stack[((hsi*756+29770)*1+lsi)*1]), &(inteval->stack[((hsi*675+32263)*1+lsi)*1]), &(inteval->stack[((hsi*540+26907)*1+lsi)*1]), &(inteval->stack[((hsi*540+15915)*1+lsi)*1]),1);
HRRPart0bra0ket0k010i(inteval, &(inteval->stack[((hsi*1008+34543)*1+lsi)*1]), &(inteval->stack[((hsi*945+33598)*1+lsi)*1]), &(inteval->stack[((hsi*756+29770)*1+lsi)*1]), &(inteval->stack[((hsi*756+16455)*1+lsi)*1]),1);
HRRPart0bra0ket0pf010p(inteval, &(inteval->stack[((hsi*315+29770)*1+lsi)*1]), &(inteval->stack[((hsi*120+1072)*1+lsi)*1]), &(inteval->stack[((hsi*105+1192)*1+lsi)*1]), &(inteval->stack[((hsi*105+225)*1+lsi)*1]),1);
HRRPart0bra0ket0pd010d(inteval, &(inteval->stack[((hsi*546+30085)*1+lsi)*1]), &(inteval->stack[((hsi*315+29770)*1+lsi)*1]), &(inteval->stack[((hsi*273+2928)*1+lsi)*1]), &(inteval->stack[((hsi*273+17211)*1+lsi)*1]),1);
HRRPart0bra0ket0pp010f(inteval, &(inteval->stack[((hsi*780+35551)*1+lsi)*1]), &(inteval->stack[((hsi*546+30085)*1+lsi)*1]), &(inteval->stack[((hsi*468+25377)*1+lsi)*1]), &(inteval->stack[((hsi*468+17484)*1+lsi)*1]),1);
HRRPart0bra0ket0ps010g(inteval, &(inteval->stack[((hsi*990+29770)*1+lsi)*1]), &(inteval->stack[((hsi*780+35551)*1+lsi)*1]), &(inteval->stack[((hsi*660+32938)*1+lsi)*1]), &(inteval->stack[((hsi*660+17952)*1+lsi)*1]),1);
HRRPart0bra0ket0m010h(inteval, &(inteval->stack[((hsi*1155+32263)*1+lsi)*1]), &(inteval->stack[((hsi*990+29770)*1+lsi)*1]), &(inteval->stack[((hsi*825+3201)*1+lsi)*1]), &(inteval->stack[((hsi*825+18612)*1+lsi)*1]),1);
HRRPart0bra0ket0l010i(inteval, &(inteval->stack[((hsi*1260+29770)*1+lsi)*1]), &(inteval->stack[((hsi*1155+32263)*1+lsi)*1]), &(inteval->stack[((hsi*945+33598)*1+lsi)*1]), &(inteval->stack[((hsi*945+19437)*1+lsi)*1]),1);
HRRPart0bra0ket0k010k(inteval, &(inteval->stack[((hsi*1296+5348)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29770)*1+lsi)*1]), &(inteval->stack[((hsi*1008+34543)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20382)*1+lsi)*1]),1);
HRRPart0bra0ket0l100p(inteval, &(inteval->stack[((hsi*135+32263)*1+lsi)*1]), &(inteval->stack[((hsi*55+800)*1+lsi)*1]), &(inteval->stack[((hsi*45+910)*1+lsi)*1]), &(inteval->stack[((hsi*45+955)*1+lsi)*1]),1);
HRRPart0bra0ket0m100p(inteval, &(inteval->stack[((hsi*165+32398)*1+lsi)*1]), &(inteval->stack[((hsi*66+668)*1+lsi)*1]), &(inteval->stack[((hsi*55+800)*1+lsi)*1]), &(inteval->stack[((hsi*55+855)*1+lsi)*1]),1);
HRRPart0bra0ket0l100d(inteval, &(inteval->stack[((hsi*270+32563)*1+lsi)*1]), &(inteval->stack[((hsi*165+32398)*1+lsi)*1]), &(inteval->stack[((hsi*135+32263)*1+lsi)*1]), &(inteval->stack[((hsi*135+11828)*1+lsi)*1]),1);
HRRPart0bra0ket0ps100p(inteval, &(inteval->stack[((hsi*198+32833)*1+lsi)*1]), &(inteval->stack[((hsi*78+512)*1+lsi)*1]), &(inteval->stack[((hsi*66+668)*1+lsi)*1]), &(inteval->stack[((hsi*66+734)*1+lsi)*1]),1);
HRRPart0bra0ket0m100d(inteval, &(inteval->stack[((hsi*330+33031)*1+lsi)*1]), &(inteval->stack[((hsi*198+32833)*1+lsi)*1]), &(inteval->stack[((hsi*165+32398)*1+lsi)*1]), &(inteval->stack[((hsi*165+11963)*1+lsi)*1]),1);
HRRPart0bra0ket0l100f(inteval, &(inteval->stack[((hsi*450+33361)*1+lsi)*1]), &(inteval->stack[((hsi*330+33031)*1+lsi)*1]), &(inteval->stack[((hsi*270+32563)*1+lsi)*1]), &(inteval->stack[((hsi*270+12128)*1+lsi)*1]),1);
HRRPart0bra0ket0pp100p(inteval, &(inteval->stack[((hsi*234+2928)*1+lsi)*1]), &(inteval->stack[((hsi*91+330)*1+lsi)*1]), &(inteval->stack[((hsi*78+512)*1+lsi)*1]), &(inteval->stack[((hsi*78+590)*1+lsi)*1]),1);
HRRPart0bra0ket0ps100d(inteval, &(inteval->stack[((hsi*396+3162)*1+lsi)*1]), &(inteval->stack[((hsi*234+2928)*1+lsi)*1]), &(inteval->stack[((hsi*198+32833)*1+lsi)*1]), &(inteval->stack[((hsi*198+12398)*1+lsi)*1]),1);
HRRPart0bra0ket0m100f(inteval, &(inteval->stack[((hsi*550+11828)*1+lsi)*1]), &(inteval->stack[((hsi*396+3162)*1+lsi)*1]), &(inteval->stack[((hsi*330+33031)*1+lsi)*1]), &(inteval->stack[((hsi*330+12596)*1+lsi)*1]),1);
HRRPart0bra0ket0l100g(inteval, &(inteval->stack[((hsi*675+25143)*1+lsi)*1]), &(inteval->stack[((hsi*550+11828)*1+lsi)*1]), &(inteval->stack[((hsi*450+33361)*1+lsi)*1]), &(inteval->stack[((hsi*450+12926)*1+lsi)*1]),1);
HRRPart0bra0ket0pd100p(inteval, &(inteval->stack[((hsi*273+12378)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]), &(inteval->stack[((hsi*91+330)*1+lsi)*1]), &(inteval->stack[((hsi*91+421)*1+lsi)*1]),1);
HRRPart0bra0ket0pp100d(inteval, &(inteval->stack[((hsi*468+33811)*1+lsi)*1]), &(inteval->stack[((hsi*273+12378)*1+lsi)*1]), &(inteval->stack[((hsi*234+2928)*1+lsi)*1]), &(inteval->stack[((hsi*234+13376)*1+lsi)*1]),1);
HRRPart0bra0ket0ps100f(inteval, &(inteval->stack[((hsi*660+12651)*1+lsi)*1]), &(inteval->stack[((hsi*468+33811)*1+lsi)*1]), &(inteval->stack[((hsi*396+3162)*1+lsi)*1]), &(inteval->stack[((hsi*396+13610)*1+lsi)*1]),1);
HRRPart0bra0ket0m100g(inteval, &(inteval->stack[((hsi*825+2928)*1+lsi)*1]), &(inteval->stack[((hsi*660+12651)*1+lsi)*1]), &(inteval->stack[((hsi*550+11828)*1+lsi)*1]), &(inteval->stack[((hsi*550+14006)*1+lsi)*1]),1);
HRRPart0bra0ket0l100h(inteval, &(inteval->stack[((hsi*945+13311)*1+lsi)*1]), &(inteval->stack[((hsi*825+2928)*1+lsi)*1]), &(inteval->stack[((hsi*675+25143)*1+lsi)*1]), &(inteval->stack[((hsi*675+14556)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+14256)*1+lsi)*1]), &(inteval->stack[((hsi*45+910)*1+lsi)*1]), &(inteval->stack[((hsi*36+1000)*1+lsi)*1]), &(inteval->stack[((hsi*36+1036)*1+lsi)*1]),1);
HRRPart0bra0ket0k100d(inteval, &(inteval->stack[((hsi*216+330)*1+lsi)*1]), &(inteval->stack[((hsi*135+32263)*1+lsi)*1]), &(inteval->stack[((hsi*108+14256)*1+lsi)*1]), &(inteval->stack[((hsi*108+15231)*1+lsi)*1]),1);
HRRPart0bra0ket0k100f(inteval, &(inteval->stack[((hsi*360+546)*1+lsi)*1]), &(inteval->stack[((hsi*270+32563)*1+lsi)*1]), &(inteval->stack[((hsi*216+330)*1+lsi)*1]), &(inteval->stack[((hsi*216+15339)*1+lsi)*1]),1);
HRRPart0bra0ket0k100g(inteval, &(inteval->stack[((hsi*540+14256)*1+lsi)*1]), &(inteval->stack[((hsi*450+33361)*1+lsi)*1]), &(inteval->stack[((hsi*360+546)*1+lsi)*1]), &(inteval->stack[((hsi*360+15555)*1+lsi)*1]),1);
HRRPart0bra0ket0k100h(inteval, &(inteval->stack[((hsi*756+32263)*1+lsi)*1]), &(inteval->stack[((hsi*675+25143)*1+lsi)*1]), &(inteval->stack[((hsi*540+14256)*1+lsi)*1]), &(inteval->stack[((hsi*540+15915)*1+lsi)*1]),1);
HRRPart0bra0ket0k100i(inteval, &(inteval->stack[((hsi*1008+14256)*1+lsi)*1]), &(inteval->stack[((hsi*945+13311)*1+lsi)*1]), &(inteval->stack[((hsi*756+32263)*1+lsi)*1]), &(inteval->stack[((hsi*756+16455)*1+lsi)*1]),1);
HRRPart0bra0ket0pf100p(inteval, &(inteval->stack[((hsi*315+15264)*1+lsi)*1]), &(inteval->stack[((hsi*120+0)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]), &(inteval->stack[((hsi*105+225)*1+lsi)*1]),1);
HRRPart0bra0ket0pd100d(inteval, &(inteval->stack[((hsi*546+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+15264)*1+lsi)*1]), &(inteval->stack[((hsi*273+12378)*1+lsi)*1]), &(inteval->stack[((hsi*273+17211)*1+lsi)*1]),1);
HRRPart0bra0ket0pp100f(inteval, &(inteval->stack[((hsi*780+15264)*1+lsi)*1]), &(inteval->stack[((hsi*546+0)*1+lsi)*1]), &(inteval->stack[((hsi*468+33811)*1+lsi)*1]), &(inteval->stack[((hsi*468+17484)*1+lsi)*1]),1);
HRRPart0bra0ket0ps100g(inteval, &(inteval->stack[((hsi*990+32263)*1+lsi)*1]), &(inteval->stack[((hsi*780+15264)*1+lsi)*1]), &(inteval->stack[((hsi*660+12651)*1+lsi)*1]), &(inteval->stack[((hsi*660+17952)*1+lsi)*1]),1);
HRRPart0bra0ket0m100h(inteval, &(inteval->stack[((hsi*1155+15264)*1+lsi)*1]), &(inteval->stack[((hsi*990+32263)*1+lsi)*1]), &(inteval->stack[((hsi*825+2928)*1+lsi)*1]), &(inteval->stack[((hsi*825+18612)*1+lsi)*1]),1);
HRRPart0bra0ket0l100i(inteval, &(inteval->stack[((hsi*1260+16419)*1+lsi)*1]), &(inteval->stack[((hsi*1155+15264)*1+lsi)*1]), &(inteval->stack[((hsi*945+13311)*1+lsi)*1]), &(inteval->stack[((hsi*945+19437)*1+lsi)*1]),1);
HRRPart0bra0ket0k100k(inteval, &(inteval->stack[((hsi*1296+4052)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16419)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14256)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20382)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1296+4052)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1296+5348)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1296+6644)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1296+7940)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1296+9236)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1296+10532)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
