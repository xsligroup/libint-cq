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
#include <HRRPart0bra0ket0hd001.h>
#include <HRRPart0bra0ket0hd010.h>
#include <HRRPart0bra0ket0hd100.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001d.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010d.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100d.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i100p.h>
#include <_elecpotderiv1_H_D_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_H_D(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,559)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_H_D_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1315)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+1378)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]), &(inteval->stack[((hsi*21+538)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+1441)*1+lsi)*1]), &(inteval->stack[((hsi*36+474)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+1189)*1+lsi)*1]), &(inteval->stack[((hsi*84+1441)*1+lsi)*1]), &(inteval->stack[((hsi*63+1378)*1+lsi)*1]), &(inteval->stack[((hsi*63+1315)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+474)*1+lsi)*1]), &(inteval->stack[((hsi*28+425)*1+lsi)*1]), &(inteval->stack[((hsi*21+453)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+1525)*1+lsi)*1]), &(inteval->stack[((hsi*36+389)*1+lsi)*1]), &(inteval->stack[((hsi*28+425)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+1063)*1+lsi)*1]), &(inteval->stack[((hsi*84+1525)*1+lsi)*1]), &(inteval->stack[((hsi*63+474)*1+lsi)*1]), &(inteval->stack[((hsi*63+1315)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+389)*1+lsi)*1]), &(inteval->stack[((hsi*28+340)*1+lsi)*1]), &(inteval->stack[((hsi*21+368)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+1609)*1+lsi)*1]), &(inteval->stack[((hsi*36+304)*1+lsi)*1]), &(inteval->stack[((hsi*28+340)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+937)*1+lsi)*1]), &(inteval->stack[((hsi*84+1609)*1+lsi)*1]), &(inteval->stack[((hsi*63+389)*1+lsi)*1]), &(inteval->stack[((hsi*63+1315)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+304)*1+lsi)*1]), &(inteval->stack[((hsi*28+255)*1+lsi)*1]), &(inteval->stack[((hsi*21+283)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+1693)*1+lsi)*1]), &(inteval->stack[((hsi*36+219)*1+lsi)*1]), &(inteval->stack[((hsi*28+255)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d(inteval, &(inteval->stack[((hsi*126+811)*1+lsi)*1]), &(inteval->stack[((hsi*84+1693)*1+lsi)*1]), &(inteval->stack[((hsi*63+304)*1+lsi)*1]), &(inteval->stack[((hsi*63+1315)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+219)*1+lsi)*1]), &(inteval->stack[((hsi*28+170)*1+lsi)*1]), &(inteval->stack[((hsi*21+198)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+1777)*1+lsi)*1]), &(inteval->stack[((hsi*36+134)*1+lsi)*1]), &(inteval->stack[((hsi*28+170)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d(inteval, &(inteval->stack[((hsi*126+685)*1+lsi)*1]), &(inteval->stack[((hsi*84+1777)*1+lsi)*1]), &(inteval->stack[((hsi*63+219)*1+lsi)*1]), &(inteval->stack[((hsi*63+1315)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+134)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+1861)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d(inteval, &(inteval->stack[((hsi*126+559)*1+lsi)*1]), &(inteval->stack[((hsi*84+1861)*1+lsi)*1]), &(inteval->stack[((hsi*63+134)*1+lsi)*1]), &(inteval->stack[((hsi*63+1315)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*126+559)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*126+685)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*126+811)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*126+937)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*126+1063)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*126+1189)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
