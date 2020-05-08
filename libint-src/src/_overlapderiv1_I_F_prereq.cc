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
#include <CR_aB_X6__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_.h>
#include <CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_.h>
#include <CR_aB_i001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_i010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <CR_aB_i100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _overlapderiv1_I_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*35+1680)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*35+1715)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*35+1750)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f001__0___Ab__up_(inteval, &(stack[((hsi*280+1785)*1+lsi)*1]), &(stack[((hsi*35+1750)*1+lsi)*1]), &(stack[((hsi*35+1715)*1+lsi)*1]), &(stack[((hsi*35+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+1400)*1+lsi)*1]),&(stack[((hsi*280+1785)*1+lsi)*1]),280);
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f010__0___Ab__up_(inteval, &(stack[((hsi*280+2065)*1+lsi)*1]), &(stack[((hsi*35+1750)*1+lsi)*1]), &(stack[((hsi*35+1715)*1+lsi)*1]), &(stack[((hsi*35+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+1120)*1+lsi)*1]),&(stack[((hsi*280+2065)*1+lsi)*1]),280);
CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f100__0___Ab__up_(inteval, &(stack[((hsi*280+2345)*1+lsi)*1]), &(stack[((hsi*35+1750)*1+lsi)*1]), &(stack[((hsi*35+1715)*1+lsi)*1]), &(stack[((hsi*35+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+840)*1+lsi)*1]),&(stack[((hsi*280+2345)*1+lsi)*1]),280);
CR_aB_Z7__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*32+1680)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*32+1712)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*32+1744)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_i001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*280+2625)*1+lsi)*1]), &(stack[((hsi*32+1744)*1+lsi)*1]), &(stack[((hsi*32+1712)*1+lsi)*1]), &(stack[((hsi*32+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+560)*1+lsi)*1]),&(stack[((hsi*280+2625)*1+lsi)*1]),280);
CR_aB_i010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*280+2905)*1+lsi)*1]), &(stack[((hsi*32+1744)*1+lsi)*1]), &(stack[((hsi*32+1712)*1+lsi)*1]), &(stack[((hsi*32+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+280)*1+lsi)*1]),&(stack[((hsi*280+2905)*1+lsi)*1]),280);
CR_aB_i100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__f__0___Ab__up_(inteval, &(stack[((hsi*280+3185)*1+lsi)*1]), &(stack[((hsi*32+1744)*1+lsi)*1]), &(stack[((hsi*32+1712)*1+lsi)*1]), &(stack[((hsi*32+1680)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*280+0)*1+lsi)*1]),&(stack[((hsi*280+3185)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1680 */
}

#ifdef __cplusplus
};
#endif
