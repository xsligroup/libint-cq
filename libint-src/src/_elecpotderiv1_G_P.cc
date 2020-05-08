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
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100p.h>
#include <_elecpotderiv1_G_P_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_G_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,231)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_G_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*45+456)*1+lsi)*1]), &(inteval->stack[((hsi*21+195)*1+lsi)*1]), &(inteval->stack[((hsi*15+216)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*45+411)*1+lsi)*1]), &(inteval->stack[((hsi*21+159)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*45+366)*1+lsi)*1]), &(inteval->stack[((hsi*21+123)*1+lsi)*1]), &(inteval->stack[((hsi*15+144)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*45+321)*1+lsi)*1]), &(inteval->stack[((hsi*21+87)*1+lsi)*1]), &(inteval->stack[((hsi*15+108)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*45+276)*1+lsi)*1]), &(inteval->stack[((hsi*21+51)*1+lsi)*1]), &(inteval->stack[((hsi*15+72)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*45+231)*1+lsi)*1]), &(inteval->stack[((hsi*21+15)*1+lsi)*1]), &(inteval->stack[((hsi*15+36)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*45+231)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*45+276)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*45+321)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*45+366)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*45+411)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*45+456)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
