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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hd001.h>
#include <HRRPart0bra0ket0hd010.h>
#include <HRRPart0bra0ket0hd100.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hf001.h>
#include <HRRPart0bra0ket0hf010.h>
#include <HRRPart0bra0ket0hf100.h>
#include <HRRPart0bra0ket0hg001.h>
#include <HRRPart0bra0ket0hg010.h>
#include <HRRPart0bra0ket0hg100.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001d.h>
#include <HRRPart0bra0ket0h001f.h>
#include <HRRPart0bra0ket0h001g.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010d.h>
#include <HRRPart0bra0ket0h010f.h>
#include <HRRPart0bra0ket0h010g.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100d.h>
#include <HRRPart0bra0ket0h100f.h>
#include <HRRPart0bra0ket0h100g.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0id001.h>
#include <HRRPart0bra0ket0id010.h>
#include <HRRPart0bra0ket0id100.h>
#include <HRRPart0bra0ket0if001.h>
#include <HRRPart0bra0ket0if010.h>
#include <HRRPart0bra0ket0if100.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0i001d.h>
#include <HRRPart0bra0ket0i001f.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i010d.h>
#include <HRRPart0bra0ket0i010f.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i100d.h>
#include <HRRPart0bra0ket0i100f.h>
#include <HRRPart0bra0ket0i100p.h>
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
#include <_elecpotderiv1_H_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_H_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1240)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_H_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3130)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3214)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3277)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3403)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+3511)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+3679)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*36+1155)*1+lsi)*1]), &(inteval->stack[((hsi*28+1191)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*45+1110)*1+lsi)*1]), &(inteval->stack[((hsi*36+1155)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0id001(inteval, &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+4249)*1+lsi)*1]), &(inteval->stack[((hsi*28+1191)*1+lsi)*1]), &(inteval->stack[((hsi*21+1219)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]),1);
HRRPart0bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+4312)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*63+4249)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0bra0ket0hf001(inteval, &(inteval->stack[((hsi*210+4438)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*126+4312)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0bra0ket0lp001(inteval, &(inteval->stack[((hsi*135+4249)*1+lsi)*1]), &(inteval->stack[((hsi*55+1055)*1+lsi)*1]), &(inteval->stack[((hsi*45+1110)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0kd001(inteval, &(inteval->stack[((hsi*216+4648)*1+lsi)*1]), &(inteval->stack[((hsi*135+4249)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0bra0ket0if001(inteval, &(inteval->stack[((hsi*280+4864)*1+lsi)*1]), &(inteval->stack[((hsi*216+4648)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0bra0ket0hg001(inteval, &(inteval->stack[((hsi*315+2815)*1+lsi)*1]), &(inteval->stack[((hsi*280+4864)*1+lsi)*1]), &(inteval->stack[((hsi*210+4438)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*36+970)*1+lsi)*1]), &(inteval->stack[((hsi*28+1006)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*45+925)*1+lsi)*1]), &(inteval->stack[((hsi*36+970)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0id010(inteval, &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+4648)*1+lsi)*1]), &(inteval->stack[((hsi*28+1006)*1+lsi)*1]), &(inteval->stack[((hsi*21+1034)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]),1);
HRRPart0bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+970)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*63+4648)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0bra0ket0hf010(inteval, &(inteval->stack[((hsi*210+4648)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*126+970)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0bra0ket0lp010(inteval, &(inteval->stack[((hsi*135+970)*1+lsi)*1]), &(inteval->stack[((hsi*55+870)*1+lsi)*1]), &(inteval->stack[((hsi*45+925)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0kd010(inteval, &(inteval->stack[((hsi*216+5144)*1+lsi)*1]), &(inteval->stack[((hsi*135+970)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0bra0ket0if010(inteval, &(inteval->stack[((hsi*280+870)*1+lsi)*1]), &(inteval->stack[((hsi*216+5144)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0bra0ket0hg010(inteval, &(inteval->stack[((hsi*315+2500)*1+lsi)*1]), &(inteval->stack[((hsi*280+870)*1+lsi)*1]), &(inteval->stack[((hsi*210+4648)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*36+785)*1+lsi)*1]), &(inteval->stack[((hsi*28+821)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*45+740)*1+lsi)*1]), &(inteval->stack[((hsi*36+785)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0id100(inteval, &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+4249)*1+lsi)*1]), &(inteval->stack[((hsi*28+821)*1+lsi)*1]), &(inteval->stack[((hsi*21+849)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]),1);
HRRPart0bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+4312)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*63+4249)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0bra0ket0hf100(inteval, &(inteval->stack[((hsi*210+5144)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*126+4312)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0bra0ket0lp100(inteval, &(inteval->stack[((hsi*135+4249)*1+lsi)*1]), &(inteval->stack[((hsi*55+685)*1+lsi)*1]), &(inteval->stack[((hsi*45+740)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0kd100(inteval, &(inteval->stack[((hsi*216+5354)*1+lsi)*1]), &(inteval->stack[((hsi*135+4249)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0bra0ket0if100(inteval, &(inteval->stack[((hsi*280+5570)*1+lsi)*1]), &(inteval->stack[((hsi*216+5354)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0bra0ket0hg100(inteval, &(inteval->stack[((hsi*315+2185)*1+lsi)*1]), &(inteval->stack[((hsi*280+5570)*1+lsi)*1]), &(inteval->stack[((hsi*210+5144)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*36+600)*1+lsi)*1]), &(inteval->stack[((hsi*28+636)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*45+555)*1+lsi)*1]), &(inteval->stack[((hsi*36+600)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d(inteval, &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+5354)*1+lsi)*1]), &(inteval->stack[((hsi*28+636)*1+lsi)*1]), &(inteval->stack[((hsi*21+664)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d(inteval, &(inteval->stack[((hsi*126+600)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*63+5354)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f(inteval, &(inteval->stack[((hsi*210+5354)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*126+600)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0bra0ket0l001p(inteval, &(inteval->stack[((hsi*135+600)*1+lsi)*1]), &(inteval->stack[((hsi*55+500)*1+lsi)*1]), &(inteval->stack[((hsi*45+555)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0k001d(inteval, &(inteval->stack[((hsi*216+5850)*1+lsi)*1]), &(inteval->stack[((hsi*135+600)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0bra0ket0i001f(inteval, &(inteval->stack[((hsi*280+500)*1+lsi)*1]), &(inteval->stack[((hsi*216+5850)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0bra0ket0h001g(inteval, &(inteval->stack[((hsi*315+1870)*1+lsi)*1]), &(inteval->stack[((hsi*280+500)*1+lsi)*1]), &(inteval->stack[((hsi*210+5354)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*36+415)*1+lsi)*1]), &(inteval->stack[((hsi*28+451)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*45+370)*1+lsi)*1]), &(inteval->stack[((hsi*36+415)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d(inteval, &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+4249)*1+lsi)*1]), &(inteval->stack[((hsi*28+451)*1+lsi)*1]), &(inteval->stack[((hsi*21+479)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d(inteval, &(inteval->stack[((hsi*126+4312)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*63+4249)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f(inteval, &(inteval->stack[((hsi*210+5850)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*126+4312)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0bra0ket0l010p(inteval, &(inteval->stack[((hsi*135+4249)*1+lsi)*1]), &(inteval->stack[((hsi*55+315)*1+lsi)*1]), &(inteval->stack[((hsi*45+370)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0k010d(inteval, &(inteval->stack[((hsi*216+6060)*1+lsi)*1]), &(inteval->stack[((hsi*135+4249)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0bra0ket0i010f(inteval, &(inteval->stack[((hsi*280+6276)*1+lsi)*1]), &(inteval->stack[((hsi*216+6060)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0bra0ket0h010g(inteval, &(inteval->stack[((hsi*315+1555)*1+lsi)*1]), &(inteval->stack[((hsi*280+6276)*1+lsi)*1]), &(inteval->stack[((hsi*210+5850)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*36+145)*1+lsi)*1]), &(inteval->stack[((hsi*28+217)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*36+145)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d(inteval, &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+6060)*1+lsi)*1]), &(inteval->stack[((hsi*28+217)*1+lsi)*1]), &(inteval->stack[((hsi*21+273)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d(inteval, &(inteval->stack[((hsi*126+145)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*63+6060)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f(inteval, &(inteval->stack[((hsi*210+271)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*126+145)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0bra0ket0l100p(inteval, &(inteval->stack[((hsi*135+3130)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0bra0ket0k100d(inteval, &(inteval->stack[((hsi*216+6060)*1+lsi)*1]), &(inteval->stack[((hsi*135+3130)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0bra0ket0i100f(inteval, &(inteval->stack[((hsi*280+3130)*1+lsi)*1]), &(inteval->stack[((hsi*216+6060)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0bra0ket0h100g(inteval, &(inteval->stack[((hsi*315+1240)*1+lsi)*1]), &(inteval->stack[((hsi*280+3130)*1+lsi)*1]), &(inteval->stack[((hsi*210+271)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*315+1240)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*315+1555)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*315+1870)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*315+2185)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*315+2500)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*315+2815)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
