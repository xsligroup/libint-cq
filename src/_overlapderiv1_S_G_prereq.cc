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
#include <CR_aB_X0__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X1__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv1_S_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z0__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*6+90)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*6+96)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*6+102)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*15+108)*1+lsi)*1]), &(stack[((hsi*6+102)*1+lsi)*1]), &(stack[((hsi*6+96)*1+lsi)*1]), &(stack[((hsi*6+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+75)*1+lsi)*1]),&(stack[((hsi*15+108)*1+lsi)*1]),15);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*15+123)*1+lsi)*1]), &(stack[((hsi*6+102)*1+lsi)*1]), &(stack[((hsi*6+96)*1+lsi)*1]), &(stack[((hsi*6+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+60)*1+lsi)*1]),&(stack[((hsi*15+123)*1+lsi)*1]),15);
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*15+138)*1+lsi)*1]), &(stack[((hsi*6+102)*1+lsi)*1]), &(stack[((hsi*6+96)*1+lsi)*1]), &(stack[((hsi*6+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+45)*1+lsi)*1]),&(stack[((hsi*15+138)*1+lsi)*1]),15);
CR_aB_Z1__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*10+90)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*10+153)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*10+163)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*15+173)*1+lsi)*1]), &(stack[((hsi*10+163)*1+lsi)*1]), &(stack[((hsi*10+153)*1+lsi)*1]), &(stack[((hsi*10+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+30)*1+lsi)*1]),&(stack[((hsi*15+173)*1+lsi)*1]),15);
CR_aB_s010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*15+188)*1+lsi)*1]), &(stack[((hsi*10+163)*1+lsi)*1]), &(stack[((hsi*10+153)*1+lsi)*1]), &(stack[((hsi*10+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+15)*1+lsi)*1]),&(stack[((hsi*15+188)*1+lsi)*1]),15);
CR_aB_s100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*15+203)*1+lsi)*1]), &(stack[((hsi*10+163)*1+lsi)*1]), &(stack[((hsi*10+153)*1+lsi)*1]), &(stack[((hsi*10+90)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*15+0)*1+lsi)*1]),&(stack[((hsi*15+203)*1+lsi)*1]),15);
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
