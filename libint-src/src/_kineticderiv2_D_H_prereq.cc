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
#include <CR_aB_X3__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_h002__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_h011__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_h020__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_h101__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_h110__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_h200__0___Ab__up_.h>
#include <CR_aB_d001__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_d001__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_d001__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_d002__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_d010__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_d010__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_d010__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_d011__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_d020__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_d100__0___Kinetic_h001__0___Ab__up_.h>
#include <CR_aB_d100__0___Kinetic_h010__0___Ab__up_.h>
#include <CR_aB_d100__0___Kinetic_h100__0___Ab__up_.h>
#include <CR_aB_d101__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_d110__0___Kinetic_h__0___Ab__up_.h>
#include <CR_aB_d200__0___Kinetic_h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_D_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*36+2646)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*36+2682)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*36+2718)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___Kinetic_h002__0___Ab__up_(inteval, &(stack[((hsi*126+2754)*1+lsi)*1]), &(stack[((hsi*36+2718)*1+lsi)*1]), &(stack[((hsi*36+2682)*1+lsi)*1]), &(stack[((hsi*36+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2520)*1+lsi)*1]),&(stack[((hsi*126+2754)*1+lsi)*1]),126);
CR_aB_d__0___Kinetic_h011__0___Ab__up_(inteval, &(stack[((hsi*126+2880)*1+lsi)*1]), &(stack[((hsi*36+2718)*1+lsi)*1]), &(stack[((hsi*36+2682)*1+lsi)*1]), &(stack[((hsi*36+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2394)*1+lsi)*1]),&(stack[((hsi*126+2880)*1+lsi)*1]),126);
CR_aB_d__0___Kinetic_h020__0___Ab__up_(inteval, &(stack[((hsi*126+3006)*1+lsi)*1]), &(stack[((hsi*36+2718)*1+lsi)*1]), &(stack[((hsi*36+2682)*1+lsi)*1]), &(stack[((hsi*36+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2268)*1+lsi)*1]),&(stack[((hsi*126+3006)*1+lsi)*1]),126);
CR_aB_d__0___Kinetic_h101__0___Ab__up_(inteval, &(stack[((hsi*126+3132)*1+lsi)*1]), &(stack[((hsi*36+2718)*1+lsi)*1]), &(stack[((hsi*36+2682)*1+lsi)*1]), &(stack[((hsi*36+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2142)*1+lsi)*1]),&(stack[((hsi*126+3132)*1+lsi)*1]),126);
CR_aB_d__0___Kinetic_h110__0___Ab__up_(inteval, &(stack[((hsi*126+3258)*1+lsi)*1]), &(stack[((hsi*36+2718)*1+lsi)*1]), &(stack[((hsi*36+2682)*1+lsi)*1]), &(stack[((hsi*36+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+2016)*1+lsi)*1]),&(stack[((hsi*126+3258)*1+lsi)*1]),126);
CR_aB_d__0___Kinetic_h200__0___Ab__up_(inteval, &(stack[((hsi*126+3384)*1+lsi)*1]), &(stack[((hsi*36+2718)*1+lsi)*1]), &(stack[((hsi*36+2682)*1+lsi)*1]), &(stack[((hsi*36+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1890)*1+lsi)*1]),&(stack[((hsi*126+3384)*1+lsi)*1]),126);
CR_aB_Z4__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*40+2646)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*40+2686)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*40+3510)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d001__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*126+3550)*1+lsi)*1]), &(stack[((hsi*40+3510)*1+lsi)*1]), &(stack[((hsi*40+2686)*1+lsi)*1]), &(stack[((hsi*40+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1764)*1+lsi)*1]),&(stack[((hsi*126+3550)*1+lsi)*1]),126);
CR_aB_d001__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*126+3676)*1+lsi)*1]), &(stack[((hsi*40+3510)*1+lsi)*1]), &(stack[((hsi*40+2686)*1+lsi)*1]), &(stack[((hsi*40+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1638)*1+lsi)*1]),&(stack[((hsi*126+3676)*1+lsi)*1]),126);
CR_aB_d001__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*126+3802)*1+lsi)*1]), &(stack[((hsi*40+3510)*1+lsi)*1]), &(stack[((hsi*40+2686)*1+lsi)*1]), &(stack[((hsi*40+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1512)*1+lsi)*1]),&(stack[((hsi*126+3802)*1+lsi)*1]),126);
CR_aB_Z5__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*42+3928)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*42+3970)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*42+4012)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d002__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*126+4054)*1+lsi)*1]), &(stack[((hsi*42+4012)*1+lsi)*1]), &(stack[((hsi*42+3970)*1+lsi)*1]), &(stack[((hsi*42+3928)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1386)*1+lsi)*1]),&(stack[((hsi*126+4054)*1+lsi)*1]),126);
CR_aB_d010__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*126+4180)*1+lsi)*1]), &(stack[((hsi*40+3510)*1+lsi)*1]), &(stack[((hsi*40+2686)*1+lsi)*1]), &(stack[((hsi*40+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1260)*1+lsi)*1]),&(stack[((hsi*126+4180)*1+lsi)*1]),126);
CR_aB_d010__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*126+4306)*1+lsi)*1]), &(stack[((hsi*40+3510)*1+lsi)*1]), &(stack[((hsi*40+2686)*1+lsi)*1]), &(stack[((hsi*40+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1134)*1+lsi)*1]),&(stack[((hsi*126+4306)*1+lsi)*1]),126);
CR_aB_d010__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*126+4432)*1+lsi)*1]), &(stack[((hsi*40+3510)*1+lsi)*1]), &(stack[((hsi*40+2686)*1+lsi)*1]), &(stack[((hsi*40+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+1008)*1+lsi)*1]),&(stack[((hsi*126+4432)*1+lsi)*1]),126);
CR_aB_d011__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*126+4558)*1+lsi)*1]), &(stack[((hsi*42+4012)*1+lsi)*1]), &(stack[((hsi*42+3970)*1+lsi)*1]), &(stack[((hsi*42+3928)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+882)*1+lsi)*1]),&(stack[((hsi*126+4558)*1+lsi)*1]),126);
CR_aB_d020__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*126+4684)*1+lsi)*1]), &(stack[((hsi*42+4012)*1+lsi)*1]), &(stack[((hsi*42+3970)*1+lsi)*1]), &(stack[((hsi*42+3928)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+756)*1+lsi)*1]),&(stack[((hsi*126+4684)*1+lsi)*1]),126);
CR_aB_d100__0___Kinetic_h001__0___Ab__up_(inteval, &(stack[((hsi*126+4810)*1+lsi)*1]), &(stack[((hsi*40+3510)*1+lsi)*1]), &(stack[((hsi*40+2686)*1+lsi)*1]), &(stack[((hsi*40+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+630)*1+lsi)*1]),&(stack[((hsi*126+4810)*1+lsi)*1]),126);
CR_aB_d100__0___Kinetic_h010__0___Ab__up_(inteval, &(stack[((hsi*126+4936)*1+lsi)*1]), &(stack[((hsi*40+3510)*1+lsi)*1]), &(stack[((hsi*40+2686)*1+lsi)*1]), &(stack[((hsi*40+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+504)*1+lsi)*1]),&(stack[((hsi*126+4936)*1+lsi)*1]),126);
CR_aB_d100__0___Kinetic_h100__0___Ab__up_(inteval, &(stack[((hsi*126+5062)*1+lsi)*1]), &(stack[((hsi*40+3510)*1+lsi)*1]), &(stack[((hsi*40+2686)*1+lsi)*1]), &(stack[((hsi*40+2646)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+378)*1+lsi)*1]),&(stack[((hsi*126+5062)*1+lsi)*1]),126);
CR_aB_d101__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*126+5188)*1+lsi)*1]), &(stack[((hsi*42+4012)*1+lsi)*1]), &(stack[((hsi*42+3970)*1+lsi)*1]), &(stack[((hsi*42+3928)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+252)*1+lsi)*1]),&(stack[((hsi*126+5188)*1+lsi)*1]),126);
CR_aB_d110__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*126+5314)*1+lsi)*1]), &(stack[((hsi*42+4012)*1+lsi)*1]), &(stack[((hsi*42+3970)*1+lsi)*1]), &(stack[((hsi*42+3928)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+126)*1+lsi)*1]),&(stack[((hsi*126+5314)*1+lsi)*1]),126);
CR_aB_d200__0___Kinetic_h__0___Ab__up_(inteval, &(stack[((hsi*126+5440)*1+lsi)*1]), &(stack[((hsi*42+4012)*1+lsi)*1]), &(stack[((hsi*42+3970)*1+lsi)*1]), &(stack[((hsi*42+3928)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*126+0)*1+lsi)*1]),&(stack[((hsi*126+5440)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 2646 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
