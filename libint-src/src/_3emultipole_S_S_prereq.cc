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
#include <CR_aB_X0__0___Overlap_X0__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X1__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X0__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y0__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y1__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y0__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z0__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z1__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z0__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_.h>
#include <CR_aB_s__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void _3emultipole_S_S_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z0__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*4+20)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*4+24)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*4+28)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
LIBINT2_REALTYPE fp19;
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_3_Sb__s__0___Ab__up_(inteval, &(fp19), &(stack[((hsi*4+28)*1+lsi)*1]), &(stack[((hsi*4+24)*1+lsi)*1]), &(stack[((hsi*4+20)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp18;
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_2_Sb__s__0___Ab__up_(inteval, &(fp18), &(stack[((hsi*4+28)*1+lsi)*1]), &(stack[((hsi*4+24)*1+lsi)*1]), &(stack[((hsi*4+20)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp17;
CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_1_Sb__s__0___Ab__up_(inteval, &(fp17), &(stack[((hsi*4+28)*1+lsi)*1]), &(stack[((hsi*4+24)*1+lsi)*1]), &(stack[((hsi*4+20)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp16;
CR_aB_s__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_(inteval, &(fp16), &(stack[((hsi*4+28)*1+lsi)*1]), &(stack[((hsi*4+24)*1+lsi)*1]), &(stack[((hsi*4+20)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp15;
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(fp15), &(stack[((hsi*4+28)*1+lsi)*1]), &(stack[((hsi*4+24)*1+lsi)*1]), &(stack[((hsi*4+20)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp14;
CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(fp14), &(stack[((hsi*4+28)*1+lsi)*1]), &(stack[((hsi*4+24)*1+lsi)*1]), &(stack[((hsi*4+20)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp13;
CR_aB_s__0___CartesianMultipole_sB_1_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp13), &(stack[((hsi*4+28)*1+lsi)*1]), &(stack[((hsi*4+24)*1+lsi)*1]), &(stack[((hsi*4+20)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp12;
CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(fp12), &(stack[((hsi*4+28)*1+lsi)*1]), &(stack[((hsi*4+24)*1+lsi)*1]), &(stack[((hsi*4+20)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp11;
CR_aB_s__0___CartesianMultipole_sB_2_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp11), &(stack[((hsi*4+28)*1+lsi)*1]), &(stack[((hsi*4+24)*1+lsi)*1]), &(stack[((hsi*4+20)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp10;
CR_aB_s__0___CartesianMultipole_sB_3_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(fp10), &(stack[((hsi*4+28)*1+lsi)*1]), &(stack[((hsi*4+24)*1+lsi)*1]), &(stack[((hsi*4+20)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
CR_aB_Z0__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*3+32)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*3+35)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*3+38)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
LIBINT2_REALTYPE fp9;
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_(inteval, &(fp9), &(stack[((hsi*3+38)*1+lsi)*1]), &(stack[((hsi*3+35)*1+lsi)*1]), &(stack[((hsi*3+32)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp8;
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_1_Sb__s__0___Ab__up_(inteval, &(fp8), &(stack[((hsi*3+38)*1+lsi)*1]), &(stack[((hsi*3+35)*1+lsi)*1]), &(stack[((hsi*3+32)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp7;
CR_aB_s__0___CartesianMultipole_sB_0_c_2_c_0_Sb__s__0___Ab__up_(inteval, &(fp7), &(stack[((hsi*3+38)*1+lsi)*1]), &(stack[((hsi*3+35)*1+lsi)*1]), &(stack[((hsi*3+32)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp6;
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(fp6), &(stack[((hsi*3+38)*1+lsi)*1]), &(stack[((hsi*3+35)*1+lsi)*1]), &(stack[((hsi*3+32)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp5;
CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp5), &(stack[((hsi*3+38)*1+lsi)*1]), &(stack[((hsi*3+35)*1+lsi)*1]), &(stack[((hsi*3+32)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp4;
CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(fp4), &(stack[((hsi*3+38)*1+lsi)*1]), &(stack[((hsi*3+35)*1+lsi)*1]), &(stack[((hsi*3+32)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
CR_aB_Z0__0___Overlap_Z1__0___Ab__up_(inteval, &(stack[((hsi*2+41)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y0__0___Overlap_Y1__0___Ab__up_(inteval, &(stack[((hsi*2+43)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X0__0___Overlap_X1__0___Ab__up_(inteval, &(stack[((hsi*2+45)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
LIBINT2_REALTYPE fp3;
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_1_Sb__s__0___Ab__up_(inteval, &(fp3), &(stack[((hsi*2+45)*1+lsi)*1]), &(stack[((hsi*2+43)*1+lsi)*1]), &(stack[((hsi*2+41)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp2;
CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__s__0___Ab__up_(inteval, &(fp2), &(stack[((hsi*2+45)*1+lsi)*1]), &(stack[((hsi*2+43)*1+lsi)*1]), &(stack[((hsi*2+41)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp1;
CR_aB_s__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(fp1), &(stack[((hsi*2+45)*1+lsi)*1]), &(stack[((hsi*2+43)*1+lsi)*1]), &(stack[((hsi*2+41)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp22;
CR_aB_Z0__0___Overlap_Z0__0___Ab__up_(inteval, &(fp22), &(inteval->_0_Overlap_0_z[vi]));
LIBINT2_REALTYPE fp21;
CR_aB_Y0__0___Overlap_Y0__0___Ab__up_(inteval, &(fp21), &(inteval->_0_Overlap_0_y[vi]));
LIBINT2_REALTYPE fp20;
CR_aB_X0__0___Overlap_X0__0___Ab__up_(inteval, &(fp20), &(inteval->_0_Overlap_0_x[vi]));
LIBINT2_REALTYPE fp0;
CR_aB_s__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(inteval, &(fp0), &(fp20), &(fp21), &(fp22));
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 20 */
}

#ifdef __cplusplus
};
#endif
