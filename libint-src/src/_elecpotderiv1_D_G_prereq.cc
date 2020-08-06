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
#include <CR_DerivGaussP0InBra_aB_s001__0___ElecPot_g__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s001__0___ElecPot_h__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s001__0___ElecPot_i__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_g__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_h__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s010__0___ElecPot_i__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_g__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_h__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_s100__0___ElecPot_i__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_g001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_g010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_g100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_h001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_h010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_h100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_i001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_i010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_s__0___ElecPot_i100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0ket0bra0gp.h>
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0ip.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0.h>
#include <OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv1_D_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+420)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+423)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+441)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+467)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]), &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+420)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+482)*1+lsi)*1]), &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+492)*1+lsi)*1]), &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*10+482)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*6+451)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]), &(stack[((hsi*15+492)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]), &(stack[((hsi*10+457)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+423)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+528)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+538)*1+lsi)*1]), &(stack[((hsi*10+482)*1+lsi)*1]), &(stack[((hsi*10+528)*1+lsi)*1]), &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+553)*1+lsi)*1]), &(stack[((hsi*15+492)*1+lsi)*1]), &(stack[((hsi*15+538)*1+lsi)*1]), &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*10+482)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+574)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*21+553)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]), &(stack[((hsi*15+492)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_h001__0___Ab__up_0(inteval, &(stack[((hsi*21+602)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+399)*1+lsi)*1]),&(stack[((hsi*21+602)*1+lsi)*1]),21);
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+623)*1+lsi)*1]), &(stack[((hsi*10+528)*1+lsi)*1]), &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+420)*1+lsi)*1]), &(stack[((hsi*15+538)*1+lsi)*1]), &(stack[((hsi*15+623)*1+lsi)*1]), &(stack[((hsi*10+482)*1+lsi)*1]), &(stack[((hsi*10+528)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+623)*1+lsi)*1]), &(stack[((hsi*21+553)*1+lsi)*1]), &(stack[((hsi*21+420)*1+lsi)*1]), &(stack[((hsi*15+492)*1+lsi)*1]), &(stack[((hsi*15+538)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+651)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]), &(stack[((hsi*28+623)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*21+553)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i001__0___Ab__up_0(inteval, &(stack[((hsi*28+623)*1+lsi)*1]), &(stack[((hsi*36+651)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+371)*1+lsi)*1]),&(stack[((hsi*28+623)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_h010__0___Ab__up_0(inteval, &(stack[((hsi*21+420)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+350)*1+lsi)*1]),&(stack[((hsi*21+420)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i010__0___Ab__up_0(inteval, &(stack[((hsi*28+528)*1+lsi)*1]), &(stack[((hsi*36+651)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+322)*1+lsi)*1]),&(stack[((hsi*28+528)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_h100__0___Ab__up_0(inteval, &(stack[((hsi*21+482)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+301)*1+lsi)*1]),&(stack[((hsi*21+482)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i100__0___Ab__up_0(inteval, &(stack[((hsi*28+687)*1+lsi)*1]), &(stack[((hsi*36+651)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+273)*1+lsi)*1]),&(stack[((hsi*28+687)*1+lsi)*1]),28);
HRRPart0ket0bra0hp(inteval, &(stack[((hsi*63+715)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+778)*1+lsi)*1]), &(stack[((hsi*63+715)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+252)*1+lsi)*1]),&(stack[((hsi*21+778)*1+lsi)*1]),21);
HRRPart0ket0bra0ip(inteval, &(stack[((hsi*84+799)*1+lsi)*1]), &(stack[((hsi*36+651)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+556)*1+lsi)*1]), &(stack[((hsi*84+799)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+224)*1+lsi)*1]),&(stack[((hsi*28+556)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+651)*1+lsi)*1]), &(stack[((hsi*63+715)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+203)*1+lsi)*1]),&(stack[((hsi*21+651)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+883)*1+lsi)*1]), &(stack[((hsi*84+799)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+175)*1+lsi)*1]),&(stack[((hsi*28+883)*1+lsi)*1]),28);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+154)*1+lsi)*1]),&(stack[((hsi*21+507)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+911)*1+lsi)*1]), &(stack[((hsi*63+715)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+133)*1+lsi)*1]),&(stack[((hsi*21+911)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+715)*1+lsi)*1]), &(stack[((hsi*84+799)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+105)*1+lsi)*1]),&(stack[((hsi*28+715)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_g001__0___Ab__up_0(inteval, &(stack[((hsi*15+672)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+90)*1+lsi)*1]),&(stack[((hsi*15+672)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_g010__0___Ab__up_0(inteval, &(stack[((hsi*15+799)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+75)*1+lsi)*1]),&(stack[((hsi*15+799)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_g100__0___Ab__up_0(inteval, &(stack[((hsi*15+814)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+60)*1+lsi)*1]),&(stack[((hsi*15+814)*1+lsi)*1]),15);
HRRPart0ket0bra0gp(inteval, &(stack[((hsi*45+829)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+743)*1+lsi)*1]), &(stack[((hsi*45+829)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+45)*1+lsi)*1]),&(stack[((hsi*15+743)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+441)*1+lsi)*1]), &(stack[((hsi*45+829)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+30)*1+lsi)*1]),&(stack[((hsi*15+441)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+15)*1+lsi)*1]),&(stack[((hsi*15+467)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+758)*1+lsi)*1]), &(stack[((hsi*45+829)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(stack[((hsi*15+758)*1+lsi)*1]),15);
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
