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
#include <CR_aB_X5__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g002__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g011__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g020__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g101__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g110__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g200__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_h002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_h011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_h020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_h101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_h110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_h200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_H_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*42+6615)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*42+6657)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*42+6699)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g002__0___Ab__up_(inteval, &(stack[((hsi*315+6741)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+6300)*1+lsi)*1]),&(stack[((hsi*315+6741)*1+lsi)*1]),315);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g011__0___Ab__up_(inteval, &(stack[((hsi*315+7056)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5985)*1+lsi)*1]),&(stack[((hsi*315+7056)*1+lsi)*1]),315);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g020__0___Ab__up_(inteval, &(stack[((hsi*315+7371)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5670)*1+lsi)*1]),&(stack[((hsi*315+7371)*1+lsi)*1]),315);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g101__0___Ab__up_(inteval, &(stack[((hsi*315+7686)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5355)*1+lsi)*1]),&(stack[((hsi*315+7686)*1+lsi)*1]),315);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g110__0___Ab__up_(inteval, &(stack[((hsi*315+8001)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5040)*1+lsi)*1]),&(stack[((hsi*315+8001)*1+lsi)*1]),315);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g200__0___Ab__up_(inteval, &(stack[((hsi*315+8316)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+4725)*1+lsi)*1]),&(stack[((hsi*315+8316)*1+lsi)*1]),315);
CR_aB_Z6__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*42+6615)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*42+6657)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*42+6699)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*315+8631)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+4410)*1+lsi)*1]),&(stack[((hsi*315+8631)*1+lsi)*1]),315);
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*315+8946)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+4095)*1+lsi)*1]),&(stack[((hsi*315+8946)*1+lsi)*1]),315);
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*315+9261)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+3780)*1+lsi)*1]),&(stack[((hsi*315+9261)*1+lsi)*1]),315);
CR_aB_Z7__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*40+9576)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*40+9616)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*40+9656)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*315+9696)*1+lsi)*1]), &(stack[((hsi*40+9656)*1+lsi)*1]), &(stack[((hsi*40+9616)*1+lsi)*1]), &(stack[((hsi*40+9576)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+3465)*1+lsi)*1]),&(stack[((hsi*315+9696)*1+lsi)*1]),315);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*315+10011)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+3150)*1+lsi)*1]),&(stack[((hsi*315+10011)*1+lsi)*1]),315);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*315+10326)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+2835)*1+lsi)*1]),&(stack[((hsi*315+10326)*1+lsi)*1]),315);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*315+10641)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+2520)*1+lsi)*1]),&(stack[((hsi*315+10641)*1+lsi)*1]),315);
CR_aB_h011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*315+10956)*1+lsi)*1]), &(stack[((hsi*40+9656)*1+lsi)*1]), &(stack[((hsi*40+9616)*1+lsi)*1]), &(stack[((hsi*40+9576)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+2205)*1+lsi)*1]),&(stack[((hsi*315+10956)*1+lsi)*1]),315);
CR_aB_h020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*315+11271)*1+lsi)*1]), &(stack[((hsi*40+9656)*1+lsi)*1]), &(stack[((hsi*40+9616)*1+lsi)*1]), &(stack[((hsi*40+9576)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+1890)*1+lsi)*1]),&(stack[((hsi*315+11271)*1+lsi)*1]),315);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*315+11586)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+1575)*1+lsi)*1]),&(stack[((hsi*315+11586)*1+lsi)*1]),315);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*315+11901)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+1260)*1+lsi)*1]),&(stack[((hsi*315+11901)*1+lsi)*1]),315);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*315+12216)*1+lsi)*1]), &(stack[((hsi*42+6699)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+945)*1+lsi)*1]),&(stack[((hsi*315+12216)*1+lsi)*1]),315);
CR_aB_h101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*315+12531)*1+lsi)*1]), &(stack[((hsi*40+9656)*1+lsi)*1]), &(stack[((hsi*40+9616)*1+lsi)*1]), &(stack[((hsi*40+9576)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+630)*1+lsi)*1]),&(stack[((hsi*315+12531)*1+lsi)*1]),315);
CR_aB_h110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*315+12846)*1+lsi)*1]), &(stack[((hsi*40+9656)*1+lsi)*1]), &(stack[((hsi*40+9616)*1+lsi)*1]), &(stack[((hsi*40+9576)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+315)*1+lsi)*1]),&(stack[((hsi*315+12846)*1+lsi)*1]),315);
CR_aB_h200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*315+13161)*1+lsi)*1]), &(stack[((hsi*40+9656)*1+lsi)*1]), &(stack[((hsi*40+9616)*1+lsi)*1]), &(stack[((hsi*40+9576)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+0)*1+lsi)*1]),&(stack[((hsi*315+13161)*1+lsi)*1]),315);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 6615 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
