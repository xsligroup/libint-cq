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
#include <CR_aB_X1__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X2__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y2__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z2__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_s001__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_s010__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_s100__0___Kinetic_g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _kineticderiv1_S_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*14+90)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*14+104)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*14+118)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*15+132)*1+lsi)*1]), &(stack[((hsi*14+118)*1+lsi)*1]), &(stack[((hsi*14+104)*1+lsi)*1]), &(stack[((hsi*14+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+75)*1+lsi)*1]),&(stack[((hsi*15+132)*1+lsi)*1]),15);
CR_aB_s__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*15+147)*1+lsi)*1]), &(stack[((hsi*14+118)*1+lsi)*1]), &(stack[((hsi*14+104)*1+lsi)*1]), &(stack[((hsi*14+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+60)*1+lsi)*1]),&(stack[((hsi*15+147)*1+lsi)*1]),15);
CR_aB_s__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*15+162)*1+lsi)*1]), &(stack[((hsi*14+118)*1+lsi)*1]), &(stack[((hsi*14+104)*1+lsi)*1]), &(stack[((hsi*14+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+45)*1+lsi)*1]),&(stack[((hsi*15+162)*1+lsi)*1]),15);
CR_aB_Z2__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*18+90)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y2__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*18+108)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X2__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*18+177)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s001__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*15+195)*1+lsi)*1]), &(stack[((hsi*18+177)*1+lsi)*1]), &(stack[((hsi*18+108)*1+lsi)*1]), &(stack[((hsi*18+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+30)*1+lsi)*1]),&(stack[((hsi*15+195)*1+lsi)*1]),15);
CR_aB_s010__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*15+210)*1+lsi)*1]), &(stack[((hsi*18+177)*1+lsi)*1]), &(stack[((hsi*18+108)*1+lsi)*1]), &(stack[((hsi*18+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+15)*1+lsi)*1]),&(stack[((hsi*15+210)*1+lsi)*1]),15);
CR_aB_s100__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*15+225)*1+lsi)*1]), &(stack[((hsi*18+177)*1+lsi)*1]), &(stack[((hsi*18+108)*1+lsi)*1]), &(stack[((hsi*18+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(stack[((hsi*15+225)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 90 */
}

#ifdef __cplusplus
};
#endif
