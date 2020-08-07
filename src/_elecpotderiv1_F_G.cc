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
#include <HRRPart0ket0bra0gd.h>
#include <HRRPart0ket0bra0gd001.h>
#include <HRRPart0ket0bra0gd010.h>
#include <HRRPart0ket0bra0gd100.h>
#include <HRRPart0ket0bra0gf001.h>
#include <HRRPart0ket0bra0gf010.h>
#include <HRRPart0ket0bra0gf100.h>
#include <HRRPart0ket0bra0gp.h>
#include <HRRPart0ket0bra0gp001.h>
#include <HRRPart0ket0bra0gp010.h>
#include <HRRPart0ket0bra0gp100.h>
#include <HRRPart0ket0bra0g001d.h>
#include <HRRPart0ket0bra0g001f.h>
#include <HRRPart0ket0bra0g001p.h>
#include <HRRPart0ket0bra0g010d.h>
#include <HRRPart0ket0bra0g010f.h>
#include <HRRPart0ket0bra0g010p.h>
#include <HRRPart0ket0bra0g100d.h>
#include <HRRPart0ket0bra0g100f.h>
#include <HRRPart0ket0bra0g100p.h>
#include <HRRPart0ket0bra0hd001.h>
#include <HRRPart0ket0bra0hd010.h>
#include <HRRPart0ket0bra0hd100.h>
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0hp001.h>
#include <HRRPart0ket0bra0hp010.h>
#include <HRRPart0ket0bra0hp100.h>
#include <HRRPart0ket0bra0h001d.h>
#include <HRRPart0ket0bra0h001p.h>
#include <HRRPart0ket0bra0h010d.h>
#include <HRRPart0ket0bra0h010p.h>
#include <HRRPart0ket0bra0h100d.h>
#include <HRRPart0ket0bra0h100p.h>
#include <HRRPart0ket0bra0ip001.h>
#include <HRRPart0ket0bra0ip010.h>
#include <HRRPart0ket0bra0ip100.h>
#include <HRRPart0ket0bra0i001p.h>
#include <HRRPart0ket0bra0i010p.h>
#include <HRRPart0ket0bra0i100p.h>
#include <_elecpotderiv1_F_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_F_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,664)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_F_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1564)*1+lsi)*1]), &(inteval->stack[((hsi*21+218)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1609)*1+lsi)*1]), &(inteval->stack[((hsi*28+169)*1+lsi)*1]), &(inteval->stack[((hsi*21+218)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1672)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0h001p(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+615)*1+lsi)*1]), &(inteval->stack[((hsi*21+643)*1+lsi)*1]), &(inteval->stack[((hsi*21+218)*1+lsi)*1]),1);
HRRPart0ket0bra0g001p(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+643)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0g001d(inteval, &(inteval->stack[((hsi*90+1870)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0i001p(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+579)*1+lsi)*1]), &(inteval->stack[((hsi*28+615)*1+lsi)*1]), &(inteval->stack[((hsi*28+169)*1+lsi)*1]),1);
HRRPart0ket0bra0h001d(inteval, &(inteval->stack[((hsi*126+2044)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0g001f(inteval, &(inteval->stack[((hsi*150+1414)*1+lsi)*1]), &(inteval->stack[((hsi*126+2044)*1+lsi)*1]), &(inteval->stack[((hsi*90+1870)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+530)*1+lsi)*1]), &(inteval->stack[((hsi*21+558)*1+lsi)*1]), &(inteval->stack[((hsi*21+218)*1+lsi)*1]),1);
HRRPart0ket0bra0g010p(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+558)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0g010d(inteval, &(inteval->stack[((hsi*90+558)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0i010p(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+494)*1+lsi)*1]), &(inteval->stack[((hsi*28+530)*1+lsi)*1]), &(inteval->stack[((hsi*28+169)*1+lsi)*1]),1);
HRRPart0ket0bra0h010d(inteval, &(inteval->stack[((hsi*126+2170)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0g010f(inteval, &(inteval->stack[((hsi*150+1264)*1+lsi)*1]), &(inteval->stack[((hsi*126+2170)*1+lsi)*1]), &(inteval->stack[((hsi*90+558)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+445)*1+lsi)*1]), &(inteval->stack[((hsi*21+473)*1+lsi)*1]), &(inteval->stack[((hsi*21+218)*1+lsi)*1]),1);
HRRPart0ket0bra0g100p(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+473)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0g100d(inteval, &(inteval->stack[((hsi*90+2296)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0i100p(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+409)*1+lsi)*1]), &(inteval->stack[((hsi*28+445)*1+lsi)*1]), &(inteval->stack[((hsi*28+169)*1+lsi)*1]),1);
HRRPart0ket0bra0h100d(inteval, &(inteval->stack[((hsi*126+409)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0g100f(inteval, &(inteval->stack[((hsi*150+1114)*1+lsi)*1]), &(inteval->stack[((hsi*126+409)*1+lsi)*1]), &(inteval->stack[((hsi*90+2296)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0ket0bra0hp001(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+360)*1+lsi)*1]), &(inteval->stack[((hsi*21+388)*1+lsi)*1]), &(inteval->stack[((hsi*21+218)*1+lsi)*1]),1);
HRRPart0ket0bra0gp001(inteval, &(inteval->stack[((hsi*45+60)*1+lsi)*1]), &(inteval->stack[((hsi*21+388)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0gd001(inteval, &(inteval->stack[((hsi*90+2386)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+60)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0ip001(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+324)*1+lsi)*1]), &(inteval->stack[((hsi*28+360)*1+lsi)*1]), &(inteval->stack[((hsi*28+169)*1+lsi)*1]),1);
HRRPart0ket0bra0hd001(inteval, &(inteval->stack[((hsi*126+2476)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0gf001(inteval, &(inteval->stack[((hsi*150+964)*1+lsi)*1]), &(inteval->stack[((hsi*126+2476)*1+lsi)*1]), &(inteval->stack[((hsi*90+2386)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0ket0bra0hp010(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+275)*1+lsi)*1]), &(inteval->stack[((hsi*21+303)*1+lsi)*1]), &(inteval->stack[((hsi*21+218)*1+lsi)*1]),1);
HRRPart0ket0bra0gp010(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+303)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0gd010(inteval, &(inteval->stack[((hsi*90+303)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0ip010(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+239)*1+lsi)*1]), &(inteval->stack[((hsi*28+275)*1+lsi)*1]), &(inteval->stack[((hsi*28+169)*1+lsi)*1]),1);
HRRPart0ket0bra0hd010(inteval, &(inteval->stack[((hsi*126+2602)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0gf010(inteval, &(inteval->stack[((hsi*150+814)*1+lsi)*1]), &(inteval->stack[((hsi*126+2602)*1+lsi)*1]), &(inteval->stack[((hsi*90+303)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0ket0bra0hp100(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+141)*1+lsi)*1]), &(inteval->stack[((hsi*21+197)*1+lsi)*1]), &(inteval->stack[((hsi*21+218)*1+lsi)*1]),1);
HRRPart0ket0bra0gp100(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+197)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0gd100(inteval, &(inteval->stack[((hsi*90+197)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0ip100(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+105)*1+lsi)*1]), &(inteval->stack[((hsi*28+141)*1+lsi)*1]), &(inteval->stack[((hsi*28+169)*1+lsi)*1]),1);
HRRPart0ket0bra0hd100(inteval, &(inteval->stack[((hsi*126+0)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0gf100(inteval, &(inteval->stack[((hsi*150+664)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]), &(inteval->stack[((hsi*90+197)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*150+664)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*150+814)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*150+964)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*150+1114)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*150+1264)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*150+1414)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
