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
#include <HRRPart0bra0ket0gd002.h>
#include <HRRPart0bra0ket0gd010.h>
#include <HRRPart0bra0ket0gd011.h>
#include <HRRPart0bra0ket0gd020.h>
#include <HRRPart0bra0ket0gd100.h>
#include <HRRPart0bra0ket0gd101.h>
#include <HRRPart0bra0ket0gd110.h>
#include <HRRPart0bra0ket0gd200.h>
#include <HRRPart0bra0ket0gf001.h>
#include <HRRPart0bra0ket0gf002.h>
#include <HRRPart0bra0ket0gf010.h>
#include <HRRPart0bra0ket0gf011.h>
#include <HRRPart0bra0ket0gf020.h>
#include <HRRPart0bra0ket0gf100.h>
#include <HRRPart0bra0ket0gf101.h>
#include <HRRPart0bra0ket0gf110.h>
#include <HRRPart0bra0ket0gf200.h>
#include <HRRPart0bra0ket0gg002.h>
#include <HRRPart0bra0ket0gg011.h>
#include <HRRPart0bra0ket0gg020.h>
#include <HRRPart0bra0ket0gg101.h>
#include <HRRPart0bra0ket0gg110.h>
#include <HRRPart0bra0ket0gg200.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp002.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp011.h>
#include <HRRPart0bra0ket0gp020.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0gp101.h>
#include <HRRPart0bra0ket0gp110.h>
#include <HRRPart0bra0ket0gp200.h>
#include <HRRPart0bra0ket0g001d.h>
#include <HRRPart0bra0ket0g001d001.h>
#include <HRRPart0bra0ket0g001d010.h>
#include <HRRPart0bra0ket0g001d100.h>
#include <HRRPart0bra0ket0g001f.h>
#include <HRRPart0bra0ket0g001f001.h>
#include <HRRPart0bra0ket0g001f010.h>
#include <HRRPart0bra0ket0g001f100.h>
#include <HRRPart0bra0ket0g001g001.h>
#include <HRRPart0bra0ket0g001g010.h>
#include <HRRPart0bra0ket0g001g100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g001p001.h>
#include <HRRPart0bra0ket0g001p010.h>
#include <HRRPart0bra0ket0g001p100.h>
#include <HRRPart0bra0ket0g002d.h>
#include <HRRPart0bra0ket0g002f.h>
#include <HRRPart0bra0ket0g002g.h>
#include <HRRPart0bra0ket0g002p.h>
#include <HRRPart0bra0ket0g010d.h>
#include <HRRPart0bra0ket0g010d001.h>
#include <HRRPart0bra0ket0g010d010.h>
#include <HRRPart0bra0ket0g010d100.h>
#include <HRRPart0bra0ket0g010f.h>
#include <HRRPart0bra0ket0g010f001.h>
#include <HRRPart0bra0ket0g010f010.h>
#include <HRRPart0bra0ket0g010f100.h>
#include <HRRPart0bra0ket0g010g001.h>
#include <HRRPart0bra0ket0g010g010.h>
#include <HRRPart0bra0ket0g010g100.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g010p001.h>
#include <HRRPart0bra0ket0g010p010.h>
#include <HRRPart0bra0ket0g010p100.h>
#include <HRRPart0bra0ket0g011d.h>
#include <HRRPart0bra0ket0g011f.h>
#include <HRRPart0bra0ket0g011g.h>
#include <HRRPart0bra0ket0g011p.h>
#include <HRRPart0bra0ket0g020d.h>
#include <HRRPart0bra0ket0g020f.h>
#include <HRRPart0bra0ket0g020g.h>
#include <HRRPart0bra0ket0g020p.h>
#include <HRRPart0bra0ket0g100d.h>
#include <HRRPart0bra0ket0g100d001.h>
#include <HRRPart0bra0ket0g100d010.h>
#include <HRRPart0bra0ket0g100d100.h>
#include <HRRPart0bra0ket0g100f.h>
#include <HRRPart0bra0ket0g100f001.h>
#include <HRRPart0bra0ket0g100f010.h>
#include <HRRPart0bra0ket0g100f100.h>
#include <HRRPart0bra0ket0g100g001.h>
#include <HRRPart0bra0ket0g100g010.h>
#include <HRRPart0bra0ket0g100g100.h>
#include <HRRPart0bra0ket0g100p.h>
#include <HRRPart0bra0ket0g100p001.h>
#include <HRRPart0bra0ket0g100p010.h>
#include <HRRPart0bra0ket0g100p100.h>
#include <HRRPart0bra0ket0g101d.h>
#include <HRRPart0bra0ket0g101f.h>
#include <HRRPart0bra0ket0g101g.h>
#include <HRRPart0bra0ket0g101p.h>
#include <HRRPart0bra0ket0g110d.h>
#include <HRRPart0bra0ket0g110f.h>
#include <HRRPart0bra0ket0g110g.h>
#include <HRRPart0bra0ket0g110p.h>
#include <HRRPart0bra0ket0g200d.h>
#include <HRRPart0bra0ket0g200f.h>
#include <HRRPart0bra0ket0g200g.h>
#include <HRRPart0bra0ket0g200p.h>
#include <HRRPart0bra0ket0hd001.h>
#include <HRRPart0bra0ket0hd002.h>
#include <HRRPart0bra0ket0hd010.h>
#include <HRRPart0bra0ket0hd011.h>
#include <HRRPart0bra0ket0hd020.h>
#include <HRRPart0bra0ket0hd100.h>
#include <HRRPart0bra0ket0hd101.h>
#include <HRRPart0bra0ket0hd110.h>
#include <HRRPart0bra0ket0hd200.h>
#include <HRRPart0bra0ket0hf002.h>
#include <HRRPart0bra0ket0hf011.h>
#include <HRRPart0bra0ket0hf020.h>
#include <HRRPart0bra0ket0hf101.h>
#include <HRRPart0bra0ket0hf110.h>
#include <HRRPart0bra0ket0hf200.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp002.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp011.h>
#include <HRRPart0bra0ket0hp020.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0hp101.h>
#include <HRRPart0bra0ket0hp110.h>
#include <HRRPart0bra0ket0hp200.h>
#include <HRRPart0bra0ket0h001d.h>
#include <HRRPart0bra0ket0h001d001.h>
#include <HRRPart0bra0ket0h001d010.h>
#include <HRRPart0bra0ket0h001d100.h>
#include <HRRPart0bra0ket0h001f001.h>
#include <HRRPart0bra0ket0h001f010.h>
#include <HRRPart0bra0ket0h001f100.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h001p001.h>
#include <HRRPart0bra0ket0h001p010.h>
#include <HRRPart0bra0ket0h001p100.h>
#include <HRRPart0bra0ket0h002d.h>
#include <HRRPart0bra0ket0h002f.h>
#include <HRRPart0bra0ket0h002p.h>
#include <HRRPart0bra0ket0h010d.h>
#include <HRRPart0bra0ket0h010d001.h>
#include <HRRPart0bra0ket0h010d010.h>
#include <HRRPart0bra0ket0h010d100.h>
#include <HRRPart0bra0ket0h010f001.h>
#include <HRRPart0bra0ket0h010f010.h>
#include <HRRPart0bra0ket0h010f100.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h010p001.h>
#include <HRRPart0bra0ket0h010p010.h>
#include <HRRPart0bra0ket0h010p100.h>
#include <HRRPart0bra0ket0h011d.h>
#include <HRRPart0bra0ket0h011f.h>
#include <HRRPart0bra0ket0h011p.h>
#include <HRRPart0bra0ket0h020d.h>
#include <HRRPart0bra0ket0h020f.h>
#include <HRRPart0bra0ket0h020p.h>
#include <HRRPart0bra0ket0h100d.h>
#include <HRRPart0bra0ket0h100d001.h>
#include <HRRPart0bra0ket0h100d010.h>
#include <HRRPart0bra0ket0h100d100.h>
#include <HRRPart0bra0ket0h100f001.h>
#include <HRRPart0bra0ket0h100f010.h>
#include <HRRPart0bra0ket0h100f100.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart0bra0ket0h100p001.h>
#include <HRRPart0bra0ket0h100p010.h>
#include <HRRPart0bra0ket0h100p100.h>
#include <HRRPart0bra0ket0h101d.h>
#include <HRRPart0bra0ket0h101f.h>
#include <HRRPart0bra0ket0h101p.h>
#include <HRRPart0bra0ket0h110d.h>
#include <HRRPart0bra0ket0h110f.h>
#include <HRRPart0bra0ket0h110p.h>
#include <HRRPart0bra0ket0h200d.h>
#include <HRRPart0bra0ket0h200f.h>
#include <HRRPart0bra0ket0h200p.h>
#include <HRRPart0bra0ket0id002.h>
#include <HRRPart0bra0ket0id011.h>
#include <HRRPart0bra0ket0id020.h>
#include <HRRPart0bra0ket0id101.h>
#include <HRRPart0bra0ket0id110.h>
#include <HRRPart0bra0ket0id200.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip002.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip011.h>
#include <HRRPart0bra0ket0ip020.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0ip101.h>
#include <HRRPart0bra0ket0ip110.h>
#include <HRRPart0bra0ket0ip200.h>
#include <HRRPart0bra0ket0i001d001.h>
#include <HRRPart0bra0ket0i001d010.h>
#include <HRRPart0bra0ket0i001d100.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i001p001.h>
#include <HRRPart0bra0ket0i001p010.h>
#include <HRRPart0bra0ket0i001p100.h>
#include <HRRPart0bra0ket0i002d.h>
#include <HRRPart0bra0ket0i002p.h>
#include <HRRPart0bra0ket0i010d001.h>
#include <HRRPart0bra0ket0i010d010.h>
#include <HRRPart0bra0ket0i010d100.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i010p001.h>
#include <HRRPart0bra0ket0i010p010.h>
#include <HRRPart0bra0ket0i010p100.h>
#include <HRRPart0bra0ket0i011d.h>
#include <HRRPart0bra0ket0i011p.h>
#include <HRRPart0bra0ket0i020d.h>
#include <HRRPart0bra0ket0i020p.h>
#include <HRRPart0bra0ket0i100d001.h>
#include <HRRPart0bra0ket0i100d010.h>
#include <HRRPart0bra0ket0i100d100.h>
#include <HRRPart0bra0ket0i100p.h>
#include <HRRPart0bra0ket0i100p001.h>
#include <HRRPart0bra0ket0i100p010.h>
#include <HRRPart0bra0ket0i100p100.h>
#include <HRRPart0bra0ket0i101d.h>
#include <HRRPart0bra0ket0i101p.h>
#include <HRRPart0bra0ket0i110d.h>
#include <HRRPart0bra0ket0i110p.h>
#include <HRRPart0bra0ket0i200d.h>
#include <HRRPart0bra0ket0i200p.h>
#include <HRRPart0bra0ket0kp002.h>
#include <HRRPart0bra0ket0kp011.h>
#include <HRRPart0bra0ket0kp020.h>
#include <HRRPart0bra0ket0kp101.h>
#include <HRRPart0bra0ket0kp110.h>
#include <HRRPart0bra0ket0kp200.h>
#include <HRRPart0bra0ket0k001p001.h>
#include <HRRPart0bra0ket0k001p010.h>
#include <HRRPart0bra0ket0k001p100.h>
#include <HRRPart0bra0ket0k002p.h>
#include <HRRPart0bra0ket0k010p001.h>
#include <HRRPart0bra0ket0k010p010.h>
#include <HRRPart0bra0ket0k010p100.h>
#include <HRRPart0bra0ket0k011p.h>
#include <HRRPart0bra0ket0k020p.h>
#include <HRRPart0bra0ket0k100p001.h>
#include <HRRPart0bra0ket0k100p010.h>
#include <HRRPart0bra0ket0k100p100.h>
#include <HRRPart0bra0ket0k101p.h>
#include <HRRPart0bra0ket0k110p.h>
#include <HRRPart0bra0ket0k200p.h>
#include <_elecpotderiv2_G_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv2_G_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3709)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv2_G_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+8434)*1+lsi)*1]), &(inteval->stack[((hsi*28+1434)*1+lsi)*1]), &(inteval->stack[((hsi*21+1483)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+8497)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]), &(inteval->stack[((hsi*15+294)*1+lsi)*1]),1);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*45+8542)*1+lsi)*1]), &(inteval->stack[((hsi*21+1483)*1+lsi)*1]), &(inteval->stack[((hsi*15+1519)*1+lsi)*1]), &(inteval->stack[((hsi*15+294)*1+lsi)*1]),1);
HRRPart0bra0ket0gd001(inteval, &(inteval->stack[((hsi*90+8587)*1+lsi)*1]), &(inteval->stack[((hsi*63+8434)*1+lsi)*1]), &(inteval->stack[((hsi*45+8542)*1+lsi)*1]), &(inteval->stack[((hsi*45+8497)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8677)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+8740)*1+lsi)*1]), &(inteval->stack[((hsi*36+1370)*1+lsi)*1]), &(inteval->stack[((hsi*28+1434)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+8824)*1+lsi)*1]), &(inteval->stack[((hsi*84+8740)*1+lsi)*1]), &(inteval->stack[((hsi*63+8434)*1+lsi)*1]), &(inteval->stack[((hsi*63+8677)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+8950)*1+lsi)*1]), &(inteval->stack[((hsi*63+8677)*1+lsi)*1]), &(inteval->stack[((hsi*45+8497)*1+lsi)*1]),1);
HRRPart0bra0ket0gf001(inteval, &(inteval->stack[((hsi*150+9040)*1+lsi)*1]), &(inteval->stack[((hsi*126+8824)*1+lsi)*1]), &(inteval->stack[((hsi*90+8587)*1+lsi)*1]), &(inteval->stack[((hsi*90+8950)*1+lsi)*1]),1);
HRRPart0bra0ket0hp002(inteval, &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*28+3645)*1+lsi)*1]), &(inteval->stack[((hsi*21+3673)*1+lsi)*1]), &(inteval->stack[((hsi*21+1483)*1+lsi)*1]),1);
HRRPart0bra0ket0ip002(inteval, &(inteval->stack[((hsi*84+9253)*1+lsi)*1]), &(inteval->stack[((hsi*36+3609)*1+lsi)*1]), &(inteval->stack[((hsi*28+3645)*1+lsi)*1]), &(inteval->stack[((hsi*28+1434)*1+lsi)*1]),1);
HRRPart0bra0ket0hd002(inteval, &(inteval->stack[((hsi*126+9337)*1+lsi)*1]), &(inteval->stack[((hsi*84+9253)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*63+8434)*1+lsi)*1]),1);
HRRPart0bra0ket0gp002(inteval, &(inteval->stack[((hsi*45+9463)*1+lsi)*1]), &(inteval->stack[((hsi*21+3673)*1+lsi)*1]), &(inteval->stack[((hsi*15+3694)*1+lsi)*1]), &(inteval->stack[((hsi*15+1519)*1+lsi)*1]),1);
HRRPart0bra0ket0gd002(inteval, &(inteval->stack[((hsi*90+9508)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*45+9463)*1+lsi)*1]), &(inteval->stack[((hsi*45+8542)*1+lsi)*1]),1);
HRRPart0bra0ket0gf002(inteval, &(inteval->stack[((hsi*150+9598)*1+lsi)*1]), &(inteval->stack[((hsi*126+9337)*1+lsi)*1]), &(inteval->stack[((hsi*90+9508)*1+lsi)*1]), &(inteval->stack[((hsi*90+8587)*1+lsi)*1]),1);
HRRPart0bra0ket0kp002(inteval, &(inteval->stack[((hsi*108+9463)*1+lsi)*1]), &(inteval->stack[((hsi*45+3564)*1+lsi)*1]), &(inteval->stack[((hsi*36+3609)*1+lsi)*1]), &(inteval->stack[((hsi*36+1370)*1+lsi)*1]),1);
HRRPart0bra0ket0id002(inteval, &(inteval->stack[((hsi*168+9748)*1+lsi)*1]), &(inteval->stack[((hsi*108+9463)*1+lsi)*1]), &(inteval->stack[((hsi*84+9253)*1+lsi)*1]), &(inteval->stack[((hsi*84+8740)*1+lsi)*1]),1);
HRRPart0bra0ket0hf002(inteval, &(inteval->stack[((hsi*210+9916)*1+lsi)*1]), &(inteval->stack[((hsi*168+9748)*1+lsi)*1]), &(inteval->stack[((hsi*126+9337)*1+lsi)*1]), &(inteval->stack[((hsi*126+8824)*1+lsi)*1]),1);
HRRPart0bra0ket0gg002(inteval, &(inteval->stack[((hsi*225+8209)*1+lsi)*1]), &(inteval->stack[((hsi*210+9916)*1+lsi)*1]), &(inteval->stack[((hsi*150+9598)*1+lsi)*1]), &(inteval->stack[((hsi*150+9040)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*28+1189)*1+lsi)*1]), &(inteval->stack[((hsi*21+1238)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*45+9253)*1+lsi)*1]), &(inteval->stack[((hsi*21+1238)*1+lsi)*1]), &(inteval->stack[((hsi*15+1274)*1+lsi)*1]), &(inteval->stack[((hsi*15+294)*1+lsi)*1]),1);
HRRPart0bra0ket0gd010(inteval, &(inteval->stack[((hsi*90+9298)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*45+9253)*1+lsi)*1]), &(inteval->stack[((hsi*45+8497)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+9388)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]), &(inteval->stack[((hsi*28+1189)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+9472)*1+lsi)*1]), &(inteval->stack[((hsi*84+9388)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*63+8677)*1+lsi)*1]),1);
HRRPart0bra0ket0gf010(inteval, &(inteval->stack[((hsi*150+9748)*1+lsi)*1]), &(inteval->stack[((hsi*126+9472)*1+lsi)*1]), &(inteval->stack[((hsi*90+9298)*1+lsi)*1]), &(inteval->stack[((hsi*90+8950)*1+lsi)*1]),1);
HRRPart0bra0ket0hp011(inteval, &(inteval->stack[((hsi*63+3564)*1+lsi)*1]), &(inteval->stack[((hsi*28+3500)*1+lsi)*1]), &(inteval->stack[((hsi*21+3528)*1+lsi)*1]), &(inteval->stack[((hsi*21+1483)*1+lsi)*1]), &(inteval->stack[((hsi*21+1238)*1+lsi)*1]),1);
HRRPart0bra0ket0ip011(inteval, &(inteval->stack[((hsi*84+10126)*1+lsi)*1]), &(inteval->stack[((hsi*36+3464)*1+lsi)*1]), &(inteval->stack[((hsi*28+3500)*1+lsi)*1]), &(inteval->stack[((hsi*28+1434)*1+lsi)*1]), &(inteval->stack[((hsi*28+1189)*1+lsi)*1]),1);
HRRPart0bra0ket0hd011(inteval, &(inteval->stack[((hsi*126+10210)*1+lsi)*1]), &(inteval->stack[((hsi*84+10126)*1+lsi)*1]), &(inteval->stack[((hsi*63+3564)*1+lsi)*1]), &(inteval->stack[((hsi*63+8434)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]),1);
HRRPart0bra0ket0gp011(inteval, &(inteval->stack[((hsi*45+3627)*1+lsi)*1]), &(inteval->stack[((hsi*21+3528)*1+lsi)*1]), &(inteval->stack[((hsi*15+3549)*1+lsi)*1]), &(inteval->stack[((hsi*15+1519)*1+lsi)*1]), &(inteval->stack[((hsi*15+1274)*1+lsi)*1]),1);
HRRPart0bra0ket0gd011(inteval, &(inteval->stack[((hsi*90+10336)*1+lsi)*1]), &(inteval->stack[((hsi*63+3564)*1+lsi)*1]), &(inteval->stack[((hsi*45+3627)*1+lsi)*1]), &(inteval->stack[((hsi*45+8542)*1+lsi)*1]), &(inteval->stack[((hsi*45+9253)*1+lsi)*1]),1);
HRRPart0bra0ket0gf011(inteval, &(inteval->stack[((hsi*150+3500)*1+lsi)*1]), &(inteval->stack[((hsi*126+10210)*1+lsi)*1]), &(inteval->stack[((hsi*90+10336)*1+lsi)*1]), &(inteval->stack[((hsi*90+8587)*1+lsi)*1]), &(inteval->stack[((hsi*90+9298)*1+lsi)*1]),1);
HRRPart0bra0ket0kp011(inteval, &(inteval->stack[((hsi*108+10336)*1+lsi)*1]), &(inteval->stack[((hsi*45+3419)*1+lsi)*1]), &(inteval->stack[((hsi*36+3464)*1+lsi)*1]), &(inteval->stack[((hsi*36+1370)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]),1);
HRRPart0bra0ket0id011(inteval, &(inteval->stack[((hsi*168+10444)*1+lsi)*1]), &(inteval->stack[((hsi*108+10336)*1+lsi)*1]), &(inteval->stack[((hsi*84+10126)*1+lsi)*1]), &(inteval->stack[((hsi*84+8740)*1+lsi)*1]), &(inteval->stack[((hsi*84+9388)*1+lsi)*1]),1);
HRRPart0bra0ket0hf011(inteval, &(inteval->stack[((hsi*210+10612)*1+lsi)*1]), &(inteval->stack[((hsi*168+10444)*1+lsi)*1]), &(inteval->stack[((hsi*126+10210)*1+lsi)*1]), &(inteval->stack[((hsi*126+8824)*1+lsi)*1]), &(inteval->stack[((hsi*126+9472)*1+lsi)*1]),1);
HRRPart0bra0ket0gg011(inteval, &(inteval->stack[((hsi*225+7984)*1+lsi)*1]), &(inteval->stack[((hsi*210+10612)*1+lsi)*1]), &(inteval->stack[((hsi*150+3500)*1+lsi)*1]), &(inteval->stack[((hsi*150+9040)*1+lsi)*1]), &(inteval->stack[((hsi*150+9748)*1+lsi)*1]),1);
HRRPart0bra0ket0hp020(inteval, &(inteval->stack[((hsi*63+10126)*1+lsi)*1]), &(inteval->stack[((hsi*28+3355)*1+lsi)*1]), &(inteval->stack[((hsi*21+3383)*1+lsi)*1]), &(inteval->stack[((hsi*21+1238)*1+lsi)*1]),1);
HRRPart0bra0ket0ip020(inteval, &(inteval->stack[((hsi*84+10189)*1+lsi)*1]), &(inteval->stack[((hsi*36+3319)*1+lsi)*1]), &(inteval->stack[((hsi*28+3355)*1+lsi)*1]), &(inteval->stack[((hsi*28+1189)*1+lsi)*1]),1);
HRRPart0bra0ket0hd020(inteval, &(inteval->stack[((hsi*126+10273)*1+lsi)*1]), &(inteval->stack[((hsi*84+10189)*1+lsi)*1]), &(inteval->stack[((hsi*63+10126)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]),1);
HRRPart0bra0ket0gp020(inteval, &(inteval->stack[((hsi*45+10399)*1+lsi)*1]), &(inteval->stack[((hsi*21+3383)*1+lsi)*1]), &(inteval->stack[((hsi*15+3404)*1+lsi)*1]), &(inteval->stack[((hsi*15+1274)*1+lsi)*1]),1);
HRRPart0bra0ket0gd020(inteval, &(inteval->stack[((hsi*90+10444)*1+lsi)*1]), &(inteval->stack[((hsi*63+10126)*1+lsi)*1]), &(inteval->stack[((hsi*45+10399)*1+lsi)*1]), &(inteval->stack[((hsi*45+9253)*1+lsi)*1]),1);
HRRPart0bra0ket0gf020(inteval, &(inteval->stack[((hsi*150+10822)*1+lsi)*1]), &(inteval->stack[((hsi*126+10273)*1+lsi)*1]), &(inteval->stack[((hsi*90+10444)*1+lsi)*1]), &(inteval->stack[((hsi*90+9298)*1+lsi)*1]),1);
HRRPart0bra0ket0kp020(inteval, &(inteval->stack[((hsi*108+10399)*1+lsi)*1]), &(inteval->stack[((hsi*45+3274)*1+lsi)*1]), &(inteval->stack[((hsi*36+3319)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]),1);
HRRPart0bra0ket0id020(inteval, &(inteval->stack[((hsi*168+3274)*1+lsi)*1]), &(inteval->stack[((hsi*108+10399)*1+lsi)*1]), &(inteval->stack[((hsi*84+10189)*1+lsi)*1]), &(inteval->stack[((hsi*84+9388)*1+lsi)*1]),1);
HRRPart0bra0ket0hf020(inteval, &(inteval->stack[((hsi*210+10399)*1+lsi)*1]), &(inteval->stack[((hsi*168+3274)*1+lsi)*1]), &(inteval->stack[((hsi*126+10273)*1+lsi)*1]), &(inteval->stack[((hsi*126+9472)*1+lsi)*1]),1);
HRRPart0bra0ket0gg020(inteval, &(inteval->stack[((hsi*225+7759)*1+lsi)*1]), &(inteval->stack[((hsi*210+10399)*1+lsi)*1]), &(inteval->stack[((hsi*150+10822)*1+lsi)*1]), &(inteval->stack[((hsi*150+9748)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+10126)*1+lsi)*1]), &(inteval->stack[((hsi*28+944)*1+lsi)*1]), &(inteval->stack[((hsi*21+993)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*45+3274)*1+lsi)*1]), &(inteval->stack[((hsi*21+993)*1+lsi)*1]), &(inteval->stack[((hsi*15+1029)*1+lsi)*1]), &(inteval->stack[((hsi*15+294)*1+lsi)*1]),1);
HRRPart0bra0ket0gd100(inteval, &(inteval->stack[((hsi*90+10189)*1+lsi)*1]), &(inteval->stack[((hsi*63+10126)*1+lsi)*1]), &(inteval->stack[((hsi*45+3274)*1+lsi)*1]), &(inteval->stack[((hsi*45+8497)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+3319)*1+lsi)*1]), &(inteval->stack[((hsi*36+880)*1+lsi)*1]), &(inteval->stack[((hsi*28+944)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*84+3319)*1+lsi)*1]), &(inteval->stack[((hsi*63+10126)*1+lsi)*1]), &(inteval->stack[((hsi*63+8677)*1+lsi)*1]),1);
HRRPart0bra0ket0gf100(inteval, &(inteval->stack[((hsi*150+11098)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*90+10189)*1+lsi)*1]), &(inteval->stack[((hsi*90+8950)*1+lsi)*1]),1);
HRRPart0bra0ket0hp101(inteval, &(inteval->stack[((hsi*63+10279)*1+lsi)*1]), &(inteval->stack[((hsi*28+3210)*1+lsi)*1]), &(inteval->stack[((hsi*21+3238)*1+lsi)*1]), &(inteval->stack[((hsi*21+1483)*1+lsi)*1]), &(inteval->stack[((hsi*21+993)*1+lsi)*1]),1);
HRRPart0bra0ket0ip101(inteval, &(inteval->stack[((hsi*84+3403)*1+lsi)*1]), &(inteval->stack[((hsi*36+3174)*1+lsi)*1]), &(inteval->stack[((hsi*28+3210)*1+lsi)*1]), &(inteval->stack[((hsi*28+1434)*1+lsi)*1]), &(inteval->stack[((hsi*28+944)*1+lsi)*1]),1);
HRRPart0bra0ket0hd101(inteval, &(inteval->stack[((hsi*126+11248)*1+lsi)*1]), &(inteval->stack[((hsi*84+3403)*1+lsi)*1]), &(inteval->stack[((hsi*63+10279)*1+lsi)*1]), &(inteval->stack[((hsi*63+8434)*1+lsi)*1]), &(inteval->stack[((hsi*63+10126)*1+lsi)*1]),1);
HRRPart0bra0ket0gp101(inteval, &(inteval->stack[((hsi*45+3650)*1+lsi)*1]), &(inteval->stack[((hsi*21+3238)*1+lsi)*1]), &(inteval->stack[((hsi*15+3259)*1+lsi)*1]), &(inteval->stack[((hsi*15+1519)*1+lsi)*1]), &(inteval->stack[((hsi*15+1029)*1+lsi)*1]),1);
HRRPart0bra0ket0gd101(inteval, &(inteval->stack[((hsi*90+11374)*1+lsi)*1]), &(inteval->stack[((hsi*63+10279)*1+lsi)*1]), &(inteval->stack[((hsi*45+3650)*1+lsi)*1]), &(inteval->stack[((hsi*45+8542)*1+lsi)*1]), &(inteval->stack[((hsi*45+3274)*1+lsi)*1]),1);
HRRPart0bra0ket0gf101(inteval, &(inteval->stack[((hsi*150+11464)*1+lsi)*1]), &(inteval->stack[((hsi*126+11248)*1+lsi)*1]), &(inteval->stack[((hsi*90+11374)*1+lsi)*1]), &(inteval->stack[((hsi*90+8587)*1+lsi)*1]), &(inteval->stack[((hsi*90+10189)*1+lsi)*1]),1);
HRRPart0bra0ket0kp101(inteval, &(inteval->stack[((hsi*108+10279)*1+lsi)*1]), &(inteval->stack[((hsi*45+3129)*1+lsi)*1]), &(inteval->stack[((hsi*36+3174)*1+lsi)*1]), &(inteval->stack[((hsi*36+1370)*1+lsi)*1]), &(inteval->stack[((hsi*36+880)*1+lsi)*1]),1);
HRRPart0bra0ket0id101(inteval, &(inteval->stack[((hsi*168+11614)*1+lsi)*1]), &(inteval->stack[((hsi*108+10279)*1+lsi)*1]), &(inteval->stack[((hsi*84+3403)*1+lsi)*1]), &(inteval->stack[((hsi*84+8740)*1+lsi)*1]), &(inteval->stack[((hsi*84+3319)*1+lsi)*1]),1);
HRRPart0bra0ket0hf101(inteval, &(inteval->stack[((hsi*210+11782)*1+lsi)*1]), &(inteval->stack[((hsi*168+11614)*1+lsi)*1]), &(inteval->stack[((hsi*126+11248)*1+lsi)*1]), &(inteval->stack[((hsi*126+8824)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]),1);
HRRPart0bra0ket0gg101(inteval, &(inteval->stack[((hsi*225+7534)*1+lsi)*1]), &(inteval->stack[((hsi*210+11782)*1+lsi)*1]), &(inteval->stack[((hsi*150+11464)*1+lsi)*1]), &(inteval->stack[((hsi*150+9040)*1+lsi)*1]), &(inteval->stack[((hsi*150+11098)*1+lsi)*1]),1);
HRRPart0bra0ket0hp110(inteval, &(inteval->stack[((hsi*63+11248)*1+lsi)*1]), &(inteval->stack[((hsi*28+3065)*1+lsi)*1]), &(inteval->stack[((hsi*21+3093)*1+lsi)*1]), &(inteval->stack[((hsi*21+1238)*1+lsi)*1]), &(inteval->stack[((hsi*21+993)*1+lsi)*1]),1);
HRRPart0bra0ket0ip110(inteval, &(inteval->stack[((hsi*84+11614)*1+lsi)*1]), &(inteval->stack[((hsi*36+3029)*1+lsi)*1]), &(inteval->stack[((hsi*28+3065)*1+lsi)*1]), &(inteval->stack[((hsi*28+1189)*1+lsi)*1]), &(inteval->stack[((hsi*28+944)*1+lsi)*1]),1);
HRRPart0bra0ket0hd110(inteval, &(inteval->stack[((hsi*126+11311)*1+lsi)*1]), &(inteval->stack[((hsi*84+11614)*1+lsi)*1]), &(inteval->stack[((hsi*63+11248)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*63+10126)*1+lsi)*1]),1);
HRRPart0bra0ket0gp110(inteval, &(inteval->stack[((hsi*45+3129)*1+lsi)*1]), &(inteval->stack[((hsi*21+3093)*1+lsi)*1]), &(inteval->stack[((hsi*15+3114)*1+lsi)*1]), &(inteval->stack[((hsi*15+1274)*1+lsi)*1]), &(inteval->stack[((hsi*15+1029)*1+lsi)*1]),1);
HRRPart0bra0ket0gd110(inteval, &(inteval->stack[((hsi*90+10279)*1+lsi)*1]), &(inteval->stack[((hsi*63+11248)*1+lsi)*1]), &(inteval->stack[((hsi*45+3129)*1+lsi)*1]), &(inteval->stack[((hsi*45+9253)*1+lsi)*1]), &(inteval->stack[((hsi*45+3274)*1+lsi)*1]),1);
HRRPart0bra0ket0gf110(inteval, &(inteval->stack[((hsi*150+3065)*1+lsi)*1]), &(inteval->stack[((hsi*126+11311)*1+lsi)*1]), &(inteval->stack[((hsi*90+10279)*1+lsi)*1]), &(inteval->stack[((hsi*90+9298)*1+lsi)*1]), &(inteval->stack[((hsi*90+10189)*1+lsi)*1]),1);
HRRPart0bra0ket0kp110(inteval, &(inteval->stack[((hsi*108+10279)*1+lsi)*1]), &(inteval->stack[((hsi*45+2984)*1+lsi)*1]), &(inteval->stack[((hsi*36+3029)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]), &(inteval->stack[((hsi*36+880)*1+lsi)*1]),1);
HRRPart0bra0ket0id110(inteval, &(inteval->stack[((hsi*168+11992)*1+lsi)*1]), &(inteval->stack[((hsi*108+10279)*1+lsi)*1]), &(inteval->stack[((hsi*84+11614)*1+lsi)*1]), &(inteval->stack[((hsi*84+9388)*1+lsi)*1]), &(inteval->stack[((hsi*84+3319)*1+lsi)*1]),1);
HRRPart0bra0ket0hf110(inteval, &(inteval->stack[((hsi*210+12160)*1+lsi)*1]), &(inteval->stack[((hsi*168+11992)*1+lsi)*1]), &(inteval->stack[((hsi*126+11311)*1+lsi)*1]), &(inteval->stack[((hsi*126+9472)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]),1);
HRRPart0bra0ket0gg110(inteval, &(inteval->stack[((hsi*225+7309)*1+lsi)*1]), &(inteval->stack[((hsi*210+12160)*1+lsi)*1]), &(inteval->stack[((hsi*150+3065)*1+lsi)*1]), &(inteval->stack[((hsi*150+9748)*1+lsi)*1]), &(inteval->stack[((hsi*150+11098)*1+lsi)*1]),1);
HRRPart0bra0ket0hp200(inteval, &(inteval->stack[((hsi*63+11248)*1+lsi)*1]), &(inteval->stack[((hsi*28+2920)*1+lsi)*1]), &(inteval->stack[((hsi*21+2948)*1+lsi)*1]), &(inteval->stack[((hsi*21+993)*1+lsi)*1]),1);
HRRPart0bra0ket0ip200(inteval, &(inteval->stack[((hsi*84+11992)*1+lsi)*1]), &(inteval->stack[((hsi*36+2884)*1+lsi)*1]), &(inteval->stack[((hsi*28+2920)*1+lsi)*1]), &(inteval->stack[((hsi*28+944)*1+lsi)*1]),1);
HRRPart0bra0ket0hd200(inteval, &(inteval->stack[((hsi*126+11614)*1+lsi)*1]), &(inteval->stack[((hsi*84+11992)*1+lsi)*1]), &(inteval->stack[((hsi*63+11248)*1+lsi)*1]), &(inteval->stack[((hsi*63+10126)*1+lsi)*1]),1);
HRRPart0bra0ket0gp200(inteval, &(inteval->stack[((hsi*45+11311)*1+lsi)*1]), &(inteval->stack[((hsi*21+2948)*1+lsi)*1]), &(inteval->stack[((hsi*15+2969)*1+lsi)*1]), &(inteval->stack[((hsi*15+1029)*1+lsi)*1]),1);
HRRPart0bra0ket0gd200(inteval, &(inteval->stack[((hsi*90+2920)*1+lsi)*1]), &(inteval->stack[((hsi*63+11248)*1+lsi)*1]), &(inteval->stack[((hsi*45+11311)*1+lsi)*1]), &(inteval->stack[((hsi*45+3274)*1+lsi)*1]),1);
HRRPart0bra0ket0gf200(inteval, &(inteval->stack[((hsi*150+11248)*1+lsi)*1]), &(inteval->stack[((hsi*126+11614)*1+lsi)*1]), &(inteval->stack[((hsi*90+2920)*1+lsi)*1]), &(inteval->stack[((hsi*90+10189)*1+lsi)*1]),1);
HRRPart0bra0ket0kp200(inteval, &(inteval->stack[((hsi*108+2920)*1+lsi)*1]), &(inteval->stack[((hsi*45+2839)*1+lsi)*1]), &(inteval->stack[((hsi*36+2884)*1+lsi)*1]), &(inteval->stack[((hsi*36+880)*1+lsi)*1]),1);
HRRPart0bra0ket0id200(inteval, &(inteval->stack[((hsi*168+12370)*1+lsi)*1]), &(inteval->stack[((hsi*108+2920)*1+lsi)*1]), &(inteval->stack[((hsi*84+11992)*1+lsi)*1]), &(inteval->stack[((hsi*84+3319)*1+lsi)*1]),1);
HRRPart0bra0ket0hf200(inteval, &(inteval->stack[((hsi*210+2839)*1+lsi)*1]), &(inteval->stack[((hsi*168+12370)*1+lsi)*1]), &(inteval->stack[((hsi*126+11614)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]),1);
HRRPart0bra0ket0gg200(inteval, &(inteval->stack[((hsi*225+7084)*1+lsi)*1]), &(inteval->stack[((hsi*210+2839)*1+lsi)*1]), &(inteval->stack[((hsi*150+11248)*1+lsi)*1]), &(inteval->stack[((hsi*150+11098)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+11992)*1+lsi)*1]), &(inteval->stack[((hsi*28+699)*1+lsi)*1]), &(inteval->stack[((hsi*21+748)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*45+11614)*1+lsi)*1]), &(inteval->stack[((hsi*21+748)*1+lsi)*1]), &(inteval->stack[((hsi*15+784)*1+lsi)*1]), &(inteval->stack[((hsi*15+294)*1+lsi)*1]),1);
HRRPart0bra0ket0g001d(inteval, &(inteval->stack[((hsi*90+11659)*1+lsi)*1]), &(inteval->stack[((hsi*63+11992)*1+lsi)*1]), &(inteval->stack[((hsi*45+11614)*1+lsi)*1]), &(inteval->stack[((hsi*45+8497)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+10279)*1+lsi)*1]), &(inteval->stack[((hsi*36+635)*1+lsi)*1]), &(inteval->stack[((hsi*28+699)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d(inteval, &(inteval->stack[((hsi*126+12370)*1+lsi)*1]), &(inteval->stack[((hsi*84+10279)*1+lsi)*1]), &(inteval->stack[((hsi*63+11992)*1+lsi)*1]), &(inteval->stack[((hsi*63+8677)*1+lsi)*1]),1);
HRRPart0bra0ket0g001f(inteval, &(inteval->stack[((hsi*150+12496)*1+lsi)*1]), &(inteval->stack[((hsi*126+12370)*1+lsi)*1]), &(inteval->stack[((hsi*90+11659)*1+lsi)*1]), &(inteval->stack[((hsi*90+8950)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p001(inteval, &(inteval->stack[((hsi*63+12055)*1+lsi)*1]), &(inteval->stack[((hsi*28+2775)*1+lsi)*1]), &(inteval->stack[((hsi*21+2803)*1+lsi)*1]), &(inteval->stack[((hsi*21+1483)*1+lsi)*1]), &(inteval->stack[((hsi*21+748)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p001(inteval, &(inteval->stack[((hsi*84+3403)*1+lsi)*1]), &(inteval->stack[((hsi*36+2739)*1+lsi)*1]), &(inteval->stack[((hsi*28+2775)*1+lsi)*1]), &(inteval->stack[((hsi*28+1434)*1+lsi)*1]), &(inteval->stack[((hsi*28+699)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d001(inteval, &(inteval->stack[((hsi*126+12646)*1+lsi)*1]), &(inteval->stack[((hsi*84+3403)*1+lsi)*1]), &(inteval->stack[((hsi*63+12055)*1+lsi)*1]), &(inteval->stack[((hsi*63+8434)*1+lsi)*1]), &(inteval->stack[((hsi*63+11992)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p001(inteval, &(inteval->stack[((hsi*45+11398)*1+lsi)*1]), &(inteval->stack[((hsi*21+2803)*1+lsi)*1]), &(inteval->stack[((hsi*15+2824)*1+lsi)*1]), &(inteval->stack[((hsi*15+1519)*1+lsi)*1]), &(inteval->stack[((hsi*15+784)*1+lsi)*1]),1);
HRRPart0bra0ket0g001d001(inteval, &(inteval->stack[((hsi*90+12772)*1+lsi)*1]), &(inteval->stack[((hsi*63+12055)*1+lsi)*1]), &(inteval->stack[((hsi*45+11398)*1+lsi)*1]), &(inteval->stack[((hsi*45+8542)*1+lsi)*1]), &(inteval->stack[((hsi*45+11614)*1+lsi)*1]),1);
HRRPart0bra0ket0g001f001(inteval, &(inteval->stack[((hsi*150+12862)*1+lsi)*1]), &(inteval->stack[((hsi*126+12646)*1+lsi)*1]), &(inteval->stack[((hsi*90+12772)*1+lsi)*1]), &(inteval->stack[((hsi*90+8587)*1+lsi)*1]), &(inteval->stack[((hsi*90+11659)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p001(inteval, &(inteval->stack[((hsi*108+13012)*1+lsi)*1]), &(inteval->stack[((hsi*45+2694)*1+lsi)*1]), &(inteval->stack[((hsi*36+2739)*1+lsi)*1]), &(inteval->stack[((hsi*36+1370)*1+lsi)*1]), &(inteval->stack[((hsi*36+635)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d001(inteval, &(inteval->stack[((hsi*168+13120)*1+lsi)*1]), &(inteval->stack[((hsi*108+13012)*1+lsi)*1]), &(inteval->stack[((hsi*84+3403)*1+lsi)*1]), &(inteval->stack[((hsi*84+8740)*1+lsi)*1]), &(inteval->stack[((hsi*84+10279)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f001(inteval, &(inteval->stack[((hsi*210+13288)*1+lsi)*1]), &(inteval->stack[((hsi*168+13120)*1+lsi)*1]), &(inteval->stack[((hsi*126+12646)*1+lsi)*1]), &(inteval->stack[((hsi*126+8824)*1+lsi)*1]), &(inteval->stack[((hsi*126+12370)*1+lsi)*1]),1);
HRRPart0bra0ket0g001g001(inteval, &(inteval->stack[((hsi*225+6859)*1+lsi)*1]), &(inteval->stack[((hsi*210+13288)*1+lsi)*1]), &(inteval->stack[((hsi*150+12862)*1+lsi)*1]), &(inteval->stack[((hsi*150+9040)*1+lsi)*1]), &(inteval->stack[((hsi*150+12496)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p010(inteval, &(inteval->stack[((hsi*63+13012)*1+lsi)*1]), &(inteval->stack[((hsi*28+2630)*1+lsi)*1]), &(inteval->stack[((hsi*21+2658)*1+lsi)*1]), &(inteval->stack[((hsi*21+748)*1+lsi)*1]), &(inteval->stack[((hsi*21+1238)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p010(inteval, &(inteval->stack[((hsi*84+12646)*1+lsi)*1]), &(inteval->stack[((hsi*36+2594)*1+lsi)*1]), &(inteval->stack[((hsi*28+2630)*1+lsi)*1]), &(inteval->stack[((hsi*28+699)*1+lsi)*1]), &(inteval->stack[((hsi*28+1189)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d010(inteval, &(inteval->stack[((hsi*126+13075)*1+lsi)*1]), &(inteval->stack[((hsi*84+12646)*1+lsi)*1]), &(inteval->stack[((hsi*63+13012)*1+lsi)*1]), &(inteval->stack[((hsi*63+11992)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p010(inteval, &(inteval->stack[((hsi*45+2694)*1+lsi)*1]), &(inteval->stack[((hsi*21+2658)*1+lsi)*1]), &(inteval->stack[((hsi*15+2679)*1+lsi)*1]), &(inteval->stack[((hsi*15+784)*1+lsi)*1]), &(inteval->stack[((hsi*15+1274)*1+lsi)*1]),1);
HRRPart0bra0ket0g001d010(inteval, &(inteval->stack[((hsi*90+12730)*1+lsi)*1]), &(inteval->stack[((hsi*63+13012)*1+lsi)*1]), &(inteval->stack[((hsi*45+2694)*1+lsi)*1]), &(inteval->stack[((hsi*45+11614)*1+lsi)*1]), &(inteval->stack[((hsi*45+9253)*1+lsi)*1]),1);
HRRPart0bra0ket0g001f010(inteval, &(inteval->stack[((hsi*150+2630)*1+lsi)*1]), &(inteval->stack[((hsi*126+13075)*1+lsi)*1]), &(inteval->stack[((hsi*90+12730)*1+lsi)*1]), &(inteval->stack[((hsi*90+11659)*1+lsi)*1]), &(inteval->stack[((hsi*90+9298)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p010(inteval, &(inteval->stack[((hsi*108+12730)*1+lsi)*1]), &(inteval->stack[((hsi*45+2549)*1+lsi)*1]), &(inteval->stack[((hsi*36+2594)*1+lsi)*1]), &(inteval->stack[((hsi*36+635)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d010(inteval, &(inteval->stack[((hsi*168+13498)*1+lsi)*1]), &(inteval->stack[((hsi*108+12730)*1+lsi)*1]), &(inteval->stack[((hsi*84+12646)*1+lsi)*1]), &(inteval->stack[((hsi*84+10279)*1+lsi)*1]), &(inteval->stack[((hsi*84+9388)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f010(inteval, &(inteval->stack[((hsi*210+12646)*1+lsi)*1]), &(inteval->stack[((hsi*168+13498)*1+lsi)*1]), &(inteval->stack[((hsi*126+13075)*1+lsi)*1]), &(inteval->stack[((hsi*126+12370)*1+lsi)*1]), &(inteval->stack[((hsi*126+9472)*1+lsi)*1]),1);
HRRPart0bra0ket0g001g010(inteval, &(inteval->stack[((hsi*225+6634)*1+lsi)*1]), &(inteval->stack[((hsi*210+12646)*1+lsi)*1]), &(inteval->stack[((hsi*150+2630)*1+lsi)*1]), &(inteval->stack[((hsi*150+12496)*1+lsi)*1]), &(inteval->stack[((hsi*150+9748)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p100(inteval, &(inteval->stack[((hsi*63+13012)*1+lsi)*1]), &(inteval->stack[((hsi*28+2485)*1+lsi)*1]), &(inteval->stack[((hsi*21+2513)*1+lsi)*1]), &(inteval->stack[((hsi*21+748)*1+lsi)*1]), &(inteval->stack[((hsi*21+993)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p100(inteval, &(inteval->stack[((hsi*84+13075)*1+lsi)*1]), &(inteval->stack[((hsi*36+2449)*1+lsi)*1]), &(inteval->stack[((hsi*28+2485)*1+lsi)*1]), &(inteval->stack[((hsi*28+699)*1+lsi)*1]), &(inteval->stack[((hsi*28+944)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d100(inteval, &(inteval->stack[((hsi*126+13159)*1+lsi)*1]), &(inteval->stack[((hsi*84+13075)*1+lsi)*1]), &(inteval->stack[((hsi*63+13012)*1+lsi)*1]), &(inteval->stack[((hsi*63+11992)*1+lsi)*1]), &(inteval->stack[((hsi*63+10126)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p100(inteval, &(inteval->stack[((hsi*45+12055)*1+lsi)*1]), &(inteval->stack[((hsi*21+2513)*1+lsi)*1]), &(inteval->stack[((hsi*15+2534)*1+lsi)*1]), &(inteval->stack[((hsi*15+784)*1+lsi)*1]), &(inteval->stack[((hsi*15+1029)*1+lsi)*1]),1);
HRRPart0bra0ket0g001d100(inteval, &(inteval->stack[((hsi*90+2485)*1+lsi)*1]), &(inteval->stack[((hsi*63+13012)*1+lsi)*1]), &(inteval->stack[((hsi*45+12055)*1+lsi)*1]), &(inteval->stack[((hsi*45+11614)*1+lsi)*1]), &(inteval->stack[((hsi*45+3274)*1+lsi)*1]),1);
HRRPart0bra0ket0g001f100(inteval, &(inteval->stack[((hsi*150+13498)*1+lsi)*1]), &(inteval->stack[((hsi*126+13159)*1+lsi)*1]), &(inteval->stack[((hsi*90+2485)*1+lsi)*1]), &(inteval->stack[((hsi*90+11659)*1+lsi)*1]), &(inteval->stack[((hsi*90+10189)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p100(inteval, &(inteval->stack[((hsi*108+2485)*1+lsi)*1]), &(inteval->stack[((hsi*45+2404)*1+lsi)*1]), &(inteval->stack[((hsi*36+2449)*1+lsi)*1]), &(inteval->stack[((hsi*36+635)*1+lsi)*1]), &(inteval->stack[((hsi*36+880)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d100(inteval, &(inteval->stack[((hsi*168+13648)*1+lsi)*1]), &(inteval->stack[((hsi*108+2485)*1+lsi)*1]), &(inteval->stack[((hsi*84+13075)*1+lsi)*1]), &(inteval->stack[((hsi*84+10279)*1+lsi)*1]), &(inteval->stack[((hsi*84+3319)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f100(inteval, &(inteval->stack[((hsi*210+2404)*1+lsi)*1]), &(inteval->stack[((hsi*168+13648)*1+lsi)*1]), &(inteval->stack[((hsi*126+13159)*1+lsi)*1]), &(inteval->stack[((hsi*126+12370)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]),1);
HRRPart0bra0ket0g001g100(inteval, &(inteval->stack[((hsi*225+6409)*1+lsi)*1]), &(inteval->stack[((hsi*210+2404)*1+lsi)*1]), &(inteval->stack[((hsi*150+13498)*1+lsi)*1]), &(inteval->stack[((hsi*150+12496)*1+lsi)*1]), &(inteval->stack[((hsi*150+11098)*1+lsi)*1]),1);
HRRPart0bra0ket0h002p(inteval, &(inteval->stack[((hsi*63+13012)*1+lsi)*1]), &(inteval->stack[((hsi*28+2340)*1+lsi)*1]), &(inteval->stack[((hsi*21+2368)*1+lsi)*1]), &(inteval->stack[((hsi*21+748)*1+lsi)*1]),1);
HRRPart0bra0ket0i002p(inteval, &(inteval->stack[((hsi*84+13075)*1+lsi)*1]), &(inteval->stack[((hsi*36+2304)*1+lsi)*1]), &(inteval->stack[((hsi*28+2340)*1+lsi)*1]), &(inteval->stack[((hsi*28+699)*1+lsi)*1]),1);
HRRPart0bra0ket0h002d(inteval, &(inteval->stack[((hsi*126+13159)*1+lsi)*1]), &(inteval->stack[((hsi*84+13075)*1+lsi)*1]), &(inteval->stack[((hsi*63+13012)*1+lsi)*1]), &(inteval->stack[((hsi*63+11992)*1+lsi)*1]),1);
HRRPart0bra0ket0g002p(inteval, &(inteval->stack[((hsi*45+12055)*1+lsi)*1]), &(inteval->stack[((hsi*21+2368)*1+lsi)*1]), &(inteval->stack[((hsi*15+2389)*1+lsi)*1]), &(inteval->stack[((hsi*15+784)*1+lsi)*1]),1);
HRRPart0bra0ket0g002d(inteval, &(inteval->stack[((hsi*90+3403)*1+lsi)*1]), &(inteval->stack[((hsi*63+13012)*1+lsi)*1]), &(inteval->stack[((hsi*45+12055)*1+lsi)*1]), &(inteval->stack[((hsi*45+11614)*1+lsi)*1]),1);
HRRPart0bra0ket0g002f(inteval, &(inteval->stack[((hsi*150+13648)*1+lsi)*1]), &(inteval->stack[((hsi*126+13159)*1+lsi)*1]), &(inteval->stack[((hsi*90+3403)*1+lsi)*1]), &(inteval->stack[((hsi*90+11659)*1+lsi)*1]),1);
HRRPart0bra0ket0k002p(inteval, &(inteval->stack[((hsi*108+13798)*1+lsi)*1]), &(inteval->stack[((hsi*45+2259)*1+lsi)*1]), &(inteval->stack[((hsi*36+2304)*1+lsi)*1]), &(inteval->stack[((hsi*36+635)*1+lsi)*1]),1);
HRRPart0bra0ket0i002d(inteval, &(inteval->stack[((hsi*168+13906)*1+lsi)*1]), &(inteval->stack[((hsi*108+13798)*1+lsi)*1]), &(inteval->stack[((hsi*84+13075)*1+lsi)*1]), &(inteval->stack[((hsi*84+10279)*1+lsi)*1]),1);
HRRPart0bra0ket0h002f(inteval, &(inteval->stack[((hsi*210+14074)*1+lsi)*1]), &(inteval->stack[((hsi*168+13906)*1+lsi)*1]), &(inteval->stack[((hsi*126+13159)*1+lsi)*1]), &(inteval->stack[((hsi*126+12370)*1+lsi)*1]),1);
HRRPart0bra0ket0g002g(inteval, &(inteval->stack[((hsi*225+6184)*1+lsi)*1]), &(inteval->stack[((hsi*210+14074)*1+lsi)*1]), &(inteval->stack[((hsi*150+13648)*1+lsi)*1]), &(inteval->stack[((hsi*150+12496)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+13798)*1+lsi)*1]), &(inteval->stack[((hsi*28+454)*1+lsi)*1]), &(inteval->stack[((hsi*21+503)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*45+13012)*1+lsi)*1]), &(inteval->stack[((hsi*21+503)*1+lsi)*1]), &(inteval->stack[((hsi*15+539)*1+lsi)*1]), &(inteval->stack[((hsi*15+294)*1+lsi)*1]),1);
HRRPart0bra0ket0g010d(inteval, &(inteval->stack[((hsi*90+13057)*1+lsi)*1]), &(inteval->stack[((hsi*63+13798)*1+lsi)*1]), &(inteval->stack[((hsi*45+13012)*1+lsi)*1]), &(inteval->stack[((hsi*45+8497)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+13861)*1+lsi)*1]), &(inteval->stack[((hsi*36+390)*1+lsi)*1]), &(inteval->stack[((hsi*28+454)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d(inteval, &(inteval->stack[((hsi*126+2259)*1+lsi)*1]), &(inteval->stack[((hsi*84+13861)*1+lsi)*1]), &(inteval->stack[((hsi*63+13798)*1+lsi)*1]), &(inteval->stack[((hsi*63+8677)*1+lsi)*1]),1);
HRRPart0bra0ket0g010f(inteval, &(inteval->stack[((hsi*150+14284)*1+lsi)*1]), &(inteval->stack[((hsi*126+2259)*1+lsi)*1]), &(inteval->stack[((hsi*90+13057)*1+lsi)*1]), &(inteval->stack[((hsi*90+8950)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p001(inteval, &(inteval->stack[((hsi*63+13147)*1+lsi)*1]), &(inteval->stack[((hsi*28+2195)*1+lsi)*1]), &(inteval->stack[((hsi*21+2223)*1+lsi)*1]), &(inteval->stack[((hsi*21+1483)*1+lsi)*1]), &(inteval->stack[((hsi*21+503)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p001(inteval, &(inteval->stack[((hsi*84+13945)*1+lsi)*1]), &(inteval->stack[((hsi*36+2159)*1+lsi)*1]), &(inteval->stack[((hsi*28+2195)*1+lsi)*1]), &(inteval->stack[((hsi*28+1434)*1+lsi)*1]), &(inteval->stack[((hsi*28+454)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d001(inteval, &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]), &(inteval->stack[((hsi*63+13147)*1+lsi)*1]), &(inteval->stack[((hsi*63+8434)*1+lsi)*1]), &(inteval->stack[((hsi*63+13798)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p001(inteval, &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*21+2223)*1+lsi)*1]), &(inteval->stack[((hsi*15+2244)*1+lsi)*1]), &(inteval->stack[((hsi*15+1519)*1+lsi)*1]), &(inteval->stack[((hsi*15+539)*1+lsi)*1]),1);
HRRPart0bra0ket0g010d001(inteval, &(inteval->stack[((hsi*90+12055)*1+lsi)*1]), &(inteval->stack[((hsi*63+13147)*1+lsi)*1]), &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*45+8542)*1+lsi)*1]), &(inteval->stack[((hsi*45+13012)*1+lsi)*1]),1);
HRRPart0bra0ket0g010f001(inteval, &(inteval->stack[((hsi*150+14560)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*90+12055)*1+lsi)*1]), &(inteval->stack[((hsi*90+8587)*1+lsi)*1]), &(inteval->stack[((hsi*90+13057)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p001(inteval, &(inteval->stack[((hsi*108+13147)*1+lsi)*1]), &(inteval->stack[((hsi*45+2114)*1+lsi)*1]), &(inteval->stack[((hsi*36+2159)*1+lsi)*1]), &(inteval->stack[((hsi*36+1370)*1+lsi)*1]), &(inteval->stack[((hsi*36+390)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d001(inteval, &(inteval->stack[((hsi*168+14710)*1+lsi)*1]), &(inteval->stack[((hsi*108+13147)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]), &(inteval->stack[((hsi*84+8740)*1+lsi)*1]), &(inteval->stack[((hsi*84+13861)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f001(inteval, &(inteval->stack[((hsi*210+14878)*1+lsi)*1]), &(inteval->stack[((hsi*168+14710)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*126+8824)*1+lsi)*1]), &(inteval->stack[((hsi*126+2259)*1+lsi)*1]),1);
HRRPart0bra0ket0g010g001(inteval, &(inteval->stack[((hsi*225+5959)*1+lsi)*1]), &(inteval->stack[((hsi*210+14878)*1+lsi)*1]), &(inteval->stack[((hsi*150+14560)*1+lsi)*1]), &(inteval->stack[((hsi*150+9040)*1+lsi)*1]), &(inteval->stack[((hsi*150+14284)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p010(inteval, &(inteval->stack[((hsi*63+14710)*1+lsi)*1]), &(inteval->stack[((hsi*28+2050)*1+lsi)*1]), &(inteval->stack[((hsi*21+2078)*1+lsi)*1]), &(inteval->stack[((hsi*21+1238)*1+lsi)*1]), &(inteval->stack[((hsi*21+503)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p010(inteval, &(inteval->stack[((hsi*84+2114)*1+lsi)*1]), &(inteval->stack[((hsi*36+2014)*1+lsi)*1]), &(inteval->stack[((hsi*28+2050)*1+lsi)*1]), &(inteval->stack[((hsi*28+1189)*1+lsi)*1]), &(inteval->stack[((hsi*28+454)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d010(inteval, &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*84+2114)*1+lsi)*1]), &(inteval->stack[((hsi*63+14710)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*63+13798)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p010(inteval, &(inteval->stack[((hsi*45+13147)*1+lsi)*1]), &(inteval->stack[((hsi*21+2078)*1+lsi)*1]), &(inteval->stack[((hsi*15+2099)*1+lsi)*1]), &(inteval->stack[((hsi*15+1274)*1+lsi)*1]), &(inteval->stack[((hsi*15+539)*1+lsi)*1]),1);
HRRPart0bra0ket0g010d010(inteval, &(inteval->stack[((hsi*90+13945)*1+lsi)*1]), &(inteval->stack[((hsi*63+14710)*1+lsi)*1]), &(inteval->stack[((hsi*45+13147)*1+lsi)*1]), &(inteval->stack[((hsi*45+9253)*1+lsi)*1]), &(inteval->stack[((hsi*45+13012)*1+lsi)*1]),1);
HRRPart0bra0ket0g010f010(inteval, &(inteval->stack[((hsi*150+14710)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*90+13945)*1+lsi)*1]), &(inteval->stack[((hsi*90+9298)*1+lsi)*1]), &(inteval->stack[((hsi*90+13057)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p010(inteval, &(inteval->stack[((hsi*108+13147)*1+lsi)*1]), &(inteval->stack[((hsi*45+1969)*1+lsi)*1]), &(inteval->stack[((hsi*36+2014)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]), &(inteval->stack[((hsi*36+390)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d010(inteval, &(inteval->stack[((hsi*168+15088)*1+lsi)*1]), &(inteval->stack[((hsi*108+13147)*1+lsi)*1]), &(inteval->stack[((hsi*84+2114)*1+lsi)*1]), &(inteval->stack[((hsi*84+9388)*1+lsi)*1]), &(inteval->stack[((hsi*84+13861)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f010(inteval, &(inteval->stack[((hsi*210+1969)*1+lsi)*1]), &(inteval->stack[((hsi*168+15088)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*126+9472)*1+lsi)*1]), &(inteval->stack[((hsi*126+2259)*1+lsi)*1]),1);
HRRPart0bra0ket0g010g010(inteval, &(inteval->stack[((hsi*225+5734)*1+lsi)*1]), &(inteval->stack[((hsi*210+1969)*1+lsi)*1]), &(inteval->stack[((hsi*150+14710)*1+lsi)*1]), &(inteval->stack[((hsi*150+9748)*1+lsi)*1]), &(inteval->stack[((hsi*150+14284)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p100(inteval, &(inteval->stack[((hsi*63+13147)*1+lsi)*1]), &(inteval->stack[((hsi*28+1905)*1+lsi)*1]), &(inteval->stack[((hsi*21+1933)*1+lsi)*1]), &(inteval->stack[((hsi*21+503)*1+lsi)*1]), &(inteval->stack[((hsi*21+993)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p100(inteval, &(inteval->stack[((hsi*84+13945)*1+lsi)*1]), &(inteval->stack[((hsi*36+1869)*1+lsi)*1]), &(inteval->stack[((hsi*28+1905)*1+lsi)*1]), &(inteval->stack[((hsi*28+454)*1+lsi)*1]), &(inteval->stack[((hsi*28+944)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d100(inteval, &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]), &(inteval->stack[((hsi*63+13147)*1+lsi)*1]), &(inteval->stack[((hsi*63+13798)*1+lsi)*1]), &(inteval->stack[((hsi*63+10126)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p100(inteval, &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*21+1933)*1+lsi)*1]), &(inteval->stack[((hsi*15+1954)*1+lsi)*1]), &(inteval->stack[((hsi*15+539)*1+lsi)*1]), &(inteval->stack[((hsi*15+1029)*1+lsi)*1]),1);
HRRPart0bra0ket0g010d100(inteval, &(inteval->stack[((hsi*90+12055)*1+lsi)*1]), &(inteval->stack[((hsi*63+13147)*1+lsi)*1]), &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*45+13012)*1+lsi)*1]), &(inteval->stack[((hsi*45+3274)*1+lsi)*1]),1);
HRRPart0bra0ket0g010f100(inteval, &(inteval->stack[((hsi*150+15088)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*90+12055)*1+lsi)*1]), &(inteval->stack[((hsi*90+13057)*1+lsi)*1]), &(inteval->stack[((hsi*90+10189)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p100(inteval, &(inteval->stack[((hsi*108+13147)*1+lsi)*1]), &(inteval->stack[((hsi*45+1824)*1+lsi)*1]), &(inteval->stack[((hsi*36+1869)*1+lsi)*1]), &(inteval->stack[((hsi*36+390)*1+lsi)*1]), &(inteval->stack[((hsi*36+880)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d100(inteval, &(inteval->stack[((hsi*168+15238)*1+lsi)*1]), &(inteval->stack[((hsi*108+13147)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]), &(inteval->stack[((hsi*84+13861)*1+lsi)*1]), &(inteval->stack[((hsi*84+3319)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f100(inteval, &(inteval->stack[((hsi*210+15406)*1+lsi)*1]), &(inteval->stack[((hsi*168+15238)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*126+2259)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]),1);
HRRPart0bra0ket0g010g100(inteval, &(inteval->stack[((hsi*225+5509)*1+lsi)*1]), &(inteval->stack[((hsi*210+15406)*1+lsi)*1]), &(inteval->stack[((hsi*150+15088)*1+lsi)*1]), &(inteval->stack[((hsi*150+14284)*1+lsi)*1]), &(inteval->stack[((hsi*150+11098)*1+lsi)*1]),1);
HRRPart0bra0ket0h011p(inteval, &(inteval->stack[((hsi*63+15238)*1+lsi)*1]), &(inteval->stack[((hsi*28+1760)*1+lsi)*1]), &(inteval->stack[((hsi*21+1788)*1+lsi)*1]), &(inteval->stack[((hsi*21+748)*1+lsi)*1]), &(inteval->stack[((hsi*21+503)*1+lsi)*1]),1);
HRRPart0bra0ket0i011p(inteval, &(inteval->stack[((hsi*84+1824)*1+lsi)*1]), &(inteval->stack[((hsi*36+1724)*1+lsi)*1]), &(inteval->stack[((hsi*28+1760)*1+lsi)*1]), &(inteval->stack[((hsi*28+699)*1+lsi)*1]), &(inteval->stack[((hsi*28+454)*1+lsi)*1]),1);
HRRPart0bra0ket0h011d(inteval, &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*84+1824)*1+lsi)*1]), &(inteval->stack[((hsi*63+15238)*1+lsi)*1]), &(inteval->stack[((hsi*63+11992)*1+lsi)*1]), &(inteval->stack[((hsi*63+13798)*1+lsi)*1]),1);
HRRPart0bra0ket0g011p(inteval, &(inteval->stack[((hsi*45+13147)*1+lsi)*1]), &(inteval->stack[((hsi*21+1788)*1+lsi)*1]), &(inteval->stack[((hsi*15+1809)*1+lsi)*1]), &(inteval->stack[((hsi*15+784)*1+lsi)*1]), &(inteval->stack[((hsi*15+539)*1+lsi)*1]),1);
HRRPart0bra0ket0g011d(inteval, &(inteval->stack[((hsi*90+13945)*1+lsi)*1]), &(inteval->stack[((hsi*63+15238)*1+lsi)*1]), &(inteval->stack[((hsi*45+13147)*1+lsi)*1]), &(inteval->stack[((hsi*45+11614)*1+lsi)*1]), &(inteval->stack[((hsi*45+13012)*1+lsi)*1]),1);
HRRPart0bra0ket0g011f(inteval, &(inteval->stack[((hsi*150+15238)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*90+13945)*1+lsi)*1]), &(inteval->stack[((hsi*90+11659)*1+lsi)*1]), &(inteval->stack[((hsi*90+13057)*1+lsi)*1]),1);
HRRPart0bra0ket0k011p(inteval, &(inteval->stack[((hsi*108+13147)*1+lsi)*1]), &(inteval->stack[((hsi*45+1679)*1+lsi)*1]), &(inteval->stack[((hsi*36+1724)*1+lsi)*1]), &(inteval->stack[((hsi*36+635)*1+lsi)*1]), &(inteval->stack[((hsi*36+390)*1+lsi)*1]),1);
HRRPart0bra0ket0i011d(inteval, &(inteval->stack[((hsi*168+15616)*1+lsi)*1]), &(inteval->stack[((hsi*108+13147)*1+lsi)*1]), &(inteval->stack[((hsi*84+1824)*1+lsi)*1]), &(inteval->stack[((hsi*84+10279)*1+lsi)*1]), &(inteval->stack[((hsi*84+13861)*1+lsi)*1]),1);
HRRPart0bra0ket0h011f(inteval, &(inteval->stack[((hsi*210+1679)*1+lsi)*1]), &(inteval->stack[((hsi*168+15616)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*126+12370)*1+lsi)*1]), &(inteval->stack[((hsi*126+2259)*1+lsi)*1]),1);
HRRPart0bra0ket0g011g(inteval, &(inteval->stack[((hsi*225+5284)*1+lsi)*1]), &(inteval->stack[((hsi*210+1679)*1+lsi)*1]), &(inteval->stack[((hsi*150+15238)*1+lsi)*1]), &(inteval->stack[((hsi*150+12496)*1+lsi)*1]), &(inteval->stack[((hsi*150+14284)*1+lsi)*1]),1);
HRRPart0bra0ket0h020p(inteval, &(inteval->stack[((hsi*63+13147)*1+lsi)*1]), &(inteval->stack[((hsi*28+1615)*1+lsi)*1]), &(inteval->stack[((hsi*21+1643)*1+lsi)*1]), &(inteval->stack[((hsi*21+503)*1+lsi)*1]),1);
HRRPart0bra0ket0i020p(inteval, &(inteval->stack[((hsi*84+13945)*1+lsi)*1]), &(inteval->stack[((hsi*36+1579)*1+lsi)*1]), &(inteval->stack[((hsi*28+1615)*1+lsi)*1]), &(inteval->stack[((hsi*28+454)*1+lsi)*1]),1);
HRRPart0bra0ket0h020d(inteval, &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]), &(inteval->stack[((hsi*63+13147)*1+lsi)*1]), &(inteval->stack[((hsi*63+13798)*1+lsi)*1]),1);
HRRPart0bra0ket0g020p(inteval, &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*21+1643)*1+lsi)*1]), &(inteval->stack[((hsi*15+1664)*1+lsi)*1]), &(inteval->stack[((hsi*15+539)*1+lsi)*1]),1);
HRRPart0bra0ket0g020d(inteval, &(inteval->stack[((hsi*90+12055)*1+lsi)*1]), &(inteval->stack[((hsi*63+13147)*1+lsi)*1]), &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*45+13012)*1+lsi)*1]),1);
HRRPart0bra0ket0g020f(inteval, &(inteval->stack[((hsi*150+15616)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*90+12055)*1+lsi)*1]), &(inteval->stack[((hsi*90+13057)*1+lsi)*1]),1);
HRRPart0bra0ket0k020p(inteval, &(inteval->stack[((hsi*108+13147)*1+lsi)*1]), &(inteval->stack[((hsi*45+1534)*1+lsi)*1]), &(inteval->stack[((hsi*36+1579)*1+lsi)*1]), &(inteval->stack[((hsi*36+390)*1+lsi)*1]),1);
HRRPart0bra0ket0i020d(inteval, &(inteval->stack[((hsi*168+15766)*1+lsi)*1]), &(inteval->stack[((hsi*108+13147)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]), &(inteval->stack[((hsi*84+13861)*1+lsi)*1]),1);
HRRPart0bra0ket0h020f(inteval, &(inteval->stack[((hsi*210+15934)*1+lsi)*1]), &(inteval->stack[((hsi*168+15766)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*126+2259)*1+lsi)*1]),1);
HRRPart0bra0ket0g020g(inteval, &(inteval->stack[((hsi*225+5059)*1+lsi)*1]), &(inteval->stack[((hsi*210+15934)*1+lsi)*1]), &(inteval->stack[((hsi*150+15616)*1+lsi)*1]), &(inteval->stack[((hsi*150+14284)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+15766)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*45+1534)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]), &(inteval->stack[((hsi*15+279)*1+lsi)*1]), &(inteval->stack[((hsi*15+294)*1+lsi)*1]),1);
HRRPart0bra0ket0g100d(inteval, &(inteval->stack[((hsi*90+13147)*1+lsi)*1]), &(inteval->stack[((hsi*63+15766)*1+lsi)*1]), &(inteval->stack[((hsi*45+1534)*1+lsi)*1]), &(inteval->stack[((hsi*45+8497)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+13945)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d(inteval, &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]), &(inteval->stack[((hsi*63+15766)*1+lsi)*1]), &(inteval->stack[((hsi*63+8677)*1+lsi)*1]),1);
HRRPart0bra0ket0g100f(inteval, &(inteval->stack[((hsi*150+16144)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]), &(inteval->stack[((hsi*90+13147)*1+lsi)*1]), &(inteval->stack[((hsi*90+8950)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p001(inteval, &(inteval->stack[((hsi*63+8677)*1+lsi)*1]), &(inteval->stack[((hsi*28+1406)*1+lsi)*1]), &(inteval->stack[((hsi*21+1462)*1+lsi)*1]), &(inteval->stack[((hsi*21+1483)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p001(inteval, &(inteval->stack[((hsi*84+12055)*1+lsi)*1]), &(inteval->stack[((hsi*36+1334)*1+lsi)*1]), &(inteval->stack[((hsi*28+1406)*1+lsi)*1]), &(inteval->stack[((hsi*28+1434)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d001(inteval, &(inteval->stack[((hsi*126+16294)*1+lsi)*1]), &(inteval->stack[((hsi*84+12055)*1+lsi)*1]), &(inteval->stack[((hsi*63+8677)*1+lsi)*1]), &(inteval->stack[((hsi*63+8434)*1+lsi)*1]), &(inteval->stack[((hsi*63+15766)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p001(inteval, &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*21+1462)*1+lsi)*1]), &(inteval->stack[((hsi*15+1504)*1+lsi)*1]), &(inteval->stack[((hsi*15+1519)*1+lsi)*1]), &(inteval->stack[((hsi*15+279)*1+lsi)*1]),1);
HRRPart0bra0ket0g100d001(inteval, &(inteval->stack[((hsi*90+8950)*1+lsi)*1]), &(inteval->stack[((hsi*63+8677)*1+lsi)*1]), &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*45+8542)*1+lsi)*1]), &(inteval->stack[((hsi*45+1534)*1+lsi)*1]),1);
HRRPart0bra0ket0g100f001(inteval, &(inteval->stack[((hsi*150+8434)*1+lsi)*1]), &(inteval->stack[((hsi*126+16294)*1+lsi)*1]), &(inteval->stack[((hsi*90+8950)*1+lsi)*1]), &(inteval->stack[((hsi*90+8587)*1+lsi)*1]), &(inteval->stack[((hsi*90+13147)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p001(inteval, &(inteval->stack[((hsi*108+8584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1289)*1+lsi)*1]), &(inteval->stack[((hsi*36+1334)*1+lsi)*1]), &(inteval->stack[((hsi*36+1370)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d001(inteval, &(inteval->stack[((hsi*168+1289)*1+lsi)*1]), &(inteval->stack[((hsi*108+8584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12055)*1+lsi)*1]), &(inteval->stack[((hsi*84+8740)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f001(inteval, &(inteval->stack[((hsi*210+8584)*1+lsi)*1]), &(inteval->stack[((hsi*168+1289)*1+lsi)*1]), &(inteval->stack[((hsi*126+16294)*1+lsi)*1]), &(inteval->stack[((hsi*126+8824)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]),1);
HRRPart0bra0ket0g100g001(inteval, &(inteval->stack[((hsi*225+4834)*1+lsi)*1]), &(inteval->stack[((hsi*210+8584)*1+lsi)*1]), &(inteval->stack[((hsi*150+8434)*1+lsi)*1]), &(inteval->stack[((hsi*150+9040)*1+lsi)*1]), &(inteval->stack[((hsi*150+16144)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p010(inteval, &(inteval->stack[((hsi*63+8794)*1+lsi)*1]), &(inteval->stack[((hsi*28+1161)*1+lsi)*1]), &(inteval->stack[((hsi*21+1217)*1+lsi)*1]), &(inteval->stack[((hsi*21+1238)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p010(inteval, &(inteval->stack[((hsi*84+1289)*1+lsi)*1]), &(inteval->stack[((hsi*36+1089)*1+lsi)*1]), &(inteval->stack[((hsi*28+1161)*1+lsi)*1]), &(inteval->stack[((hsi*28+1189)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d010(inteval, &(inteval->stack[((hsi*126+8857)*1+lsi)*1]), &(inteval->stack[((hsi*84+1289)*1+lsi)*1]), &(inteval->stack[((hsi*63+8794)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*63+15766)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p010(inteval, &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*21+1217)*1+lsi)*1]), &(inteval->stack[((hsi*15+1259)*1+lsi)*1]), &(inteval->stack[((hsi*15+1274)*1+lsi)*1]), &(inteval->stack[((hsi*15+279)*1+lsi)*1]),1);
HRRPart0bra0ket0g100d010(inteval, &(inteval->stack[((hsi*90+1373)*1+lsi)*1]), &(inteval->stack[((hsi*63+8794)*1+lsi)*1]), &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*45+9253)*1+lsi)*1]), &(inteval->stack[((hsi*45+1534)*1+lsi)*1]),1);
HRRPart0bra0ket0g100f010(inteval, &(inteval->stack[((hsi*150+16294)*1+lsi)*1]), &(inteval->stack[((hsi*126+8857)*1+lsi)*1]), &(inteval->stack[((hsi*90+1373)*1+lsi)*1]), &(inteval->stack[((hsi*90+9298)*1+lsi)*1]), &(inteval->stack[((hsi*90+13147)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p010(inteval, &(inteval->stack[((hsi*108+9190)*1+lsi)*1]), &(inteval->stack[((hsi*45+1044)*1+lsi)*1]), &(inteval->stack[((hsi*36+1089)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d010(inteval, &(inteval->stack[((hsi*168+1044)*1+lsi)*1]), &(inteval->stack[((hsi*108+9190)*1+lsi)*1]), &(inteval->stack[((hsi*84+1289)*1+lsi)*1]), &(inteval->stack[((hsi*84+9388)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f010(inteval, &(inteval->stack[((hsi*210+1212)*1+lsi)*1]), &(inteval->stack[((hsi*168+1044)*1+lsi)*1]), &(inteval->stack[((hsi*126+8857)*1+lsi)*1]), &(inteval->stack[((hsi*126+9472)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]),1);
HRRPart0bra0ket0g100g010(inteval, &(inteval->stack[((hsi*225+4609)*1+lsi)*1]), &(inteval->stack[((hsi*210+1212)*1+lsi)*1]), &(inteval->stack[((hsi*150+16294)*1+lsi)*1]), &(inteval->stack[((hsi*150+9748)*1+lsi)*1]), &(inteval->stack[((hsi*150+16144)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p100(inteval, &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*28+916)*1+lsi)*1]), &(inteval->stack[((hsi*21+972)*1+lsi)*1]), &(inteval->stack[((hsi*21+993)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p100(inteval, &(inteval->stack[((hsi*84+9253)*1+lsi)*1]), &(inteval->stack[((hsi*36+844)*1+lsi)*1]), &(inteval->stack[((hsi*28+916)*1+lsi)*1]), &(inteval->stack[((hsi*28+944)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d100(inteval, &(inteval->stack[((hsi*126+9337)*1+lsi)*1]), &(inteval->stack[((hsi*84+9253)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*63+10126)*1+lsi)*1]), &(inteval->stack[((hsi*63+15766)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p100(inteval, &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*21+972)*1+lsi)*1]), &(inteval->stack[((hsi*15+1014)*1+lsi)*1]), &(inteval->stack[((hsi*15+1029)*1+lsi)*1]), &(inteval->stack[((hsi*15+279)*1+lsi)*1]),1);
HRRPart0bra0ket0g100d100(inteval, &(inteval->stack[((hsi*90+916)*1+lsi)*1]), &(inteval->stack[((hsi*63+9190)*1+lsi)*1]), &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*45+3274)*1+lsi)*1]), &(inteval->stack[((hsi*45+1534)*1+lsi)*1]),1);
HRRPart0bra0ket0g100f100(inteval, &(inteval->stack[((hsi*150+8794)*1+lsi)*1]), &(inteval->stack[((hsi*126+9337)*1+lsi)*1]), &(inteval->stack[((hsi*90+916)*1+lsi)*1]), &(inteval->stack[((hsi*90+10189)*1+lsi)*1]), &(inteval->stack[((hsi*90+13147)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p100(inteval, &(inteval->stack[((hsi*108+916)*1+lsi)*1]), &(inteval->stack[((hsi*45+799)*1+lsi)*1]), &(inteval->stack[((hsi*36+844)*1+lsi)*1]), &(inteval->stack[((hsi*36+880)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d100(inteval, &(inteval->stack[((hsi*168+1024)*1+lsi)*1]), &(inteval->stack[((hsi*108+916)*1+lsi)*1]), &(inteval->stack[((hsi*84+9253)*1+lsi)*1]), &(inteval->stack[((hsi*84+3319)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f100(inteval, &(inteval->stack[((hsi*210+3215)*1+lsi)*1]), &(inteval->stack[((hsi*168+1024)*1+lsi)*1]), &(inteval->stack[((hsi*126+9337)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]),1);
HRRPart0bra0ket0g100g100(inteval, &(inteval->stack[((hsi*225+4384)*1+lsi)*1]), &(inteval->stack[((hsi*210+3215)*1+lsi)*1]), &(inteval->stack[((hsi*150+8794)*1+lsi)*1]), &(inteval->stack[((hsi*150+11098)*1+lsi)*1]), &(inteval->stack[((hsi*150+16144)*1+lsi)*1]),1);
HRRPart0bra0ket0h101p(inteval, &(inteval->stack[((hsi*63+799)*1+lsi)*1]), &(inteval->stack[((hsi*28+671)*1+lsi)*1]), &(inteval->stack[((hsi*21+727)*1+lsi)*1]), &(inteval->stack[((hsi*21+748)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0i101p(inteval, &(inteval->stack[((hsi*84+9190)*1+lsi)*1]), &(inteval->stack[((hsi*36+599)*1+lsi)*1]), &(inteval->stack[((hsi*28+671)*1+lsi)*1]), &(inteval->stack[((hsi*28+699)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h101d(inteval, &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*84+9190)*1+lsi)*1]), &(inteval->stack[((hsi*63+799)*1+lsi)*1]), &(inteval->stack[((hsi*63+11992)*1+lsi)*1]), &(inteval->stack[((hsi*63+15766)*1+lsi)*1]),1);
HRRPart0bra0ket0g101p(inteval, &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*21+727)*1+lsi)*1]), &(inteval->stack[((hsi*15+769)*1+lsi)*1]), &(inteval->stack[((hsi*15+784)*1+lsi)*1]), &(inteval->stack[((hsi*15+279)*1+lsi)*1]),1);
HRRPart0bra0ket0g101d(inteval, &(inteval->stack[((hsi*90+862)*1+lsi)*1]), &(inteval->stack[((hsi*63+799)*1+lsi)*1]), &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*45+11614)*1+lsi)*1]), &(inteval->stack[((hsi*45+1534)*1+lsi)*1]),1);
HRRPart0bra0ket0g101f(inteval, &(inteval->stack[((hsi*150+9274)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*90+862)*1+lsi)*1]), &(inteval->stack[((hsi*90+11659)*1+lsi)*1]), &(inteval->stack[((hsi*90+13147)*1+lsi)*1]),1);
HRRPart0bra0ket0k101p(inteval, &(inteval->stack[((hsi*108+671)*1+lsi)*1]), &(inteval->stack[((hsi*45+554)*1+lsi)*1]), &(inteval->stack[((hsi*36+599)*1+lsi)*1]), &(inteval->stack[((hsi*36+635)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i101d(inteval, &(inteval->stack[((hsi*168+11992)*1+lsi)*1]), &(inteval->stack[((hsi*108+671)*1+lsi)*1]), &(inteval->stack[((hsi*84+9190)*1+lsi)*1]), &(inteval->stack[((hsi*84+10279)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]),1);
HRRPart0bra0ket0h101f(inteval, &(inteval->stack[((hsi*210+554)*1+lsi)*1]), &(inteval->stack[((hsi*168+11992)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*126+12370)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]),1);
HRRPart0bra0ket0g101g(inteval, &(inteval->stack[((hsi*225+4159)*1+lsi)*1]), &(inteval->stack[((hsi*210+554)*1+lsi)*1]), &(inteval->stack[((hsi*150+9274)*1+lsi)*1]), &(inteval->stack[((hsi*150+12496)*1+lsi)*1]), &(inteval->stack[((hsi*150+16144)*1+lsi)*1]),1);
HRRPart0bra0ket0h110p(inteval, &(inteval->stack[((hsi*63+764)*1+lsi)*1]), &(inteval->stack[((hsi*28+426)*1+lsi)*1]), &(inteval->stack[((hsi*21+482)*1+lsi)*1]), &(inteval->stack[((hsi*21+503)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0i110p(inteval, &(inteval->stack[((hsi*84+9190)*1+lsi)*1]), &(inteval->stack[((hsi*36+354)*1+lsi)*1]), &(inteval->stack[((hsi*28+426)*1+lsi)*1]), &(inteval->stack[((hsi*28+454)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h110d(inteval, &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*84+9190)*1+lsi)*1]), &(inteval->stack[((hsi*63+764)*1+lsi)*1]), &(inteval->stack[((hsi*63+13798)*1+lsi)*1]), &(inteval->stack[((hsi*63+15766)*1+lsi)*1]),1);
HRRPart0bra0ket0g110p(inteval, &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*21+482)*1+lsi)*1]), &(inteval->stack[((hsi*15+524)*1+lsi)*1]), &(inteval->stack[((hsi*15+539)*1+lsi)*1]), &(inteval->stack[((hsi*15+279)*1+lsi)*1]),1);
HRRPart0bra0ket0g110d(inteval, &(inteval->stack[((hsi*90+827)*1+lsi)*1]), &(inteval->stack[((hsi*63+764)*1+lsi)*1]), &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*45+13012)*1+lsi)*1]), &(inteval->stack[((hsi*45+1534)*1+lsi)*1]),1);
HRRPart0bra0ket0g110f(inteval, &(inteval->stack[((hsi*150+917)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*90+827)*1+lsi)*1]), &(inteval->stack[((hsi*90+13057)*1+lsi)*1]), &(inteval->stack[((hsi*90+13147)*1+lsi)*1]),1);
HRRPart0bra0ket0k110p(inteval, &(inteval->stack[((hsi*108+10126)*1+lsi)*1]), &(inteval->stack[((hsi*45+309)*1+lsi)*1]), &(inteval->stack[((hsi*36+354)*1+lsi)*1]), &(inteval->stack[((hsi*36+390)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i110d(inteval, &(inteval->stack[((hsi*168+11992)*1+lsi)*1]), &(inteval->stack[((hsi*108+10126)*1+lsi)*1]), &(inteval->stack[((hsi*84+9190)*1+lsi)*1]), &(inteval->stack[((hsi*84+13861)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]),1);
HRRPart0bra0ket0h110f(inteval, &(inteval->stack[((hsi*210+10126)*1+lsi)*1]), &(inteval->stack[((hsi*168+11992)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*126+2259)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]),1);
HRRPart0bra0ket0g110g(inteval, &(inteval->stack[((hsi*225+3934)*1+lsi)*1]), &(inteval->stack[((hsi*210+10126)*1+lsi)*1]), &(inteval->stack[((hsi*150+917)*1+lsi)*1]), &(inteval->stack[((hsi*150+14284)*1+lsi)*1]), &(inteval->stack[((hsi*150+16144)*1+lsi)*1]),1);
HRRPart0bra0ket0h200p(inteval, &(inteval->stack[((hsi*63+10336)*1+lsi)*1]), &(inteval->stack[((hsi*28+117)*1+lsi)*1]), &(inteval->stack[((hsi*21+201)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0i200p(inteval, &(inteval->stack[((hsi*84+9190)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+117)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h200d(inteval, &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*84+9190)*1+lsi)*1]), &(inteval->stack[((hsi*63+10336)*1+lsi)*1]), &(inteval->stack[((hsi*63+15766)*1+lsi)*1]),1);
HRRPart0bra0ket0g200p(inteval, &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*21+201)*1+lsi)*1]), &(inteval->stack[((hsi*15+264)*1+lsi)*1]), &(inteval->stack[((hsi*15+279)*1+lsi)*1]),1);
HRRPart0bra0ket0g200d(inteval, &(inteval->stack[((hsi*90+117)*1+lsi)*1]), &(inteval->stack[((hsi*63+10336)*1+lsi)*1]), &(inteval->stack[((hsi*45+14029)*1+lsi)*1]), &(inteval->stack[((hsi*45+1534)*1+lsi)*1]),1);
HRRPart0bra0ket0g200f(inteval, &(inteval->stack[((hsi*150+207)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*90+117)*1+lsi)*1]), &(inteval->stack[((hsi*90+13147)*1+lsi)*1]),1);
HRRPart0bra0ket0k200p(inteval, &(inteval->stack[((hsi*108+13012)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i200d(inteval, &(inteval->stack[((hsi*168+11992)*1+lsi)*1]), &(inteval->stack[((hsi*108+13012)*1+lsi)*1]), &(inteval->stack[((hsi*84+9190)*1+lsi)*1]), &(inteval->stack[((hsi*84+13945)*1+lsi)*1]),1);
HRRPart0bra0ket0h200f(inteval, &(inteval->stack[((hsi*210+13012)*1+lsi)*1]), &(inteval->stack[((hsi*168+11992)*1+lsi)*1]), &(inteval->stack[((hsi*126+10972)*1+lsi)*1]), &(inteval->stack[((hsi*126+14434)*1+lsi)*1]),1);
HRRPart0bra0ket0g200g(inteval, &(inteval->stack[((hsi*225+3709)*1+lsi)*1]), &(inteval->stack[((hsi*210+13012)*1+lsi)*1]), &(inteval->stack[((hsi*150+207)*1+lsi)*1]), &(inteval->stack[((hsi*150+16144)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*225+3709)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*225+3934)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*225+4159)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*225+4384)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*225+4609)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*225+4834)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*225+5059)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*225+5284)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*225+5509)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*225+5734)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*225+5959)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*225+6184)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*225+6409)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*225+6634)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*225+6859)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*225+7084)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*225+7309)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*225+7534)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*225+7759)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*225+7984)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*225+8209)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
