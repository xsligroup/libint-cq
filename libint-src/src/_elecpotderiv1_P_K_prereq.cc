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
#include <CR_DerivGaussP0InBra_aB_s001__0___ElecPot_l__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_k__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_l__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_k__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_l__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_l001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_l010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_l100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0lp.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_m__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_P_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+522)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+534)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+537)*1+lsi)*1]), &(stack[((hsi*3+534)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+543)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+546)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+543)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+552)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*6+546)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*6+537)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*3+534)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*10+552)*1+lsi)*1]), &(stack[((hsi*6+537)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+587)*1+lsi)*1]), &(stack[((hsi*3+543)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+593)*1+lsi)*1]), &(stack[((hsi*6+546)*1+lsi)*1]), &(stack[((hsi*6+587)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+543)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+603)*1+lsi)*1]), &(stack[((hsi*10+552)*1+lsi)*1]), &(stack[((hsi*10+593)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*6+546)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+618)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*15+603)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*10+552)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+522)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+534)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+639)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*6+537)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+534)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+649)*1+lsi)*1]), &(stack[((hsi*10+639)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*6+537)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+664)*1+lsi)*1]), &(stack[((hsi*15+649)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*10+639)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+685)*1+lsi)*1]), &(stack[((hsi*21+664)*1+lsi)*1]), &(stack[((hsi*21+618)*1+lsi)*1]), &(stack[((hsi*15+649)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+522)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+639)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*6+587)*1+lsi)*1]), &(stack[((hsi*6+639)*1+lsi)*1]), &(stack[((hsi*3+543)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+645)*1+lsi)*1]), &(stack[((hsi*10+593)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*6+546)*1+lsi)*1]), &(stack[((hsi*6+587)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+528)*1+lsi)*1]), &(stack[((hsi*15+603)*1+lsi)*1]), &(stack[((hsi*15+645)*1+lsi)*1]), &(stack[((hsi*10+552)*1+lsi)*1]), &(stack[((hsi*10+593)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+713)*1+lsi)*1]), &(stack[((hsi*21+618)*1+lsi)*1]), &(stack[((hsi*21+528)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*15+603)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+741)*1+lsi)*1]), &(stack[((hsi*28+685)*1+lsi)*1]), &(stack[((hsi*28+713)*1+lsi)*1]), &(stack[((hsi*21+664)*1+lsi)*1]), &(stack[((hsi*21+618)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+660)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+663)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+660)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+669)*1+lsi)*1]), &(stack[((hsi*6+639)*1+lsi)*1]), &(stack[((hsi*6+663)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*10+669)*1+lsi)*1]), &(stack[((hsi*6+587)*1+lsi)*1]), &(stack[((hsi*6+639)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+777)*1+lsi)*1]), &(stack[((hsi*15+645)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*10+593)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+798)*1+lsi)*1]), &(stack[((hsi*21+528)*1+lsi)*1]), &(stack[((hsi*21+777)*1+lsi)*1]), &(stack[((hsi*15+603)*1+lsi)*1]), &(stack[((hsi*15+645)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+826)*1+lsi)*1]), &(stack[((hsi*28+713)*1+lsi)*1]), &(stack[((hsi*28+798)*1+lsi)*1]), &(stack[((hsi*21+618)*1+lsi)*1]), &(stack[((hsi*21+528)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]), &(stack[((hsi*36+826)*1+lsi)*1]), &(stack[((hsi*28+685)*1+lsi)*1]), &(stack[((hsi*28+713)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k001__0___Ab__up_0(inteval, &(stack[((hsi*36+862)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*28+685)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+486)*1+lsi)*1]),&(stack[((hsi*36+862)*1+lsi)*1]),36);
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*3+660)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+549)*1+lsi)*1]), &(stack[((hsi*6+663)*1+lsi)*1]), &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+660)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+898)*1+lsi)*1]), &(stack[((hsi*10+669)*1+lsi)*1]), &(stack[((hsi*10+549)*1+lsi)*1]), &(stack[((hsi*6+639)*1+lsi)*1]), &(stack[((hsi*6+663)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+913)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*15+898)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*10+669)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+934)*1+lsi)*1]), &(stack[((hsi*21+777)*1+lsi)*1]), &(stack[((hsi*21+913)*1+lsi)*1]), &(stack[((hsi*15+645)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+898)*1+lsi)*1]), &(stack[((hsi*28+798)*1+lsi)*1]), &(stack[((hsi*28+934)*1+lsi)*1]), &(stack[((hsi*21+528)*1+lsi)*1]), &(stack[((hsi*21+777)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+522)*1+lsi)*1]), &(stack[((hsi*36+826)*1+lsi)*1]), &(stack[((hsi*36+898)*1+lsi)*1]), &(stack[((hsi*28+713)*1+lsi)*1]), &(stack[((hsi*28+798)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_m__0___Ab__up_0(inteval, &(stack[((hsi*55+898)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*45+522)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]), &(stack[((hsi*36+826)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_l001__0___Ab__up_0(inteval, &(stack[((hsi*45+777)*1+lsi)*1]), &(stack[((hsi*55+898)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+441)*1+lsi)*1]),&(stack[((hsi*45+777)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k010__0___Ab__up_0(inteval, &(stack[((hsi*36+522)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*28+685)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+405)*1+lsi)*1]),&(stack[((hsi*36+522)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_l010__0___Ab__up_0(inteval, &(stack[((hsi*45+632)*1+lsi)*1]), &(stack[((hsi*55+898)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+360)*1+lsi)*1]),&(stack[((hsi*45+632)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k100__0___Ab__up_0(inteval, &(stack[((hsi*36+822)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*28+685)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+324)*1+lsi)*1]),&(stack[((hsi*36+822)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_l100__0___Ab__up_0(inteval, &(stack[((hsi*45+677)*1+lsi)*1]), &(stack[((hsi*55+898)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+279)*1+lsi)*1]),&(stack[((hsi*45+677)*1+lsi)*1]),45);
HRRPart0ket0bra0kp(inteval, &(stack[((hsi*108+953)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+1061)*1+lsi)*1]), &(stack[((hsi*108+953)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+243)*1+lsi)*1]),&(stack[((hsi*36+1061)*1+lsi)*1]),36);
HRRPart0ket0bra0lp(inteval, &(stack[((hsi*135+1097)*1+lsi)*1]), &(stack[((hsi*55+898)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+558)*1+lsi)*1]), &(stack[((hsi*135+1097)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+198)*1+lsi)*1]),&(stack[((hsi*45+558)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+898)*1+lsi)*1]), &(stack[((hsi*108+953)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+162)*1+lsi)*1]),&(stack[((hsi*36+898)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+1232)*1+lsi)*1]), &(stack[((hsi*135+1097)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+117)*1+lsi)*1]),&(stack[((hsi*45+1232)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+81)*1+lsi)*1]),&(stack[((hsi*36+741)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+1277)*1+lsi)*1]), &(stack[((hsi*108+953)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+45)*1+lsi)*1]),&(stack[((hsi*36+1277)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+934)*1+lsi)*1]), &(stack[((hsi*135+1097)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+934)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 522 */
}

#ifdef __cplusplus
};
#endif