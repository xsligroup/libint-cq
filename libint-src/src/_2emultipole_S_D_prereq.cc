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
#include <CR_aB_X0__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _2emultipole_S_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z0__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*5+60)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*5+65)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*5+70)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*6+75)*1+lsi)*1]), &(stack[((hsi*5+70)*1+lsi)*1]), &(stack[((hsi*5+65)*1+lsi)*1]), &(stack[((hsi*5+60)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+54)*1+lsi)*1]),&(stack[((hsi*6+75)*1+lsi)*1]),6);
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*6+81)*1+lsi)*1]), &(stack[((hsi*5+70)*1+lsi)*1]), &(stack[((hsi*5+65)*1+lsi)*1]), &(stack[((hsi*5+60)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+48)*1+lsi)*1]),&(stack[((hsi*6+81)*1+lsi)*1]),6);
CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*6+87)*1+lsi)*1]), &(stack[((hsi*5+70)*1+lsi)*1]), &(stack[((hsi*5+65)*1+lsi)*1]), &(stack[((hsi*5+60)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+42)*1+lsi)*1]),&(stack[((hsi*6+87)*1+lsi)*1]),6);
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*6+93)*1+lsi)*1]), &(stack[((hsi*5+70)*1+lsi)*1]), &(stack[((hsi*5+65)*1+lsi)*1]), &(stack[((hsi*5+60)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+36)*1+lsi)*1]),&(stack[((hsi*6+93)*1+lsi)*1]),6);
CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*6+99)*1+lsi)*1]), &(stack[((hsi*5+70)*1+lsi)*1]), &(stack[((hsi*5+65)*1+lsi)*1]), &(stack[((hsi*5+60)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+30)*1+lsi)*1]),&(stack[((hsi*6+99)*1+lsi)*1]),6);
CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*6+105)*1+lsi)*1]), &(stack[((hsi*5+70)*1+lsi)*1]), &(stack[((hsi*5+65)*1+lsi)*1]), &(stack[((hsi*5+60)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+24)*1+lsi)*1]),&(stack[((hsi*6+105)*1+lsi)*1]),6);
CR_aB_Z0__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*4+60)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*4+64)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*4+68)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*6+111)*1+lsi)*1]), &(stack[((hsi*4+68)*1+lsi)*1]), &(stack[((hsi*4+64)*1+lsi)*1]), &(stack[((hsi*4+60)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+18)*1+lsi)*1]),&(stack[((hsi*6+111)*1+lsi)*1]),6);
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*6+117)*1+lsi)*1]), &(stack[((hsi*4+68)*1+lsi)*1]), &(stack[((hsi*4+64)*1+lsi)*1]), &(stack[((hsi*4+60)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+12)*1+lsi)*1]),&(stack[((hsi*6+117)*1+lsi)*1]),6);
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*6+123)*1+lsi)*1]), &(stack[((hsi*4+68)*1+lsi)*1]), &(stack[((hsi*4+64)*1+lsi)*1]), &(stack[((hsi*4+60)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+6)*1+lsi)*1]),&(stack[((hsi*6+123)*1+lsi)*1]),6);
CR_aB_Z0__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*3+60)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*3+63)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*3+66)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*6+69)*1+lsi)*1]), &(stack[((hsi*3+66)*1+lsi)*1]), &(stack[((hsi*3+63)*1+lsi)*1]), &(stack[((hsi*3+60)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*6+0)*1+lsi)*1]),&(stack[((hsi*6+69)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 60 */
}

#ifdef __cplusplus
};
#endif
