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
#include <CR_DerivGaussP0InBra_aB_g001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_g010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_g100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_h001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_h010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_h100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_g__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_g__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_g__0___ElecPot_s100__0___Ab__up_0.h>
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
#include <HRRPart0bra0ket0gp.h>
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
extern "C" {
#endif
void _elecpotderiv1_G_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+664)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+667)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+670)*1+lsi)*1]), &(stack[((hsi*3+664)*1+lsi)*1]), &(stack[((hsi*3+667)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+676)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*3+676)*1+lsi)*1]), &(stack[((hsi*3+664)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+685)*1+lsi)*1]), &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*6+670)*1+lsi)*1]), &(stack[((hsi*3+676)*1+lsi)*1]), &(stack[((hsi*3+664)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+676)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+695)*1+lsi)*1]), &(stack[((hsi*3+667)*1+lsi)*1]), &(stack[((hsi*3+676)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+701)*1+lsi)*1]), &(stack[((hsi*6+670)*1+lsi)*1]), &(stack[((hsi*6+695)*1+lsi)*1]), &(stack[((hsi*3+664)*1+lsi)*1]), &(stack[((hsi*3+667)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+711)*1+lsi)*1]), &(stack[((hsi*10+685)*1+lsi)*1]), &(stack[((hsi*10+701)*1+lsi)*1]), &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*6+670)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+664)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*3+676)*1+lsi)*1]), &(stack[((hsi*3+664)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+726)*1+lsi)*1]), &(stack[((hsi*6+695)*1+lsi)*1]), &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*3+667)*1+lsi)*1]), &(stack[((hsi*3+676)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+736)*1+lsi)*1]), &(stack[((hsi*10+701)*1+lsi)*1]), &(stack[((hsi*10+726)*1+lsi)*1]), &(stack[((hsi*6+670)*1+lsi)*1]), &(stack[((hsi*6+695)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+751)*1+lsi)*1]), &(stack[((hsi*15+711)*1+lsi)*1]), &(stack[((hsi*15+736)*1+lsi)*1]), &(stack[((hsi*10+685)*1+lsi)*1]), &(stack[((hsi*10+701)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*45+772)*1+lsi)*1]), &(stack[((hsi*21+751)*1+lsi)*1]), &(stack[((hsi*15+711)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*15+817)*1+lsi)*1]), &(stack[((hsi*45+772)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+649)*1+lsi)*1]),&(stack[((hsi*15+817)*1+lsi)*1]),15);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+667)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+670)*1+lsi)*1]), &(stack[((hsi*3+664)*1+lsi)*1]), &(stack[((hsi*3+667)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+832)*1+lsi)*1]), &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*6+670)*1+lsi)*1]), &(stack[((hsi*3+676)*1+lsi)*1]), &(stack[((hsi*3+664)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+842)*1+lsi)*1]), &(stack[((hsi*10+726)*1+lsi)*1]), &(stack[((hsi*10+832)*1+lsi)*1]), &(stack[((hsi*6+695)*1+lsi)*1]), &(stack[((hsi*6+679)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+857)*1+lsi)*1]), &(stack[((hsi*15+736)*1+lsi)*1]), &(stack[((hsi*15+842)*1+lsi)*1]), &(stack[((hsi*10+701)*1+lsi)*1]), &(stack[((hsi*10+726)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+878)*1+lsi)*1]), &(stack[((hsi*21+751)*1+lsi)*1]), &(stack[((hsi*21+857)*1+lsi)*1]), &(stack[((hsi*15+711)*1+lsi)*1]), &(stack[((hsi*15+736)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*63+906)*1+lsi)*1]), &(stack[((hsi*28+878)*1+lsi)*1]), &(stack[((hsi*21+751)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*21+969)*1+lsi)*1]), &(stack[((hsi*63+906)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+628)*1+lsi)*1]),&(stack[((hsi*21+969)*1+lsi)*1]),21);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+676)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+695)*1+lsi)*1]), &(stack[((hsi*3+667)*1+lsi)*1]), &(stack[((hsi*3+676)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+701)*1+lsi)*1]), &(stack[((hsi*6+670)*1+lsi)*1]), &(stack[((hsi*6+695)*1+lsi)*1]), &(stack[((hsi*3+664)*1+lsi)*1]), &(stack[((hsi*3+667)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+990)*1+lsi)*1]), &(stack[((hsi*10+832)*1+lsi)*1]), &(stack[((hsi*10+701)*1+lsi)*1]), &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*6+670)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1005)*1+lsi)*1]), &(stack[((hsi*15+842)*1+lsi)*1]), &(stack[((hsi*15+990)*1+lsi)*1]), &(stack[((hsi*10+726)*1+lsi)*1]), &(stack[((hsi*10+832)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1026)*1+lsi)*1]), &(stack[((hsi*21+857)*1+lsi)*1]), &(stack[((hsi*21+1005)*1+lsi)*1]), &(stack[((hsi*15+736)*1+lsi)*1]), &(stack[((hsi*15+842)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1054)*1+lsi)*1]), &(stack[((hsi*28+878)*1+lsi)*1]), &(stack[((hsi*28+1026)*1+lsi)*1]), &(stack[((hsi*21+751)*1+lsi)*1]), &(stack[((hsi*21+857)*1+lsi)*1]));
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*84+1090)*1+lsi)*1]), &(stack[((hsi*36+1054)*1+lsi)*1]), &(stack[((hsi*28+878)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*28+1174)*1+lsi)*1]), &(stack[((hsi*84+1090)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+600)*1+lsi)*1]),&(stack[((hsi*28+1174)*1+lsi)*1]),28);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+664)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*3+676)*1+lsi)*1]), &(stack[((hsi*3+664)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+726)*1+lsi)*1]), &(stack[((hsi*6+695)*1+lsi)*1]), &(stack[((hsi*6+679)*1+lsi)*1]), &(stack[((hsi*3+667)*1+lsi)*1]), &(stack[((hsi*3+676)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+736)*1+lsi)*1]), &(stack[((hsi*10+701)*1+lsi)*1]), &(stack[((hsi*10+726)*1+lsi)*1]), &(stack[((hsi*6+670)*1+lsi)*1]), &(stack[((hsi*6+695)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+664)*1+lsi)*1]), &(stack[((hsi*15+990)*1+lsi)*1]), &(stack[((hsi*15+736)*1+lsi)*1]), &(stack[((hsi*10+832)*1+lsi)*1]), &(stack[((hsi*10+701)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1202)*1+lsi)*1]), &(stack[((hsi*21+1005)*1+lsi)*1]), &(stack[((hsi*21+664)*1+lsi)*1]), &(stack[((hsi*15+842)*1+lsi)*1]), &(stack[((hsi*15+990)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1230)*1+lsi)*1]), &(stack[((hsi*28+1026)*1+lsi)*1]), &(stack[((hsi*28+1202)*1+lsi)*1]), &(stack[((hsi*21+857)*1+lsi)*1]), &(stack[((hsi*21+1005)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+832)*1+lsi)*1]), &(stack[((hsi*36+1054)*1+lsi)*1]), &(stack[((hsi*36+1230)*1+lsi)*1]), &(stack[((hsi*28+878)*1+lsi)*1]), &(stack[((hsi*28+1026)*1+lsi)*1]));
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*108+1202)*1+lsi)*1]), &(stack[((hsi*45+832)*1+lsi)*1]), &(stack[((hsi*36+1054)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*36+990)*1+lsi)*1]), &(stack[((hsi*108+1202)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+564)*1+lsi)*1]),&(stack[((hsi*36+990)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*15+1026)*1+lsi)*1]), &(stack[((hsi*45+772)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+549)*1+lsi)*1]),&(stack[((hsi*15+1026)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*21+664)*1+lsi)*1]), &(stack[((hsi*63+906)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+528)*1+lsi)*1]),&(stack[((hsi*21+664)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*28+1310)*1+lsi)*1]), &(stack[((hsi*84+1090)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+500)*1+lsi)*1]),&(stack[((hsi*28+1310)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*36+1338)*1+lsi)*1]), &(stack[((hsi*108+1202)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+464)*1+lsi)*1]),&(stack[((hsi*36+1338)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*15+726)*1+lsi)*1]), &(stack[((hsi*45+772)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+449)*1+lsi)*1]),&(stack[((hsi*15+726)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*21+772)*1+lsi)*1]), &(stack[((hsi*63+906)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+428)*1+lsi)*1]),&(stack[((hsi*21+772)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*28+906)*1+lsi)*1]), &(stack[((hsi*84+1090)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+400)*1+lsi)*1]),&(stack[((hsi*28+906)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*36+1090)*1+lsi)*1]), &(stack[((hsi*108+1202)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+364)*1+lsi)*1]),&(stack[((hsi*36+1090)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_g001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1202)*1+lsi)*1]), &(stack[((hsi*21+751)*1+lsi)*1]), &(stack[((hsi*10+685)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+349)*1+lsi)*1]),&(stack[((hsi*15+1202)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_h001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1217)*1+lsi)*1]), &(stack[((hsi*28+878)*1+lsi)*1]), &(stack[((hsi*15+711)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+328)*1+lsi)*1]),&(stack[((hsi*21+1217)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1238)*1+lsi)*1]), &(stack[((hsi*36+1054)*1+lsi)*1]), &(stack[((hsi*21+751)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+300)*1+lsi)*1]),&(stack[((hsi*28+1238)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1126)*1+lsi)*1]), &(stack[((hsi*45+832)*1+lsi)*1]), &(stack[((hsi*28+878)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+264)*1+lsi)*1]),&(stack[((hsi*36+1126)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_g010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1266)*1+lsi)*1]), &(stack[((hsi*21+751)*1+lsi)*1]), &(stack[((hsi*10+685)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+249)*1+lsi)*1]),&(stack[((hsi*15+1266)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_h010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+934)*1+lsi)*1]), &(stack[((hsi*28+878)*1+lsi)*1]), &(stack[((hsi*15+711)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+228)*1+lsi)*1]),&(stack[((hsi*21+934)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1281)*1+lsi)*1]), &(stack[((hsi*36+1054)*1+lsi)*1]), &(stack[((hsi*21+751)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+200)*1+lsi)*1]),&(stack[((hsi*28+1281)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1374)*1+lsi)*1]), &(stack[((hsi*45+832)*1+lsi)*1]), &(stack[((hsi*28+878)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+164)*1+lsi)*1]),&(stack[((hsi*36+1374)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+149)*1+lsi)*1]),&(stack[((hsi*15+711)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_g100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+793)*1+lsi)*1]), &(stack[((hsi*21+751)*1+lsi)*1]), &(stack[((hsi*10+685)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+134)*1+lsi)*1]),&(stack[((hsi*15+793)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+113)*1+lsi)*1]),&(stack[((hsi*21+751)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_h100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+685)*1+lsi)*1]), &(stack[((hsi*28+878)*1+lsi)*1]), &(stack[((hsi*15+711)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+92)*1+lsi)*1]),&(stack[((hsi*21+685)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1410)*1+lsi)*1]), &(stack[((hsi*36+1054)*1+lsi)*1]), &(stack[((hsi*21+751)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+64)*1+lsi)*1]),&(stack[((hsi*28+1410)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1041)*1+lsi)*1]), &(stack[((hsi*45+832)*1+lsi)*1]), &(stack[((hsi*28+878)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+28)*1+lsi)*1]),&(stack[((hsi*36+1041)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+0)*1+lsi)*1]),&(stack[((hsi*28+878)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 664 */
}

#ifdef __cplusplus
};
#endif
