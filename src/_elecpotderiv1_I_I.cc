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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0id001.h>
#include <HRRPart0bra0ket0id010.h>
#include <HRRPart0bra0ket0id100.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0if001.h>
#include <HRRPart0bra0ket0if010.h>
#include <HRRPart0bra0ket0if100.h>
#include <HRRPart0bra0ket0ig.h>
#include <HRRPart0bra0ket0ig001.h>
#include <HRRPart0bra0ket0ig010.h>
#include <HRRPart0bra0ket0ig100.h>
#include <HRRPart0bra0ket0ih.h>
#include <HRRPart0bra0ket0ih001.h>
#include <HRRPart0bra0ket0ih010.h>
#include <HRRPart0bra0ket0ih100.h>
#include <HRRPart0bra0ket0ii001.h>
#include <HRRPart0bra0ket0ii010.h>
#include <HRRPart0bra0ket0ii100.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0i001d.h>
#include <HRRPart0bra0ket0i001f.h>
#include <HRRPart0bra0ket0i001g.h>
#include <HRRPart0bra0ket0i001h.h>
#include <HRRPart0bra0ket0i001i.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i010d.h>
#include <HRRPart0bra0ket0i010f.h>
#include <HRRPart0bra0ket0i010g.h>
#include <HRRPart0bra0ket0i010h.h>
#include <HRRPart0bra0ket0i010i.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i100d.h>
#include <HRRPart0bra0ket0i100f.h>
#include <HRRPart0bra0ket0i100g.h>
#include <HRRPart0bra0ket0i100h.h>
#include <HRRPart0bra0ket0i100i.h>
#include <HRRPart0bra0ket0i100p.h>
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
#include <HRRPart0bra0ket0kh001.h>
#include <HRRPart0bra0ket0kh010.h>
#include <HRRPart0bra0ket0kh100.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0kp001.h>
#include <HRRPart0bra0ket0kp010.h>
#include <HRRPart0bra0ket0kp100.h>
#include <HRRPart0bra0ket0k001d.h>
#include <HRRPart0bra0ket0k001f.h>
#include <HRRPart0bra0ket0k001g.h>
#include <HRRPart0bra0ket0k001h.h>
#include <HRRPart0bra0ket0k001p.h>
#include <HRRPart0bra0ket0k010d.h>
#include <HRRPart0bra0ket0k010f.h>
#include <HRRPart0bra0ket0k010g.h>
#include <HRRPart0bra0ket0k010h.h>
#include <HRRPart0bra0ket0k010p.h>
#include <HRRPart0bra0ket0k100d.h>
#include <HRRPart0bra0ket0k100f.h>
#include <HRRPart0bra0ket0k100g.h>
#include <HRRPart0bra0ket0k100h.h>
#include <HRRPart0bra0ket0k100p.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0ld001.h>
#include <HRRPart0bra0ket0ld010.h>
#include <HRRPart0bra0ket0ld100.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lf001.h>
#include <HRRPart0bra0ket0lf010.h>
#include <HRRPart0bra0ket0lf100.h>
#include <HRRPart0bra0ket0lg001.h>
#include <HRRPart0bra0ket0lg010.h>
#include <HRRPart0bra0ket0lg100.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0lp001.h>
#include <HRRPart0bra0ket0lp010.h>
#include <HRRPart0bra0ket0lp100.h>
#include <HRRPart0bra0ket0l001d.h>
#include <HRRPart0bra0ket0l001f.h>
#include <HRRPart0bra0ket0l001g.h>
#include <HRRPart0bra0ket0l001p.h>
#include <HRRPart0bra0ket0l010d.h>
#include <HRRPart0bra0ket0l010f.h>
#include <HRRPart0bra0ket0l010g.h>
#include <HRRPart0bra0ket0l010p.h>
#include <HRRPart0bra0ket0l100d.h>
#include <HRRPart0bra0ket0l100f.h>
#include <HRRPart0bra0ket0l100g.h>
#include <HRRPart0bra0ket0l100p.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0md001.h>
#include <HRRPart0bra0ket0md010.h>
#include <HRRPart0bra0ket0md100.h>
#include <HRRPart0bra0ket0mf001.h>
#include <HRRPart0bra0ket0mf010.h>
#include <HRRPart0bra0ket0mf100.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0mp001.h>
#include <HRRPart0bra0ket0mp010.h>
#include <HRRPart0bra0ket0mp100.h>
#include <HRRPart0bra0ket0m001d.h>
#include <HRRPart0bra0ket0m001f.h>
#include <HRRPart0bra0ket0m001p.h>
#include <HRRPart0bra0ket0m010d.h>
#include <HRRPart0bra0ket0m010f.h>
#include <HRRPart0bra0ket0m010p.h>
#include <HRRPart0bra0ket0m100d.h>
#include <HRRPart0bra0ket0m100f.h>
#include <HRRPart0bra0ket0m100p.h>
#include <HRRPart0bra0ket0ppp001.h>
#include <HRRPart0bra0ket0ppp010.h>
#include <HRRPart0bra0ket0ppp100.h>
#include <HRRPart0bra0ket0pp001p.h>
#include <HRRPart0bra0ket0pp010p.h>
#include <HRRPart0bra0ket0pp100p.h>
#include <HRRPart0bra0ket0psd001.h>
#include <HRRPart0bra0ket0psd010.h>
#include <HRRPart0bra0ket0psd100.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart0bra0ket0psp001.h>
#include <HRRPart0bra0ket0psp010.h>
#include <HRRPart0bra0ket0psp100.h>
#include <HRRPart0bra0ket0ps001d.h>
#include <HRRPart0bra0ket0ps001p.h>
#include <HRRPart0bra0ket0ps010d.h>
#include <HRRPart0bra0ket0ps010p.h>
#include <HRRPart0bra0ket0ps100d.h>
#include <HRRPart0bra0ket0ps100p.h>
#include <_elecpotderiv1_I_I_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_I_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2702)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_I_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+7406)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+7514)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+7649)*1+lsi)*1]), &(inteval->stack[((hsi*135+7514)*1+lsi)*1]), &(inteval->stack[((hsi*108+7406)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+7865)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+8030)*1+lsi)*1]), &(inteval->stack[((hsi*165+7865)*1+lsi)*1]), &(inteval->stack[((hsi*135+7514)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+8300)*1+lsi)*1]), &(inteval->stack[((hsi*270+8030)*1+lsi)*1]), &(inteval->stack[((hsi*216+7649)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8660)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]), &(inteval->stack[((hsi*28+679)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+8744)*1+lsi)*1]), &(inteval->stack[((hsi*108+7406)*1+lsi)*1]), &(inteval->stack[((hsi*84+8660)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+8912)*1+lsi)*1]), &(inteval->stack[((hsi*216+7649)*1+lsi)*1]), &(inteval->stack[((hsi*168+8744)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+9192)*1+lsi)*1]), &(inteval->stack[((hsi*360+8300)*1+lsi)*1]), &(inteval->stack[((hsi*280+8912)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+9612)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+9810)*1+lsi)*1]), &(inteval->stack[((hsi*198+9612)*1+lsi)*1]), &(inteval->stack[((hsi*165+7865)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+10140)*1+lsi)*1]), &(inteval->stack[((hsi*330+9810)*1+lsi)*1]), &(inteval->stack[((hsi*270+8030)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+10590)*1+lsi)*1]), &(inteval->stack[((hsi*450+10140)*1+lsi)*1]), &(inteval->stack[((hsi*360+8300)*1+lsi)*1]),1);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*588+11130)*1+lsi)*1]), &(inteval->stack[((hsi*540+10590)*1+lsi)*1]), &(inteval->stack[((hsi*420+9192)*1+lsi)*1]),1);
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+11718)*1+lsi)*1]), &(inteval->stack[((hsi*45+2593)*1+lsi)*1]), &(inteval->stack[((hsi*36+2638)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0bra0ket0lp001(inteval, &(inteval->stack[((hsi*135+11826)*1+lsi)*1]), &(inteval->stack[((hsi*55+2538)*1+lsi)*1]), &(inteval->stack[((hsi*45+2593)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0bra0ket0kd001(inteval, &(inteval->stack[((hsi*216+11961)*1+lsi)*1]), &(inteval->stack[((hsi*135+11826)*1+lsi)*1]), &(inteval->stack[((hsi*108+11718)*1+lsi)*1]), &(inteval->stack[((hsi*108+7406)*1+lsi)*1]),1);
HRRPart0bra0ket0mp001(inteval, &(inteval->stack[((hsi*165+12177)*1+lsi)*1]), &(inteval->stack[((hsi*66+2472)*1+lsi)*1]), &(inteval->stack[((hsi*55+2538)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0bra0ket0ld001(inteval, &(inteval->stack[((hsi*270+12342)*1+lsi)*1]), &(inteval->stack[((hsi*165+12177)*1+lsi)*1]), &(inteval->stack[((hsi*135+11826)*1+lsi)*1]), &(inteval->stack[((hsi*135+7514)*1+lsi)*1]),1);
HRRPart0bra0ket0kf001(inteval, &(inteval->stack[((hsi*360+12612)*1+lsi)*1]), &(inteval->stack[((hsi*270+12342)*1+lsi)*1]), &(inteval->stack[((hsi*216+11961)*1+lsi)*1]), &(inteval->stack[((hsi*216+7649)*1+lsi)*1]),1);
HRRPart0bra0ket0psp001(inteval, &(inteval->stack[((hsi*198+12972)*1+lsi)*1]), &(inteval->stack[((hsi*78+2394)*1+lsi)*1]), &(inteval->stack[((hsi*66+2472)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0bra0ket0md001(inteval, &(inteval->stack[((hsi*330+13170)*1+lsi)*1]), &(inteval->stack[((hsi*198+12972)*1+lsi)*1]), &(inteval->stack[((hsi*165+12177)*1+lsi)*1]), &(inteval->stack[((hsi*165+7865)*1+lsi)*1]),1);
HRRPart0bra0ket0lf001(inteval, &(inteval->stack[((hsi*450+13500)*1+lsi)*1]), &(inteval->stack[((hsi*330+13170)*1+lsi)*1]), &(inteval->stack[((hsi*270+12342)*1+lsi)*1]), &(inteval->stack[((hsi*270+8030)*1+lsi)*1]),1);
HRRPart0bra0ket0kg001(inteval, &(inteval->stack[((hsi*540+13950)*1+lsi)*1]), &(inteval->stack[((hsi*450+13500)*1+lsi)*1]), &(inteval->stack[((hsi*360+12612)*1+lsi)*1]), &(inteval->stack[((hsi*360+8300)*1+lsi)*1]),1);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+12177)*1+lsi)*1]), &(inteval->stack[((hsi*36+2638)*1+lsi)*1]), &(inteval->stack[((hsi*28+2674)*1+lsi)*1]), &(inteval->stack[((hsi*28+679)*1+lsi)*1]),1);
HRRPart0bra0ket0id001(inteval, &(inteval->stack[((hsi*168+12261)*1+lsi)*1]), &(inteval->stack[((hsi*108+11718)*1+lsi)*1]), &(inteval->stack[((hsi*84+12177)*1+lsi)*1]), &(inteval->stack[((hsi*84+8660)*1+lsi)*1]),1);
HRRPart0bra0ket0if001(inteval, &(inteval->stack[((hsi*280+14490)*1+lsi)*1]), &(inteval->stack[((hsi*216+11961)*1+lsi)*1]), &(inteval->stack[((hsi*168+12261)*1+lsi)*1]), &(inteval->stack[((hsi*168+8744)*1+lsi)*1]),1);
HRRPart0bra0ket0ig001(inteval, &(inteval->stack[((hsi*420+11718)*1+lsi)*1]), &(inteval->stack[((hsi*360+12612)*1+lsi)*1]), &(inteval->stack[((hsi*280+14490)*1+lsi)*1]), &(inteval->stack[((hsi*280+8912)*1+lsi)*1]),1);
HRRPart0bra0ket0ih001(inteval, &(inteval->stack[((hsi*588+12138)*1+lsi)*1]), &(inteval->stack[((hsi*540+13950)*1+lsi)*1]), &(inteval->stack[((hsi*420+11718)*1+lsi)*1]), &(inteval->stack[((hsi*420+9192)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp001(inteval, &(inteval->stack[((hsi*234+11718)*1+lsi)*1]), &(inteval->stack[((hsi*91+2303)*1+lsi)*1]), &(inteval->stack[((hsi*78+2394)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0bra0ket0psd001(inteval, &(inteval->stack[((hsi*396+2303)*1+lsi)*1]), &(inteval->stack[((hsi*234+11718)*1+lsi)*1]), &(inteval->stack[((hsi*198+12972)*1+lsi)*1]), &(inteval->stack[((hsi*198+9612)*1+lsi)*1]),1);
HRRPart0bra0ket0mf001(inteval, &(inteval->stack[((hsi*550+14490)*1+lsi)*1]), &(inteval->stack[((hsi*396+2303)*1+lsi)*1]), &(inteval->stack[((hsi*330+13170)*1+lsi)*1]), &(inteval->stack[((hsi*330+9810)*1+lsi)*1]),1);
HRRPart0bra0ket0lg001(inteval, &(inteval->stack[((hsi*675+12726)*1+lsi)*1]), &(inteval->stack[((hsi*550+14490)*1+lsi)*1]), &(inteval->stack[((hsi*450+13500)*1+lsi)*1]), &(inteval->stack[((hsi*450+10140)*1+lsi)*1]),1);
HRRPart0bra0ket0kh001(inteval, &(inteval->stack[((hsi*756+14490)*1+lsi)*1]), &(inteval->stack[((hsi*675+12726)*1+lsi)*1]), &(inteval->stack[((hsi*540+13950)*1+lsi)*1]), &(inteval->stack[((hsi*540+10590)*1+lsi)*1]),1);
HRRPart0bra0ket0ii001(inteval, &(inteval->stack[((hsi*784+6622)*1+lsi)*1]), &(inteval->stack[((hsi*756+14490)*1+lsi)*1]), &(inteval->stack[((hsi*588+12138)*1+lsi)*1]), &(inteval->stack[((hsi*588+11130)*1+lsi)*1]),1);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+12726)*1+lsi)*1]), &(inteval->stack[((hsi*45+2194)*1+lsi)*1]), &(inteval->stack[((hsi*36+2239)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0bra0ket0lp010(inteval, &(inteval->stack[((hsi*135+12834)*1+lsi)*1]), &(inteval->stack[((hsi*55+2139)*1+lsi)*1]), &(inteval->stack[((hsi*45+2194)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0bra0ket0kd010(inteval, &(inteval->stack[((hsi*216+12969)*1+lsi)*1]), &(inteval->stack[((hsi*135+12834)*1+lsi)*1]), &(inteval->stack[((hsi*108+12726)*1+lsi)*1]), &(inteval->stack[((hsi*108+7406)*1+lsi)*1]),1);
HRRPart0bra0ket0mp010(inteval, &(inteval->stack[((hsi*165+13185)*1+lsi)*1]), &(inteval->stack[((hsi*66+2073)*1+lsi)*1]), &(inteval->stack[((hsi*55+2139)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0bra0ket0ld010(inteval, &(inteval->stack[((hsi*270+13350)*1+lsi)*1]), &(inteval->stack[((hsi*165+13185)*1+lsi)*1]), &(inteval->stack[((hsi*135+12834)*1+lsi)*1]), &(inteval->stack[((hsi*135+7514)*1+lsi)*1]),1);
HRRPart0bra0ket0kf010(inteval, &(inteval->stack[((hsi*360+13620)*1+lsi)*1]), &(inteval->stack[((hsi*270+13350)*1+lsi)*1]), &(inteval->stack[((hsi*216+12969)*1+lsi)*1]), &(inteval->stack[((hsi*216+7649)*1+lsi)*1]),1);
HRRPart0bra0ket0psp010(inteval, &(inteval->stack[((hsi*198+13980)*1+lsi)*1]), &(inteval->stack[((hsi*78+1995)*1+lsi)*1]), &(inteval->stack[((hsi*66+2073)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0bra0ket0md010(inteval, &(inteval->stack[((hsi*330+11718)*1+lsi)*1]), &(inteval->stack[((hsi*198+13980)*1+lsi)*1]), &(inteval->stack[((hsi*165+13185)*1+lsi)*1]), &(inteval->stack[((hsi*165+7865)*1+lsi)*1]),1);
HRRPart0bra0ket0lf010(inteval, &(inteval->stack[((hsi*450+15246)*1+lsi)*1]), &(inteval->stack[((hsi*330+11718)*1+lsi)*1]), &(inteval->stack[((hsi*270+13350)*1+lsi)*1]), &(inteval->stack[((hsi*270+8030)*1+lsi)*1]),1);
HRRPart0bra0ket0kg010(inteval, &(inteval->stack[((hsi*540+15696)*1+lsi)*1]), &(inteval->stack[((hsi*450+15246)*1+lsi)*1]), &(inteval->stack[((hsi*360+13620)*1+lsi)*1]), &(inteval->stack[((hsi*360+8300)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+13185)*1+lsi)*1]), &(inteval->stack[((hsi*36+2239)*1+lsi)*1]), &(inteval->stack[((hsi*28+2275)*1+lsi)*1]), &(inteval->stack[((hsi*28+679)*1+lsi)*1]),1);
HRRPart0bra0ket0id010(inteval, &(inteval->stack[((hsi*168+2073)*1+lsi)*1]), &(inteval->stack[((hsi*108+12726)*1+lsi)*1]), &(inteval->stack[((hsi*84+13185)*1+lsi)*1]), &(inteval->stack[((hsi*84+8660)*1+lsi)*1]),1);
HRRPart0bra0ket0if010(inteval, &(inteval->stack[((hsi*280+2241)*1+lsi)*1]), &(inteval->stack[((hsi*216+12969)*1+lsi)*1]), &(inteval->stack[((hsi*168+2073)*1+lsi)*1]), &(inteval->stack[((hsi*168+8744)*1+lsi)*1]),1);
HRRPart0bra0ket0ig010(inteval, &(inteval->stack[((hsi*420+12726)*1+lsi)*1]), &(inteval->stack[((hsi*360+13620)*1+lsi)*1]), &(inteval->stack[((hsi*280+2241)*1+lsi)*1]), &(inteval->stack[((hsi*280+8912)*1+lsi)*1]),1);
HRRPart0bra0ket0ih010(inteval, &(inteval->stack[((hsi*588+13146)*1+lsi)*1]), &(inteval->stack[((hsi*540+15696)*1+lsi)*1]), &(inteval->stack[((hsi*420+12726)*1+lsi)*1]), &(inteval->stack[((hsi*420+9192)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp010(inteval, &(inteval->stack[((hsi*234+2073)*1+lsi)*1]), &(inteval->stack[((hsi*91+1904)*1+lsi)*1]), &(inteval->stack[((hsi*78+1995)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0bra0ket0psd010(inteval, &(inteval->stack[((hsi*396+12726)*1+lsi)*1]), &(inteval->stack[((hsi*234+2073)*1+lsi)*1]), &(inteval->stack[((hsi*198+13980)*1+lsi)*1]), &(inteval->stack[((hsi*198+9612)*1+lsi)*1]),1);
HRRPart0bra0ket0mf010(inteval, &(inteval->stack[((hsi*550+1904)*1+lsi)*1]), &(inteval->stack[((hsi*396+12726)*1+lsi)*1]), &(inteval->stack[((hsi*330+11718)*1+lsi)*1]), &(inteval->stack[((hsi*330+9810)*1+lsi)*1]),1);
HRRPart0bra0ket0lg010(inteval, &(inteval->stack[((hsi*675+13734)*1+lsi)*1]), &(inteval->stack[((hsi*550+1904)*1+lsi)*1]), &(inteval->stack[((hsi*450+15246)*1+lsi)*1]), &(inteval->stack[((hsi*450+10140)*1+lsi)*1]),1);
HRRPart0bra0ket0kh010(inteval, &(inteval->stack[((hsi*756+1904)*1+lsi)*1]), &(inteval->stack[((hsi*675+13734)*1+lsi)*1]), &(inteval->stack[((hsi*540+15696)*1+lsi)*1]), &(inteval->stack[((hsi*540+10590)*1+lsi)*1]),1);
HRRPart0bra0ket0ii010(inteval, &(inteval->stack[((hsi*784+5838)*1+lsi)*1]), &(inteval->stack[((hsi*756+1904)*1+lsi)*1]), &(inteval->stack[((hsi*588+13146)*1+lsi)*1]), &(inteval->stack[((hsi*588+11130)*1+lsi)*1]),1);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+13734)*1+lsi)*1]), &(inteval->stack[((hsi*45+1795)*1+lsi)*1]), &(inteval->stack[((hsi*36+1840)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0bra0ket0lp100(inteval, &(inteval->stack[((hsi*135+13842)*1+lsi)*1]), &(inteval->stack[((hsi*55+1740)*1+lsi)*1]), &(inteval->stack[((hsi*45+1795)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0bra0ket0kd100(inteval, &(inteval->stack[((hsi*216+13977)*1+lsi)*1]), &(inteval->stack[((hsi*135+13842)*1+lsi)*1]), &(inteval->stack[((hsi*108+13734)*1+lsi)*1]), &(inteval->stack[((hsi*108+7406)*1+lsi)*1]),1);
HRRPart0bra0ket0mp100(inteval, &(inteval->stack[((hsi*165+12726)*1+lsi)*1]), &(inteval->stack[((hsi*66+1674)*1+lsi)*1]), &(inteval->stack[((hsi*55+1740)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0bra0ket0ld100(inteval, &(inteval->stack[((hsi*270+11718)*1+lsi)*1]), &(inteval->stack[((hsi*165+12726)*1+lsi)*1]), &(inteval->stack[((hsi*135+13842)*1+lsi)*1]), &(inteval->stack[((hsi*135+7514)*1+lsi)*1]),1);
HRRPart0bra0ket0kf100(inteval, &(inteval->stack[((hsi*360+15246)*1+lsi)*1]), &(inteval->stack[((hsi*270+11718)*1+lsi)*1]), &(inteval->stack[((hsi*216+13977)*1+lsi)*1]), &(inteval->stack[((hsi*216+7649)*1+lsi)*1]),1);
HRRPart0bra0ket0psp100(inteval, &(inteval->stack[((hsi*198+14193)*1+lsi)*1]), &(inteval->stack[((hsi*78+1596)*1+lsi)*1]), &(inteval->stack[((hsi*66+1674)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0bra0ket0md100(inteval, &(inteval->stack[((hsi*330+15606)*1+lsi)*1]), &(inteval->stack[((hsi*198+14193)*1+lsi)*1]), &(inteval->stack[((hsi*165+12726)*1+lsi)*1]), &(inteval->stack[((hsi*165+7865)*1+lsi)*1]),1);
HRRPart0bra0ket0lf100(inteval, &(inteval->stack[((hsi*450+15936)*1+lsi)*1]), &(inteval->stack[((hsi*330+15606)*1+lsi)*1]), &(inteval->stack[((hsi*270+11718)*1+lsi)*1]), &(inteval->stack[((hsi*270+8030)*1+lsi)*1]),1);
HRRPart0bra0ket0kg100(inteval, &(inteval->stack[((hsi*540+16386)*1+lsi)*1]), &(inteval->stack[((hsi*450+15936)*1+lsi)*1]), &(inteval->stack[((hsi*360+15246)*1+lsi)*1]), &(inteval->stack[((hsi*360+8300)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+12726)*1+lsi)*1]), &(inteval->stack[((hsi*36+1840)*1+lsi)*1]), &(inteval->stack[((hsi*28+1876)*1+lsi)*1]), &(inteval->stack[((hsi*28+679)*1+lsi)*1]),1);
HRRPart0bra0ket0id100(inteval, &(inteval->stack[((hsi*168+11718)*1+lsi)*1]), &(inteval->stack[((hsi*108+13734)*1+lsi)*1]), &(inteval->stack[((hsi*84+12726)*1+lsi)*1]), &(inteval->stack[((hsi*84+8660)*1+lsi)*1]),1);
HRRPart0bra0ket0if100(inteval, &(inteval->stack[((hsi*280+12726)*1+lsi)*1]), &(inteval->stack[((hsi*216+13977)*1+lsi)*1]), &(inteval->stack[((hsi*168+11718)*1+lsi)*1]), &(inteval->stack[((hsi*168+8744)*1+lsi)*1]),1);
HRRPart0bra0ket0ig100(inteval, &(inteval->stack[((hsi*420+11718)*1+lsi)*1]), &(inteval->stack[((hsi*360+15246)*1+lsi)*1]), &(inteval->stack[((hsi*280+12726)*1+lsi)*1]), &(inteval->stack[((hsi*280+8912)*1+lsi)*1]),1);
HRRPart0bra0ket0ih100(inteval, &(inteval->stack[((hsi*588+16926)*1+lsi)*1]), &(inteval->stack[((hsi*540+16386)*1+lsi)*1]), &(inteval->stack[((hsi*420+11718)*1+lsi)*1]), &(inteval->stack[((hsi*420+9192)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp100(inteval, &(inteval->stack[((hsi*234+13734)*1+lsi)*1]), &(inteval->stack[((hsi*91+1505)*1+lsi)*1]), &(inteval->stack[((hsi*78+1596)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0bra0ket0psd100(inteval, &(inteval->stack[((hsi*396+11718)*1+lsi)*1]), &(inteval->stack[((hsi*234+13734)*1+lsi)*1]), &(inteval->stack[((hsi*198+14193)*1+lsi)*1]), &(inteval->stack[((hsi*198+9612)*1+lsi)*1]),1);
HRRPart0bra0ket0mf100(inteval, &(inteval->stack[((hsi*550+13734)*1+lsi)*1]), &(inteval->stack[((hsi*396+11718)*1+lsi)*1]), &(inteval->stack[((hsi*330+15606)*1+lsi)*1]), &(inteval->stack[((hsi*330+9810)*1+lsi)*1]),1);
HRRPart0bra0ket0lg100(inteval, &(inteval->stack[((hsi*675+15246)*1+lsi)*1]), &(inteval->stack[((hsi*550+13734)*1+lsi)*1]), &(inteval->stack[((hsi*450+15936)*1+lsi)*1]), &(inteval->stack[((hsi*450+10140)*1+lsi)*1]),1);
HRRPart0bra0ket0kh100(inteval, &(inteval->stack[((hsi*756+13734)*1+lsi)*1]), &(inteval->stack[((hsi*675+15246)*1+lsi)*1]), &(inteval->stack[((hsi*540+16386)*1+lsi)*1]), &(inteval->stack[((hsi*540+10590)*1+lsi)*1]),1);
HRRPart0bra0ket0ii100(inteval, &(inteval->stack[((hsi*784+5054)*1+lsi)*1]), &(inteval->stack[((hsi*756+13734)*1+lsi)*1]), &(inteval->stack[((hsi*588+16926)*1+lsi)*1]), &(inteval->stack[((hsi*588+11130)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+15246)*1+lsi)*1]), &(inteval->stack[((hsi*45+1396)*1+lsi)*1]), &(inteval->stack[((hsi*36+1441)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0bra0ket0l001p(inteval, &(inteval->stack[((hsi*135+15354)*1+lsi)*1]), &(inteval->stack[((hsi*55+1341)*1+lsi)*1]), &(inteval->stack[((hsi*45+1396)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0bra0ket0k001d(inteval, &(inteval->stack[((hsi*216+15489)*1+lsi)*1]), &(inteval->stack[((hsi*135+15354)*1+lsi)*1]), &(inteval->stack[((hsi*108+15246)*1+lsi)*1]), &(inteval->stack[((hsi*108+7406)*1+lsi)*1]),1);
HRRPart0bra0ket0m001p(inteval, &(inteval->stack[((hsi*165+15705)*1+lsi)*1]), &(inteval->stack[((hsi*66+1275)*1+lsi)*1]), &(inteval->stack[((hsi*55+1341)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0bra0ket0l001d(inteval, &(inteval->stack[((hsi*270+15870)*1+lsi)*1]), &(inteval->stack[((hsi*165+15705)*1+lsi)*1]), &(inteval->stack[((hsi*135+15354)*1+lsi)*1]), &(inteval->stack[((hsi*135+7514)*1+lsi)*1]),1);
HRRPart0bra0ket0k001f(inteval, &(inteval->stack[((hsi*360+16140)*1+lsi)*1]), &(inteval->stack[((hsi*270+15870)*1+lsi)*1]), &(inteval->stack[((hsi*216+15489)*1+lsi)*1]), &(inteval->stack[((hsi*216+7649)*1+lsi)*1]),1);
HRRPart0bra0ket0ps001p(inteval, &(inteval->stack[((hsi*198+16500)*1+lsi)*1]), &(inteval->stack[((hsi*78+1197)*1+lsi)*1]), &(inteval->stack[((hsi*66+1275)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0bra0ket0m001d(inteval, &(inteval->stack[((hsi*330+12726)*1+lsi)*1]), &(inteval->stack[((hsi*198+16500)*1+lsi)*1]), &(inteval->stack[((hsi*165+15705)*1+lsi)*1]), &(inteval->stack[((hsi*165+7865)*1+lsi)*1]),1);
HRRPart0bra0ket0l001f(inteval, &(inteval->stack[((hsi*450+17514)*1+lsi)*1]), &(inteval->stack[((hsi*330+12726)*1+lsi)*1]), &(inteval->stack[((hsi*270+15870)*1+lsi)*1]), &(inteval->stack[((hsi*270+8030)*1+lsi)*1]),1);
HRRPart0bra0ket0k001g(inteval, &(inteval->stack[((hsi*540+17964)*1+lsi)*1]), &(inteval->stack[((hsi*450+17514)*1+lsi)*1]), &(inteval->stack[((hsi*360+16140)*1+lsi)*1]), &(inteval->stack[((hsi*360+8300)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+15705)*1+lsi)*1]), &(inteval->stack[((hsi*36+1441)*1+lsi)*1]), &(inteval->stack[((hsi*28+1477)*1+lsi)*1]), &(inteval->stack[((hsi*28+679)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d(inteval, &(inteval->stack[((hsi*168+1275)*1+lsi)*1]), &(inteval->stack[((hsi*108+15246)*1+lsi)*1]), &(inteval->stack[((hsi*84+15705)*1+lsi)*1]), &(inteval->stack[((hsi*84+8660)*1+lsi)*1]),1);
HRRPart0bra0ket0i001f(inteval, &(inteval->stack[((hsi*280+1443)*1+lsi)*1]), &(inteval->stack[((hsi*216+15489)*1+lsi)*1]), &(inteval->stack[((hsi*168+1275)*1+lsi)*1]), &(inteval->stack[((hsi*168+8744)*1+lsi)*1]),1);
HRRPart0bra0ket0i001g(inteval, &(inteval->stack[((hsi*420+11718)*1+lsi)*1]), &(inteval->stack[((hsi*360+16140)*1+lsi)*1]), &(inteval->stack[((hsi*280+1443)*1+lsi)*1]), &(inteval->stack[((hsi*280+8912)*1+lsi)*1]),1);
HRRPart0bra0ket0i001h(inteval, &(inteval->stack[((hsi*588+15246)*1+lsi)*1]), &(inteval->stack[((hsi*540+17964)*1+lsi)*1]), &(inteval->stack[((hsi*420+11718)*1+lsi)*1]), &(inteval->stack[((hsi*420+9192)*1+lsi)*1]),1);
HRRPart0bra0ket0pp001p(inteval, &(inteval->stack[((hsi*234+15834)*1+lsi)*1]), &(inteval->stack[((hsi*91+1106)*1+lsi)*1]), &(inteval->stack[((hsi*78+1197)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0bra0ket0ps001d(inteval, &(inteval->stack[((hsi*396+1106)*1+lsi)*1]), &(inteval->stack[((hsi*234+15834)*1+lsi)*1]), &(inteval->stack[((hsi*198+16500)*1+lsi)*1]), &(inteval->stack[((hsi*198+9612)*1+lsi)*1]),1);
HRRPart0bra0ket0m001f(inteval, &(inteval->stack[((hsi*550+15834)*1+lsi)*1]), &(inteval->stack[((hsi*396+1106)*1+lsi)*1]), &(inteval->stack[((hsi*330+12726)*1+lsi)*1]), &(inteval->stack[((hsi*330+9810)*1+lsi)*1]),1);
HRRPart0bra0ket0l001g(inteval, &(inteval->stack[((hsi*675+1106)*1+lsi)*1]), &(inteval->stack[((hsi*550+15834)*1+lsi)*1]), &(inteval->stack[((hsi*450+17514)*1+lsi)*1]), &(inteval->stack[((hsi*450+10140)*1+lsi)*1]),1);
HRRPart0bra0ket0k001h(inteval, &(inteval->stack[((hsi*756+15834)*1+lsi)*1]), &(inteval->stack[((hsi*675+1106)*1+lsi)*1]), &(inteval->stack[((hsi*540+17964)*1+lsi)*1]), &(inteval->stack[((hsi*540+10590)*1+lsi)*1]),1);
HRRPart0bra0ket0i001i(inteval, &(inteval->stack[((hsi*784+4270)*1+lsi)*1]), &(inteval->stack[((hsi*756+15834)*1+lsi)*1]), &(inteval->stack[((hsi*588+15246)*1+lsi)*1]), &(inteval->stack[((hsi*588+11130)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+1106)*1+lsi)*1]), &(inteval->stack[((hsi*45+997)*1+lsi)*1]), &(inteval->stack[((hsi*36+1042)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0bra0ket0l010p(inteval, &(inteval->stack[((hsi*135+1214)*1+lsi)*1]), &(inteval->stack[((hsi*55+942)*1+lsi)*1]), &(inteval->stack[((hsi*45+997)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0bra0ket0k010d(inteval, &(inteval->stack[((hsi*216+1349)*1+lsi)*1]), &(inteval->stack[((hsi*135+1214)*1+lsi)*1]), &(inteval->stack[((hsi*108+1106)*1+lsi)*1]), &(inteval->stack[((hsi*108+7406)*1+lsi)*1]),1);
HRRPart0bra0ket0m010p(inteval, &(inteval->stack[((hsi*165+11718)*1+lsi)*1]), &(inteval->stack[((hsi*66+876)*1+lsi)*1]), &(inteval->stack[((hsi*55+942)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0bra0ket0l010d(inteval, &(inteval->stack[((hsi*270+12726)*1+lsi)*1]), &(inteval->stack[((hsi*165+11718)*1+lsi)*1]), &(inteval->stack[((hsi*135+1214)*1+lsi)*1]), &(inteval->stack[((hsi*135+7514)*1+lsi)*1]),1);
HRRPart0bra0ket0k010f(inteval, &(inteval->stack[((hsi*360+17514)*1+lsi)*1]), &(inteval->stack[((hsi*270+12726)*1+lsi)*1]), &(inteval->stack[((hsi*216+1349)*1+lsi)*1]), &(inteval->stack[((hsi*216+7649)*1+lsi)*1]),1);
HRRPart0bra0ket0ps010p(inteval, &(inteval->stack[((hsi*198+1565)*1+lsi)*1]), &(inteval->stack[((hsi*78+798)*1+lsi)*1]), &(inteval->stack[((hsi*66+876)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0bra0ket0m010d(inteval, &(inteval->stack[((hsi*330+16590)*1+lsi)*1]), &(inteval->stack[((hsi*198+1565)*1+lsi)*1]), &(inteval->stack[((hsi*165+11718)*1+lsi)*1]), &(inteval->stack[((hsi*165+7865)*1+lsi)*1]),1);
HRRPart0bra0ket0l010f(inteval, &(inteval->stack[((hsi*450+17874)*1+lsi)*1]), &(inteval->stack[((hsi*330+16590)*1+lsi)*1]), &(inteval->stack[((hsi*270+12726)*1+lsi)*1]), &(inteval->stack[((hsi*270+8030)*1+lsi)*1]),1);
HRRPart0bra0ket0k010g(inteval, &(inteval->stack[((hsi*540+18324)*1+lsi)*1]), &(inteval->stack[((hsi*450+17874)*1+lsi)*1]), &(inteval->stack[((hsi*360+17514)*1+lsi)*1]), &(inteval->stack[((hsi*360+8300)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+11718)*1+lsi)*1]), &(inteval->stack[((hsi*36+1042)*1+lsi)*1]), &(inteval->stack[((hsi*28+1078)*1+lsi)*1]), &(inteval->stack[((hsi*28+679)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d(inteval, &(inteval->stack[((hsi*168+12726)*1+lsi)*1]), &(inteval->stack[((hsi*108+1106)*1+lsi)*1]), &(inteval->stack[((hsi*84+11718)*1+lsi)*1]), &(inteval->stack[((hsi*84+8660)*1+lsi)*1]),1);
HRRPart0bra0ket0i010f(inteval, &(inteval->stack[((hsi*280+876)*1+lsi)*1]), &(inteval->stack[((hsi*216+1349)*1+lsi)*1]), &(inteval->stack[((hsi*168+12726)*1+lsi)*1]), &(inteval->stack[((hsi*168+8744)*1+lsi)*1]),1);
HRRPart0bra0ket0i010g(inteval, &(inteval->stack[((hsi*420+11718)*1+lsi)*1]), &(inteval->stack[((hsi*360+17514)*1+lsi)*1]), &(inteval->stack[((hsi*280+876)*1+lsi)*1]), &(inteval->stack[((hsi*280+8912)*1+lsi)*1]),1);
HRRPart0bra0ket0i010h(inteval, &(inteval->stack[((hsi*588+876)*1+lsi)*1]), &(inteval->stack[((hsi*540+18324)*1+lsi)*1]), &(inteval->stack[((hsi*420+11718)*1+lsi)*1]), &(inteval->stack[((hsi*420+9192)*1+lsi)*1]),1);
HRRPart0bra0ket0pp010p(inteval, &(inteval->stack[((hsi*234+11718)*1+lsi)*1]), &(inteval->stack[((hsi*91+707)*1+lsi)*1]), &(inteval->stack[((hsi*78+798)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0bra0ket0ps010d(inteval, &(inteval->stack[((hsi*396+12726)*1+lsi)*1]), &(inteval->stack[((hsi*234+11718)*1+lsi)*1]), &(inteval->stack[((hsi*198+1565)*1+lsi)*1]), &(inteval->stack[((hsi*198+9612)*1+lsi)*1]),1);
HRRPart0bra0ket0m010f(inteval, &(inteval->stack[((hsi*550+18864)*1+lsi)*1]), &(inteval->stack[((hsi*396+12726)*1+lsi)*1]), &(inteval->stack[((hsi*330+16590)*1+lsi)*1]), &(inteval->stack[((hsi*330+9810)*1+lsi)*1]),1);
HRRPart0bra0ket0l010g(inteval, &(inteval->stack[((hsi*675+19414)*1+lsi)*1]), &(inteval->stack[((hsi*550+18864)*1+lsi)*1]), &(inteval->stack[((hsi*450+17874)*1+lsi)*1]), &(inteval->stack[((hsi*450+10140)*1+lsi)*1]),1);
HRRPart0bra0ket0k010h(inteval, &(inteval->stack[((hsi*756+17514)*1+lsi)*1]), &(inteval->stack[((hsi*675+19414)*1+lsi)*1]), &(inteval->stack[((hsi*540+18324)*1+lsi)*1]), &(inteval->stack[((hsi*540+10590)*1+lsi)*1]),1);
HRRPart0bra0ket0i010i(inteval, &(inteval->stack[((hsi*784+3486)*1+lsi)*1]), &(inteval->stack[((hsi*756+17514)*1+lsi)*1]), &(inteval->stack[((hsi*588+876)*1+lsi)*1]), &(inteval->stack[((hsi*588+11130)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+1464)*1+lsi)*1]), &(inteval->stack[((hsi*45+489)*1+lsi)*1]), &(inteval->stack[((hsi*36+579)*1+lsi)*1]), &(inteval->stack[((hsi*36+615)*1+lsi)*1]),1);
HRRPart0bra0ket0l100p(inteval, &(inteval->stack[((hsi*135+11718)*1+lsi)*1]), &(inteval->stack[((hsi*55+379)*1+lsi)*1]), &(inteval->stack[((hsi*45+489)*1+lsi)*1]), &(inteval->stack[((hsi*45+534)*1+lsi)*1]),1);
HRRPart0bra0ket0k100d(inteval, &(inteval->stack[((hsi*216+12726)*1+lsi)*1]), &(inteval->stack[((hsi*135+11718)*1+lsi)*1]), &(inteval->stack[((hsi*108+1464)*1+lsi)*1]), &(inteval->stack[((hsi*108+7406)*1+lsi)*1]),1);
HRRPart0bra0ket0m100p(inteval, &(inteval->stack[((hsi*165+16590)*1+lsi)*1]), &(inteval->stack[((hsi*66+247)*1+lsi)*1]), &(inteval->stack[((hsi*55+379)*1+lsi)*1]), &(inteval->stack[((hsi*55+434)*1+lsi)*1]),1);
HRRPart0bra0ket0l100d(inteval, &(inteval->stack[((hsi*270+1572)*1+lsi)*1]), &(inteval->stack[((hsi*165+16590)*1+lsi)*1]), &(inteval->stack[((hsi*135+11718)*1+lsi)*1]), &(inteval->stack[((hsi*135+7514)*1+lsi)*1]),1);
HRRPart0bra0ket0k100f(inteval, &(inteval->stack[((hsi*360+11718)*1+lsi)*1]), &(inteval->stack[((hsi*270+1572)*1+lsi)*1]), &(inteval->stack[((hsi*216+12726)*1+lsi)*1]), &(inteval->stack[((hsi*216+7649)*1+lsi)*1]),1);
HRRPart0bra0ket0ps100p(inteval, &(inteval->stack[((hsi*198+7406)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]), &(inteval->stack[((hsi*66+247)*1+lsi)*1]), &(inteval->stack[((hsi*66+313)*1+lsi)*1]),1);
HRRPart0bra0ket0m100d(inteval, &(inteval->stack[((hsi*330+247)*1+lsi)*1]), &(inteval->stack[((hsi*198+7406)*1+lsi)*1]), &(inteval->stack[((hsi*165+16590)*1+lsi)*1]), &(inteval->stack[((hsi*165+7865)*1+lsi)*1]),1);
HRRPart0bra0ket0l100f(inteval, &(inteval->stack[((hsi*450+18270)*1+lsi)*1]), &(inteval->stack[((hsi*330+247)*1+lsi)*1]), &(inteval->stack[((hsi*270+1572)*1+lsi)*1]), &(inteval->stack[((hsi*270+8030)*1+lsi)*1]),1);
HRRPart0bra0ket0k100g(inteval, &(inteval->stack[((hsi*540+7604)*1+lsi)*1]), &(inteval->stack[((hsi*450+18270)*1+lsi)*1]), &(inteval->stack[((hsi*360+11718)*1+lsi)*1]), &(inteval->stack[((hsi*360+8300)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+8144)*1+lsi)*1]), &(inteval->stack[((hsi*36+579)*1+lsi)*1]), &(inteval->stack[((hsi*28+651)*1+lsi)*1]), &(inteval->stack[((hsi*28+679)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d(inteval, &(inteval->stack[((hsi*168+8228)*1+lsi)*1]), &(inteval->stack[((hsi*108+1464)*1+lsi)*1]), &(inteval->stack[((hsi*84+8144)*1+lsi)*1]), &(inteval->stack[((hsi*84+8660)*1+lsi)*1]),1);
HRRPart0bra0ket0i100f(inteval, &(inteval->stack[((hsi*280+1464)*1+lsi)*1]), &(inteval->stack[((hsi*216+12726)*1+lsi)*1]), &(inteval->stack[((hsi*168+8228)*1+lsi)*1]), &(inteval->stack[((hsi*168+8744)*1+lsi)*1]),1);
HRRPart0bra0ket0i100g(inteval, &(inteval->stack[((hsi*420+12726)*1+lsi)*1]), &(inteval->stack[((hsi*360+11718)*1+lsi)*1]), &(inteval->stack[((hsi*280+1464)*1+lsi)*1]), &(inteval->stack[((hsi*280+8912)*1+lsi)*1]),1);
HRRPart0bra0ket0i100h(inteval, &(inteval->stack[((hsi*588+8144)*1+lsi)*1]), &(inteval->stack[((hsi*540+7604)*1+lsi)*1]), &(inteval->stack[((hsi*420+12726)*1+lsi)*1]), &(inteval->stack[((hsi*420+9192)*1+lsi)*1]),1);
HRRPart0bra0ket0pp100p(inteval, &(inteval->stack[((hsi*234+8732)*1+lsi)*1]), &(inteval->stack[((hsi*91+0)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]), &(inteval->stack[((hsi*78+169)*1+lsi)*1]),1);
HRRPart0bra0ket0ps100d(inteval, &(inteval->stack[((hsi*396+8966)*1+lsi)*1]), &(inteval->stack[((hsi*234+8732)*1+lsi)*1]), &(inteval->stack[((hsi*198+7406)*1+lsi)*1]), &(inteval->stack[((hsi*198+9612)*1+lsi)*1]),1);
HRRPart0bra0ket0m100f(inteval, &(inteval->stack[((hsi*550+18720)*1+lsi)*1]), &(inteval->stack[((hsi*396+8966)*1+lsi)*1]), &(inteval->stack[((hsi*330+247)*1+lsi)*1]), &(inteval->stack[((hsi*330+9810)*1+lsi)*1]),1);
HRRPart0bra0ket0l100g(inteval, &(inteval->stack[((hsi*675+8732)*1+lsi)*1]), &(inteval->stack[((hsi*550+18720)*1+lsi)*1]), &(inteval->stack[((hsi*450+18270)*1+lsi)*1]), &(inteval->stack[((hsi*450+10140)*1+lsi)*1]),1);
HRRPart0bra0ket0k100h(inteval, &(inteval->stack[((hsi*756+9407)*1+lsi)*1]), &(inteval->stack[((hsi*675+8732)*1+lsi)*1]), &(inteval->stack[((hsi*540+7604)*1+lsi)*1]), &(inteval->stack[((hsi*540+10590)*1+lsi)*1]),1);
HRRPart0bra0ket0i100i(inteval, &(inteval->stack[((hsi*784+2702)*1+lsi)*1]), &(inteval->stack[((hsi*756+9407)*1+lsi)*1]), &(inteval->stack[((hsi*588+8144)*1+lsi)*1]), &(inteval->stack[((hsi*588+11130)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*784+2702)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*784+3486)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*784+4270)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*784+5054)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*784+5838)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*784+6622)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
