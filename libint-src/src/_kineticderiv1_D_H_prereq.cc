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
#include <CR_aB_Y3__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_d001__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_d010__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_d100__0___Kinetic_h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _kineticderiv1_D_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*32+756)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*32+788)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*32+820)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*126+852)*1+lsi)*1]), &(stack[((hsi*32+820)*1+lsi)*1]), &(stack[((hsi*32+788)*1+lsi)*1]), &(stack[((hsi*32+756)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+630)*1+lsi)*1]),&(stack[((hsi*126+852)*1+lsi)*1]),126);
CR_aB_d__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*126+978)*1+lsi)*1]), &(stack[((hsi*32+820)*1+lsi)*1]), &(stack[((hsi*32+788)*1+lsi)*1]), &(stack[((hsi*32+756)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+504)*1+lsi)*1]),&(stack[((hsi*126+978)*1+lsi)*1]),126);
CR_aB_d__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*126+1104)*1+lsi)*1]), &(stack[((hsi*32+820)*1+lsi)*1]), &(stack[((hsi*32+788)*1+lsi)*1]), &(stack[((hsi*32+756)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+378)*1+lsi)*1]),&(stack[((hsi*126+1104)*1+lsi)*1]),126);
CR_aB_Z4__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*35+756)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*35+791)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*35+1230)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d001__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*126+1265)*1+lsi)*1]), &(stack[((hsi*35+1230)*1+lsi)*1]), &(stack[((hsi*35+791)*1+lsi)*1]), &(stack[((hsi*35+756)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+252)*1+lsi)*1]),&(stack[((hsi*126+1265)*1+lsi)*1]),126);
CR_aB_d010__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*126+1391)*1+lsi)*1]), &(stack[((hsi*35+1230)*1+lsi)*1]), &(stack[((hsi*35+791)*1+lsi)*1]), &(stack[((hsi*35+756)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+126)*1+lsi)*1]),&(stack[((hsi*126+1391)*1+lsi)*1]),126);
CR_aB_d100__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*126+1517)*1+lsi)*1]), &(stack[((hsi*35+1230)*1+lsi)*1]), &(stack[((hsi*35+791)*1+lsi)*1]), &(stack[((hsi*35+756)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+0)*1+lsi)*1]),&(stack[((hsi*126+1517)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 756 */
}

#ifdef __cplusplus
};
#endif
