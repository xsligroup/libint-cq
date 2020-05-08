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
#include <CR_DerivGaussP0InBra_aB_h001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_h010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_h100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_H_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+315)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+318)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+327)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+330)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]), &(stack[((hsi*3+327)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+336)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*6+330)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+346)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+349)*1+lsi)*1]), &(stack[((hsi*3+346)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+355)*1+lsi)*1]), &(stack[((hsi*6+349)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*3+346)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+365)*1+lsi)*1]), &(stack[((hsi*10+355)*1+lsi)*1]), &(stack[((hsi*10+336)*1+lsi)*1]), &(stack[((hsi*6+349)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+318)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+346)*1+lsi)*1]), &(stack[((hsi*3+327)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*6+330)*1+lsi)*1]), &(stack[((hsi*6+346)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]), &(stack[((hsi*3+327)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+390)*1+lsi)*1]), &(stack[((hsi*10+336)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*6+330)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+405)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]), &(stack[((hsi*15+390)*1+lsi)*1]), &(stack[((hsi*10+355)*1+lsi)*1]), &(stack[((hsi*10+336)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+315)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+352)*1+lsi)*1]), &(stack[((hsi*6+346)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*3+327)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+426)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*10+352)*1+lsi)*1]), &(stack[((hsi*6+330)*1+lsi)*1]), &(stack[((hsi*6+346)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+441)*1+lsi)*1]), &(stack[((hsi*15+390)*1+lsi)*1]), &(stack[((hsi*15+426)*1+lsi)*1]), &(stack[((hsi*10+336)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]), &(stack[((hsi*21+441)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]), &(stack[((hsi*15+390)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*63+490)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*21+553)*1+lsi)*1]), &(stack[((hsi*63+490)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+294)*1+lsi)*1]),&(stack[((hsi*21+553)*1+lsi)*1]),21);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+362)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+327)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]), &(stack[((hsi*3+362)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+333)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*6+327)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+574)*1+lsi)*1]), &(stack[((hsi*10+352)*1+lsi)*1]), &(stack[((hsi*10+333)*1+lsi)*1]), &(stack[((hsi*6+346)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+315)*1+lsi)*1]), &(stack[((hsi*15+426)*1+lsi)*1]), &(stack[((hsi*15+574)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*10+352)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+336)*1+lsi)*1]), &(stack[((hsi*21+441)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]), &(stack[((hsi*15+390)*1+lsi)*1]), &(stack[((hsi*15+426)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+574)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*28+336)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]), &(stack[((hsi*21+441)*1+lsi)*1]));
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*84+610)*1+lsi)*1]), &(stack[((hsi*36+574)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*28+315)*1+lsi)*1]), &(stack[((hsi*84+610)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+266)*1+lsi)*1]),&(stack[((hsi*28+315)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*21+426)*1+lsi)*1]), &(stack[((hsi*63+490)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+245)*1+lsi)*1]),&(stack[((hsi*21+426)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*28+694)*1+lsi)*1]), &(stack[((hsi*84+610)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+217)*1+lsi)*1]),&(stack[((hsi*28+694)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*21+380)*1+lsi)*1]), &(stack[((hsi*63+490)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+196)*1+lsi)*1]),&(stack[((hsi*21+380)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*28+490)*1+lsi)*1]), &(stack[((hsi*84+610)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+168)*1+lsi)*1]),&(stack[((hsi*28+490)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_h001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+610)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+147)*1+lsi)*1]),&(stack[((hsi*21+610)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+631)*1+lsi)*1]), &(stack[((hsi*36+574)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+119)*1+lsi)*1]),&(stack[((hsi*28+631)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_h010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+518)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+98)*1+lsi)*1]),&(stack[((hsi*21+518)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+659)*1+lsi)*1]), &(stack[((hsi*36+574)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+70)*1+lsi)*1]),&(stack[((hsi*28+659)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+49)*1+lsi)*1]),&(stack[((hsi*21+405)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_h100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+343)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+28)*1+lsi)*1]),&(stack[((hsi*21+343)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+447)*1+lsi)*1]), &(stack[((hsi*36+574)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+0)*1+lsi)*1]),&(stack[((hsi*28+447)*1+lsi)*1]),28);
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
