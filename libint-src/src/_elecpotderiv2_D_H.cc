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
#include <HRRPart0ket0bra0hd002.h>
#include <HRRPart0ket0bra0hd011.h>
#include <HRRPart0ket0bra0hd020.h>
#include <HRRPart0ket0bra0hd101.h>
#include <HRRPart0ket0bra0hd110.h>
#include <HRRPart0ket0bra0hd200.h>
#include <HRRPart0ket0bra0hp001.h>
#include <HRRPart0ket0bra0hp002.h>
#include <HRRPart0ket0bra0hp010.h>
#include <HRRPart0ket0bra0hp011.h>
#include <HRRPart0ket0bra0hp020.h>
#include <HRRPart0ket0bra0hp100.h>
#include <HRRPart0ket0bra0hp101.h>
#include <HRRPart0ket0bra0hp110.h>
#include <HRRPart0ket0bra0hp200.h>
#include <HRRPart0ket0bra0h001d001.h>
#include <HRRPart0ket0bra0h001d010.h>
#include <HRRPart0ket0bra0h001d100.h>
#include <HRRPart0ket0bra0h001p.h>
#include <HRRPart0ket0bra0h001p001.h>
#include <HRRPart0ket0bra0h001p010.h>
#include <HRRPart0ket0bra0h001p100.h>
#include <HRRPart0ket0bra0h002d.h>
#include <HRRPart0ket0bra0h002p.h>
#include <HRRPart0ket0bra0h010d001.h>
#include <HRRPart0ket0bra0h010d010.h>
#include <HRRPart0ket0bra0h010d100.h>
#include <HRRPart0ket0bra0h010p.h>
#include <HRRPart0ket0bra0h010p001.h>
#include <HRRPart0ket0bra0h010p010.h>
#include <HRRPart0ket0bra0h010p100.h>
#include <HRRPart0ket0bra0h011d.h>
#include <HRRPart0ket0bra0h011p.h>
#include <HRRPart0ket0bra0h020d.h>
#include <HRRPart0ket0bra0h020p.h>
#include <HRRPart0ket0bra0h100d001.h>
#include <HRRPart0ket0bra0h100d010.h>
#include <HRRPart0ket0bra0h100d100.h>
#include <HRRPart0ket0bra0h100p.h>
#include <HRRPart0ket0bra0h100p001.h>
#include <HRRPart0ket0bra0h100p010.h>
#include <HRRPart0ket0bra0h100p100.h>
#include <HRRPart0ket0bra0h101d.h>
#include <HRRPart0ket0bra0h101p.h>
#include <HRRPart0ket0bra0h110d.h>
#include <HRRPart0ket0bra0h110p.h>
#include <HRRPart0ket0bra0h200d.h>
#include <HRRPart0ket0bra0h200p.h>
#include <HRRPart0ket0bra0ip002.h>
#include <HRRPart0ket0bra0ip011.h>
#include <HRRPart0ket0bra0ip020.h>
#include <HRRPart0ket0bra0ip101.h>
#include <HRRPart0ket0bra0ip110.h>
#include <HRRPart0ket0bra0ip200.h>
#include <HRRPart0ket0bra0i001p001.h>
#include <HRRPart0ket0bra0i001p010.h>
#include <HRRPart0ket0bra0i001p100.h>
#include <HRRPart0ket0bra0i002p.h>
#include <HRRPart0ket0bra0i010p001.h>
#include <HRRPart0ket0bra0i010p010.h>
#include <HRRPart0ket0bra0i010p100.h>
#include <HRRPart0ket0bra0i011p.h>
#include <HRRPart0ket0bra0i020p.h>
#include <HRRPart0ket0bra0i100p001.h>
#include <HRRPart0ket0bra0i100p010.h>
#include <HRRPart0ket0bra0i100p100.h>
#include <HRRPart0ket0bra0i101p.h>
#include <HRRPart0ket0bra0i110p.h>
#include <HRRPart0ket0bra0i200p.h>
#include <_elecpotderiv2_D_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv2_D_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv2_D_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0h001p(inteval, &(inteval->stack[((hsi*63+4746)*1+lsi)*1]), &(inteval->stack[((hsi*28+755)*1+lsi)*1]), &(inteval->stack[((hsi*21+804)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0ket0bra0h002p(inteval, &(inteval->stack[((hsi*63+4809)*1+lsi)*1]), &(inteval->stack[((hsi*28+2051)*1+lsi)*1]), &(inteval->stack[((hsi*21+2079)*1+lsi)*1]), &(inteval->stack[((hsi*21+804)*1+lsi)*1]),1);
HRRPart0ket0bra0i002p(inteval, &(inteval->stack[((hsi*84+4872)*1+lsi)*1]), &(inteval->stack[((hsi*36+2015)*1+lsi)*1]), &(inteval->stack[((hsi*28+2051)*1+lsi)*1]), &(inteval->stack[((hsi*28+755)*1+lsi)*1]),1);
HRRPart0ket0bra0h002d(inteval, &(inteval->stack[((hsi*126+4620)*1+lsi)*1]), &(inteval->stack[((hsi*84+4872)*1+lsi)*1]), &(inteval->stack[((hsi*63+4809)*1+lsi)*1]), &(inteval->stack[((hsi*63+4746)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p(inteval, &(inteval->stack[((hsi*63+2015)*1+lsi)*1]), &(inteval->stack[((hsi*28+621)*1+lsi)*1]), &(inteval->stack[((hsi*21+670)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0ket0bra0h011p(inteval, &(inteval->stack[((hsi*63+4956)*1+lsi)*1]), &(inteval->stack[((hsi*28+1966)*1+lsi)*1]), &(inteval->stack[((hsi*21+1994)*1+lsi)*1]), &(inteval->stack[((hsi*21+804)*1+lsi)*1]), &(inteval->stack[((hsi*21+670)*1+lsi)*1]),1);
HRRPart0ket0bra0i011p(inteval, &(inteval->stack[((hsi*84+5019)*1+lsi)*1]), &(inteval->stack[((hsi*36+1930)*1+lsi)*1]), &(inteval->stack[((hsi*28+1966)*1+lsi)*1]), &(inteval->stack[((hsi*28+755)*1+lsi)*1]), &(inteval->stack[((hsi*28+621)*1+lsi)*1]),1);
HRRPart0ket0bra0h011d(inteval, &(inteval->stack[((hsi*126+4494)*1+lsi)*1]), &(inteval->stack[((hsi*84+5019)*1+lsi)*1]), &(inteval->stack[((hsi*63+4956)*1+lsi)*1]), &(inteval->stack[((hsi*63+4746)*1+lsi)*1]), &(inteval->stack[((hsi*63+2015)*1+lsi)*1]),1);
HRRPart0ket0bra0h020p(inteval, &(inteval->stack[((hsi*63+1930)*1+lsi)*1]), &(inteval->stack[((hsi*28+1881)*1+lsi)*1]), &(inteval->stack[((hsi*21+1909)*1+lsi)*1]), &(inteval->stack[((hsi*21+670)*1+lsi)*1]),1);
HRRPart0ket0bra0i020p(inteval, &(inteval->stack[((hsi*84+5103)*1+lsi)*1]), &(inteval->stack[((hsi*36+1845)*1+lsi)*1]), &(inteval->stack[((hsi*28+1881)*1+lsi)*1]), &(inteval->stack[((hsi*28+621)*1+lsi)*1]),1);
HRRPart0ket0bra0h020d(inteval, &(inteval->stack[((hsi*126+4368)*1+lsi)*1]), &(inteval->stack[((hsi*84+5103)*1+lsi)*1]), &(inteval->stack[((hsi*63+1930)*1+lsi)*1]), &(inteval->stack[((hsi*63+2015)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p(inteval, &(inteval->stack[((hsi*63+1845)*1+lsi)*1]), &(inteval->stack[((hsi*28+487)*1+lsi)*1]), &(inteval->stack[((hsi*21+536)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0ket0bra0h101p(inteval, &(inteval->stack[((hsi*63+5187)*1+lsi)*1]), &(inteval->stack[((hsi*28+1796)*1+lsi)*1]), &(inteval->stack[((hsi*21+1824)*1+lsi)*1]), &(inteval->stack[((hsi*21+804)*1+lsi)*1]), &(inteval->stack[((hsi*21+536)*1+lsi)*1]),1);
HRRPart0ket0bra0i101p(inteval, &(inteval->stack[((hsi*84+5250)*1+lsi)*1]), &(inteval->stack[((hsi*36+1760)*1+lsi)*1]), &(inteval->stack[((hsi*28+1796)*1+lsi)*1]), &(inteval->stack[((hsi*28+755)*1+lsi)*1]), &(inteval->stack[((hsi*28+487)*1+lsi)*1]),1);
HRRPart0ket0bra0h101d(inteval, &(inteval->stack[((hsi*126+4242)*1+lsi)*1]), &(inteval->stack[((hsi*84+5250)*1+lsi)*1]), &(inteval->stack[((hsi*63+5187)*1+lsi)*1]), &(inteval->stack[((hsi*63+4746)*1+lsi)*1]), &(inteval->stack[((hsi*63+1845)*1+lsi)*1]),1);
HRRPart0ket0bra0h110p(inteval, &(inteval->stack[((hsi*63+1760)*1+lsi)*1]), &(inteval->stack[((hsi*28+1711)*1+lsi)*1]), &(inteval->stack[((hsi*21+1739)*1+lsi)*1]), &(inteval->stack[((hsi*21+670)*1+lsi)*1]), &(inteval->stack[((hsi*21+536)*1+lsi)*1]),1);
HRRPart0ket0bra0i110p(inteval, &(inteval->stack[((hsi*84+5334)*1+lsi)*1]), &(inteval->stack[((hsi*36+1675)*1+lsi)*1]), &(inteval->stack[((hsi*28+1711)*1+lsi)*1]), &(inteval->stack[((hsi*28+621)*1+lsi)*1]), &(inteval->stack[((hsi*28+487)*1+lsi)*1]),1);
HRRPart0ket0bra0h110d(inteval, &(inteval->stack[((hsi*126+4116)*1+lsi)*1]), &(inteval->stack[((hsi*84+5334)*1+lsi)*1]), &(inteval->stack[((hsi*63+1760)*1+lsi)*1]), &(inteval->stack[((hsi*63+2015)*1+lsi)*1]), &(inteval->stack[((hsi*63+1845)*1+lsi)*1]),1);
HRRPart0ket0bra0h200p(inteval, &(inteval->stack[((hsi*63+1675)*1+lsi)*1]), &(inteval->stack[((hsi*28+1626)*1+lsi)*1]), &(inteval->stack[((hsi*21+1654)*1+lsi)*1]), &(inteval->stack[((hsi*21+536)*1+lsi)*1]),1);
HRRPart0ket0bra0i200p(inteval, &(inteval->stack[((hsi*84+5418)*1+lsi)*1]), &(inteval->stack[((hsi*36+1590)*1+lsi)*1]), &(inteval->stack[((hsi*28+1626)*1+lsi)*1]), &(inteval->stack[((hsi*28+487)*1+lsi)*1]),1);
HRRPart0ket0bra0h200d(inteval, &(inteval->stack[((hsi*126+3990)*1+lsi)*1]), &(inteval->stack[((hsi*84+5418)*1+lsi)*1]), &(inteval->stack[((hsi*63+1675)*1+lsi)*1]), &(inteval->stack[((hsi*63+1845)*1+lsi)*1]),1);
HRRPart0ket0bra0hp001(inteval, &(inteval->stack[((hsi*63+1590)*1+lsi)*1]), &(inteval->stack[((hsi*28+353)*1+lsi)*1]), &(inteval->stack[((hsi*21+402)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0ket0bra0h001p001(inteval, &(inteval->stack[((hsi*63+5502)*1+lsi)*1]), &(inteval->stack[((hsi*28+1541)*1+lsi)*1]), &(inteval->stack[((hsi*21+1569)*1+lsi)*1]), &(inteval->stack[((hsi*21+402)*1+lsi)*1]), &(inteval->stack[((hsi*21+804)*1+lsi)*1]),1);
HRRPart0ket0bra0i001p001(inteval, &(inteval->stack[((hsi*84+5565)*1+lsi)*1]), &(inteval->stack[((hsi*36+1505)*1+lsi)*1]), &(inteval->stack[((hsi*28+1541)*1+lsi)*1]), &(inteval->stack[((hsi*28+353)*1+lsi)*1]), &(inteval->stack[((hsi*28+755)*1+lsi)*1]),1);
HRRPart0ket0bra0h001d001(inteval, &(inteval->stack[((hsi*126+3864)*1+lsi)*1]), &(inteval->stack[((hsi*84+5565)*1+lsi)*1]), &(inteval->stack[((hsi*63+5502)*1+lsi)*1]), &(inteval->stack[((hsi*63+1590)*1+lsi)*1]), &(inteval->stack[((hsi*63+4746)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p001(inteval, &(inteval->stack[((hsi*63+1505)*1+lsi)*1]), &(inteval->stack[((hsi*28+1456)*1+lsi)*1]), &(inteval->stack[((hsi*21+1484)*1+lsi)*1]), &(inteval->stack[((hsi*21+402)*1+lsi)*1]), &(inteval->stack[((hsi*21+670)*1+lsi)*1]),1);
HRRPart0ket0bra0i010p001(inteval, &(inteval->stack[((hsi*84+5649)*1+lsi)*1]), &(inteval->stack[((hsi*36+1420)*1+lsi)*1]), &(inteval->stack[((hsi*28+1456)*1+lsi)*1]), &(inteval->stack[((hsi*28+353)*1+lsi)*1]), &(inteval->stack[((hsi*28+621)*1+lsi)*1]),1);
HRRPart0ket0bra0h010d001(inteval, &(inteval->stack[((hsi*126+3738)*1+lsi)*1]), &(inteval->stack[((hsi*84+5649)*1+lsi)*1]), &(inteval->stack[((hsi*63+1505)*1+lsi)*1]), &(inteval->stack[((hsi*63+1590)*1+lsi)*1]), &(inteval->stack[((hsi*63+2015)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p001(inteval, &(inteval->stack[((hsi*63+1420)*1+lsi)*1]), &(inteval->stack[((hsi*28+1371)*1+lsi)*1]), &(inteval->stack[((hsi*21+1399)*1+lsi)*1]), &(inteval->stack[((hsi*21+402)*1+lsi)*1]), &(inteval->stack[((hsi*21+536)*1+lsi)*1]),1);
HRRPart0ket0bra0i100p001(inteval, &(inteval->stack[((hsi*84+5733)*1+lsi)*1]), &(inteval->stack[((hsi*36+1335)*1+lsi)*1]), &(inteval->stack[((hsi*28+1371)*1+lsi)*1]), &(inteval->stack[((hsi*28+353)*1+lsi)*1]), &(inteval->stack[((hsi*28+487)*1+lsi)*1]),1);
HRRPart0ket0bra0h100d001(inteval, &(inteval->stack[((hsi*126+3612)*1+lsi)*1]), &(inteval->stack[((hsi*84+5733)*1+lsi)*1]), &(inteval->stack[((hsi*63+1420)*1+lsi)*1]), &(inteval->stack[((hsi*63+1590)*1+lsi)*1]), &(inteval->stack[((hsi*63+1845)*1+lsi)*1]),1);
HRRPart0ket0bra0hp002(inteval, &(inteval->stack[((hsi*63+1335)*1+lsi)*1]), &(inteval->stack[((hsi*28+1286)*1+lsi)*1]), &(inteval->stack[((hsi*21+1314)*1+lsi)*1]), &(inteval->stack[((hsi*21+402)*1+lsi)*1]),1);
HRRPart0ket0bra0ip002(inteval, &(inteval->stack[((hsi*84+5817)*1+lsi)*1]), &(inteval->stack[((hsi*36+1250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1286)*1+lsi)*1]), &(inteval->stack[((hsi*28+353)*1+lsi)*1]),1);
HRRPart0ket0bra0hd002(inteval, &(inteval->stack[((hsi*126+3486)*1+lsi)*1]), &(inteval->stack[((hsi*84+5817)*1+lsi)*1]), &(inteval->stack[((hsi*63+1335)*1+lsi)*1]), &(inteval->stack[((hsi*63+1590)*1+lsi)*1]),1);
HRRPart0ket0bra0hp010(inteval, &(inteval->stack[((hsi*63+1250)*1+lsi)*1]), &(inteval->stack[((hsi*28+219)*1+lsi)*1]), &(inteval->stack[((hsi*21+268)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0ket0bra0h001p010(inteval, &(inteval->stack[((hsi*63+5901)*1+lsi)*1]), &(inteval->stack[((hsi*28+1201)*1+lsi)*1]), &(inteval->stack[((hsi*21+1229)*1+lsi)*1]), &(inteval->stack[((hsi*21+804)*1+lsi)*1]), &(inteval->stack[((hsi*21+268)*1+lsi)*1]),1);
HRRPart0ket0bra0i001p010(inteval, &(inteval->stack[((hsi*84+5964)*1+lsi)*1]), &(inteval->stack[((hsi*36+1165)*1+lsi)*1]), &(inteval->stack[((hsi*28+1201)*1+lsi)*1]), &(inteval->stack[((hsi*28+755)*1+lsi)*1]), &(inteval->stack[((hsi*28+219)*1+lsi)*1]),1);
HRRPart0ket0bra0h001d010(inteval, &(inteval->stack[((hsi*126+3360)*1+lsi)*1]), &(inteval->stack[((hsi*84+5964)*1+lsi)*1]), &(inteval->stack[((hsi*63+5901)*1+lsi)*1]), &(inteval->stack[((hsi*63+4746)*1+lsi)*1]), &(inteval->stack[((hsi*63+1250)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p010(inteval, &(inteval->stack[((hsi*63+1165)*1+lsi)*1]), &(inteval->stack[((hsi*28+1116)*1+lsi)*1]), &(inteval->stack[((hsi*21+1144)*1+lsi)*1]), &(inteval->stack[((hsi*21+268)*1+lsi)*1]), &(inteval->stack[((hsi*21+670)*1+lsi)*1]),1);
HRRPart0ket0bra0i010p010(inteval, &(inteval->stack[((hsi*84+6048)*1+lsi)*1]), &(inteval->stack[((hsi*36+1080)*1+lsi)*1]), &(inteval->stack[((hsi*28+1116)*1+lsi)*1]), &(inteval->stack[((hsi*28+219)*1+lsi)*1]), &(inteval->stack[((hsi*28+621)*1+lsi)*1]),1);
HRRPart0ket0bra0h010d010(inteval, &(inteval->stack[((hsi*126+3234)*1+lsi)*1]), &(inteval->stack[((hsi*84+6048)*1+lsi)*1]), &(inteval->stack[((hsi*63+1165)*1+lsi)*1]), &(inteval->stack[((hsi*63+1250)*1+lsi)*1]), &(inteval->stack[((hsi*63+2015)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p010(inteval, &(inteval->stack[((hsi*63+1080)*1+lsi)*1]), &(inteval->stack[((hsi*28+1031)*1+lsi)*1]), &(inteval->stack[((hsi*21+1059)*1+lsi)*1]), &(inteval->stack[((hsi*21+268)*1+lsi)*1]), &(inteval->stack[((hsi*21+536)*1+lsi)*1]),1);
HRRPart0ket0bra0i100p010(inteval, &(inteval->stack[((hsi*84+6132)*1+lsi)*1]), &(inteval->stack[((hsi*36+995)*1+lsi)*1]), &(inteval->stack[((hsi*28+1031)*1+lsi)*1]), &(inteval->stack[((hsi*28+219)*1+lsi)*1]), &(inteval->stack[((hsi*28+487)*1+lsi)*1]),1);
HRRPart0ket0bra0h100d010(inteval, &(inteval->stack[((hsi*126+3108)*1+lsi)*1]), &(inteval->stack[((hsi*84+6132)*1+lsi)*1]), &(inteval->stack[((hsi*63+1080)*1+lsi)*1]), &(inteval->stack[((hsi*63+1250)*1+lsi)*1]), &(inteval->stack[((hsi*63+1845)*1+lsi)*1]),1);
HRRPart0ket0bra0hp011(inteval, &(inteval->stack[((hsi*63+995)*1+lsi)*1]), &(inteval->stack[((hsi*28+946)*1+lsi)*1]), &(inteval->stack[((hsi*21+974)*1+lsi)*1]), &(inteval->stack[((hsi*21+402)*1+lsi)*1]), &(inteval->stack[((hsi*21+268)*1+lsi)*1]),1);
HRRPart0ket0bra0ip011(inteval, &(inteval->stack[((hsi*84+6216)*1+lsi)*1]), &(inteval->stack[((hsi*36+910)*1+lsi)*1]), &(inteval->stack[((hsi*28+946)*1+lsi)*1]), &(inteval->stack[((hsi*28+353)*1+lsi)*1]), &(inteval->stack[((hsi*28+219)*1+lsi)*1]),1);
HRRPart0ket0bra0hd011(inteval, &(inteval->stack[((hsi*126+2982)*1+lsi)*1]), &(inteval->stack[((hsi*84+6216)*1+lsi)*1]), &(inteval->stack[((hsi*63+995)*1+lsi)*1]), &(inteval->stack[((hsi*63+1590)*1+lsi)*1]), &(inteval->stack[((hsi*63+1250)*1+lsi)*1]),1);
HRRPart0ket0bra0hp020(inteval, &(inteval->stack[((hsi*63+910)*1+lsi)*1]), &(inteval->stack[((hsi*28+861)*1+lsi)*1]), &(inteval->stack[((hsi*21+889)*1+lsi)*1]), &(inteval->stack[((hsi*21+268)*1+lsi)*1]),1);
HRRPart0ket0bra0ip020(inteval, &(inteval->stack[((hsi*84+6300)*1+lsi)*1]), &(inteval->stack[((hsi*36+825)*1+lsi)*1]), &(inteval->stack[((hsi*28+861)*1+lsi)*1]), &(inteval->stack[((hsi*28+219)*1+lsi)*1]),1);
HRRPart0ket0bra0hd020(inteval, &(inteval->stack[((hsi*126+2856)*1+lsi)*1]), &(inteval->stack[((hsi*84+6300)*1+lsi)*1]), &(inteval->stack[((hsi*63+910)*1+lsi)*1]), &(inteval->stack[((hsi*63+1250)*1+lsi)*1]),1);
HRRPart0ket0bra0hp100(inteval, &(inteval->stack[((hsi*63+825)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]), &(inteval->stack[((hsi*21+134)*1+lsi)*1]),1);
HRRPart0ket0bra0h001p100(inteval, &(inteval->stack[((hsi*63+6384)*1+lsi)*1]), &(inteval->stack[((hsi*28+727)*1+lsi)*1]), &(inteval->stack[((hsi*21+783)*1+lsi)*1]), &(inteval->stack[((hsi*21+804)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0ket0bra0i001p100(inteval, &(inteval->stack[((hsi*84+6447)*1+lsi)*1]), &(inteval->stack[((hsi*36+691)*1+lsi)*1]), &(inteval->stack[((hsi*28+727)*1+lsi)*1]), &(inteval->stack[((hsi*28+755)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0ket0bra0h001d100(inteval, &(inteval->stack[((hsi*126+2730)*1+lsi)*1]), &(inteval->stack[((hsi*84+6447)*1+lsi)*1]), &(inteval->stack[((hsi*63+6384)*1+lsi)*1]), &(inteval->stack[((hsi*63+4746)*1+lsi)*1]), &(inteval->stack[((hsi*63+825)*1+lsi)*1]),1);
HRRPart0ket0bra0h010p100(inteval, &(inteval->stack[((hsi*63+691)*1+lsi)*1]), &(inteval->stack[((hsi*28+593)*1+lsi)*1]), &(inteval->stack[((hsi*21+649)*1+lsi)*1]), &(inteval->stack[((hsi*21+670)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0ket0bra0i010p100(inteval, &(inteval->stack[((hsi*84+6531)*1+lsi)*1]), &(inteval->stack[((hsi*36+557)*1+lsi)*1]), &(inteval->stack[((hsi*28+593)*1+lsi)*1]), &(inteval->stack[((hsi*28+621)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0ket0bra0h010d100(inteval, &(inteval->stack[((hsi*126+2604)*1+lsi)*1]), &(inteval->stack[((hsi*84+6531)*1+lsi)*1]), &(inteval->stack[((hsi*63+691)*1+lsi)*1]), &(inteval->stack[((hsi*63+2015)*1+lsi)*1]), &(inteval->stack[((hsi*63+825)*1+lsi)*1]),1);
HRRPart0ket0bra0h100p100(inteval, &(inteval->stack[((hsi*63+557)*1+lsi)*1]), &(inteval->stack[((hsi*28+459)*1+lsi)*1]), &(inteval->stack[((hsi*21+515)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]), &(inteval->stack[((hsi*21+536)*1+lsi)*1]),1);
HRRPart0ket0bra0i100p100(inteval, &(inteval->stack[((hsi*84+6615)*1+lsi)*1]), &(inteval->stack[((hsi*36+423)*1+lsi)*1]), &(inteval->stack[((hsi*28+459)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*28+487)*1+lsi)*1]),1);
HRRPart0ket0bra0h100d100(inteval, &(inteval->stack[((hsi*126+2478)*1+lsi)*1]), &(inteval->stack[((hsi*84+6615)*1+lsi)*1]), &(inteval->stack[((hsi*63+557)*1+lsi)*1]), &(inteval->stack[((hsi*63+825)*1+lsi)*1]), &(inteval->stack[((hsi*63+1845)*1+lsi)*1]),1);
HRRPart0ket0bra0hp101(inteval, &(inteval->stack[((hsi*63+423)*1+lsi)*1]), &(inteval->stack[((hsi*28+325)*1+lsi)*1]), &(inteval->stack[((hsi*21+381)*1+lsi)*1]), &(inteval->stack[((hsi*21+402)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0ket0bra0ip101(inteval, &(inteval->stack[((hsi*84+6699)*1+lsi)*1]), &(inteval->stack[((hsi*36+289)*1+lsi)*1]), &(inteval->stack[((hsi*28+325)*1+lsi)*1]), &(inteval->stack[((hsi*28+353)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0ket0bra0hd101(inteval, &(inteval->stack[((hsi*126+2352)*1+lsi)*1]), &(inteval->stack[((hsi*84+6699)*1+lsi)*1]), &(inteval->stack[((hsi*63+423)*1+lsi)*1]), &(inteval->stack[((hsi*63+1590)*1+lsi)*1]), &(inteval->stack[((hsi*63+825)*1+lsi)*1]),1);
HRRPart0ket0bra0hp110(inteval, &(inteval->stack[((hsi*63+289)*1+lsi)*1]), &(inteval->stack[((hsi*28+191)*1+lsi)*1]), &(inteval->stack[((hsi*21+247)*1+lsi)*1]), &(inteval->stack[((hsi*21+268)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0ket0bra0ip110(inteval, &(inteval->stack[((hsi*84+6783)*1+lsi)*1]), &(inteval->stack[((hsi*36+155)*1+lsi)*1]), &(inteval->stack[((hsi*28+191)*1+lsi)*1]), &(inteval->stack[((hsi*28+219)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0ket0bra0hd110(inteval, &(inteval->stack[((hsi*126+2226)*1+lsi)*1]), &(inteval->stack[((hsi*84+6783)*1+lsi)*1]), &(inteval->stack[((hsi*63+289)*1+lsi)*1]), &(inteval->stack[((hsi*63+1250)*1+lsi)*1]), &(inteval->stack[((hsi*63+825)*1+lsi)*1]),1);
HRRPart0ket0bra0hp200(inteval, &(inteval->stack[((hsi*63+134)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*21+113)*1+lsi)*1]),1);
HRRPart0ket0bra0ip200(inteval, &(inteval->stack[((hsi*84+197)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]),1);
HRRPart0ket0bra0hd200(inteval, &(inteval->stack[((hsi*126+2100)*1+lsi)*1]), &(inteval->stack[((hsi*84+197)*1+lsi)*1]), &(inteval->stack[((hsi*63+134)*1+lsi)*1]), &(inteval->stack[((hsi*63+825)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*126+2100)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*126+2226)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*126+2352)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*126+2478)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*126+2604)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*126+2730)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*126+2856)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*126+2982)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*126+3108)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*126+3234)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*126+3360)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*126+3486)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*126+3612)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*126+3738)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*126+3864)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*126+3990)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*126+4116)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*126+4242)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*126+4368)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*126+4494)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*126+4620)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
