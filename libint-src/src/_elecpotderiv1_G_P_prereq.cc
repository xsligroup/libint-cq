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
#include <CR_DerivGaussP0InBra_aB_g001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_g010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_g100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_h001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_h010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_h100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_g__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_g__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_g__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_G_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+231)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+234)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+237)*1+lsi)*1]), &(stack[((hsi*3+231)*1+lsi)*1]), &(stack[((hsi*3+234)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+243)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+246)*1+lsi)*1]), &(stack[((hsi*3+243)*1+lsi)*1]), &(stack[((hsi*3+231)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+252)*1+lsi)*1]), &(stack[((hsi*6+246)*1+lsi)*1]), &(stack[((hsi*6+237)*1+lsi)*1]), &(stack[((hsi*3+243)*1+lsi)*1]), &(stack[((hsi*3+231)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+243)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+262)*1+lsi)*1]), &(stack[((hsi*3+234)*1+lsi)*1]), &(stack[((hsi*3+243)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+268)*1+lsi)*1]), &(stack[((hsi*6+237)*1+lsi)*1]), &(stack[((hsi*6+262)*1+lsi)*1]), &(stack[((hsi*3+231)*1+lsi)*1]), &(stack[((hsi*3+234)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+278)*1+lsi)*1]), &(stack[((hsi*10+252)*1+lsi)*1]), &(stack[((hsi*10+268)*1+lsi)*1]), &(stack[((hsi*6+246)*1+lsi)*1]), &(stack[((hsi*6+237)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+231)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+246)*1+lsi)*1]), &(stack[((hsi*3+243)*1+lsi)*1]), &(stack[((hsi*3+231)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+293)*1+lsi)*1]), &(stack[((hsi*6+262)*1+lsi)*1]), &(stack[((hsi*6+246)*1+lsi)*1]), &(stack[((hsi*3+234)*1+lsi)*1]), &(stack[((hsi*3+243)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+303)*1+lsi)*1]), &(stack[((hsi*10+268)*1+lsi)*1]), &(stack[((hsi*10+293)*1+lsi)*1]), &(stack[((hsi*6+237)*1+lsi)*1]), &(stack[((hsi*6+262)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+318)*1+lsi)*1]), &(stack[((hsi*15+278)*1+lsi)*1]), &(stack[((hsi*15+303)*1+lsi)*1]), &(stack[((hsi*10+252)*1+lsi)*1]), &(stack[((hsi*10+268)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*45+339)*1+lsi)*1]), &(stack[((hsi*21+318)*1+lsi)*1]), &(stack[((hsi*15+278)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*15+384)*1+lsi)*1]), &(stack[((hsi*45+339)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+216)*1+lsi)*1]),&(stack[((hsi*15+384)*1+lsi)*1]),15);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+234)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+237)*1+lsi)*1]), &(stack[((hsi*3+231)*1+lsi)*1]), &(stack[((hsi*3+234)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+399)*1+lsi)*1]), &(stack[((hsi*6+246)*1+lsi)*1]), &(stack[((hsi*6+237)*1+lsi)*1]), &(stack[((hsi*3+243)*1+lsi)*1]), &(stack[((hsi*3+231)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+231)*1+lsi)*1]), &(stack[((hsi*10+293)*1+lsi)*1]), &(stack[((hsi*10+399)*1+lsi)*1]), &(stack[((hsi*6+262)*1+lsi)*1]), &(stack[((hsi*6+246)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+399)*1+lsi)*1]), &(stack[((hsi*15+303)*1+lsi)*1]), &(stack[((hsi*15+231)*1+lsi)*1]), &(stack[((hsi*10+268)*1+lsi)*1]), &(stack[((hsi*10+293)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+420)*1+lsi)*1]), &(stack[((hsi*21+318)*1+lsi)*1]), &(stack[((hsi*21+399)*1+lsi)*1]), &(stack[((hsi*15+278)*1+lsi)*1]), &(stack[((hsi*15+303)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*63+448)*1+lsi)*1]), &(stack[((hsi*28+420)*1+lsi)*1]), &(stack[((hsi*21+318)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*21+399)*1+lsi)*1]), &(stack[((hsi*63+448)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+195)*1+lsi)*1]),&(stack[((hsi*21+399)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*15+293)*1+lsi)*1]), &(stack[((hsi*45+339)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+180)*1+lsi)*1]),&(stack[((hsi*15+293)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*21+231)*1+lsi)*1]), &(stack[((hsi*63+448)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+159)*1+lsi)*1]),&(stack[((hsi*21+231)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*15+262)*1+lsi)*1]), &(stack[((hsi*45+339)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+144)*1+lsi)*1]),&(stack[((hsi*15+262)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*21+339)*1+lsi)*1]), &(stack[((hsi*63+448)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+123)*1+lsi)*1]),&(stack[((hsi*21+339)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_g001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+360)*1+lsi)*1]), &(stack[((hsi*21+318)*1+lsi)*1]), &(stack[((hsi*10+252)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+108)*1+lsi)*1]),&(stack[((hsi*15+360)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_h001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+448)*1+lsi)*1]), &(stack[((hsi*28+420)*1+lsi)*1]), &(stack[((hsi*15+278)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+87)*1+lsi)*1]),&(stack[((hsi*21+448)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_g010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+469)*1+lsi)*1]), &(stack[((hsi*21+318)*1+lsi)*1]), &(stack[((hsi*10+252)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+72)*1+lsi)*1]),&(stack[((hsi*15+469)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_h010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+484)*1+lsi)*1]), &(stack[((hsi*28+420)*1+lsi)*1]), &(stack[((hsi*15+278)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+51)*1+lsi)*1]),&(stack[((hsi*21+484)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_g100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+505)*1+lsi)*1]), &(stack[((hsi*21+318)*1+lsi)*1]), &(stack[((hsi*10+252)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+36)*1+lsi)*1]),&(stack[((hsi*15+505)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_h100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+308)*1+lsi)*1]), &(stack[((hsi*28+420)*1+lsi)*1]), &(stack[((hsi*15+278)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+15)*1+lsi)*1]),&(stack[((hsi*21+308)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(stack[((hsi*15+278)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 231 */
}

#ifdef __cplusplus
};
#endif
