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
#include <CR_DerivGaussP0InBra_aB_s001__0___ElecPot_h__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s001__0___ElecPot_i__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_h__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_i__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_h__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_i__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_h001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_h010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_h100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_i001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_i010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_i100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0ip.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_P_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+315)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+318)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+327)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+330)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]), &(stack[((hsi*3+327)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+336)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*6+330)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+346)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+349)*1+lsi)*1]), &(stack[((hsi*3+346)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+355)*1+lsi)*1]), &(stack[((hsi*6+349)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*3+346)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+365)*1+lsi)*1]), &(stack[((hsi*10+355)*1+lsi)*1]), &(stack[((hsi*10+336)*1+lsi)*1]), &(stack[((hsi*6+349)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+318)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+346)*1+lsi)*1]), &(stack[((hsi*3+327)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*6+330)*1+lsi)*1]), &(stack[((hsi*6+346)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]), &(stack[((hsi*3+327)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+390)*1+lsi)*1]), &(stack[((hsi*10+336)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*6+330)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+405)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]), &(stack[((hsi*15+390)*1+lsi)*1]), &(stack[((hsi*10+355)*1+lsi)*1]), &(stack[((hsi*10+336)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+315)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+352)*1+lsi)*1]), &(stack[((hsi*6+346)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*3+327)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+426)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*10+352)*1+lsi)*1]), &(stack[((hsi*6+330)*1+lsi)*1]), &(stack[((hsi*6+346)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+441)*1+lsi)*1]), &(stack[((hsi*15+390)*1+lsi)*1]), &(stack[((hsi*15+426)*1+lsi)*1]), &(stack[((hsi*10+336)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]), &(stack[((hsi*21+441)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]), &(stack[((hsi*15+390)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_h001__0___Ab__up_0(inteval, &(stack[((hsi*21+490)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+294)*1+lsi)*1]),&(stack[((hsi*21+490)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_h010__0___Ab__up_0(inteval, &(stack[((hsi*21+511)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+273)*1+lsi)*1]),&(stack[((hsi*21+511)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_h100__0___Ab__up_0(inteval, &(stack[((hsi*21+532)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+252)*1+lsi)*1]),&(stack[((hsi*21+532)*1+lsi)*1]),21);
HRRPart0ket0bra0hp(inteval, &(stack[((hsi*63+553)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+616)*1+lsi)*1]), &(stack[((hsi*63+553)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+231)*1+lsi)*1]),&(stack[((hsi*21+616)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+637)*1+lsi)*1]), &(stack[((hsi*63+553)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+210)*1+lsi)*1]),&(stack[((hsi*21+637)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+658)*1+lsi)*1]), &(stack[((hsi*63+553)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+189)*1+lsi)*1]),&(stack[((hsi*21+658)*1+lsi)*1]),21);
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+553)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+556)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]), &(stack[((hsi*3+553)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*6+556)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*10+352)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*6+346)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+315)*1+lsi)*1]), &(stack[((hsi*15+426)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*10+352)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+553)*1+lsi)*1]), &(stack[((hsi*21+441)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]), &(stack[((hsi*15+390)*1+lsi)*1]), &(stack[((hsi*15+426)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+315)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*28+553)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]), &(stack[((hsi*21+441)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i001__0___Ab__up_0(inteval, &(stack[((hsi*28+553)*1+lsi)*1]), &(stack[((hsi*36+315)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+161)*1+lsi)*1]),&(stack[((hsi*28+553)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i010__0___Ab__up_0(inteval, &(stack[((hsi*28+351)*1+lsi)*1]), &(stack[((hsi*36+315)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+133)*1+lsi)*1]),&(stack[((hsi*28+351)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i100__0___Ab__up_0(inteval, &(stack[((hsi*28+426)*1+lsi)*1]), &(stack[((hsi*36+315)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+105)*1+lsi)*1]),&(stack[((hsi*28+426)*1+lsi)*1]),28);
HRRPart0ket0bra0ip(inteval, &(stack[((hsi*84+679)*1+lsi)*1]), &(stack[((hsi*36+315)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+315)*1+lsi)*1]), &(stack[((hsi*84+679)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+77)*1+lsi)*1]),&(stack[((hsi*28+315)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+454)*1+lsi)*1]), &(stack[((hsi*84+679)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+49)*1+lsi)*1]),&(stack[((hsi*28+454)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+581)*1+lsi)*1]), &(stack[((hsi*84+679)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+21)*1+lsi)*1]),&(stack[((hsi*28+581)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+0)*1+lsi)*1]),&(stack[((hsi*21+405)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 315 */
}

#ifdef __cplusplus
};
#endif
