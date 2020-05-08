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
#include <CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0dp001.h>
#include <HRRPart0bra0ket0dp010.h>
#include <HRRPart0bra0ket0dp100.h>
#include <HRRPart0bra0ket0d001p.h>
#include <HRRPart0bra0ket0d010p.h>
#include <HRRPart0bra0ket0d100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1_aB_D__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_D__0__I__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9880)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*504+28024)*1+lsi)*1]), &(inteval->stack[((hsi*280+7952)*1+lsi)*1]), &(inteval->stack[((hsi*168+9328)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),28);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*648+28528)*1+lsi)*1]), &(inteval->stack[((hsi*360+6952)*1+lsi)*1]), &(inteval->stack[((hsi*216+8728)*1+lsi)*1]), &(inteval->stack[((hsi*216+9664)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1512+17440)*1+lsi)*1]), &(inteval->stack[((hsi*648+28528)*1+lsi)*1]), &(inteval->stack[((hsi*504+28024)*1+lsi)*1]),18);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*504+29176)*1+lsi)*1]), &(inteval->stack[((hsi*280+4880)*1+lsi)*1]), &(inteval->stack[((hsi*168+6256)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),28);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*648+29680)*1+lsi)*1]), &(inteval->stack[((hsi*360+3880)*1+lsi)*1]), &(inteval->stack[((hsi*216+5656)*1+lsi)*1]), &(inteval->stack[((hsi*216+9664)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1512+15928)*1+lsi)*1]), &(inteval->stack[((hsi*648+29680)*1+lsi)*1]), &(inteval->stack[((hsi*504+29176)*1+lsi)*1]),18);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*504+30328)*1+lsi)*1]), &(inteval->stack[((hsi*280+1640)*1+lsi)*1]), &(inteval->stack[((hsi*168+3184)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),28);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*648+30832)*1+lsi)*1]), &(inteval->stack[((hsi*360+640)*1+lsi)*1]), &(inteval->stack[((hsi*216+2584)*1+lsi)*1]), &(inteval->stack[((hsi*216+9664)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1512+14416)*1+lsi)*1]), &(inteval->stack[((hsi*648+30832)*1+lsi)*1]), &(inteval->stack[((hsi*504+30328)*1+lsi)*1]),18);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*504+31480)*1+lsi)*1]), &(inteval->stack[((hsi*280+7672)*1+lsi)*1]), &(inteval->stack[((hsi*168+9160)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),28);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*648+31984)*1+lsi)*1]), &(inteval->stack[((hsi*360+6592)*1+lsi)*1]), &(inteval->stack[((hsi*216+8512)*1+lsi)*1]), &(inteval->stack[((hsi*216+9664)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1512+12904)*1+lsi)*1]), &(inteval->stack[((hsi*648+31984)*1+lsi)*1]), &(inteval->stack[((hsi*504+31480)*1+lsi)*1]),18);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*504+32632)*1+lsi)*1]), &(inteval->stack[((hsi*280+4600)*1+lsi)*1]), &(inteval->stack[((hsi*168+6088)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),28);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*648+33136)*1+lsi)*1]), &(inteval->stack[((hsi*360+3520)*1+lsi)*1]), &(inteval->stack[((hsi*216+5440)*1+lsi)*1]), &(inteval->stack[((hsi*216+9664)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1512+11392)*1+lsi)*1]), &(inteval->stack[((hsi*648+33136)*1+lsi)*1]), &(inteval->stack[((hsi*504+32632)*1+lsi)*1]),18);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*504+33784)*1+lsi)*1]), &(inteval->stack[((hsi*280+1360)*1+lsi)*1]), &(inteval->stack[((hsi*168+3016)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),28);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*648+34288)*1+lsi)*1]), &(inteval->stack[((hsi*360+280)*1+lsi)*1]), &(inteval->stack[((hsi*216+2368)*1+lsi)*1]), &(inteval->stack[((hsi*216+9664)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1512+9880)*1+lsi)*1]), &(inteval->stack[((hsi*648+34288)*1+lsi)*1]), &(inteval->stack[((hsi*504+33784)*1+lsi)*1]),18);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*504+34936)*1+lsi)*1]), &(inteval->stack[((hsi*216+8944)*1+lsi)*1]), &(inteval->stack[((hsi*168+9496)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),6);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*840+35440)*1+lsi)*1]), &(inteval->stack[((hsi*360+7312)*1+lsi)*1]), &(inteval->stack[((hsi*280+8232)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1512+26512)*1+lsi)*1]), &(inteval->stack[((hsi*840+35440)*1+lsi)*1]), &(inteval->stack[((hsi*504+34936)*1+lsi)*1]),84);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*504+36280)*1+lsi)*1]), &(inteval->stack[((hsi*216+5872)*1+lsi)*1]), &(inteval->stack[((hsi*168+6424)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),6);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*840+36784)*1+lsi)*1]), &(inteval->stack[((hsi*360+4240)*1+lsi)*1]), &(inteval->stack[((hsi*280+5160)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1512+25000)*1+lsi)*1]), &(inteval->stack[((hsi*840+36784)*1+lsi)*1]), &(inteval->stack[((hsi*504+36280)*1+lsi)*1]),84);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*504+37624)*1+lsi)*1]), &(inteval->stack[((hsi*216+2800)*1+lsi)*1]), &(inteval->stack[((hsi*168+3352)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),6);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*840+38128)*1+lsi)*1]), &(inteval->stack[((hsi*360+1000)*1+lsi)*1]), &(inteval->stack[((hsi*280+1920)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1512+23488)*1+lsi)*1]), &(inteval->stack[((hsi*840+38128)*1+lsi)*1]), &(inteval->stack[((hsi*504+37624)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+9664)*1+lsi)*1]), &(inteval->stack[((hsi*168+9160)*1+lsi)*1]), &(inteval->stack[((hsi*168+9328)*1+lsi)*1]), &(inteval->stack[((hsi*168+9496)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+9160)*1+lsi)*1]), &(inteval->stack[((hsi*216+8512)*1+lsi)*1]), &(inteval->stack[((hsi*216+8728)*1+lsi)*1]), &(inteval->stack[((hsi*216+8944)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*504+8512)*1+lsi)*1]), &(inteval->stack[((hsi*216+9160)*1+lsi)*1]), &(inteval->stack[((hsi*168+9664)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+9016)*1+lsi)*1]), &(inteval->stack[((hsi*280+7672)*1+lsi)*1]), &(inteval->stack[((hsi*280+7952)*1+lsi)*1]), &(inteval->stack[((hsi*280+8232)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+7672)*1+lsi)*1]), &(inteval->stack[((hsi*360+6592)*1+lsi)*1]), &(inteval->stack[((hsi*360+6952)*1+lsi)*1]), &(inteval->stack[((hsi*360+7312)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*840+6592)*1+lsi)*1]), &(inteval->stack[((hsi*360+7672)*1+lsi)*1]), &(inteval->stack[((hsi*280+9016)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1512+21976)*1+lsi)*1]), &(inteval->stack[((hsi*840+6592)*1+lsi)*1]), &(inteval->stack[((hsi*504+8512)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+7432)*1+lsi)*1]), &(inteval->stack[((hsi*168+6088)*1+lsi)*1]), &(inteval->stack[((hsi*168+6256)*1+lsi)*1]), &(inteval->stack[((hsi*168+6424)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+7600)*1+lsi)*1]), &(inteval->stack[((hsi*216+5440)*1+lsi)*1]), &(inteval->stack[((hsi*216+5656)*1+lsi)*1]), &(inteval->stack[((hsi*216+5872)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*504+5440)*1+lsi)*1]), &(inteval->stack[((hsi*216+7600)*1+lsi)*1]), &(inteval->stack[((hsi*168+7432)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+7432)*1+lsi)*1]), &(inteval->stack[((hsi*280+4600)*1+lsi)*1]), &(inteval->stack[((hsi*280+4880)*1+lsi)*1]), &(inteval->stack[((hsi*280+5160)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+9016)*1+lsi)*1]), &(inteval->stack[((hsi*360+3520)*1+lsi)*1]), &(inteval->stack[((hsi*360+3880)*1+lsi)*1]), &(inteval->stack[((hsi*360+4240)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*840+3520)*1+lsi)*1]), &(inteval->stack[((hsi*360+9016)*1+lsi)*1]), &(inteval->stack[((hsi*280+7432)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1512+20464)*1+lsi)*1]), &(inteval->stack[((hsi*840+3520)*1+lsi)*1]), &(inteval->stack[((hsi*504+5440)*1+lsi)*1]),84);
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+4360)*1+lsi)*1]), &(inteval->stack[((hsi*168+3016)*1+lsi)*1]), &(inteval->stack[((hsi*168+3184)*1+lsi)*1]), &(inteval->stack[((hsi*168+3352)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*216+7432)*1+lsi)*1]), &(inteval->stack[((hsi*216+2368)*1+lsi)*1]), &(inteval->stack[((hsi*216+2584)*1+lsi)*1]), &(inteval->stack[((hsi*216+2800)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*504+2368)*1+lsi)*1]), &(inteval->stack[((hsi*216+7432)*1+lsi)*1]), &(inteval->stack[((hsi*168+4360)*1+lsi)*1]), &(inteval->stack[((hsi*168+2200)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+7432)*1+lsi)*1]), &(inteval->stack[((hsi*280+1360)*1+lsi)*1]), &(inteval->stack[((hsi*280+1640)*1+lsi)*1]), &(inteval->stack[((hsi*280+1920)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+4360)*1+lsi)*1]), &(inteval->stack[((hsi*360+280)*1+lsi)*1]), &(inteval->stack[((hsi*360+640)*1+lsi)*1]), &(inteval->stack[((hsi*360+1000)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*840+280)*1+lsi)*1]), &(inteval->stack[((hsi*360+4360)*1+lsi)*1]), &(inteval->stack[((hsi*280+7432)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1512+18952)*1+lsi)*1]), &(inteval->stack[((hsi*840+280)*1+lsi)*1]), &(inteval->stack[((hsi*504+2368)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1512+9880)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1512+11392)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1512+12904)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1512+14416)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1512+15928)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1512+17440)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1512+18952)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1512+20464)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1512+21976)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1512+23488)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1512+25000)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1512+26512)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
