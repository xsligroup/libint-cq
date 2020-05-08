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
#include <CR_aB_X7__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X8__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_.h>
#include <CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_.h>
#include <CR_aB_k001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_k010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <CR_aB_k100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _overlapderiv1_K_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z7__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*48+3240)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*48+3288)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*48+3336)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g001__0___Ab__up_(inteval, &(stack[((hsi*540+3384)*1+lsi)*1]), &(stack[((hsi*48+3336)*1+lsi)*1]), &(stack[((hsi*48+3288)*1+lsi)*1]), &(stack[((hsi*48+3240)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+2700)*1+lsi)*1]),&(stack[((hsi*540+3384)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g010__0___Ab__up_(inteval, &(stack[((hsi*540+3924)*1+lsi)*1]), &(stack[((hsi*48+3336)*1+lsi)*1]), &(stack[((hsi*48+3288)*1+lsi)*1]), &(stack[((hsi*48+3240)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+2160)*1+lsi)*1]),&(stack[((hsi*540+3924)*1+lsi)*1]),540);
CR_aB_k__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g100__0___Ab__up_(inteval, &(stack[((hsi*540+4464)*1+lsi)*1]), &(stack[((hsi*48+3336)*1+lsi)*1]), &(stack[((hsi*48+3288)*1+lsi)*1]), &(stack[((hsi*48+3240)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+1620)*1+lsi)*1]),&(stack[((hsi*540+4464)*1+lsi)*1]),540);
CR_aB_Z8__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*45+3240)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*45+3285)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*45+3330)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_k001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+5004)*1+lsi)*1]), &(stack[((hsi*45+3330)*1+lsi)*1]), &(stack[((hsi*45+3285)*1+lsi)*1]), &(stack[((hsi*45+3240)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+1080)*1+lsi)*1]),&(stack[((hsi*540+5004)*1+lsi)*1]),540);
CR_aB_k010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+5544)*1+lsi)*1]), &(stack[((hsi*45+3330)*1+lsi)*1]), &(stack[((hsi*45+3285)*1+lsi)*1]), &(stack[((hsi*45+3240)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+540)*1+lsi)*1]),&(stack[((hsi*540+5544)*1+lsi)*1]),540);
CR_aB_k100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__g__0___Ab__up_(inteval, &(stack[((hsi*540+6084)*1+lsi)*1]), &(stack[((hsi*45+3330)*1+lsi)*1]), &(stack[((hsi*45+3285)*1+lsi)*1]), &(stack[((hsi*45+3240)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*540+0)*1+lsi)*1]),&(stack[((hsi*540+6084)*1+lsi)*1]),540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 3240 */
}

#ifdef __cplusplus
};
#endif