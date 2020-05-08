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
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+1564)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1609)*1+lsi)*1]), &(inteval->stack[((hsi*28+280)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0gd(inteval, &(inteval->stack[((hsi*90+1672)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0h001p(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+420)*1+lsi)*1]), &(inteval->stack[((hsi*21+231)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0g001p(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+231)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0g001d(inteval, &(inteval->stack[((hsi*90+1870)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0i001p(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+628)*1+lsi)*1]), &(inteval->stack[((hsi*28+420)*1+lsi)*1]), &(inteval->stack[((hsi*28+280)*1+lsi)*1]),1);
HRRPart0ket0bra0h001d(inteval, &(inteval->stack[((hsi*126+2044)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0g001f(inteval, &(inteval->stack[((hsi*150+1414)*1+lsi)*1]), &(inteval->stack[((hsi*126+2044)*1+lsi)*1]), &(inteval->stack[((hsi*90+1870)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+392)*1+lsi)*1]), &(inteval->stack[((hsi*21+210)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0g010p(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+210)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0g010d(inteval, &(inteval->stack[((hsi*90+2170)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0i010p(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+592)*1+lsi)*1]), &(inteval->stack[((hsi*28+392)*1+lsi)*1]), &(inteval->stack[((hsi*28+280)*1+lsi)*1]),1);
HRRPart0ket0bra0h010d(inteval, &(inteval->stack[((hsi*126+2260)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0g010f(inteval, &(inteval->stack[((hsi*150+1264)*1+lsi)*1]), &(inteval->stack[((hsi*126+2260)*1+lsi)*1]), &(inteval->stack[((hsi*90+2170)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p(inteval, &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*28+364)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0g100p(inteval, &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0g100d(inteval, &(inteval->stack[((hsi*90+2386)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1825)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0i100p(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+556)*1+lsi)*1]), &(inteval->stack[((hsi*28+364)*1+lsi)*1]), &(inteval->stack[((hsi*28+280)*1+lsi)*1]),1);
HRRPart0ket0bra0h100d(inteval, &(inteval->stack[((hsi*126+2476)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1762)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0g100f(inteval, &(inteval->stack[((hsi*150+1114)*1+lsi)*1]), &(inteval->stack[((hsi*126+2476)*1+lsi)*1]), &(inteval->stack[((hsi*90+2386)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0ket0bra0hp001(inteval, &(inteval->stack[((hsi*63+189)*1+lsi)*1]), &(inteval->stack[((hsi*28+336)*1+lsi)*1]), &(inteval->stack[((hsi*21+168)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0gp001(inteval, &(inteval->stack[((hsi*45+60)*1+lsi)*1]), &(inteval->stack[((hsi*21+168)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0gd001(inteval, &(inteval->stack[((hsi*90+556)*1+lsi)*1]), &(inteval->stack[((hsi*63+189)*1+lsi)*1]), &(inteval->stack[((hsi*45+60)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0ip001(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+520)*1+lsi)*1]), &(inteval->stack[((hsi*28+336)*1+lsi)*1]), &(inteval->stack[((hsi*28+280)*1+lsi)*1]),1);
HRRPart0ket0bra0hd001(inteval, &(inteval->stack[((hsi*126+2602)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+189)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0gf001(inteval, &(inteval->stack[((hsi*150+964)*1+lsi)*1]), &(inteval->stack[((hsi*126+2602)*1+lsi)*1]), &(inteval->stack[((hsi*90+556)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0ket0bra0hp010(inteval, &(inteval->stack[((hsi*63+336)*1+lsi)*1]), &(inteval->stack[((hsi*28+308)*1+lsi)*1]), &(inteval->stack[((hsi*21+147)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0gp010(inteval, &(inteval->stack[((hsi*45+1762)*1+lsi)*1]), &(inteval->stack[((hsi*21+147)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0gd010(inteval, &(inteval->stack[((hsi*90+147)*1+lsi)*1]), &(inteval->stack[((hsi*63+336)*1+lsi)*1]), &(inteval->stack[((hsi*45+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0ip010(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+484)*1+lsi)*1]), &(inteval->stack[((hsi*28+308)*1+lsi)*1]), &(inteval->stack[((hsi*28+280)*1+lsi)*1]),1);
HRRPart0ket0bra0hd010(inteval, &(inteval->stack[((hsi*126+2728)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+336)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0gf010(inteval, &(inteval->stack[((hsi*150+814)*1+lsi)*1]), &(inteval->stack[((hsi*126+2728)*1+lsi)*1]), &(inteval->stack[((hsi*90+147)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
HRRPart0ket0bra0hp100(inteval, &(inteval->stack[((hsi*63+308)*1+lsi)*1]), &(inteval->stack[((hsi*28+252)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0gp100(inteval, &(inteval->stack[((hsi*45+1762)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0ket0bra0gd100(inteval, &(inteval->stack[((hsi*90+0)*1+lsi)*1]), &(inteval->stack[((hsi*63+308)*1+lsi)*1]), &(inteval->stack[((hsi*45+1762)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0ip100(inteval, &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+448)*1+lsi)*1]), &(inteval->stack[((hsi*28+252)*1+lsi)*1]), &(inteval->stack[((hsi*28+280)*1+lsi)*1]),1);
HRRPart0ket0bra0hd100(inteval, &(inteval->stack[((hsi*126+371)*1+lsi)*1]), &(inteval->stack[((hsi*84+1960)*1+lsi)*1]), &(inteval->stack[((hsi*63+308)*1+lsi)*1]), &(inteval->stack[((hsi*63+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0gf100(inteval, &(inteval->stack[((hsi*150+664)*1+lsi)*1]), &(inteval->stack[((hsi*126+371)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]), &(inteval->stack[((hsi*90+1672)*1+lsi)*1]),1);
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
