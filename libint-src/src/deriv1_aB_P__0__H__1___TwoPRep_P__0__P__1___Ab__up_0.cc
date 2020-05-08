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
#include <CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart0bra0ket0pp001.h>
#include <HRRPart0bra0ket0pp010.h>
#include <HRRPart0bra0ket0pp100.h>
#include <HRRPart0bra0ket0p001p.h>
#include <HRRPart0bra0ket0p010p.h>
#include <HRRPart0bra0ket0p100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1_aB_P__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_P__0__H__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4242)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*189+11046)*1+lsi)*1]), &(inteval->stack[((hsi*126+3465)*1+lsi)*1]), &(inteval->stack[((hsi*63+4032)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),21);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*252+11235)*1+lsi)*1]), &(inteval->stack[((hsi*168+3003)*1+lsi)*1]), &(inteval->stack[((hsi*84+3801)*1+lsi)*1]), &(inteval->stack[((hsi*84+4158)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+7077)*1+lsi)*1]), &(inteval->stack[((hsi*252+11235)*1+lsi)*1]), &(inteval->stack[((hsi*189+11046)*1+lsi)*1]),9);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*189+11487)*1+lsi)*1]), &(inteval->stack[((hsi*126+2142)*1+lsi)*1]), &(inteval->stack[((hsi*63+2709)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),21);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*252+11676)*1+lsi)*1]), &(inteval->stack[((hsi*168+1680)*1+lsi)*1]), &(inteval->stack[((hsi*84+2478)*1+lsi)*1]), &(inteval->stack[((hsi*84+4158)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+6510)*1+lsi)*1]), &(inteval->stack[((hsi*252+11676)*1+lsi)*1]), &(inteval->stack[((hsi*189+11487)*1+lsi)*1]),9);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*189+11928)*1+lsi)*1]), &(inteval->stack[((hsi*126+756)*1+lsi)*1]), &(inteval->stack[((hsi*63+1386)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),21);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*252+12117)*1+lsi)*1]), &(inteval->stack[((hsi*168+294)*1+lsi)*1]), &(inteval->stack[((hsi*84+1155)*1+lsi)*1]), &(inteval->stack[((hsi*84+4158)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+5943)*1+lsi)*1]), &(inteval->stack[((hsi*252+12117)*1+lsi)*1]), &(inteval->stack[((hsi*189+11928)*1+lsi)*1]),9);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*189+12369)*1+lsi)*1]), &(inteval->stack[((hsi*126+3339)*1+lsi)*1]), &(inteval->stack[((hsi*63+3969)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),21);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*252+12558)*1+lsi)*1]), &(inteval->stack[((hsi*168+2835)*1+lsi)*1]), &(inteval->stack[((hsi*84+3717)*1+lsi)*1]), &(inteval->stack[((hsi*84+4158)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+5376)*1+lsi)*1]), &(inteval->stack[((hsi*252+12558)*1+lsi)*1]), &(inteval->stack[((hsi*189+12369)*1+lsi)*1]),9);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*189+12810)*1+lsi)*1]), &(inteval->stack[((hsi*126+2016)*1+lsi)*1]), &(inteval->stack[((hsi*63+2646)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),21);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*252+12999)*1+lsi)*1]), &(inteval->stack[((hsi*168+1512)*1+lsi)*1]), &(inteval->stack[((hsi*84+2394)*1+lsi)*1]), &(inteval->stack[((hsi*84+4158)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+4809)*1+lsi)*1]), &(inteval->stack[((hsi*252+12999)*1+lsi)*1]), &(inteval->stack[((hsi*189+12810)*1+lsi)*1]),9);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*189+13251)*1+lsi)*1]), &(inteval->stack[((hsi*126+630)*1+lsi)*1]), &(inteval->stack[((hsi*63+1323)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),21);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*252+13440)*1+lsi)*1]), &(inteval->stack[((hsi*168+126)*1+lsi)*1]), &(inteval->stack[((hsi*84+1071)*1+lsi)*1]), &(inteval->stack[((hsi*84+4158)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*567+4242)*1+lsi)*1]), &(inteval->stack[((hsi*252+13440)*1+lsi)*1]), &(inteval->stack[((hsi*189+13251)*1+lsi)*1]),9);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*189+13692)*1+lsi)*1]), &(inteval->stack[((hsi*84+3885)*1+lsi)*1]), &(inteval->stack[((hsi*63+4095)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),3);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*378+13881)*1+lsi)*1]), &(inteval->stack[((hsi*168+3171)*1+lsi)*1]), &(inteval->stack[((hsi*126+3591)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*567+10479)*1+lsi)*1]), &(inteval->stack[((hsi*378+13881)*1+lsi)*1]), &(inteval->stack[((hsi*189+13692)*1+lsi)*1]),63);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*189+14259)*1+lsi)*1]), &(inteval->stack[((hsi*84+2562)*1+lsi)*1]), &(inteval->stack[((hsi*63+2772)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),3);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*378+14448)*1+lsi)*1]), &(inteval->stack[((hsi*168+1848)*1+lsi)*1]), &(inteval->stack[((hsi*126+2268)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*567+9912)*1+lsi)*1]), &(inteval->stack[((hsi*378+14448)*1+lsi)*1]), &(inteval->stack[((hsi*189+14259)*1+lsi)*1]),63);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*189+14826)*1+lsi)*1]), &(inteval->stack[((hsi*84+1239)*1+lsi)*1]), &(inteval->stack[((hsi*63+1449)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),3);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*378+15015)*1+lsi)*1]), &(inteval->stack[((hsi*168+462)*1+lsi)*1]), &(inteval->stack[((hsi*126+882)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*567+9345)*1+lsi)*1]), &(inteval->stack[((hsi*378+15015)*1+lsi)*1]), &(inteval->stack[((hsi*189+14826)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+4158)*1+lsi)*1]), &(inteval->stack[((hsi*63+3969)*1+lsi)*1]), &(inteval->stack[((hsi*63+4032)*1+lsi)*1]), &(inteval->stack[((hsi*63+4095)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+3969)*1+lsi)*1]), &(inteval->stack[((hsi*84+3717)*1+lsi)*1]), &(inteval->stack[((hsi*84+3801)*1+lsi)*1]), &(inteval->stack[((hsi*84+3885)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*189+3717)*1+lsi)*1]), &(inteval->stack[((hsi*84+3969)*1+lsi)*1]), &(inteval->stack[((hsi*63+4158)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+3906)*1+lsi)*1]), &(inteval->stack[((hsi*126+3339)*1+lsi)*1]), &(inteval->stack[((hsi*126+3465)*1+lsi)*1]), &(inteval->stack[((hsi*126+3591)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+3339)*1+lsi)*1]), &(inteval->stack[((hsi*168+2835)*1+lsi)*1]), &(inteval->stack[((hsi*168+3003)*1+lsi)*1]), &(inteval->stack[((hsi*168+3171)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*378+2835)*1+lsi)*1]), &(inteval->stack[((hsi*168+3339)*1+lsi)*1]), &(inteval->stack[((hsi*126+3906)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*567+8778)*1+lsi)*1]), &(inteval->stack[((hsi*378+2835)*1+lsi)*1]), &(inteval->stack[((hsi*189+3717)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+3213)*1+lsi)*1]), &(inteval->stack[((hsi*63+2646)*1+lsi)*1]), &(inteval->stack[((hsi*63+2709)*1+lsi)*1]), &(inteval->stack[((hsi*63+2772)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+3276)*1+lsi)*1]), &(inteval->stack[((hsi*84+2394)*1+lsi)*1]), &(inteval->stack[((hsi*84+2478)*1+lsi)*1]), &(inteval->stack[((hsi*84+2562)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*189+2394)*1+lsi)*1]), &(inteval->stack[((hsi*84+3276)*1+lsi)*1]), &(inteval->stack[((hsi*63+3213)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+3213)*1+lsi)*1]), &(inteval->stack[((hsi*126+2016)*1+lsi)*1]), &(inteval->stack[((hsi*126+2142)*1+lsi)*1]), &(inteval->stack[((hsi*126+2268)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+3339)*1+lsi)*1]), &(inteval->stack[((hsi*168+1512)*1+lsi)*1]), &(inteval->stack[((hsi*168+1680)*1+lsi)*1]), &(inteval->stack[((hsi*168+1848)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*378+1512)*1+lsi)*1]), &(inteval->stack[((hsi*168+3339)*1+lsi)*1]), &(inteval->stack[((hsi*126+3213)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*567+8211)*1+lsi)*1]), &(inteval->stack[((hsi*378+1512)*1+lsi)*1]), &(inteval->stack[((hsi*189+2394)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+1890)*1+lsi)*1]), &(inteval->stack[((hsi*63+1323)*1+lsi)*1]), &(inteval->stack[((hsi*63+1386)*1+lsi)*1]), &(inteval->stack[((hsi*63+1449)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+3213)*1+lsi)*1]), &(inteval->stack[((hsi*84+1071)*1+lsi)*1]), &(inteval->stack[((hsi*84+1155)*1+lsi)*1]), &(inteval->stack[((hsi*84+1239)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*189+1953)*1+lsi)*1]), &(inteval->stack[((hsi*84+3213)*1+lsi)*1]), &(inteval->stack[((hsi*63+1890)*1+lsi)*1]), &(inteval->stack[((hsi*63+1008)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+3213)*1+lsi)*1]), &(inteval->stack[((hsi*126+630)*1+lsi)*1]), &(inteval->stack[((hsi*126+756)*1+lsi)*1]), &(inteval->stack[((hsi*126+882)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+630)*1+lsi)*1]), &(inteval->stack[((hsi*168+126)*1+lsi)*1]), &(inteval->stack[((hsi*168+294)*1+lsi)*1]), &(inteval->stack[((hsi*168+462)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*378+3339)*1+lsi)*1]), &(inteval->stack[((hsi*168+630)*1+lsi)*1]), &(inteval->stack[((hsi*126+3213)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*567+7644)*1+lsi)*1]), &(inteval->stack[((hsi*378+3339)*1+lsi)*1]), &(inteval->stack[((hsi*189+1953)*1+lsi)*1]),63);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*567+4242)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*567+4809)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*567+5376)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*567+5943)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*567+6510)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*567+7077)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*567+7644)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*567+8211)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*567+8778)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*567+9345)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*567+9912)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*567+10479)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
