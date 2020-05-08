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
#include <CR_DerivGaussP0InBra_aB_s001__0___ElecPot_i__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s001__0___ElecPot_k__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s001__0___ElecPot_l__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_i__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_k__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_l__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_i__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_k__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_l__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_i001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_i010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_i100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_l001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_l010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_l100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0ket0bra0ip.h>
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
void _elecpotderiv1_D_I_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+718)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+721)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+724)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+727)*1+lsi)*1]), &(stack[((hsi*3+718)*1+lsi)*1]), &(stack[((hsi*3+724)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+733)*1+lsi)*1]), &(stack[((hsi*3+721)*1+lsi)*1]), &(stack[((hsi*3+718)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+739)*1+lsi)*1]), &(stack[((hsi*6+733)*1+lsi)*1]), &(stack[((hsi*6+727)*1+lsi)*1]), &(stack[((hsi*3+721)*1+lsi)*1]), &(stack[((hsi*3+718)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+749)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+752)*1+lsi)*1]), &(stack[((hsi*3+724)*1+lsi)*1]), &(stack[((hsi*3+749)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+758)*1+lsi)*1]), &(stack[((hsi*6+727)*1+lsi)*1]), &(stack[((hsi*6+752)*1+lsi)*1]), &(stack[((hsi*3+718)*1+lsi)*1]), &(stack[((hsi*3+724)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+768)*1+lsi)*1]), &(stack[((hsi*10+739)*1+lsi)*1]), &(stack[((hsi*10+758)*1+lsi)*1]), &(stack[((hsi*6+733)*1+lsi)*1]), &(stack[((hsi*6+727)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+718)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+783)*1+lsi)*1]), &(stack[((hsi*3+718)*1+lsi)*1]), &(stack[((hsi*3+721)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+789)*1+lsi)*1]), &(stack[((hsi*6+783)*1+lsi)*1]), &(stack[((hsi*6+733)*1+lsi)*1]), &(stack[((hsi*3+718)*1+lsi)*1]), &(stack[((hsi*3+721)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+799)*1+lsi)*1]), &(stack[((hsi*10+789)*1+lsi)*1]), &(stack[((hsi*10+739)*1+lsi)*1]), &(stack[((hsi*6+783)*1+lsi)*1]), &(stack[((hsi*6+733)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+814)*1+lsi)*1]), &(stack[((hsi*15+799)*1+lsi)*1]), &(stack[((hsi*15+768)*1+lsi)*1]), &(stack[((hsi*10+789)*1+lsi)*1]), &(stack[((hsi*10+739)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+783)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+733)*1+lsi)*1]), &(stack[((hsi*3+749)*1+lsi)*1]), &(stack[((hsi*3+783)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+786)*1+lsi)*1]), &(stack[((hsi*6+752)*1+lsi)*1]), &(stack[((hsi*6+733)*1+lsi)*1]), &(stack[((hsi*3+724)*1+lsi)*1]), &(stack[((hsi*3+749)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+835)*1+lsi)*1]), &(stack[((hsi*10+758)*1+lsi)*1]), &(stack[((hsi*10+786)*1+lsi)*1]), &(stack[((hsi*6+727)*1+lsi)*1]), &(stack[((hsi*6+752)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+850)*1+lsi)*1]), &(stack[((hsi*15+768)*1+lsi)*1]), &(stack[((hsi*15+835)*1+lsi)*1]), &(stack[((hsi*10+739)*1+lsi)*1]), &(stack[((hsi*10+758)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+871)*1+lsi)*1]), &(stack[((hsi*21+814)*1+lsi)*1]), &(stack[((hsi*21+850)*1+lsi)*1]), &(stack[((hsi*15+799)*1+lsi)*1]), &(stack[((hsi*15+768)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+796)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+718)*1+lsi)*1]), &(stack[((hsi*3+783)*1+lsi)*1]), &(stack[((hsi*3+796)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+739)*1+lsi)*1]), &(stack[((hsi*6+733)*1+lsi)*1]), &(stack[((hsi*6+718)*1+lsi)*1]), &(stack[((hsi*3+749)*1+lsi)*1]), &(stack[((hsi*3+783)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+799)*1+lsi)*1]), &(stack[((hsi*10+786)*1+lsi)*1]), &(stack[((hsi*10+739)*1+lsi)*1]), &(stack[((hsi*6+752)*1+lsi)*1]), &(stack[((hsi*6+733)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+899)*1+lsi)*1]), &(stack[((hsi*15+835)*1+lsi)*1]), &(stack[((hsi*15+799)*1+lsi)*1]), &(stack[((hsi*10+758)*1+lsi)*1]), &(stack[((hsi*10+786)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+920)*1+lsi)*1]), &(stack[((hsi*21+850)*1+lsi)*1]), &(stack[((hsi*21+899)*1+lsi)*1]), &(stack[((hsi*15+768)*1+lsi)*1]), &(stack[((hsi*15+835)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+948)*1+lsi)*1]), &(stack[((hsi*28+871)*1+lsi)*1]), &(stack[((hsi*28+920)*1+lsi)*1]), &(stack[((hsi*21+814)*1+lsi)*1]), &(stack[((hsi*21+850)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i001__0___Ab__up_0(inteval, &(stack[((hsi*28+749)*1+lsi)*1]), &(stack[((hsi*36+948)*1+lsi)*1]), &(stack[((hsi*21+814)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+690)*1+lsi)*1]),&(stack[((hsi*28+749)*1+lsi)*1]),28);
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+724)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+727)*1+lsi)*1]), &(stack[((hsi*3+796)*1+lsi)*1]), &(stack[((hsi*3+724)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+984)*1+lsi)*1]), &(stack[((hsi*6+718)*1+lsi)*1]), &(stack[((hsi*6+727)*1+lsi)*1]), &(stack[((hsi*3+783)*1+lsi)*1]), &(stack[((hsi*3+796)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+994)*1+lsi)*1]), &(stack[((hsi*10+739)*1+lsi)*1]), &(stack[((hsi*10+984)*1+lsi)*1]), &(stack[((hsi*6+733)*1+lsi)*1]), &(stack[((hsi*6+718)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+1009)*1+lsi)*1]), &(stack[((hsi*15+799)*1+lsi)*1]), &(stack[((hsi*15+994)*1+lsi)*1]), &(stack[((hsi*10+786)*1+lsi)*1]), &(stack[((hsi*10+739)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+1030)*1+lsi)*1]), &(stack[((hsi*21+899)*1+lsi)*1]), &(stack[((hsi*21+1009)*1+lsi)*1]), &(stack[((hsi*15+835)*1+lsi)*1]), &(stack[((hsi*15+799)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+1058)*1+lsi)*1]), &(stack[((hsi*28+920)*1+lsi)*1]), &(stack[((hsi*28+1030)*1+lsi)*1]), &(stack[((hsi*21+850)*1+lsi)*1]), &(stack[((hsi*21+899)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+1094)*1+lsi)*1]), &(stack[((hsi*36+948)*1+lsi)*1]), &(stack[((hsi*36+1058)*1+lsi)*1]), &(stack[((hsi*28+871)*1+lsi)*1]), &(stack[((hsi*28+920)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k001__0___Ab__up_0(inteval, &(stack[((hsi*36+835)*1+lsi)*1]), &(stack[((hsi*45+1094)*1+lsi)*1]), &(stack[((hsi*28+871)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+654)*1+lsi)*1]),&(stack[((hsi*36+835)*1+lsi)*1]),36);
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+777)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+733)*1+lsi)*1]), &(stack[((hsi*3+724)*1+lsi)*1]), &(stack[((hsi*3+777)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+777)*1+lsi)*1]), &(stack[((hsi*6+727)*1+lsi)*1]), &(stack[((hsi*6+733)*1+lsi)*1]), &(stack[((hsi*3+796)*1+lsi)*1]), &(stack[((hsi*3+724)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+1139)*1+lsi)*1]), &(stack[((hsi*10+984)*1+lsi)*1]), &(stack[((hsi*10+777)*1+lsi)*1]), &(stack[((hsi*6+718)*1+lsi)*1]), &(stack[((hsi*6+727)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+718)*1+lsi)*1]), &(stack[((hsi*15+994)*1+lsi)*1]), &(stack[((hsi*15+1139)*1+lsi)*1]), &(stack[((hsi*10+739)*1+lsi)*1]), &(stack[((hsi*10+984)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+1139)*1+lsi)*1]), &(stack[((hsi*21+1009)*1+lsi)*1]), &(stack[((hsi*21+718)*1+lsi)*1]), &(stack[((hsi*15+799)*1+lsi)*1]), &(stack[((hsi*15+994)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+777)*1+lsi)*1]), &(stack[((hsi*28+1030)*1+lsi)*1]), &(stack[((hsi*28+1139)*1+lsi)*1]), &(stack[((hsi*21+899)*1+lsi)*1]), &(stack[((hsi*21+1009)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+984)*1+lsi)*1]), &(stack[((hsi*36+1058)*1+lsi)*1]), &(stack[((hsi*36+777)*1+lsi)*1]), &(stack[((hsi*28+920)*1+lsi)*1]), &(stack[((hsi*28+1030)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_m__0___Ab__up_0(inteval, &(stack[((hsi*55+1139)*1+lsi)*1]), &(stack[((hsi*45+1094)*1+lsi)*1]), &(stack[((hsi*45+984)*1+lsi)*1]), &(stack[((hsi*36+948)*1+lsi)*1]), &(stack[((hsi*36+1058)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_l001__0___Ab__up_0(inteval, &(stack[((hsi*45+984)*1+lsi)*1]), &(stack[((hsi*55+1139)*1+lsi)*1]), &(stack[((hsi*36+948)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+609)*1+lsi)*1]),&(stack[((hsi*45+984)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i010__0___Ab__up_0(inteval, &(stack[((hsi*28+1029)*1+lsi)*1]), &(stack[((hsi*36+948)*1+lsi)*1]), &(stack[((hsi*21+814)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+581)*1+lsi)*1]),&(stack[((hsi*28+1029)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k010__0___Ab__up_0(inteval, &(stack[((hsi*36+899)*1+lsi)*1]), &(stack[((hsi*45+1094)*1+lsi)*1]), &(stack[((hsi*28+871)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+545)*1+lsi)*1]),&(stack[((hsi*36+899)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_l010__0___Ab__up_0(inteval, &(stack[((hsi*45+1194)*1+lsi)*1]), &(stack[((hsi*55+1139)*1+lsi)*1]), &(stack[((hsi*36+948)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+500)*1+lsi)*1]),&(stack[((hsi*45+1194)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i100__0___Ab__up_0(inteval, &(stack[((hsi*28+777)*1+lsi)*1]), &(stack[((hsi*36+948)*1+lsi)*1]), &(stack[((hsi*21+814)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+472)*1+lsi)*1]),&(stack[((hsi*28+777)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k100__0___Ab__up_0(inteval, &(stack[((hsi*36+1057)*1+lsi)*1]), &(stack[((hsi*45+1094)*1+lsi)*1]), &(stack[((hsi*28+871)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+436)*1+lsi)*1]),&(stack[((hsi*36+1057)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_l100__0___Ab__up_0(inteval, &(stack[((hsi*45+1239)*1+lsi)*1]), &(stack[((hsi*55+1139)*1+lsi)*1]), &(stack[((hsi*36+948)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+391)*1+lsi)*1]),&(stack[((hsi*45+1239)*1+lsi)*1]),45);
HRRPart0ket0bra0ip(inteval, &(stack[((hsi*84+1284)*1+lsi)*1]), &(stack[((hsi*36+948)*1+lsi)*1]), &(stack[((hsi*28+871)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+718)*1+lsi)*1]), &(stack[((hsi*84+1284)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+363)*1+lsi)*1]),&(stack[((hsi*28+718)*1+lsi)*1]),28);
HRRPart0ket0bra0kp(inteval, &(stack[((hsi*108+1368)*1+lsi)*1]), &(stack[((hsi*45+1094)*1+lsi)*1]), &(stack[((hsi*36+948)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+1476)*1+lsi)*1]), &(stack[((hsi*108+1368)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+327)*1+lsi)*1]),&(stack[((hsi*36+1476)*1+lsi)*1]),36);
HRRPart0ket0bra0lp(inteval, &(stack[((hsi*135+1512)*1+lsi)*1]), &(stack[((hsi*55+1139)*1+lsi)*1]), &(stack[((hsi*45+1094)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+1093)*1+lsi)*1]), &(stack[((hsi*135+1512)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+282)*1+lsi)*1]),&(stack[((hsi*45+1093)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+1138)*1+lsi)*1]), &(stack[((hsi*84+1284)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+254)*1+lsi)*1]),&(stack[((hsi*28+1138)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+1647)*1+lsi)*1]), &(stack[((hsi*108+1368)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+218)*1+lsi)*1]),&(stack[((hsi*36+1647)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+1683)*1+lsi)*1]), &(stack[((hsi*135+1512)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+173)*1+lsi)*1]),&(stack[((hsi*45+1683)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+145)*1+lsi)*1]),&(stack[((hsi*28+871)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+1166)*1+lsi)*1]), &(stack[((hsi*84+1284)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+117)*1+lsi)*1]),&(stack[((hsi*28+1166)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+81)*1+lsi)*1]),&(stack[((hsi*36+948)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+1284)*1+lsi)*1]), &(stack[((hsi*108+1368)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+45)*1+lsi)*1]),&(stack[((hsi*36+1284)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+1320)*1+lsi)*1]), &(stack[((hsi*135+1512)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+1320)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 718 */
}

#ifdef __cplusplus
};
#endif
