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
#include <CR_aB_X3__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X5__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y3__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z3__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_g002__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_g011__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_g020__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_g101__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_g110__0___Ab__up_.h>
#include <CR_aB_d__0___Kinetic_g200__0___Ab__up_.h>
#include <CR_aB_d001__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_d001__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_d001__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_d002__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_d010__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_d010__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_d010__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_d011__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_d020__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_d100__0___Kinetic_g001__0___Ab__up_.h>
#include <CR_aB_d100__0___Kinetic_g010__0___Ab__up_.h>
#include <CR_aB_d100__0___Kinetic_g100__0___Ab__up_.h>
#include <CR_aB_d101__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_d110__0___Kinetic_g__0___Ab__up_.h>
#include <CR_aB_d200__0___Kinetic_g__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_D_G_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z3__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*32+1890)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y3__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*32+1922)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X3__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*32+1954)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d__0___Kinetic_g002__0___Ab__up_(inteval, &(stack[((hsi*90+1986)*1+lsi)*1]), &(stack[((hsi*32+1954)*1+lsi)*1]), &(stack[((hsi*32+1922)*1+lsi)*1]), &(stack[((hsi*32+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1800)*1+lsi)*1]),&(stack[((hsi*90+1986)*1+lsi)*1]),90);
CR_aB_d__0___Kinetic_g011__0___Ab__up_(inteval, &(stack[((hsi*90+2076)*1+lsi)*1]), &(stack[((hsi*32+1954)*1+lsi)*1]), &(stack[((hsi*32+1922)*1+lsi)*1]), &(stack[((hsi*32+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1710)*1+lsi)*1]),&(stack[((hsi*90+2076)*1+lsi)*1]),90);
CR_aB_d__0___Kinetic_g020__0___Ab__up_(inteval, &(stack[((hsi*90+2166)*1+lsi)*1]), &(stack[((hsi*32+1954)*1+lsi)*1]), &(stack[((hsi*32+1922)*1+lsi)*1]), &(stack[((hsi*32+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1620)*1+lsi)*1]),&(stack[((hsi*90+2166)*1+lsi)*1]),90);
CR_aB_d__0___Kinetic_g101__0___Ab__up_(inteval, &(stack[((hsi*90+2256)*1+lsi)*1]), &(stack[((hsi*32+1954)*1+lsi)*1]), &(stack[((hsi*32+1922)*1+lsi)*1]), &(stack[((hsi*32+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1530)*1+lsi)*1]),&(stack[((hsi*90+2256)*1+lsi)*1]),90);
CR_aB_d__0___Kinetic_g110__0___Ab__up_(inteval, &(stack[((hsi*90+2346)*1+lsi)*1]), &(stack[((hsi*32+1954)*1+lsi)*1]), &(stack[((hsi*32+1922)*1+lsi)*1]), &(stack[((hsi*32+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1440)*1+lsi)*1]),&(stack[((hsi*90+2346)*1+lsi)*1]),90);
CR_aB_d__0___Kinetic_g200__0___Ab__up_(inteval, &(stack[((hsi*90+2436)*1+lsi)*1]), &(stack[((hsi*32+1954)*1+lsi)*1]), &(stack[((hsi*32+1922)*1+lsi)*1]), &(stack[((hsi*32+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1350)*1+lsi)*1]),&(stack[((hsi*90+2436)*1+lsi)*1]),90);
CR_aB_Z4__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*35+1890)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*35+1925)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*35+2526)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d001__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*90+2561)*1+lsi)*1]), &(stack[((hsi*35+2526)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1260)*1+lsi)*1]),&(stack[((hsi*90+2561)*1+lsi)*1]),90);
CR_aB_d001__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*90+2651)*1+lsi)*1]), &(stack[((hsi*35+2526)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1170)*1+lsi)*1]),&(stack[((hsi*90+2651)*1+lsi)*1]),90);
CR_aB_d001__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*90+2741)*1+lsi)*1]), &(stack[((hsi*35+2526)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1080)*1+lsi)*1]),&(stack[((hsi*90+2741)*1+lsi)*1]),90);
CR_aB_Z5__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*36+2831)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*36+2867)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*36+2903)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_d002__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*90+2939)*1+lsi)*1]), &(stack[((hsi*36+2903)*1+lsi)*1]), &(stack[((hsi*36+2867)*1+lsi)*1]), &(stack[((hsi*36+2831)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+990)*1+lsi)*1]),&(stack[((hsi*90+2939)*1+lsi)*1]),90);
CR_aB_d010__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*90+3029)*1+lsi)*1]), &(stack[((hsi*35+2526)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+900)*1+lsi)*1]),&(stack[((hsi*90+3029)*1+lsi)*1]),90);
CR_aB_d010__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*90+3119)*1+lsi)*1]), &(stack[((hsi*35+2526)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+810)*1+lsi)*1]),&(stack[((hsi*90+3119)*1+lsi)*1]),90);
CR_aB_d010__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*90+3209)*1+lsi)*1]), &(stack[((hsi*35+2526)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+720)*1+lsi)*1]),&(stack[((hsi*90+3209)*1+lsi)*1]),90);
CR_aB_d011__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*90+3299)*1+lsi)*1]), &(stack[((hsi*36+2903)*1+lsi)*1]), &(stack[((hsi*36+2867)*1+lsi)*1]), &(stack[((hsi*36+2831)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+630)*1+lsi)*1]),&(stack[((hsi*90+3299)*1+lsi)*1]),90);
CR_aB_d020__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*90+3389)*1+lsi)*1]), &(stack[((hsi*36+2903)*1+lsi)*1]), &(stack[((hsi*36+2867)*1+lsi)*1]), &(stack[((hsi*36+2831)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+540)*1+lsi)*1]),&(stack[((hsi*90+3389)*1+lsi)*1]),90);
CR_aB_d100__0___Kinetic_g001__0___Ab__up_(inteval, &(stack[((hsi*90+3479)*1+lsi)*1]), &(stack[((hsi*35+2526)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+450)*1+lsi)*1]),&(stack[((hsi*90+3479)*1+lsi)*1]),90);
CR_aB_d100__0___Kinetic_g010__0___Ab__up_(inteval, &(stack[((hsi*90+3569)*1+lsi)*1]), &(stack[((hsi*35+2526)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+360)*1+lsi)*1]),&(stack[((hsi*90+3569)*1+lsi)*1]),90);
CR_aB_d100__0___Kinetic_g100__0___Ab__up_(inteval, &(stack[((hsi*90+3659)*1+lsi)*1]), &(stack[((hsi*35+2526)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+270)*1+lsi)*1]),&(stack[((hsi*90+3659)*1+lsi)*1]),90);
CR_aB_d101__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*90+1890)*1+lsi)*1]), &(stack[((hsi*36+2903)*1+lsi)*1]), &(stack[((hsi*36+2867)*1+lsi)*1]), &(stack[((hsi*36+2831)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+180)*1+lsi)*1]),&(stack[((hsi*90+1890)*1+lsi)*1]),90);
CR_aB_d110__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*90+3749)*1+lsi)*1]), &(stack[((hsi*36+2903)*1+lsi)*1]), &(stack[((hsi*36+2867)*1+lsi)*1]), &(stack[((hsi*36+2831)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+90)*1+lsi)*1]),&(stack[((hsi*90+3749)*1+lsi)*1]),90);
CR_aB_d200__0___Kinetic_g__0___Ab__up_(inteval, &(stack[((hsi*90+3839)*1+lsi)*1]), &(stack[((hsi*36+2903)*1+lsi)*1]), &(stack[((hsi*36+2867)*1+lsi)*1]), &(stack[((hsi*36+2831)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+0)*1+lsi)*1]),&(stack[((hsi*90+3839)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1890 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
