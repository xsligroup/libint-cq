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
#include <HRRPart0ket0bra0gd002.h>
#include <HRRPart0ket0bra0gd011.h>
#include <HRRPart0ket0bra0gd020.h>
#include <HRRPart0ket0bra0gd101.h>
#include <HRRPart0ket0bra0gd110.h>
#include <HRRPart0ket0bra0gd200.h>
#include <HRRPart0ket0bra0gp001.h>
#include <HRRPart0ket0bra0gp002.h>
#include <HRRPart0ket0bra0gp010.h>
#include <HRRPart0ket0bra0gp011.h>
#include <HRRPart0ket0bra0gp020.h>
#include <HRRPart0ket0bra0gp100.h>
#include <HRRPart0ket0bra0gp101.h>
#include <HRRPart0ket0bra0gp110.h>
#include <HRRPart0ket0bra0gp200.h>
#include <HRRPart0ket0bra0g001d001.h>
#include <HRRPart0ket0bra0g001d010.h>
#include <HRRPart0ket0bra0g001d100.h>
#include <HRRPart0ket0bra0g001p.h>
#include <HRRPart0ket0bra0g001p001.h>
#include <HRRPart0ket0bra0g001p010.h>
#include <HRRPart0ket0bra0g001p100.h>
#include <HRRPart0ket0bra0g002d.h>
#include <HRRPart0ket0bra0g002p.h>
#include <HRRPart0ket0bra0g010d001.h>
#include <HRRPart0ket0bra0g010d010.h>
#include <HRRPart0ket0bra0g010d100.h>
#include <HRRPart0ket0bra0g010p.h>
#include <HRRPart0ket0bra0g010p001.h>
#include <HRRPart0ket0bra0g010p010.h>
#include <HRRPart0ket0bra0g010p100.h>
#include <HRRPart0ket0bra0g011d.h>
#include <HRRPart0ket0bra0g011p.h>
#include <HRRPart0ket0bra0g020d.h>
#include <HRRPart0ket0bra0g020p.h>
#include <HRRPart0ket0bra0g100d001.h>
#include <HRRPart0ket0bra0g100d010.h>
#include <HRRPart0ket0bra0g100d100.h>
#include <HRRPart0ket0bra0g100p.h>
#include <HRRPart0ket0bra0g100p001.h>
#include <HRRPart0ket0bra0g100p010.h>
#include <HRRPart0ket0bra0g100p100.h>
#include <HRRPart0ket0bra0g101d.h>
#include <HRRPart0ket0bra0g101p.h>
#include <HRRPart0ket0bra0g110d.h>
#include <HRRPart0ket0bra0g110p.h>
#include <HRRPart0ket0bra0g200d.h>
#include <HRRPart0ket0bra0g200p.h>
#include <HRRPart0ket0bra0hp002.h>
#include <HRRPart0ket0bra0hp011.h>
#include <HRRPart0ket0bra0hp020.h>
#include <HRRPart0ket0bra0hp101.h>
#include <HRRPart0ket0bra0hp110.h>
#include <HRRPart0ket0bra0hp200.h>
#include <HRRPart0ket0bra0h001p001.h>
#include <HRRPart0ket0bra0h001p010.h>
#include <HRRPart0ket0bra0h001p100.h>
#include <HRRPart0ket0bra0h002p.h>
#include <HRRPart0ket0bra0h010p001.h>
#include <HRRPart0ket0bra0h010p010.h>
#include <HRRPart0ket0bra0h010p100.h>
#include <HRRPart0ket0bra0h011p.h>
#include <HRRPart0ket0bra0h020p.h>
#include <HRRPart0ket0bra0h100p001.h>
#include <HRRPart0ket0bra0h100p010.h>
#include <HRRPart0ket0bra0h100p100.h>
#include <HRRPart0ket0bra0h101p.h>
#include <HRRPart0ket0bra0h110p.h>
#include <HRRPart0ket0bra0h200p.h>
#include <_elecpotderiv2_D_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv2_D_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1575)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv2_D_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0g001p(inteval, &(inteval->stack[((hsi*45+3465)*1+lsi)*1]), &(inteval->stack[((hsi*21+819)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0ket0bra0g002p(inteval, &(inteval->stack[((hsi*45+3510)*1+lsi)*1]), &(inteval->stack[((hsi*21+1554)*1+lsi)*1]), &(inteval->stack[((hsi*15+405)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]),1);
HRRPart0ket0bra0h002p(inteval, &(inteval->stack[((hsi*63+3555)*1+lsi)*1]), &(inteval->stack[((hsi*28+1526)*1+lsi)*1]), &(inteval->stack[((hsi*21+1554)*1+lsi)*1]), &(inteval->stack[((hsi*21+819)*1+lsi)*1]),1);
HRRPart0ket0bra0g002d(inteval, &(inteval->stack[((hsi*90+3375)*1+lsi)*1]), &(inteval->stack[((hsi*63+3555)*1+lsi)*1]), &(inteval->stack[((hsi*45+3510)*1+lsi)*1]), &(inteval->stack[((hsi*45+3465)*1+lsi)*1]),1);
HRRPart0ket0bra0g010p(inteval, &(inteval->stack[((hsi*45+1526)*1+lsi)*1]), &(inteval->stack[((hsi*21+749)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0ket0bra0g011p(inteval, &(inteval->stack[((hsi*45+3618)*1+lsi)*1]), &(inteval->stack[((hsi*21+1505)*1+lsi)*1]), &(inteval->stack[((hsi*15+390)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]),1);
HRRPart0ket0bra0h011p(inteval, &(inteval->stack[((hsi*63+3663)*1+lsi)*1]), &(inteval->stack[((hsi*28+1477)*1+lsi)*1]), &(inteval->stack[((hsi*21+1505)*1+lsi)*1]), &(inteval->stack[((hsi*21+819)*1+lsi)*1]), &(inteval->stack[((hsi*21+749)*1+lsi)*1]),1);
HRRPart0ket0bra0g011d(inteval, &(inteval->stack[((hsi*90+3285)*1+lsi)*1]), &(inteval->stack[((hsi*63+3663)*1+lsi)*1]), &(inteval->stack[((hsi*45+3618)*1+lsi)*1]), &(inteval->stack[((hsi*45+3465)*1+lsi)*1]), &(inteval->stack[((hsi*45+1526)*1+lsi)*1]),1);
HRRPart0ket0bra0g020p(inteval, &(inteval->stack[((hsi*45+1477)*1+lsi)*1]), &(inteval->stack[((hsi*21+1456)*1+lsi)*1]), &(inteval->stack[((hsi*15+375)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]),1);
HRRPart0ket0bra0h020p(inteval, &(inteval->stack[((hsi*63+3726)*1+lsi)*1]), &(inteval->stack[((hsi*28+1428)*1+lsi)*1]), &(inteval->stack[((hsi*21+1456)*1+lsi)*1]), &(inteval->stack[((hsi*21+749)*1+lsi)*1]),1);
HRRPart0ket0bra0g020d(inteval, &(inteval->stack[((hsi*90+3195)*1+lsi)*1]), &(inteval->stack[((hsi*63+3726)*1+lsi)*1]), &(inteval->stack[((hsi*45+1477)*1+lsi)*1]), &(inteval->stack[((hsi*45+1526)*1+lsi)*1]),1);
HRRPart0ket0bra0g100p(inteval, &(inteval->stack[((hsi*45+375)*1+lsi)*1]), &(inteval->stack[((hsi*21+679)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0ket0bra0g101p(inteval, &(inteval->stack[((hsi*45+1428)*1+lsi)*1]), &(inteval->stack[((hsi*21+1407)*1+lsi)*1]), &(inteval->stack[((hsi*15+360)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]),1);
HRRPart0ket0bra0h101p(inteval, &(inteval->stack[((hsi*63+3789)*1+lsi)*1]), &(inteval->stack[((hsi*28+1379)*1+lsi)*1]), &(inteval->stack[((hsi*21+1407)*1+lsi)*1]), &(inteval->stack[((hsi*21+819)*1+lsi)*1]), &(inteval->stack[((hsi*21+679)*1+lsi)*1]),1);
HRRPart0ket0bra0g101d(inteval, &(inteval->stack[((hsi*90+3105)*1+lsi)*1]), &(inteval->stack[((hsi*63+3789)*1+lsi)*1]), &(inteval->stack[((hsi*45+1428)*1+lsi)*1]), &(inteval->stack[((hsi*45+3465)*1+lsi)*1]), &(inteval->stack[((hsi*45+375)*1+lsi)*1]),1);
HRRPart0ket0bra0g110p(inteval, &(inteval->stack[((hsi*45+1379)*1+lsi)*1]), &(inteval->stack[((hsi*21+1358)*1+lsi)*1]), &(inteval->stack[((hsi*15+345)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]),1);
HRRPart0ket0bra0h110p(inteval, &(inteval->stack[((hsi*63+3852)*1+lsi)*1]), &(inteval->stack[((hsi*28+1330)*1+lsi)*1]), &(inteval->stack[((hsi*21+1358)*1+lsi)*1]), &(inteval->stack[((hsi*21+749)*1+lsi)*1]), &(inteval->stack[((hsi*21+679)*1+lsi)*1]),1);
HRRPart0ket0bra0g110d(inteval, &(inteval->stack[((hsi*90+3015)*1+lsi)*1]), &(inteval->stack[((hsi*63+3852)*1+lsi)*1]), &(inteval->stack[((hsi*45+1379)*1+lsi)*1]), &(inteval->stack[((hsi*45+1526)*1+lsi)*1]), &(inteval->stack[((hsi*45+375)*1+lsi)*1]),1);
HRRPart0ket0bra0g200p(inteval, &(inteval->stack[((hsi*45+1330)*1+lsi)*1]), &(inteval->stack[((hsi*21+1309)*1+lsi)*1]), &(inteval->stack[((hsi*15+330)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]),1);
HRRPart0ket0bra0h200p(inteval, &(inteval->stack[((hsi*63+3915)*1+lsi)*1]), &(inteval->stack[((hsi*28+1281)*1+lsi)*1]), &(inteval->stack[((hsi*21+1309)*1+lsi)*1]), &(inteval->stack[((hsi*21+679)*1+lsi)*1]),1);
HRRPart0ket0bra0g200d(inteval, &(inteval->stack[((hsi*90+2925)*1+lsi)*1]), &(inteval->stack[((hsi*63+3915)*1+lsi)*1]), &(inteval->stack[((hsi*45+1330)*1+lsi)*1]), &(inteval->stack[((hsi*45+375)*1+lsi)*1]),1);
HRRPart0ket0bra0gp001(inteval, &(inteval->stack[((hsi*45+330)*1+lsi)*1]), &(inteval->stack[((hsi*21+609)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0ket0bra0g001p001(inteval, &(inteval->stack[((hsi*45+1281)*1+lsi)*1]), &(inteval->stack[((hsi*21+1260)*1+lsi)*1]), &(inteval->stack[((hsi*15+315)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]),1);
HRRPart0ket0bra0h001p001(inteval, &(inteval->stack[((hsi*63+3978)*1+lsi)*1]), &(inteval->stack[((hsi*28+1232)*1+lsi)*1]), &(inteval->stack[((hsi*21+1260)*1+lsi)*1]), &(inteval->stack[((hsi*21+609)*1+lsi)*1]), &(inteval->stack[((hsi*21+819)*1+lsi)*1]),1);
HRRPart0ket0bra0g001d001(inteval, &(inteval->stack[((hsi*90+2835)*1+lsi)*1]), &(inteval->stack[((hsi*63+3978)*1+lsi)*1]), &(inteval->stack[((hsi*45+1281)*1+lsi)*1]), &(inteval->stack[((hsi*45+330)*1+lsi)*1]), &(inteval->stack[((hsi*45+3465)*1+lsi)*1]),1);
HRRPart0ket0bra0g010p001(inteval, &(inteval->stack[((hsi*45+1232)*1+lsi)*1]), &(inteval->stack[((hsi*21+1211)*1+lsi)*1]), &(inteval->stack[((hsi*15+300)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p001(inteval, &(inteval->stack[((hsi*63+4041)*1+lsi)*1]), &(inteval->stack[((hsi*28+1183)*1+lsi)*1]), &(inteval->stack[((hsi*21+1211)*1+lsi)*1]), &(inteval->stack[((hsi*21+609)*1+lsi)*1]), &(inteval->stack[((hsi*21+749)*1+lsi)*1]),1);
HRRPart0ket0bra0g010d001(inteval, &(inteval->stack[((hsi*90+2745)*1+lsi)*1]), &(inteval->stack[((hsi*63+4041)*1+lsi)*1]), &(inteval->stack[((hsi*45+1232)*1+lsi)*1]), &(inteval->stack[((hsi*45+330)*1+lsi)*1]), &(inteval->stack[((hsi*45+1526)*1+lsi)*1]),1);
HRRPart0ket0bra0g100p001(inteval, &(inteval->stack[((hsi*45+1183)*1+lsi)*1]), &(inteval->stack[((hsi*21+1162)*1+lsi)*1]), &(inteval->stack[((hsi*15+285)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p001(inteval, &(inteval->stack[((hsi*63+4104)*1+lsi)*1]), &(inteval->stack[((hsi*28+1134)*1+lsi)*1]), &(inteval->stack[((hsi*21+1162)*1+lsi)*1]), &(inteval->stack[((hsi*21+609)*1+lsi)*1]), &(inteval->stack[((hsi*21+679)*1+lsi)*1]),1);
HRRPart0ket0bra0g100d001(inteval, &(inteval->stack[((hsi*90+2655)*1+lsi)*1]), &(inteval->stack[((hsi*63+4104)*1+lsi)*1]), &(inteval->stack[((hsi*45+1183)*1+lsi)*1]), &(inteval->stack[((hsi*45+330)*1+lsi)*1]), &(inteval->stack[((hsi*45+375)*1+lsi)*1]),1);
HRRPart0ket0bra0gp002(inteval, &(inteval->stack[((hsi*45+285)*1+lsi)*1]), &(inteval->stack[((hsi*21+1113)*1+lsi)*1]), &(inteval->stack[((hsi*15+270)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]),1);
HRRPart0ket0bra0hp002(inteval, &(inteval->stack[((hsi*63+4167)*1+lsi)*1]), &(inteval->stack[((hsi*28+1085)*1+lsi)*1]), &(inteval->stack[((hsi*21+1113)*1+lsi)*1]), &(inteval->stack[((hsi*21+609)*1+lsi)*1]),1);
HRRPart0ket0bra0gd002(inteval, &(inteval->stack[((hsi*90+2565)*1+lsi)*1]), &(inteval->stack[((hsi*63+4167)*1+lsi)*1]), &(inteval->stack[((hsi*45+285)*1+lsi)*1]), &(inteval->stack[((hsi*45+330)*1+lsi)*1]),1);
HRRPart0ket0bra0gp010(inteval, &(inteval->stack[((hsi*45+1085)*1+lsi)*1]), &(inteval->stack[((hsi*21+539)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0ket0bra0g001p010(inteval, &(inteval->stack[((hsi*45+1130)*1+lsi)*1]), &(inteval->stack[((hsi*21+1064)*1+lsi)*1]), &(inteval->stack[((hsi*15+255)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]),1);
HRRPart0ket0bra0h001p010(inteval, &(inteval->stack[((hsi*63+4230)*1+lsi)*1]), &(inteval->stack[((hsi*28+1036)*1+lsi)*1]), &(inteval->stack[((hsi*21+1064)*1+lsi)*1]), &(inteval->stack[((hsi*21+819)*1+lsi)*1]), &(inteval->stack[((hsi*21+539)*1+lsi)*1]),1);
HRRPart0ket0bra0g001d010(inteval, &(inteval->stack[((hsi*90+2475)*1+lsi)*1]), &(inteval->stack[((hsi*63+4230)*1+lsi)*1]), &(inteval->stack[((hsi*45+1130)*1+lsi)*1]), &(inteval->stack[((hsi*45+3465)*1+lsi)*1]), &(inteval->stack[((hsi*45+1085)*1+lsi)*1]),1);
HRRPart0ket0bra0g010p010(inteval, &(inteval->stack[((hsi*45+1036)*1+lsi)*1]), &(inteval->stack[((hsi*21+1015)*1+lsi)*1]), &(inteval->stack[((hsi*15+240)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p010(inteval, &(inteval->stack[((hsi*63+4293)*1+lsi)*1]), &(inteval->stack[((hsi*28+987)*1+lsi)*1]), &(inteval->stack[((hsi*21+1015)*1+lsi)*1]), &(inteval->stack[((hsi*21+539)*1+lsi)*1]), &(inteval->stack[((hsi*21+749)*1+lsi)*1]),1);
HRRPart0ket0bra0g010d010(inteval, &(inteval->stack[((hsi*90+2385)*1+lsi)*1]), &(inteval->stack[((hsi*63+4293)*1+lsi)*1]), &(inteval->stack[((hsi*45+1036)*1+lsi)*1]), &(inteval->stack[((hsi*45+1085)*1+lsi)*1]), &(inteval->stack[((hsi*45+1526)*1+lsi)*1]),1);
HRRPart0ket0bra0g100p010(inteval, &(inteval->stack[((hsi*45+240)*1+lsi)*1]), &(inteval->stack[((hsi*21+966)*1+lsi)*1]), &(inteval->stack[((hsi*15+225)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p010(inteval, &(inteval->stack[((hsi*63+4356)*1+lsi)*1]), &(inteval->stack[((hsi*28+938)*1+lsi)*1]), &(inteval->stack[((hsi*21+966)*1+lsi)*1]), &(inteval->stack[((hsi*21+539)*1+lsi)*1]), &(inteval->stack[((hsi*21+679)*1+lsi)*1]),1);
HRRPart0ket0bra0g100d010(inteval, &(inteval->stack[((hsi*90+2295)*1+lsi)*1]), &(inteval->stack[((hsi*63+4356)*1+lsi)*1]), &(inteval->stack[((hsi*45+240)*1+lsi)*1]), &(inteval->stack[((hsi*45+1085)*1+lsi)*1]), &(inteval->stack[((hsi*45+375)*1+lsi)*1]),1);
HRRPart0ket0bra0gp011(inteval, &(inteval->stack[((hsi*45+938)*1+lsi)*1]), &(inteval->stack[((hsi*21+917)*1+lsi)*1]), &(inteval->stack[((hsi*15+210)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]),1);
HRRPart0ket0bra0hp011(inteval, &(inteval->stack[((hsi*63+4419)*1+lsi)*1]), &(inteval->stack[((hsi*28+889)*1+lsi)*1]), &(inteval->stack[((hsi*21+917)*1+lsi)*1]), &(inteval->stack[((hsi*21+609)*1+lsi)*1]), &(inteval->stack[((hsi*21+539)*1+lsi)*1]),1);
HRRPart0ket0bra0gd011(inteval, &(inteval->stack[((hsi*90+2205)*1+lsi)*1]), &(inteval->stack[((hsi*63+4419)*1+lsi)*1]), &(inteval->stack[((hsi*45+938)*1+lsi)*1]), &(inteval->stack[((hsi*45+330)*1+lsi)*1]), &(inteval->stack[((hsi*45+1085)*1+lsi)*1]),1);
HRRPart0ket0bra0gp020(inteval, &(inteval->stack[((hsi*45+983)*1+lsi)*1]), &(inteval->stack[((hsi*21+868)*1+lsi)*1]), &(inteval->stack[((hsi*15+195)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]),1);
HRRPart0ket0bra0hp020(inteval, &(inteval->stack[((hsi*63+4482)*1+lsi)*1]), &(inteval->stack[((hsi*28+840)*1+lsi)*1]), &(inteval->stack[((hsi*21+868)*1+lsi)*1]), &(inteval->stack[((hsi*21+539)*1+lsi)*1]),1);
HRRPart0ket0bra0gd020(inteval, &(inteval->stack[((hsi*90+2115)*1+lsi)*1]), &(inteval->stack[((hsi*63+4482)*1+lsi)*1]), &(inteval->stack[((hsi*45+983)*1+lsi)*1]), &(inteval->stack[((hsi*45+1085)*1+lsi)*1]),1);
HRRPart0ket0bra0gp100(inteval, &(inteval->stack[((hsi*45+195)*1+lsi)*1]), &(inteval->stack[((hsi*21+469)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]), &(inteval->stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart0ket0bra0g001p100(inteval, &(inteval->stack[((hsi*45+840)*1+lsi)*1]), &(inteval->stack[((hsi*21+798)*1+lsi)*1]), &(inteval->stack[((hsi*15+165)*1+lsi)*1]), &(inteval->stack[((hsi*15+180)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]),1);
HRRPart0ket0bra0h001p100(inteval, &(inteval->stack[((hsi*63+4545)*1+lsi)*1]), &(inteval->stack[((hsi*28+770)*1+lsi)*1]), &(inteval->stack[((hsi*21+798)*1+lsi)*1]), &(inteval->stack[((hsi*21+819)*1+lsi)*1]), &(inteval->stack[((hsi*21+469)*1+lsi)*1]),1);
HRRPart0ket0bra0g001d100(inteval, &(inteval->stack[((hsi*90+2025)*1+lsi)*1]), &(inteval->stack[((hsi*63+4545)*1+lsi)*1]), &(inteval->stack[((hsi*45+840)*1+lsi)*1]), &(inteval->stack[((hsi*45+3465)*1+lsi)*1]), &(inteval->stack[((hsi*45+195)*1+lsi)*1]),1);
HRRPart0ket0bra0g010p100(inteval, &(inteval->stack[((hsi*45+770)*1+lsi)*1]), &(inteval->stack[((hsi*21+728)*1+lsi)*1]), &(inteval->stack[((hsi*15+135)*1+lsi)*1]), &(inteval->stack[((hsi*15+150)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p100(inteval, &(inteval->stack[((hsi*63+4608)*1+lsi)*1]), &(inteval->stack[((hsi*28+700)*1+lsi)*1]), &(inteval->stack[((hsi*21+728)*1+lsi)*1]), &(inteval->stack[((hsi*21+749)*1+lsi)*1]), &(inteval->stack[((hsi*21+469)*1+lsi)*1]),1);
HRRPart0ket0bra0g010d100(inteval, &(inteval->stack[((hsi*90+1935)*1+lsi)*1]), &(inteval->stack[((hsi*63+4608)*1+lsi)*1]), &(inteval->stack[((hsi*45+770)*1+lsi)*1]), &(inteval->stack[((hsi*45+1526)*1+lsi)*1]), &(inteval->stack[((hsi*45+195)*1+lsi)*1]),1);
HRRPart0ket0bra0g100p100(inteval, &(inteval->stack[((hsi*45+700)*1+lsi)*1]), &(inteval->stack[((hsi*21+658)*1+lsi)*1]), &(inteval->stack[((hsi*15+105)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]), &(inteval->stack[((hsi*15+120)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p100(inteval, &(inteval->stack[((hsi*63+105)*1+lsi)*1]), &(inteval->stack[((hsi*28+630)*1+lsi)*1]), &(inteval->stack[((hsi*21+658)*1+lsi)*1]), &(inteval->stack[((hsi*21+469)*1+lsi)*1]), &(inteval->stack[((hsi*21+679)*1+lsi)*1]),1);
HRRPart0ket0bra0g100d100(inteval, &(inteval->stack[((hsi*90+1845)*1+lsi)*1]), &(inteval->stack[((hsi*63+105)*1+lsi)*1]), &(inteval->stack[((hsi*45+700)*1+lsi)*1]), &(inteval->stack[((hsi*45+195)*1+lsi)*1]), &(inteval->stack[((hsi*45+375)*1+lsi)*1]),1);
HRRPart0ket0bra0gp101(inteval, &(inteval->stack[((hsi*45+630)*1+lsi)*1]), &(inteval->stack[((hsi*21+588)*1+lsi)*1]), &(inteval->stack[((hsi*15+75)*1+lsi)*1]), &(inteval->stack[((hsi*15+90)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]),1);
HRRPart0ket0bra0hp101(inteval, &(inteval->stack[((hsi*63+4671)*1+lsi)*1]), &(inteval->stack[((hsi*28+560)*1+lsi)*1]), &(inteval->stack[((hsi*21+588)*1+lsi)*1]), &(inteval->stack[((hsi*21+609)*1+lsi)*1]), &(inteval->stack[((hsi*21+469)*1+lsi)*1]),1);
HRRPart0ket0bra0gd101(inteval, &(inteval->stack[((hsi*90+1755)*1+lsi)*1]), &(inteval->stack[((hsi*63+4671)*1+lsi)*1]), &(inteval->stack[((hsi*45+630)*1+lsi)*1]), &(inteval->stack[((hsi*45+330)*1+lsi)*1]), &(inteval->stack[((hsi*45+195)*1+lsi)*1]),1);
HRRPart0ket0bra0gp110(inteval, &(inteval->stack[((hsi*45+560)*1+lsi)*1]), &(inteval->stack[((hsi*21+518)*1+lsi)*1]), &(inteval->stack[((hsi*15+45)*1+lsi)*1]), &(inteval->stack[((hsi*15+60)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]),1);
HRRPart0ket0bra0hp110(inteval, &(inteval->stack[((hsi*63+4734)*1+lsi)*1]), &(inteval->stack[((hsi*28+490)*1+lsi)*1]), &(inteval->stack[((hsi*21+518)*1+lsi)*1]), &(inteval->stack[((hsi*21+539)*1+lsi)*1]), &(inteval->stack[((hsi*21+469)*1+lsi)*1]),1);
HRRPart0ket0bra0gd110(inteval, &(inteval->stack[((hsi*90+1665)*1+lsi)*1]), &(inteval->stack[((hsi*63+4734)*1+lsi)*1]), &(inteval->stack[((hsi*45+560)*1+lsi)*1]), &(inteval->stack[((hsi*45+1085)*1+lsi)*1]), &(inteval->stack[((hsi*45+195)*1+lsi)*1]),1);
HRRPart0ket0bra0gp200(inteval, &(inteval->stack[((hsi*45+490)*1+lsi)*1]), &(inteval->stack[((hsi*21+448)*1+lsi)*1]), &(inteval->stack[((hsi*15+15)*1+lsi)*1]), &(inteval->stack[((hsi*15+30)*1+lsi)*1]),1);
HRRPart0ket0bra0hp200(inteval, &(inteval->stack[((hsi*63+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+420)*1+lsi)*1]), &(inteval->stack[((hsi*21+448)*1+lsi)*1]), &(inteval->stack[((hsi*21+469)*1+lsi)*1]),1);
HRRPart0ket0bra0gd200(inteval, &(inteval->stack[((hsi*90+1575)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+490)*1+lsi)*1]), &(inteval->stack[((hsi*45+195)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*90+1575)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*90+1665)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*90+1755)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*90+1845)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*90+1935)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*90+2025)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*90+2115)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*90+2205)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*90+2295)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*90+2385)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*90+2475)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*90+2565)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*90+2655)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*90+2745)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*90+2835)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*90+2925)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*90+3015)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*90+3105)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*90+3195)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*90+3285)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*90+3375)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
