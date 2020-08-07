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
#include <HRRPart0bra0ket0gp002.h>
#include <HRRPart0bra0ket0gp011.h>
#include <HRRPart0bra0ket0gp020.h>
#include <HRRPart0bra0ket0gp101.h>
#include <HRRPart0bra0ket0gp110.h>
#include <HRRPart0bra0ket0gp200.h>
#include <HRRPart0bra0ket0g001p001.h>
#include <HRRPart0bra0ket0g001p010.h>
#include <HRRPart0bra0ket0g001p100.h>
#include <HRRPart0bra0ket0g002p.h>
#include <HRRPart0bra0ket0g010p001.h>
#include <HRRPart0bra0ket0g010p010.h>
#include <HRRPart0bra0ket0g010p100.h>
#include <HRRPart0bra0ket0g011p.h>
#include <HRRPart0bra0ket0g020p.h>
#include <HRRPart0bra0ket0g100p001.h>
#include <HRRPart0bra0ket0g100p010.h>
#include <HRRPart0bra0ket0g100p100.h>
#include <HRRPart0bra0ket0g101p.h>
#include <HRRPart0bra0ket0g110p.h>
#include <HRRPart0bra0ket0g200p.h>
#include <_elecpotderiv2_G_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv2_G_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,846)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv2_G_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp002(inteval, &(inteval->stack[((hsi*45+1746)*1+lsi)*1]), &(inteval->stack[((hsi*21+810)*1+lsi)*1]), &(inteval->stack[((hsi*15+831)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]),1);
HRRPart0bra0ket0gp011(inteval, &(inteval->stack[((hsi*45+1701)*1+lsi)*1]), &(inteval->stack[((hsi*21+774)*1+lsi)*1]), &(inteval->stack[((hsi*15+795)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]),1);
HRRPart0bra0ket0gp020(inteval, &(inteval->stack[((hsi*45+1656)*1+lsi)*1]), &(inteval->stack[((hsi*21+738)*1+lsi)*1]), &(inteval->stack[((hsi*15+759)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]),1);
HRRPart0bra0ket0gp101(inteval, &(inteval->stack[((hsi*45+1611)*1+lsi)*1]), &(inteval->stack[((hsi*21+702)*1+lsi)*1]), &(inteval->stack[((hsi*15+723)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]),1);
HRRPart0bra0ket0gp110(inteval, &(inteval->stack[((hsi*45+1566)*1+lsi)*1]), &(inteval->stack[((hsi*21+666)*1+lsi)*1]), &(inteval->stack[((hsi*15+687)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]),1);
HRRPart0bra0ket0gp200(inteval, &(inteval->stack[((hsi*45+1521)*1+lsi)*1]), &(inteval->stack[((hsi*21+630)*1+lsi)*1]), &(inteval->stack[((hsi*15+651)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p001(inteval, &(inteval->stack[((hsi*45+1476)*1+lsi)*1]), &(inteval->stack[((hsi*21+594)*1+lsi)*1]), &(inteval->stack[((hsi*15+615)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p010(inteval, &(inteval->stack[((hsi*45+1431)*1+lsi)*1]), &(inteval->stack[((hsi*21+558)*1+lsi)*1]), &(inteval->stack[((hsi*15+579)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p100(inteval, &(inteval->stack[((hsi*45+1386)*1+lsi)*1]), &(inteval->stack[((hsi*21+522)*1+lsi)*1]), &(inteval->stack[((hsi*15+543)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]),1);
HRRPart0bra0ket0g002p(inteval, &(inteval->stack[((hsi*45+1341)*1+lsi)*1]), &(inteval->stack[((hsi*21+486)*1+lsi)*1]), &(inteval->stack[((hsi*15+507)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p001(inteval, &(inteval->stack[((hsi*45+1296)*1+lsi)*1]), &(inteval->stack[((hsi*21+450)*1+lsi)*1]), &(inteval->stack[((hsi*15+471)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p010(inteval, &(inteval->stack[((hsi*45+1251)*1+lsi)*1]), &(inteval->stack[((hsi*21+414)*1+lsi)*1]), &(inteval->stack[((hsi*15+435)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p100(inteval, &(inteval->stack[((hsi*45+1206)*1+lsi)*1]), &(inteval->stack[((hsi*21+378)*1+lsi)*1]), &(inteval->stack[((hsi*15+399)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]),1);
HRRPart0bra0ket0g011p(inteval, &(inteval->stack[((hsi*45+1161)*1+lsi)*1]), &(inteval->stack[((hsi*21+342)*1+lsi)*1]), &(inteval->stack[((hsi*15+363)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0bra0ket0g020p(inteval, &(inteval->stack[((hsi*45+1116)*1+lsi)*1]), &(inteval->stack[((hsi*21+306)*1+lsi)*1]), &(inteval->stack[((hsi*15+327)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p001(inteval, &(inteval->stack[((hsi*45+1071)*1+lsi)*1]), &(inteval->stack[((hsi*21+270)*1+lsi)*1]), &(inteval->stack[((hsi*15+291)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p010(inteval, &(inteval->stack[((hsi*45+1026)*1+lsi)*1]), &(inteval->stack[((hsi*21+234)*1+lsi)*1]), &(inteval->stack[((hsi*15+255)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p100(inteval, &(inteval->stack[((hsi*45+981)*1+lsi)*1]), &(inteval->stack[((hsi*21+198)*1+lsi)*1]), &(inteval->stack[((hsi*15+219)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0bra0ket0g101p(inteval, &(inteval->stack[((hsi*45+936)*1+lsi)*1]), &(inteval->stack[((hsi*21+162)*1+lsi)*1]), &(inteval->stack[((hsi*15+183)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0bra0ket0g110p(inteval, &(inteval->stack[((hsi*45+891)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]), &(inteval->stack[((hsi*15+147)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0bra0ket0g200p(inteval, &(inteval->stack[((hsi*45+846)*1+lsi)*1]), &(inteval->stack[((hsi*21+90)*1+lsi)*1]), &(inteval->stack[((hsi*15+111)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*45+846)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*45+891)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*45+936)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*45+981)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*45+1026)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*45+1071)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*45+1116)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*45+1161)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*45+1206)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*45+1251)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*45+1296)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*45+1341)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*45+1386)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*45+1431)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*45+1476)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*45+1521)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*45+1566)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*45+1611)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*45+1656)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*45+1701)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*45+1746)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
