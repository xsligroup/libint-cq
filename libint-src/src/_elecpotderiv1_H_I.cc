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
#include <HRRPart0ket0bra0ig.h>
#include <HRRPart0ket0bra0ig001.h>
#include <HRRPart0ket0bra0ig010.h>
#include <HRRPart0ket0bra0ig100.h>
#include <HRRPart0ket0bra0ih001.h>
#include <HRRPart0ket0bra0ih010.h>
#include <HRRPart0ket0bra0ih100.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0ip001.h>
#include <HRRPart0ket0bra0ip010.h>
#include <HRRPart0ket0bra0ip100.h>
#include <HRRPart0ket0bra0i001d.h>
#include <HRRPart0ket0bra0i001f.h>
#include <HRRPart0ket0bra0i001g.h>
#include <HRRPart0ket0bra0i001h.h>
#include <HRRPart0ket0bra0i001p.h>
#include <HRRPart0ket0bra0i010d.h>
#include <HRRPart0ket0bra0i010f.h>
#include <HRRPart0ket0bra0i010g.h>
#include <HRRPart0ket0bra0i010h.h>
#include <HRRPart0ket0bra0i010p.h>
#include <HRRPart0ket0bra0i100d.h>
#include <HRRPart0ket0bra0i100f.h>
#include <HRRPart0ket0bra0i100g.h>
#include <HRRPart0ket0bra0i100h.h>
#include <HRRPart0ket0bra0i100p.h>
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
#include <_elecpotderiv1_H_I_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_H_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2078)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_H_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+5606)*1+lsi)*1]), &(inteval->stack[((hsi*45+561)*1+lsi)*1]), &(inteval->stack[((hsi*36+642)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+5714)*1+lsi)*1]), &(inteval->stack[((hsi*55+461)*1+lsi)*1]), &(inteval->stack[((hsi*45+561)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+5849)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+6065)*1+lsi)*1]), &(inteval->stack[((hsi*36+642)*1+lsi)*1]), &(inteval->stack[((hsi*28+28)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+6149)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+6317)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+6597)*1+lsi)*1]), &(inteval->stack[((hsi*66+340)*1+lsi)*1]), &(inteval->stack[((hsi*55+461)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+6762)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+7032)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0ket0bra0ig(inteval, &(inteval->stack[((hsi*420+7392)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0ket0bra0k001p(inteval, &(inteval->stack[((hsi*108+7812)*1+lsi)*1]), &(inteval->stack[((hsi*45+1997)*1+lsi)*1]), &(inteval->stack[((hsi*36+2042)*1+lsi)*1]), &(inteval->stack[((hsi*36+642)*1+lsi)*1]),1);
HRRPart0ket0bra0l001p(inteval, &(inteval->stack[((hsi*135+7920)*1+lsi)*1]), &(inteval->stack[((hsi*55+1942)*1+lsi)*1]), &(inteval->stack[((hsi*45+1997)*1+lsi)*1]), &(inteval->stack[((hsi*45+561)*1+lsi)*1]),1);
HRRPart0ket0bra0k001d(inteval, &(inteval->stack[((hsi*216+8055)*1+lsi)*1]), &(inteval->stack[((hsi*135+7920)*1+lsi)*1]), &(inteval->stack[((hsi*108+7812)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0ket0bra0m001p(inteval, &(inteval->stack[((hsi*165+8271)*1+lsi)*1]), &(inteval->stack[((hsi*66+1876)*1+lsi)*1]), &(inteval->stack[((hsi*55+1942)*1+lsi)*1]), &(inteval->stack[((hsi*55+461)*1+lsi)*1]),1);
HRRPart0ket0bra0l001d(inteval, &(inteval->stack[((hsi*270+8436)*1+lsi)*1]), &(inteval->stack[((hsi*165+8271)*1+lsi)*1]), &(inteval->stack[((hsi*135+7920)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0ket0bra0k001f(inteval, &(inteval->stack[((hsi*360+8706)*1+lsi)*1]), &(inteval->stack[((hsi*270+8436)*1+lsi)*1]), &(inteval->stack[((hsi*216+8055)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0ket0bra0i001p(inteval, &(inteval->stack[((hsi*84+7920)*1+lsi)*1]), &(inteval->stack[((hsi*36+2042)*1+lsi)*1]), &(inteval->stack[((hsi*28+168)*1+lsi)*1]), &(inteval->stack[((hsi*28+28)*1+lsi)*1]),1);
HRRPart0ket0bra0i001d(inteval, &(inteval->stack[((hsi*168+9066)*1+lsi)*1]), &(inteval->stack[((hsi*108+7812)*1+lsi)*1]), &(inteval->stack[((hsi*84+7920)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0ket0bra0i001f(inteval, &(inteval->stack[((hsi*280+9234)*1+lsi)*1]), &(inteval->stack[((hsi*216+8055)*1+lsi)*1]), &(inteval->stack[((hsi*168+9066)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0ket0bra0i001g(inteval, &(inteval->stack[((hsi*420+7812)*1+lsi)*1]), &(inteval->stack[((hsi*360+8706)*1+lsi)*1]), &(inteval->stack[((hsi*280+9234)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0ket0bra0ps001p(inteval, &(inteval->stack[((hsi*198+9066)*1+lsi)*1]), &(inteval->stack[((hsi*78+1798)*1+lsi)*1]), &(inteval->stack[((hsi*66+1876)*1+lsi)*1]), &(inteval->stack[((hsi*66+340)*1+lsi)*1]),1);
HRRPart0ket0bra0m001d(inteval, &(inteval->stack[((hsi*330+9264)*1+lsi)*1]), &(inteval->stack[((hsi*198+9066)*1+lsi)*1]), &(inteval->stack[((hsi*165+8271)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0ket0bra0l001f(inteval, &(inteval->stack[((hsi*450+9594)*1+lsi)*1]), &(inteval->stack[((hsi*330+9264)*1+lsi)*1]), &(inteval->stack[((hsi*270+8436)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0ket0bra0k001g(inteval, &(inteval->stack[((hsi*540+10044)*1+lsi)*1]), &(inteval->stack[((hsi*450+9594)*1+lsi)*1]), &(inteval->stack[((hsi*360+8706)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0ket0bra0i001h(inteval, &(inteval->stack[((hsi*588+5018)*1+lsi)*1]), &(inteval->stack[((hsi*540+10044)*1+lsi)*1]), &(inteval->stack[((hsi*420+7812)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
HRRPart0ket0bra0k010p(inteval, &(inteval->stack[((hsi*108+8232)*1+lsi)*1]), &(inteval->stack[((hsi*45+1717)*1+lsi)*1]), &(inteval->stack[((hsi*36+1762)*1+lsi)*1]), &(inteval->stack[((hsi*36+642)*1+lsi)*1]),1);
HRRPart0ket0bra0l010p(inteval, &(inteval->stack[((hsi*135+8340)*1+lsi)*1]), &(inteval->stack[((hsi*55+1662)*1+lsi)*1]), &(inteval->stack[((hsi*45+1717)*1+lsi)*1]), &(inteval->stack[((hsi*45+561)*1+lsi)*1]),1);
HRRPart0ket0bra0k010d(inteval, &(inteval->stack[((hsi*216+8475)*1+lsi)*1]), &(inteval->stack[((hsi*135+8340)*1+lsi)*1]), &(inteval->stack[((hsi*108+8232)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0ket0bra0m010p(inteval, &(inteval->stack[((hsi*165+8691)*1+lsi)*1]), &(inteval->stack[((hsi*66+1596)*1+lsi)*1]), &(inteval->stack[((hsi*55+1662)*1+lsi)*1]), &(inteval->stack[((hsi*55+461)*1+lsi)*1]),1);
HRRPart0ket0bra0l010d(inteval, &(inteval->stack[((hsi*270+8856)*1+lsi)*1]), &(inteval->stack[((hsi*165+8691)*1+lsi)*1]), &(inteval->stack[((hsi*135+8340)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0ket0bra0k010f(inteval, &(inteval->stack[((hsi*360+9126)*1+lsi)*1]), &(inteval->stack[((hsi*270+8856)*1+lsi)*1]), &(inteval->stack[((hsi*216+8475)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0ket0bra0i010p(inteval, &(inteval->stack[((hsi*84+9486)*1+lsi)*1]), &(inteval->stack[((hsi*36+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+140)*1+lsi)*1]), &(inteval->stack[((hsi*28+28)*1+lsi)*1]),1);
HRRPart0ket0bra0i010d(inteval, &(inteval->stack[((hsi*168+9570)*1+lsi)*1]), &(inteval->stack[((hsi*108+8232)*1+lsi)*1]), &(inteval->stack[((hsi*84+9486)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0ket0bra0i010f(inteval, &(inteval->stack[((hsi*280+1662)*1+lsi)*1]), &(inteval->stack[((hsi*216+8475)*1+lsi)*1]), &(inteval->stack[((hsi*168+9570)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0ket0bra0i010g(inteval, &(inteval->stack[((hsi*420+9486)*1+lsi)*1]), &(inteval->stack[((hsi*360+9126)*1+lsi)*1]), &(inteval->stack[((hsi*280+1662)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0ket0bra0ps010p(inteval, &(inteval->stack[((hsi*198+8232)*1+lsi)*1]), &(inteval->stack[((hsi*78+1518)*1+lsi)*1]), &(inteval->stack[((hsi*66+1596)*1+lsi)*1]), &(inteval->stack[((hsi*66+340)*1+lsi)*1]),1);
HRRPart0ket0bra0m010d(inteval, &(inteval->stack[((hsi*330+1518)*1+lsi)*1]), &(inteval->stack[((hsi*198+8232)*1+lsi)*1]), &(inteval->stack[((hsi*165+8691)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0ket0bra0l010f(inteval, &(inteval->stack[((hsi*450+8232)*1+lsi)*1]), &(inteval->stack[((hsi*330+1518)*1+lsi)*1]), &(inteval->stack[((hsi*270+8856)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0ket0bra0k010g(inteval, &(inteval->stack[((hsi*540+1518)*1+lsi)*1]), &(inteval->stack[((hsi*450+8232)*1+lsi)*1]), &(inteval->stack[((hsi*360+9126)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0ket0bra0i010h(inteval, &(inteval->stack[((hsi*588+4430)*1+lsi)*1]), &(inteval->stack[((hsi*540+1518)*1+lsi)*1]), &(inteval->stack[((hsi*420+9486)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
HRRPart0ket0bra0k100p(inteval, &(inteval->stack[((hsi*108+8232)*1+lsi)*1]), &(inteval->stack[((hsi*45+1437)*1+lsi)*1]), &(inteval->stack[((hsi*36+1482)*1+lsi)*1]), &(inteval->stack[((hsi*36+642)*1+lsi)*1]),1);
HRRPart0ket0bra0l100p(inteval, &(inteval->stack[((hsi*135+8340)*1+lsi)*1]), &(inteval->stack[((hsi*55+1382)*1+lsi)*1]), &(inteval->stack[((hsi*45+1437)*1+lsi)*1]), &(inteval->stack[((hsi*45+561)*1+lsi)*1]),1);
HRRPart0ket0bra0k100d(inteval, &(inteval->stack[((hsi*216+8475)*1+lsi)*1]), &(inteval->stack[((hsi*135+8340)*1+lsi)*1]), &(inteval->stack[((hsi*108+8232)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0ket0bra0m100p(inteval, &(inteval->stack[((hsi*165+8691)*1+lsi)*1]), &(inteval->stack[((hsi*66+1316)*1+lsi)*1]), &(inteval->stack[((hsi*55+1382)*1+lsi)*1]), &(inteval->stack[((hsi*55+461)*1+lsi)*1]),1);
HRRPart0ket0bra0l100d(inteval, &(inteval->stack[((hsi*270+8856)*1+lsi)*1]), &(inteval->stack[((hsi*165+8691)*1+lsi)*1]), &(inteval->stack[((hsi*135+8340)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0ket0bra0k100f(inteval, &(inteval->stack[((hsi*360+9126)*1+lsi)*1]), &(inteval->stack[((hsi*270+8856)*1+lsi)*1]), &(inteval->stack[((hsi*216+8475)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0ket0bra0i100p(inteval, &(inteval->stack[((hsi*84+9906)*1+lsi)*1]), &(inteval->stack[((hsi*36+1482)*1+lsi)*1]), &(inteval->stack[((hsi*28+112)*1+lsi)*1]), &(inteval->stack[((hsi*28+28)*1+lsi)*1]),1);
HRRPart0ket0bra0i100d(inteval, &(inteval->stack[((hsi*168+10584)*1+lsi)*1]), &(inteval->stack[((hsi*108+8232)*1+lsi)*1]), &(inteval->stack[((hsi*84+9906)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0ket0bra0i100f(inteval, &(inteval->stack[((hsi*280+10752)*1+lsi)*1]), &(inteval->stack[((hsi*216+8475)*1+lsi)*1]), &(inteval->stack[((hsi*168+10584)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0ket0bra0i100g(inteval, &(inteval->stack[((hsi*420+8232)*1+lsi)*1]), &(inteval->stack[((hsi*360+9126)*1+lsi)*1]), &(inteval->stack[((hsi*280+10752)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0ket0bra0ps100p(inteval, &(inteval->stack[((hsi*198+10584)*1+lsi)*1]), &(inteval->stack[((hsi*78+1238)*1+lsi)*1]), &(inteval->stack[((hsi*66+1316)*1+lsi)*1]), &(inteval->stack[((hsi*66+340)*1+lsi)*1]),1);
HRRPart0ket0bra0m100d(inteval, &(inteval->stack[((hsi*330+10782)*1+lsi)*1]), &(inteval->stack[((hsi*198+10584)*1+lsi)*1]), &(inteval->stack[((hsi*165+8691)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0ket0bra0l100f(inteval, &(inteval->stack[((hsi*450+11112)*1+lsi)*1]), &(inteval->stack[((hsi*330+10782)*1+lsi)*1]), &(inteval->stack[((hsi*270+8856)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0ket0bra0k100g(inteval, &(inteval->stack[((hsi*540+11562)*1+lsi)*1]), &(inteval->stack[((hsi*450+11112)*1+lsi)*1]), &(inteval->stack[((hsi*360+9126)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0ket0bra0i100h(inteval, &(inteval->stack[((hsi*588+3842)*1+lsi)*1]), &(inteval->stack[((hsi*540+11562)*1+lsi)*1]), &(inteval->stack[((hsi*420+8232)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
HRRPart0ket0bra0kp001(inteval, &(inteval->stack[((hsi*108+10584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1157)*1+lsi)*1]), &(inteval->stack[((hsi*36+1202)*1+lsi)*1]), &(inteval->stack[((hsi*36+642)*1+lsi)*1]),1);
HRRPart0ket0bra0lp001(inteval, &(inteval->stack[((hsi*135+10692)*1+lsi)*1]), &(inteval->stack[((hsi*55+1102)*1+lsi)*1]), &(inteval->stack[((hsi*45+1157)*1+lsi)*1]), &(inteval->stack[((hsi*45+561)*1+lsi)*1]),1);
HRRPart0ket0bra0kd001(inteval, &(inteval->stack[((hsi*216+8652)*1+lsi)*1]), &(inteval->stack[((hsi*135+10692)*1+lsi)*1]), &(inteval->stack[((hsi*108+10584)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0ket0bra0mp001(inteval, &(inteval->stack[((hsi*165+10827)*1+lsi)*1]), &(inteval->stack[((hsi*66+1036)*1+lsi)*1]), &(inteval->stack[((hsi*55+1102)*1+lsi)*1]), &(inteval->stack[((hsi*55+461)*1+lsi)*1]),1);
HRRPart0ket0bra0ld001(inteval, &(inteval->stack[((hsi*270+8868)*1+lsi)*1]), &(inteval->stack[((hsi*165+10827)*1+lsi)*1]), &(inteval->stack[((hsi*135+10692)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0ket0bra0kf001(inteval, &(inteval->stack[((hsi*360+10992)*1+lsi)*1]), &(inteval->stack[((hsi*270+8868)*1+lsi)*1]), &(inteval->stack[((hsi*216+8652)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0ket0bra0ip001(inteval, &(inteval->stack[((hsi*84+112)*1+lsi)*1]), &(inteval->stack[((hsi*36+1202)*1+lsi)*1]), &(inteval->stack[((hsi*28+84)*1+lsi)*1]), &(inteval->stack[((hsi*28+28)*1+lsi)*1]),1);
HRRPart0ket0bra0id001(inteval, &(inteval->stack[((hsi*168+1102)*1+lsi)*1]), &(inteval->stack[((hsi*108+10584)*1+lsi)*1]), &(inteval->stack[((hsi*84+112)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0ket0bra0if001(inteval, &(inteval->stack[((hsi*280+9138)*1+lsi)*1]), &(inteval->stack[((hsi*216+8652)*1+lsi)*1]), &(inteval->stack[((hsi*168+1102)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0ket0bra0ig001(inteval, &(inteval->stack[((hsi*420+12102)*1+lsi)*1]), &(inteval->stack[((hsi*360+10992)*1+lsi)*1]), &(inteval->stack[((hsi*280+9138)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0ket0bra0psp001(inteval, &(inteval->stack[((hsi*198+1102)*1+lsi)*1]), &(inteval->stack[((hsi*78+958)*1+lsi)*1]), &(inteval->stack[((hsi*66+1036)*1+lsi)*1]), &(inteval->stack[((hsi*66+340)*1+lsi)*1]),1);
HRRPart0ket0bra0md001(inteval, &(inteval->stack[((hsi*330+9138)*1+lsi)*1]), &(inteval->stack[((hsi*198+1102)*1+lsi)*1]), &(inteval->stack[((hsi*165+10827)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0ket0bra0lf001(inteval, &(inteval->stack[((hsi*450+958)*1+lsi)*1]), &(inteval->stack[((hsi*330+9138)*1+lsi)*1]), &(inteval->stack[((hsi*270+8868)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0ket0bra0kg001(inteval, &(inteval->stack[((hsi*540+8652)*1+lsi)*1]), &(inteval->stack[((hsi*450+958)*1+lsi)*1]), &(inteval->stack[((hsi*360+10992)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0ket0bra0ih001(inteval, &(inteval->stack[((hsi*588+3254)*1+lsi)*1]), &(inteval->stack[((hsi*540+8652)*1+lsi)*1]), &(inteval->stack[((hsi*420+12102)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
HRRPart0ket0bra0kp010(inteval, &(inteval->stack[((hsi*108+10584)*1+lsi)*1]), &(inteval->stack[((hsi*45+877)*1+lsi)*1]), &(inteval->stack[((hsi*36+922)*1+lsi)*1]), &(inteval->stack[((hsi*36+642)*1+lsi)*1]),1);
HRRPart0ket0bra0lp010(inteval, &(inteval->stack[((hsi*135+10692)*1+lsi)*1]), &(inteval->stack[((hsi*55+822)*1+lsi)*1]), &(inteval->stack[((hsi*45+877)*1+lsi)*1]), &(inteval->stack[((hsi*45+561)*1+lsi)*1]),1);
HRRPart0ket0bra0kd010(inteval, &(inteval->stack[((hsi*216+10827)*1+lsi)*1]), &(inteval->stack[((hsi*135+10692)*1+lsi)*1]), &(inteval->stack[((hsi*108+10584)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0ket0bra0mp010(inteval, &(inteval->stack[((hsi*165+958)*1+lsi)*1]), &(inteval->stack[((hsi*66+756)*1+lsi)*1]), &(inteval->stack[((hsi*55+822)*1+lsi)*1]), &(inteval->stack[((hsi*55+461)*1+lsi)*1]),1);
HRRPart0ket0bra0ld010(inteval, &(inteval->stack[((hsi*270+11043)*1+lsi)*1]), &(inteval->stack[((hsi*165+958)*1+lsi)*1]), &(inteval->stack[((hsi*135+10692)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0ket0bra0kf010(inteval, &(inteval->stack[((hsi*360+1123)*1+lsi)*1]), &(inteval->stack[((hsi*270+11043)*1+lsi)*1]), &(inteval->stack[((hsi*216+10827)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0ket0bra0ip010(inteval, &(inteval->stack[((hsi*84+9192)*1+lsi)*1]), &(inteval->stack[((hsi*36+922)*1+lsi)*1]), &(inteval->stack[((hsi*28+56)*1+lsi)*1]), &(inteval->stack[((hsi*28+28)*1+lsi)*1]),1);
HRRPart0ket0bra0id010(inteval, &(inteval->stack[((hsi*168+11313)*1+lsi)*1]), &(inteval->stack[((hsi*108+10584)*1+lsi)*1]), &(inteval->stack[((hsi*84+9192)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0ket0bra0if010(inteval, &(inteval->stack[((hsi*280+9192)*1+lsi)*1]), &(inteval->stack[((hsi*216+10827)*1+lsi)*1]), &(inteval->stack[((hsi*168+11313)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0ket0bra0ig010(inteval, &(inteval->stack[((hsi*420+10584)*1+lsi)*1]), &(inteval->stack[((hsi*360+1123)*1+lsi)*1]), &(inteval->stack[((hsi*280+9192)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0ket0bra0psp010(inteval, &(inteval->stack[((hsi*198+9192)*1+lsi)*1]), &(inteval->stack[((hsi*78+678)*1+lsi)*1]), &(inteval->stack[((hsi*66+756)*1+lsi)*1]), &(inteval->stack[((hsi*66+340)*1+lsi)*1]),1);
HRRPart0ket0bra0md010(inteval, &(inteval->stack[((hsi*330+12522)*1+lsi)*1]), &(inteval->stack[((hsi*198+9192)*1+lsi)*1]), &(inteval->stack[((hsi*165+958)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0ket0bra0lf010(inteval, &(inteval->stack[((hsi*450+12852)*1+lsi)*1]), &(inteval->stack[((hsi*330+12522)*1+lsi)*1]), &(inteval->stack[((hsi*270+11043)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0ket0bra0kg010(inteval, &(inteval->stack[((hsi*540+11004)*1+lsi)*1]), &(inteval->stack[((hsi*450+12852)*1+lsi)*1]), &(inteval->stack[((hsi*360+1123)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0ket0bra0ih010(inteval, &(inteval->stack[((hsi*588+2666)*1+lsi)*1]), &(inteval->stack[((hsi*540+11004)*1+lsi)*1]), &(inteval->stack[((hsi*420+10584)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
HRRPart0ket0bra0kp100(inteval, &(inteval->stack[((hsi*108+678)*1+lsi)*1]), &(inteval->stack[((hsi*45+516)*1+lsi)*1]), &(inteval->stack[((hsi*36+606)*1+lsi)*1]), &(inteval->stack[((hsi*36+642)*1+lsi)*1]),1);
HRRPart0ket0bra0lp100(inteval, &(inteval->stack[((hsi*135+786)*1+lsi)*1]), &(inteval->stack[((hsi*55+406)*1+lsi)*1]), &(inteval->stack[((hsi*45+516)*1+lsi)*1]), &(inteval->stack[((hsi*45+561)*1+lsi)*1]),1);
HRRPart0ket0bra0kd100(inteval, &(inteval->stack[((hsi*216+921)*1+lsi)*1]), &(inteval->stack[((hsi*135+786)*1+lsi)*1]), &(inteval->stack[((hsi*108+678)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0ket0bra0mp100(inteval, &(inteval->stack[((hsi*165+1137)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]), &(inteval->stack[((hsi*55+406)*1+lsi)*1]), &(inteval->stack[((hsi*55+461)*1+lsi)*1]),1);
HRRPart0ket0bra0ld100(inteval, &(inteval->stack[((hsi*270+9192)*1+lsi)*1]), &(inteval->stack[((hsi*165+1137)*1+lsi)*1]), &(inteval->stack[((hsi*135+786)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0ket0bra0kf100(inteval, &(inteval->stack[((hsi*360+12522)*1+lsi)*1]), &(inteval->stack[((hsi*270+9192)*1+lsi)*1]), &(inteval->stack[((hsi*216+921)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0ket0bra0ip100(inteval, &(inteval->stack[((hsi*84+5606)*1+lsi)*1]), &(inteval->stack[((hsi*36+606)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+28)*1+lsi)*1]),1);
HRRPart0ket0bra0id100(inteval, &(inteval->stack[((hsi*168+5690)*1+lsi)*1]), &(inteval->stack[((hsi*108+678)*1+lsi)*1]), &(inteval->stack[((hsi*84+5606)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0ket0bra0if100(inteval, &(inteval->stack[((hsi*280+406)*1+lsi)*1]), &(inteval->stack[((hsi*216+921)*1+lsi)*1]), &(inteval->stack[((hsi*168+5690)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0ket0bra0ig100(inteval, &(inteval->stack[((hsi*420+5606)*1+lsi)*1]), &(inteval->stack[((hsi*360+12522)*1+lsi)*1]), &(inteval->stack[((hsi*280+406)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0ket0bra0psp100(inteval, &(inteval->stack[((hsi*198+406)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]), &(inteval->stack[((hsi*66+340)*1+lsi)*1]),1);
HRRPart0ket0bra0md100(inteval, &(inteval->stack[((hsi*330+6026)*1+lsi)*1]), &(inteval->stack[((hsi*198+406)*1+lsi)*1]), &(inteval->stack[((hsi*165+1137)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0ket0bra0lf100(inteval, &(inteval->stack[((hsi*450+0)*1+lsi)*1]), &(inteval->stack[((hsi*330+6026)*1+lsi)*1]), &(inteval->stack[((hsi*270+9192)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0ket0bra0kg100(inteval, &(inteval->stack[((hsi*540+450)*1+lsi)*1]), &(inteval->stack[((hsi*450+0)*1+lsi)*1]), &(inteval->stack[((hsi*360+12522)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0ket0bra0ih100(inteval, &(inteval->stack[((hsi*588+2078)*1+lsi)*1]), &(inteval->stack[((hsi*540+450)*1+lsi)*1]), &(inteval->stack[((hsi*420+5606)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*588+2078)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*588+2666)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*588+3254)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*588+3842)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*588+4430)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*588+5018)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
