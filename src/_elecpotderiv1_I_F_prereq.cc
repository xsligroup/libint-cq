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
#include <CR_DerivGaussP0InBra_aB_l001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_m001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_m010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_m100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_m__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_m__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_m__0___ElecPot_s100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_m__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_ps__0___ElecPot_s__0___Ab__up_0.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_I_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1093)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1096)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1099)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1102)*1+lsi)*1]), &(stack[((hsi*3+1093)*1+lsi)*1]), &(stack[((hsi*3+1099)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1108)*1+lsi)*1]), &(stack[((hsi*3+1096)*1+lsi)*1]), &(stack[((hsi*3+1093)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1114)*1+lsi)*1]), &(stack[((hsi*6+1108)*1+lsi)*1]), &(stack[((hsi*6+1102)*1+lsi)*1]), &(stack[((hsi*3+1096)*1+lsi)*1]), &(stack[((hsi*3+1093)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1124)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1127)*1+lsi)*1]), &(stack[((hsi*3+1099)*1+lsi)*1]), &(stack[((hsi*3+1124)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1133)*1+lsi)*1]), &(stack[((hsi*6+1102)*1+lsi)*1]), &(stack[((hsi*6+1127)*1+lsi)*1]), &(stack[((hsi*3+1093)*1+lsi)*1]), &(stack[((hsi*3+1099)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1143)*1+lsi)*1]), &(stack[((hsi*10+1114)*1+lsi)*1]), &(stack[((hsi*10+1133)*1+lsi)*1]), &(stack[((hsi*6+1108)*1+lsi)*1]), &(stack[((hsi*6+1102)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1093)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1158)*1+lsi)*1]), &(stack[((hsi*3+1093)*1+lsi)*1]), &(stack[((hsi*3+1096)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1164)*1+lsi)*1]), &(stack[((hsi*6+1158)*1+lsi)*1]), &(stack[((hsi*6+1108)*1+lsi)*1]), &(stack[((hsi*3+1093)*1+lsi)*1]), &(stack[((hsi*3+1096)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1174)*1+lsi)*1]), &(stack[((hsi*10+1164)*1+lsi)*1]), &(stack[((hsi*10+1114)*1+lsi)*1]), &(stack[((hsi*6+1158)*1+lsi)*1]), &(stack[((hsi*6+1108)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1189)*1+lsi)*1]), &(stack[((hsi*15+1174)*1+lsi)*1]), &(stack[((hsi*15+1143)*1+lsi)*1]), &(stack[((hsi*10+1164)*1+lsi)*1]), &(stack[((hsi*10+1114)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1158)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1108)*1+lsi)*1]), &(stack[((hsi*3+1124)*1+lsi)*1]), &(stack[((hsi*3+1158)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1161)*1+lsi)*1]), &(stack[((hsi*6+1127)*1+lsi)*1]), &(stack[((hsi*6+1108)*1+lsi)*1]), &(stack[((hsi*3+1099)*1+lsi)*1]), &(stack[((hsi*3+1124)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1210)*1+lsi)*1]), &(stack[((hsi*10+1133)*1+lsi)*1]), &(stack[((hsi*10+1161)*1+lsi)*1]), &(stack[((hsi*6+1102)*1+lsi)*1]), &(stack[((hsi*6+1127)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1225)*1+lsi)*1]), &(stack[((hsi*15+1143)*1+lsi)*1]), &(stack[((hsi*15+1210)*1+lsi)*1]), &(stack[((hsi*10+1114)*1+lsi)*1]), &(stack[((hsi*10+1133)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1246)*1+lsi)*1]), &(stack[((hsi*21+1189)*1+lsi)*1]), &(stack[((hsi*21+1225)*1+lsi)*1]), &(stack[((hsi*15+1174)*1+lsi)*1]), &(stack[((hsi*15+1143)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1171)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1093)*1+lsi)*1]), &(stack[((hsi*3+1158)*1+lsi)*1]), &(stack[((hsi*3+1171)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1114)*1+lsi)*1]), &(stack[((hsi*6+1108)*1+lsi)*1]), &(stack[((hsi*6+1093)*1+lsi)*1]), &(stack[((hsi*3+1124)*1+lsi)*1]), &(stack[((hsi*3+1158)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1174)*1+lsi)*1]), &(stack[((hsi*10+1161)*1+lsi)*1]), &(stack[((hsi*10+1114)*1+lsi)*1]), &(stack[((hsi*6+1127)*1+lsi)*1]), &(stack[((hsi*6+1108)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1274)*1+lsi)*1]), &(stack[((hsi*15+1210)*1+lsi)*1]), &(stack[((hsi*15+1174)*1+lsi)*1]), &(stack[((hsi*10+1133)*1+lsi)*1]), &(stack[((hsi*10+1161)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1295)*1+lsi)*1]), &(stack[((hsi*21+1225)*1+lsi)*1]), &(stack[((hsi*21+1274)*1+lsi)*1]), &(stack[((hsi*15+1143)*1+lsi)*1]), &(stack[((hsi*15+1210)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1323)*1+lsi)*1]), &(stack[((hsi*28+1246)*1+lsi)*1]), &(stack[((hsi*28+1295)*1+lsi)*1]), &(stack[((hsi*21+1189)*1+lsi)*1]), &(stack[((hsi*21+1225)*1+lsi)*1]));
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*84+1359)*1+lsi)*1]), &(stack[((hsi*36+1323)*1+lsi)*1]), &(stack[((hsi*28+1246)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*28+1124)*1+lsi)*1]), &(stack[((hsi*84+1359)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+1065)*1+lsi)*1]),&(stack[((hsi*28+1124)*1+lsi)*1]),28);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1099)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1102)*1+lsi)*1]), &(stack[((hsi*3+1171)*1+lsi)*1]), &(stack[((hsi*3+1099)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1443)*1+lsi)*1]), &(stack[((hsi*6+1093)*1+lsi)*1]), &(stack[((hsi*6+1102)*1+lsi)*1]), &(stack[((hsi*3+1158)*1+lsi)*1]), &(stack[((hsi*3+1171)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1453)*1+lsi)*1]), &(stack[((hsi*10+1114)*1+lsi)*1]), &(stack[((hsi*10+1443)*1+lsi)*1]), &(stack[((hsi*6+1108)*1+lsi)*1]), &(stack[((hsi*6+1093)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1468)*1+lsi)*1]), &(stack[((hsi*15+1174)*1+lsi)*1]), &(stack[((hsi*15+1453)*1+lsi)*1]), &(stack[((hsi*10+1161)*1+lsi)*1]), &(stack[((hsi*10+1114)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1489)*1+lsi)*1]), &(stack[((hsi*21+1274)*1+lsi)*1]), &(stack[((hsi*21+1468)*1+lsi)*1]), &(stack[((hsi*15+1210)*1+lsi)*1]), &(stack[((hsi*15+1174)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1517)*1+lsi)*1]), &(stack[((hsi*28+1295)*1+lsi)*1]), &(stack[((hsi*28+1489)*1+lsi)*1]), &(stack[((hsi*21+1225)*1+lsi)*1]), &(stack[((hsi*21+1274)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1553)*1+lsi)*1]), &(stack[((hsi*36+1323)*1+lsi)*1]), &(stack[((hsi*36+1517)*1+lsi)*1]), &(stack[((hsi*28+1246)*1+lsi)*1]), &(stack[((hsi*28+1295)*1+lsi)*1]));
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*108+1598)*1+lsi)*1]), &(stack[((hsi*45+1553)*1+lsi)*1]), &(stack[((hsi*36+1323)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*36+1210)*1+lsi)*1]), &(stack[((hsi*108+1598)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1029)*1+lsi)*1]),&(stack[((hsi*36+1210)*1+lsi)*1]),36);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1152)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1108)*1+lsi)*1]), &(stack[((hsi*3+1099)*1+lsi)*1]), &(stack[((hsi*3+1152)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1155)*1+lsi)*1]), &(stack[((hsi*6+1102)*1+lsi)*1]), &(stack[((hsi*6+1108)*1+lsi)*1]), &(stack[((hsi*3+1171)*1+lsi)*1]), &(stack[((hsi*3+1099)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1706)*1+lsi)*1]), &(stack[((hsi*10+1443)*1+lsi)*1]), &(stack[((hsi*10+1155)*1+lsi)*1]), &(stack[((hsi*6+1093)*1+lsi)*1]), &(stack[((hsi*6+1102)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1721)*1+lsi)*1]), &(stack[((hsi*15+1453)*1+lsi)*1]), &(stack[((hsi*15+1706)*1+lsi)*1]), &(stack[((hsi*10+1114)*1+lsi)*1]), &(stack[((hsi*10+1443)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1742)*1+lsi)*1]), &(stack[((hsi*21+1468)*1+lsi)*1]), &(stack[((hsi*21+1721)*1+lsi)*1]), &(stack[((hsi*15+1174)*1+lsi)*1]), &(stack[((hsi*15+1453)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1770)*1+lsi)*1]), &(stack[((hsi*28+1489)*1+lsi)*1]), &(stack[((hsi*28+1742)*1+lsi)*1]), &(stack[((hsi*21+1274)*1+lsi)*1]), &(stack[((hsi*21+1468)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1806)*1+lsi)*1]), &(stack[((hsi*36+1517)*1+lsi)*1]), &(stack[((hsi*36+1770)*1+lsi)*1]), &(stack[((hsi*28+1295)*1+lsi)*1]), &(stack[((hsi*28+1489)*1+lsi)*1]));
OSVRRElecPotInBra_aB_m__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+1851)*1+lsi)*1]), &(stack[((hsi*45+1553)*1+lsi)*1]), &(stack[((hsi*45+1806)*1+lsi)*1]), &(stack[((hsi*36+1323)*1+lsi)*1]), &(stack[((hsi*36+1517)*1+lsi)*1]));
HRRPart0bra0ket0lp(inteval, &(stack[((hsi*135+1906)*1+lsi)*1]), &(stack[((hsi*55+1851)*1+lsi)*1]), &(stack[((hsi*45+1553)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*45+1274)*1+lsi)*1]), &(stack[((hsi*135+1906)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+984)*1+lsi)*1]),&(stack[((hsi*45+1274)*1+lsi)*1]),45);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1165)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_10[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1093)*1+lsi)*1]), &(stack[((hsi*3+1152)*1+lsi)*1]), &(stack[((hsi*3+1165)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1114)*1+lsi)*1]), &(stack[((hsi*6+1108)*1+lsi)*1]), &(stack[((hsi*6+1093)*1+lsi)*1]), &(stack[((hsi*3+1099)*1+lsi)*1]), &(stack[((hsi*3+1152)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1165)*1+lsi)*1]), &(stack[((hsi*10+1155)*1+lsi)*1]), &(stack[((hsi*10+1114)*1+lsi)*1]), &(stack[((hsi*6+1102)*1+lsi)*1]), &(stack[((hsi*6+1108)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1093)*1+lsi)*1]), &(stack[((hsi*15+1706)*1+lsi)*1]), &(stack[((hsi*15+1165)*1+lsi)*1]), &(stack[((hsi*10+1443)*1+lsi)*1]), &(stack[((hsi*10+1155)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1152)*1+lsi)*1]), &(stack[((hsi*21+1721)*1+lsi)*1]), &(stack[((hsi*21+1093)*1+lsi)*1]), &(stack[((hsi*15+1453)*1+lsi)*1]), &(stack[((hsi*15+1706)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+2041)*1+lsi)*1]), &(stack[((hsi*28+1742)*1+lsi)*1]), &(stack[((hsi*28+1152)*1+lsi)*1]), &(stack[((hsi*21+1468)*1+lsi)*1]), &(stack[((hsi*21+1721)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1443)*1+lsi)*1]), &(stack[((hsi*36+1770)*1+lsi)*1]), &(stack[((hsi*36+2041)*1+lsi)*1]), &(stack[((hsi*28+1489)*1+lsi)*1]), &(stack[((hsi*28+1742)*1+lsi)*1]));
OSVRRElecPotInBra_aB_m__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+1706)*1+lsi)*1]), &(stack[((hsi*45+1806)*1+lsi)*1]), &(stack[((hsi*45+1443)*1+lsi)*1]), &(stack[((hsi*36+1517)*1+lsi)*1]), &(stack[((hsi*36+1770)*1+lsi)*1]));
OSVRRElecPotInBra_aB_ps__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*66+1443)*1+lsi)*1]), &(stack[((hsi*55+1851)*1+lsi)*1]), &(stack[((hsi*55+1706)*1+lsi)*1]), &(stack[((hsi*45+1553)*1+lsi)*1]), &(stack[((hsi*45+1806)*1+lsi)*1]));
HRRPart0bra0ket0mp(inteval, &(stack[((hsi*165+2041)*1+lsi)*1]), &(stack[((hsi*66+1443)*1+lsi)*1]), &(stack[((hsi*55+1851)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_m__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*55+1706)*1+lsi)*1]), &(stack[((hsi*165+2041)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+929)*1+lsi)*1]),&(stack[((hsi*55+1706)*1+lsi)*1]),55);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*28+1761)*1+lsi)*1]), &(stack[((hsi*84+1359)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+901)*1+lsi)*1]),&(stack[((hsi*28+1761)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*36+1789)*1+lsi)*1]), &(stack[((hsi*108+1598)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+865)*1+lsi)*1]),&(stack[((hsi*36+1789)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*45+2206)*1+lsi)*1]), &(stack[((hsi*135+1906)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+820)*1+lsi)*1]),&(stack[((hsi*45+2206)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_m__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*55+2251)*1+lsi)*1]), &(stack[((hsi*165+2041)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+765)*1+lsi)*1]),&(stack[((hsi*55+2251)*1+lsi)*1]),55);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*28+1509)*1+lsi)*1]), &(stack[((hsi*84+1359)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+737)*1+lsi)*1]),&(stack[((hsi*28+1509)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*36+1359)*1+lsi)*1]), &(stack[((hsi*108+1598)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+701)*1+lsi)*1]),&(stack[((hsi*36+1359)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*45+1598)*1+lsi)*1]), &(stack[((hsi*135+1906)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+656)*1+lsi)*1]),&(stack[((hsi*45+1598)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_m__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*55+1906)*1+lsi)*1]), &(stack[((hsi*165+2041)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+601)*1+lsi)*1]),&(stack[((hsi*55+1906)*1+lsi)*1]),55);
CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1961)*1+lsi)*1]), &(stack[((hsi*36+1323)*1+lsi)*1]), &(stack[((hsi*21+1189)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+573)*1+lsi)*1]),&(stack[((hsi*28+1961)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1989)*1+lsi)*1]), &(stack[((hsi*45+1553)*1+lsi)*1]), &(stack[((hsi*28+1246)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+537)*1+lsi)*1]),&(stack[((hsi*36+1989)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+2025)*1+lsi)*1]), &(stack[((hsi*55+1851)*1+lsi)*1]), &(stack[((hsi*36+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+492)*1+lsi)*1]),&(stack[((hsi*45+2025)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_m001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+2070)*1+lsi)*1]), &(stack[((hsi*66+1443)*1+lsi)*1]), &(stack[((hsi*45+1553)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+437)*1+lsi)*1]),&(stack[((hsi*55+2070)*1+lsi)*1]),55);
CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+2125)*1+lsi)*1]), &(stack[((hsi*36+1323)*1+lsi)*1]), &(stack[((hsi*21+1189)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+409)*1+lsi)*1]),&(stack[((hsi*28+2125)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1643)*1+lsi)*1]), &(stack[((hsi*45+1553)*1+lsi)*1]), &(stack[((hsi*28+1246)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+373)*1+lsi)*1]),&(stack[((hsi*36+1643)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+2153)*1+lsi)*1]), &(stack[((hsi*55+1851)*1+lsi)*1]), &(stack[((hsi*36+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+328)*1+lsi)*1]),&(stack[((hsi*45+2153)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_m010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+2306)*1+lsi)*1]), &(stack[((hsi*66+1443)*1+lsi)*1]), &(stack[((hsi*45+1553)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+273)*1+lsi)*1]),&(stack[((hsi*55+2306)*1+lsi)*1]),55);
_libint2_static_api_inc1_short_(&(stack[((hsi*28+245)*1+lsi)*1]),&(stack[((hsi*28+1246)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1395)*1+lsi)*1]), &(stack[((hsi*36+1323)*1+lsi)*1]), &(stack[((hsi*21+1189)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+217)*1+lsi)*1]),&(stack[((hsi*28+1395)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+181)*1+lsi)*1]),&(stack[((hsi*36+1323)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1152)*1+lsi)*1]), &(stack[((hsi*45+1553)*1+lsi)*1]), &(stack[((hsi*28+1246)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+145)*1+lsi)*1]),&(stack[((hsi*36+1152)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+100)*1+lsi)*1]),&(stack[((hsi*45+1553)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_l100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+2361)*1+lsi)*1]), &(stack[((hsi*55+1851)*1+lsi)*1]), &(stack[((hsi*36+1323)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+55)*1+lsi)*1]),&(stack[((hsi*45+2361)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_m100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+1825)*1+lsi)*1]), &(stack[((hsi*66+1443)*1+lsi)*1]), &(stack[((hsi*45+1553)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+0)*1+lsi)*1]),&(stack[((hsi*55+1825)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1093 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
