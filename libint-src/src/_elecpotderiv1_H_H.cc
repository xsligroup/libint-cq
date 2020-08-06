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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hd001.h>
#include <HRRPart0bra0ket0hd010.h>
#include <HRRPart0bra0ket0hd100.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hf001.h>
#include <HRRPart0bra0ket0hf010.h>
#include <HRRPart0bra0ket0hf100.h>
#include <HRRPart0bra0ket0hg.h>
#include <HRRPart0bra0ket0hg001.h>
#include <HRRPart0bra0ket0hg010.h>
#include <HRRPart0bra0ket0hg100.h>
#include <HRRPart0bra0ket0hh001.h>
#include <HRRPart0bra0ket0hh010.h>
#include <HRRPart0bra0ket0hh100.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0h001d.h>
#include <HRRPart0bra0ket0h001f.h>
#include <HRRPart0bra0ket0h001g.h>
#include <HRRPart0bra0ket0h001h.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h010d.h>
#include <HRRPart0bra0ket0h010f.h>
#include <HRRPart0bra0ket0h010g.h>
#include <HRRPart0bra0ket0h010h.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h100d.h>
#include <HRRPart0bra0ket0h100f.h>
#include <HRRPart0bra0ket0h100g.h>
#include <HRRPart0bra0ket0h100h.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0id001.h>
#include <HRRPart0bra0ket0id010.h>
#include <HRRPart0bra0ket0id100.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0if001.h>
#include <HRRPart0bra0ket0if010.h>
#include <HRRPart0bra0ket0if100.h>
#include <HRRPart0bra0ket0ig001.h>
#include <HRRPart0bra0ket0ig010.h>
#include <HRRPart0bra0ket0ig100.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0i001d.h>
#include <HRRPart0bra0ket0i001f.h>
#include <HRRPart0bra0ket0i001g.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i010d.h>
#include <HRRPart0bra0ket0i010f.h>
#include <HRRPart0bra0ket0i010g.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i100d.h>
#include <HRRPart0bra0ket0i100f.h>
#include <HRRPart0bra0ket0i100g.h>
#include <HRRPart0bra0ket0i100p.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kd001.h>
#include <HRRPart0bra0ket0kd010.h>
#include <HRRPart0bra0ket0kd100.h>
#include <HRRPart0bra0ket0kf001.h>
#include <HRRPart0bra0ket0kf010.h>
#include <HRRPart0bra0ket0kf100.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0kp001.h>
#include <HRRPart0bra0ket0kp010.h>
#include <HRRPart0bra0ket0kp100.h>
#include <HRRPart0bra0ket0k001d.h>
#include <HRRPart0bra0ket0k001f.h>
#include <HRRPart0bra0ket0k001p.h>
#include <HRRPart0bra0ket0k010d.h>
#include <HRRPart0bra0ket0k010f.h>
#include <HRRPart0bra0ket0k010p.h>
#include <HRRPart0bra0ket0k100d.h>
#include <HRRPart0bra0ket0k100f.h>
#include <HRRPart0bra0ket0k100p.h>
#include <HRRPart0bra0ket0ld001.h>
#include <HRRPart0bra0ket0ld010.h>
#include <HRRPart0bra0ket0ld100.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0lp001.h>
#include <HRRPart0bra0ket0lp010.h>
#include <HRRPart0bra0ket0lp100.h>
#include <HRRPart0bra0ket0l001d.h>
#include <HRRPart0bra0ket0l001p.h>
#include <HRRPart0bra0ket0l010d.h>
#include <HRRPart0bra0ket0l010p.h>
#include <HRRPart0bra0ket0l100d.h>
#include <HRRPart0bra0ket0l100p.h>
#include <HRRPart0bra0ket0mp001.h>
#include <HRRPart0bra0ket0mp010.h>
#include <HRRPart0bra0ket0mp100.h>
#include <HRRPart0bra0ket0m001p.h>
#include <HRRPart0bra0ket0m010p.h>
#include <HRRPart0bra0ket0m100p.h>
#include <_elecpotderiv1_H_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_H_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1691)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_H_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4337)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4421)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4529)*1+lsi)*1]), &(inteval->stack[((hsi*108+4421)*1+lsi)*1]), &(inteval->stack[((hsi*84+4337)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4697)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]), &(inteval->stack[((hsi*21+415)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+4760)*1+lsi)*1]), &(inteval->stack[((hsi*84+4337)*1+lsi)*1]), &(inteval->stack[((hsi*63+4697)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+4886)*1+lsi)*1]), &(inteval->stack[((hsi*168+4529)*1+lsi)*1]), &(inteval->stack[((hsi*126+4760)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5096)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+5231)*1+lsi)*1]), &(inteval->stack[((hsi*135+5096)*1+lsi)*1]), &(inteval->stack[((hsi*108+4421)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+5447)*1+lsi)*1]), &(inteval->stack[((hsi*216+5231)*1+lsi)*1]), &(inteval->stack[((hsi*168+4529)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+5727)*1+lsi)*1]), &(inteval->stack[((hsi*280+5447)*1+lsi)*1]), &(inteval->stack[((hsi*210+4886)*1+lsi)*1]),1);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+6042)*1+lsi)*1]), &(inteval->stack[((hsi*36+1606)*1+lsi)*1]), &(inteval->stack[((hsi*28+1642)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+6126)*1+lsi)*1]), &(inteval->stack[((hsi*45+1561)*1+lsi)*1]), &(inteval->stack[((hsi*36+1606)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0id001(inteval, &(inteval->stack[((hsi*168+6234)*1+lsi)*1]), &(inteval->stack[((hsi*108+6126)*1+lsi)*1]), &(inteval->stack[((hsi*84+6042)*1+lsi)*1]), &(inteval->stack[((hsi*84+4337)*1+lsi)*1]),1);
HRRPart0bra0ket0lp001(inteval, &(inteval->stack[((hsi*135+6402)*1+lsi)*1]), &(inteval->stack[((hsi*55+1506)*1+lsi)*1]), &(inteval->stack[((hsi*45+1561)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0kd001(inteval, &(inteval->stack[((hsi*216+6537)*1+lsi)*1]), &(inteval->stack[((hsi*135+6402)*1+lsi)*1]), &(inteval->stack[((hsi*108+6126)*1+lsi)*1]), &(inteval->stack[((hsi*108+4421)*1+lsi)*1]),1);
HRRPart0bra0ket0if001(inteval, &(inteval->stack[((hsi*280+6753)*1+lsi)*1]), &(inteval->stack[((hsi*216+6537)*1+lsi)*1]), &(inteval->stack[((hsi*168+6234)*1+lsi)*1]), &(inteval->stack[((hsi*168+4529)*1+lsi)*1]),1);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+6126)*1+lsi)*1]), &(inteval->stack[((hsi*28+1642)*1+lsi)*1]), &(inteval->stack[((hsi*21+1670)*1+lsi)*1]), &(inteval->stack[((hsi*21+415)*1+lsi)*1]),1);
HRRPart0bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+1561)*1+lsi)*1]), &(inteval->stack[((hsi*84+6042)*1+lsi)*1]), &(inteval->stack[((hsi*63+6126)*1+lsi)*1]), &(inteval->stack[((hsi*63+4697)*1+lsi)*1]),1);
HRRPart0bra0ket0hf001(inteval, &(inteval->stack[((hsi*210+7033)*1+lsi)*1]), &(inteval->stack[((hsi*168+6234)*1+lsi)*1]), &(inteval->stack[((hsi*126+1561)*1+lsi)*1]), &(inteval->stack[((hsi*126+4760)*1+lsi)*1]),1);
HRRPart0bra0ket0hg001(inteval, &(inteval->stack[((hsi*315+6042)*1+lsi)*1]), &(inteval->stack[((hsi*280+6753)*1+lsi)*1]), &(inteval->stack[((hsi*210+7033)*1+lsi)*1]), &(inteval->stack[((hsi*210+4886)*1+lsi)*1]),1);
HRRPart0bra0ket0mp001(inteval, &(inteval->stack[((hsi*165+7033)*1+lsi)*1]), &(inteval->stack[((hsi*66+1440)*1+lsi)*1]), &(inteval->stack[((hsi*55+1506)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0ld001(inteval, &(inteval->stack[((hsi*270+7198)*1+lsi)*1]), &(inteval->stack[((hsi*165+7033)*1+lsi)*1]), &(inteval->stack[((hsi*135+6402)*1+lsi)*1]), &(inteval->stack[((hsi*135+5096)*1+lsi)*1]),1);
HRRPart0bra0ket0kf001(inteval, &(inteval->stack[((hsi*360+7468)*1+lsi)*1]), &(inteval->stack[((hsi*270+7198)*1+lsi)*1]), &(inteval->stack[((hsi*216+6537)*1+lsi)*1]), &(inteval->stack[((hsi*216+5231)*1+lsi)*1]),1);
HRRPart0bra0ket0ig001(inteval, &(inteval->stack[((hsi*420+7033)*1+lsi)*1]), &(inteval->stack[((hsi*360+7468)*1+lsi)*1]), &(inteval->stack[((hsi*280+6753)*1+lsi)*1]), &(inteval->stack[((hsi*280+5447)*1+lsi)*1]),1);
HRRPart0bra0ket0hh001(inteval, &(inteval->stack[((hsi*441+3896)*1+lsi)*1]), &(inteval->stack[((hsi*420+7033)*1+lsi)*1]), &(inteval->stack[((hsi*315+6042)*1+lsi)*1]), &(inteval->stack[((hsi*315+5727)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+6357)*1+lsi)*1]), &(inteval->stack[((hsi*36+1355)*1+lsi)*1]), &(inteval->stack[((hsi*28+1391)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+6441)*1+lsi)*1]), &(inteval->stack[((hsi*45+1310)*1+lsi)*1]), &(inteval->stack[((hsi*36+1355)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0id010(inteval, &(inteval->stack[((hsi*168+6549)*1+lsi)*1]), &(inteval->stack[((hsi*108+6441)*1+lsi)*1]), &(inteval->stack[((hsi*84+6357)*1+lsi)*1]), &(inteval->stack[((hsi*84+4337)*1+lsi)*1]),1);
HRRPart0bra0ket0lp010(inteval, &(inteval->stack[((hsi*135+6717)*1+lsi)*1]), &(inteval->stack[((hsi*55+1255)*1+lsi)*1]), &(inteval->stack[((hsi*45+1310)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0kd010(inteval, &(inteval->stack[((hsi*216+1440)*1+lsi)*1]), &(inteval->stack[((hsi*135+6717)*1+lsi)*1]), &(inteval->stack[((hsi*108+6441)*1+lsi)*1]), &(inteval->stack[((hsi*108+4421)*1+lsi)*1]),1);
HRRPart0bra0ket0if010(inteval, &(inteval->stack[((hsi*280+7453)*1+lsi)*1]), &(inteval->stack[((hsi*216+1440)*1+lsi)*1]), &(inteval->stack[((hsi*168+6549)*1+lsi)*1]), &(inteval->stack[((hsi*168+4529)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+6852)*1+lsi)*1]), &(inteval->stack[((hsi*28+1391)*1+lsi)*1]), &(inteval->stack[((hsi*21+1419)*1+lsi)*1]), &(inteval->stack[((hsi*21+415)*1+lsi)*1]),1);
HRRPart0bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+1310)*1+lsi)*1]), &(inteval->stack[((hsi*84+6357)*1+lsi)*1]), &(inteval->stack[((hsi*63+6852)*1+lsi)*1]), &(inteval->stack[((hsi*63+4697)*1+lsi)*1]),1);
HRRPart0bra0ket0hf010(inteval, &(inteval->stack[((hsi*210+7733)*1+lsi)*1]), &(inteval->stack[((hsi*168+6549)*1+lsi)*1]), &(inteval->stack[((hsi*126+1310)*1+lsi)*1]), &(inteval->stack[((hsi*126+4760)*1+lsi)*1]),1);
HRRPart0bra0ket0hg010(inteval, &(inteval->stack[((hsi*315+6357)*1+lsi)*1]), &(inteval->stack[((hsi*280+7453)*1+lsi)*1]), &(inteval->stack[((hsi*210+7733)*1+lsi)*1]), &(inteval->stack[((hsi*210+4886)*1+lsi)*1]),1);
HRRPart0bra0ket0mp010(inteval, &(inteval->stack[((hsi*165+6852)*1+lsi)*1]), &(inteval->stack[((hsi*66+1189)*1+lsi)*1]), &(inteval->stack[((hsi*55+1255)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0ld010(inteval, &(inteval->stack[((hsi*270+7733)*1+lsi)*1]), &(inteval->stack[((hsi*165+6852)*1+lsi)*1]), &(inteval->stack[((hsi*135+6717)*1+lsi)*1]), &(inteval->stack[((hsi*135+5096)*1+lsi)*1]),1);
HRRPart0bra0ket0kf010(inteval, &(inteval->stack[((hsi*360+6672)*1+lsi)*1]), &(inteval->stack[((hsi*270+7733)*1+lsi)*1]), &(inteval->stack[((hsi*216+1440)*1+lsi)*1]), &(inteval->stack[((hsi*216+5231)*1+lsi)*1]),1);
HRRPart0bra0ket0ig010(inteval, &(inteval->stack[((hsi*420+1189)*1+lsi)*1]), &(inteval->stack[((hsi*360+6672)*1+lsi)*1]), &(inteval->stack[((hsi*280+7453)*1+lsi)*1]), &(inteval->stack[((hsi*280+5447)*1+lsi)*1]),1);
HRRPart0bra0ket0hh010(inteval, &(inteval->stack[((hsi*441+3455)*1+lsi)*1]), &(inteval->stack[((hsi*420+1189)*1+lsi)*1]), &(inteval->stack[((hsi*315+6357)*1+lsi)*1]), &(inteval->stack[((hsi*315+5727)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+6672)*1+lsi)*1]), &(inteval->stack[((hsi*36+1104)*1+lsi)*1]), &(inteval->stack[((hsi*28+1140)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+6756)*1+lsi)*1]), &(inteval->stack[((hsi*45+1059)*1+lsi)*1]), &(inteval->stack[((hsi*36+1104)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0id100(inteval, &(inteval->stack[((hsi*168+6864)*1+lsi)*1]), &(inteval->stack[((hsi*108+6756)*1+lsi)*1]), &(inteval->stack[((hsi*84+6672)*1+lsi)*1]), &(inteval->stack[((hsi*84+4337)*1+lsi)*1]),1);
HRRPart0bra0ket0lp100(inteval, &(inteval->stack[((hsi*135+7453)*1+lsi)*1]), &(inteval->stack[((hsi*55+1004)*1+lsi)*1]), &(inteval->stack[((hsi*45+1059)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0kd100(inteval, &(inteval->stack[((hsi*216+7588)*1+lsi)*1]), &(inteval->stack[((hsi*135+7453)*1+lsi)*1]), &(inteval->stack[((hsi*108+6756)*1+lsi)*1]), &(inteval->stack[((hsi*108+4421)*1+lsi)*1]),1);
HRRPart0bra0ket0if100(inteval, &(inteval->stack[((hsi*280+7804)*1+lsi)*1]), &(inteval->stack[((hsi*216+7588)*1+lsi)*1]), &(inteval->stack[((hsi*168+6864)*1+lsi)*1]), &(inteval->stack[((hsi*168+4529)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+6756)*1+lsi)*1]), &(inteval->stack[((hsi*28+1140)*1+lsi)*1]), &(inteval->stack[((hsi*21+1168)*1+lsi)*1]), &(inteval->stack[((hsi*21+415)*1+lsi)*1]),1);
HRRPart0bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+1059)*1+lsi)*1]), &(inteval->stack[((hsi*84+6672)*1+lsi)*1]), &(inteval->stack[((hsi*63+6756)*1+lsi)*1]), &(inteval->stack[((hsi*63+4697)*1+lsi)*1]),1);
HRRPart0bra0ket0hf100(inteval, &(inteval->stack[((hsi*210+8084)*1+lsi)*1]), &(inteval->stack[((hsi*168+6864)*1+lsi)*1]), &(inteval->stack[((hsi*126+1059)*1+lsi)*1]), &(inteval->stack[((hsi*126+4760)*1+lsi)*1]),1);
HRRPart0bra0ket0hg100(inteval, &(inteval->stack[((hsi*315+6672)*1+lsi)*1]), &(inteval->stack[((hsi*280+7804)*1+lsi)*1]), &(inteval->stack[((hsi*210+8084)*1+lsi)*1]), &(inteval->stack[((hsi*210+4886)*1+lsi)*1]),1);
HRRPart0bra0ket0mp100(inteval, &(inteval->stack[((hsi*165+8084)*1+lsi)*1]), &(inteval->stack[((hsi*66+938)*1+lsi)*1]), &(inteval->stack[((hsi*55+1004)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0ld100(inteval, &(inteval->stack[((hsi*270+8249)*1+lsi)*1]), &(inteval->stack[((hsi*165+8084)*1+lsi)*1]), &(inteval->stack[((hsi*135+7453)*1+lsi)*1]), &(inteval->stack[((hsi*135+5096)*1+lsi)*1]),1);
HRRPart0bra0ket0kf100(inteval, &(inteval->stack[((hsi*360+8519)*1+lsi)*1]), &(inteval->stack[((hsi*270+8249)*1+lsi)*1]), &(inteval->stack[((hsi*216+7588)*1+lsi)*1]), &(inteval->stack[((hsi*216+5231)*1+lsi)*1]),1);
HRRPart0bra0ket0ig100(inteval, &(inteval->stack[((hsi*420+8084)*1+lsi)*1]), &(inteval->stack[((hsi*360+8519)*1+lsi)*1]), &(inteval->stack[((hsi*280+7804)*1+lsi)*1]), &(inteval->stack[((hsi*280+5447)*1+lsi)*1]),1);
HRRPart0bra0ket0hh100(inteval, &(inteval->stack[((hsi*441+3014)*1+lsi)*1]), &(inteval->stack[((hsi*420+8084)*1+lsi)*1]), &(inteval->stack[((hsi*315+6672)*1+lsi)*1]), &(inteval->stack[((hsi*315+5727)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+7453)*1+lsi)*1]), &(inteval->stack[((hsi*36+853)*1+lsi)*1]), &(inteval->stack[((hsi*28+889)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+7537)*1+lsi)*1]), &(inteval->stack[((hsi*45+808)*1+lsi)*1]), &(inteval->stack[((hsi*36+853)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d(inteval, &(inteval->stack[((hsi*168+7645)*1+lsi)*1]), &(inteval->stack[((hsi*108+7537)*1+lsi)*1]), &(inteval->stack[((hsi*84+7453)*1+lsi)*1]), &(inteval->stack[((hsi*84+4337)*1+lsi)*1]),1);
HRRPart0bra0ket0l001p(inteval, &(inteval->stack[((hsi*135+7813)*1+lsi)*1]), &(inteval->stack[((hsi*55+753)*1+lsi)*1]), &(inteval->stack[((hsi*45+808)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k001d(inteval, &(inteval->stack[((hsi*216+938)*1+lsi)*1]), &(inteval->stack[((hsi*135+7813)*1+lsi)*1]), &(inteval->stack[((hsi*108+7537)*1+lsi)*1]), &(inteval->stack[((hsi*108+4421)*1+lsi)*1]),1);
HRRPart0bra0ket0i001f(inteval, &(inteval->stack[((hsi*280+8504)*1+lsi)*1]), &(inteval->stack[((hsi*216+938)*1+lsi)*1]), &(inteval->stack[((hsi*168+7645)*1+lsi)*1]), &(inteval->stack[((hsi*168+4529)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+7948)*1+lsi)*1]), &(inteval->stack[((hsi*28+889)*1+lsi)*1]), &(inteval->stack[((hsi*21+917)*1+lsi)*1]), &(inteval->stack[((hsi*21+415)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d(inteval, &(inteval->stack[((hsi*126+808)*1+lsi)*1]), &(inteval->stack[((hsi*84+7453)*1+lsi)*1]), &(inteval->stack[((hsi*63+7948)*1+lsi)*1]), &(inteval->stack[((hsi*63+4697)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f(inteval, &(inteval->stack[((hsi*210+8784)*1+lsi)*1]), &(inteval->stack[((hsi*168+7645)*1+lsi)*1]), &(inteval->stack[((hsi*126+808)*1+lsi)*1]), &(inteval->stack[((hsi*126+4760)*1+lsi)*1]),1);
HRRPart0bra0ket0h001g(inteval, &(inteval->stack[((hsi*315+7453)*1+lsi)*1]), &(inteval->stack[((hsi*280+8504)*1+lsi)*1]), &(inteval->stack[((hsi*210+8784)*1+lsi)*1]), &(inteval->stack[((hsi*210+4886)*1+lsi)*1]),1);
HRRPart0bra0ket0m001p(inteval, &(inteval->stack[((hsi*165+8784)*1+lsi)*1]), &(inteval->stack[((hsi*66+687)*1+lsi)*1]), &(inteval->stack[((hsi*55+753)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l001d(inteval, &(inteval->stack[((hsi*270+8949)*1+lsi)*1]), &(inteval->stack[((hsi*165+8784)*1+lsi)*1]), &(inteval->stack[((hsi*135+7813)*1+lsi)*1]), &(inteval->stack[((hsi*135+5096)*1+lsi)*1]),1);
HRRPart0bra0ket0k001f(inteval, &(inteval->stack[((hsi*360+9219)*1+lsi)*1]), &(inteval->stack[((hsi*270+8949)*1+lsi)*1]), &(inteval->stack[((hsi*216+938)*1+lsi)*1]), &(inteval->stack[((hsi*216+5231)*1+lsi)*1]),1);
HRRPart0bra0ket0i001g(inteval, &(inteval->stack[((hsi*420+687)*1+lsi)*1]), &(inteval->stack[((hsi*360+9219)*1+lsi)*1]), &(inteval->stack[((hsi*280+8504)*1+lsi)*1]), &(inteval->stack[((hsi*280+5447)*1+lsi)*1]),1);
HRRPart0bra0ket0h001h(inteval, &(inteval->stack[((hsi*441+2573)*1+lsi)*1]), &(inteval->stack[((hsi*420+687)*1+lsi)*1]), &(inteval->stack[((hsi*315+7453)*1+lsi)*1]), &(inteval->stack[((hsi*315+5727)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+7768)*1+lsi)*1]), &(inteval->stack[((hsi*36+602)*1+lsi)*1]), &(inteval->stack[((hsi*28+638)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+7852)*1+lsi)*1]), &(inteval->stack[((hsi*45+557)*1+lsi)*1]), &(inteval->stack[((hsi*36+602)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d(inteval, &(inteval->stack[((hsi*168+8504)*1+lsi)*1]), &(inteval->stack[((hsi*108+7852)*1+lsi)*1]), &(inteval->stack[((hsi*84+7768)*1+lsi)*1]), &(inteval->stack[((hsi*84+4337)*1+lsi)*1]),1);
HRRPart0bra0ket0l010p(inteval, &(inteval->stack[((hsi*135+8672)*1+lsi)*1]), &(inteval->stack[((hsi*55+502)*1+lsi)*1]), &(inteval->stack[((hsi*45+557)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k010d(inteval, &(inteval->stack[((hsi*216+8807)*1+lsi)*1]), &(inteval->stack[((hsi*135+8672)*1+lsi)*1]), &(inteval->stack[((hsi*108+7852)*1+lsi)*1]), &(inteval->stack[((hsi*108+4421)*1+lsi)*1]),1);
HRRPart0bra0ket0i010f(inteval, &(inteval->stack[((hsi*280+9023)*1+lsi)*1]), &(inteval->stack[((hsi*216+8807)*1+lsi)*1]), &(inteval->stack[((hsi*168+8504)*1+lsi)*1]), &(inteval->stack[((hsi*168+4529)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+7852)*1+lsi)*1]), &(inteval->stack[((hsi*28+638)*1+lsi)*1]), &(inteval->stack[((hsi*21+666)*1+lsi)*1]), &(inteval->stack[((hsi*21+415)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d(inteval, &(inteval->stack[((hsi*126+7915)*1+lsi)*1]), &(inteval->stack[((hsi*84+7768)*1+lsi)*1]), &(inteval->stack[((hsi*63+7852)*1+lsi)*1]), &(inteval->stack[((hsi*63+4697)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f(inteval, &(inteval->stack[((hsi*210+9303)*1+lsi)*1]), &(inteval->stack[((hsi*168+8504)*1+lsi)*1]), &(inteval->stack[((hsi*126+7915)*1+lsi)*1]), &(inteval->stack[((hsi*126+4760)*1+lsi)*1]),1);
HRRPart0bra0ket0h010g(inteval, &(inteval->stack[((hsi*315+7768)*1+lsi)*1]), &(inteval->stack[((hsi*280+9023)*1+lsi)*1]), &(inteval->stack[((hsi*210+9303)*1+lsi)*1]), &(inteval->stack[((hsi*210+4886)*1+lsi)*1]),1);
HRRPart0bra0ket0m010p(inteval, &(inteval->stack[((hsi*165+8504)*1+lsi)*1]), &(inteval->stack[((hsi*66+436)*1+lsi)*1]), &(inteval->stack[((hsi*55+502)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l010d(inteval, &(inteval->stack[((hsi*270+9303)*1+lsi)*1]), &(inteval->stack[((hsi*165+8504)*1+lsi)*1]), &(inteval->stack[((hsi*135+8672)*1+lsi)*1]), &(inteval->stack[((hsi*135+5096)*1+lsi)*1]),1);
HRRPart0bra0ket0k010f(inteval, &(inteval->stack[((hsi*360+9573)*1+lsi)*1]), &(inteval->stack[((hsi*270+9303)*1+lsi)*1]), &(inteval->stack[((hsi*216+8807)*1+lsi)*1]), &(inteval->stack[((hsi*216+5231)*1+lsi)*1]),1);
HRRPart0bra0ket0i010g(inteval, &(inteval->stack[((hsi*420+8504)*1+lsi)*1]), &(inteval->stack[((hsi*360+9573)*1+lsi)*1]), &(inteval->stack[((hsi*280+9023)*1+lsi)*1]), &(inteval->stack[((hsi*280+5447)*1+lsi)*1]),1);
HRRPart0bra0ket0h010h(inteval, &(inteval->stack[((hsi*441+2132)*1+lsi)*1]), &(inteval->stack[((hsi*420+8504)*1+lsi)*1]), &(inteval->stack[((hsi*315+7768)*1+lsi)*1]), &(inteval->stack[((hsi*315+5727)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+436)*1+lsi)*1]), &(inteval->stack[((hsi*36+266)*1+lsi)*1]), &(inteval->stack[((hsi*28+338)*1+lsi)*1]), &(inteval->stack[((hsi*28+366)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+520)*1+lsi)*1]), &(inteval->stack[((hsi*45+176)*1+lsi)*1]), &(inteval->stack[((hsi*36+266)*1+lsi)*1]), &(inteval->stack[((hsi*36+302)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d(inteval, &(inteval->stack[((hsi*168+8924)*1+lsi)*1]), &(inteval->stack[((hsi*108+520)*1+lsi)*1]), &(inteval->stack[((hsi*84+436)*1+lsi)*1]), &(inteval->stack[((hsi*84+4337)*1+lsi)*1]),1);
HRRPart0bra0ket0l100p(inteval, &(inteval->stack[((hsi*135+9092)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*45+176)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k100d(inteval, &(inteval->stack[((hsi*216+9227)*1+lsi)*1]), &(inteval->stack[((hsi*135+9092)*1+lsi)*1]), &(inteval->stack[((hsi*108+520)*1+lsi)*1]), &(inteval->stack[((hsi*108+4421)*1+lsi)*1]),1);
HRRPart0bra0ket0i100f(inteval, &(inteval->stack[((hsi*280+9443)*1+lsi)*1]), &(inteval->stack[((hsi*216+9227)*1+lsi)*1]), &(inteval->stack[((hsi*168+8924)*1+lsi)*1]), &(inteval->stack[((hsi*168+4529)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+4337)*1+lsi)*1]), &(inteval->stack[((hsi*28+338)*1+lsi)*1]), &(inteval->stack[((hsi*21+394)*1+lsi)*1]), &(inteval->stack[((hsi*21+415)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d(inteval, &(inteval->stack[((hsi*126+4400)*1+lsi)*1]), &(inteval->stack[((hsi*84+436)*1+lsi)*1]), &(inteval->stack[((hsi*63+4337)*1+lsi)*1]), &(inteval->stack[((hsi*63+4697)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f(inteval, &(inteval->stack[((hsi*210+176)*1+lsi)*1]), &(inteval->stack[((hsi*168+8924)*1+lsi)*1]), &(inteval->stack[((hsi*126+4400)*1+lsi)*1]), &(inteval->stack[((hsi*126+4760)*1+lsi)*1]),1);
HRRPart0bra0ket0h100g(inteval, &(inteval->stack[((hsi*315+4337)*1+lsi)*1]), &(inteval->stack[((hsi*280+9443)*1+lsi)*1]), &(inteval->stack[((hsi*210+176)*1+lsi)*1]), &(inteval->stack[((hsi*210+4886)*1+lsi)*1]),1);
HRRPart0bra0ket0m100p(inteval, &(inteval->stack[((hsi*165+176)*1+lsi)*1]), &(inteval->stack[((hsi*66+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l100d(inteval, &(inteval->stack[((hsi*270+4652)*1+lsi)*1]), &(inteval->stack[((hsi*165+176)*1+lsi)*1]), &(inteval->stack[((hsi*135+9092)*1+lsi)*1]), &(inteval->stack[((hsi*135+5096)*1+lsi)*1]),1);
HRRPart0bra0ket0k100f(inteval, &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*270+4652)*1+lsi)*1]), &(inteval->stack[((hsi*216+9227)*1+lsi)*1]), &(inteval->stack[((hsi*216+5231)*1+lsi)*1]),1);
HRRPart0bra0ket0i100g(inteval, &(inteval->stack[((hsi*420+4652)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*280+9443)*1+lsi)*1]), &(inteval->stack[((hsi*280+5447)*1+lsi)*1]),1);
HRRPart0bra0ket0h100h(inteval, &(inteval->stack[((hsi*441+1691)*1+lsi)*1]), &(inteval->stack[((hsi*420+4652)*1+lsi)*1]), &(inteval->stack[((hsi*315+4337)*1+lsi)*1]), &(inteval->stack[((hsi*315+5727)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*441+1691)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*441+2132)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*441+2573)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*441+3014)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*441+3455)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*441+3896)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
