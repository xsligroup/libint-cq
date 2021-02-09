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
#include <HRRPart0bra0ket0ih001.h>
#include <HRRPart0bra0ket0ih010.h>
#include <HRRPart0bra0ket0ih100.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0i001d.h>
#include <HRRPart0bra0ket0i001f.h>
#include <HRRPart0bra0ket0i001g.h>
#include <HRRPart0bra0ket0i001h.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i010d.h>
#include <HRRPart0bra0ket0i010f.h>
#include <HRRPart0bra0ket0i010g.h>
#include <HRRPart0bra0ket0i010h.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i100d.h>
#include <HRRPart0bra0ket0i100f.h>
#include <HRRPart0bra0ket0i100g.h>
#include <HRRPart0bra0ket0i100h.h>
#include <HRRPart0bra0ket0i100p.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kd001.h>
#include <HRRPart0bra0ket0kd010.h>
#include <HRRPart0bra0ket0kd100.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kf001.h>
#include <HRRPart0bra0ket0kf010.h>
#include <HRRPart0bra0ket0kf100.h>
#include <HRRPart0bra0ket0kg001.h>
#include <HRRPart0bra0ket0kg010.h>
#include <HRRPart0bra0ket0kg100.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0kp001.h>
#include <HRRPart0bra0ket0kp010.h>
#include <HRRPart0bra0ket0kp100.h>
#include <HRRPart0bra0ket0k001d.h>
#include <HRRPart0bra0ket0k001f.h>
#include <HRRPart0bra0ket0k001g.h>
#include <HRRPart0bra0ket0k001p.h>
#include <HRRPart0bra0ket0k010d.h>
#include <HRRPart0bra0ket0k010f.h>
#include <HRRPart0bra0ket0k010g.h>
#include <HRRPart0bra0ket0k010p.h>
#include <HRRPart0bra0ket0k100d.h>
#include <HRRPart0bra0ket0k100f.h>
#include <HRRPart0bra0ket0k100g.h>
#include <HRRPart0bra0ket0k100p.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0ld001.h>
#include <HRRPart0bra0ket0ld010.h>
#include <HRRPart0bra0ket0ld100.h>
#include <HRRPart0bra0ket0lf001.h>
#include <HRRPart0bra0ket0lf010.h>
#include <HRRPart0bra0ket0lf100.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0lp001.h>
#include <HRRPart0bra0ket0lp010.h>
#include <HRRPart0bra0ket0lp100.h>
#include <HRRPart0bra0ket0l001d.h>
#include <HRRPart0bra0ket0l001f.h>
#include <HRRPart0bra0ket0l001p.h>
#include <HRRPart0bra0ket0l010d.h>
#include <HRRPart0bra0ket0l010f.h>
#include <HRRPart0bra0ket0l010p.h>
#include <HRRPart0bra0ket0l100d.h>
#include <HRRPart0bra0ket0l100f.h>
#include <HRRPart0bra0ket0l100p.h>
#include <HRRPart0bra0ket0md001.h>
#include <HRRPart0bra0ket0md010.h>
#include <HRRPart0bra0ket0md100.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0mp001.h>
#include <HRRPart0bra0ket0mp010.h>
#include <HRRPart0bra0ket0mp100.h>
#include <HRRPart0bra0ket0m001d.h>
#include <HRRPart0bra0ket0m001p.h>
#include <HRRPart0bra0ket0m010d.h>
#include <HRRPart0bra0ket0m010p.h>
#include <HRRPart0bra0ket0m100d.h>
#include <HRRPart0bra0ket0m100p.h>
#include <HRRPart0bra0ket0psp001.h>
#include <HRRPart0bra0ket0psp010.h>
#include <HRRPart0bra0ket0psp100.h>
#include <HRRPart0bra0ket0ps001p.h>
#include <HRRPart0bra0ket0ps010p.h>
#include <HRRPart0bra0ket0ps100p.h>
#include <_elecpotderiv1_I_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_I_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2078)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_I_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+5606)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5714)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+5849)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+6065)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+6149)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+6317)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+6597)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+6762)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+7032)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+7392)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+7812)*1+lsi)*1]), &(inteval->stack[((hsi*45+1969)*1+lsi)*1]), &(inteval->stack[((hsi*36+2014)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0bra0ket0lp001(inteval, &(inteval->stack[((hsi*135+7920)*1+lsi)*1]), &(inteval->stack[((hsi*55+1914)*1+lsi)*1]), &(inteval->stack[((hsi*45+1969)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0bra0ket0kd001(inteval, &(inteval->stack[((hsi*216+8055)*1+lsi)*1]), &(inteval->stack[((hsi*135+7920)*1+lsi)*1]), &(inteval->stack[((hsi*108+7812)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0bra0ket0mp001(inteval, &(inteval->stack[((hsi*165+8271)*1+lsi)*1]), &(inteval->stack[((hsi*66+1848)*1+lsi)*1]), &(inteval->stack[((hsi*55+1914)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0bra0ket0ld001(inteval, &(inteval->stack[((hsi*270+8436)*1+lsi)*1]), &(inteval->stack[((hsi*165+8271)*1+lsi)*1]), &(inteval->stack[((hsi*135+7920)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0bra0ket0kf001(inteval, &(inteval->stack[((hsi*360+8706)*1+lsi)*1]), &(inteval->stack[((hsi*270+8436)*1+lsi)*1]), &(inteval->stack[((hsi*216+8055)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+7920)*1+lsi)*1]), &(inteval->stack[((hsi*36+2014)*1+lsi)*1]), &(inteval->stack[((hsi*28+2050)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart0bra0ket0id001(inteval, &(inteval->stack[((hsi*168+9066)*1+lsi)*1]), &(inteval->stack[((hsi*108+7812)*1+lsi)*1]), &(inteval->stack[((hsi*84+7920)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0bra0ket0if001(inteval, &(inteval->stack[((hsi*280+9234)*1+lsi)*1]), &(inteval->stack[((hsi*216+8055)*1+lsi)*1]), &(inteval->stack[((hsi*168+9066)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0bra0ket0ig001(inteval, &(inteval->stack[((hsi*420+7812)*1+lsi)*1]), &(inteval->stack[((hsi*360+8706)*1+lsi)*1]), &(inteval->stack[((hsi*280+9234)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0bra0ket0psp001(inteval, &(inteval->stack[((hsi*198+9066)*1+lsi)*1]), &(inteval->stack[((hsi*78+1770)*1+lsi)*1]), &(inteval->stack[((hsi*66+1848)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0bra0ket0md001(inteval, &(inteval->stack[((hsi*330+9264)*1+lsi)*1]), &(inteval->stack[((hsi*198+9066)*1+lsi)*1]), &(inteval->stack[((hsi*165+8271)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0bra0ket0lf001(inteval, &(inteval->stack[((hsi*450+9594)*1+lsi)*1]), &(inteval->stack[((hsi*330+9264)*1+lsi)*1]), &(inteval->stack[((hsi*270+8436)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0bra0ket0kg001(inteval, &(inteval->stack[((hsi*540+10044)*1+lsi)*1]), &(inteval->stack[((hsi*450+9594)*1+lsi)*1]), &(inteval->stack[((hsi*360+8706)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0bra0ket0ih001(inteval, &(inteval->stack[((hsi*588+5018)*1+lsi)*1]), &(inteval->stack[((hsi*540+10044)*1+lsi)*1]), &(inteval->stack[((hsi*420+7812)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+8232)*1+lsi)*1]), &(inteval->stack[((hsi*45+1661)*1+lsi)*1]), &(inteval->stack[((hsi*36+1706)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0bra0ket0lp010(inteval, &(inteval->stack[((hsi*135+8340)*1+lsi)*1]), &(inteval->stack[((hsi*55+1606)*1+lsi)*1]), &(inteval->stack[((hsi*45+1661)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0bra0ket0kd010(inteval, &(inteval->stack[((hsi*216+8475)*1+lsi)*1]), &(inteval->stack[((hsi*135+8340)*1+lsi)*1]), &(inteval->stack[((hsi*108+8232)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0bra0ket0mp010(inteval, &(inteval->stack[((hsi*165+8691)*1+lsi)*1]), &(inteval->stack[((hsi*66+1540)*1+lsi)*1]), &(inteval->stack[((hsi*55+1606)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0bra0ket0ld010(inteval, &(inteval->stack[((hsi*270+8856)*1+lsi)*1]), &(inteval->stack[((hsi*165+8691)*1+lsi)*1]), &(inteval->stack[((hsi*135+8340)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0bra0ket0kf010(inteval, &(inteval->stack[((hsi*360+9126)*1+lsi)*1]), &(inteval->stack[((hsi*270+8856)*1+lsi)*1]), &(inteval->stack[((hsi*216+8475)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+9486)*1+lsi)*1]), &(inteval->stack[((hsi*36+1706)*1+lsi)*1]), &(inteval->stack[((hsi*28+1742)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart0bra0ket0id010(inteval, &(inteval->stack[((hsi*168+9570)*1+lsi)*1]), &(inteval->stack[((hsi*108+8232)*1+lsi)*1]), &(inteval->stack[((hsi*84+9486)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0bra0ket0if010(inteval, &(inteval->stack[((hsi*280+1606)*1+lsi)*1]), &(inteval->stack[((hsi*216+8475)*1+lsi)*1]), &(inteval->stack[((hsi*168+9570)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0bra0ket0ig010(inteval, &(inteval->stack[((hsi*420+9486)*1+lsi)*1]), &(inteval->stack[((hsi*360+9126)*1+lsi)*1]), &(inteval->stack[((hsi*280+1606)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0bra0ket0psp010(inteval, &(inteval->stack[((hsi*198+1606)*1+lsi)*1]), &(inteval->stack[((hsi*78+1462)*1+lsi)*1]), &(inteval->stack[((hsi*66+1540)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0bra0ket0md010(inteval, &(inteval->stack[((hsi*330+8232)*1+lsi)*1]), &(inteval->stack[((hsi*198+1606)*1+lsi)*1]), &(inteval->stack[((hsi*165+8691)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0bra0ket0lf010(inteval, &(inteval->stack[((hsi*450+1462)*1+lsi)*1]), &(inteval->stack[((hsi*330+8232)*1+lsi)*1]), &(inteval->stack[((hsi*270+8856)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0bra0ket0kg010(inteval, &(inteval->stack[((hsi*540+8232)*1+lsi)*1]), &(inteval->stack[((hsi*450+1462)*1+lsi)*1]), &(inteval->stack[((hsi*360+9126)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0bra0ket0ih010(inteval, &(inteval->stack[((hsi*588+4430)*1+lsi)*1]), &(inteval->stack[((hsi*540+8232)*1+lsi)*1]), &(inteval->stack[((hsi*420+9486)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+8772)*1+lsi)*1]), &(inteval->stack[((hsi*45+1353)*1+lsi)*1]), &(inteval->stack[((hsi*36+1398)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0bra0ket0lp100(inteval, &(inteval->stack[((hsi*135+1462)*1+lsi)*1]), &(inteval->stack[((hsi*55+1298)*1+lsi)*1]), &(inteval->stack[((hsi*45+1353)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0bra0ket0kd100(inteval, &(inteval->stack[((hsi*216+8880)*1+lsi)*1]), &(inteval->stack[((hsi*135+1462)*1+lsi)*1]), &(inteval->stack[((hsi*108+8772)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0bra0ket0mp100(inteval, &(inteval->stack[((hsi*165+1597)*1+lsi)*1]), &(inteval->stack[((hsi*66+1232)*1+lsi)*1]), &(inteval->stack[((hsi*55+1298)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0bra0ket0ld100(inteval, &(inteval->stack[((hsi*270+9096)*1+lsi)*1]), &(inteval->stack[((hsi*165+1597)*1+lsi)*1]), &(inteval->stack[((hsi*135+1462)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0bra0ket0kf100(inteval, &(inteval->stack[((hsi*360+10584)*1+lsi)*1]), &(inteval->stack[((hsi*270+9096)*1+lsi)*1]), &(inteval->stack[((hsi*216+8880)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+1762)*1+lsi)*1]), &(inteval->stack[((hsi*36+1398)*1+lsi)*1]), &(inteval->stack[((hsi*28+1434)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart0bra0ket0id100(inteval, &(inteval->stack[((hsi*168+1298)*1+lsi)*1]), &(inteval->stack[((hsi*108+8772)*1+lsi)*1]), &(inteval->stack[((hsi*84+1762)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0bra0ket0if100(inteval, &(inteval->stack[((hsi*280+1762)*1+lsi)*1]), &(inteval->stack[((hsi*216+8880)*1+lsi)*1]), &(inteval->stack[((hsi*168+1298)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0bra0ket0ig100(inteval, &(inteval->stack[((hsi*420+10944)*1+lsi)*1]), &(inteval->stack[((hsi*360+10584)*1+lsi)*1]), &(inteval->stack[((hsi*280+1762)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0bra0ket0psp100(inteval, &(inteval->stack[((hsi*198+8772)*1+lsi)*1]), &(inteval->stack[((hsi*78+1154)*1+lsi)*1]), &(inteval->stack[((hsi*66+1232)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0bra0ket0md100(inteval, &(inteval->stack[((hsi*330+1154)*1+lsi)*1]), &(inteval->stack[((hsi*198+8772)*1+lsi)*1]), &(inteval->stack[((hsi*165+1597)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0bra0ket0lf100(inteval, &(inteval->stack[((hsi*450+1484)*1+lsi)*1]), &(inteval->stack[((hsi*330+1154)*1+lsi)*1]), &(inteval->stack[((hsi*270+9096)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0bra0ket0kg100(inteval, &(inteval->stack[((hsi*540+8772)*1+lsi)*1]), &(inteval->stack[((hsi*450+1484)*1+lsi)*1]), &(inteval->stack[((hsi*360+10584)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0bra0ket0ih100(inteval, &(inteval->stack[((hsi*588+3842)*1+lsi)*1]), &(inteval->stack[((hsi*540+8772)*1+lsi)*1]), &(inteval->stack[((hsi*420+10944)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+1154)*1+lsi)*1]), &(inteval->stack[((hsi*45+1045)*1+lsi)*1]), &(inteval->stack[((hsi*36+1090)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0bra0ket0l001p(inteval, &(inteval->stack[((hsi*135+1262)*1+lsi)*1]), &(inteval->stack[((hsi*55+990)*1+lsi)*1]), &(inteval->stack[((hsi*45+1045)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0bra0ket0k001d(inteval, &(inteval->stack[((hsi*216+1397)*1+lsi)*1]), &(inteval->stack[((hsi*135+1262)*1+lsi)*1]), &(inteval->stack[((hsi*108+1154)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0bra0ket0m001p(inteval, &(inteval->stack[((hsi*165+1613)*1+lsi)*1]), &(inteval->stack[((hsi*66+924)*1+lsi)*1]), &(inteval->stack[((hsi*55+990)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0bra0ket0l001d(inteval, &(inteval->stack[((hsi*270+10584)*1+lsi)*1]), &(inteval->stack[((hsi*165+1613)*1+lsi)*1]), &(inteval->stack[((hsi*135+1262)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0bra0ket0k001f(inteval, &(inteval->stack[((hsi*360+11364)*1+lsi)*1]), &(inteval->stack[((hsi*270+10584)*1+lsi)*1]), &(inteval->stack[((hsi*216+1397)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+1778)*1+lsi)*1]), &(inteval->stack[((hsi*36+1090)*1+lsi)*1]), &(inteval->stack[((hsi*28+1126)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d(inteval, &(inteval->stack[((hsi*168+1862)*1+lsi)*1]), &(inteval->stack[((hsi*108+1154)*1+lsi)*1]), &(inteval->stack[((hsi*84+1778)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0bra0ket0i001f(inteval, &(inteval->stack[((hsi*280+990)*1+lsi)*1]), &(inteval->stack[((hsi*216+1397)*1+lsi)*1]), &(inteval->stack[((hsi*168+1862)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0bra0ket0i001g(inteval, &(inteval->stack[((hsi*420+11724)*1+lsi)*1]), &(inteval->stack[((hsi*360+11364)*1+lsi)*1]), &(inteval->stack[((hsi*280+990)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0bra0ket0ps001p(inteval, &(inteval->stack[((hsi*198+990)*1+lsi)*1]), &(inteval->stack[((hsi*78+846)*1+lsi)*1]), &(inteval->stack[((hsi*66+924)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0bra0ket0m001d(inteval, &(inteval->stack[((hsi*330+1188)*1+lsi)*1]), &(inteval->stack[((hsi*198+990)*1+lsi)*1]), &(inteval->stack[((hsi*165+1613)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0bra0ket0l001f(inteval, &(inteval->stack[((hsi*450+1518)*1+lsi)*1]), &(inteval->stack[((hsi*330+1188)*1+lsi)*1]), &(inteval->stack[((hsi*270+10584)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0bra0ket0k001g(inteval, &(inteval->stack[((hsi*540+846)*1+lsi)*1]), &(inteval->stack[((hsi*450+1518)*1+lsi)*1]), &(inteval->stack[((hsi*360+11364)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0bra0ket0i001h(inteval, &(inteval->stack[((hsi*588+3254)*1+lsi)*1]), &(inteval->stack[((hsi*540+846)*1+lsi)*1]), &(inteval->stack[((hsi*420+11724)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+1386)*1+lsi)*1]), &(inteval->stack[((hsi*45+737)*1+lsi)*1]), &(inteval->stack[((hsi*36+782)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0bra0ket0l010p(inteval, &(inteval->stack[((hsi*135+1494)*1+lsi)*1]), &(inteval->stack[((hsi*55+682)*1+lsi)*1]), &(inteval->stack[((hsi*45+737)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0bra0ket0k010d(inteval, &(inteval->stack[((hsi*216+1629)*1+lsi)*1]), &(inteval->stack[((hsi*135+1494)*1+lsi)*1]), &(inteval->stack[((hsi*108+1386)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0bra0ket0m010p(inteval, &(inteval->stack[((hsi*165+11364)*1+lsi)*1]), &(inteval->stack[((hsi*66+616)*1+lsi)*1]), &(inteval->stack[((hsi*55+682)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0bra0ket0l010d(inteval, &(inteval->stack[((hsi*270+10584)*1+lsi)*1]), &(inteval->stack[((hsi*165+11364)*1+lsi)*1]), &(inteval->stack[((hsi*135+1494)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0bra0ket0k010f(inteval, &(inteval->stack[((hsi*360+12144)*1+lsi)*1]), &(inteval->stack[((hsi*270+10584)*1+lsi)*1]), &(inteval->stack[((hsi*216+1629)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+1845)*1+lsi)*1]), &(inteval->stack[((hsi*36+782)*1+lsi)*1]), &(inteval->stack[((hsi*28+818)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d(inteval, &(inteval->stack[((hsi*168+11529)*1+lsi)*1]), &(inteval->stack[((hsi*108+1386)*1+lsi)*1]), &(inteval->stack[((hsi*84+1845)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0bra0ket0i010f(inteval, &(inteval->stack[((hsi*280+12504)*1+lsi)*1]), &(inteval->stack[((hsi*216+1629)*1+lsi)*1]), &(inteval->stack[((hsi*168+11529)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0bra0ket0i010g(inteval, &(inteval->stack[((hsi*420+1386)*1+lsi)*1]), &(inteval->stack[((hsi*360+12144)*1+lsi)*1]), &(inteval->stack[((hsi*280+12504)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0bra0ket0ps010p(inteval, &(inteval->stack[((hsi*198+1806)*1+lsi)*1]), &(inteval->stack[((hsi*78+538)*1+lsi)*1]), &(inteval->stack[((hsi*66+616)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0bra0ket0m010d(inteval, &(inteval->stack[((hsi*330+12504)*1+lsi)*1]), &(inteval->stack[((hsi*198+1806)*1+lsi)*1]), &(inteval->stack[((hsi*165+11364)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0bra0ket0l010f(inteval, &(inteval->stack[((hsi*450+12834)*1+lsi)*1]), &(inteval->stack[((hsi*330+12504)*1+lsi)*1]), &(inteval->stack[((hsi*270+10584)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0bra0ket0k010g(inteval, &(inteval->stack[((hsi*540+13284)*1+lsi)*1]), &(inteval->stack[((hsi*450+12834)*1+lsi)*1]), &(inteval->stack[((hsi*360+12144)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0bra0ket0i010h(inteval, &(inteval->stack[((hsi*588+2666)*1+lsi)*1]), &(inteval->stack[((hsi*540+13284)*1+lsi)*1]), &(inteval->stack[((hsi*420+1386)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+12144)*1+lsi)*1]), &(inteval->stack[((hsi*45+320)*1+lsi)*1]), &(inteval->stack[((hsi*36+410)*1+lsi)*1]), &(inteval->stack[((hsi*36+446)*1+lsi)*1]),1);
HRRPart0bra0ket0l100p(inteval, &(inteval->stack[((hsi*135+12252)*1+lsi)*1]), &(inteval->stack[((hsi*55+210)*1+lsi)*1]), &(inteval->stack[((hsi*45+320)*1+lsi)*1]), &(inteval->stack[((hsi*45+365)*1+lsi)*1]),1);
HRRPart0bra0ket0k100d(inteval, &(inteval->stack[((hsi*216+12387)*1+lsi)*1]), &(inteval->stack[((hsi*135+12252)*1+lsi)*1]), &(inteval->stack[((hsi*108+12144)*1+lsi)*1]), &(inteval->stack[((hsi*108+5606)*1+lsi)*1]),1);
HRRPart0bra0ket0m100p(inteval, &(inteval->stack[((hsi*165+12603)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]), &(inteval->stack[((hsi*55+210)*1+lsi)*1]), &(inteval->stack[((hsi*55+265)*1+lsi)*1]),1);
HRRPart0bra0ket0l100d(inteval, &(inteval->stack[((hsi*270+12768)*1+lsi)*1]), &(inteval->stack[((hsi*165+12603)*1+lsi)*1]), &(inteval->stack[((hsi*135+12252)*1+lsi)*1]), &(inteval->stack[((hsi*135+5714)*1+lsi)*1]),1);
HRRPart0bra0ket0k100f(inteval, &(inteval->stack[((hsi*360+11364)*1+lsi)*1]), &(inteval->stack[((hsi*270+12768)*1+lsi)*1]), &(inteval->stack[((hsi*216+12387)*1+lsi)*1]), &(inteval->stack[((hsi*216+5849)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+5606)*1+lsi)*1]), &(inteval->stack[((hsi*36+410)*1+lsi)*1]), &(inteval->stack[((hsi*28+482)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d(inteval, &(inteval->stack[((hsi*168+210)*1+lsi)*1]), &(inteval->stack[((hsi*108+12144)*1+lsi)*1]), &(inteval->stack[((hsi*84+5606)*1+lsi)*1]), &(inteval->stack[((hsi*84+6065)*1+lsi)*1]),1);
HRRPart0bra0ket0i100f(inteval, &(inteval->stack[((hsi*280+5606)*1+lsi)*1]), &(inteval->stack[((hsi*216+12387)*1+lsi)*1]), &(inteval->stack[((hsi*168+210)*1+lsi)*1]), &(inteval->stack[((hsi*168+6149)*1+lsi)*1]),1);
HRRPart0bra0ket0i100g(inteval, &(inteval->stack[((hsi*420+210)*1+lsi)*1]), &(inteval->stack[((hsi*360+11364)*1+lsi)*1]), &(inteval->stack[((hsi*280+5606)*1+lsi)*1]), &(inteval->stack[((hsi*280+6317)*1+lsi)*1]),1);
HRRPart0bra0ket0ps100p(inteval, &(inteval->stack[((hsi*198+5606)*1+lsi)*1]), &(inteval->stack[((hsi*78+0)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]), &(inteval->stack[((hsi*66+144)*1+lsi)*1]),1);
HRRPart0bra0ket0m100d(inteval, &(inteval->stack[((hsi*330+5804)*1+lsi)*1]), &(inteval->stack[((hsi*198+5606)*1+lsi)*1]), &(inteval->stack[((hsi*165+12603)*1+lsi)*1]), &(inteval->stack[((hsi*165+6597)*1+lsi)*1]),1);
HRRPart0bra0ket0l100f(inteval, &(inteval->stack[((hsi*450+6134)*1+lsi)*1]), &(inteval->stack[((hsi*330+5804)*1+lsi)*1]), &(inteval->stack[((hsi*270+12768)*1+lsi)*1]), &(inteval->stack[((hsi*270+6762)*1+lsi)*1]),1);
HRRPart0bra0ket0k100g(inteval, &(inteval->stack[((hsi*540+12144)*1+lsi)*1]), &(inteval->stack[((hsi*450+6134)*1+lsi)*1]), &(inteval->stack[((hsi*360+11364)*1+lsi)*1]), &(inteval->stack[((hsi*360+7032)*1+lsi)*1]),1);
HRRPart0bra0ket0i100h(inteval, &(inteval->stack[((hsi*588+2078)*1+lsi)*1]), &(inteval->stack[((hsi*540+12144)*1+lsi)*1]), &(inteval->stack[((hsi*420+210)*1+lsi)*1]), &(inteval->stack[((hsi*420+7392)*1+lsi)*1]),1);
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
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
