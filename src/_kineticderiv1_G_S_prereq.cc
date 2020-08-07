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
#include <CR_aB_X5__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_s001__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_s010__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_s100__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_s__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_s__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv1_G_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*18+90)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*18+108)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*18+126)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___Kinetic_s001__0___Ab__up_(inteval, &(stack[((hsi*15+144)*1+lsi)*1]), &(stack[((hsi*18+126)*1+lsi)*1]), &(stack[((hsi*18+108)*1+lsi)*1]), &(stack[((hsi*18+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+75)*1+lsi)*1]),&(stack[((hsi*15+144)*1+lsi)*1]),15);
CR_aB_g__0___Kinetic_s010__0___Ab__up_(inteval, &(stack[((hsi*15+159)*1+lsi)*1]), &(stack[((hsi*18+126)*1+lsi)*1]), &(stack[((hsi*18+108)*1+lsi)*1]), &(stack[((hsi*18+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+60)*1+lsi)*1]),&(stack[((hsi*15+159)*1+lsi)*1]),15);
CR_aB_g__0___Kinetic_s100__0___Ab__up_(inteval, &(stack[((hsi*15+174)*1+lsi)*1]), &(stack[((hsi*18+126)*1+lsi)*1]), &(stack[((hsi*18+108)*1+lsi)*1]), &(stack[((hsi*18+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+45)*1+lsi)*1]),&(stack[((hsi*15+174)*1+lsi)*1]),15);
CR_aB_Z6__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*14+90)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*14+104)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*14+118)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*15+189)*1+lsi)*1]), &(stack[((hsi*14+118)*1+lsi)*1]), &(stack[((hsi*14+104)*1+lsi)*1]), &(stack[((hsi*14+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+30)*1+lsi)*1]),&(stack[((hsi*15+189)*1+lsi)*1]),15);
CR_aB_g010__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*15+204)*1+lsi)*1]), &(stack[((hsi*14+118)*1+lsi)*1]), &(stack[((hsi*14+104)*1+lsi)*1]), &(stack[((hsi*14+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+15)*1+lsi)*1]),&(stack[((hsi*15+204)*1+lsi)*1]),15);
CR_aB_g100__0___Kinetic_s__0___Ab__up_(inteval, &(stack[((hsi*15+219)*1+lsi)*1]), &(stack[((hsi*14+118)*1+lsi)*1]), &(stack[((hsi*14+104)*1+lsi)*1]), &(stack[((hsi*14+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(stack[((hsi*15+219)*1+lsi)*1]),15);
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
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
