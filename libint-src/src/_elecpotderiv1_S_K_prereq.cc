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
#include <CR_DerivGaussP0InBra_aB_s001__0___ElecPot_k__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_k__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_k__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <OSVRRElecPotInBra_aB_p__0___ElecPot_k__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_S_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+216)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+219)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+222)*1+lsi)*1]), &(stack[((hsi*3+219)*1+lsi)*1]), &(stack[((hsi*3+216)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+228)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+231)*1+lsi)*1]), &(stack[((hsi*3+228)*1+lsi)*1]), &(stack[((hsi*3+219)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+237)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+240)*1+lsi)*1]), &(stack[((hsi*3+216)*1+lsi)*1]), &(stack[((hsi*3+237)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+246)*1+lsi)*1]), &(stack[((hsi*6+222)*1+lsi)*1]), &(stack[((hsi*6+240)*1+lsi)*1]), &(stack[((hsi*3+219)*1+lsi)*1]), &(stack[((hsi*3+216)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+256)*1+lsi)*1]), &(stack[((hsi*6+231)*1+lsi)*1]), &(stack[((hsi*6+222)*1+lsi)*1]), &(stack[((hsi*3+228)*1+lsi)*1]), &(stack[((hsi*3+219)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+266)*1+lsi)*1]), &(stack[((hsi*10+256)*1+lsi)*1]), &(stack[((hsi*10+246)*1+lsi)*1]), &(stack[((hsi*6+231)*1+lsi)*1]), &(stack[((hsi*6+222)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+219)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+281)*1+lsi)*1]), &(stack[((hsi*3+237)*1+lsi)*1]), &(stack[((hsi*3+219)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+287)*1+lsi)*1]), &(stack[((hsi*6+240)*1+lsi)*1]), &(stack[((hsi*6+281)*1+lsi)*1]), &(stack[((hsi*3+216)*1+lsi)*1]), &(stack[((hsi*3+237)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+297)*1+lsi)*1]), &(stack[((hsi*10+246)*1+lsi)*1]), &(stack[((hsi*10+287)*1+lsi)*1]), &(stack[((hsi*6+222)*1+lsi)*1]), &(stack[((hsi*6+240)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+312)*1+lsi)*1]), &(stack[((hsi*15+266)*1+lsi)*1]), &(stack[((hsi*15+297)*1+lsi)*1]), &(stack[((hsi*10+256)*1+lsi)*1]), &(stack[((hsi*10+246)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+216)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+222)*1+lsi)*1]), &(stack[((hsi*3+216)*1+lsi)*1]), &(stack[((hsi*3+228)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+333)*1+lsi)*1]), &(stack[((hsi*6+222)*1+lsi)*1]), &(stack[((hsi*6+231)*1+lsi)*1]), &(stack[((hsi*3+216)*1+lsi)*1]), &(stack[((hsi*3+228)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+343)*1+lsi)*1]), &(stack[((hsi*10+333)*1+lsi)*1]), &(stack[((hsi*10+256)*1+lsi)*1]), &(stack[((hsi*6+222)*1+lsi)*1]), &(stack[((hsi*6+231)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+358)*1+lsi)*1]), &(stack[((hsi*15+343)*1+lsi)*1]), &(stack[((hsi*15+266)*1+lsi)*1]), &(stack[((hsi*10+333)*1+lsi)*1]), &(stack[((hsi*10+256)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+379)*1+lsi)*1]), &(stack[((hsi*21+358)*1+lsi)*1]), &(stack[((hsi*21+312)*1+lsi)*1]), &(stack[((hsi*15+343)*1+lsi)*1]), &(stack[((hsi*15+266)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+216)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+333)*1+lsi)*1]), &(stack[((hsi*3+219)*1+lsi)*1]), &(stack[((hsi*3+216)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+256)*1+lsi)*1]), &(stack[((hsi*6+281)*1+lsi)*1]), &(stack[((hsi*6+333)*1+lsi)*1]), &(stack[((hsi*3+237)*1+lsi)*1]), &(stack[((hsi*3+219)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+339)*1+lsi)*1]), &(stack[((hsi*10+287)*1+lsi)*1]), &(stack[((hsi*10+256)*1+lsi)*1]), &(stack[((hsi*6+240)*1+lsi)*1]), &(stack[((hsi*6+281)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+222)*1+lsi)*1]), &(stack[((hsi*15+297)*1+lsi)*1]), &(stack[((hsi*15+339)*1+lsi)*1]), &(stack[((hsi*10+246)*1+lsi)*1]), &(stack[((hsi*10+287)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+407)*1+lsi)*1]), &(stack[((hsi*21+312)*1+lsi)*1]), &(stack[((hsi*21+222)*1+lsi)*1]), &(stack[((hsi*15+266)*1+lsi)*1]), &(stack[((hsi*15+297)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+266)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+243)*1+lsi)*1]), &(stack[((hsi*3+216)*1+lsi)*1]), &(stack[((hsi*3+266)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+266)*1+lsi)*1]), &(stack[((hsi*6+333)*1+lsi)*1]), &(stack[((hsi*6+243)*1+lsi)*1]), &(stack[((hsi*3+219)*1+lsi)*1]), &(stack[((hsi*3+216)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+435)*1+lsi)*1]), &(stack[((hsi*10+256)*1+lsi)*1]), &(stack[((hsi*10+266)*1+lsi)*1]), &(stack[((hsi*6+281)*1+lsi)*1]), &(stack[((hsi*6+333)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+266)*1+lsi)*1]), &(stack[((hsi*15+339)*1+lsi)*1]), &(stack[((hsi*15+435)*1+lsi)*1]), &(stack[((hsi*10+287)*1+lsi)*1]), &(stack[((hsi*10+256)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+435)*1+lsi)*1]), &(stack[((hsi*21+222)*1+lsi)*1]), &(stack[((hsi*21+266)*1+lsi)*1]), &(stack[((hsi*15+297)*1+lsi)*1]), &(stack[((hsi*15+339)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+243)*1+lsi)*1]), &(stack[((hsi*28+407)*1+lsi)*1]), &(stack[((hsi*28+435)*1+lsi)*1]), &(stack[((hsi*21+312)*1+lsi)*1]), &(stack[((hsi*21+222)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+435)*1+lsi)*1]), &(stack[((hsi*28+379)*1+lsi)*1]), &(stack[((hsi*28+407)*1+lsi)*1]), &(stack[((hsi*21+358)*1+lsi)*1]), &(stack[((hsi*21+312)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+279)*1+lsi)*1]), &(stack[((hsi*36+435)*1+lsi)*1]), &(stack[((hsi*36+243)*1+lsi)*1]), &(stack[((hsi*28+379)*1+lsi)*1]), &(stack[((hsi*28+407)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k001__0___Ab__up_0(inteval, &(stack[((hsi*36+324)*1+lsi)*1]), &(stack[((hsi*45+279)*1+lsi)*1]), &(stack[((hsi*28+379)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+180)*1+lsi)*1]),&(stack[((hsi*36+324)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k010__0___Ab__up_0(inteval, &(stack[((hsi*36+471)*1+lsi)*1]), &(stack[((hsi*45+279)*1+lsi)*1]), &(stack[((hsi*28+379)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+144)*1+lsi)*1]),&(stack[((hsi*36+471)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k100__0___Ab__up_0(inteval, &(stack[((hsi*36+507)*1+lsi)*1]), &(stack[((hsi*45+279)*1+lsi)*1]), &(stack[((hsi*28+379)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+108)*1+lsi)*1]),&(stack[((hsi*36+507)*1+lsi)*1]),36);
OSVRRElecPotInBra_aB_p__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*108+543)*1+lsi)*1]), &(stack[((hsi*36+435)*1+lsi)*1]), &(stack[((hsi*36+243)*1+lsi)*1]), &(stack[((hsi*28+379)*1+lsi)*1]), &(stack[((hsi*28+407)*1+lsi)*1]));
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+360)*1+lsi)*1]), &(stack[((hsi*108+543)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+72)*1+lsi)*1]),&(stack[((hsi*36+360)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+216)*1+lsi)*1]), &(stack[((hsi*108+543)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+36)*1+lsi)*1]),&(stack[((hsi*36+216)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+396)*1+lsi)*1]), &(stack[((hsi*108+543)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(stack[((hsi*36+396)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 216 */
}

#ifdef __cplusplus
};
#endif
