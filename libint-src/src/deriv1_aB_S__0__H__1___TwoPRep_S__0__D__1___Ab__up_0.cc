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
#include <CR_DerivGaussP1InBra_aB_S__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001d.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010d.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100d.h>
#include <HRRPart1bra0ket0h100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_S__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_S__0__H__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,814)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_S__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2326)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]), &(inteval->stack[((hsi*21+602)*1+lsi)*1]),1);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+2389)*1+lsi)*1]), &(inteval->stack[((hsi*28+765)*1+lsi)*1]), &(inteval->stack[((hsi*21+793)*1+lsi)*1]), &(inteval->stack[((hsi*21+602)*1+lsi)*1]),1);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+2452)*1+lsi)*1]), &(inteval->stack[((hsi*36+729)*1+lsi)*1]), &(inteval->stack[((hsi*28+765)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+2200)*1+lsi)*1]), &(inteval->stack[((hsi*84+2452)*1+lsi)*1]), &(inteval->stack[((hsi*63+2389)*1+lsi)*1]), &(inteval->stack[((hsi*63+2326)*1+lsi)*1]),1);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+2536)*1+lsi)*1]), &(inteval->stack[((hsi*28+680)*1+lsi)*1]), &(inteval->stack[((hsi*21+708)*1+lsi)*1]), &(inteval->stack[((hsi*21+602)*1+lsi)*1]),1);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+2599)*1+lsi)*1]), &(inteval->stack[((hsi*36+644)*1+lsi)*1]), &(inteval->stack[((hsi*28+680)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+2074)*1+lsi)*1]), &(inteval->stack[((hsi*84+2599)*1+lsi)*1]), &(inteval->stack[((hsi*63+2536)*1+lsi)*1]), &(inteval->stack[((hsi*63+2326)*1+lsi)*1]),1);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+2683)*1+lsi)*1]), &(inteval->stack[((hsi*28+574)*1+lsi)*1]), &(inteval->stack[((hsi*21+623)*1+lsi)*1]), &(inteval->stack[((hsi*21+602)*1+lsi)*1]),1);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+2746)*1+lsi)*1]), &(inteval->stack[((hsi*36+538)*1+lsi)*1]), &(inteval->stack[((hsi*28+574)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+1948)*1+lsi)*1]), &(inteval->stack[((hsi*84+2746)*1+lsi)*1]), &(inteval->stack[((hsi*63+2683)*1+lsi)*1]), &(inteval->stack[((hsi*63+2326)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+2830)*1+lsi)*1]), &(inteval->stack[((hsi*28+206)*1+lsi)*1]), &(inteval->stack[((hsi*28+461)*1+lsi)*1]), &(inteval->stack[((hsi*28+765)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+765)*1+lsi)*1]), &(inteval->stack[((hsi*21+234)*1+lsi)*1]), &(inteval->stack[((hsi*21+489)*1+lsi)*1]), &(inteval->stack[((hsi*21+793)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+2858)*1+lsi)*1]), &(inteval->stack[((hsi*28+2830)*1+lsi)*1]), &(inteval->stack[((hsi*21+765)*1+lsi)*1]), &(inteval->stack[((hsi*21+602)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+765)*1+lsi)*1]), &(inteval->stack[((hsi*36+170)*1+lsi)*1]), &(inteval->stack[((hsi*36+425)*1+lsi)*1]), &(inteval->stack[((hsi*36+729)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+2921)*1+lsi)*1]), &(inteval->stack[((hsi*36+765)*1+lsi)*1]), &(inteval->stack[((hsi*28+2830)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*126+1822)*1+lsi)*1]), &(inteval->stack[((hsi*84+2921)*1+lsi)*1]), &(inteval->stack[((hsi*63+2858)*1+lsi)*1]), &(inteval->stack[((hsi*63+2326)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+2830)*1+lsi)*1]), &(inteval->stack[((hsi*28+121)*1+lsi)*1]), &(inteval->stack[((hsi*28+376)*1+lsi)*1]), &(inteval->stack[((hsi*28+680)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+729)*1+lsi)*1]), &(inteval->stack[((hsi*21+149)*1+lsi)*1]), &(inteval->stack[((hsi*21+404)*1+lsi)*1]), &(inteval->stack[((hsi*21+708)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+750)*1+lsi)*1]), &(inteval->stack[((hsi*28+2830)*1+lsi)*1]), &(inteval->stack[((hsi*21+729)*1+lsi)*1]), &(inteval->stack[((hsi*21+602)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+680)*1+lsi)*1]), &(inteval->stack[((hsi*36+85)*1+lsi)*1]), &(inteval->stack[((hsi*36+340)*1+lsi)*1]), &(inteval->stack[((hsi*36+644)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+3005)*1+lsi)*1]), &(inteval->stack[((hsi*36+680)*1+lsi)*1]), &(inteval->stack[((hsi*28+2830)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*126+1696)*1+lsi)*1]), &(inteval->stack[((hsi*84+3005)*1+lsi)*1]), &(inteval->stack[((hsi*63+750)*1+lsi)*1]), &(inteval->stack[((hsi*63+2326)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+2830)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*28+291)*1+lsi)*1]), &(inteval->stack[((hsi*28+574)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+644)*1+lsi)*1]), &(inteval->stack[((hsi*21+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+319)*1+lsi)*1]), &(inteval->stack[((hsi*21+623)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+665)*1+lsi)*1]), &(inteval->stack[((hsi*28+2830)*1+lsi)*1]), &(inteval->stack[((hsi*21+644)*1+lsi)*1]), &(inteval->stack[((hsi*21+602)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+574)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+255)*1+lsi)*1]), &(inteval->stack[((hsi*36+538)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+3089)*1+lsi)*1]), &(inteval->stack[((hsi*36+574)*1+lsi)*1]), &(inteval->stack[((hsi*28+2830)*1+lsi)*1]), &(inteval->stack[((hsi*28+510)*1+lsi)*1]),1);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*126+1570)*1+lsi)*1]), &(inteval->stack[((hsi*84+3089)*1+lsi)*1]), &(inteval->stack[((hsi*63+665)*1+lsi)*1]), &(inteval->stack[((hsi*63+2326)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+510)*1+lsi)*1]), &(inteval->stack[((hsi*28+461)*1+lsi)*1]), &(inteval->stack[((hsi*21+489)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+573)*1+lsi)*1]), &(inteval->stack[((hsi*36+425)*1+lsi)*1]), &(inteval->stack[((hsi*28+461)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1444)*1+lsi)*1]), &(inteval->stack[((hsi*84+573)*1+lsi)*1]), &(inteval->stack[((hsi*63+510)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+425)*1+lsi)*1]), &(inteval->stack[((hsi*28+376)*1+lsi)*1]), &(inteval->stack[((hsi*21+404)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3173)*1+lsi)*1]), &(inteval->stack[((hsi*36+340)*1+lsi)*1]), &(inteval->stack[((hsi*28+376)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1318)*1+lsi)*1]), &(inteval->stack[((hsi*84+3173)*1+lsi)*1]), &(inteval->stack[((hsi*63+425)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+340)*1+lsi)*1]), &(inteval->stack[((hsi*28+291)*1+lsi)*1]), &(inteval->stack[((hsi*21+319)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3257)*1+lsi)*1]), &(inteval->stack[((hsi*36+255)*1+lsi)*1]), &(inteval->stack[((hsi*28+291)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1192)*1+lsi)*1]), &(inteval->stack[((hsi*84+3257)*1+lsi)*1]), &(inteval->stack[((hsi*63+340)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+255)*1+lsi)*1]), &(inteval->stack[((hsi*28+206)*1+lsi)*1]), &(inteval->stack[((hsi*21+234)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3341)*1+lsi)*1]), &(inteval->stack[((hsi*36+170)*1+lsi)*1]), &(inteval->stack[((hsi*28+206)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1066)*1+lsi)*1]), &(inteval->stack[((hsi*84+3341)*1+lsi)*1]), &(inteval->stack[((hsi*63+255)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+170)*1+lsi)*1]), &(inteval->stack[((hsi*28+121)*1+lsi)*1]), &(inteval->stack[((hsi*21+149)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3425)*1+lsi)*1]), &(inteval->stack[((hsi*36+85)*1+lsi)*1]), &(inteval->stack[((hsi*28+121)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+940)*1+lsi)*1]), &(inteval->stack[((hsi*84+3425)*1+lsi)*1]), &(inteval->stack[((hsi*63+170)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+85)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*21+64)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3509)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+814)*1+lsi)*1]), &(inteval->stack[((hsi*84+3509)*1+lsi)*1]), &(inteval->stack[((hsi*63+85)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*126+814)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*126+940)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*126+1066)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*126+1192)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*126+1318)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*126+1444)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*126+1570)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*126+1696)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*126+1822)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*126+1948)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*126+2074)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*126+2200)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
