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
#include <CR_aB_X4__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_g002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_g011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_g020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_g101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_g110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_g200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_G_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z4__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*40+6615)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*40+6655)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*40+6695)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_(inteval, &(stack[((hsi*315+6735)*1+lsi)*1]), &(stack[((hsi*40+6695)*1+lsi)*1]), &(stack[((hsi*40+6655)*1+lsi)*1]), &(stack[((hsi*40+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+6300)*1+lsi)*1]),&(stack[((hsi*315+6735)*1+lsi)*1]),315);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_(inteval, &(stack[((hsi*315+7050)*1+lsi)*1]), &(stack[((hsi*40+6695)*1+lsi)*1]), &(stack[((hsi*40+6655)*1+lsi)*1]), &(stack[((hsi*40+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5985)*1+lsi)*1]),&(stack[((hsi*315+7050)*1+lsi)*1]),315);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_(inteval, &(stack[((hsi*315+7365)*1+lsi)*1]), &(stack[((hsi*40+6695)*1+lsi)*1]), &(stack[((hsi*40+6655)*1+lsi)*1]), &(stack[((hsi*40+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5670)*1+lsi)*1]),&(stack[((hsi*315+7365)*1+lsi)*1]),315);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_(inteval, &(stack[((hsi*315+7680)*1+lsi)*1]), &(stack[((hsi*40+6695)*1+lsi)*1]), &(stack[((hsi*40+6655)*1+lsi)*1]), &(stack[((hsi*40+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5355)*1+lsi)*1]),&(stack[((hsi*315+7680)*1+lsi)*1]),315);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_(inteval, &(stack[((hsi*315+7995)*1+lsi)*1]), &(stack[((hsi*40+6695)*1+lsi)*1]), &(stack[((hsi*40+6655)*1+lsi)*1]), &(stack[((hsi*40+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+5040)*1+lsi)*1]),&(stack[((hsi*315+7995)*1+lsi)*1]),315);
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_(inteval, &(stack[((hsi*315+8310)*1+lsi)*1]), &(stack[((hsi*40+6695)*1+lsi)*1]), &(stack[((hsi*40+6655)*1+lsi)*1]), &(stack[((hsi*40+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+4725)*1+lsi)*1]),&(stack[((hsi*315+8310)*1+lsi)*1]),315);
CR_aB_Z5__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*42+6615)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*42+6657)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*42+8625)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*315+8667)*1+lsi)*1]), &(stack[((hsi*42+8625)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+4410)*1+lsi)*1]),&(stack[((hsi*315+8667)*1+lsi)*1]),315);
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*315+8982)*1+lsi)*1]), &(stack[((hsi*42+8625)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+4095)*1+lsi)*1]),&(stack[((hsi*315+8982)*1+lsi)*1]),315);
CR_aB_g001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*315+9297)*1+lsi)*1]), &(stack[((hsi*42+8625)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+3780)*1+lsi)*1]),&(stack[((hsi*315+9297)*1+lsi)*1]),315);
CR_aB_Z6__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*42+9612)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*42+9654)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*42+9696)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*315+9738)*1+lsi)*1]), &(stack[((hsi*42+9696)*1+lsi)*1]), &(stack[((hsi*42+9654)*1+lsi)*1]), &(stack[((hsi*42+9612)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+3465)*1+lsi)*1]),&(stack[((hsi*315+9738)*1+lsi)*1]),315);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*315+10053)*1+lsi)*1]), &(stack[((hsi*42+8625)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+3150)*1+lsi)*1]),&(stack[((hsi*315+10053)*1+lsi)*1]),315);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*315+10368)*1+lsi)*1]), &(stack[((hsi*42+8625)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+2835)*1+lsi)*1]),&(stack[((hsi*315+10368)*1+lsi)*1]),315);
CR_aB_g010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*315+10683)*1+lsi)*1]), &(stack[((hsi*42+8625)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+2520)*1+lsi)*1]),&(stack[((hsi*315+10683)*1+lsi)*1]),315);
CR_aB_g011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*315+10998)*1+lsi)*1]), &(stack[((hsi*42+9696)*1+lsi)*1]), &(stack[((hsi*42+9654)*1+lsi)*1]), &(stack[((hsi*42+9612)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+2205)*1+lsi)*1]),&(stack[((hsi*315+10998)*1+lsi)*1]),315);
CR_aB_g020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*315+11313)*1+lsi)*1]), &(stack[((hsi*42+9696)*1+lsi)*1]), &(stack[((hsi*42+9654)*1+lsi)*1]), &(stack[((hsi*42+9612)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+1890)*1+lsi)*1]),&(stack[((hsi*315+11313)*1+lsi)*1]),315);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*315+11628)*1+lsi)*1]), &(stack[((hsi*42+8625)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+1575)*1+lsi)*1]),&(stack[((hsi*315+11628)*1+lsi)*1]),315);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*315+11943)*1+lsi)*1]), &(stack[((hsi*42+8625)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+1260)*1+lsi)*1]),&(stack[((hsi*315+11943)*1+lsi)*1]),315);
CR_aB_g100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*315+12258)*1+lsi)*1]), &(stack[((hsi*42+8625)*1+lsi)*1]), &(stack[((hsi*42+6657)*1+lsi)*1]), &(stack[((hsi*42+6615)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+945)*1+lsi)*1]),&(stack[((hsi*315+12258)*1+lsi)*1]),315);
CR_aB_g101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*315+12573)*1+lsi)*1]), &(stack[((hsi*42+9696)*1+lsi)*1]), &(stack[((hsi*42+9654)*1+lsi)*1]), &(stack[((hsi*42+9612)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+630)*1+lsi)*1]),&(stack[((hsi*315+12573)*1+lsi)*1]),315);
CR_aB_g110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*315+12888)*1+lsi)*1]), &(stack[((hsi*42+9696)*1+lsi)*1]), &(stack[((hsi*42+9654)*1+lsi)*1]), &(stack[((hsi*42+9612)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+315)*1+lsi)*1]),&(stack[((hsi*315+12888)*1+lsi)*1]),315);
CR_aB_g200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*315+13203)*1+lsi)*1]), &(stack[((hsi*42+9696)*1+lsi)*1]), &(stack[((hsi*42+9654)*1+lsi)*1]), &(stack[((hsi*42+9612)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*315+0)*1+lsi)*1]),&(stack[((hsi*315+13203)*1+lsi)*1]),315);
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
