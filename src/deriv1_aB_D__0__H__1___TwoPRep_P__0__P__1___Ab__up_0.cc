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
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0dp001.h>
#include <HRRPart0bra0ket0dp010.h>
#include <HRRPart0bra0ket0dp100.h>
#include <HRRPart0bra0ket0d001p.h>
#include <HRRPart0bra0ket0d010p.h>
#include <HRRPart0bra0ket0d100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1_aB_D__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__H__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7560)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*378+21168)*1+lsi)*1]), &(inteval->stack[((hsi*210+6090)*1+lsi)*1]), &(inteval->stack[((hsi*126+7140)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),21);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*504+21546)*1+lsi)*1]), &(inteval->stack[((hsi*280+5320)*1+lsi)*1]), &(inteval->stack[((hsi*168+6678)*1+lsi)*1]), &(inteval->stack[((hsi*168+7392)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1134+13230)*1+lsi)*1]), &(inteval->stack[((hsi*504+21546)*1+lsi)*1]), &(inteval->stack[((hsi*378+21168)*1+lsi)*1]),18);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*378+22050)*1+lsi)*1]), &(inteval->stack[((hsi*210+3738)*1+lsi)*1]), &(inteval->stack[((hsi*126+4788)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),21);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*504+22428)*1+lsi)*1]), &(inteval->stack[((hsi*280+2968)*1+lsi)*1]), &(inteval->stack[((hsi*168+4326)*1+lsi)*1]), &(inteval->stack[((hsi*168+7392)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1134+12096)*1+lsi)*1]), &(inteval->stack[((hsi*504+22428)*1+lsi)*1]), &(inteval->stack[((hsi*378+22050)*1+lsi)*1]),18);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*378+22932)*1+lsi)*1]), &(inteval->stack[((hsi*210+1260)*1+lsi)*1]), &(inteval->stack[((hsi*126+2436)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),21);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*504+23310)*1+lsi)*1]), &(inteval->stack[((hsi*280+490)*1+lsi)*1]), &(inteval->stack[((hsi*168+1974)*1+lsi)*1]), &(inteval->stack[((hsi*168+7392)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1134+10962)*1+lsi)*1]), &(inteval->stack[((hsi*504+23310)*1+lsi)*1]), &(inteval->stack[((hsi*378+22932)*1+lsi)*1]),18);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*378+23814)*1+lsi)*1]), &(inteval->stack[((hsi*210+5880)*1+lsi)*1]), &(inteval->stack[((hsi*126+7014)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),21);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*504+24192)*1+lsi)*1]), &(inteval->stack[((hsi*280+5040)*1+lsi)*1]), &(inteval->stack[((hsi*168+6510)*1+lsi)*1]), &(inteval->stack[((hsi*168+7392)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1134+9828)*1+lsi)*1]), &(inteval->stack[((hsi*504+24192)*1+lsi)*1]), &(inteval->stack[((hsi*378+23814)*1+lsi)*1]),18);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*378+24696)*1+lsi)*1]), &(inteval->stack[((hsi*210+3528)*1+lsi)*1]), &(inteval->stack[((hsi*126+4662)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),21);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*504+25074)*1+lsi)*1]), &(inteval->stack[((hsi*280+2688)*1+lsi)*1]), &(inteval->stack[((hsi*168+4158)*1+lsi)*1]), &(inteval->stack[((hsi*168+7392)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1134+8694)*1+lsi)*1]), &(inteval->stack[((hsi*504+25074)*1+lsi)*1]), &(inteval->stack[((hsi*378+24696)*1+lsi)*1]),18);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*378+25578)*1+lsi)*1]), &(inteval->stack[((hsi*210+1050)*1+lsi)*1]), &(inteval->stack[((hsi*126+2310)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),21);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*504+25956)*1+lsi)*1]), &(inteval->stack[((hsi*280+210)*1+lsi)*1]), &(inteval->stack[((hsi*168+1806)*1+lsi)*1]), &(inteval->stack[((hsi*168+7392)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1134+7560)*1+lsi)*1]), &(inteval->stack[((hsi*504+25956)*1+lsi)*1]), &(inteval->stack[((hsi*378+25578)*1+lsi)*1]),18);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*378+26460)*1+lsi)*1]), &(inteval->stack[((hsi*168+6846)*1+lsi)*1]), &(inteval->stack[((hsi*126+7266)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),6);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*630+26838)*1+lsi)*1]), &(inteval->stack[((hsi*280+5600)*1+lsi)*1]), &(inteval->stack[((hsi*210+6300)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1134+20034)*1+lsi)*1]), &(inteval->stack[((hsi*630+26838)*1+lsi)*1]), &(inteval->stack[((hsi*378+26460)*1+lsi)*1]),63);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*378+27468)*1+lsi)*1]), &(inteval->stack[((hsi*168+4494)*1+lsi)*1]), &(inteval->stack[((hsi*126+4914)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),6);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*630+27846)*1+lsi)*1]), &(inteval->stack[((hsi*280+3248)*1+lsi)*1]), &(inteval->stack[((hsi*210+3948)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1134+18900)*1+lsi)*1]), &(inteval->stack[((hsi*630+27846)*1+lsi)*1]), &(inteval->stack[((hsi*378+27468)*1+lsi)*1]),63);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*378+28476)*1+lsi)*1]), &(inteval->stack[((hsi*168+2142)*1+lsi)*1]), &(inteval->stack[((hsi*126+2562)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),6);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*630+28854)*1+lsi)*1]), &(inteval->stack[((hsi*280+770)*1+lsi)*1]), &(inteval->stack[((hsi*210+1470)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1134+17766)*1+lsi)*1]), &(inteval->stack[((hsi*630+28854)*1+lsi)*1]), &(inteval->stack[((hsi*378+28476)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+7392)*1+lsi)*1]), &(inteval->stack[((hsi*126+7014)*1+lsi)*1]), &(inteval->stack[((hsi*126+7140)*1+lsi)*1]), &(inteval->stack[((hsi*126+7266)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+7014)*1+lsi)*1]), &(inteval->stack[((hsi*168+6510)*1+lsi)*1]), &(inteval->stack[((hsi*168+6678)*1+lsi)*1]), &(inteval->stack[((hsi*168+6846)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*378+6510)*1+lsi)*1]), &(inteval->stack[((hsi*168+7014)*1+lsi)*1]), &(inteval->stack[((hsi*126+7392)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+6888)*1+lsi)*1]), &(inteval->stack[((hsi*210+5880)*1+lsi)*1]), &(inteval->stack[((hsi*210+6090)*1+lsi)*1]), &(inteval->stack[((hsi*210+6300)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+5880)*1+lsi)*1]), &(inteval->stack[((hsi*280+5040)*1+lsi)*1]), &(inteval->stack[((hsi*280+5320)*1+lsi)*1]), &(inteval->stack[((hsi*280+5600)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*630+5040)*1+lsi)*1]), &(inteval->stack[((hsi*280+5880)*1+lsi)*1]), &(inteval->stack[((hsi*210+6888)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1134+16632)*1+lsi)*1]), &(inteval->stack[((hsi*630+5040)*1+lsi)*1]), &(inteval->stack[((hsi*378+6510)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+5670)*1+lsi)*1]), &(inteval->stack[((hsi*126+4662)*1+lsi)*1]), &(inteval->stack[((hsi*126+4788)*1+lsi)*1]), &(inteval->stack[((hsi*126+4914)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+5796)*1+lsi)*1]), &(inteval->stack[((hsi*168+4158)*1+lsi)*1]), &(inteval->stack[((hsi*168+4326)*1+lsi)*1]), &(inteval->stack[((hsi*168+4494)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*378+4158)*1+lsi)*1]), &(inteval->stack[((hsi*168+5796)*1+lsi)*1]), &(inteval->stack[((hsi*126+5670)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+5670)*1+lsi)*1]), &(inteval->stack[((hsi*210+3528)*1+lsi)*1]), &(inteval->stack[((hsi*210+3738)*1+lsi)*1]), &(inteval->stack[((hsi*210+3948)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+6888)*1+lsi)*1]), &(inteval->stack[((hsi*280+2688)*1+lsi)*1]), &(inteval->stack[((hsi*280+2968)*1+lsi)*1]), &(inteval->stack[((hsi*280+3248)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*630+5880)*1+lsi)*1]), &(inteval->stack[((hsi*280+6888)*1+lsi)*1]), &(inteval->stack[((hsi*210+5670)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1134+15498)*1+lsi)*1]), &(inteval->stack[((hsi*630+5880)*1+lsi)*1]), &(inteval->stack[((hsi*378+4158)*1+lsi)*1]),63);
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+2688)*1+lsi)*1]), &(inteval->stack[((hsi*126+2310)*1+lsi)*1]), &(inteval->stack[((hsi*126+2436)*1+lsi)*1]), &(inteval->stack[((hsi*126+2562)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+2814)*1+lsi)*1]), &(inteval->stack[((hsi*168+1806)*1+lsi)*1]), &(inteval->stack[((hsi*168+1974)*1+lsi)*1]), &(inteval->stack[((hsi*168+2142)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*378+2982)*1+lsi)*1]), &(inteval->stack[((hsi*168+2814)*1+lsi)*1]), &(inteval->stack[((hsi*126+2688)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+5670)*1+lsi)*1]), &(inteval->stack[((hsi*210+1050)*1+lsi)*1]), &(inteval->stack[((hsi*210+1260)*1+lsi)*1]), &(inteval->stack[((hsi*210+1470)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+1050)*1+lsi)*1]), &(inteval->stack[((hsi*280+210)*1+lsi)*1]), &(inteval->stack[((hsi*280+490)*1+lsi)*1]), &(inteval->stack[((hsi*280+770)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*630+1330)*1+lsi)*1]), &(inteval->stack[((hsi*280+1050)*1+lsi)*1]), &(inteval->stack[((hsi*210+5670)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1134+14364)*1+lsi)*1]), &(inteval->stack[((hsi*630+1330)*1+lsi)*1]), &(inteval->stack[((hsi*378+2982)*1+lsi)*1]),63);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1134+7560)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1134+8694)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1134+9828)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1134+10962)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1134+12096)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1134+13230)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1134+14364)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1134+15498)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1134+16632)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1134+17766)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1134+18900)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1134+20034)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
