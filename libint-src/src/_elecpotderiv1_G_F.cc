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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gd001.h>
#include <HRRPart0bra0ket0gd010.h>
#include <HRRPart0bra0ket0gd100.h>
#include <HRRPart0bra0ket0gf001.h>
#include <HRRPart0bra0ket0gf010.h>
#include <HRRPart0bra0ket0gf100.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001d.h>
#include <HRRPart0bra0ket0g001f.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010d.h>
#include <HRRPart0bra0ket0g010f.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100d.h>
#include <HRRPart0bra0ket0g100f.h>
#include <HRRPart0bra0ket0g100p.h>
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
#include <_elecpotderiv1_G_F_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_G_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,664)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_G_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1564)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]), &(inteval->stack[((hsi*15+149)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1609)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1672)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+600)*1+lsi)*1]), &(inteval->stack[((hsi*21+628)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+628)*1+lsi)*1]), &(inteval->stack[((hsi*15+649)*1+lsi)*1]), &(inteval->stack[((hsi*15+149)*1+lsi)*1]),1);
HRRPart0bra0ket0gd001(inteval, &(inteval->stack[((hsi*90+1870)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+564)*1+lsi)*1]), &(inteval->stack[((hsi*28+600)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart0bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+2044)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0bra0ket0gf001(inteval, &(inteval->stack[((hsi*150+1414)*1+lsi)*1]), &(inteval->stack[((hsi*126+2044)*1+lsi)*1]), &(inteval->stack[((hsi*90+1870)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+500)*1+lsi)*1]), &(inteval->stack[((hsi*21+528)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+528)*1+lsi)*1]), &(inteval->stack[((hsi*15+549)*1+lsi)*1]), &(inteval->stack[((hsi*15+149)*1+lsi)*1]),1);
HRRPart0bra0ket0gd010(inteval, &(inteval->stack[((hsi*90+528)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+464)*1+lsi)*1]), &(inteval->stack[((hsi*28+500)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart0bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+2170)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0bra0ket0gf010(inteval, &(inteval->stack[((hsi*150+1264)*1+lsi)*1]), &(inteval->stack[((hsi*126+2170)*1+lsi)*1]), &(inteval->stack[((hsi*90+528)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+400)*1+lsi)*1]), &(inteval->stack[((hsi*21+428)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+428)*1+lsi)*1]), &(inteval->stack[((hsi*15+449)*1+lsi)*1]), &(inteval->stack[((hsi*15+149)*1+lsi)*1]),1);
HRRPart0bra0ket0gd100(inteval, &(inteval->stack[((hsi*90+428)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+364)*1+lsi)*1]), &(inteval->stack[((hsi*28+400)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart0bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+2296)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0bra0ket0gf100(inteval, &(inteval->stack[((hsi*150+1114)*1+lsi)*1]), &(inteval->stack[((hsi*126+2296)*1+lsi)*1]), &(inteval->stack[((hsi*90+428)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+300)*1+lsi)*1]), &(inteval->stack[((hsi*21+328)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+328)*1+lsi)*1]), &(inteval->stack[((hsi*15+349)*1+lsi)*1]), &(inteval->stack[((hsi*15+149)*1+lsi)*1]),1);
HRRPart0bra0ket0g001d(inteval, &(inteval->stack[((hsi*90+328)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+264)*1+lsi)*1]), &(inteval->stack[((hsi*28+300)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d(inteval, &(inteval->stack[((hsi*126+2422)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0bra0ket0g001f(inteval, &(inteval->stack[((hsi*150+964)*1+lsi)*1]), &(inteval->stack[((hsi*126+2422)*1+lsi)*1]), &(inteval->stack[((hsi*90+328)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+200)*1+lsi)*1]), &(inteval->stack[((hsi*21+228)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+228)*1+lsi)*1]), &(inteval->stack[((hsi*15+249)*1+lsi)*1]), &(inteval->stack[((hsi*15+149)*1+lsi)*1]),1);
HRRPart0bra0ket0g010d(inteval, &(inteval->stack[((hsi*90+228)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+164)*1+lsi)*1]), &(inteval->stack[((hsi*28+200)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d(inteval, &(inteval->stack[((hsi*126+2548)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0bra0ket0g010f(inteval, &(inteval->stack[((hsi*150+814)*1+lsi)*1]), &(inteval->stack[((hsi*126+2548)*1+lsi)*1]), &(inteval->stack[((hsi*90+228)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*15+134)*1+lsi)*1]), &(inteval->stack[((hsi*15+149)*1+lsi)*1]),1);
HRRPart0bra0ket0g100d(inteval, &(inteval->stack[((hsi*90+92)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+28)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d(inteval, &(inteval->stack[((hsi*126+2674)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0bra0ket0g100f(inteval, &(inteval->stack[((hsi*150+664)*1+lsi)*1]), &(inteval->stack[((hsi*126+2674)*1+lsi)*1]), &(inteval->stack[((hsi*90+92)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
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
#endif
