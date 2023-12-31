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
#include <CR_DerivGaussP0InBra_aB_s001__0___ElecPot_m__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_k__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_l__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_m__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_k__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_l__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_m__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_k100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_l001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_l010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_l100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_m001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_m010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_m100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0mp.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_m__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_ps__0___Ab__up_0.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_D_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+897)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+900)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+903)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+897)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+909)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+912)*1+lsi)*1]), &(stack[((hsi*3+909)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+918)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+921)*1+lsi)*1]), &(stack[((hsi*3+897)*1+lsi)*1]), &(stack[((hsi*3+918)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+927)*1+lsi)*1]), &(stack[((hsi*6+903)*1+lsi)*1]), &(stack[((hsi*6+921)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+897)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+937)*1+lsi)*1]), &(stack[((hsi*6+912)*1+lsi)*1]), &(stack[((hsi*6+903)*1+lsi)*1]), &(stack[((hsi*3+909)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+947)*1+lsi)*1]), &(stack[((hsi*10+937)*1+lsi)*1]), &(stack[((hsi*10+927)*1+lsi)*1]), &(stack[((hsi*6+912)*1+lsi)*1]), &(stack[((hsi*6+903)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+900)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+962)*1+lsi)*1]), &(stack[((hsi*3+918)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+968)*1+lsi)*1]), &(stack[((hsi*6+921)*1+lsi)*1]), &(stack[((hsi*6+962)*1+lsi)*1]), &(stack[((hsi*3+897)*1+lsi)*1]), &(stack[((hsi*3+918)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+978)*1+lsi)*1]), &(stack[((hsi*10+927)*1+lsi)*1]), &(stack[((hsi*10+968)*1+lsi)*1]), &(stack[((hsi*6+903)*1+lsi)*1]), &(stack[((hsi*6+921)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+993)*1+lsi)*1]), &(stack[((hsi*15+947)*1+lsi)*1]), &(stack[((hsi*15+978)*1+lsi)*1]), &(stack[((hsi*10+937)*1+lsi)*1]), &(stack[((hsi*10+927)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+897)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+903)*1+lsi)*1]), &(stack[((hsi*3+897)*1+lsi)*1]), &(stack[((hsi*3+909)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+1014)*1+lsi)*1]), &(stack[((hsi*6+903)*1+lsi)*1]), &(stack[((hsi*6+912)*1+lsi)*1]), &(stack[((hsi*3+897)*1+lsi)*1]), &(stack[((hsi*3+909)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+1024)*1+lsi)*1]), &(stack[((hsi*10+1014)*1+lsi)*1]), &(stack[((hsi*10+937)*1+lsi)*1]), &(stack[((hsi*6+903)*1+lsi)*1]), &(stack[((hsi*6+912)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+1039)*1+lsi)*1]), &(stack[((hsi*15+1024)*1+lsi)*1]), &(stack[((hsi*15+947)*1+lsi)*1]), &(stack[((hsi*10+1014)*1+lsi)*1]), &(stack[((hsi*10+937)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+1060)*1+lsi)*1]), &(stack[((hsi*21+1039)*1+lsi)*1]), &(stack[((hsi*21+993)*1+lsi)*1]), &(stack[((hsi*15+1024)*1+lsi)*1]), &(stack[((hsi*15+947)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+897)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+1014)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+897)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+937)*1+lsi)*1]), &(stack[((hsi*6+962)*1+lsi)*1]), &(stack[((hsi*6+1014)*1+lsi)*1]), &(stack[((hsi*3+918)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+1020)*1+lsi)*1]), &(stack[((hsi*10+968)*1+lsi)*1]), &(stack[((hsi*10+937)*1+lsi)*1]), &(stack[((hsi*6+921)*1+lsi)*1]), &(stack[((hsi*6+962)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+903)*1+lsi)*1]), &(stack[((hsi*15+978)*1+lsi)*1]), &(stack[((hsi*15+1020)*1+lsi)*1]), &(stack[((hsi*10+927)*1+lsi)*1]), &(stack[((hsi*10+968)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+1088)*1+lsi)*1]), &(stack[((hsi*21+993)*1+lsi)*1]), &(stack[((hsi*21+903)*1+lsi)*1]), &(stack[((hsi*15+947)*1+lsi)*1]), &(stack[((hsi*15+978)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+1116)*1+lsi)*1]), &(stack[((hsi*28+1060)*1+lsi)*1]), &(stack[((hsi*28+1088)*1+lsi)*1]), &(stack[((hsi*21+1039)*1+lsi)*1]), &(stack[((hsi*21+993)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+1035)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+1038)*1+lsi)*1]), &(stack[((hsi*3+897)*1+lsi)*1]), &(stack[((hsi*3+1035)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+1044)*1+lsi)*1]), &(stack[((hsi*6+1014)*1+lsi)*1]), &(stack[((hsi*6+1038)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+897)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+947)*1+lsi)*1]), &(stack[((hsi*10+937)*1+lsi)*1]), &(stack[((hsi*10+1044)*1+lsi)*1]), &(stack[((hsi*6+962)*1+lsi)*1]), &(stack[((hsi*6+1014)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+1152)*1+lsi)*1]), &(stack[((hsi*15+1020)*1+lsi)*1]), &(stack[((hsi*15+947)*1+lsi)*1]), &(stack[((hsi*10+968)*1+lsi)*1]), &(stack[((hsi*10+937)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+1173)*1+lsi)*1]), &(stack[((hsi*21+903)*1+lsi)*1]), &(stack[((hsi*21+1152)*1+lsi)*1]), &(stack[((hsi*15+978)*1+lsi)*1]), &(stack[((hsi*15+1020)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+1201)*1+lsi)*1]), &(stack[((hsi*28+1088)*1+lsi)*1]), &(stack[((hsi*28+1173)*1+lsi)*1]), &(stack[((hsi*21+993)*1+lsi)*1]), &(stack[((hsi*21+903)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+962)*1+lsi)*1]), &(stack[((hsi*36+1116)*1+lsi)*1]), &(stack[((hsi*36+1201)*1+lsi)*1]), &(stack[((hsi*28+1060)*1+lsi)*1]), &(stack[((hsi*28+1088)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k001__0___Ab__up_0(inteval, &(stack[((hsi*36+1237)*1+lsi)*1]), &(stack[((hsi*45+962)*1+lsi)*1]), &(stack[((hsi*28+1060)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+861)*1+lsi)*1]),&(stack[((hsi*36+1237)*1+lsi)*1]),36);
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+900)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+1054)*1+lsi)*1]), &(stack[((hsi*3+1035)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+924)*1+lsi)*1]), &(stack[((hsi*6+1038)*1+lsi)*1]), &(stack[((hsi*6+1054)*1+lsi)*1]), &(stack[((hsi*3+897)*1+lsi)*1]), &(stack[((hsi*3+1035)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+1273)*1+lsi)*1]), &(stack[((hsi*10+1044)*1+lsi)*1]), &(stack[((hsi*10+924)*1+lsi)*1]), &(stack[((hsi*6+1014)*1+lsi)*1]), &(stack[((hsi*6+1038)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+1288)*1+lsi)*1]), &(stack[((hsi*15+947)*1+lsi)*1]), &(stack[((hsi*15+1273)*1+lsi)*1]), &(stack[((hsi*10+937)*1+lsi)*1]), &(stack[((hsi*10+1044)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+1309)*1+lsi)*1]), &(stack[((hsi*21+1152)*1+lsi)*1]), &(stack[((hsi*21+1288)*1+lsi)*1]), &(stack[((hsi*15+1020)*1+lsi)*1]), &(stack[((hsi*15+947)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+1337)*1+lsi)*1]), &(stack[((hsi*28+1173)*1+lsi)*1]), &(stack[((hsi*28+1309)*1+lsi)*1]), &(stack[((hsi*21+903)*1+lsi)*1]), &(stack[((hsi*21+1152)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+1373)*1+lsi)*1]), &(stack[((hsi*36+1201)*1+lsi)*1]), &(stack[((hsi*36+1337)*1+lsi)*1]), &(stack[((hsi*28+1088)*1+lsi)*1]), &(stack[((hsi*28+1173)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_m__0___Ab__up_0(inteval, &(stack[((hsi*55+1418)*1+lsi)*1]), &(stack[((hsi*45+962)*1+lsi)*1]), &(stack[((hsi*45+1373)*1+lsi)*1]), &(stack[((hsi*36+1116)*1+lsi)*1]), &(stack[((hsi*36+1201)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_l001__0___Ab__up_0(inteval, &(stack[((hsi*45+1473)*1+lsi)*1]), &(stack[((hsi*55+1418)*1+lsi)*1]), &(stack[((hsi*36+1116)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+816)*1+lsi)*1]),&(stack[((hsi*45+1473)*1+lsi)*1]),45);
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+897)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_10[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+1088)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]), &(stack[((hsi*3+897)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+1007)*1+lsi)*1]), &(stack[((hsi*6+1054)*1+lsi)*1]), &(stack[((hsi*6+1088)*1+lsi)*1]), &(stack[((hsi*3+1035)*1+lsi)*1]), &(stack[((hsi*3+900)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+1088)*1+lsi)*1]), &(stack[((hsi*10+924)*1+lsi)*1]), &(stack[((hsi*10+1007)*1+lsi)*1]), &(stack[((hsi*6+1038)*1+lsi)*1]), &(stack[((hsi*6+1054)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+1007)*1+lsi)*1]), &(stack[((hsi*15+1273)*1+lsi)*1]), &(stack[((hsi*15+1088)*1+lsi)*1]), &(stack[((hsi*10+1044)*1+lsi)*1]), &(stack[((hsi*10+924)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+1088)*1+lsi)*1]), &(stack[((hsi*21+1288)*1+lsi)*1]), &(stack[((hsi*21+1007)*1+lsi)*1]), &(stack[((hsi*15+947)*1+lsi)*1]), &(stack[((hsi*15+1273)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+897)*1+lsi)*1]), &(stack[((hsi*28+1309)*1+lsi)*1]), &(stack[((hsi*28+1088)*1+lsi)*1]), &(stack[((hsi*21+1152)*1+lsi)*1]), &(stack[((hsi*21+1288)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+1007)*1+lsi)*1]), &(stack[((hsi*36+1337)*1+lsi)*1]), &(stack[((hsi*36+897)*1+lsi)*1]), &(stack[((hsi*28+1173)*1+lsi)*1]), &(stack[((hsi*28+1309)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_m__0___Ab__up_0(inteval, &(stack[((hsi*55+897)*1+lsi)*1]), &(stack[((hsi*45+1373)*1+lsi)*1]), &(stack[((hsi*45+1007)*1+lsi)*1]), &(stack[((hsi*36+1201)*1+lsi)*1]), &(stack[((hsi*36+1337)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_ps__0___Ab__up_0(inteval, &(stack[((hsi*66+1273)*1+lsi)*1]), &(stack[((hsi*55+1418)*1+lsi)*1]), &(stack[((hsi*55+897)*1+lsi)*1]), &(stack[((hsi*45+962)*1+lsi)*1]), &(stack[((hsi*45+1373)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_m001__0___Ab__up_0(inteval, &(stack[((hsi*55+1152)*1+lsi)*1]), &(stack[((hsi*66+1273)*1+lsi)*1]), &(stack[((hsi*45+962)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+761)*1+lsi)*1]),&(stack[((hsi*55+1152)*1+lsi)*1]),55);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k010__0___Ab__up_0(inteval, &(stack[((hsi*36+1339)*1+lsi)*1]), &(stack[((hsi*45+962)*1+lsi)*1]), &(stack[((hsi*28+1060)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+725)*1+lsi)*1]),&(stack[((hsi*36+1339)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_l010__0___Ab__up_0(inteval, &(stack[((hsi*45+897)*1+lsi)*1]), &(stack[((hsi*55+1418)*1+lsi)*1]), &(stack[((hsi*36+1116)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+680)*1+lsi)*1]),&(stack[((hsi*45+897)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_m010__0___Ab__up_0(inteval, &(stack[((hsi*55+1518)*1+lsi)*1]), &(stack[((hsi*66+1273)*1+lsi)*1]), &(stack[((hsi*45+962)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+625)*1+lsi)*1]),&(stack[((hsi*55+1518)*1+lsi)*1]),55);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_k100__0___Ab__up_0(inteval, &(stack[((hsi*36+1007)*1+lsi)*1]), &(stack[((hsi*45+962)*1+lsi)*1]), &(stack[((hsi*28+1060)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+589)*1+lsi)*1]),&(stack[((hsi*36+1007)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_l100__0___Ab__up_0(inteval, &(stack[((hsi*45+1043)*1+lsi)*1]), &(stack[((hsi*55+1418)*1+lsi)*1]), &(stack[((hsi*36+1116)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+544)*1+lsi)*1]),&(stack[((hsi*45+1043)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_m100__0___Ab__up_0(inteval, &(stack[((hsi*55+1573)*1+lsi)*1]), &(stack[((hsi*66+1273)*1+lsi)*1]), &(stack[((hsi*45+962)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+489)*1+lsi)*1]),&(stack[((hsi*55+1573)*1+lsi)*1]),55);
HRRPart0ket0bra0kp(inteval, &(stack[((hsi*108+1628)*1+lsi)*1]), &(stack[((hsi*45+962)*1+lsi)*1]), &(stack[((hsi*36+1116)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+1375)*1+lsi)*1]), &(stack[((hsi*108+1628)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+453)*1+lsi)*1]),&(stack[((hsi*36+1375)*1+lsi)*1]),36);
HRRPart0ket0bra0lp(inteval, &(stack[((hsi*135+1736)*1+lsi)*1]), &(stack[((hsi*55+1418)*1+lsi)*1]), &(stack[((hsi*45+962)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+1871)*1+lsi)*1]), &(stack[((hsi*135+1736)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+408)*1+lsi)*1]),&(stack[((hsi*45+1871)*1+lsi)*1]),45);
HRRPart0ket0bra0mp(inteval, &(stack[((hsi*165+1916)*1+lsi)*1]), &(stack[((hsi*66+1273)*1+lsi)*1]), &(stack[((hsi*55+1418)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_m__0___Ab__up_0(inteval, &(stack[((hsi*55+1273)*1+lsi)*1]), &(stack[((hsi*165+1916)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+353)*1+lsi)*1]),&(stack[((hsi*55+1273)*1+lsi)*1]),55);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+1411)*1+lsi)*1]), &(stack[((hsi*108+1628)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+317)*1+lsi)*1]),&(stack[((hsi*36+1411)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+2081)*1+lsi)*1]), &(stack[((hsi*135+1736)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+272)*1+lsi)*1]),&(stack[((hsi*45+2081)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_m__0___Ab__up_0(inteval, &(stack[((hsi*55+2126)*1+lsi)*1]), &(stack[((hsi*165+1916)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+217)*1+lsi)*1]),&(stack[((hsi*55+2126)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+181)*1+lsi)*1]),&(stack[((hsi*36+1116)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+2181)*1+lsi)*1]), &(stack[((hsi*108+1628)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+145)*1+lsi)*1]),&(stack[((hsi*36+2181)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+100)*1+lsi)*1]),&(stack[((hsi*45+962)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_l__0___Ab__up_0(inteval, &(stack[((hsi*45+1628)*1+lsi)*1]), &(stack[((hsi*135+1736)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+55)*1+lsi)*1]),&(stack[((hsi*45+1628)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_m__0___Ab__up_0(inteval, &(stack[((hsi*55+1673)*1+lsi)*1]), &(stack[((hsi*165+1916)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+0)*1+lsi)*1]),&(stack[((hsi*55+1673)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 897 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
