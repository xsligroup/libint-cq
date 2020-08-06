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
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
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
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+362)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+327)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]), &(stack[((hsi*3+362)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+333)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]), &(stack[((hsi*6+327)*1+lsi)*1]), &(stack[((hsi*3+318)*1+lsi)*1]), &(stack[((hsi*3+315)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+511)*1+lsi)*1]), &(stack[((hsi*10+352)*1+lsi)*1]), &(stack[((hsi*10+333)*1+lsi)*1]), &(stack[((hsi*6+346)*1+lsi)*1]), &(stack[((hsi*6+321)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+315)*1+lsi)*1]), &(stack[((hsi*15+426)*1+lsi)*1]), &(stack[((hsi*15+511)*1+lsi)*1]), &(stack[((hsi*10+380)*1+lsi)*1]), &(stack[((hsi*10+352)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+336)*1+lsi)*1]), &(stack[((hsi*21+441)*1+lsi)*1]), &(stack[((hsi*21+315)*1+lsi)*1]), &(stack[((hsi*15+390)*1+lsi)*1]), &(stack[((hsi*15+426)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+511)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*28+336)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]), &(stack[((hsi*21+441)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i001__0___Ab__up_0(inteval, &(stack[((hsi*28+315)*1+lsi)*1]), &(stack[((hsi*36+511)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+266)*1+lsi)*1]),&(stack[((hsi*28+315)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_h010__0___Ab__up_0(inteval, &(stack[((hsi*21+426)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+245)*1+lsi)*1]),&(stack[((hsi*21+426)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i010__0___Ab__up_0(inteval, &(stack[((hsi*28+547)*1+lsi)*1]), &(stack[((hsi*36+511)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+217)*1+lsi)*1]),&(stack[((hsi*28+547)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_h100__0___Ab__up_0(inteval, &(stack[((hsi*21+380)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*15+365)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+196)*1+lsi)*1]),&(stack[((hsi*21+380)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i100__0___Ab__up_0(inteval, &(stack[((hsi*28+343)*1+lsi)*1]), &(stack[((hsi*36+511)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+168)*1+lsi)*1]),&(stack[((hsi*28+343)*1+lsi)*1]),28);
HRRPart0ket0bra0hp(inteval, &(stack[((hsi*63+575)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]), &(stack[((hsi*21+405)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+638)*1+lsi)*1]), &(stack[((hsi*63+575)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+147)*1+lsi)*1]),&(stack[((hsi*21+638)*1+lsi)*1]),21);
HRRPart0ket0bra0ip(inteval, &(stack[((hsi*84+659)*1+lsi)*1]), &(stack[((hsi*36+511)*1+lsi)*1]), &(stack[((hsi*28+462)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+447)*1+lsi)*1]), &(stack[((hsi*84+659)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+119)*1+lsi)*1]),&(stack[((hsi*28+447)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+511)*1+lsi)*1]), &(stack[((hsi*63+575)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+98)*1+lsi)*1]),&(stack[((hsi*21+511)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+743)*1+lsi)*1]), &(stack[((hsi*84+659)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+70)*1+lsi)*1]),&(stack[((hsi*28+743)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+49)*1+lsi)*1]),&(stack[((hsi*21+405)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+771)*1+lsi)*1]), &(stack[((hsi*63+575)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+28)*1+lsi)*1]),&(stack[((hsi*21+771)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+575)*1+lsi)*1]), &(stack[((hsi*84+659)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+0)*1+lsi)*1]),&(stack[((hsi*28+575)*1+lsi)*1]),28);
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
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
