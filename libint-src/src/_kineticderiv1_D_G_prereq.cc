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
#include <CR_aB_X3__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_d001__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_d010__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_d100__0___Kinetic_g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _kineticderiv1_D_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*28+540)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*28+568)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*28+596)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*90+624)*1+lsi)*1]), &(stack[((hsi*28+596)*1+lsi)*1]), &(stack[((hsi*28+568)*1+lsi)*1]), &(stack[((hsi*28+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+450)*1+lsi)*1]),&(stack[((hsi*90+624)*1+lsi)*1]),90);
CR_aB_d__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*90+714)*1+lsi)*1]), &(stack[((hsi*28+596)*1+lsi)*1]), &(stack[((hsi*28+568)*1+lsi)*1]), &(stack[((hsi*28+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+360)*1+lsi)*1]),&(stack[((hsi*90+714)*1+lsi)*1]),90);
CR_aB_d__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*90+804)*1+lsi)*1]), &(stack[((hsi*28+596)*1+lsi)*1]), &(stack[((hsi*28+568)*1+lsi)*1]), &(stack[((hsi*28+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+270)*1+lsi)*1]),&(stack[((hsi*90+804)*1+lsi)*1]),90);
CR_aB_Z4__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*30+540)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*30+570)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*30+894)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d001__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*90+924)*1+lsi)*1]), &(stack[((hsi*30+894)*1+lsi)*1]), &(stack[((hsi*30+570)*1+lsi)*1]), &(stack[((hsi*30+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+180)*1+lsi)*1]),&(stack[((hsi*90+924)*1+lsi)*1]),90);
CR_aB_d010__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*90+1014)*1+lsi)*1]), &(stack[((hsi*30+894)*1+lsi)*1]), &(stack[((hsi*30+570)*1+lsi)*1]), &(stack[((hsi*30+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+90)*1+lsi)*1]),&(stack[((hsi*90+1014)*1+lsi)*1]),90);
CR_aB_d100__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*90+1104)*1+lsi)*1]), &(stack[((hsi*30+894)*1+lsi)*1]), &(stack[((hsi*30+570)*1+lsi)*1]), &(stack[((hsi*30+540)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+0)*1+lsi)*1]),&(stack[((hsi*90+1104)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 540 */
}

#ifdef __cplusplus
};
#endif
