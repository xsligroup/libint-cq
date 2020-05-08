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
#include <CR_aB_X2__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X3__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_p__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_p001__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_p010__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_p100__0___Kinetic_g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _kineticderiv1_P_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z2__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*21+270)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*21+291)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*21+312)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*45+333)*1+lsi)*1]), &(stack[((hsi*21+312)*1+lsi)*1]), &(stack[((hsi*21+291)*1+lsi)*1]), &(stack[((hsi*21+270)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+225)*1+lsi)*1]),&(stack[((hsi*45+333)*1+lsi)*1]),45);
CR_aB_p__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*45+378)*1+lsi)*1]), &(stack[((hsi*21+312)*1+lsi)*1]), &(stack[((hsi*21+291)*1+lsi)*1]), &(stack[((hsi*21+270)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+180)*1+lsi)*1]),&(stack[((hsi*45+378)*1+lsi)*1]),45);
CR_aB_p__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*45+423)*1+lsi)*1]), &(stack[((hsi*21+312)*1+lsi)*1]), &(stack[((hsi*21+291)*1+lsi)*1]), &(stack[((hsi*21+270)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+135)*1+lsi)*1]),&(stack[((hsi*45+423)*1+lsi)*1]),45);
CR_aB_Z3__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*24+270)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*24+294)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*24+468)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_p001__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*45+492)*1+lsi)*1]), &(stack[((hsi*24+468)*1+lsi)*1]), &(stack[((hsi*24+294)*1+lsi)*1]), &(stack[((hsi*24+270)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+90)*1+lsi)*1]),&(stack[((hsi*45+492)*1+lsi)*1]),45);
CR_aB_p010__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*45+537)*1+lsi)*1]), &(stack[((hsi*24+468)*1+lsi)*1]), &(stack[((hsi*24+294)*1+lsi)*1]), &(stack[((hsi*24+270)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+45)*1+lsi)*1]),&(stack[((hsi*45+537)*1+lsi)*1]),45);
CR_aB_p100__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*45+582)*1+lsi)*1]), &(stack[((hsi*24+468)*1+lsi)*1]), &(stack[((hsi*24+294)*1+lsi)*1]), &(stack[((hsi*24+270)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+0)*1+lsi)*1]),&(stack[((hsi*45+582)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 270 */
}

#ifdef __cplusplus
};
#endif
