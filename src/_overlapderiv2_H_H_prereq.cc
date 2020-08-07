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
#include <CR_aB_X5__0___Overlap_X7__0___Ab__up_.h>
#include <CR_aB_X6__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y5__0___Overlap_Y7__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z5__0___Overlap_Z7__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_.h>
#include <CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_h002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_h011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_h020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_.h>
#include <CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_.h>
#include <CR_aB_h101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_h110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <CR_aB_h200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _overlapderiv2_H_H_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z5__0___Overlap_Z7__0___Ab__up_(inteval, &(stack[((hsi*48+9261)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y5__0___Overlap_Y7__0___Ab__up_(inteval, &(stack[((hsi*48+9309)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X5__0___Overlap_X7__0___Ab__up_(inteval, &(stack[((hsi*48+9357)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h002__0___Ab__up_(inteval, &(stack[((hsi*441+9405)*1+lsi)*1]), &(stack[((hsi*48+9357)*1+lsi)*1]), &(stack[((hsi*48+9309)*1+lsi)*1]), &(stack[((hsi*48+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+8820)*1+lsi)*1]),&(stack[((hsi*441+9405)*1+lsi)*1]),441);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h011__0___Ab__up_(inteval, &(stack[((hsi*441+9846)*1+lsi)*1]), &(stack[((hsi*48+9357)*1+lsi)*1]), &(stack[((hsi*48+9309)*1+lsi)*1]), &(stack[((hsi*48+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+8379)*1+lsi)*1]),&(stack[((hsi*441+9846)*1+lsi)*1]),441);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h020__0___Ab__up_(inteval, &(stack[((hsi*441+10287)*1+lsi)*1]), &(stack[((hsi*48+9357)*1+lsi)*1]), &(stack[((hsi*48+9309)*1+lsi)*1]), &(stack[((hsi*48+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+7938)*1+lsi)*1]),&(stack[((hsi*441+10287)*1+lsi)*1]),441);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h101__0___Ab__up_(inteval, &(stack[((hsi*441+10728)*1+lsi)*1]), &(stack[((hsi*48+9357)*1+lsi)*1]), &(stack[((hsi*48+9309)*1+lsi)*1]), &(stack[((hsi*48+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+7497)*1+lsi)*1]),&(stack[((hsi*441+10728)*1+lsi)*1]),441);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h110__0___Ab__up_(inteval, &(stack[((hsi*441+11169)*1+lsi)*1]), &(stack[((hsi*48+9357)*1+lsi)*1]), &(stack[((hsi*48+9309)*1+lsi)*1]), &(stack[((hsi*48+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+7056)*1+lsi)*1]),&(stack[((hsi*441+11169)*1+lsi)*1]),441);
CR_aB_h__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h200__0___Ab__up_(inteval, &(stack[((hsi*441+11610)*1+lsi)*1]), &(stack[((hsi*48+9357)*1+lsi)*1]), &(stack[((hsi*48+9309)*1+lsi)*1]), &(stack[((hsi*48+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+6615)*1+lsi)*1]),&(stack[((hsi*441+11610)*1+lsi)*1]),441);
CR_aB_Z6__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*49+9261)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*49+9310)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*49+12051)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*441+12100)*1+lsi)*1]), &(stack[((hsi*49+12051)*1+lsi)*1]), &(stack[((hsi*49+9310)*1+lsi)*1]), &(stack[((hsi*49+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+6174)*1+lsi)*1]),&(stack[((hsi*441+12100)*1+lsi)*1]),441);
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*441+12541)*1+lsi)*1]), &(stack[((hsi*49+12051)*1+lsi)*1]), &(stack[((hsi*49+9310)*1+lsi)*1]), &(stack[((hsi*49+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+5733)*1+lsi)*1]),&(stack[((hsi*441+12541)*1+lsi)*1]),441);
CR_aB_h001__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*441+12982)*1+lsi)*1]), &(stack[((hsi*49+12051)*1+lsi)*1]), &(stack[((hsi*49+9310)*1+lsi)*1]), &(stack[((hsi*49+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+5292)*1+lsi)*1]),&(stack[((hsi*441+12982)*1+lsi)*1]),441);
CR_aB_Z7__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*48+13423)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*48+13471)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*48+13519)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h002__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*441+13567)*1+lsi)*1]), &(stack[((hsi*48+13519)*1+lsi)*1]), &(stack[((hsi*48+13471)*1+lsi)*1]), &(stack[((hsi*48+13423)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+4851)*1+lsi)*1]),&(stack[((hsi*441+13567)*1+lsi)*1]),441);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*441+14008)*1+lsi)*1]), &(stack[((hsi*49+12051)*1+lsi)*1]), &(stack[((hsi*49+9310)*1+lsi)*1]), &(stack[((hsi*49+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+4410)*1+lsi)*1]),&(stack[((hsi*441+14008)*1+lsi)*1]),441);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*441+14449)*1+lsi)*1]), &(stack[((hsi*49+12051)*1+lsi)*1]), &(stack[((hsi*49+9310)*1+lsi)*1]), &(stack[((hsi*49+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+3969)*1+lsi)*1]),&(stack[((hsi*441+14449)*1+lsi)*1]),441);
CR_aB_h010__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*441+14890)*1+lsi)*1]), &(stack[((hsi*49+12051)*1+lsi)*1]), &(stack[((hsi*49+9310)*1+lsi)*1]), &(stack[((hsi*49+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+3528)*1+lsi)*1]),&(stack[((hsi*441+14890)*1+lsi)*1]),441);
CR_aB_h011__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*441+15331)*1+lsi)*1]), &(stack[((hsi*48+13519)*1+lsi)*1]), &(stack[((hsi*48+13471)*1+lsi)*1]), &(stack[((hsi*48+13423)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+3087)*1+lsi)*1]),&(stack[((hsi*441+15331)*1+lsi)*1]),441);
CR_aB_h020__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*441+15772)*1+lsi)*1]), &(stack[((hsi*48+13519)*1+lsi)*1]), &(stack[((hsi*48+13471)*1+lsi)*1]), &(stack[((hsi*48+13423)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+2646)*1+lsi)*1]),&(stack[((hsi*441+15772)*1+lsi)*1]),441);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h001__0___Ab__up_(inteval, &(stack[((hsi*441+16213)*1+lsi)*1]), &(stack[((hsi*49+12051)*1+lsi)*1]), &(stack[((hsi*49+9310)*1+lsi)*1]), &(stack[((hsi*49+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+2205)*1+lsi)*1]),&(stack[((hsi*441+16213)*1+lsi)*1]),441);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h010__0___Ab__up_(inteval, &(stack[((hsi*441+16654)*1+lsi)*1]), &(stack[((hsi*49+12051)*1+lsi)*1]), &(stack[((hsi*49+9310)*1+lsi)*1]), &(stack[((hsi*49+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+1764)*1+lsi)*1]),&(stack[((hsi*441+16654)*1+lsi)*1]),441);
CR_aB_h100__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h100__0___Ab__up_(inteval, &(stack[((hsi*441+17095)*1+lsi)*1]), &(stack[((hsi*49+12051)*1+lsi)*1]), &(stack[((hsi*49+9310)*1+lsi)*1]), &(stack[((hsi*49+9261)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+1323)*1+lsi)*1]),&(stack[((hsi*441+17095)*1+lsi)*1]),441);
CR_aB_h101__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*441+17536)*1+lsi)*1]), &(stack[((hsi*48+13519)*1+lsi)*1]), &(stack[((hsi*48+13471)*1+lsi)*1]), &(stack[((hsi*48+13423)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+882)*1+lsi)*1]),&(stack[((hsi*441+17536)*1+lsi)*1]),441);
CR_aB_h110__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*441+17977)*1+lsi)*1]), &(stack[((hsi*48+13519)*1+lsi)*1]), &(stack[((hsi*48+13471)*1+lsi)*1]), &(stack[((hsi*48+13423)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+441)*1+lsi)*1]),&(stack[((hsi*441+17977)*1+lsi)*1]),441);
CR_aB_h200__0___CartesianMultipole_sB_0_c_0_c_0_Sb__h__0___Ab__up_(inteval, &(stack[((hsi*441+18418)*1+lsi)*1]), &(stack[((hsi*48+13519)*1+lsi)*1]), &(stack[((hsi*48+13471)*1+lsi)*1]), &(stack[((hsi*48+13423)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*441+0)*1+lsi)*1]),&(stack[((hsi*441+18418)*1+lsi)*1]),441);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 9261 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
