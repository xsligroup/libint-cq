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
#include <HRRPart0ket0bra0gd001.h>
#include <HRRPart0ket0bra0gd010.h>
#include <HRRPart0ket0bra0gd100.h>
#include <HRRPart0ket0bra0gp.h>
#include <HRRPart0ket0bra0gp001.h>
#include <HRRPart0ket0bra0gp010.h>
#include <HRRPart0ket0bra0gp100.h>
#include <HRRPart0ket0bra0g001d.h>
#include <HRRPart0ket0bra0g001p.h>
#include <HRRPart0ket0bra0g010d.h>
#include <HRRPart0ket0bra0g010p.h>
#include <HRRPart0ket0bra0g100d.h>
#include <HRRPart0ket0bra0g100p.h>
#include <HRRPart0ket0bra0hp001.h>
#include <HRRPart0ket0bra0hp010.h>
#include <HRRPart0ket0bra0hp100.h>
#include <HRRPart0ket0bra0h001p.h>
#include <HRRPart0ket0bra0h010p.h>
#include <HRRPart0ket0bra0h100p.h>
#include <_elecpotderiv1_D_G_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_D_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,420)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_D_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+960)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0g001p(inteval, &(inteval->stack[((hsi*45+1005)*1+lsi)*1]), &(inteval->stack[((hsi*21+231)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0h001p(inteval, &(inteval->stack[((hsi*63+1050)*1+lsi)*1]), &(inteval->stack[((hsi*28+392)*1+lsi)*1]), &(inteval->stack[((hsi*21+231)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0g001d(inteval, &(inteval->stack[((hsi*90+870)*1+lsi)*1]), &(inteval->stack[((hsi*63+1050)*1+lsi)*1]), &(inteval->stack[((hsi*45+1005)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0ket0bra0g010p(inteval, &(inteval->stack[((hsi*45+1113)*1+lsi)*1]), &(inteval->stack[((hsi*21+210)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p(inteval, &(inteval->stack[((hsi*63+1158)*1+lsi)*1]), &(inteval->stack[((hsi*28+364)*1+lsi)*1]), &(inteval->stack[((hsi*21+210)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0g010d(inteval, &(inteval->stack[((hsi*90+780)*1+lsi)*1]), &(inteval->stack[((hsi*63+1158)*1+lsi)*1]), &(inteval->stack[((hsi*45+1113)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0ket0bra0g100p(inteval, &(inteval->stack[((hsi*45+364)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p(inteval, &(inteval->stack[((hsi*63+1221)*1+lsi)*1]), &(inteval->stack[((hsi*28+336)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0g100d(inteval, &(inteval->stack[((hsi*90+690)*1+lsi)*1]), &(inteval->stack[((hsi*63+1221)*1+lsi)*1]), &(inteval->stack[((hsi*45+364)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0ket0bra0gp001(inteval, &(inteval->stack[((hsi*45+60)*1+lsi)*1]), &(inteval->stack[((hsi*21+168)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0hp001(inteval, &(inteval->stack[((hsi*63+189)*1+lsi)*1]), &(inteval->stack[((hsi*28+308)*1+lsi)*1]), &(inteval->stack[((hsi*21+168)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0gd001(inteval, &(inteval->stack[((hsi*90+600)*1+lsi)*1]), &(inteval->stack[((hsi*63+189)*1+lsi)*1]), &(inteval->stack[((hsi*45+60)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0ket0bra0gp010(inteval, &(inteval->stack[((hsi*45+308)*1+lsi)*1]), &(inteval->stack[((hsi*21+147)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0hp010(inteval, &(inteval->stack[((hsi*63+1284)*1+lsi)*1]), &(inteval->stack[((hsi*28+280)*1+lsi)*1]), &(inteval->stack[((hsi*21+147)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0gd010(inteval, &(inteval->stack[((hsi*90+510)*1+lsi)*1]), &(inteval->stack[((hsi*63+1284)*1+lsi)*1]), &(inteval->stack[((hsi*45+308)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0ket0bra0gp100(inteval, &(inteval->stack[((hsi*45+1347)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0hp100(inteval, &(inteval->stack[((hsi*63+1392)*1+lsi)*1]), &(inteval->stack[((hsi*28+252)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0gd100(inteval, &(inteval->stack[((hsi*90+420)*1+lsi)*1]), &(inteval->stack[((hsi*63+1392)*1+lsi)*1]), &(inteval->stack[((hsi*45+1347)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*90+420)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*90+510)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*90+600)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*90+690)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*90+780)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*90+870)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
