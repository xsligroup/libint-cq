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
#include <CR_aB_X4__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_f__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_f__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_f__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_f001__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_f010__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_f100__0___Kinetic_g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv1_F_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z4__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*35+900)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*35+935)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*35+970)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*150+1005)*1+lsi)*1]), &(stack[((hsi*35+970)*1+lsi)*1]), &(stack[((hsi*35+935)*1+lsi)*1]), &(stack[((hsi*35+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+750)*1+lsi)*1]),&(stack[((hsi*150+1005)*1+lsi)*1]),150);
CR_aB_f__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*150+1155)*1+lsi)*1]), &(stack[((hsi*35+970)*1+lsi)*1]), &(stack[((hsi*35+935)*1+lsi)*1]), &(stack[((hsi*35+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+600)*1+lsi)*1]),&(stack[((hsi*150+1155)*1+lsi)*1]),150);
CR_aB_f__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*150+1305)*1+lsi)*1]), &(stack[((hsi*35+970)*1+lsi)*1]), &(stack[((hsi*35+935)*1+lsi)*1]), &(stack[((hsi*35+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+450)*1+lsi)*1]),&(stack[((hsi*150+1305)*1+lsi)*1]),150);
CR_aB_Z5__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*36+900)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*36+936)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*36+1455)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_f001__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*150+1491)*1+lsi)*1]), &(stack[((hsi*36+1455)*1+lsi)*1]), &(stack[((hsi*36+936)*1+lsi)*1]), &(stack[((hsi*36+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+300)*1+lsi)*1]),&(stack[((hsi*150+1491)*1+lsi)*1]),150);
CR_aB_f010__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*150+1641)*1+lsi)*1]), &(stack[((hsi*36+1455)*1+lsi)*1]), &(stack[((hsi*36+936)*1+lsi)*1]), &(stack[((hsi*36+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+150)*1+lsi)*1]),&(stack[((hsi*150+1641)*1+lsi)*1]),150);
CR_aB_f100__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*150+1791)*1+lsi)*1]), &(stack[((hsi*36+1455)*1+lsi)*1]), &(stack[((hsi*36+936)*1+lsi)*1]), &(stack[((hsi*36+900)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*150+0)*1+lsi)*1]),&(stack[((hsi*150+1791)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 900 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
