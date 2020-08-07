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
#include <CR_aB_X5__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f002__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f011__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f020__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f101__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f110__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f200__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_.h>
#include <CR_aB_h002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_.h>
#include <CR_aB_h011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_h020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_.h>
#include <CR_aB_h101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_h110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_h200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_H_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*36+4410)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*36+4446)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*36+4482)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f002__0___Ab__up_(inteval, &(stack[((hsi*210+4518)*1+lsi)*1]), &(stack[((hsi*36+4482)*1+lsi)*1]), &(stack[((hsi*36+4446)*1+lsi)*1]), &(stack[((hsi*36+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+4200)*1+lsi)*1]),&(stack[((hsi*210+4518)*1+lsi)*1]),210);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f011__0___Ab__up_(inteval, &(stack[((hsi*210+4728)*1+lsi)*1]), &(stack[((hsi*36+4482)*1+lsi)*1]), &(stack[((hsi*36+4446)*1+lsi)*1]), &(stack[((hsi*36+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3990)*1+lsi)*1]),&(stack[((hsi*210+4728)*1+lsi)*1]),210);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f020__0___Ab__up_(inteval, &(stack[((hsi*210+4938)*1+lsi)*1]), &(stack[((hsi*36+4482)*1+lsi)*1]), &(stack[((hsi*36+4446)*1+lsi)*1]), &(stack[((hsi*36+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3780)*1+lsi)*1]),&(stack[((hsi*210+4938)*1+lsi)*1]),210);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f101__0___Ab__up_(inteval, &(stack[((hsi*210+5148)*1+lsi)*1]), &(stack[((hsi*36+4482)*1+lsi)*1]), &(stack[((hsi*36+4446)*1+lsi)*1]), &(stack[((hsi*36+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3570)*1+lsi)*1]),&(stack[((hsi*210+5148)*1+lsi)*1]),210);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f110__0___Ab__up_(inteval, &(stack[((hsi*210+5358)*1+lsi)*1]), &(stack[((hsi*36+4482)*1+lsi)*1]), &(stack[((hsi*36+4446)*1+lsi)*1]), &(stack[((hsi*36+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3360)*1+lsi)*1]),&(stack[((hsi*210+5358)*1+lsi)*1]),210);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f200__0___Ab__up_(inteval, &(stack[((hsi*210+5568)*1+lsi)*1]), &(stack[((hsi*36+4482)*1+lsi)*1]), &(stack[((hsi*36+4446)*1+lsi)*1]), &(stack[((hsi*36+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3150)*1+lsi)*1]),&(stack[((hsi*210+5568)*1+lsi)*1]),210);
CR_aB_Z6__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*35+4410)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*35+4445)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*35+4480)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_(inteval, &(stack[((hsi*210+5778)*1+lsi)*1]), &(stack[((hsi*35+4480)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2940)*1+lsi)*1]),&(stack[((hsi*210+5778)*1+lsi)*1]),210);
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_(inteval, &(stack[((hsi*210+5988)*1+lsi)*1]), &(stack[((hsi*35+4480)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2730)*1+lsi)*1]),&(stack[((hsi*210+5988)*1+lsi)*1]),210);
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_(inteval, &(stack[((hsi*210+6198)*1+lsi)*1]), &(stack[((hsi*35+4480)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2520)*1+lsi)*1]),&(stack[((hsi*210+6198)*1+lsi)*1]),210);
CR_aB_Z7__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*32+6408)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*32+6440)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*32+6472)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*210+6504)*1+lsi)*1]), &(stack[((hsi*32+6472)*1+lsi)*1]), &(stack[((hsi*32+6440)*1+lsi)*1]), &(stack[((hsi*32+6408)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2310)*1+lsi)*1]),&(stack[((hsi*210+6504)*1+lsi)*1]),210);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_(inteval, &(stack[((hsi*210+6714)*1+lsi)*1]), &(stack[((hsi*35+4480)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2100)*1+lsi)*1]),&(stack[((hsi*210+6714)*1+lsi)*1]),210);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_(inteval, &(stack[((hsi*210+6924)*1+lsi)*1]), &(stack[((hsi*35+4480)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1890)*1+lsi)*1]),&(stack[((hsi*210+6924)*1+lsi)*1]),210);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_(inteval, &(stack[((hsi*210+7134)*1+lsi)*1]), &(stack[((hsi*35+4480)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1680)*1+lsi)*1]),&(stack[((hsi*210+7134)*1+lsi)*1]),210);
CR_aB_h011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*210+7344)*1+lsi)*1]), &(stack[((hsi*32+6472)*1+lsi)*1]), &(stack[((hsi*32+6440)*1+lsi)*1]), &(stack[((hsi*32+6408)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1470)*1+lsi)*1]),&(stack[((hsi*210+7344)*1+lsi)*1]),210);
CR_aB_h020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*210+7554)*1+lsi)*1]), &(stack[((hsi*32+6472)*1+lsi)*1]), &(stack[((hsi*32+6440)*1+lsi)*1]), &(stack[((hsi*32+6408)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1260)*1+lsi)*1]),&(stack[((hsi*210+7554)*1+lsi)*1]),210);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_(inteval, &(stack[((hsi*210+7764)*1+lsi)*1]), &(stack[((hsi*35+4480)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1050)*1+lsi)*1]),&(stack[((hsi*210+7764)*1+lsi)*1]),210);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_(inteval, &(stack[((hsi*210+7974)*1+lsi)*1]), &(stack[((hsi*35+4480)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+840)*1+lsi)*1]),&(stack[((hsi*210+7974)*1+lsi)*1]),210);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_(inteval, &(stack[((hsi*210+8184)*1+lsi)*1]), &(stack[((hsi*35+4480)*1+lsi)*1]), &(stack[((hsi*35+4445)*1+lsi)*1]), &(stack[((hsi*35+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+630)*1+lsi)*1]),&(stack[((hsi*210+8184)*1+lsi)*1]),210);
CR_aB_h101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*210+8394)*1+lsi)*1]), &(stack[((hsi*32+6472)*1+lsi)*1]), &(stack[((hsi*32+6440)*1+lsi)*1]), &(stack[((hsi*32+6408)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+420)*1+lsi)*1]),&(stack[((hsi*210+8394)*1+lsi)*1]),210);
CR_aB_h110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*210+8604)*1+lsi)*1]), &(stack[((hsi*32+6472)*1+lsi)*1]), &(stack[((hsi*32+6440)*1+lsi)*1]), &(stack[((hsi*32+6408)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+210)*1+lsi)*1]),&(stack[((hsi*210+8604)*1+lsi)*1]),210);
CR_aB_h200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*210+8814)*1+lsi)*1]), &(stack[((hsi*32+6472)*1+lsi)*1]), &(stack[((hsi*32+6440)*1+lsi)*1]), &(stack[((hsi*32+6408)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+0)*1+lsi)*1]),&(stack[((hsi*210+8814)*1+lsi)*1]),210);
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
