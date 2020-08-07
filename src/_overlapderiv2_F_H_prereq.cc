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
#include <CR_aB_X3__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_.h>
#include <CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_.h>
#include <CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_f002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_f011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_f020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_f101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_f110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_f200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_F_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*32+4410)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*32+4442)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*32+4474)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_(inteval, &(stack[((hsi*210+4506)*1+lsi)*1]), &(stack[((hsi*32+4474)*1+lsi)*1]), &(stack[((hsi*32+4442)*1+lsi)*1]), &(stack[((hsi*32+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+4200)*1+lsi)*1]),&(stack[((hsi*210+4506)*1+lsi)*1]),210);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_(inteval, &(stack[((hsi*210+4716)*1+lsi)*1]), &(stack[((hsi*32+4474)*1+lsi)*1]), &(stack[((hsi*32+4442)*1+lsi)*1]), &(stack[((hsi*32+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3990)*1+lsi)*1]),&(stack[((hsi*210+4716)*1+lsi)*1]),210);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_(inteval, &(stack[((hsi*210+4926)*1+lsi)*1]), &(stack[((hsi*32+4474)*1+lsi)*1]), &(stack[((hsi*32+4442)*1+lsi)*1]), &(stack[((hsi*32+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3780)*1+lsi)*1]),&(stack[((hsi*210+4926)*1+lsi)*1]),210);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_(inteval, &(stack[((hsi*210+5136)*1+lsi)*1]), &(stack[((hsi*32+4474)*1+lsi)*1]), &(stack[((hsi*32+4442)*1+lsi)*1]), &(stack[((hsi*32+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3570)*1+lsi)*1]),&(stack[((hsi*210+5136)*1+lsi)*1]),210);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_(inteval, &(stack[((hsi*210+5346)*1+lsi)*1]), &(stack[((hsi*32+4474)*1+lsi)*1]), &(stack[((hsi*32+4442)*1+lsi)*1]), &(stack[((hsi*32+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3360)*1+lsi)*1]),&(stack[((hsi*210+5346)*1+lsi)*1]),210);
CR_aB_f__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_(inteval, &(stack[((hsi*210+5556)*1+lsi)*1]), &(stack[((hsi*32+4474)*1+lsi)*1]), &(stack[((hsi*32+4442)*1+lsi)*1]), &(stack[((hsi*32+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3150)*1+lsi)*1]),&(stack[((hsi*210+5556)*1+lsi)*1]),210);
CR_aB_Z4__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*35+4410)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*35+4445)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*35+5766)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*210+5801)*1+lsi)*1]), &(stack[((hsi*35+5766)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2940)*1+lsi)*1]),&(stack[((hsi*210+5801)*1+lsi)*1]),210);
CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*210+6011)*1+lsi)*1]), &(stack[((hsi*35+5766)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2730)*1+lsi)*1]),&(stack[((hsi*210+6011)*1+lsi)*1]),210);
CR_aB_f001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*210+6221)*1+lsi)*1]), &(stack[((hsi*35+5766)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2520)*1+lsi)*1]),&(stack[((hsi*210+6221)*1+lsi)*1]),210);
CR_aB_Z5__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*36+6431)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*36+6467)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*36+6503)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*210+6539)*1+lsi)*1]), &(stack[((hsi*36+6503)*1+lsi)*1]), &(stack[((hsi*36+6467)*1+lsi)*1]), &(stack[((hsi*36+6431)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2310)*1+lsi)*1]),&(stack[((hsi*210+6539)*1+lsi)*1]),210);
CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*210+6749)*1+lsi)*1]), &(stack[((hsi*35+5766)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2100)*1+lsi)*1]),&(stack[((hsi*210+6749)*1+lsi)*1]),210);
CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*210+6959)*1+lsi)*1]), &(stack[((hsi*35+5766)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1890)*1+lsi)*1]),&(stack[((hsi*210+6959)*1+lsi)*1]),210);
CR_aB_f010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*210+7169)*1+lsi)*1]), &(stack[((hsi*35+5766)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1680)*1+lsi)*1]),&(stack[((hsi*210+7169)*1+lsi)*1]),210);
CR_aB_f011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*210+7379)*1+lsi)*1]), &(stack[((hsi*36+6503)*1+lsi)*1]), &(stack[((hsi*36+6467)*1+lsi)*1]), &(stack[((hsi*36+6431)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1470)*1+lsi)*1]),&(stack[((hsi*210+7379)*1+lsi)*1]),210);
CR_aB_f020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*210+7589)*1+lsi)*1]), &(stack[((hsi*36+6503)*1+lsi)*1]), &(stack[((hsi*36+6467)*1+lsi)*1]), &(stack[((hsi*36+6431)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1260)*1+lsi)*1]),&(stack[((hsi*210+7589)*1+lsi)*1]),210);
CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*210+7799)*1+lsi)*1]), &(stack[((hsi*35+5766)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1050)*1+lsi)*1]),&(stack[((hsi*210+7799)*1+lsi)*1]),210);
CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*210+8009)*1+lsi)*1]), &(stack[((hsi*35+5766)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+840)*1+lsi)*1]),&(stack[((hsi*210+8009)*1+lsi)*1]),210);
CR_aB_f100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*210+8219)*1+lsi)*1]), &(stack[((hsi*35+5766)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+630)*1+lsi)*1]),&(stack[((hsi*210+8219)*1+lsi)*1]),210);
CR_aB_f101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*210+8429)*1+lsi)*1]), &(stack[((hsi*36+6503)*1+lsi)*1]), &(stack[((hsi*36+6467)*1+lsi)*1]), &(stack[((hsi*36+6431)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+420)*1+lsi)*1]),&(stack[((hsi*210+8429)*1+lsi)*1]),210);
CR_aB_f110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*210+8639)*1+lsi)*1]), &(stack[((hsi*36+6503)*1+lsi)*1]), &(stack[((hsi*36+6467)*1+lsi)*1]), &(stack[((hsi*36+6431)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+210)*1+lsi)*1]),&(stack[((hsi*210+8639)*1+lsi)*1]),210);
CR_aB_f200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*210+8849)*1+lsi)*1]), &(stack[((hsi*36+6503)*1+lsi)*1]), &(stack[((hsi*36+6467)*1+lsi)*1]), &(stack[((hsi*36+6431)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+0)*1+lsi)*1]),&(stack[((hsi*210+8849)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4410 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
