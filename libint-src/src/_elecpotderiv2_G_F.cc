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
#include <HRRPart0bra0ket0gd001.h>
#include <HRRPart0bra0ket0gd002.h>
#include <HRRPart0bra0ket0gd010.h>
#include <HRRPart0bra0ket0gd011.h>
#include <HRRPart0bra0ket0gd020.h>
#include <HRRPart0bra0ket0gd100.h>
#include <HRRPart0bra0ket0gd101.h>
#include <HRRPart0bra0ket0gd110.h>
#include <HRRPart0bra0ket0gd200.h>
#include <HRRPart0bra0ket0gf002.h>
#include <HRRPart0bra0ket0gf011.h>
#include <HRRPart0bra0ket0gf020.h>
#include <HRRPart0bra0ket0gf101.h>
#include <HRRPart0bra0ket0gf110.h>
#include <HRRPart0bra0ket0gf200.h>
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
#include <HRRPart0bra0ket0g001f001.h>
#include <HRRPart0bra0ket0g001f010.h>
#include <HRRPart0bra0ket0g001f100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g001p001.h>
#include <HRRPart0bra0ket0g001p010.h>
#include <HRRPart0bra0ket0g001p100.h>
#include <HRRPart0bra0ket0g002d.h>
#include <HRRPart0bra0ket0g002f.h>
#include <HRRPart0bra0ket0g002p.h>
#include <HRRPart0bra0ket0g010d.h>
#include <HRRPart0bra0ket0g010d001.h>
#include <HRRPart0bra0ket0g010d010.h>
#include <HRRPart0bra0ket0g010d100.h>
#include <HRRPart0bra0ket0g010f001.h>
#include <HRRPart0bra0ket0g010f010.h>
#include <HRRPart0bra0ket0g010f100.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g010p001.h>
#include <HRRPart0bra0ket0g010p010.h>
#include <HRRPart0bra0ket0g010p100.h>
#include <HRRPart0bra0ket0g011d.h>
#include <HRRPart0bra0ket0g011f.h>
#include <HRRPart0bra0ket0g011p.h>
#include <HRRPart0bra0ket0g020d.h>
#include <HRRPart0bra0ket0g020f.h>
#include <HRRPart0bra0ket0g020p.h>
#include <HRRPart0bra0ket0g100d.h>
#include <HRRPart0bra0ket0g100d001.h>
#include <HRRPart0bra0ket0g100d010.h>
#include <HRRPart0bra0ket0g100d100.h>
#include <HRRPart0bra0ket0g100f001.h>
#include <HRRPart0bra0ket0g100f010.h>
#include <HRRPart0bra0ket0g100f100.h>
#include <HRRPart0bra0ket0g100p.h>
#include <HRRPart0bra0ket0g100p001.h>
#include <HRRPart0bra0ket0g100p010.h>
#include <HRRPart0bra0ket0g100p100.h>
#include <HRRPart0bra0ket0g101d.h>
#include <HRRPart0bra0ket0g101f.h>
#include <HRRPart0bra0ket0g101p.h>
#include <HRRPart0bra0ket0g110d.h>
#include <HRRPart0bra0ket0g110f.h>
#include <HRRPart0bra0ket0g110p.h>
#include <HRRPart0bra0ket0g200d.h>
#include <HRRPart0bra0ket0g200f.h>
#include <HRRPart0bra0ket0g200p.h>
#include <HRRPart0bra0ket0hd002.h>
#include <HRRPart0bra0ket0hd011.h>
#include <HRRPart0bra0ket0hd020.h>
#include <HRRPart0bra0ket0hd101.h>
#include <HRRPart0bra0ket0hd110.h>
#include <HRRPart0bra0ket0hd200.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp002.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp011.h>
#include <HRRPart0bra0ket0hp020.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0hp101.h>
#include <HRRPart0bra0ket0hp110.h>
#include <HRRPart0bra0ket0hp200.h>
#include <HRRPart0bra0ket0h001d001.h>
#include <HRRPart0bra0ket0h001d010.h>
#include <HRRPart0bra0ket0h001d100.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h001p001.h>
#include <HRRPart0bra0ket0h001p010.h>
#include <HRRPart0bra0ket0h001p100.h>
#include <HRRPart0bra0ket0h002d.h>
#include <HRRPart0bra0ket0h002p.h>
#include <HRRPart0bra0ket0h010d001.h>
#include <HRRPart0bra0ket0h010d010.h>
#include <HRRPart0bra0ket0h010d100.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h010p001.h>
#include <HRRPart0bra0ket0h010p010.h>
#include <HRRPart0bra0ket0h010p100.h>
#include <HRRPart0bra0ket0h011d.h>
#include <HRRPart0bra0ket0h011p.h>
#include <HRRPart0bra0ket0h020d.h>
#include <HRRPart0bra0ket0h020p.h>
#include <HRRPart0bra0ket0h100d001.h>
#include <HRRPart0bra0ket0h100d010.h>
#include <HRRPart0bra0ket0h100d100.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart0bra0ket0h100p001.h>
#include <HRRPart0bra0ket0h100p010.h>
#include <HRRPart0bra0ket0h100p100.h>
#include <HRRPart0bra0ket0h101d.h>
#include <HRRPart0bra0ket0h101p.h>
#include <HRRPart0bra0ket0h110d.h>
#include <HRRPart0bra0ket0h110p.h>
#include <HRRPart0bra0ket0h200d.h>
#include <HRRPart0bra0ket0h200p.h>
#include <HRRPart0bra0ket0ip002.h>
#include <HRRPart0bra0ket0ip011.h>
#include <HRRPart0bra0ket0ip020.h>
#include <HRRPart0bra0ket0ip101.h>
#include <HRRPart0bra0ket0ip110.h>
#include <HRRPart0bra0ket0ip200.h>
#include <HRRPart0bra0ket0i001p001.h>
#include <HRRPart0bra0ket0i001p010.h>
#include <HRRPart0bra0ket0i001p100.h>
#include <HRRPart0bra0ket0i002p.h>
#include <HRRPart0bra0ket0i010p001.h>
#include <HRRPart0bra0ket0i010p010.h>
#include <HRRPart0bra0ket0i010p100.h>
#include <HRRPart0bra0ket0i011p.h>
#include <HRRPart0bra0ket0i020p.h>
#include <HRRPart0bra0ket0i100p001.h>
#include <HRRPart0bra0ket0i100p010.h>
#include <HRRPart0bra0ket0i100p100.h>
#include <HRRPart0bra0ket0i101p.h>
#include <HRRPart0bra0ket0i110p.h>
#include <HRRPart0bra0ket0i200p.h>
#include <_elecpotderiv2_G_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv2_G_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2520)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv2_G_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*45+5670)*1+lsi)*1]), &(inteval->stack[((hsi*21+969)*1+lsi)*1]), &(inteval->stack[((hsi*15+1005)*1+lsi)*1]), &(inteval->stack[((hsi*15+185)*1+lsi)*1]),1);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+5715)*1+lsi)*1]), &(inteval->stack[((hsi*28+920)*1+lsi)*1]), &(inteval->stack[((hsi*21+969)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+5778)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]), &(inteval->stack[((hsi*15+185)*1+lsi)*1]),1);
HRRPart0bra0ket0gd001(inteval, &(inteval->stack[((hsi*90+5823)*1+lsi)*1]), &(inteval->stack[((hsi*63+5715)*1+lsi)*1]), &(inteval->stack[((hsi*45+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+5778)*1+lsi)*1]),1);
HRRPart0bra0ket0hp002(inteval, &(inteval->stack[((hsi*63+5913)*1+lsi)*1]), &(inteval->stack[((hsi*28+2456)*1+lsi)*1]), &(inteval->stack[((hsi*21+2484)*1+lsi)*1]), &(inteval->stack[((hsi*21+969)*1+lsi)*1]),1);
HRRPart0bra0ket0gp002(inteval, &(inteval->stack[((hsi*45+5976)*1+lsi)*1]), &(inteval->stack[((hsi*21+2484)*1+lsi)*1]), &(inteval->stack[((hsi*15+2505)*1+lsi)*1]), &(inteval->stack[((hsi*15+1005)*1+lsi)*1]),1);
HRRPart0bra0ket0gd002(inteval, &(inteval->stack[((hsi*90+6021)*1+lsi)*1]), &(inteval->stack[((hsi*63+5913)*1+lsi)*1]), &(inteval->stack[((hsi*45+5976)*1+lsi)*1]), &(inteval->stack[((hsi*45+5670)*1+lsi)*1]),1);
HRRPart0bra0ket0ip002(inteval, &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*36+2420)*1+lsi)*1]), &(inteval->stack[((hsi*28+2456)*1+lsi)*1]), &(inteval->stack[((hsi*28+920)*1+lsi)*1]),1);
HRRPart0bra0ket0hd002(inteval, &(inteval->stack[((hsi*126+6195)*1+lsi)*1]), &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*63+5913)*1+lsi)*1]), &(inteval->stack[((hsi*63+5715)*1+lsi)*1]),1);
HRRPart0bra0ket0gf002(inteval, &(inteval->stack[((hsi*150+5520)*1+lsi)*1]), &(inteval->stack[((hsi*126+6195)*1+lsi)*1]), &(inteval->stack[((hsi*90+6021)*1+lsi)*1]), &(inteval->stack[((hsi*90+5823)*1+lsi)*1]),1);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*45+5913)*1+lsi)*1]), &(inteval->stack[((hsi*21+805)*1+lsi)*1]), &(inteval->stack[((hsi*15+841)*1+lsi)*1]), &(inteval->stack[((hsi*15+185)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+5958)*1+lsi)*1]), &(inteval->stack[((hsi*28+756)*1+lsi)*1]), &(inteval->stack[((hsi*21+805)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0bra0ket0gd010(inteval, &(inteval->stack[((hsi*90+2420)*1+lsi)*1]), &(inteval->stack[((hsi*63+5958)*1+lsi)*1]), &(inteval->stack[((hsi*45+5913)*1+lsi)*1]), &(inteval->stack[((hsi*45+5778)*1+lsi)*1]),1);
HRRPart0bra0ket0hp011(inteval, &(inteval->stack[((hsi*63+6111)*1+lsi)*1]), &(inteval->stack[((hsi*28+2356)*1+lsi)*1]), &(inteval->stack[((hsi*21+2384)*1+lsi)*1]), &(inteval->stack[((hsi*21+969)*1+lsi)*1]), &(inteval->stack[((hsi*21+805)*1+lsi)*1]),1);
HRRPart0bra0ket0gp011(inteval, &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*21+2384)*1+lsi)*1]), &(inteval->stack[((hsi*15+2405)*1+lsi)*1]), &(inteval->stack[((hsi*15+1005)*1+lsi)*1]), &(inteval->stack[((hsi*15+841)*1+lsi)*1]),1);
HRRPart0bra0ket0gd011(inteval, &(inteval->stack[((hsi*90+6366)*1+lsi)*1]), &(inteval->stack[((hsi*63+6111)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*45+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+5913)*1+lsi)*1]),1);
HRRPart0bra0ket0ip011(inteval, &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*36+2320)*1+lsi)*1]), &(inteval->stack[((hsi*28+2356)*1+lsi)*1]), &(inteval->stack[((hsi*28+920)*1+lsi)*1]), &(inteval->stack[((hsi*28+756)*1+lsi)*1]),1);
HRRPart0bra0ket0hd011(inteval, &(inteval->stack[((hsi*126+6540)*1+lsi)*1]), &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+6111)*1+lsi)*1]), &(inteval->stack[((hsi*63+5715)*1+lsi)*1]), &(inteval->stack[((hsi*63+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0gf011(inteval, &(inteval->stack[((hsi*150+5370)*1+lsi)*1]), &(inteval->stack[((hsi*126+6540)*1+lsi)*1]), &(inteval->stack[((hsi*90+6366)*1+lsi)*1]), &(inteval->stack[((hsi*90+5823)*1+lsi)*1]), &(inteval->stack[((hsi*90+2420)*1+lsi)*1]),1);
HRRPart0bra0ket0hp020(inteval, &(inteval->stack[((hsi*63+2320)*1+lsi)*1]), &(inteval->stack[((hsi*28+2256)*1+lsi)*1]), &(inteval->stack[((hsi*21+2284)*1+lsi)*1]), &(inteval->stack[((hsi*21+805)*1+lsi)*1]),1);
HRRPart0bra0ket0gp020(inteval, &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*21+2284)*1+lsi)*1]), &(inteval->stack[((hsi*15+2305)*1+lsi)*1]), &(inteval->stack[((hsi*15+841)*1+lsi)*1]),1);
HRRPart0bra0ket0gd020(inteval, &(inteval->stack[((hsi*90+6666)*1+lsi)*1]), &(inteval->stack[((hsi*63+2320)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*45+5913)*1+lsi)*1]),1);
HRRPart0bra0ket0ip020(inteval, &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*36+2220)*1+lsi)*1]), &(inteval->stack[((hsi*28+2256)*1+lsi)*1]), &(inteval->stack[((hsi*28+756)*1+lsi)*1]),1);
HRRPart0bra0ket0hd020(inteval, &(inteval->stack[((hsi*126+6756)*1+lsi)*1]), &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+2320)*1+lsi)*1]), &(inteval->stack[((hsi*63+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0gf020(inteval, &(inteval->stack[((hsi*150+5220)*1+lsi)*1]), &(inteval->stack[((hsi*126+6756)*1+lsi)*1]), &(inteval->stack[((hsi*90+6666)*1+lsi)*1]), &(inteval->stack[((hsi*90+2420)*1+lsi)*1]),1);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*21+641)*1+lsi)*1]), &(inteval->stack[((hsi*15+677)*1+lsi)*1]), &(inteval->stack[((hsi*15+185)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+2220)*1+lsi)*1]), &(inteval->stack[((hsi*28+592)*1+lsi)*1]), &(inteval->stack[((hsi*21+641)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0bra0ket0gd100(inteval, &(inteval->stack[((hsi*90+2283)*1+lsi)*1]), &(inteval->stack[((hsi*63+2220)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*45+5778)*1+lsi)*1]),1);
HRRPart0bra0ket0hp101(inteval, &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*28+2156)*1+lsi)*1]), &(inteval->stack[((hsi*21+2184)*1+lsi)*1]), &(inteval->stack[((hsi*21+969)*1+lsi)*1]), &(inteval->stack[((hsi*21+641)*1+lsi)*1]),1);
HRRPart0bra0ket0gp101(inteval, &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*21+2184)*1+lsi)*1]), &(inteval->stack[((hsi*15+2205)*1+lsi)*1]), &(inteval->stack[((hsi*15+1005)*1+lsi)*1]), &(inteval->stack[((hsi*15+677)*1+lsi)*1]),1);
HRRPart0bra0ket0gd101(inteval, &(inteval->stack[((hsi*90+6882)*1+lsi)*1]), &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*45+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]),1);
HRRPart0bra0ket0ip101(inteval, &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*36+2120)*1+lsi)*1]), &(inteval->stack[((hsi*28+2156)*1+lsi)*1]), &(inteval->stack[((hsi*28+920)*1+lsi)*1]), &(inteval->stack[((hsi*28+592)*1+lsi)*1]),1);
HRRPart0bra0ket0hd101(inteval, &(inteval->stack[((hsi*126+6972)*1+lsi)*1]), &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+5715)*1+lsi)*1]), &(inteval->stack[((hsi*63+2220)*1+lsi)*1]),1);
HRRPart0bra0ket0gf101(inteval, &(inteval->stack[((hsi*150+5070)*1+lsi)*1]), &(inteval->stack[((hsi*126+6972)*1+lsi)*1]), &(inteval->stack[((hsi*90+6882)*1+lsi)*1]), &(inteval->stack[((hsi*90+5823)*1+lsi)*1]), &(inteval->stack[((hsi*90+2283)*1+lsi)*1]),1);
HRRPart0bra0ket0hp110(inteval, &(inteval->stack[((hsi*63+2120)*1+lsi)*1]), &(inteval->stack[((hsi*28+2056)*1+lsi)*1]), &(inteval->stack[((hsi*21+2084)*1+lsi)*1]), &(inteval->stack[((hsi*21+805)*1+lsi)*1]), &(inteval->stack[((hsi*21+641)*1+lsi)*1]),1);
HRRPart0bra0ket0gp110(inteval, &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*21+2084)*1+lsi)*1]), &(inteval->stack[((hsi*15+2105)*1+lsi)*1]), &(inteval->stack[((hsi*15+841)*1+lsi)*1]), &(inteval->stack[((hsi*15+677)*1+lsi)*1]),1);
HRRPart0bra0ket0gd110(inteval, &(inteval->stack[((hsi*90+7098)*1+lsi)*1]), &(inteval->stack[((hsi*63+2120)*1+lsi)*1]), &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*45+5913)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]),1);
HRRPart0bra0ket0ip110(inteval, &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*36+2020)*1+lsi)*1]), &(inteval->stack[((hsi*28+2056)*1+lsi)*1]), &(inteval->stack[((hsi*28+756)*1+lsi)*1]), &(inteval->stack[((hsi*28+592)*1+lsi)*1]),1);
HRRPart0bra0ket0hd110(inteval, &(inteval->stack[((hsi*126+7188)*1+lsi)*1]), &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+2120)*1+lsi)*1]), &(inteval->stack[((hsi*63+5958)*1+lsi)*1]), &(inteval->stack[((hsi*63+2220)*1+lsi)*1]),1);
HRRPart0bra0ket0gf110(inteval, &(inteval->stack[((hsi*150+4920)*1+lsi)*1]), &(inteval->stack[((hsi*126+7188)*1+lsi)*1]), &(inteval->stack[((hsi*90+7098)*1+lsi)*1]), &(inteval->stack[((hsi*90+2420)*1+lsi)*1]), &(inteval->stack[((hsi*90+2283)*1+lsi)*1]),1);
HRRPart0bra0ket0hp200(inteval, &(inteval->stack[((hsi*63+2020)*1+lsi)*1]), &(inteval->stack[((hsi*28+1956)*1+lsi)*1]), &(inteval->stack[((hsi*21+1984)*1+lsi)*1]), &(inteval->stack[((hsi*21+641)*1+lsi)*1]),1);
HRRPart0bra0ket0gp200(inteval, &(inteval->stack[((hsi*45+2083)*1+lsi)*1]), &(inteval->stack[((hsi*21+1984)*1+lsi)*1]), &(inteval->stack[((hsi*15+2005)*1+lsi)*1]), &(inteval->stack[((hsi*15+677)*1+lsi)*1]),1);
HRRPart0bra0ket0gd200(inteval, &(inteval->stack[((hsi*90+2128)*1+lsi)*1]), &(inteval->stack[((hsi*63+2020)*1+lsi)*1]), &(inteval->stack[((hsi*45+2083)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]),1);
HRRPart0bra0ket0ip200(inteval, &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*36+1920)*1+lsi)*1]), &(inteval->stack[((hsi*28+1956)*1+lsi)*1]), &(inteval->stack[((hsi*28+592)*1+lsi)*1]),1);
HRRPart0bra0ket0hd200(inteval, &(inteval->stack[((hsi*126+7314)*1+lsi)*1]), &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+2020)*1+lsi)*1]), &(inteval->stack[((hsi*63+2220)*1+lsi)*1]),1);
HRRPart0bra0ket0gf200(inteval, &(inteval->stack[((hsi*150+4770)*1+lsi)*1]), &(inteval->stack[((hsi*126+7314)*1+lsi)*1]), &(inteval->stack[((hsi*90+2128)*1+lsi)*1]), &(inteval->stack[((hsi*90+2283)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*45+1920)*1+lsi)*1]), &(inteval->stack[((hsi*21+477)*1+lsi)*1]), &(inteval->stack[((hsi*15+513)*1+lsi)*1]), &(inteval->stack[((hsi*15+185)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+1965)*1+lsi)*1]), &(inteval->stack[((hsi*28+428)*1+lsi)*1]), &(inteval->stack[((hsi*21+477)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0bra0ket0g001d(inteval, &(inteval->stack[((hsi*90+2028)*1+lsi)*1]), &(inteval->stack[((hsi*63+1965)*1+lsi)*1]), &(inteval->stack[((hsi*45+1920)*1+lsi)*1]), &(inteval->stack[((hsi*45+5778)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p001(inteval, &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*28+1856)*1+lsi)*1]), &(inteval->stack[((hsi*21+1884)*1+lsi)*1]), &(inteval->stack[((hsi*21+969)*1+lsi)*1]), &(inteval->stack[((hsi*21+477)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p001(inteval, &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*21+1884)*1+lsi)*1]), &(inteval->stack[((hsi*15+1905)*1+lsi)*1]), &(inteval->stack[((hsi*15+1005)*1+lsi)*1]), &(inteval->stack[((hsi*15+513)*1+lsi)*1]),1);
HRRPart0bra0ket0g001d001(inteval, &(inteval->stack[((hsi*90+7440)*1+lsi)*1]), &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*45+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+1920)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p001(inteval, &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*36+1820)*1+lsi)*1]), &(inteval->stack[((hsi*28+1856)*1+lsi)*1]), &(inteval->stack[((hsi*28+920)*1+lsi)*1]), &(inteval->stack[((hsi*28+428)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d001(inteval, &(inteval->stack[((hsi*126+7530)*1+lsi)*1]), &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+5715)*1+lsi)*1]), &(inteval->stack[((hsi*63+1965)*1+lsi)*1]),1);
HRRPart0bra0ket0g001f001(inteval, &(inteval->stack[((hsi*150+4620)*1+lsi)*1]), &(inteval->stack[((hsi*126+7530)*1+lsi)*1]), &(inteval->stack[((hsi*90+7440)*1+lsi)*1]), &(inteval->stack[((hsi*90+5823)*1+lsi)*1]), &(inteval->stack[((hsi*90+2028)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p010(inteval, &(inteval->stack[((hsi*63+1820)*1+lsi)*1]), &(inteval->stack[((hsi*28+1756)*1+lsi)*1]), &(inteval->stack[((hsi*21+1784)*1+lsi)*1]), &(inteval->stack[((hsi*21+477)*1+lsi)*1]), &(inteval->stack[((hsi*21+805)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p010(inteval, &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*21+1784)*1+lsi)*1]), &(inteval->stack[((hsi*15+1805)*1+lsi)*1]), &(inteval->stack[((hsi*15+513)*1+lsi)*1]), &(inteval->stack[((hsi*15+841)*1+lsi)*1]),1);
HRRPart0bra0ket0g001d010(inteval, &(inteval->stack[((hsi*90+7656)*1+lsi)*1]), &(inteval->stack[((hsi*63+1820)*1+lsi)*1]), &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*45+1920)*1+lsi)*1]), &(inteval->stack[((hsi*45+5913)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p010(inteval, &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*36+1720)*1+lsi)*1]), &(inteval->stack[((hsi*28+1756)*1+lsi)*1]), &(inteval->stack[((hsi*28+428)*1+lsi)*1]), &(inteval->stack[((hsi*28+756)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d010(inteval, &(inteval->stack[((hsi*126+7746)*1+lsi)*1]), &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+1820)*1+lsi)*1]), &(inteval->stack[((hsi*63+1965)*1+lsi)*1]), &(inteval->stack[((hsi*63+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0g001f010(inteval, &(inteval->stack[((hsi*150+4470)*1+lsi)*1]), &(inteval->stack[((hsi*126+7746)*1+lsi)*1]), &(inteval->stack[((hsi*90+7656)*1+lsi)*1]), &(inteval->stack[((hsi*90+2028)*1+lsi)*1]), &(inteval->stack[((hsi*90+2420)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p100(inteval, &(inteval->stack[((hsi*63+1720)*1+lsi)*1]), &(inteval->stack[((hsi*28+1656)*1+lsi)*1]), &(inteval->stack[((hsi*21+1684)*1+lsi)*1]), &(inteval->stack[((hsi*21+477)*1+lsi)*1]), &(inteval->stack[((hsi*21+641)*1+lsi)*1]),1);
HRRPart0bra0ket0g001p100(inteval, &(inteval->stack[((hsi*45+1783)*1+lsi)*1]), &(inteval->stack[((hsi*21+1684)*1+lsi)*1]), &(inteval->stack[((hsi*15+1705)*1+lsi)*1]), &(inteval->stack[((hsi*15+513)*1+lsi)*1]), &(inteval->stack[((hsi*15+677)*1+lsi)*1]),1);
HRRPart0bra0ket0g001d100(inteval, &(inteval->stack[((hsi*90+1828)*1+lsi)*1]), &(inteval->stack[((hsi*63+1720)*1+lsi)*1]), &(inteval->stack[((hsi*45+1783)*1+lsi)*1]), &(inteval->stack[((hsi*45+1920)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p100(inteval, &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*36+1620)*1+lsi)*1]), &(inteval->stack[((hsi*28+1656)*1+lsi)*1]), &(inteval->stack[((hsi*28+428)*1+lsi)*1]), &(inteval->stack[((hsi*28+592)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d100(inteval, &(inteval->stack[((hsi*126+7872)*1+lsi)*1]), &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+1720)*1+lsi)*1]), &(inteval->stack[((hsi*63+1965)*1+lsi)*1]), &(inteval->stack[((hsi*63+2220)*1+lsi)*1]),1);
HRRPart0bra0ket0g001f100(inteval, &(inteval->stack[((hsi*150+4320)*1+lsi)*1]), &(inteval->stack[((hsi*126+7872)*1+lsi)*1]), &(inteval->stack[((hsi*90+1828)*1+lsi)*1]), &(inteval->stack[((hsi*90+2028)*1+lsi)*1]), &(inteval->stack[((hsi*90+2283)*1+lsi)*1]),1);
HRRPart0bra0ket0h002p(inteval, &(inteval->stack[((hsi*63+1620)*1+lsi)*1]), &(inteval->stack[((hsi*28+1556)*1+lsi)*1]), &(inteval->stack[((hsi*21+1584)*1+lsi)*1]), &(inteval->stack[((hsi*21+477)*1+lsi)*1]),1);
HRRPart0bra0ket0g002p(inteval, &(inteval->stack[((hsi*45+1683)*1+lsi)*1]), &(inteval->stack[((hsi*21+1584)*1+lsi)*1]), &(inteval->stack[((hsi*15+1605)*1+lsi)*1]), &(inteval->stack[((hsi*15+513)*1+lsi)*1]),1);
HRRPart0bra0ket0g002d(inteval, &(inteval->stack[((hsi*90+1728)*1+lsi)*1]), &(inteval->stack[((hsi*63+1620)*1+lsi)*1]), &(inteval->stack[((hsi*45+1683)*1+lsi)*1]), &(inteval->stack[((hsi*45+1920)*1+lsi)*1]),1);
HRRPart0bra0ket0i002p(inteval, &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*36+1520)*1+lsi)*1]), &(inteval->stack[((hsi*28+1556)*1+lsi)*1]), &(inteval->stack[((hsi*28+428)*1+lsi)*1]),1);
HRRPart0bra0ket0h002d(inteval, &(inteval->stack[((hsi*126+7998)*1+lsi)*1]), &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+1620)*1+lsi)*1]), &(inteval->stack[((hsi*63+1965)*1+lsi)*1]),1);
HRRPart0bra0ket0g002f(inteval, &(inteval->stack[((hsi*150+4170)*1+lsi)*1]), &(inteval->stack[((hsi*126+7998)*1+lsi)*1]), &(inteval->stack[((hsi*90+1728)*1+lsi)*1]), &(inteval->stack[((hsi*90+2028)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*45+1520)*1+lsi)*1]), &(inteval->stack[((hsi*21+313)*1+lsi)*1]), &(inteval->stack[((hsi*15+349)*1+lsi)*1]), &(inteval->stack[((hsi*15+185)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+1565)*1+lsi)*1]), &(inteval->stack[((hsi*28+264)*1+lsi)*1]), &(inteval->stack[((hsi*21+313)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0bra0ket0g010d(inteval, &(inteval->stack[((hsi*90+1628)*1+lsi)*1]), &(inteval->stack[((hsi*63+1565)*1+lsi)*1]), &(inteval->stack[((hsi*45+1520)*1+lsi)*1]), &(inteval->stack[((hsi*45+5778)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p001(inteval, &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*28+1456)*1+lsi)*1]), &(inteval->stack[((hsi*21+1484)*1+lsi)*1]), &(inteval->stack[((hsi*21+969)*1+lsi)*1]), &(inteval->stack[((hsi*21+313)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p001(inteval, &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*21+1484)*1+lsi)*1]), &(inteval->stack[((hsi*15+1505)*1+lsi)*1]), &(inteval->stack[((hsi*15+1005)*1+lsi)*1]), &(inteval->stack[((hsi*15+349)*1+lsi)*1]),1);
HRRPart0bra0ket0g010d001(inteval, &(inteval->stack[((hsi*90+8124)*1+lsi)*1]), &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*45+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+1520)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p001(inteval, &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*36+1420)*1+lsi)*1]), &(inteval->stack[((hsi*28+1456)*1+lsi)*1]), &(inteval->stack[((hsi*28+920)*1+lsi)*1]), &(inteval->stack[((hsi*28+264)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d001(inteval, &(inteval->stack[((hsi*126+8214)*1+lsi)*1]), &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+5715)*1+lsi)*1]), &(inteval->stack[((hsi*63+1565)*1+lsi)*1]),1);
HRRPart0bra0ket0g010f001(inteval, &(inteval->stack[((hsi*150+4020)*1+lsi)*1]), &(inteval->stack[((hsi*126+8214)*1+lsi)*1]), &(inteval->stack[((hsi*90+8124)*1+lsi)*1]), &(inteval->stack[((hsi*90+5823)*1+lsi)*1]), &(inteval->stack[((hsi*90+1628)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p010(inteval, &(inteval->stack[((hsi*63+1420)*1+lsi)*1]), &(inteval->stack[((hsi*28+1356)*1+lsi)*1]), &(inteval->stack[((hsi*21+1384)*1+lsi)*1]), &(inteval->stack[((hsi*21+805)*1+lsi)*1]), &(inteval->stack[((hsi*21+313)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p010(inteval, &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*21+1384)*1+lsi)*1]), &(inteval->stack[((hsi*15+1405)*1+lsi)*1]), &(inteval->stack[((hsi*15+841)*1+lsi)*1]), &(inteval->stack[((hsi*15+349)*1+lsi)*1]),1);
HRRPart0bra0ket0g010d010(inteval, &(inteval->stack[((hsi*90+8340)*1+lsi)*1]), &(inteval->stack[((hsi*63+1420)*1+lsi)*1]), &(inteval->stack[((hsi*45+6111)*1+lsi)*1]), &(inteval->stack[((hsi*45+5913)*1+lsi)*1]), &(inteval->stack[((hsi*45+1520)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p010(inteval, &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*36+1320)*1+lsi)*1]), &(inteval->stack[((hsi*28+1356)*1+lsi)*1]), &(inteval->stack[((hsi*28+756)*1+lsi)*1]), &(inteval->stack[((hsi*28+264)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d010(inteval, &(inteval->stack[((hsi*126+8430)*1+lsi)*1]), &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+1420)*1+lsi)*1]), &(inteval->stack[((hsi*63+5958)*1+lsi)*1]), &(inteval->stack[((hsi*63+1565)*1+lsi)*1]),1);
HRRPart0bra0ket0g010f010(inteval, &(inteval->stack[((hsi*150+3870)*1+lsi)*1]), &(inteval->stack[((hsi*126+8430)*1+lsi)*1]), &(inteval->stack[((hsi*90+8340)*1+lsi)*1]), &(inteval->stack[((hsi*90+2420)*1+lsi)*1]), &(inteval->stack[((hsi*90+1628)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p100(inteval, &(inteval->stack[((hsi*63+1320)*1+lsi)*1]), &(inteval->stack[((hsi*28+1256)*1+lsi)*1]), &(inteval->stack[((hsi*21+1284)*1+lsi)*1]), &(inteval->stack[((hsi*21+313)*1+lsi)*1]), &(inteval->stack[((hsi*21+641)*1+lsi)*1]),1);
HRRPart0bra0ket0g010p100(inteval, &(inteval->stack[((hsi*45+1383)*1+lsi)*1]), &(inteval->stack[((hsi*21+1284)*1+lsi)*1]), &(inteval->stack[((hsi*15+1305)*1+lsi)*1]), &(inteval->stack[((hsi*15+349)*1+lsi)*1]), &(inteval->stack[((hsi*15+677)*1+lsi)*1]),1);
HRRPart0bra0ket0g010d100(inteval, &(inteval->stack[((hsi*90+1428)*1+lsi)*1]), &(inteval->stack[((hsi*63+1320)*1+lsi)*1]), &(inteval->stack[((hsi*45+1383)*1+lsi)*1]), &(inteval->stack[((hsi*45+1520)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p100(inteval, &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*36+1220)*1+lsi)*1]), &(inteval->stack[((hsi*28+1256)*1+lsi)*1]), &(inteval->stack[((hsi*28+264)*1+lsi)*1]), &(inteval->stack[((hsi*28+592)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d100(inteval, &(inteval->stack[((hsi*126+8556)*1+lsi)*1]), &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+1320)*1+lsi)*1]), &(inteval->stack[((hsi*63+1565)*1+lsi)*1]), &(inteval->stack[((hsi*63+2220)*1+lsi)*1]),1);
HRRPart0bra0ket0g010f100(inteval, &(inteval->stack[((hsi*150+3720)*1+lsi)*1]), &(inteval->stack[((hsi*126+8556)*1+lsi)*1]), &(inteval->stack[((hsi*90+1428)*1+lsi)*1]), &(inteval->stack[((hsi*90+1628)*1+lsi)*1]), &(inteval->stack[((hsi*90+2283)*1+lsi)*1]),1);
HRRPart0bra0ket0h011p(inteval, &(inteval->stack[((hsi*63+1220)*1+lsi)*1]), &(inteval->stack[((hsi*28+1156)*1+lsi)*1]), &(inteval->stack[((hsi*21+1184)*1+lsi)*1]), &(inteval->stack[((hsi*21+477)*1+lsi)*1]), &(inteval->stack[((hsi*21+313)*1+lsi)*1]),1);
HRRPart0bra0ket0g011p(inteval, &(inteval->stack[((hsi*45+1283)*1+lsi)*1]), &(inteval->stack[((hsi*21+1184)*1+lsi)*1]), &(inteval->stack[((hsi*15+1205)*1+lsi)*1]), &(inteval->stack[((hsi*15+513)*1+lsi)*1]), &(inteval->stack[((hsi*15+349)*1+lsi)*1]),1);
HRRPart0bra0ket0g011d(inteval, &(inteval->stack[((hsi*90+1328)*1+lsi)*1]), &(inteval->stack[((hsi*63+1220)*1+lsi)*1]), &(inteval->stack[((hsi*45+1283)*1+lsi)*1]), &(inteval->stack[((hsi*45+1920)*1+lsi)*1]), &(inteval->stack[((hsi*45+1520)*1+lsi)*1]),1);
HRRPart0bra0ket0i011p(inteval, &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*36+1120)*1+lsi)*1]), &(inteval->stack[((hsi*28+1156)*1+lsi)*1]), &(inteval->stack[((hsi*28+428)*1+lsi)*1]), &(inteval->stack[((hsi*28+264)*1+lsi)*1]),1);
HRRPart0bra0ket0h011d(inteval, &(inteval->stack[((hsi*126+8682)*1+lsi)*1]), &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+1220)*1+lsi)*1]), &(inteval->stack[((hsi*63+1965)*1+lsi)*1]), &(inteval->stack[((hsi*63+1565)*1+lsi)*1]),1);
HRRPart0bra0ket0g011f(inteval, &(inteval->stack[((hsi*150+3570)*1+lsi)*1]), &(inteval->stack[((hsi*126+8682)*1+lsi)*1]), &(inteval->stack[((hsi*90+1328)*1+lsi)*1]), &(inteval->stack[((hsi*90+2028)*1+lsi)*1]), &(inteval->stack[((hsi*90+1628)*1+lsi)*1]),1);
HRRPart0bra0ket0h020p(inteval, &(inteval->stack[((hsi*63+1120)*1+lsi)*1]), &(inteval->stack[((hsi*28+1056)*1+lsi)*1]), &(inteval->stack[((hsi*21+1084)*1+lsi)*1]), &(inteval->stack[((hsi*21+313)*1+lsi)*1]),1);
HRRPart0bra0ket0g020p(inteval, &(inteval->stack[((hsi*45+1183)*1+lsi)*1]), &(inteval->stack[((hsi*21+1084)*1+lsi)*1]), &(inteval->stack[((hsi*15+1105)*1+lsi)*1]), &(inteval->stack[((hsi*15+349)*1+lsi)*1]),1);
HRRPart0bra0ket0g020d(inteval, &(inteval->stack[((hsi*90+1228)*1+lsi)*1]), &(inteval->stack[((hsi*63+1120)*1+lsi)*1]), &(inteval->stack[((hsi*45+1183)*1+lsi)*1]), &(inteval->stack[((hsi*45+1520)*1+lsi)*1]),1);
HRRPart0bra0ket0i020p(inteval, &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*36+1020)*1+lsi)*1]), &(inteval->stack[((hsi*28+1056)*1+lsi)*1]), &(inteval->stack[((hsi*28+264)*1+lsi)*1]),1);
HRRPart0bra0ket0h020d(inteval, &(inteval->stack[((hsi*126+8808)*1+lsi)*1]), &(inteval->stack[((hsi*84+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+1120)*1+lsi)*1]), &(inteval->stack[((hsi*63+1565)*1+lsi)*1]),1);
HRRPart0bra0ket0g020f(inteval, &(inteval->stack[((hsi*150+3420)*1+lsi)*1]), &(inteval->stack[((hsi*126+8808)*1+lsi)*1]), &(inteval->stack[((hsi*90+1228)*1+lsi)*1]), &(inteval->stack[((hsi*90+1628)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*45+1020)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]), &(inteval->stack[((hsi*15+170)*1+lsi)*1]), &(inteval->stack[((hsi*15+185)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+1065)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0bra0ket0g100d(inteval, &(inteval->stack[((hsi*90+1128)*1+lsi)*1]), &(inteval->stack[((hsi*63+1065)*1+lsi)*1]), &(inteval->stack[((hsi*45+1020)*1+lsi)*1]), &(inteval->stack[((hsi*45+5778)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p001(inteval, &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*28+892)*1+lsi)*1]), &(inteval->stack[((hsi*21+948)*1+lsi)*1]), &(inteval->stack[((hsi*21+969)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p001(inteval, &(inteval->stack[((hsi*45+5778)*1+lsi)*1]), &(inteval->stack[((hsi*21+948)*1+lsi)*1]), &(inteval->stack[((hsi*15+990)*1+lsi)*1]), &(inteval->stack[((hsi*15+1005)*1+lsi)*1]), &(inteval->stack[((hsi*15+170)*1+lsi)*1]),1);
HRRPart0bra0ket0g100d001(inteval, &(inteval->stack[((hsi*90+8934)*1+lsi)*1]), &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*45+5778)*1+lsi)*1]), &(inteval->stack[((hsi*45+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+1020)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p001(inteval, &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*36+856)*1+lsi)*1]), &(inteval->stack[((hsi*28+892)*1+lsi)*1]), &(inteval->stack[((hsi*28+920)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d001(inteval, &(inteval->stack[((hsi*126+856)*1+lsi)*1]), &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*63+6456)*1+lsi)*1]), &(inteval->stack[((hsi*63+5715)*1+lsi)*1]), &(inteval->stack[((hsi*63+1065)*1+lsi)*1]),1);
HRRPart0bra0ket0g100f001(inteval, &(inteval->stack[((hsi*150+3270)*1+lsi)*1]), &(inteval->stack[((hsi*126+856)*1+lsi)*1]), &(inteval->stack[((hsi*90+8934)*1+lsi)*1]), &(inteval->stack[((hsi*90+5823)*1+lsi)*1]), &(inteval->stack[((hsi*90+1128)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p010(inteval, &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*28+728)*1+lsi)*1]), &(inteval->stack[((hsi*21+784)*1+lsi)*1]), &(inteval->stack[((hsi*21+805)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p010(inteval, &(inteval->stack[((hsi*45+5733)*1+lsi)*1]), &(inteval->stack[((hsi*21+784)*1+lsi)*1]), &(inteval->stack[((hsi*15+826)*1+lsi)*1]), &(inteval->stack[((hsi*15+841)*1+lsi)*1]), &(inteval->stack[((hsi*15+170)*1+lsi)*1]),1);
HRRPart0bra0ket0g100d010(inteval, &(inteval->stack[((hsi*90+9024)*1+lsi)*1]), &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+5733)*1+lsi)*1]), &(inteval->stack[((hsi*45+5913)*1+lsi)*1]), &(inteval->stack[((hsi*45+1020)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p010(inteval, &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*36+692)*1+lsi)*1]), &(inteval->stack[((hsi*28+728)*1+lsi)*1]), &(inteval->stack[((hsi*28+756)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d010(inteval, &(inteval->stack[((hsi*126+692)*1+lsi)*1]), &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*63+5958)*1+lsi)*1]), &(inteval->stack[((hsi*63+1065)*1+lsi)*1]),1);
HRRPart0bra0ket0g100f010(inteval, &(inteval->stack[((hsi*150+3120)*1+lsi)*1]), &(inteval->stack[((hsi*126+692)*1+lsi)*1]), &(inteval->stack[((hsi*90+9024)*1+lsi)*1]), &(inteval->stack[((hsi*90+2420)*1+lsi)*1]), &(inteval->stack[((hsi*90+1128)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p100(inteval, &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*28+564)*1+lsi)*1]), &(inteval->stack[((hsi*21+620)*1+lsi)*1]), &(inteval->stack[((hsi*21+641)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0g100p100(inteval, &(inteval->stack[((hsi*45+5913)*1+lsi)*1]), &(inteval->stack[((hsi*21+620)*1+lsi)*1]), &(inteval->stack[((hsi*15+662)*1+lsi)*1]), &(inteval->stack[((hsi*15+677)*1+lsi)*1]), &(inteval->stack[((hsi*15+170)*1+lsi)*1]),1);
HRRPart0bra0ket0g100d100(inteval, &(inteval->stack[((hsi*90+5733)*1+lsi)*1]), &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+5913)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*45+1020)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p100(inteval, &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*36+528)*1+lsi)*1]), &(inteval->stack[((hsi*28+564)*1+lsi)*1]), &(inteval->stack[((hsi*28+592)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d100(inteval, &(inteval->stack[((hsi*126+528)*1+lsi)*1]), &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*63+2220)*1+lsi)*1]), &(inteval->stack[((hsi*63+1065)*1+lsi)*1]),1);
HRRPart0bra0ket0g100f100(inteval, &(inteval->stack[((hsi*150+2970)*1+lsi)*1]), &(inteval->stack[((hsi*126+528)*1+lsi)*1]), &(inteval->stack[((hsi*90+5733)*1+lsi)*1]), &(inteval->stack[((hsi*90+2283)*1+lsi)*1]), &(inteval->stack[((hsi*90+1128)*1+lsi)*1]),1);
HRRPart0bra0ket0h101p(inteval, &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*28+400)*1+lsi)*1]), &(inteval->stack[((hsi*21+456)*1+lsi)*1]), &(inteval->stack[((hsi*21+477)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0g101p(inteval, &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*21+456)*1+lsi)*1]), &(inteval->stack[((hsi*15+498)*1+lsi)*1]), &(inteval->stack[((hsi*15+513)*1+lsi)*1]), &(inteval->stack[((hsi*15+170)*1+lsi)*1]),1);
HRRPart0bra0ket0g101d(inteval, &(inteval->stack[((hsi*90+5913)*1+lsi)*1]), &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*45+1920)*1+lsi)*1]), &(inteval->stack[((hsi*45+1020)*1+lsi)*1]),1);
HRRPart0bra0ket0i101p(inteval, &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*36+364)*1+lsi)*1]), &(inteval->stack[((hsi*28+400)*1+lsi)*1]), &(inteval->stack[((hsi*28+428)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0h101d(inteval, &(inteval->stack[((hsi*126+364)*1+lsi)*1]), &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*63+1965)*1+lsi)*1]), &(inteval->stack[((hsi*63+1065)*1+lsi)*1]),1);
HRRPart0bra0ket0g101f(inteval, &(inteval->stack[((hsi*150+2820)*1+lsi)*1]), &(inteval->stack[((hsi*126+364)*1+lsi)*1]), &(inteval->stack[((hsi*90+5913)*1+lsi)*1]), &(inteval->stack[((hsi*90+2028)*1+lsi)*1]), &(inteval->stack[((hsi*90+1128)*1+lsi)*1]),1);
HRRPart0bra0ket0h110p(inteval, &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*28+236)*1+lsi)*1]), &(inteval->stack[((hsi*21+292)*1+lsi)*1]), &(inteval->stack[((hsi*21+313)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0g110p(inteval, &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*21+292)*1+lsi)*1]), &(inteval->stack[((hsi*15+334)*1+lsi)*1]), &(inteval->stack[((hsi*15+349)*1+lsi)*1]), &(inteval->stack[((hsi*15+170)*1+lsi)*1]),1);
HRRPart0bra0ket0g110d(inteval, &(inteval->stack[((hsi*90+1918)*1+lsi)*1]), &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*45+1520)*1+lsi)*1]), &(inteval->stack[((hsi*45+1020)*1+lsi)*1]),1);
HRRPart0bra0ket0i110p(inteval, &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*36+200)*1+lsi)*1]), &(inteval->stack[((hsi*28+236)*1+lsi)*1]), &(inteval->stack[((hsi*28+264)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0h110d(inteval, &(inteval->stack[((hsi*126+185)*1+lsi)*1]), &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*63+1565)*1+lsi)*1]), &(inteval->stack[((hsi*63+1065)*1+lsi)*1]),1);
HRRPart0bra0ket0g110f(inteval, &(inteval->stack[((hsi*150+2670)*1+lsi)*1]), &(inteval->stack[((hsi*126+185)*1+lsi)*1]), &(inteval->stack[((hsi*90+1918)*1+lsi)*1]), &(inteval->stack[((hsi*90+1628)*1+lsi)*1]), &(inteval->stack[((hsi*90+1128)*1+lsi)*1]),1);
HRRPart0bra0ket0h200p(inteval, &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0bra0ket0g200p(inteval, &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*15+155)*1+lsi)*1]), &(inteval->stack[((hsi*15+170)*1+lsi)*1]),1);
HRRPart0bra0ket0g200d(inteval, &(inteval->stack[((hsi*90+1518)*1+lsi)*1]), &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+6321)*1+lsi)*1]), &(inteval->stack[((hsi*45+1020)*1+lsi)*1]),1);
HRRPart0bra0ket0i200p(inteval, &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0bra0ket0h200d(inteval, &(inteval->stack[((hsi*126+0)*1+lsi)*1]), &(inteval->stack[((hsi*84+6111)*1+lsi)*1]), &(inteval->stack[((hsi*63+5670)*1+lsi)*1]), &(inteval->stack[((hsi*63+1065)*1+lsi)*1]),1);
HRRPart0bra0ket0g200f(inteval, &(inteval->stack[((hsi*150+2520)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]), &(inteval->stack[((hsi*90+1518)*1+lsi)*1]), &(inteval->stack[((hsi*90+1128)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*150+2520)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*150+2670)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*150+2820)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*150+2970)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*150+3120)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*150+3270)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*150+3420)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*150+3570)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*150+3720)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*150+3870)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*150+4020)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*150+4170)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*150+4320)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*150+4470)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*150+4620)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*150+4770)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*150+4920)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*150+5070)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*150+5220)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*150+5370)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*150+5520)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
