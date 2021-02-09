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
#include <HRRPart0ket0bra0hd.h>
#include <HRRPart0ket0bra0hd001.h>
#include <HRRPart0ket0bra0hd010.h>
#include <HRRPart0ket0bra0hd100.h>
#include <HRRPart0ket0bra0hf.h>
#include <HRRPart0ket0bra0hf001.h>
#include <HRRPart0ket0bra0hf010.h>
#include <HRRPart0ket0bra0hf100.h>
#include <HRRPart0ket0bra0hg001.h>
#include <HRRPart0ket0bra0hg010.h>
#include <HRRPart0ket0bra0hg100.h>
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0hp001.h>
#include <HRRPart0ket0bra0hp010.h>
#include <HRRPart0ket0bra0hp100.h>
#include <HRRPart0ket0bra0h001d.h>
#include <HRRPart0ket0bra0h001f.h>
#include <HRRPart0ket0bra0h001g.h>
#include <HRRPart0ket0bra0h001p.h>
#include <HRRPart0ket0bra0h010d.h>
#include <HRRPart0ket0bra0h010f.h>
#include <HRRPart0ket0bra0h010g.h>
#include <HRRPart0ket0bra0h010p.h>
#include <HRRPart0ket0bra0h100d.h>
#include <HRRPart0ket0bra0h100f.h>
#include <HRRPart0ket0bra0h100g.h>
#include <HRRPart0ket0bra0h100p.h>
#include <HRRPart0ket0bra0id.h>
#include <HRRPart0ket0bra0id001.h>
#include <HRRPart0ket0bra0id010.h>
#include <HRRPart0ket0bra0id100.h>
#include <HRRPart0ket0bra0if001.h>
#include <HRRPart0ket0bra0if010.h>
#include <HRRPart0ket0bra0if100.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0ip001.h>
#include <HRRPart0ket0bra0ip010.h>
#include <HRRPart0ket0bra0ip100.h>
#include <HRRPart0ket0bra0i001d.h>
#include <HRRPart0ket0bra0i001f.h>
#include <HRRPart0ket0bra0i001p.h>
#include <HRRPart0ket0bra0i010d.h>
#include <HRRPart0ket0bra0i010f.h>
#include <HRRPart0ket0bra0i010p.h>
#include <HRRPart0ket0bra0i100d.h>
#include <HRRPart0ket0bra0i100f.h>
#include <HRRPart0ket0bra0i100p.h>
#include <HRRPart0ket0bra0kd001.h>
#include <HRRPart0ket0bra0kd010.h>
#include <HRRPart0ket0bra0kd100.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0kp001.h>
#include <HRRPart0ket0bra0kp010.h>
#include <HRRPart0ket0bra0kp100.h>
#include <HRRPart0ket0bra0k001d.h>
#include <HRRPart0ket0bra0k001p.h>
#include <HRRPart0ket0bra0k010d.h>
#include <HRRPart0ket0bra0k010p.h>
#include <HRRPart0ket0bra0k100d.h>
#include <HRRPart0ket0bra0k100p.h>
#include <HRRPart0ket0bra0lp001.h>
#include <HRRPart0ket0bra0lp010.h>
#include <HRRPart0ket0bra0lp100.h>
#include <HRRPart0ket0bra0l001p.h>
#include <HRRPart0ket0bra0l010p.h>
#include <HRRPart0ket0bra0l100p.h>
#include <_elecpotderiv1_G_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_G_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1240)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_G_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3130)*1+lsi)*1]), &(inteval->stack[((hsi*36+524)*1+lsi)*1]), &(inteval->stack[((hsi*28+175)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+3214)*1+lsi)*1]), &(inteval->stack[((hsi*28+175)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3277)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3403)*1+lsi)*1]), &(inteval->stack[((hsi*45+443)*1+lsi)*1]), &(inteval->stack[((hsi*36+524)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3511)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+3679)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0ket0bra0i001p(inteval, &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*36+1204)*1+lsi)*1]), &(inteval->stack[((hsi*28+315)*1+lsi)*1]), &(inteval->stack[((hsi*28+175)*1+lsi)*1]),1);
HRRPart0ket0bra0k001p(inteval, &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*45+1159)*1+lsi)*1]), &(inteval->stack[((hsi*36+1204)*1+lsi)*1]), &(inteval->stack[((hsi*36+524)*1+lsi)*1]),1);
HRRPart0ket0bra0i001d(inteval, &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0ket0bra0h001p(inteval, &(inteval->stack[((hsi*63+4249)*1+lsi)*1]), &(inteval->stack[((hsi*28+315)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]),1);
HRRPart0ket0bra0h001d(inteval, &(inteval->stack[((hsi*126+4312)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*63+4249)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0ket0bra0h001f(inteval, &(inteval->stack[((hsi*210+4438)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*126+4312)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0ket0bra0l001p(inteval, &(inteval->stack[((hsi*135+4249)*1+lsi)*1]), &(inteval->stack[((hsi*55+1104)*1+lsi)*1]), &(inteval->stack[((hsi*45+1159)*1+lsi)*1]), &(inteval->stack[((hsi*45+443)*1+lsi)*1]),1);
HRRPart0ket0bra0k001d(inteval, &(inteval->stack[((hsi*216+4648)*1+lsi)*1]), &(inteval->stack[((hsi*135+4249)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0ket0bra0i001f(inteval, &(inteval->stack[((hsi*280+4864)*1+lsi)*1]), &(inteval->stack[((hsi*216+4648)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0ket0bra0h001g(inteval, &(inteval->stack[((hsi*315+2815)*1+lsi)*1]), &(inteval->stack[((hsi*280+4864)*1+lsi)*1]), &(inteval->stack[((hsi*210+4438)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
HRRPart0ket0bra0i010p(inteval, &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*36+1068)*1+lsi)*1]), &(inteval->stack[((hsi*28+287)*1+lsi)*1]), &(inteval->stack[((hsi*28+175)*1+lsi)*1]),1);
HRRPart0ket0bra0k010p(inteval, &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*45+1023)*1+lsi)*1]), &(inteval->stack[((hsi*36+1068)*1+lsi)*1]), &(inteval->stack[((hsi*36+524)*1+lsi)*1]),1);
HRRPart0ket0bra0i010d(inteval, &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p(inteval, &(inteval->stack[((hsi*63+4648)*1+lsi)*1]), &(inteval->stack[((hsi*28+287)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]),1);
HRRPart0ket0bra0h010d(inteval, &(inteval->stack[((hsi*126+4249)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*63+4648)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0ket0bra0h010f(inteval, &(inteval->stack[((hsi*210+4648)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*126+4249)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0ket0bra0l010p(inteval, &(inteval->stack[((hsi*135+4249)*1+lsi)*1]), &(inteval->stack[((hsi*55+968)*1+lsi)*1]), &(inteval->stack[((hsi*45+1023)*1+lsi)*1]), &(inteval->stack[((hsi*45+443)*1+lsi)*1]),1);
HRRPart0ket0bra0k010d(inteval, &(inteval->stack[((hsi*216+968)*1+lsi)*1]), &(inteval->stack[((hsi*135+4249)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0ket0bra0i010f(inteval, &(inteval->stack[((hsi*280+5144)*1+lsi)*1]), &(inteval->stack[((hsi*216+968)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0ket0bra0h010g(inteval, &(inteval->stack[((hsi*315+2500)*1+lsi)*1]), &(inteval->stack[((hsi*280+5144)*1+lsi)*1]), &(inteval->stack[((hsi*210+4648)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
HRRPart0ket0bra0i100p(inteval, &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*36+932)*1+lsi)*1]), &(inteval->stack[((hsi*28+259)*1+lsi)*1]), &(inteval->stack[((hsi*28+175)*1+lsi)*1]),1);
HRRPart0ket0bra0k100p(inteval, &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*45+887)*1+lsi)*1]), &(inteval->stack[((hsi*36+932)*1+lsi)*1]), &(inteval->stack[((hsi*36+524)*1+lsi)*1]),1);
HRRPart0ket0bra0i100d(inteval, &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p(inteval, &(inteval->stack[((hsi*63+932)*1+lsi)*1]), &(inteval->stack[((hsi*28+259)*1+lsi)*1]), &(inteval->stack[((hsi*21+84)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]),1);
HRRPart0ket0bra0h100d(inteval, &(inteval->stack[((hsi*126+995)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*63+932)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0ket0bra0h100f(inteval, &(inteval->stack[((hsi*210+5424)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*126+995)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0ket0bra0l100p(inteval, &(inteval->stack[((hsi*135+932)*1+lsi)*1]), &(inteval->stack[((hsi*55+832)*1+lsi)*1]), &(inteval->stack[((hsi*45+887)*1+lsi)*1]), &(inteval->stack[((hsi*45+443)*1+lsi)*1]),1);
HRRPart0ket0bra0k100d(inteval, &(inteval->stack[((hsi*216+5634)*1+lsi)*1]), &(inteval->stack[((hsi*135+932)*1+lsi)*1]), &(inteval->stack[((hsi*108+3973)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0ket0bra0i100f(inteval, &(inteval->stack[((hsi*280+832)*1+lsi)*1]), &(inteval->stack[((hsi*216+5634)*1+lsi)*1]), &(inteval->stack[((hsi*168+4081)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0ket0bra0h100g(inteval, &(inteval->stack[((hsi*315+2185)*1+lsi)*1]), &(inteval->stack[((hsi*280+832)*1+lsi)*1]), &(inteval->stack[((hsi*210+5424)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
HRRPart0ket0bra0ip001(inteval, &(inteval->stack[((hsi*84+259)*1+lsi)*1]), &(inteval->stack[((hsi*36+796)*1+lsi)*1]), &(inteval->stack[((hsi*28+231)*1+lsi)*1]), &(inteval->stack[((hsi*28+175)*1+lsi)*1]),1);
HRRPart0ket0bra0kp001(inteval, &(inteval->stack[((hsi*108+3889)*1+lsi)*1]), &(inteval->stack[((hsi*45+751)*1+lsi)*1]), &(inteval->stack[((hsi*36+796)*1+lsi)*1]), &(inteval->stack[((hsi*36+524)*1+lsi)*1]),1);
HRRPart0ket0bra0id001(inteval, &(inteval->stack[((hsi*168+3997)*1+lsi)*1]), &(inteval->stack[((hsi*108+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+259)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0ket0bra0hp001(inteval, &(inteval->stack[((hsi*63+84)*1+lsi)*1]), &(inteval->stack[((hsi*28+231)*1+lsi)*1]), &(inteval->stack[((hsi*21+63)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]),1);
HRRPart0ket0bra0hd001(inteval, &(inteval->stack[((hsi*126+4165)*1+lsi)*1]), &(inteval->stack[((hsi*84+259)*1+lsi)*1]), &(inteval->stack[((hsi*63+84)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0ket0bra0hf001(inteval, &(inteval->stack[((hsi*210+5634)*1+lsi)*1]), &(inteval->stack[((hsi*168+3997)*1+lsi)*1]), &(inteval->stack[((hsi*126+4165)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0ket0bra0lp001(inteval, &(inteval->stack[((hsi*135+4165)*1+lsi)*1]), &(inteval->stack[((hsi*55+696)*1+lsi)*1]), &(inteval->stack[((hsi*45+751)*1+lsi)*1]), &(inteval->stack[((hsi*45+443)*1+lsi)*1]),1);
HRRPart0ket0bra0kd001(inteval, &(inteval->stack[((hsi*216+5844)*1+lsi)*1]), &(inteval->stack[((hsi*135+4165)*1+lsi)*1]), &(inteval->stack[((hsi*108+3889)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0ket0bra0if001(inteval, &(inteval->stack[((hsi*280+6060)*1+lsi)*1]), &(inteval->stack[((hsi*216+5844)*1+lsi)*1]), &(inteval->stack[((hsi*168+3997)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0ket0bra0hg001(inteval, &(inteval->stack[((hsi*315+1870)*1+lsi)*1]), &(inteval->stack[((hsi*280+6060)*1+lsi)*1]), &(inteval->stack[((hsi*210+5634)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
HRRPart0ket0bra0ip010(inteval, &(inteval->stack[((hsi*84+63)*1+lsi)*1]), &(inteval->stack[((hsi*36+660)*1+lsi)*1]), &(inteval->stack[((hsi*28+203)*1+lsi)*1]), &(inteval->stack[((hsi*28+175)*1+lsi)*1]),1);
HRRPart0ket0bra0kp010(inteval, &(inteval->stack[((hsi*108+3889)*1+lsi)*1]), &(inteval->stack[((hsi*45+615)*1+lsi)*1]), &(inteval->stack[((hsi*36+660)*1+lsi)*1]), &(inteval->stack[((hsi*36+524)*1+lsi)*1]),1);
HRRPart0ket0bra0id010(inteval, &(inteval->stack[((hsi*168+3997)*1+lsi)*1]), &(inteval->stack[((hsi*108+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+63)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0ket0bra0hp010(inteval, &(inteval->stack[((hsi*63+4165)*1+lsi)*1]), &(inteval->stack[((hsi*28+203)*1+lsi)*1]), &(inteval->stack[((hsi*21+42)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]),1);
HRRPart0ket0bra0hd010(inteval, &(inteval->stack[((hsi*126+5844)*1+lsi)*1]), &(inteval->stack[((hsi*84+63)*1+lsi)*1]), &(inteval->stack[((hsi*63+4165)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0ket0bra0hf010(inteval, &(inteval->stack[((hsi*210+4165)*1+lsi)*1]), &(inteval->stack[((hsi*168+3997)*1+lsi)*1]), &(inteval->stack[((hsi*126+5844)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0ket0bra0lp010(inteval, &(inteval->stack[((hsi*135+5844)*1+lsi)*1]), &(inteval->stack[((hsi*55+560)*1+lsi)*1]), &(inteval->stack[((hsi*45+615)*1+lsi)*1]), &(inteval->stack[((hsi*45+443)*1+lsi)*1]),1);
HRRPart0ket0bra0kd010(inteval, &(inteval->stack[((hsi*216+560)*1+lsi)*1]), &(inteval->stack[((hsi*135+5844)*1+lsi)*1]), &(inteval->stack[((hsi*108+3889)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0ket0bra0if010(inteval, &(inteval->stack[((hsi*280+6340)*1+lsi)*1]), &(inteval->stack[((hsi*216+560)*1+lsi)*1]), &(inteval->stack[((hsi*168+3997)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0ket0bra0hg010(inteval, &(inteval->stack[((hsi*315+1555)*1+lsi)*1]), &(inteval->stack[((hsi*280+6340)*1+lsi)*1]), &(inteval->stack[((hsi*210+4165)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
HRRPart0ket0bra0ip100(inteval, &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*36+488)*1+lsi)*1]), &(inteval->stack[((hsi*28+147)*1+lsi)*1]), &(inteval->stack[((hsi*28+175)*1+lsi)*1]),1);
HRRPart0ket0bra0kp100(inteval, &(inteval->stack[((hsi*108+560)*1+lsi)*1]), &(inteval->stack[((hsi*45+398)*1+lsi)*1]), &(inteval->stack[((hsi*36+488)*1+lsi)*1]), &(inteval->stack[((hsi*36+524)*1+lsi)*1]),1);
HRRPart0ket0bra0id100(inteval, &(inteval->stack[((hsi*168+175)*1+lsi)*1]), &(inteval->stack[((hsi*108+560)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*84+3130)*1+lsi)*1]),1);
HRRPart0ket0bra0hp100(inteval, &(inteval->stack[((hsi*63+4375)*1+lsi)*1]), &(inteval->stack[((hsi*28+147)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]),1);
HRRPart0ket0bra0hd100(inteval, &(inteval->stack[((hsi*126+5844)*1+lsi)*1]), &(inteval->stack[((hsi*84+3889)*1+lsi)*1]), &(inteval->stack[((hsi*63+4375)*1+lsi)*1]), &(inteval->stack[((hsi*63+3214)*1+lsi)*1]),1);
HRRPart0ket0bra0hf100(inteval, &(inteval->stack[((hsi*210+3889)*1+lsi)*1]), &(inteval->stack[((hsi*168+175)*1+lsi)*1]), &(inteval->stack[((hsi*126+5844)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart0ket0bra0lp100(inteval, &(inteval->stack[((hsi*135+3130)*1+lsi)*1]), &(inteval->stack[((hsi*55+343)*1+lsi)*1]), &(inteval->stack[((hsi*45+398)*1+lsi)*1]), &(inteval->stack[((hsi*45+443)*1+lsi)*1]),1);
HRRPart0ket0bra0kd100(inteval, &(inteval->stack[((hsi*216+5844)*1+lsi)*1]), &(inteval->stack[((hsi*135+3130)*1+lsi)*1]), &(inteval->stack[((hsi*108+560)*1+lsi)*1]), &(inteval->stack[((hsi*108+3403)*1+lsi)*1]),1);
HRRPart0ket0bra0if100(inteval, &(inteval->stack[((hsi*280+343)*1+lsi)*1]), &(inteval->stack[((hsi*216+5844)*1+lsi)*1]), &(inteval->stack[((hsi*168+175)*1+lsi)*1]), &(inteval->stack[((hsi*168+3511)*1+lsi)*1]),1);
HRRPart0ket0bra0hg100(inteval, &(inteval->stack[((hsi*315+1240)*1+lsi)*1]), &(inteval->stack[((hsi*280+343)*1+lsi)*1]), &(inteval->stack[((hsi*210+3889)*1+lsi)*1]), &(inteval->stack[((hsi*210+3679)*1+lsi)*1]),1);
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
