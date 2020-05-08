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
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i100p.h>
#include <_elecpotderiv1_I_P_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_I_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,412)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_I_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+832)*1+lsi)*1]), &(inteval->stack[((hsi*36+348)*1+lsi)*1]), &(inteval->stack[((hsi*28+384)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+748)*1+lsi)*1]), &(inteval->stack[((hsi*36+284)*1+lsi)*1]), &(inteval->stack[((hsi*28+320)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+664)*1+lsi)*1]), &(inteval->stack[((hsi*36+220)*1+lsi)*1]), &(inteval->stack[((hsi*28+256)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+580)*1+lsi)*1]), &(inteval->stack[((hsi*36+156)*1+lsi)*1]), &(inteval->stack[((hsi*28+192)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+496)*1+lsi)*1]), &(inteval->stack[((hsi*36+92)*1+lsi)*1]), &(inteval->stack[((hsi*28+128)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+412)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*84+412)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*84+496)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*84+580)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*84+664)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*84+748)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*84+832)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
