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
#include <CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s100__0___Ab__up_0.h>
#include <GenericContract.h>
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
void _elecpotderiv1_K_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+522)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+534)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+537)*1+lsi)*1]), &(stack[((hsi*3+534)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+543)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+546)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+543)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+552)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*6+546)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*6+537)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*3+534)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*10+552)*1+lsi)*1]), &(stack[((hsi*6+537)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+587)*1+lsi)*1]), &(stack[((hsi*3+543)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+593)*1+lsi)*1]), &(stack[((hsi*6+546)*1+lsi)*1]), &(stack[((hsi*6+587)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+543)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+603)*1+lsi)*1]), &(stack[((hsi*10+552)*1+lsi)*1]), &(stack[((hsi*10+593)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*6+546)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+618)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*15+603)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*10+552)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+522)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+534)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+639)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*6+537)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+534)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+649)*1+lsi)*1]), &(stack[((hsi*10+639)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*6+528)*1+lsi)*1]), &(stack[((hsi*6+537)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+664)*1+lsi)*1]), &(stack[((hsi*15+649)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*10+639)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+685)*1+lsi)*1]), &(stack[((hsi*21+664)*1+lsi)*1]), &(stack[((hsi*21+618)*1+lsi)*1]), &(stack[((hsi*15+649)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+522)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+639)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*6+587)*1+lsi)*1]), &(stack[((hsi*6+639)*1+lsi)*1]), &(stack[((hsi*3+543)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+645)*1+lsi)*1]), &(stack[((hsi*10+593)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*6+546)*1+lsi)*1]), &(stack[((hsi*6+587)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+528)*1+lsi)*1]), &(stack[((hsi*15+603)*1+lsi)*1]), &(stack[((hsi*15+645)*1+lsi)*1]), &(stack[((hsi*10+552)*1+lsi)*1]), &(stack[((hsi*10+593)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+713)*1+lsi)*1]), &(stack[((hsi*21+618)*1+lsi)*1]), &(stack[((hsi*21+528)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*15+603)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+741)*1+lsi)*1]), &(stack[((hsi*28+685)*1+lsi)*1]), &(stack[((hsi*28+713)*1+lsi)*1]), &(stack[((hsi*21+664)*1+lsi)*1]), &(stack[((hsi*21+618)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+660)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+663)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+660)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+669)*1+lsi)*1]), &(stack[((hsi*6+639)*1+lsi)*1]), &(stack[((hsi*6+663)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*10+669)*1+lsi)*1]), &(stack[((hsi*6+587)*1+lsi)*1]), &(stack[((hsi*6+639)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+777)*1+lsi)*1]), &(stack[((hsi*15+645)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*10+593)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+798)*1+lsi)*1]), &(stack[((hsi*21+528)*1+lsi)*1]), &(stack[((hsi*21+777)*1+lsi)*1]), &(stack[((hsi*15+603)*1+lsi)*1]), &(stack[((hsi*15+645)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+826)*1+lsi)*1]), &(stack[((hsi*28+713)*1+lsi)*1]), &(stack[((hsi*28+798)*1+lsi)*1]), &(stack[((hsi*21+618)*1+lsi)*1]), &(stack[((hsi*21+528)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]), &(stack[((hsi*36+826)*1+lsi)*1]), &(stack[((hsi*28+685)*1+lsi)*1]), &(stack[((hsi*28+713)*1+lsi)*1]));
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*108+862)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*36+970)*1+lsi)*1]), &(stack[((hsi*108+862)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+486)*1+lsi)*1]),&(stack[((hsi*36+970)*1+lsi)*1]),36);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*3+660)*1+lsi)*1]), &(stack[((hsi*3+525)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+549)*1+lsi)*1]), &(stack[((hsi*6+663)*1+lsi)*1]), &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*3+522)*1+lsi)*1]), &(stack[((hsi*3+660)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1006)*1+lsi)*1]), &(stack[((hsi*10+669)*1+lsi)*1]), &(stack[((hsi*10+549)*1+lsi)*1]), &(stack[((hsi*6+639)*1+lsi)*1]), &(stack[((hsi*6+663)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1021)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]), &(stack[((hsi*15+1006)*1+lsi)*1]), &(stack[((hsi*10+562)*1+lsi)*1]), &(stack[((hsi*10+669)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1042)*1+lsi)*1]), &(stack[((hsi*21+777)*1+lsi)*1]), &(stack[((hsi*21+1021)*1+lsi)*1]), &(stack[((hsi*15+645)*1+lsi)*1]), &(stack[((hsi*15+572)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1006)*1+lsi)*1]), &(stack[((hsi*28+798)*1+lsi)*1]), &(stack[((hsi*28+1042)*1+lsi)*1]), &(stack[((hsi*21+528)*1+lsi)*1]), &(stack[((hsi*21+777)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+522)*1+lsi)*1]), &(stack[((hsi*36+826)*1+lsi)*1]), &(stack[((hsi*36+1006)*1+lsi)*1]), &(stack[((hsi*28+713)*1+lsi)*1]), &(stack[((hsi*28+798)*1+lsi)*1]));
OSVRRElecPotInBra_aB_m__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+1006)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*45+522)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]), &(stack[((hsi*36+826)*1+lsi)*1]));
HRRPart0bra0ket0lp(inteval, &(stack[((hsi*135+1061)*1+lsi)*1]), &(stack[((hsi*55+1006)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*45+777)*1+lsi)*1]), &(stack[((hsi*135+1061)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+441)*1+lsi)*1]),&(stack[((hsi*45+777)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*36+522)*1+lsi)*1]), &(stack[((hsi*108+862)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+405)*1+lsi)*1]),&(stack[((hsi*36+522)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*45+632)*1+lsi)*1]), &(stack[((hsi*135+1061)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+360)*1+lsi)*1]),&(stack[((hsi*45+632)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*36+822)*1+lsi)*1]), &(stack[((hsi*108+862)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+324)*1+lsi)*1]),&(stack[((hsi*36+822)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*45+858)*1+lsi)*1]), &(stack[((hsi*135+1061)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+279)*1+lsi)*1]),&(stack[((hsi*45+858)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+903)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*28+685)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+243)*1+lsi)*1]),&(stack[((hsi*36+903)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1061)*1+lsi)*1]), &(stack[((hsi*55+1006)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+198)*1+lsi)*1]),&(stack[((hsi*45+1061)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1106)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*28+685)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+162)*1+lsi)*1]),&(stack[((hsi*36+1106)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1142)*1+lsi)*1]), &(stack[((hsi*55+1006)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+117)*1+lsi)*1]),&(stack[((hsi*45+1142)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+81)*1+lsi)*1]),&(stack[((hsi*36+741)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1187)*1+lsi)*1]), &(stack[((hsi*45+587)*1+lsi)*1]), &(stack[((hsi*28+685)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+45)*1+lsi)*1]),&(stack[((hsi*36+1187)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+558)*1+lsi)*1]), &(stack[((hsi*55+1006)*1+lsi)*1]), &(stack[((hsi*36+741)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+558)*1+lsi)*1]),45);
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
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
