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
OSVRRElecPotInKet_aB_s__0___ElecPot_p__0___Ab__up_0(inteval, &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_d__0___Ab__up_0(inteval, &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]), &(stack[((hsi*3+432)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInKet_aB_s__0___ElecPot_f__0___Ab__up_0(inteval, &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]), &(stack[((hsi*6+451)*1+lsi)*1]), &(stack[((hsi*3+420)*1+lsi)*1]), &(stack[((hsi*3+423)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+602)*1+lsi)*1]), &(stack[((hsi*10+528)*1+lsi)*1]), &(stack[((hsi*10+457)*1+lsi)*1]), &(stack[((hsi*6+435)*1+lsi)*1]), &(stack[((hsi*6+426)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+420)*1+lsi)*1]), &(stack[((hsi*15+538)*1+lsi)*1]), &(stack[((hsi*15+602)*1+lsi)*1]), &(stack[((hsi*10+482)*1+lsi)*1]), &(stack[((hsi*10+528)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+602)*1+lsi)*1]), &(stack[((hsi*21+553)*1+lsi)*1]), &(stack[((hsi*21+420)*1+lsi)*1]), &(stack[((hsi*15+492)*1+lsi)*1]), &(stack[((hsi*15+538)*1+lsi)*1]));
OSVRRElecPotInKet_aB_s__0___ElecPot_k__0___Ab__up_0(inteval, &(stack[((hsi*36+630)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]), &(stack[((hsi*28+602)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*21+553)*1+lsi)*1]));
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i001__0___Ab__up_0(inteval, &(stack[((hsi*28+602)*1+lsi)*1]), &(stack[((hsi*36+630)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+392)*1+lsi)*1]),&(stack[((hsi*28+602)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i010__0___Ab__up_0(inteval, &(stack[((hsi*28+528)*1+lsi)*1]), &(stack[((hsi*36+630)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+364)*1+lsi)*1]),&(stack[((hsi*28+528)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_i100__0___Ab__up_0(inteval, &(stack[((hsi*28+666)*1+lsi)*1]), &(stack[((hsi*36+630)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+336)*1+lsi)*1]),&(stack[((hsi*28+666)*1+lsi)*1]),28);
HRRPart0ket0bra0ip(inteval, &(stack[((hsi*84+694)*1+lsi)*1]), &(stack[((hsi*36+630)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+630)*1+lsi)*1]), &(stack[((hsi*84+694)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+308)*1+lsi)*1]),&(stack[((hsi*28+630)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+778)*1+lsi)*1]), &(stack[((hsi*84+694)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+280)*1+lsi)*1]),&(stack[((hsi*28+778)*1+lsi)*1]),28);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_i__0___Ab__up_0(inteval, &(stack[((hsi*28+806)*1+lsi)*1]), &(stack[((hsi*84+694)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*28+252)*1+lsi)*1]),&(stack[((hsi*28+806)*1+lsi)*1]),28);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_h001__0___Ab__up_0(inteval, &(stack[((hsi*21+420)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+231)*1+lsi)*1]),&(stack[((hsi*21+420)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_h010__0___Ab__up_0(inteval, &(stack[((hsi*21+694)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+210)*1+lsi)*1]),&(stack[((hsi*21+694)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_h100__0___Ab__up_0(inteval, &(stack[((hsi*21+715)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+189)*1+lsi)*1]),&(stack[((hsi*21+715)*1+lsi)*1]),21);
HRRPart0ket0bra0hp(inteval, &(stack[((hsi*63+834)*1+lsi)*1]), &(stack[((hsi*28+574)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+556)*1+lsi)*1]), &(stack[((hsi*63+834)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+168)*1+lsi)*1]),&(stack[((hsi*21+556)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+736)*1+lsi)*1]), &(stack[((hsi*63+834)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+147)*1+lsi)*1]),&(stack[((hsi*21+736)*1+lsi)*1]),21);
_libint2_static_api_inc1_short_(&(stack[((hsi*21+126)*1+lsi)*1]),&(stack[((hsi*21+507)*1+lsi)*1]),21);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_h__0___Ab__up_0(inteval, &(stack[((hsi*21+757)*1+lsi)*1]), &(stack[((hsi*63+834)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*21+105)*1+lsi)*1]),&(stack[((hsi*21+757)*1+lsi)*1]),21);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_g001__0___Ab__up_0(inteval, &(stack[((hsi*15+482)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+90)*1+lsi)*1]),&(stack[((hsi*15+482)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_g010__0___Ab__up_0(inteval, &(stack[((hsi*15+577)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+75)*1+lsi)*1]),&(stack[((hsi*15+577)*1+lsi)*1]),15);
CR_DerivGaussP0InKet_aB_s__0___ElecPot_g100__0___Ab__up_0(inteval, &(stack[((hsi*15+451)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*10+441)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+60)*1+lsi)*1]),&(stack[((hsi*15+451)*1+lsi)*1]),15);
HRRPart0ket0bra0gp(inteval, &(stack[((hsi*45+834)*1+lsi)*1]), &(stack[((hsi*21+507)*1+lsi)*1]), &(stack[((hsi*15+467)*1+lsi)*1]),1);
CR_DerivGaussP0InBra_aB_s001__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+879)*1+lsi)*1]), &(stack[((hsi*45+834)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+45)*1+lsi)*1]),&(stack[((hsi*15+879)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_s010__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+894)*1+lsi)*1]), &(stack[((hsi*45+834)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+30)*1+lsi)*1]),&(stack[((hsi*15+894)*1+lsi)*1]),15);
_libint2_static_api_inc1_short_(&(stack[((hsi*15+15)*1+lsi)*1]),&(stack[((hsi*15+467)*1+lsi)*1]),15);
CR_DerivGaussP0InBra_aB_s100__0___ElecPot_g__0___Ab__up_0(inteval, &(stack[((hsi*15+909)*1+lsi)*1]), &(stack[((hsi*45+834)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(stack[((hsi*15+909)*1+lsi)*1]),15);
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
#endif
