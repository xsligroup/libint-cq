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
#include <CR_DerivGaussP0InKet_aB_g__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_g__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_g__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_G_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+420)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+423)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+441)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+467)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]), &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+420)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+482)*1+lsi)*1]), &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+492)*1+lsi)*1]), &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*10+482)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*6+451)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]), &(stack[((hsi*15+492)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]), &(stack[((hsi*10+457)*1+lsi)*1]));
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*45+528)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*15+573)*1+lsi)*1]), &(stack[((hsi*45+528)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+405)*1+lsi)*1]),&(stack[((hsi*15+573)*1+lsi)*1]),15);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+423)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+588)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+598)*1+lsi)*1]), &(stack[((hsi*10+482)*1+lsi)*1]), &(stack[((hsi*10+588)*1+lsi)*1]), &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+613)*1+lsi)*1]), &(stack[((hsi*15+492)*1+lsi)*1]), &(stack[((hsi*15+598)*1+lsi)*1]), &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*10+482)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+634)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*21+613)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]), &(stack[((hsi*15+492)*1+lsi)*1]));
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*63+662)*1+lsi)*1]), &(stack[((hsi*28+634)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*21+725)*1+lsi)*1]), &(stack[((hsi*63+662)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+384)*1+lsi)*1]),&(stack[((hsi*21+725)*1+lsi)*1]),21);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+746)*1+lsi)*1]), &(stack[((hsi*10+588)*1+lsi)*1]), &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+420)*1+lsi)*1]), &(stack[((hsi*15+598)*1+lsi)*1]), &(stack[((hsi*15+746)*1+lsi)*1]), &(stack[((hsi*10+482)*1+lsi)*1]), &(stack[((hsi*10+588)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+746)*1+lsi)*1]), &(stack[((hsi*21+613)*1+lsi)*1]), &(stack[((hsi*21+420)*1+lsi)*1]), &(stack[((hsi*15+492)*1+lsi)*1]), &(stack[((hsi*15+598)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+774)*1+lsi)*1]), &(stack[((hsi*28+634)*1+lsi)*1]), &(stack[((hsi*28+746)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*21+613)*1+lsi)*1]));
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*84+810)*1+lsi)*1]), &(stack[((hsi*36+774)*1+lsi)*1]), &(stack[((hsi*28+634)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*28+746)*1+lsi)*1]), &(stack[((hsi*84+810)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+356)*1+lsi)*1]),&(stack[((hsi*28+746)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*15+588)*1+lsi)*1]), &(stack[((hsi*45+528)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+341)*1+lsi)*1]),&(stack[((hsi*15+588)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*21+420)*1+lsi)*1]), &(stack[((hsi*63+662)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+320)*1+lsi)*1]),&(stack[((hsi*21+420)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*28+603)*1+lsi)*1]), &(stack[((hsi*84+810)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+292)*1+lsi)*1]),&(stack[((hsi*28+603)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_g__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*15+482)*1+lsi)*1]), &(stack[((hsi*45+528)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+277)*1+lsi)*1]),&(stack[((hsi*15+482)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_h__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*21+528)*1+lsi)*1]), &(stack[((hsi*63+662)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+256)*1+lsi)*1]),&(stack[((hsi*21+528)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_i__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*28+662)*1+lsi)*1]), &(stack[((hsi*84+810)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+228)*1+lsi)*1]),&(stack[((hsi*28+662)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_g001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+690)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+213)*1+lsi)*1]),&(stack[((hsi*15+690)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_h001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+549)*1+lsi)*1]), &(stack[((hsi*28+634)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+192)*1+lsi)*1]),&(stack[((hsi*21+549)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+810)*1+lsi)*1]), &(stack[((hsi*36+774)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+164)*1+lsi)*1]),&(stack[((hsi*28+810)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_g010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+705)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+149)*1+lsi)*1]),&(stack[((hsi*15+705)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_h010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+838)*1+lsi)*1]), &(stack[((hsi*28+634)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+128)*1+lsi)*1]),&(stack[((hsi*21+838)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+859)*1+lsi)*1]), &(stack[((hsi*36+774)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+100)*1+lsi)*1]),&(stack[((hsi*28+859)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+85)*1+lsi)*1]),&(stack[((hsi*15+467)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_g100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+451)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+70)*1+lsi)*1]),&(stack[((hsi*15+451)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_h100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+887)*1+lsi)*1]), &(stack[((hsi*28+634)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+49)*1+lsi)*1]),&(stack[((hsi*21+887)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_i100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+631)*1+lsi)*1]), &(stack[((hsi*36+774)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+21)*1+lsi)*1]),&(stack[((hsi*28+631)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+0)*1+lsi)*1]),&(stack[((hsi*21+507)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 420 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
