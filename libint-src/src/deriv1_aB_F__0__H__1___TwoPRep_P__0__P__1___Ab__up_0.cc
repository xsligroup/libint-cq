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
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1_aB_F__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__H__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11830)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*630+34510)*1+lsi)*1]), &(inteval->stack[((hsi*280+11340)*1+lsi)*1]), &(inteval->stack[((hsi*210+11620)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),10);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*945+35140)*1+lsi)*1]), &(inteval->stack[((hsi*420+10605)*1+lsi)*1]), &(inteval->stack[((hsi*315+11025)*1+lsi)*1]), &(inteval->stack[((hsi*315+7840)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1890+32620)*1+lsi)*1]), &(inteval->stack[((hsi*945+35140)*1+lsi)*1]), &(inteval->stack[((hsi*630+34510)*1+lsi)*1]),63);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*630+36085)*1+lsi)*1]), &(inteval->stack[((hsi*280+10115)*1+lsi)*1]), &(inteval->stack[((hsi*210+10395)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),10);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*945+36715)*1+lsi)*1]), &(inteval->stack[((hsi*420+9380)*1+lsi)*1]), &(inteval->stack[((hsi*315+9800)*1+lsi)*1]), &(inteval->stack[((hsi*315+7840)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1890+30730)*1+lsi)*1]), &(inteval->stack[((hsi*945+36715)*1+lsi)*1]), &(inteval->stack[((hsi*630+36085)*1+lsi)*1]),63);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*630+37660)*1+lsi)*1]), &(inteval->stack[((hsi*280+8890)*1+lsi)*1]), &(inteval->stack[((hsi*210+9170)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),10);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*945+38290)*1+lsi)*1]), &(inteval->stack[((hsi*420+8155)*1+lsi)*1]), &(inteval->stack[((hsi*315+8575)*1+lsi)*1]), &(inteval->stack[((hsi*315+7840)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1890+28840)*1+lsi)*1]), &(inteval->stack[((hsi*945+38290)*1+lsi)*1]), &(inteval->stack[((hsi*630+37660)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+39235)*1+lsi)*1]), &(inteval->stack[((hsi*210+3955)*1+lsi)*1]), &(inteval->stack[((hsi*210+7630)*1+lsi)*1]), &(inteval->stack[((hsi*210+11620)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+39445)*1+lsi)*1]), &(inteval->stack[((hsi*280+3360)*1+lsi)*1]), &(inteval->stack[((hsi*280+7035)*1+lsi)*1]), &(inteval->stack[((hsi*280+11340)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*630+39725)*1+lsi)*1]), &(inteval->stack[((hsi*280+39445)*1+lsi)*1]), &(inteval->stack[((hsi*210+39235)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+11340)*1+lsi)*1]), &(inteval->stack[((hsi*315+3640)*1+lsi)*1]), &(inteval->stack[((hsi*315+7315)*1+lsi)*1]), &(inteval->stack[((hsi*315+11025)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+39235)*1+lsi)*1]), &(inteval->stack[((hsi*420+2940)*1+lsi)*1]), &(inteval->stack[((hsi*420+6615)*1+lsi)*1]), &(inteval->stack[((hsi*420+10605)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*945+40355)*1+lsi)*1]), &(inteval->stack[((hsi*420+39235)*1+lsi)*1]), &(inteval->stack[((hsi*315+11340)*1+lsi)*1]), &(inteval->stack[((hsi*315+7840)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1890+26950)*1+lsi)*1]), &(inteval->stack[((hsi*945+40355)*1+lsi)*1]), &(inteval->stack[((hsi*630+39725)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+10605)*1+lsi)*1]), &(inteval->stack[((hsi*210+2730)*1+lsi)*1]), &(inteval->stack[((hsi*210+6405)*1+lsi)*1]), &(inteval->stack[((hsi*210+10395)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+10815)*1+lsi)*1]), &(inteval->stack[((hsi*280+2135)*1+lsi)*1]), &(inteval->stack[((hsi*280+5810)*1+lsi)*1]), &(inteval->stack[((hsi*280+10115)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*630+11095)*1+lsi)*1]), &(inteval->stack[((hsi*280+10815)*1+lsi)*1]), &(inteval->stack[((hsi*210+10605)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+10115)*1+lsi)*1]), &(inteval->stack[((hsi*315+2415)*1+lsi)*1]), &(inteval->stack[((hsi*315+6090)*1+lsi)*1]), &(inteval->stack[((hsi*315+9800)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+10430)*1+lsi)*1]), &(inteval->stack[((hsi*420+1715)*1+lsi)*1]), &(inteval->stack[((hsi*420+5390)*1+lsi)*1]), &(inteval->stack[((hsi*420+9380)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*945+41300)*1+lsi)*1]), &(inteval->stack[((hsi*420+10430)*1+lsi)*1]), &(inteval->stack[((hsi*315+10115)*1+lsi)*1]), &(inteval->stack[((hsi*315+7840)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1890+25060)*1+lsi)*1]), &(inteval->stack[((hsi*945+41300)*1+lsi)*1]), &(inteval->stack[((hsi*630+11095)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+9380)*1+lsi)*1]), &(inteval->stack[((hsi*210+1295)*1+lsi)*1]), &(inteval->stack[((hsi*210+5180)*1+lsi)*1]), &(inteval->stack[((hsi*210+9170)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+9590)*1+lsi)*1]), &(inteval->stack[((hsi*280+420)*1+lsi)*1]), &(inteval->stack[((hsi*280+4585)*1+lsi)*1]), &(inteval->stack[((hsi*280+8890)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*630+9870)*1+lsi)*1]), &(inteval->stack[((hsi*280+9590)*1+lsi)*1]), &(inteval->stack[((hsi*210+9380)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+8890)*1+lsi)*1]), &(inteval->stack[((hsi*315+980)*1+lsi)*1]), &(inteval->stack[((hsi*315+4865)*1+lsi)*1]), &(inteval->stack[((hsi*315+8575)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+9205)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+4165)*1+lsi)*1]), &(inteval->stack[((hsi*420+8155)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*945+42245)*1+lsi)*1]), &(inteval->stack[((hsi*420+9205)*1+lsi)*1]), &(inteval->stack[((hsi*315+8890)*1+lsi)*1]), &(inteval->stack[((hsi*315+7840)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1890+23170)*1+lsi)*1]), &(inteval->stack[((hsi*945+42245)*1+lsi)*1]), &(inteval->stack[((hsi*630+9870)*1+lsi)*1]),63);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*630+7840)*1+lsi)*1]), &(inteval->stack[((hsi*315+7315)*1+lsi)*1]), &(inteval->stack[((hsi*210+7630)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),21);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*840+8470)*1+lsi)*1]), &(inteval->stack[((hsi*420+6615)*1+lsi)*1]), &(inteval->stack[((hsi*280+7035)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1890+21280)*1+lsi)*1]), &(inteval->stack[((hsi*840+8470)*1+lsi)*1]), &(inteval->stack[((hsi*630+7840)*1+lsi)*1]),30);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*630+6615)*1+lsi)*1]), &(inteval->stack[((hsi*315+6090)*1+lsi)*1]), &(inteval->stack[((hsi*210+6405)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),21);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*840+43190)*1+lsi)*1]), &(inteval->stack[((hsi*420+5390)*1+lsi)*1]), &(inteval->stack[((hsi*280+5810)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1890+19390)*1+lsi)*1]), &(inteval->stack[((hsi*840+43190)*1+lsi)*1]), &(inteval->stack[((hsi*630+6615)*1+lsi)*1]),30);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*630+5390)*1+lsi)*1]), &(inteval->stack[((hsi*315+4865)*1+lsi)*1]), &(inteval->stack[((hsi*210+5180)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),21);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*840+44030)*1+lsi)*1]), &(inteval->stack[((hsi*420+4165)*1+lsi)*1]), &(inteval->stack[((hsi*280+4585)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1890+17500)*1+lsi)*1]), &(inteval->stack[((hsi*840+44030)*1+lsi)*1]), &(inteval->stack[((hsi*630+5390)*1+lsi)*1]),30);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*630+4165)*1+lsi)*1]), &(inteval->stack[((hsi*315+3640)*1+lsi)*1]), &(inteval->stack[((hsi*210+3955)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),21);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*840+44870)*1+lsi)*1]), &(inteval->stack[((hsi*420+2940)*1+lsi)*1]), &(inteval->stack[((hsi*280+3360)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1890+15610)*1+lsi)*1]), &(inteval->stack[((hsi*840+44870)*1+lsi)*1]), &(inteval->stack[((hsi*630+4165)*1+lsi)*1]),30);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*630+2940)*1+lsi)*1]), &(inteval->stack[((hsi*315+2415)*1+lsi)*1]), &(inteval->stack[((hsi*210+2730)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),21);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*840+45710)*1+lsi)*1]), &(inteval->stack[((hsi*420+1715)*1+lsi)*1]), &(inteval->stack[((hsi*280+2135)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1890+13720)*1+lsi)*1]), &(inteval->stack[((hsi*840+45710)*1+lsi)*1]), &(inteval->stack[((hsi*630+2940)*1+lsi)*1]),30);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*630+1715)*1+lsi)*1]), &(inteval->stack[((hsi*315+980)*1+lsi)*1]), &(inteval->stack[((hsi*210+1295)*1+lsi)*1]), &(inteval->stack[((hsi*210+1505)*1+lsi)*1]),21);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*840+46550)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*280+420)*1+lsi)*1]), &(inteval->stack[((hsi*280+700)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1890+11830)*1+lsi)*1]), &(inteval->stack[((hsi*840+46550)*1+lsi)*1]), &(inteval->stack[((hsi*630+1715)*1+lsi)*1]),30);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1890+11830)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1890+13720)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1890+15610)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1890+17500)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1890+19390)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1890+21280)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1890+23170)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1890+25060)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1890+26950)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1890+28840)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1890+30730)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1890+32620)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
