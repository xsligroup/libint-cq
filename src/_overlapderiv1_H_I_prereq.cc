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
#include <CR_aB_X5__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i001__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i010__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i100__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv1_H_I_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*48+3528)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*48+3576)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*48+3624)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i001__0___Ab__up_(inteval, &(stack[((hsi*588+3672)*1+lsi)*1]), &(stack[((hsi*48+3624)*1+lsi)*1]), &(stack[((hsi*48+3576)*1+lsi)*1]), &(stack[((hsi*48+3528)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*588+2940)*1+lsi)*1]),&(stack[((hsi*588+3672)*1+lsi)*1]),588);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i010__0___Ab__up_(inteval, &(stack[((hsi*588+4260)*1+lsi)*1]), &(stack[((hsi*48+3624)*1+lsi)*1]), &(stack[((hsi*48+3576)*1+lsi)*1]), &(stack[((hsi*48+3528)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*588+2352)*1+lsi)*1]),&(stack[((hsi*588+4260)*1+lsi)*1]),588);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i100__0___Ab__up_(inteval, &(stack[((hsi*588+4848)*1+lsi)*1]), &(stack[((hsi*48+3624)*1+lsi)*1]), &(stack[((hsi*48+3576)*1+lsi)*1]), &(stack[((hsi*48+3528)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*588+1764)*1+lsi)*1]),&(stack[((hsi*588+4848)*1+lsi)*1]),588);
CR_aB_Z6__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*49+3528)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*49+3577)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*49+5436)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*588+5485)*1+lsi)*1]), &(stack[((hsi*49+5436)*1+lsi)*1]), &(stack[((hsi*49+3577)*1+lsi)*1]), &(stack[((hsi*49+3528)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*588+1176)*1+lsi)*1]),&(stack[((hsi*588+5485)*1+lsi)*1]),588);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*588+6073)*1+lsi)*1]), &(stack[((hsi*49+5436)*1+lsi)*1]), &(stack[((hsi*49+3577)*1+lsi)*1]), &(stack[((hsi*49+3528)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*588+588)*1+lsi)*1]),&(stack[((hsi*588+6073)*1+lsi)*1]),588);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__i__0___Ab__up_(inteval, &(stack[((hsi*588+6661)*1+lsi)*1]), &(stack[((hsi*49+5436)*1+lsi)*1]), &(stack[((hsi*49+3577)*1+lsi)*1]), &(stack[((hsi*49+3528)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*588+0)*1+lsi)*1]),&(stack[((hsi*588+6661)*1+lsi)*1]),588);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3528 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
