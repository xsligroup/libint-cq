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
#include <CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_I_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+412)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+415)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+418)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+421)*1+lsi)*1]), &(stack[((hsi*3+412)*1+lsi)*1]), &(stack[((hsi*3+418)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*3+415)*1+lsi)*1]), &(stack[((hsi*3+412)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+433)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*6+421)*1+lsi)*1]), &(stack[((hsi*3+415)*1+lsi)*1]), &(stack[((hsi*3+412)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+443)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+446)*1+lsi)*1]), &(stack[((hsi*3+418)*1+lsi)*1]), &(stack[((hsi*3+443)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+452)*1+lsi)*1]), &(stack[((hsi*6+421)*1+lsi)*1]), &(stack[((hsi*6+446)*1+lsi)*1]), &(stack[((hsi*3+412)*1+lsi)*1]), &(stack[((hsi*3+418)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+462)*1+lsi)*1]), &(stack[((hsi*10+433)*1+lsi)*1]), &(stack[((hsi*10+452)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*6+421)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+412)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+477)*1+lsi)*1]), &(stack[((hsi*3+412)*1+lsi)*1]), &(stack[((hsi*3+415)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+483)*1+lsi)*1]), &(stack[((hsi*6+477)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*3+412)*1+lsi)*1]), &(stack[((hsi*3+415)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+493)*1+lsi)*1]), &(stack[((hsi*10+483)*1+lsi)*1]), &(stack[((hsi*10+433)*1+lsi)*1]), &(stack[((hsi*6+477)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+508)*1+lsi)*1]), &(stack[((hsi*15+493)*1+lsi)*1]), &(stack[((hsi*15+462)*1+lsi)*1]), &(stack[((hsi*10+483)*1+lsi)*1]), &(stack[((hsi*10+433)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+477)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*3+443)*1+lsi)*1]), &(stack[((hsi*3+477)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+480)*1+lsi)*1]), &(stack[((hsi*6+446)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*3+418)*1+lsi)*1]), &(stack[((hsi*3+443)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+529)*1+lsi)*1]), &(stack[((hsi*10+452)*1+lsi)*1]), &(stack[((hsi*10+480)*1+lsi)*1]), &(stack[((hsi*6+421)*1+lsi)*1]), &(stack[((hsi*6+446)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+544)*1+lsi)*1]), &(stack[((hsi*15+462)*1+lsi)*1]), &(stack[((hsi*15+529)*1+lsi)*1]), &(stack[((hsi*10+433)*1+lsi)*1]), &(stack[((hsi*10+452)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+565)*1+lsi)*1]), &(stack[((hsi*21+508)*1+lsi)*1]), &(stack[((hsi*21+544)*1+lsi)*1]), &(stack[((hsi*15+493)*1+lsi)*1]), &(stack[((hsi*15+462)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+490)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+412)*1+lsi)*1]), &(stack[((hsi*3+477)*1+lsi)*1]), &(stack[((hsi*3+490)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+433)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*6+412)*1+lsi)*1]), &(stack[((hsi*3+443)*1+lsi)*1]), &(stack[((hsi*3+477)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+493)*1+lsi)*1]), &(stack[((hsi*10+480)*1+lsi)*1]), &(stack[((hsi*10+433)*1+lsi)*1]), &(stack[((hsi*6+446)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+593)*1+lsi)*1]), &(stack[((hsi*15+529)*1+lsi)*1]), &(stack[((hsi*15+493)*1+lsi)*1]), &(stack[((hsi*10+452)*1+lsi)*1]), &(stack[((hsi*10+480)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+614)*1+lsi)*1]), &(stack[((hsi*21+544)*1+lsi)*1]), &(stack[((hsi*21+593)*1+lsi)*1]), &(stack[((hsi*15+462)*1+lsi)*1]), &(stack[((hsi*15+529)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+642)*1+lsi)*1]), &(stack[((hsi*28+565)*1+lsi)*1]), &(stack[((hsi*28+614)*1+lsi)*1]), &(stack[((hsi*21+508)*1+lsi)*1]), &(stack[((hsi*21+544)*1+lsi)*1]));
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*84+678)*1+lsi)*1]), &(stack[((hsi*36+642)*1+lsi)*1]), &(stack[((hsi*28+565)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*28+443)*1+lsi)*1]), &(stack[((hsi*84+678)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+384)*1+lsi)*1]),&(stack[((hsi*28+443)*1+lsi)*1]),28);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+418)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+421)*1+lsi)*1]), &(stack[((hsi*3+490)*1+lsi)*1]), &(stack[((hsi*3+418)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+762)*1+lsi)*1]), &(stack[((hsi*6+412)*1+lsi)*1]), &(stack[((hsi*6+421)*1+lsi)*1]), &(stack[((hsi*3+477)*1+lsi)*1]), &(stack[((hsi*3+490)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+772)*1+lsi)*1]), &(stack[((hsi*10+433)*1+lsi)*1]), &(stack[((hsi*10+762)*1+lsi)*1]), &(stack[((hsi*6+427)*1+lsi)*1]), &(stack[((hsi*6+412)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+412)*1+lsi)*1]), &(stack[((hsi*15+493)*1+lsi)*1]), &(stack[((hsi*15+772)*1+lsi)*1]), &(stack[((hsi*10+480)*1+lsi)*1]), &(stack[((hsi*10+433)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+762)*1+lsi)*1]), &(stack[((hsi*21+593)*1+lsi)*1]), &(stack[((hsi*21+412)*1+lsi)*1]), &(stack[((hsi*15+529)*1+lsi)*1]), &(stack[((hsi*15+493)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+471)*1+lsi)*1]), &(stack[((hsi*28+614)*1+lsi)*1]), &(stack[((hsi*28+762)*1+lsi)*1]), &(stack[((hsi*21+544)*1+lsi)*1]), &(stack[((hsi*21+593)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+762)*1+lsi)*1]), &(stack[((hsi*36+642)*1+lsi)*1]), &(stack[((hsi*36+471)*1+lsi)*1]), &(stack[((hsi*28+565)*1+lsi)*1]), &(stack[((hsi*28+614)*1+lsi)*1]));
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*108+807)*1+lsi)*1]), &(stack[((hsi*45+762)*1+lsi)*1]), &(stack[((hsi*36+642)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*36+529)*1+lsi)*1]), &(stack[((hsi*108+807)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+348)*1+lsi)*1]),&(stack[((hsi*36+529)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*28+593)*1+lsi)*1]), &(stack[((hsi*84+678)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+320)*1+lsi)*1]),&(stack[((hsi*28+593)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*36+471)*1+lsi)*1]), &(stack[((hsi*108+807)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+284)*1+lsi)*1]),&(stack[((hsi*36+471)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*28+412)*1+lsi)*1]), &(stack[((hsi*84+678)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+256)*1+lsi)*1]),&(stack[((hsi*28+412)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*36+678)*1+lsi)*1]), &(stack[((hsi*108+807)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+220)*1+lsi)*1]),&(stack[((hsi*36+678)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+714)*1+lsi)*1]), &(stack[((hsi*36+642)*1+lsi)*1]), &(stack[((hsi*21+508)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+192)*1+lsi)*1]),&(stack[((hsi*28+714)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+807)*1+lsi)*1]), &(stack[((hsi*45+762)*1+lsi)*1]), &(stack[((hsi*28+565)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+156)*1+lsi)*1]),&(stack[((hsi*36+807)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+843)*1+lsi)*1]), &(stack[((hsi*36+642)*1+lsi)*1]), &(stack[((hsi*21+508)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+128)*1+lsi)*1]),&(stack[((hsi*28+843)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+871)*1+lsi)*1]), &(stack[((hsi*45+762)*1+lsi)*1]), &(stack[((hsi*28+565)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+92)*1+lsi)*1]),&(stack[((hsi*36+871)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+64)*1+lsi)*1]),&(stack[((hsi*28+565)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+907)*1+lsi)*1]), &(stack[((hsi*36+642)*1+lsi)*1]), &(stack[((hsi*21+508)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+36)*1+lsi)*1]),&(stack[((hsi*28+907)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+621)*1+lsi)*1]), &(stack[((hsi*45+762)*1+lsi)*1]), &(stack[((hsi*28+565)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(stack[((hsi*36+621)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 412 */
}

#ifdef __cplusplus
};
#endif
