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
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0bra0ket0hp.h>
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
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_H_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+559)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+562)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+565)*1+lsi)*1]), &(stack[((hsi*3+562)*1+lsi)*1]), &(stack[((hsi*3+559)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+571)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+574)*1+lsi)*1]), &(stack[((hsi*3+559)*1+lsi)*1]), &(stack[((hsi*3+571)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+580)*1+lsi)*1]), &(stack[((hsi*6+565)*1+lsi)*1]), &(stack[((hsi*6+574)*1+lsi)*1]), &(stack[((hsi*3+562)*1+lsi)*1]), &(stack[((hsi*3+559)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+590)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+593)*1+lsi)*1]), &(stack[((hsi*3+590)*1+lsi)*1]), &(stack[((hsi*3+562)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+599)*1+lsi)*1]), &(stack[((hsi*6+593)*1+lsi)*1]), &(stack[((hsi*6+565)*1+lsi)*1]), &(stack[((hsi*3+590)*1+lsi)*1]), &(stack[((hsi*3+562)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+609)*1+lsi)*1]), &(stack[((hsi*10+599)*1+lsi)*1]), &(stack[((hsi*10+580)*1+lsi)*1]), &(stack[((hsi*6+593)*1+lsi)*1]), &(stack[((hsi*6+565)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+562)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+590)*1+lsi)*1]), &(stack[((hsi*3+571)*1+lsi)*1]), &(stack[((hsi*3+562)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+624)*1+lsi)*1]), &(stack[((hsi*6+574)*1+lsi)*1]), &(stack[((hsi*6+590)*1+lsi)*1]), &(stack[((hsi*3+559)*1+lsi)*1]), &(stack[((hsi*3+571)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+634)*1+lsi)*1]), &(stack[((hsi*10+580)*1+lsi)*1]), &(stack[((hsi*10+624)*1+lsi)*1]), &(stack[((hsi*6+565)*1+lsi)*1]), &(stack[((hsi*6+574)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+649)*1+lsi)*1]), &(stack[((hsi*15+609)*1+lsi)*1]), &(stack[((hsi*15+634)*1+lsi)*1]), &(stack[((hsi*10+599)*1+lsi)*1]), &(stack[((hsi*10+580)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+559)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+565)*1+lsi)*1]), &(stack[((hsi*3+562)*1+lsi)*1]), &(stack[((hsi*3+559)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+596)*1+lsi)*1]), &(stack[((hsi*6+590)*1+lsi)*1]), &(stack[((hsi*6+565)*1+lsi)*1]), &(stack[((hsi*3+571)*1+lsi)*1]), &(stack[((hsi*3+562)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+670)*1+lsi)*1]), &(stack[((hsi*10+624)*1+lsi)*1]), &(stack[((hsi*10+596)*1+lsi)*1]), &(stack[((hsi*6+574)*1+lsi)*1]), &(stack[((hsi*6+590)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+685)*1+lsi)*1]), &(stack[((hsi*15+634)*1+lsi)*1]), &(stack[((hsi*15+670)*1+lsi)*1]), &(stack[((hsi*10+580)*1+lsi)*1]), &(stack[((hsi*10+624)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+706)*1+lsi)*1]), &(stack[((hsi*21+649)*1+lsi)*1]), &(stack[((hsi*21+685)*1+lsi)*1]), &(stack[((hsi*15+609)*1+lsi)*1]), &(stack[((hsi*15+634)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*63+734)*1+lsi)*1]), &(stack[((hsi*28+706)*1+lsi)*1]), &(stack[((hsi*21+649)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*21+797)*1+lsi)*1]), &(stack[((hsi*63+734)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+538)*1+lsi)*1]),&(stack[((hsi*21+797)*1+lsi)*1]),21);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+606)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+571)*1+lsi)*1]), &(stack[((hsi*3+559)*1+lsi)*1]), &(stack[((hsi*3+606)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+577)*1+lsi)*1]), &(stack[((hsi*6+565)*1+lsi)*1]), &(stack[((hsi*6+571)*1+lsi)*1]), &(stack[((hsi*3+562)*1+lsi)*1]), &(stack[((hsi*3+559)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+818)*1+lsi)*1]), &(stack[((hsi*10+596)*1+lsi)*1]), &(stack[((hsi*10+577)*1+lsi)*1]), &(stack[((hsi*6+590)*1+lsi)*1]), &(stack[((hsi*6+565)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+833)*1+lsi)*1]), &(stack[((hsi*15+670)*1+lsi)*1]), &(stack[((hsi*15+818)*1+lsi)*1]), &(stack[((hsi*10+624)*1+lsi)*1]), &(stack[((hsi*10+596)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+854)*1+lsi)*1]), &(stack[((hsi*21+685)*1+lsi)*1]), &(stack[((hsi*21+833)*1+lsi)*1]), &(stack[((hsi*15+634)*1+lsi)*1]), &(stack[((hsi*15+670)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+882)*1+lsi)*1]), &(stack[((hsi*28+706)*1+lsi)*1]), &(stack[((hsi*28+854)*1+lsi)*1]), &(stack[((hsi*21+649)*1+lsi)*1]), &(stack[((hsi*21+685)*1+lsi)*1]));
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*84+918)*1+lsi)*1]), &(stack[((hsi*36+882)*1+lsi)*1]), &(stack[((hsi*28+706)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*28+1002)*1+lsi)*1]), &(stack[((hsi*84+918)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+510)*1+lsi)*1]),&(stack[((hsi*28+1002)*1+lsi)*1]),28);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+562)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+624)*1+lsi)*1]), &(stack[((hsi*3+606)*1+lsi)*1]), &(stack[((hsi*3+562)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+630)*1+lsi)*1]), &(stack[((hsi*6+571)*1+lsi)*1]), &(stack[((hsi*6+624)*1+lsi)*1]), &(stack[((hsi*3+559)*1+lsi)*1]), &(stack[((hsi*3+606)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1030)*1+lsi)*1]), &(stack[((hsi*10+577)*1+lsi)*1]), &(stack[((hsi*10+630)*1+lsi)*1]), &(stack[((hsi*6+565)*1+lsi)*1]), &(stack[((hsi*6+571)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+624)*1+lsi)*1]), &(stack[((hsi*15+818)*1+lsi)*1]), &(stack[((hsi*15+1030)*1+lsi)*1]), &(stack[((hsi*10+596)*1+lsi)*1]), &(stack[((hsi*10+577)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+559)*1+lsi)*1]), &(stack[((hsi*21+833)*1+lsi)*1]), &(stack[((hsi*21+624)*1+lsi)*1]), &(stack[((hsi*15+670)*1+lsi)*1]), &(stack[((hsi*15+818)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1030)*1+lsi)*1]), &(stack[((hsi*28+854)*1+lsi)*1]), &(stack[((hsi*28+559)*1+lsi)*1]), &(stack[((hsi*21+685)*1+lsi)*1]), &(stack[((hsi*21+833)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+559)*1+lsi)*1]), &(stack[((hsi*36+882)*1+lsi)*1]), &(stack[((hsi*36+1030)*1+lsi)*1]), &(stack[((hsi*28+706)*1+lsi)*1]), &(stack[((hsi*28+854)*1+lsi)*1]));
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*108+1030)*1+lsi)*1]), &(stack[((hsi*45+559)*1+lsi)*1]), &(stack[((hsi*36+882)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*36+670)*1+lsi)*1]), &(stack[((hsi*108+1030)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+474)*1+lsi)*1]),&(stack[((hsi*36+670)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*21+818)*1+lsi)*1]), &(stack[((hsi*63+734)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+453)*1+lsi)*1]),&(stack[((hsi*21+818)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*28+839)*1+lsi)*1]), &(stack[((hsi*84+918)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+425)*1+lsi)*1]),&(stack[((hsi*28+839)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*36+1138)*1+lsi)*1]), &(stack[((hsi*108+1030)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+389)*1+lsi)*1]),&(stack[((hsi*36+1138)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*21+624)*1+lsi)*1]), &(stack[((hsi*63+734)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+368)*1+lsi)*1]),&(stack[((hsi*21+624)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*28+734)*1+lsi)*1]), &(stack[((hsi*84+918)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+340)*1+lsi)*1]),&(stack[((hsi*28+734)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*36+918)*1+lsi)*1]), &(stack[((hsi*108+1030)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+304)*1+lsi)*1]),&(stack[((hsi*36+918)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_h001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1030)*1+lsi)*1]), &(stack[((hsi*28+706)*1+lsi)*1]), &(stack[((hsi*15+609)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+283)*1+lsi)*1]),&(stack[((hsi*21+1030)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1051)*1+lsi)*1]), &(stack[((hsi*36+882)*1+lsi)*1]), &(stack[((hsi*21+649)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+255)*1+lsi)*1]),&(stack[((hsi*28+1051)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1079)*1+lsi)*1]), &(stack[((hsi*45+559)*1+lsi)*1]), &(stack[((hsi*28+706)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+219)*1+lsi)*1]),&(stack[((hsi*36+1079)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_h010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+954)*1+lsi)*1]), &(stack[((hsi*28+706)*1+lsi)*1]), &(stack[((hsi*15+609)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+198)*1+lsi)*1]),&(stack[((hsi*21+954)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+762)*1+lsi)*1]), &(stack[((hsi*36+882)*1+lsi)*1]), &(stack[((hsi*21+649)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+170)*1+lsi)*1]),&(stack[((hsi*28+762)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1174)*1+lsi)*1]), &(stack[((hsi*45+559)*1+lsi)*1]), &(stack[((hsi*28+706)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+134)*1+lsi)*1]),&(stack[((hsi*36+1174)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+113)*1+lsi)*1]),&(stack[((hsi*21+649)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_h100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+975)*1+lsi)*1]), &(stack[((hsi*28+706)*1+lsi)*1]), &(stack[((hsi*15+609)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+92)*1+lsi)*1]),&(stack[((hsi*21+975)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+64)*1+lsi)*1]),&(stack[((hsi*28+706)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1210)*1+lsi)*1]), &(stack[((hsi*36+882)*1+lsi)*1]), &(stack[((hsi*21+649)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+36)*1+lsi)*1]),&(stack[((hsi*28+1210)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+867)*1+lsi)*1]), &(stack[((hsi*45+559)*1+lsi)*1]), &(stack[((hsi*28+706)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(stack[((hsi*36+867)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 559 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
