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
#include <HRRPart0ket0bra0id001.h>
#include <HRRPart0ket0bra0id010.h>
#include <HRRPart0ket0bra0id100.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0ip001.h>
#include <HRRPart0ket0bra0ip010.h>
#include <HRRPart0ket0bra0ip100.h>
#include <HRRPart0ket0bra0i001d.h>
#include <HRRPart0ket0bra0i001p.h>
#include <HRRPart0ket0bra0i010d.h>
#include <HRRPart0ket0bra0i010p.h>
#include <HRRPart0ket0bra0i100d.h>
#include <HRRPart0ket0bra0i100p.h>
#include <HRRPart0ket0bra0kp001.h>
#include <HRRPart0ket0bra0kp010.h>
#include <HRRPart0ket0bra0kp100.h>
#include <HRRPart0ket0bra0k001p.h>
#include <HRRPart0ket0bra0k010p.h>
#include <HRRPart0ket0bra0k100p.h>
#include <_elecpotderiv1_D_I_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_D_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,718)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_D_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1726)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0ket0bra0i001p(inteval, &(inteval->stack[((hsi*84+1810)*1+lsi)*1]), &(inteval->stack[((hsi*36+654)*1+lsi)*1]), &(inteval->stack[((hsi*28+690)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0ket0bra0k001p(inteval, &(inteval->stack[((hsi*108+1894)*1+lsi)*1]), &(inteval->stack[((hsi*45+609)*1+lsi)*1]), &(inteval->stack[((hsi*36+654)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0ket0bra0i001d(inteval, &(inteval->stack[((hsi*168+1558)*1+lsi)*1]), &(inteval->stack[((hsi*108+1894)*1+lsi)*1]), &(inteval->stack[((hsi*84+1810)*1+lsi)*1]), &(inteval->stack[((hsi*84+1726)*1+lsi)*1]),1);
HRRPart0ket0bra0i010p(inteval, &(inteval->stack[((hsi*84+609)*1+lsi)*1]), &(inteval->stack[((hsi*36+545)*1+lsi)*1]), &(inteval->stack[((hsi*28+581)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0ket0bra0k010p(inteval, &(inteval->stack[((hsi*108+2002)*1+lsi)*1]), &(inteval->stack[((hsi*45+500)*1+lsi)*1]), &(inteval->stack[((hsi*36+545)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0ket0bra0i010d(inteval, &(inteval->stack[((hsi*168+1390)*1+lsi)*1]), &(inteval->stack[((hsi*108+2002)*1+lsi)*1]), &(inteval->stack[((hsi*84+609)*1+lsi)*1]), &(inteval->stack[((hsi*84+1726)*1+lsi)*1]),1);
HRRPart0ket0bra0i100p(inteval, &(inteval->stack[((hsi*84+500)*1+lsi)*1]), &(inteval->stack[((hsi*36+436)*1+lsi)*1]), &(inteval->stack[((hsi*28+472)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0ket0bra0k100p(inteval, &(inteval->stack[((hsi*108+2110)*1+lsi)*1]), &(inteval->stack[((hsi*45+391)*1+lsi)*1]), &(inteval->stack[((hsi*36+436)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0ket0bra0i100d(inteval, &(inteval->stack[((hsi*168+1222)*1+lsi)*1]), &(inteval->stack[((hsi*108+2110)*1+lsi)*1]), &(inteval->stack[((hsi*84+500)*1+lsi)*1]), &(inteval->stack[((hsi*84+1726)*1+lsi)*1]),1);
HRRPart0ket0bra0ip001(inteval, &(inteval->stack[((hsi*84+391)*1+lsi)*1]), &(inteval->stack[((hsi*36+327)*1+lsi)*1]), &(inteval->stack[((hsi*28+363)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0ket0bra0kp001(inteval, &(inteval->stack[((hsi*108+2218)*1+lsi)*1]), &(inteval->stack[((hsi*45+282)*1+lsi)*1]), &(inteval->stack[((hsi*36+327)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0ket0bra0id001(inteval, &(inteval->stack[((hsi*168+1054)*1+lsi)*1]), &(inteval->stack[((hsi*108+2218)*1+lsi)*1]), &(inteval->stack[((hsi*84+391)*1+lsi)*1]), &(inteval->stack[((hsi*84+1726)*1+lsi)*1]),1);
HRRPart0ket0bra0ip010(inteval, &(inteval->stack[((hsi*84+282)*1+lsi)*1]), &(inteval->stack[((hsi*36+218)*1+lsi)*1]), &(inteval->stack[((hsi*28+254)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0ket0bra0kp010(inteval, &(inteval->stack[((hsi*108+2326)*1+lsi)*1]), &(inteval->stack[((hsi*45+173)*1+lsi)*1]), &(inteval->stack[((hsi*36+218)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0ket0bra0id010(inteval, &(inteval->stack[((hsi*168+886)*1+lsi)*1]), &(inteval->stack[((hsi*108+2326)*1+lsi)*1]), &(inteval->stack[((hsi*84+282)*1+lsi)*1]), &(inteval->stack[((hsi*84+1726)*1+lsi)*1]),1);
HRRPart0ket0bra0ip100(inteval, &(inteval->stack[((hsi*84+173)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+117)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0ket0bra0kp100(inteval, &(inteval->stack[((hsi*108+2434)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0ket0bra0id100(inteval, &(inteval->stack[((hsi*168+718)*1+lsi)*1]), &(inteval->stack[((hsi*108+2434)*1+lsi)*1]), &(inteval->stack[((hsi*84+173)*1+lsi)*1]), &(inteval->stack[((hsi*84+1726)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*168+718)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*168+886)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*168+1054)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*168+1222)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*168+1390)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*168+1558)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
