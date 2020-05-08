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
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_i__0___ElecPot_p__0___Ab__up_0.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_I_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+168)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+171)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+174)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+177)*1+lsi)*1]), &(stack[((hsi*3+168)*1+lsi)*1]), &(stack[((hsi*3+174)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+183)*1+lsi)*1]), &(stack[((hsi*3+171)*1+lsi)*1]), &(stack[((hsi*3+168)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+189)*1+lsi)*1]), &(stack[((hsi*6+183)*1+lsi)*1]), &(stack[((hsi*6+177)*1+lsi)*1]), &(stack[((hsi*3+171)*1+lsi)*1]), &(stack[((hsi*3+168)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+199)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+202)*1+lsi)*1]), &(stack[((hsi*3+174)*1+lsi)*1]), &(stack[((hsi*3+199)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+208)*1+lsi)*1]), &(stack[((hsi*6+177)*1+lsi)*1]), &(stack[((hsi*6+202)*1+lsi)*1]), &(stack[((hsi*3+168)*1+lsi)*1]), &(stack[((hsi*3+174)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+218)*1+lsi)*1]), &(stack[((hsi*10+189)*1+lsi)*1]), &(stack[((hsi*10+208)*1+lsi)*1]), &(stack[((hsi*6+183)*1+lsi)*1]), &(stack[((hsi*6+177)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+168)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+233)*1+lsi)*1]), &(stack[((hsi*3+168)*1+lsi)*1]), &(stack[((hsi*3+171)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+239)*1+lsi)*1]), &(stack[((hsi*6+233)*1+lsi)*1]), &(stack[((hsi*6+183)*1+lsi)*1]), &(stack[((hsi*3+168)*1+lsi)*1]), &(stack[((hsi*3+171)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+249)*1+lsi)*1]), &(stack[((hsi*10+239)*1+lsi)*1]), &(stack[((hsi*10+189)*1+lsi)*1]), &(stack[((hsi*6+233)*1+lsi)*1]), &(stack[((hsi*6+183)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+264)*1+lsi)*1]), &(stack[((hsi*15+249)*1+lsi)*1]), &(stack[((hsi*15+218)*1+lsi)*1]), &(stack[((hsi*10+239)*1+lsi)*1]), &(stack[((hsi*10+189)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+233)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+183)*1+lsi)*1]), &(stack[((hsi*3+199)*1+lsi)*1]), &(stack[((hsi*3+233)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+236)*1+lsi)*1]), &(stack[((hsi*6+202)*1+lsi)*1]), &(stack[((hsi*6+183)*1+lsi)*1]), &(stack[((hsi*3+174)*1+lsi)*1]), &(stack[((hsi*3+199)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+285)*1+lsi)*1]), &(stack[((hsi*10+208)*1+lsi)*1]), &(stack[((hsi*10+236)*1+lsi)*1]), &(stack[((hsi*6+177)*1+lsi)*1]), &(stack[((hsi*6+202)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+300)*1+lsi)*1]), &(stack[((hsi*15+218)*1+lsi)*1]), &(stack[((hsi*15+285)*1+lsi)*1]), &(stack[((hsi*10+189)*1+lsi)*1]), &(stack[((hsi*10+208)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+246)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+168)*1+lsi)*1]), &(stack[((hsi*3+233)*1+lsi)*1]), &(stack[((hsi*3+246)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+189)*1+lsi)*1]), &(stack[((hsi*6+183)*1+lsi)*1]), &(stack[((hsi*6+168)*1+lsi)*1]), &(stack[((hsi*3+199)*1+lsi)*1]), &(stack[((hsi*3+233)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+168)*1+lsi)*1]), &(stack[((hsi*10+236)*1+lsi)*1]), &(stack[((hsi*10+189)*1+lsi)*1]), &(stack[((hsi*6+202)*1+lsi)*1]), &(stack[((hsi*6+183)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+183)*1+lsi)*1]), &(stack[((hsi*15+285)*1+lsi)*1]), &(stack[((hsi*15+168)*1+lsi)*1]), &(stack[((hsi*10+208)*1+lsi)*1]), &(stack[((hsi*10+236)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+321)*1+lsi)*1]), &(stack[((hsi*21+300)*1+lsi)*1]), &(stack[((hsi*21+183)*1+lsi)*1]), &(stack[((hsi*15+218)*1+lsi)*1]), &(stack[((hsi*15+285)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+168)*1+lsi)*1]), &(stack[((hsi*21+264)*1+lsi)*1]), &(stack[((hsi*21+300)*1+lsi)*1]), &(stack[((hsi*15+249)*1+lsi)*1]), &(stack[((hsi*15+218)*1+lsi)*1]));
OSVRRElecPotInKet_aB_i__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*84+349)*1+lsi)*1]), &(stack[((hsi*28+168)*1+lsi)*1]), &(stack[((hsi*28+321)*1+lsi)*1]), &(stack[((hsi*21+264)*1+lsi)*1]), &(stack[((hsi*21+300)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*28+196)*1+lsi)*1]), &(stack[((hsi*84+349)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+140)*1+lsi)*1]),&(stack[((hsi*28+196)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*28+224)*1+lsi)*1]), &(stack[((hsi*84+349)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+112)*1+lsi)*1]),&(stack[((hsi*28+224)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*28+433)*1+lsi)*1]), &(stack[((hsi*84+349)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+84)*1+lsi)*1]),&(stack[((hsi*28+433)*1+lsi)*1]),28);
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+349)*1+lsi)*1]), &(stack[((hsi*28+168)*1+lsi)*1]), &(stack[((hsi*28+321)*1+lsi)*1]), &(stack[((hsi*21+264)*1+lsi)*1]), &(stack[((hsi*21+300)*1+lsi)*1]));
CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+168)*1+lsi)*1]), &(stack[((hsi*36+349)*1+lsi)*1]), &(stack[((hsi*21+264)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+56)*1+lsi)*1]),&(stack[((hsi*28+168)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+285)*1+lsi)*1]), &(stack[((hsi*36+349)*1+lsi)*1]), &(stack[((hsi*21+264)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+28)*1+lsi)*1]),&(stack[((hsi*28+285)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+385)*1+lsi)*1]), &(stack[((hsi*36+349)*1+lsi)*1]), &(stack[((hsi*21+264)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+0)*1+lsi)*1]),&(stack[((hsi*28+385)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 168 */
}

#ifdef __cplusplus
};
#endif
