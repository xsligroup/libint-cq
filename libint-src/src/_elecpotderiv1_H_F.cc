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
#include <HRRPart0bra0ket0hf001.h>
#include <HRRPart0bra0ket0hf010.h>
#include <HRRPart0bra0ket0hf100.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001d.h>
#include <HRRPart0bra0ket0h001f.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010d.h>
#include <HRRPart0bra0ket0h010f.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100d.h>
#include <HRRPart0bra0ket0h100f.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart0bra0ket0id001.h>
#include <HRRPart0bra0ket0id010.h>
#include <HRRPart0bra0ket0id100.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0i001d.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i010d.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i100d.h>
#include <HRRPart0bra0ket0i100p.h>
#include <HRRPart0bra0ket0kp001.h>
#include <HRRPart0bra0ket0kp010.h>
#include <HRRPart0bra0ket0kp100.h>
#include <HRRPart0bra0ket0k001p.h>
#include <HRRPart0bra0ket0k010p.h>
#include <HRRPart0bra0ket0k100p.h>
#include <_elecpotderiv1_H_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_H_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,865)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_H_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2125)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2188)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2272)*1+lsi)*1]), &(inteval->stack[((hsi*84+2188)*1+lsi)*1]), &(inteval->stack[((hsi*63+2125)*1+lsi)*1]),1);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*36+780)*1+lsi)*1]), &(inteval->stack[((hsi*28+816)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*28+816)*1+lsi)*1]), &(inteval->stack[((hsi*21+844)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+2545)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*63+2125)*1+lsi)*1]),1);
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*45+735)*1+lsi)*1]), &(inteval->stack[((hsi*36+780)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0id001(inteval, &(inteval->stack[((hsi*168+2779)*1+lsi)*1]), &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*84+2188)*1+lsi)*1]),1);
HRRPart0bra0ket0hf001(inteval, &(inteval->stack[((hsi*210+1915)*1+lsi)*1]), &(inteval->stack[((hsi*168+2779)*1+lsi)*1]), &(inteval->stack[((hsi*126+2545)*1+lsi)*1]), &(inteval->stack[((hsi*126+2272)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*36+650)*1+lsi)*1]), &(inteval->stack[((hsi*28+686)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*28+686)*1+lsi)*1]), &(inteval->stack[((hsi*21+714)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+686)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*63+2125)*1+lsi)*1]),1);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*45+605)*1+lsi)*1]), &(inteval->stack[((hsi*36+650)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0id010(inteval, &(inteval->stack[((hsi*168+2947)*1+lsi)*1]), &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*84+2188)*1+lsi)*1]),1);
HRRPart0bra0ket0hf010(inteval, &(inteval->stack[((hsi*210+1705)*1+lsi)*1]), &(inteval->stack[((hsi*168+2947)*1+lsi)*1]), &(inteval->stack[((hsi*126+686)*1+lsi)*1]), &(inteval->stack[((hsi*126+2272)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*36+520)*1+lsi)*1]), &(inteval->stack[((hsi*28+556)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*28+556)*1+lsi)*1]), &(inteval->stack[((hsi*21+584)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+556)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*63+2125)*1+lsi)*1]),1);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*45+475)*1+lsi)*1]), &(inteval->stack[((hsi*36+520)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0id100(inteval, &(inteval->stack[((hsi*168+3115)*1+lsi)*1]), &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*84+2188)*1+lsi)*1]),1);
HRRPart0bra0ket0hf100(inteval, &(inteval->stack[((hsi*210+1495)*1+lsi)*1]), &(inteval->stack[((hsi*168+3115)*1+lsi)*1]), &(inteval->stack[((hsi*126+556)*1+lsi)*1]), &(inteval->stack[((hsi*126+2272)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*36+390)*1+lsi)*1]), &(inteval->stack[((hsi*28+426)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*28+426)*1+lsi)*1]), &(inteval->stack[((hsi*21+454)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d(inteval, &(inteval->stack[((hsi*126+426)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*63+2125)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*45+345)*1+lsi)*1]), &(inteval->stack[((hsi*36+390)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d(inteval, &(inteval->stack[((hsi*168+3283)*1+lsi)*1]), &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*84+2188)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f(inteval, &(inteval->stack[((hsi*210+1285)*1+lsi)*1]), &(inteval->stack[((hsi*168+3283)*1+lsi)*1]), &(inteval->stack[((hsi*126+426)*1+lsi)*1]), &(inteval->stack[((hsi*126+2272)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*36+260)*1+lsi)*1]), &(inteval->stack[((hsi*28+296)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*28+296)*1+lsi)*1]), &(inteval->stack[((hsi*21+324)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d(inteval, &(inteval->stack[((hsi*126+296)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*63+2125)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*45+215)*1+lsi)*1]), &(inteval->stack[((hsi*36+260)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d(inteval, &(inteval->stack[((hsi*168+3451)*1+lsi)*1]), &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*84+2188)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f(inteval, &(inteval->stack[((hsi*210+1075)*1+lsi)*1]), &(inteval->stack[((hsi*168+3451)*1+lsi)*1]), &(inteval->stack[((hsi*126+296)*1+lsi)*1]), &(inteval->stack[((hsi*126+2272)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+117)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*28+117)*1+lsi)*1]), &(inteval->stack[((hsi*21+173)*1+lsi)*1]), &(inteval->stack[((hsi*21+194)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d(inteval, &(inteval->stack[((hsi*126+117)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*63+2482)*1+lsi)*1]), &(inteval->stack[((hsi*63+2125)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d(inteval, &(inteval->stack[((hsi*168+3619)*1+lsi)*1]), &(inteval->stack[((hsi*108+2671)*1+lsi)*1]), &(inteval->stack[((hsi*84+2398)*1+lsi)*1]), &(inteval->stack[((hsi*84+2188)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f(inteval, &(inteval->stack[((hsi*210+865)*1+lsi)*1]), &(inteval->stack[((hsi*168+3619)*1+lsi)*1]), &(inteval->stack[((hsi*126+117)*1+lsi)*1]), &(inteval->stack[((hsi*126+2272)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*210+865)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*210+1075)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*210+1285)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*210+1495)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*210+1705)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*210+1915)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
