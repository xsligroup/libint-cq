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
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1_aB_F__0__H__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void deriv1_aB_F__0__H__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4620)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__H__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*630+11550)*1+lsi)*1]), &(inteval->stack[((hsi*280+4130)*1+lsi)*1]), &(inteval->stack[((hsi*210+4410)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*630+10920)*1+lsi)*1]), &(inteval->stack[((hsi*280+3640)*1+lsi)*1]), &(inteval->stack[((hsi*210+3920)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*630+10290)*1+lsi)*1]), &(inteval->stack[((hsi*280+3150)*1+lsi)*1]), &(inteval->stack[((hsi*210+3430)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+12180)*1+lsi)*1]), &(inteval->stack[((hsi*210+1470)*1+lsi)*1]), &(inteval->stack[((hsi*210+2940)*1+lsi)*1]), &(inteval->stack[((hsi*210+4410)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+12390)*1+lsi)*1]), &(inteval->stack[((hsi*280+1190)*1+lsi)*1]), &(inteval->stack[((hsi*280+2660)*1+lsi)*1]), &(inteval->stack[((hsi*280+4130)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*630+9660)*1+lsi)*1]), &(inteval->stack[((hsi*280+12390)*1+lsi)*1]), &(inteval->stack[((hsi*210+12180)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+12670)*1+lsi)*1]), &(inteval->stack[((hsi*210+980)*1+lsi)*1]), &(inteval->stack[((hsi*210+2450)*1+lsi)*1]), &(inteval->stack[((hsi*210+3920)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+12880)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]), &(inteval->stack[((hsi*280+2170)*1+lsi)*1]), &(inteval->stack[((hsi*280+3640)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*630+9030)*1+lsi)*1]), &(inteval->stack[((hsi*280+12880)*1+lsi)*1]), &(inteval->stack[((hsi*210+12670)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+13160)*1+lsi)*1]), &(inteval->stack[((hsi*210+490)*1+lsi)*1]), &(inteval->stack[((hsi*210+1960)*1+lsi)*1]), &(inteval->stack[((hsi*210+3430)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+13370)*1+lsi)*1]), &(inteval->stack[((hsi*280+210)*1+lsi)*1]), &(inteval->stack[((hsi*280+1680)*1+lsi)*1]), &(inteval->stack[((hsi*280+3150)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*630+8400)*1+lsi)*1]), &(inteval->stack[((hsi*280+13370)*1+lsi)*1]), &(inteval->stack[((hsi*210+13160)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+7770)*1+lsi)*1]), &(inteval->stack[((hsi*280+2660)*1+lsi)*1]), &(inteval->stack[((hsi*210+2940)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+7140)*1+lsi)*1]), &(inteval->stack[((hsi*280+2170)*1+lsi)*1]), &(inteval->stack[((hsi*210+2450)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+6510)*1+lsi)*1]), &(inteval->stack[((hsi*280+1680)*1+lsi)*1]), &(inteval->stack[((hsi*210+1960)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+5880)*1+lsi)*1]), &(inteval->stack[((hsi*280+1190)*1+lsi)*1]), &(inteval->stack[((hsi*210+1470)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+5250)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]), &(inteval->stack[((hsi*210+980)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+4620)*1+lsi)*1]), &(inteval->stack[((hsi*280+210)*1+lsi)*1]), &(inteval->stack[((hsi*210+490)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*630+4620)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*630+5250)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*630+5880)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*630+6510)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*630+7140)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*630+7770)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*630+8400)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*630+9030)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*630+9660)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*630+10290)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*630+10920)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*630+11550)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
