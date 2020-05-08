/*
 *  Copyright (C) 2004-2018 Edward F. Valeev
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
#include <CR_aB_X0__0___Overlap_X0__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _1emultipole_S_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z0__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*2+4)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*2+6)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*2+8)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
LIBINT2_REALTYPE fp3;
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(fp3), &(stack[((hsi*2+8)*1+lsi)*1]), &(stack[((hsi*2+6)*1+lsi)*1]), &(stack[((hsi*2+4)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp2;
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp2), &(stack[((hsi*2+8)*1+lsi)*1]), &(stack[((hsi*2+6)*1+lsi)*1]), &(stack[((hsi*2+4)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp1;
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(fp1), &(stack[((hsi*2+8)*1+lsi)*1]), &(stack[((hsi*2+6)*1+lsi)*1]), &(stack[((hsi*2+4)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp6;
CR_aB_Z0__0___Overlap_Z0__0___Ab__up_(inteval, &(fp6), &(inteval->_0_Overlap_0_z[vi]));
LIBINT2_REALTYPE fp5;
CR_aB_Y0__0___Overlap_Y0__0___Ab__up_(inteval, &(fp5), &(inteval->_0_Overlap_0_y[vi]));
LIBINT2_REALTYPE fp4;
CR_aB_X0__0___Overlap_X0__0___Ab__up_(inteval, &(fp4), &(inteval->_0_Overlap_0_x[vi]));
LIBINT2_REALTYPE fp0;
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(fp0), &(fp4), &(fp5), &(fp6));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4 */
}

#ifdef __cplusplus
};
#endif
