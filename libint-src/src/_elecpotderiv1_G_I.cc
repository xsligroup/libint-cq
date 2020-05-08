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
#include <HRRPart0ket0bra0id.h>
#include <HRRPart0ket0bra0id001.h>
#include <HRRPart0ket0bra0id010.h>
#include <HRRPart0ket0bra0id100.h>
#include <HRRPart0ket0bra0if.h>
#include <HRRPart0ket0bra0if001.h>
#include <HRRPart0ket0bra0if010.h>
#include <HRRPart0ket0bra0if100.h>
#include <HRRPart0ket0bra0ig001.h>
#include <HRRPart0ket0bra0ig010.h>
#include <HRRPart0ket0bra0ig100.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0ip001.h>
#include <HRRPart0ket0bra0ip010.h>
#include <HRRPart0ket0bra0ip100.h>
#include <HRRPart0ket0bra0i001d.h>
#include <HRRPart0ket0bra0i001f.h>
#include <HRRPart0ket0bra0i001g.h>
#include <HRRPart0ket0bra0i001p.h>
#include <HRRPart0ket0bra0i010d.h>
#include <HRRPart0ket0bra0i010f.h>
#include <HRRPart0ket0bra0i010g.h>
#include <HRRPart0ket0bra0i010p.h>
#include <HRRPart0ket0bra0i100d.h>
#include <HRRPart0ket0bra0i100f.h>
#include <HRRPart0ket0bra0i100g.h>
#include <HRRPart0ket0bra0i100p.h>
#include <HRRPart0ket0bra0kd.h>
#include <HRRPart0ket0bra0kd001.h>
#include <HRRPart0ket0bra0kd010.h>
#include <HRRPart0ket0bra0kd100.h>
#include <HRRPart0ket0bra0kf001.h>
#include <HRRPart0ket0bra0kf010.h>
#include <HRRPart0ket0bra0kf100.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0kp001.h>
#include <HRRPart0ket0bra0kp010.h>
#include <HRRPart0ket0bra0kp100.h>
#include <HRRPart0ket0bra0k001d.h>
#include <HRRPart0ket0bra0k001f.h>
#include <HRRPart0ket0bra0k001p.h>
#include <HRRPart0ket0bra0k010d.h>
#include <HRRPart0ket0bra0k010f.h>
#include <HRRPart0ket0bra0k010p.h>
#include <HRRPart0ket0bra0k100d.h>
#include <HRRPart0ket0bra0k100f.h>
#include <HRRPart0ket0bra0k100p.h>
#include <HRRPart0ket0bra0ld001.h>
#include <HRRPart0ket0bra0ld010.h>
#include <HRRPart0ket0bra0ld100.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0lp001.h>
#include <HRRPart0ket0bra0lp010.h>
#include <HRRPart0ket0bra0lp100.h>
#include <HRRPart0ket0bra0l001d.h>
#include <HRRPart0ket0bra0l001p.h>
#include <HRRPart0ket0bra0l010d.h>
#include <HRRPart0ket0bra0l010p.h>
#include <HRRPart0ket0bra0l100d.h>
#include <HRRPart0ket0bra0l100p.h>
#include <HRRPart0ket0bra0mp001.h>
#include <HRRPart0ket0bra0mp010.h>
#include <HRRPart0ket0bra0mp100.h>
#include <HRRPart0ket0bra0m001p.h>
#include <HRRPart0ket0bra0m010p.h>
#include <HRRPart0ket0bra0m100p.h>
#include <_elecpotderiv1_G_I_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_G_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1544)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_G_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4064)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+4172)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4256)*1+lsi)*1]), &(inteval->stack[((hsi*108+4064)*1+lsi)*1]), &(inteval->stack[((hsi*84+4172)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4424)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4559)*1+lsi)*1]), &(inteval->stack[((hsi*135+4424)*1+lsi)*1]), &(inteval->stack[((hsi*108+4064)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+4775)*1+lsi)*1]), &(inteval->stack[((hsi*216+4559)*1+lsi)*1]), &(inteval->stack[((hsi*168+4256)*1+lsi)*1]),1);
HRRPart0ket0bra0k001p(inteval, &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*45+1435)*1+lsi)*1]), &(inteval->stack[((hsi*36+1480)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0ket0bra0l001p(inteval, &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*55+1380)*1+lsi)*1]), &(inteval->stack[((hsi*45+1435)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0ket0bra0k001d(inteval, &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*108+4064)*1+lsi)*1]),1);
HRRPart0ket0bra0i001p(inteval, &(inteval->stack[((hsi*84+5514)*1+lsi)*1]), &(inteval->stack[((hsi*36+1480)*1+lsi)*1]), &(inteval->stack[((hsi*28+1516)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0ket0bra0i001d(inteval, &(inteval->stack[((hsi*168+5598)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*84+5514)*1+lsi)*1]), &(inteval->stack[((hsi*84+4172)*1+lsi)*1]),1);
HRRPart0ket0bra0i001f(inteval, &(inteval->stack[((hsi*280+5766)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*168+5598)*1+lsi)*1]), &(inteval->stack[((hsi*168+4256)*1+lsi)*1]),1);
HRRPart0ket0bra0m001p(inteval, &(inteval->stack[((hsi*165+5514)*1+lsi)*1]), &(inteval->stack[((hsi*66+1314)*1+lsi)*1]), &(inteval->stack[((hsi*55+1380)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0ket0bra0l001d(inteval, &(inteval->stack[((hsi*270+6046)*1+lsi)*1]), &(inteval->stack[((hsi*165+5514)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*135+4424)*1+lsi)*1]),1);
HRRPart0ket0bra0k001f(inteval, &(inteval->stack[((hsi*360+6316)*1+lsi)*1]), &(inteval->stack[((hsi*270+6046)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*216+4559)*1+lsi)*1]),1);
HRRPart0ket0bra0i001g(inteval, &(inteval->stack[((hsi*420+3644)*1+lsi)*1]), &(inteval->stack[((hsi*360+6316)*1+lsi)*1]), &(inteval->stack[((hsi*280+5766)*1+lsi)*1]), &(inteval->stack[((hsi*280+4775)*1+lsi)*1]),1);
HRRPart0ket0bra0k010p(inteval, &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*45+1205)*1+lsi)*1]), &(inteval->stack[((hsi*36+1250)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0ket0bra0l010p(inteval, &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*55+1150)*1+lsi)*1]), &(inteval->stack[((hsi*45+1205)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0ket0bra0k010d(inteval, &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*108+4064)*1+lsi)*1]),1);
HRRPart0ket0bra0i010p(inteval, &(inteval->stack[((hsi*84+6046)*1+lsi)*1]), &(inteval->stack[((hsi*36+1250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1286)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0ket0bra0i010d(inteval, &(inteval->stack[((hsi*168+1205)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*84+6046)*1+lsi)*1]), &(inteval->stack[((hsi*84+4172)*1+lsi)*1]),1);
HRRPart0ket0bra0i010f(inteval, &(inteval->stack[((hsi*280+6676)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*168+1205)*1+lsi)*1]), &(inteval->stack[((hsi*168+4256)*1+lsi)*1]),1);
HRRPart0ket0bra0m010p(inteval, &(inteval->stack[((hsi*165+1205)*1+lsi)*1]), &(inteval->stack[((hsi*66+1084)*1+lsi)*1]), &(inteval->stack[((hsi*55+1150)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0ket0bra0l010d(inteval, &(inteval->stack[((hsi*270+6046)*1+lsi)*1]), &(inteval->stack[((hsi*165+1205)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*135+4424)*1+lsi)*1]),1);
HRRPart0ket0bra0k010f(inteval, &(inteval->stack[((hsi*360+1084)*1+lsi)*1]), &(inteval->stack[((hsi*270+6046)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*216+4559)*1+lsi)*1]),1);
HRRPart0ket0bra0i010g(inteval, &(inteval->stack[((hsi*420+3224)*1+lsi)*1]), &(inteval->stack[((hsi*360+1084)*1+lsi)*1]), &(inteval->stack[((hsi*280+6676)*1+lsi)*1]), &(inteval->stack[((hsi*280+4775)*1+lsi)*1]),1);
HRRPart0ket0bra0k100p(inteval, &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*45+975)*1+lsi)*1]), &(inteval->stack[((hsi*36+1020)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0ket0bra0l100p(inteval, &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*55+920)*1+lsi)*1]), &(inteval->stack[((hsi*45+975)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0ket0bra0k100d(inteval, &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*108+4064)*1+lsi)*1]),1);
HRRPart0ket0bra0i100p(inteval, &(inteval->stack[((hsi*84+6046)*1+lsi)*1]), &(inteval->stack[((hsi*36+1020)*1+lsi)*1]), &(inteval->stack[((hsi*28+1056)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0ket0bra0i100d(inteval, &(inteval->stack[((hsi*168+5514)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*84+6046)*1+lsi)*1]), &(inteval->stack[((hsi*84+4172)*1+lsi)*1]),1);
HRRPart0ket0bra0i100f(inteval, &(inteval->stack[((hsi*280+6956)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*168+5514)*1+lsi)*1]), &(inteval->stack[((hsi*168+4256)*1+lsi)*1]),1);
HRRPart0ket0bra0m100p(inteval, &(inteval->stack[((hsi*165+6046)*1+lsi)*1]), &(inteval->stack[((hsi*66+854)*1+lsi)*1]), &(inteval->stack[((hsi*55+920)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0ket0bra0l100d(inteval, &(inteval->stack[((hsi*270+7236)*1+lsi)*1]), &(inteval->stack[((hsi*165+6046)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*135+4424)*1+lsi)*1]),1);
HRRPart0ket0bra0k100f(inteval, &(inteval->stack[((hsi*360+7506)*1+lsi)*1]), &(inteval->stack[((hsi*270+7236)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*216+4559)*1+lsi)*1]),1);
HRRPart0ket0bra0i100g(inteval, &(inteval->stack[((hsi*420+2804)*1+lsi)*1]), &(inteval->stack[((hsi*360+7506)*1+lsi)*1]), &(inteval->stack[((hsi*280+6956)*1+lsi)*1]), &(inteval->stack[((hsi*280+4775)*1+lsi)*1]),1);
HRRPart0ket0bra0kp001(inteval, &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*45+745)*1+lsi)*1]), &(inteval->stack[((hsi*36+790)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0ket0bra0lp001(inteval, &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*55+690)*1+lsi)*1]), &(inteval->stack[((hsi*45+745)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0ket0bra0kd001(inteval, &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*108+4064)*1+lsi)*1]),1);
HRRPart0ket0bra0ip001(inteval, &(inteval->stack[((hsi*84+7236)*1+lsi)*1]), &(inteval->stack[((hsi*36+790)*1+lsi)*1]), &(inteval->stack[((hsi*28+826)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0ket0bra0id001(inteval, &(inteval->stack[((hsi*168+745)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*84+7236)*1+lsi)*1]), &(inteval->stack[((hsi*84+4172)*1+lsi)*1]),1);
HRRPart0ket0bra0if001(inteval, &(inteval->stack[((hsi*280+7866)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*168+745)*1+lsi)*1]), &(inteval->stack[((hsi*168+4256)*1+lsi)*1]),1);
HRRPart0ket0bra0mp001(inteval, &(inteval->stack[((hsi*165+745)*1+lsi)*1]), &(inteval->stack[((hsi*66+624)*1+lsi)*1]), &(inteval->stack[((hsi*55+690)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0ket0bra0ld001(inteval, &(inteval->stack[((hsi*270+6046)*1+lsi)*1]), &(inteval->stack[((hsi*165+745)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*135+4424)*1+lsi)*1]),1);
HRRPart0ket0bra0kf001(inteval, &(inteval->stack[((hsi*360+624)*1+lsi)*1]), &(inteval->stack[((hsi*270+6046)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*216+4559)*1+lsi)*1]),1);
HRRPart0ket0bra0ig001(inteval, &(inteval->stack[((hsi*420+2384)*1+lsi)*1]), &(inteval->stack[((hsi*360+624)*1+lsi)*1]), &(inteval->stack[((hsi*280+7866)*1+lsi)*1]), &(inteval->stack[((hsi*280+4775)*1+lsi)*1]),1);
HRRPart0ket0bra0kp010(inteval, &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*45+515)*1+lsi)*1]), &(inteval->stack[((hsi*36+560)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0ket0bra0lp010(inteval, &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*55+460)*1+lsi)*1]), &(inteval->stack[((hsi*45+515)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0ket0bra0kd010(inteval, &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*108+4064)*1+lsi)*1]),1);
HRRPart0ket0bra0ip010(inteval, &(inteval->stack[((hsi*84+6046)*1+lsi)*1]), &(inteval->stack[((hsi*36+560)*1+lsi)*1]), &(inteval->stack[((hsi*28+596)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0ket0bra0id010(inteval, &(inteval->stack[((hsi*168+7236)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*84+6046)*1+lsi)*1]), &(inteval->stack[((hsi*84+4172)*1+lsi)*1]),1);
HRRPart0ket0bra0if010(inteval, &(inteval->stack[((hsi*280+8146)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*168+7236)*1+lsi)*1]), &(inteval->stack[((hsi*168+4256)*1+lsi)*1]),1);
HRRPart0ket0bra0mp010(inteval, &(inteval->stack[((hsi*165+6046)*1+lsi)*1]), &(inteval->stack[((hsi*66+394)*1+lsi)*1]), &(inteval->stack[((hsi*55+460)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0ket0bra0ld010(inteval, &(inteval->stack[((hsi*270+7236)*1+lsi)*1]), &(inteval->stack[((hsi*165+6046)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*135+4424)*1+lsi)*1]),1);
HRRPart0ket0bra0kf010(inteval, &(inteval->stack[((hsi*360+8426)*1+lsi)*1]), &(inteval->stack[((hsi*270+7236)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*216+4559)*1+lsi)*1]),1);
HRRPart0ket0bra0ig010(inteval, &(inteval->stack[((hsi*420+1964)*1+lsi)*1]), &(inteval->stack[((hsi*360+8426)*1+lsi)*1]), &(inteval->stack[((hsi*280+8146)*1+lsi)*1]), &(inteval->stack[((hsi*280+4775)*1+lsi)*1]),1);
HRRPart0ket0bra0kp100(inteval, &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*45+176)*1+lsi)*1]), &(inteval->stack[((hsi*36+266)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0ket0bra0lp100(inteval, &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*45+176)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0ket0bra0kd100(inteval, &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*108+4064)*1+lsi)*1]),1);
HRRPart0ket0bra0ip100(inteval, &(inteval->stack[((hsi*84+7236)*1+lsi)*1]), &(inteval->stack[((hsi*36+266)*1+lsi)*1]), &(inteval->stack[((hsi*28+338)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0ket0bra0id100(inteval, &(inteval->stack[((hsi*168+176)*1+lsi)*1]), &(inteval->stack[((hsi*108+5055)*1+lsi)*1]), &(inteval->stack[((hsi*84+7236)*1+lsi)*1]), &(inteval->stack[((hsi*84+4172)*1+lsi)*1]),1);
HRRPart0ket0bra0if100(inteval, &(inteval->stack[((hsi*280+344)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*168+176)*1+lsi)*1]), &(inteval->stack[((hsi*168+4256)*1+lsi)*1]),1);
HRRPart0ket0bra0mp100(inteval, &(inteval->stack[((hsi*165+4064)*1+lsi)*1]), &(inteval->stack[((hsi*66+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0ket0bra0ld100(inteval, &(inteval->stack[((hsi*270+6046)*1+lsi)*1]), &(inteval->stack[((hsi*165+4064)*1+lsi)*1]), &(inteval->stack[((hsi*135+5163)*1+lsi)*1]), &(inteval->stack[((hsi*135+4424)*1+lsi)*1]),1);
HRRPart0ket0bra0kf100(inteval, &(inteval->stack[((hsi*360+4064)*1+lsi)*1]), &(inteval->stack[((hsi*270+6046)*1+lsi)*1]), &(inteval->stack[((hsi*216+5298)*1+lsi)*1]), &(inteval->stack[((hsi*216+4559)*1+lsi)*1]),1);
HRRPart0ket0bra0ig100(inteval, &(inteval->stack[((hsi*420+1544)*1+lsi)*1]), &(inteval->stack[((hsi*360+4064)*1+lsi)*1]), &(inteval->stack[((hsi*280+344)*1+lsi)*1]), &(inteval->stack[((hsi*280+4775)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*420+1544)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*420+1964)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*420+2384)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*420+2804)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*420+3224)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*420+3644)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
