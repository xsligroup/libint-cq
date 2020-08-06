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
#include <CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_m__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_H_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+865)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+868)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+871)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(stack[((hsi*3+865)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+877)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*3+865)*1+lsi)*1]), &(stack[((hsi*3+877)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+886)*1+lsi)*1]), &(stack[((hsi*6+871)*1+lsi)*1]), &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(stack[((hsi*3+865)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+896)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+899)*1+lsi)*1]), &(stack[((hsi*3+896)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+905)*1+lsi)*1]), &(stack[((hsi*6+899)*1+lsi)*1]), &(stack[((hsi*6+871)*1+lsi)*1]), &(stack[((hsi*3+896)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+915)*1+lsi)*1]), &(stack[((hsi*10+905)*1+lsi)*1]), &(stack[((hsi*10+886)*1+lsi)*1]), &(stack[((hsi*6+899)*1+lsi)*1]), &(stack[((hsi*6+871)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+868)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+896)*1+lsi)*1]), &(stack[((hsi*3+877)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+930)*1+lsi)*1]), &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*6+896)*1+lsi)*1]), &(stack[((hsi*3+865)*1+lsi)*1]), &(stack[((hsi*3+877)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+940)*1+lsi)*1]), &(stack[((hsi*10+886)*1+lsi)*1]), &(stack[((hsi*10+930)*1+lsi)*1]), &(stack[((hsi*6+871)*1+lsi)*1]), &(stack[((hsi*6+880)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+955)*1+lsi)*1]), &(stack[((hsi*15+915)*1+lsi)*1]), &(stack[((hsi*15+940)*1+lsi)*1]), &(stack[((hsi*10+905)*1+lsi)*1]), &(stack[((hsi*10+886)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+865)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+871)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(stack[((hsi*3+865)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+902)*1+lsi)*1]), &(stack[((hsi*6+896)*1+lsi)*1]), &(stack[((hsi*6+871)*1+lsi)*1]), &(stack[((hsi*3+877)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+976)*1+lsi)*1]), &(stack[((hsi*10+930)*1+lsi)*1]), &(stack[((hsi*10+902)*1+lsi)*1]), &(stack[((hsi*6+880)*1+lsi)*1]), &(stack[((hsi*6+896)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+991)*1+lsi)*1]), &(stack[((hsi*15+940)*1+lsi)*1]), &(stack[((hsi*15+976)*1+lsi)*1]), &(stack[((hsi*10+886)*1+lsi)*1]), &(stack[((hsi*10+930)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1012)*1+lsi)*1]), &(stack[((hsi*21+955)*1+lsi)*1]), &(stack[((hsi*21+991)*1+lsi)*1]), &(stack[((hsi*15+915)*1+lsi)*1]), &(stack[((hsi*15+940)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*63+1040)*1+lsi)*1]), &(stack[((hsi*28+1012)*1+lsi)*1]), &(stack[((hsi*21+955)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*21+1103)*1+lsi)*1]), &(stack[((hsi*63+1040)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+844)*1+lsi)*1]),&(stack[((hsi*21+1103)*1+lsi)*1]),21);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+912)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+865)*1+lsi)*1]), &(stack[((hsi*3+912)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+883)*1+lsi)*1]), &(stack[((hsi*6+871)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(stack[((hsi*3+865)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1124)*1+lsi)*1]), &(stack[((hsi*10+902)*1+lsi)*1]), &(stack[((hsi*10+883)*1+lsi)*1]), &(stack[((hsi*6+896)*1+lsi)*1]), &(stack[((hsi*6+871)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1139)*1+lsi)*1]), &(stack[((hsi*15+976)*1+lsi)*1]), &(stack[((hsi*15+1124)*1+lsi)*1]), &(stack[((hsi*10+930)*1+lsi)*1]), &(stack[((hsi*10+902)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1160)*1+lsi)*1]), &(stack[((hsi*21+991)*1+lsi)*1]), &(stack[((hsi*21+1139)*1+lsi)*1]), &(stack[((hsi*15+940)*1+lsi)*1]), &(stack[((hsi*15+976)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1188)*1+lsi)*1]), &(stack[((hsi*28+1012)*1+lsi)*1]), &(stack[((hsi*28+1160)*1+lsi)*1]), &(stack[((hsi*21+955)*1+lsi)*1]), &(stack[((hsi*21+991)*1+lsi)*1]));
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*84+1224)*1+lsi)*1]), &(stack[((hsi*36+1188)*1+lsi)*1]), &(stack[((hsi*28+1012)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*28+1308)*1+lsi)*1]), &(stack[((hsi*84+1224)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+816)*1+lsi)*1]),&(stack[((hsi*28+1308)*1+lsi)*1]),28);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+868)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+930)*1+lsi)*1]), &(stack[((hsi*3+912)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+936)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*6+930)*1+lsi)*1]), &(stack[((hsi*3+865)*1+lsi)*1]), &(stack[((hsi*3+912)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1336)*1+lsi)*1]), &(stack[((hsi*10+883)*1+lsi)*1]), &(stack[((hsi*10+936)*1+lsi)*1]), &(stack[((hsi*6+871)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1351)*1+lsi)*1]), &(stack[((hsi*15+1124)*1+lsi)*1]), &(stack[((hsi*15+1336)*1+lsi)*1]), &(stack[((hsi*10+902)*1+lsi)*1]), &(stack[((hsi*10+883)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1372)*1+lsi)*1]), &(stack[((hsi*21+1139)*1+lsi)*1]), &(stack[((hsi*21+1351)*1+lsi)*1]), &(stack[((hsi*15+976)*1+lsi)*1]), &(stack[((hsi*15+1124)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1400)*1+lsi)*1]), &(stack[((hsi*28+1160)*1+lsi)*1]), &(stack[((hsi*28+1372)*1+lsi)*1]), &(stack[((hsi*21+991)*1+lsi)*1]), &(stack[((hsi*21+1139)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1436)*1+lsi)*1]), &(stack[((hsi*36+1188)*1+lsi)*1]), &(stack[((hsi*36+1400)*1+lsi)*1]), &(stack[((hsi*28+1012)*1+lsi)*1]), &(stack[((hsi*28+1160)*1+lsi)*1]));
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*108+1481)*1+lsi)*1]), &(stack[((hsi*45+1436)*1+lsi)*1]), &(stack[((hsi*36+1188)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*36+976)*1+lsi)*1]), &(stack[((hsi*108+1481)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+780)*1+lsi)*1]),&(stack[((hsi*36+976)*1+lsi)*1]),36);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+865)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+871)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]), &(stack[((hsi*3+865)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+893)*1+lsi)*1]), &(stack[((hsi*6+930)*1+lsi)*1]), &(stack[((hsi*6+871)*1+lsi)*1]), &(stack[((hsi*3+912)*1+lsi)*1]), &(stack[((hsi*3+868)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1589)*1+lsi)*1]), &(stack[((hsi*10+936)*1+lsi)*1]), &(stack[((hsi*10+893)*1+lsi)*1]), &(stack[((hsi*6+877)*1+lsi)*1]), &(stack[((hsi*6+930)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+893)*1+lsi)*1]), &(stack[((hsi*15+1336)*1+lsi)*1]), &(stack[((hsi*15+1589)*1+lsi)*1]), &(stack[((hsi*10+883)*1+lsi)*1]), &(stack[((hsi*10+936)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+865)*1+lsi)*1]), &(stack[((hsi*21+1351)*1+lsi)*1]), &(stack[((hsi*21+893)*1+lsi)*1]), &(stack[((hsi*15+1124)*1+lsi)*1]), &(stack[((hsi*15+1336)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1589)*1+lsi)*1]), &(stack[((hsi*28+1372)*1+lsi)*1]), &(stack[((hsi*28+865)*1+lsi)*1]), &(stack[((hsi*21+1139)*1+lsi)*1]), &(stack[((hsi*21+1351)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+865)*1+lsi)*1]), &(stack[((hsi*36+1400)*1+lsi)*1]), &(stack[((hsi*36+1589)*1+lsi)*1]), &(stack[((hsi*28+1160)*1+lsi)*1]), &(stack[((hsi*28+1372)*1+lsi)*1]));
OSVRRElecPotInBra_aB_m__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+1124)*1+lsi)*1]), &(stack[((hsi*45+1436)*1+lsi)*1]), &(stack[((hsi*45+865)*1+lsi)*1]), &(stack[((hsi*36+1188)*1+lsi)*1]), &(stack[((hsi*36+1400)*1+lsi)*1]));
HRRPart0bra0ket0lp(inteval, &(stack[((hsi*135+1589)*1+lsi)*1]), &(stack[((hsi*55+1124)*1+lsi)*1]), &(stack[((hsi*45+1436)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*45+1336)*1+lsi)*1]), &(stack[((hsi*135+1589)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+735)*1+lsi)*1]),&(stack[((hsi*45+1336)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*21+1381)*1+lsi)*1]), &(stack[((hsi*63+1040)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+714)*1+lsi)*1]),&(stack[((hsi*21+1381)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*28+865)*1+lsi)*1]), &(stack[((hsi*84+1224)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+686)*1+lsi)*1]),&(stack[((hsi*28+865)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*36+1724)*1+lsi)*1]), &(stack[((hsi*108+1481)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+650)*1+lsi)*1]),&(stack[((hsi*36+1724)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*45+1760)*1+lsi)*1]), &(stack[((hsi*135+1589)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+605)*1+lsi)*1]),&(stack[((hsi*45+1760)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*21+1402)*1+lsi)*1]), &(stack[((hsi*63+1040)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+584)*1+lsi)*1]),&(stack[((hsi*21+1402)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*28+1040)*1+lsi)*1]), &(stack[((hsi*84+1224)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+556)*1+lsi)*1]),&(stack[((hsi*28+1040)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*36+1224)*1+lsi)*1]), &(stack[((hsi*108+1481)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+520)*1+lsi)*1]),&(stack[((hsi*36+1224)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*45+1481)*1+lsi)*1]), &(stack[((hsi*135+1589)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+475)*1+lsi)*1]),&(stack[((hsi*45+1481)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_h001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1526)*1+lsi)*1]), &(stack[((hsi*28+1012)*1+lsi)*1]), &(stack[((hsi*15+915)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+454)*1+lsi)*1]),&(stack[((hsi*21+1526)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1547)*1+lsi)*1]), &(stack[((hsi*36+1188)*1+lsi)*1]), &(stack[((hsi*21+955)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+426)*1+lsi)*1]),&(stack[((hsi*28+1547)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1575)*1+lsi)*1]), &(stack[((hsi*45+1436)*1+lsi)*1]), &(stack[((hsi*28+1012)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+390)*1+lsi)*1]),&(stack[((hsi*36+1575)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1611)*1+lsi)*1]), &(stack[((hsi*55+1124)*1+lsi)*1]), &(stack[((hsi*36+1188)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+345)*1+lsi)*1]),&(stack[((hsi*45+1611)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_h010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1656)*1+lsi)*1]), &(stack[((hsi*28+1012)*1+lsi)*1]), &(stack[((hsi*15+915)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+324)*1+lsi)*1]),&(stack[((hsi*21+1656)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1260)*1+lsi)*1]), &(stack[((hsi*36+1188)*1+lsi)*1]), &(stack[((hsi*21+955)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+296)*1+lsi)*1]),&(stack[((hsi*28+1260)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1677)*1+lsi)*1]), &(stack[((hsi*45+1436)*1+lsi)*1]), &(stack[((hsi*28+1012)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+260)*1+lsi)*1]),&(stack[((hsi*36+1677)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1805)*1+lsi)*1]), &(stack[((hsi*55+1124)*1+lsi)*1]), &(stack[((hsi*36+1188)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+215)*1+lsi)*1]),&(stack[((hsi*45+1805)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+194)*1+lsi)*1]),&(stack[((hsi*21+955)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_h100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1068)*1+lsi)*1]), &(stack[((hsi*28+1012)*1+lsi)*1]), &(stack[((hsi*15+915)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+173)*1+lsi)*1]),&(stack[((hsi*21+1068)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+145)*1+lsi)*1]),&(stack[((hsi*28+1012)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+893)*1+lsi)*1]), &(stack[((hsi*36+1188)*1+lsi)*1]), &(stack[((hsi*21+955)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+117)*1+lsi)*1]),&(stack[((hsi*28+893)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+81)*1+lsi)*1]),&(stack[((hsi*36+1188)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1850)*1+lsi)*1]), &(stack[((hsi*45+1436)*1+lsi)*1]), &(stack[((hsi*28+1012)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+45)*1+lsi)*1]),&(stack[((hsi*36+1850)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1423)*1+lsi)*1]), &(stack[((hsi*55+1124)*1+lsi)*1]), &(stack[((hsi*36+1188)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+1423)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 865 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
