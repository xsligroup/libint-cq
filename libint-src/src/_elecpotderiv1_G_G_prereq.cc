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
#include <CR_DerivGaussP0InBra_aB_l001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l100__0___ElecPot_s__0___Ab__up_0.h>
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
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0bra0ket0gp.h>
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
extern "C" {
#endif
void _elecpotderiv1_G_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+970)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+973)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*3+970)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+982)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+985)*1+lsi)*1]), &(stack[((hsi*3+982)*1+lsi)*1]), &(stack[((hsi*3+970)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+991)*1+lsi)*1]), &(stack[((hsi*6+985)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*3+982)*1+lsi)*1]), &(stack[((hsi*3+970)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+982)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1001)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]), &(stack[((hsi*3+982)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1007)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*6+1001)*1+lsi)*1]), &(stack[((hsi*3+970)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1017)*1+lsi)*1]), &(stack[((hsi*10+991)*1+lsi)*1]), &(stack[((hsi*10+1007)*1+lsi)*1]), &(stack[((hsi*6+985)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+970)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+985)*1+lsi)*1]), &(stack[((hsi*3+982)*1+lsi)*1]), &(stack[((hsi*3+970)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1032)*1+lsi)*1]), &(stack[((hsi*6+1001)*1+lsi)*1]), &(stack[((hsi*6+985)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]), &(stack[((hsi*3+982)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1042)*1+lsi)*1]), &(stack[((hsi*10+1007)*1+lsi)*1]), &(stack[((hsi*10+1032)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*6+1001)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1057)*1+lsi)*1]), &(stack[((hsi*15+1017)*1+lsi)*1]), &(stack[((hsi*15+1042)*1+lsi)*1]), &(stack[((hsi*10+991)*1+lsi)*1]), &(stack[((hsi*10+1007)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*45+1078)*1+lsi)*1]), &(stack[((hsi*21+1057)*1+lsi)*1]), &(stack[((hsi*15+1017)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*15+1123)*1+lsi)*1]), &(stack[((hsi*45+1078)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+955)*1+lsi)*1]),&(stack[((hsi*15+1123)*1+lsi)*1]),15);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+973)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*3+970)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1138)*1+lsi)*1]), &(stack[((hsi*6+985)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*3+982)*1+lsi)*1]), &(stack[((hsi*3+970)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1148)*1+lsi)*1]), &(stack[((hsi*10+1032)*1+lsi)*1]), &(stack[((hsi*10+1138)*1+lsi)*1]), &(stack[((hsi*6+1001)*1+lsi)*1]), &(stack[((hsi*6+985)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1163)*1+lsi)*1]), &(stack[((hsi*15+1042)*1+lsi)*1]), &(stack[((hsi*15+1148)*1+lsi)*1]), &(stack[((hsi*10+1007)*1+lsi)*1]), &(stack[((hsi*10+1032)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1184)*1+lsi)*1]), &(stack[((hsi*21+1057)*1+lsi)*1]), &(stack[((hsi*21+1163)*1+lsi)*1]), &(stack[((hsi*15+1017)*1+lsi)*1]), &(stack[((hsi*15+1042)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*63+1212)*1+lsi)*1]), &(stack[((hsi*28+1184)*1+lsi)*1]), &(stack[((hsi*21+1057)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*21+1275)*1+lsi)*1]), &(stack[((hsi*63+1212)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+934)*1+lsi)*1]),&(stack[((hsi*21+1275)*1+lsi)*1]),21);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+982)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1001)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]), &(stack[((hsi*3+982)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1007)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*6+1001)*1+lsi)*1]), &(stack[((hsi*3+970)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1296)*1+lsi)*1]), &(stack[((hsi*10+1138)*1+lsi)*1]), &(stack[((hsi*10+1007)*1+lsi)*1]), &(stack[((hsi*6+985)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1311)*1+lsi)*1]), &(stack[((hsi*15+1148)*1+lsi)*1]), &(stack[((hsi*15+1296)*1+lsi)*1]), &(stack[((hsi*10+1032)*1+lsi)*1]), &(stack[((hsi*10+1138)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1332)*1+lsi)*1]), &(stack[((hsi*21+1163)*1+lsi)*1]), &(stack[((hsi*21+1311)*1+lsi)*1]), &(stack[((hsi*15+1042)*1+lsi)*1]), &(stack[((hsi*15+1148)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1360)*1+lsi)*1]), &(stack[((hsi*28+1184)*1+lsi)*1]), &(stack[((hsi*28+1332)*1+lsi)*1]), &(stack[((hsi*21+1057)*1+lsi)*1]), &(stack[((hsi*21+1163)*1+lsi)*1]));
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*84+1396)*1+lsi)*1]), &(stack[((hsi*36+1360)*1+lsi)*1]), &(stack[((hsi*28+1184)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*28+1480)*1+lsi)*1]), &(stack[((hsi*84+1396)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+906)*1+lsi)*1]),&(stack[((hsi*28+1480)*1+lsi)*1]),28);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+970)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+985)*1+lsi)*1]), &(stack[((hsi*3+982)*1+lsi)*1]), &(stack[((hsi*3+970)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1032)*1+lsi)*1]), &(stack[((hsi*6+1001)*1+lsi)*1]), &(stack[((hsi*6+985)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]), &(stack[((hsi*3+982)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1042)*1+lsi)*1]), &(stack[((hsi*10+1007)*1+lsi)*1]), &(stack[((hsi*10+1032)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*6+1001)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1508)*1+lsi)*1]), &(stack[((hsi*15+1296)*1+lsi)*1]), &(stack[((hsi*15+1042)*1+lsi)*1]), &(stack[((hsi*10+1138)*1+lsi)*1]), &(stack[((hsi*10+1007)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1529)*1+lsi)*1]), &(stack[((hsi*21+1311)*1+lsi)*1]), &(stack[((hsi*21+1508)*1+lsi)*1]), &(stack[((hsi*15+1148)*1+lsi)*1]), &(stack[((hsi*15+1296)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1557)*1+lsi)*1]), &(stack[((hsi*28+1332)*1+lsi)*1]), &(stack[((hsi*28+1529)*1+lsi)*1]), &(stack[((hsi*21+1163)*1+lsi)*1]), &(stack[((hsi*21+1311)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1138)*1+lsi)*1]), &(stack[((hsi*36+1360)*1+lsi)*1]), &(stack[((hsi*36+1557)*1+lsi)*1]), &(stack[((hsi*28+1184)*1+lsi)*1]), &(stack[((hsi*28+1332)*1+lsi)*1]));
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*108+1593)*1+lsi)*1]), &(stack[((hsi*45+1138)*1+lsi)*1]), &(stack[((hsi*36+1360)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*36+1701)*1+lsi)*1]), &(stack[((hsi*108+1593)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+870)*1+lsi)*1]),&(stack[((hsi*36+1701)*1+lsi)*1]),36);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+973)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*3+970)*1+lsi)*1]), &(stack[((hsi*3+973)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1737)*1+lsi)*1]), &(stack[((hsi*6+985)*1+lsi)*1]), &(stack[((hsi*6+976)*1+lsi)*1]), &(stack[((hsi*3+982)*1+lsi)*1]), &(stack[((hsi*3+970)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+970)*1+lsi)*1]), &(stack[((hsi*10+1032)*1+lsi)*1]), &(stack[((hsi*10+1737)*1+lsi)*1]), &(stack[((hsi*6+1001)*1+lsi)*1]), &(stack[((hsi*6+985)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1737)*1+lsi)*1]), &(stack[((hsi*15+1042)*1+lsi)*1]), &(stack[((hsi*15+970)*1+lsi)*1]), &(stack[((hsi*10+1007)*1+lsi)*1]), &(stack[((hsi*10+1032)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1758)*1+lsi)*1]), &(stack[((hsi*21+1508)*1+lsi)*1]), &(stack[((hsi*21+1737)*1+lsi)*1]), &(stack[((hsi*15+1296)*1+lsi)*1]), &(stack[((hsi*15+1042)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1786)*1+lsi)*1]), &(stack[((hsi*28+1529)*1+lsi)*1]), &(stack[((hsi*28+1758)*1+lsi)*1]), &(stack[((hsi*21+1311)*1+lsi)*1]), &(stack[((hsi*21+1508)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1737)*1+lsi)*1]), &(stack[((hsi*36+1557)*1+lsi)*1]), &(stack[((hsi*36+1786)*1+lsi)*1]), &(stack[((hsi*28+1332)*1+lsi)*1]), &(stack[((hsi*28+1529)*1+lsi)*1]));
OSVRRElecPotInBra_aB_m__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+1296)*1+lsi)*1]), &(stack[((hsi*45+1138)*1+lsi)*1]), &(stack[((hsi*45+1737)*1+lsi)*1]), &(stack[((hsi*36+1360)*1+lsi)*1]), &(stack[((hsi*36+1557)*1+lsi)*1]));
HRRPart0bra0ket0lp(inteval, &(stack[((hsi*135+1737)*1+lsi)*1]), &(stack[((hsi*55+1296)*1+lsi)*1]), &(stack[((hsi*45+1138)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*45+1508)*1+lsi)*1]), &(stack[((hsi*135+1737)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+825)*1+lsi)*1]),&(stack[((hsi*45+1508)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*15+1553)*1+lsi)*1]), &(stack[((hsi*45+1078)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+810)*1+lsi)*1]),&(stack[((hsi*15+1553)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*21+970)*1+lsi)*1]), &(stack[((hsi*63+1212)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+789)*1+lsi)*1]),&(stack[((hsi*21+970)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*28+1872)*1+lsi)*1]), &(stack[((hsi*84+1396)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+761)*1+lsi)*1]),&(stack[((hsi*28+1872)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*36+1900)*1+lsi)*1]), &(stack[((hsi*108+1593)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+725)*1+lsi)*1]),&(stack[((hsi*36+1900)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*45+1936)*1+lsi)*1]), &(stack[((hsi*135+1737)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+680)*1+lsi)*1]),&(stack[((hsi*45+1936)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*15+1032)*1+lsi)*1]), &(stack[((hsi*45+1078)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+665)*1+lsi)*1]),&(stack[((hsi*15+1032)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*21+1078)*1+lsi)*1]), &(stack[((hsi*63+1212)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+644)*1+lsi)*1]),&(stack[((hsi*21+1078)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*28+1212)*1+lsi)*1]), &(stack[((hsi*84+1396)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+616)*1+lsi)*1]),&(stack[((hsi*28+1212)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*36+1396)*1+lsi)*1]), &(stack[((hsi*108+1593)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+580)*1+lsi)*1]),&(stack[((hsi*36+1396)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*45+1568)*1+lsi)*1]), &(stack[((hsi*135+1737)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+535)*1+lsi)*1]),&(stack[((hsi*45+1568)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_g001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1737)*1+lsi)*1]), &(stack[((hsi*21+1057)*1+lsi)*1]), &(stack[((hsi*10+991)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+520)*1+lsi)*1]),&(stack[((hsi*15+1737)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_h001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1752)*1+lsi)*1]), &(stack[((hsi*28+1184)*1+lsi)*1]), &(stack[((hsi*15+1017)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+499)*1+lsi)*1]),&(stack[((hsi*21+1752)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1773)*1+lsi)*1]), &(stack[((hsi*36+1360)*1+lsi)*1]), &(stack[((hsi*21+1057)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+471)*1+lsi)*1]),&(stack[((hsi*28+1773)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1613)*1+lsi)*1]), &(stack[((hsi*45+1138)*1+lsi)*1]), &(stack[((hsi*28+1184)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+435)*1+lsi)*1]),&(stack[((hsi*36+1613)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1801)*1+lsi)*1]), &(stack[((hsi*55+1296)*1+lsi)*1]), &(stack[((hsi*36+1360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+390)*1+lsi)*1]),&(stack[((hsi*45+1801)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_g010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1649)*1+lsi)*1]), &(stack[((hsi*21+1057)*1+lsi)*1]), &(stack[((hsi*10+991)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+375)*1+lsi)*1]),&(stack[((hsi*15+1649)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_h010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1432)*1+lsi)*1]), &(stack[((hsi*28+1184)*1+lsi)*1]), &(stack[((hsi*15+1017)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+354)*1+lsi)*1]),&(stack[((hsi*21+1432)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1664)*1+lsi)*1]), &(stack[((hsi*36+1360)*1+lsi)*1]), &(stack[((hsi*21+1057)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+326)*1+lsi)*1]),&(stack[((hsi*28+1664)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1981)*1+lsi)*1]), &(stack[((hsi*45+1138)*1+lsi)*1]), &(stack[((hsi*28+1184)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+290)*1+lsi)*1]),&(stack[((hsi*36+1981)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+2017)*1+lsi)*1]), &(stack[((hsi*55+1296)*1+lsi)*1]), &(stack[((hsi*36+1360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+245)*1+lsi)*1]),&(stack[((hsi*45+2017)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+230)*1+lsi)*1]),&(stack[((hsi*15+1017)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_g100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1240)*1+lsi)*1]), &(stack[((hsi*21+1057)*1+lsi)*1]), &(stack[((hsi*10+991)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+215)*1+lsi)*1]),&(stack[((hsi*15+1240)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+194)*1+lsi)*1]),&(stack[((hsi*21+1057)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_h100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1453)*1+lsi)*1]), &(stack[((hsi*28+1184)*1+lsi)*1]), &(stack[((hsi*15+1017)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+173)*1+lsi)*1]),&(stack[((hsi*21+1453)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+145)*1+lsi)*1]),&(stack[((hsi*28+1184)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+2062)*1+lsi)*1]), &(stack[((hsi*36+1360)*1+lsi)*1]), &(stack[((hsi*21+1057)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+117)*1+lsi)*1]),&(stack[((hsi*28+2062)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+81)*1+lsi)*1]),&(stack[((hsi*36+1360)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+2090)*1+lsi)*1]), &(stack[((hsi*45+1138)*1+lsi)*1]), &(stack[((hsi*28+1184)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+45)*1+lsi)*1]),&(stack[((hsi*36+2090)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1138)*1+lsi)*1]), &(stack[((hsi*55+1296)*1+lsi)*1]), &(stack[((hsi*36+1360)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+1138)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 970 */
}

#ifdef __cplusplus
};
#endif
