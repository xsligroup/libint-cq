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
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_P__0__K__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _aB_P__0__K__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2520)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__K__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+7380)*1+lsi)*1]), &(inteval->stack[((hsi*165+2112)*1+lsi)*1]), &(inteval->stack[((hsi*135+2277)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+7785)*1+lsi)*1]), &(inteval->stack[((hsi*198+1914)*1+lsi)*1]), &(inteval->stack[((hsi*165+2112)*1+lsi)*1]),3);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*810+8280)*1+lsi)*1]), &(inteval->stack[((hsi*495+7785)*1+lsi)*1]), &(inteval->stack[((hsi*405+7380)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+9090)*1+lsi)*1]), &(inteval->stack[((hsi*135+2277)*1+lsi)*1]), &(inteval->stack[((hsi*108+2412)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+9414)*1+lsi)*1]), &(inteval->stack[((hsi*405+7380)*1+lsi)*1]), &(inteval->stack[((hsi*324+9090)*1+lsi)*1]),3);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*1080+10062)*1+lsi)*1]), &(inteval->stack[((hsi*810+8280)*1+lsi)*1]), &(inteval->stack[((hsi*648+9414)*1+lsi)*1]),3);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*594+9090)*1+lsi)*1]), &(inteval->stack[((hsi*234+1680)*1+lsi)*1]), &(inteval->stack[((hsi*198+1914)*1+lsi)*1]),3);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*990+11142)*1+lsi)*1]), &(inteval->stack[((hsi*594+9090)*1+lsi)*1]), &(inteval->stack[((hsi*495+7785)*1+lsi)*1]),3);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*1350+12132)*1+lsi)*1]), &(inteval->stack[((hsi*990+11142)*1+lsi)*1]), &(inteval->stack[((hsi*810+8280)*1+lsi)*1]),3);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*1620+7380)*1+lsi)*1]), &(inteval->stack[((hsi*1350+12132)*1+lsi)*1]), &(inteval->stack[((hsi*1080+10062)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+1680)*1+lsi)*1]), &(inteval->stack[((hsi*330+864)*1+lsi)*1]), &(inteval->stack[((hsi*270+1194)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+9000)*1+lsi)*1]), &(inteval->stack[((hsi*396+468)*1+lsi)*1]), &(inteval->stack[((hsi*330+864)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+9990)*1+lsi)*1]), &(inteval->stack[((hsi*990+9000)*1+lsi)*1]), &(inteval->stack[((hsi*810+1680)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+11610)*1+lsi)*1]), &(inteval->stack[((hsi*270+1194)*1+lsi)*1]), &(inteval->stack[((hsi*216+1464)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+12258)*1+lsi)*1]), &(inteval->stack[((hsi*810+1680)*1+lsi)*1]), &(inteval->stack[((hsi*648+11610)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*2160+13554)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9990)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12258)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+11610)*1+lsi)*1]), &(inteval->stack[((hsi*468+0)*1+lsi)*1]), &(inteval->stack[((hsi*396+468)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+0)*1+lsi)*1]), &(inteval->stack[((hsi*1188+11610)*1+lsi)*1]), &(inteval->stack[((hsi*990+9000)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+15714)*1+lsi)*1]), &(inteval->stack[((hsi*1980+0)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9990)*1+lsi)*1]),6);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*3240+9000)*1+lsi)*1]), &(inteval->stack[((hsi*2700+15714)*1+lsi)*1]), &(inteval->stack[((hsi*2160+13554)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*4860+2520)*1+lsi)*1]), &(inteval->stack[((hsi*3240+9000)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7380)*1+lsi)*1]),540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4860+2520)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
