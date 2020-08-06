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
#include <CR_aB_X5__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_d002__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_d011__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_d020__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_d101__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_d110__0___Ab__up_.h>
#include <CR_aB_g__0___Kinetic_d200__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_d001__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_d010__0___Ab__up_.h>
#include <CR_aB_g001__0___Kinetic_d100__0___Ab__up_.h>
#include <CR_aB_g002__0___Kinetic_d__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_d001__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_d010__0___Ab__up_.h>
#include <CR_aB_g010__0___Kinetic_d100__0___Ab__up_.h>
#include <CR_aB_g011__0___Kinetic_d__0___Ab__up_.h>
#include <CR_aB_g020__0___Kinetic_d__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_d001__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_d010__0___Ab__up_.h>
#include <CR_aB_g100__0___Kinetic_d100__0___Ab__up_.h>
#include <CR_aB_g101__0___Kinetic_d__0___Ab__up_.h>
#include <CR_aB_g110__0___Kinetic_d__0___Ab__up_.h>
#include <CR_aB_g200__0___Kinetic_d__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_G_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*36+1890)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*36+1926)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*36+1962)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___Kinetic_d002__0___Ab__up_(inteval, &(stack[((hsi*90+1998)*1+lsi)*1]), &(stack[((hsi*36+1962)*1+lsi)*1]), &(stack[((hsi*36+1926)*1+lsi)*1]), &(stack[((hsi*36+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1800)*1+lsi)*1]),&(stack[((hsi*90+1998)*1+lsi)*1]),90);
CR_aB_g__0___Kinetic_d011__0___Ab__up_(inteval, &(stack[((hsi*90+2088)*1+lsi)*1]), &(stack[((hsi*36+1962)*1+lsi)*1]), &(stack[((hsi*36+1926)*1+lsi)*1]), &(stack[((hsi*36+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1710)*1+lsi)*1]),&(stack[((hsi*90+2088)*1+lsi)*1]),90);
CR_aB_g__0___Kinetic_d020__0___Ab__up_(inteval, &(stack[((hsi*90+2178)*1+lsi)*1]), &(stack[((hsi*36+1962)*1+lsi)*1]), &(stack[((hsi*36+1926)*1+lsi)*1]), &(stack[((hsi*36+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1620)*1+lsi)*1]),&(stack[((hsi*90+2178)*1+lsi)*1]),90);
CR_aB_g__0___Kinetic_d101__0___Ab__up_(inteval, &(stack[((hsi*90+2268)*1+lsi)*1]), &(stack[((hsi*36+1962)*1+lsi)*1]), &(stack[((hsi*36+1926)*1+lsi)*1]), &(stack[((hsi*36+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1530)*1+lsi)*1]),&(stack[((hsi*90+2268)*1+lsi)*1]),90);
CR_aB_g__0___Kinetic_d110__0___Ab__up_(inteval, &(stack[((hsi*90+2358)*1+lsi)*1]), &(stack[((hsi*36+1962)*1+lsi)*1]), &(stack[((hsi*36+1926)*1+lsi)*1]), &(stack[((hsi*36+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1440)*1+lsi)*1]),&(stack[((hsi*90+2358)*1+lsi)*1]),90);
CR_aB_g__0___Kinetic_d200__0___Ab__up_(inteval, &(stack[((hsi*90+2448)*1+lsi)*1]), &(stack[((hsi*36+1962)*1+lsi)*1]), &(stack[((hsi*36+1926)*1+lsi)*1]), &(stack[((hsi*36+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1350)*1+lsi)*1]),&(stack[((hsi*90+2448)*1+lsi)*1]),90);
CR_aB_Z6__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*35+1890)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*35+1925)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*35+1960)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g001__0___Kinetic_d001__0___Ab__up_(inteval, &(stack[((hsi*90+2538)*1+lsi)*1]), &(stack[((hsi*35+1960)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1260)*1+lsi)*1]),&(stack[((hsi*90+2538)*1+lsi)*1]),90);
CR_aB_g001__0___Kinetic_d010__0___Ab__up_(inteval, &(stack[((hsi*90+2628)*1+lsi)*1]), &(stack[((hsi*35+1960)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1170)*1+lsi)*1]),&(stack[((hsi*90+2628)*1+lsi)*1]),90);
CR_aB_g001__0___Kinetic_d100__0___Ab__up_(inteval, &(stack[((hsi*90+2718)*1+lsi)*1]), &(stack[((hsi*35+1960)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1080)*1+lsi)*1]),&(stack[((hsi*90+2718)*1+lsi)*1]),90);
CR_aB_Z7__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*32+2808)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*32+2840)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*32+2872)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g002__0___Kinetic_d__0___Ab__up_(inteval, &(stack[((hsi*90+2904)*1+lsi)*1]), &(stack[((hsi*32+2872)*1+lsi)*1]), &(stack[((hsi*32+2840)*1+lsi)*1]), &(stack[((hsi*32+2808)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+990)*1+lsi)*1]),&(stack[((hsi*90+2904)*1+lsi)*1]),90);
CR_aB_g010__0___Kinetic_d001__0___Ab__up_(inteval, &(stack[((hsi*90+2994)*1+lsi)*1]), &(stack[((hsi*35+1960)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+900)*1+lsi)*1]),&(stack[((hsi*90+2994)*1+lsi)*1]),90);
CR_aB_g010__0___Kinetic_d010__0___Ab__up_(inteval, &(stack[((hsi*90+3084)*1+lsi)*1]), &(stack[((hsi*35+1960)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+810)*1+lsi)*1]),&(stack[((hsi*90+3084)*1+lsi)*1]),90);
CR_aB_g010__0___Kinetic_d100__0___Ab__up_(inteval, &(stack[((hsi*90+3174)*1+lsi)*1]), &(stack[((hsi*35+1960)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+720)*1+lsi)*1]),&(stack[((hsi*90+3174)*1+lsi)*1]),90);
CR_aB_g011__0___Kinetic_d__0___Ab__up_(inteval, &(stack[((hsi*90+3264)*1+lsi)*1]), &(stack[((hsi*32+2872)*1+lsi)*1]), &(stack[((hsi*32+2840)*1+lsi)*1]), &(stack[((hsi*32+2808)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+630)*1+lsi)*1]),&(stack[((hsi*90+3264)*1+lsi)*1]),90);
CR_aB_g020__0___Kinetic_d__0___Ab__up_(inteval, &(stack[((hsi*90+3354)*1+lsi)*1]), &(stack[((hsi*32+2872)*1+lsi)*1]), &(stack[((hsi*32+2840)*1+lsi)*1]), &(stack[((hsi*32+2808)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+540)*1+lsi)*1]),&(stack[((hsi*90+3354)*1+lsi)*1]),90);
CR_aB_g100__0___Kinetic_d001__0___Ab__up_(inteval, &(stack[((hsi*90+3444)*1+lsi)*1]), &(stack[((hsi*35+1960)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+450)*1+lsi)*1]),&(stack[((hsi*90+3444)*1+lsi)*1]),90);
CR_aB_g100__0___Kinetic_d010__0___Ab__up_(inteval, &(stack[((hsi*90+3534)*1+lsi)*1]), &(stack[((hsi*35+1960)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+360)*1+lsi)*1]),&(stack[((hsi*90+3534)*1+lsi)*1]),90);
CR_aB_g100__0___Kinetic_d100__0___Ab__up_(inteval, &(stack[((hsi*90+3624)*1+lsi)*1]), &(stack[((hsi*35+1960)*1+lsi)*1]), &(stack[((hsi*35+1925)*1+lsi)*1]), &(stack[((hsi*35+1890)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+270)*1+lsi)*1]),&(stack[((hsi*90+3624)*1+lsi)*1]),90);
CR_aB_g101__0___Kinetic_d__0___Ab__up_(inteval, &(stack[((hsi*90+1890)*1+lsi)*1]), &(stack[((hsi*32+2872)*1+lsi)*1]), &(stack[((hsi*32+2840)*1+lsi)*1]), &(stack[((hsi*32+2808)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+180)*1+lsi)*1]),&(stack[((hsi*90+1890)*1+lsi)*1]),90);
CR_aB_g110__0___Kinetic_d__0___Ab__up_(inteval, &(stack[((hsi*90+3714)*1+lsi)*1]), &(stack[((hsi*32+2872)*1+lsi)*1]), &(stack[((hsi*32+2840)*1+lsi)*1]), &(stack[((hsi*32+2808)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+90)*1+lsi)*1]),&(stack[((hsi*90+3714)*1+lsi)*1]),90);
CR_aB_g200__0___Kinetic_d__0___Ab__up_(inteval, &(stack[((hsi*90+3804)*1+lsi)*1]), &(stack[((hsi*32+2872)*1+lsi)*1]), &(stack[((hsi*32+2840)*1+lsi)*1]), &(stack[((hsi*32+2808)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+0)*1+lsi)*1]),&(stack[((hsi*90+3804)*1+lsi)*1]),90);
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
