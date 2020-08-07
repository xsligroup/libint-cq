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
#include <CR_aB_X6__0___Overlap_X6__0___Ab__up_.h>
#include <CR_aB_X7__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_X8__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_Y6__0___Overlap_Y6__0___Ab__up_.h>
#include <CR_aB_Y7__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Y8__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Z6__0___Overlap_Z6__0___Ab__up_.h>
#include <CR_aB_Z7__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_Z8__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_f002__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_f011__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_f020__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_f101__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_f110__0___Ab__up_.h>
#include <CR_aB_h__0___Kinetic_f200__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_f001__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_f010__0___Ab__up_.h>
#include <CR_aB_h001__0___Kinetic_f100__0___Ab__up_.h>
#include <CR_aB_h002__0___Kinetic_f__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_f001__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_f010__0___Ab__up_.h>
#include <CR_aB_h010__0___Kinetic_f100__0___Ab__up_.h>
#include <CR_aB_h011__0___Kinetic_f__0___Ab__up_.h>
#include <CR_aB_h020__0___Kinetic_f__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_f001__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_f010__0___Ab__up_.h>
#include <CR_aB_h100__0___Kinetic_f100__0___Ab__up_.h>
#include <CR_aB_h101__0___Kinetic_f__0___Ab__up_.h>
#include <CR_aB_h110__0___Kinetic_f__0___Ab__up_.h>
#include <CR_aB_h200__0___Kinetic_f__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kineticderiv2_H_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z6__0___Overlap_Z6__0___Ab__up_(inteval, &(stack[((hsi*49+4410)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y6__0___Overlap_Y6__0___Ab__up_(inteval, &(stack[((hsi*49+4459)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X6__0___Overlap_X6__0___Ab__up_(inteval, &(stack[((hsi*49+4508)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h__0___Kinetic_f002__0___Ab__up_(inteval, &(stack[((hsi*210+4557)*1+lsi)*1]), &(stack[((hsi*49+4508)*1+lsi)*1]), &(stack[((hsi*49+4459)*1+lsi)*1]), &(stack[((hsi*49+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+4200)*1+lsi)*1]),&(stack[((hsi*210+4557)*1+lsi)*1]),210);
CR_aB_h__0___Kinetic_f011__0___Ab__up_(inteval, &(stack[((hsi*210+4767)*1+lsi)*1]), &(stack[((hsi*49+4508)*1+lsi)*1]), &(stack[((hsi*49+4459)*1+lsi)*1]), &(stack[((hsi*49+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3990)*1+lsi)*1]),&(stack[((hsi*210+4767)*1+lsi)*1]),210);
CR_aB_h__0___Kinetic_f020__0___Ab__up_(inteval, &(stack[((hsi*210+4977)*1+lsi)*1]), &(stack[((hsi*49+4508)*1+lsi)*1]), &(stack[((hsi*49+4459)*1+lsi)*1]), &(stack[((hsi*49+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3780)*1+lsi)*1]),&(stack[((hsi*210+4977)*1+lsi)*1]),210);
CR_aB_h__0___Kinetic_f101__0___Ab__up_(inteval, &(stack[((hsi*210+5187)*1+lsi)*1]), &(stack[((hsi*49+4508)*1+lsi)*1]), &(stack[((hsi*49+4459)*1+lsi)*1]), &(stack[((hsi*49+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3570)*1+lsi)*1]),&(stack[((hsi*210+5187)*1+lsi)*1]),210);
CR_aB_h__0___Kinetic_f110__0___Ab__up_(inteval, &(stack[((hsi*210+5397)*1+lsi)*1]), &(stack[((hsi*49+4508)*1+lsi)*1]), &(stack[((hsi*49+4459)*1+lsi)*1]), &(stack[((hsi*49+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3360)*1+lsi)*1]),&(stack[((hsi*210+5397)*1+lsi)*1]),210);
CR_aB_h__0___Kinetic_f200__0___Ab__up_(inteval, &(stack[((hsi*210+5607)*1+lsi)*1]), &(stack[((hsi*49+4508)*1+lsi)*1]), &(stack[((hsi*49+4459)*1+lsi)*1]), &(stack[((hsi*49+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+3150)*1+lsi)*1]),&(stack[((hsi*210+5607)*1+lsi)*1]),210);
CR_aB_Z7__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*48+4410)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y7__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*48+4458)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X7__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*48+4506)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h001__0___Kinetic_f001__0___Ab__up_(inteval, &(stack[((hsi*210+5817)*1+lsi)*1]), &(stack[((hsi*48+4506)*1+lsi)*1]), &(stack[((hsi*48+4458)*1+lsi)*1]), &(stack[((hsi*48+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2940)*1+lsi)*1]),&(stack[((hsi*210+5817)*1+lsi)*1]),210);
CR_aB_h001__0___Kinetic_f010__0___Ab__up_(inteval, &(stack[((hsi*210+6027)*1+lsi)*1]), &(stack[((hsi*48+4506)*1+lsi)*1]), &(stack[((hsi*48+4458)*1+lsi)*1]), &(stack[((hsi*48+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2730)*1+lsi)*1]),&(stack[((hsi*210+6027)*1+lsi)*1]),210);
CR_aB_h001__0___Kinetic_f100__0___Ab__up_(inteval, &(stack[((hsi*210+6237)*1+lsi)*1]), &(stack[((hsi*48+4506)*1+lsi)*1]), &(stack[((hsi*48+4458)*1+lsi)*1]), &(stack[((hsi*48+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2520)*1+lsi)*1]),&(stack[((hsi*210+6237)*1+lsi)*1]),210);
CR_aB_Z8__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*45+6447)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y8__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*45+6492)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X8__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*45+6537)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_h002__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*210+6582)*1+lsi)*1]), &(stack[((hsi*45+6537)*1+lsi)*1]), &(stack[((hsi*45+6492)*1+lsi)*1]), &(stack[((hsi*45+6447)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2310)*1+lsi)*1]),&(stack[((hsi*210+6582)*1+lsi)*1]),210);
CR_aB_h010__0___Kinetic_f001__0___Ab__up_(inteval, &(stack[((hsi*210+6792)*1+lsi)*1]), &(stack[((hsi*48+4506)*1+lsi)*1]), &(stack[((hsi*48+4458)*1+lsi)*1]), &(stack[((hsi*48+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+2100)*1+lsi)*1]),&(stack[((hsi*210+6792)*1+lsi)*1]),210);
CR_aB_h010__0___Kinetic_f010__0___Ab__up_(inteval, &(stack[((hsi*210+7002)*1+lsi)*1]), &(stack[((hsi*48+4506)*1+lsi)*1]), &(stack[((hsi*48+4458)*1+lsi)*1]), &(stack[((hsi*48+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1890)*1+lsi)*1]),&(stack[((hsi*210+7002)*1+lsi)*1]),210);
CR_aB_h010__0___Kinetic_f100__0___Ab__up_(inteval, &(stack[((hsi*210+7212)*1+lsi)*1]), &(stack[((hsi*48+4506)*1+lsi)*1]), &(stack[((hsi*48+4458)*1+lsi)*1]), &(stack[((hsi*48+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1680)*1+lsi)*1]),&(stack[((hsi*210+7212)*1+lsi)*1]),210);
CR_aB_h011__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*210+7422)*1+lsi)*1]), &(stack[((hsi*45+6537)*1+lsi)*1]), &(stack[((hsi*45+6492)*1+lsi)*1]), &(stack[((hsi*45+6447)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1470)*1+lsi)*1]),&(stack[((hsi*210+7422)*1+lsi)*1]),210);
CR_aB_h020__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*210+7632)*1+lsi)*1]), &(stack[((hsi*45+6537)*1+lsi)*1]), &(stack[((hsi*45+6492)*1+lsi)*1]), &(stack[((hsi*45+6447)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1260)*1+lsi)*1]),&(stack[((hsi*210+7632)*1+lsi)*1]),210);
CR_aB_h100__0___Kinetic_f001__0___Ab__up_(inteval, &(stack[((hsi*210+7842)*1+lsi)*1]), &(stack[((hsi*48+4506)*1+lsi)*1]), &(stack[((hsi*48+4458)*1+lsi)*1]), &(stack[((hsi*48+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+1050)*1+lsi)*1]),&(stack[((hsi*210+7842)*1+lsi)*1]),210);
CR_aB_h100__0___Kinetic_f010__0___Ab__up_(inteval, &(stack[((hsi*210+8052)*1+lsi)*1]), &(stack[((hsi*48+4506)*1+lsi)*1]), &(stack[((hsi*48+4458)*1+lsi)*1]), &(stack[((hsi*48+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+840)*1+lsi)*1]),&(stack[((hsi*210+8052)*1+lsi)*1]),210);
CR_aB_h100__0___Kinetic_f100__0___Ab__up_(inteval, &(stack[((hsi*210+8262)*1+lsi)*1]), &(stack[((hsi*48+4506)*1+lsi)*1]), &(stack[((hsi*48+4458)*1+lsi)*1]), &(stack[((hsi*48+4410)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+630)*1+lsi)*1]),&(stack[((hsi*210+8262)*1+lsi)*1]),210);
CR_aB_h101__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*210+8472)*1+lsi)*1]), &(stack[((hsi*45+6537)*1+lsi)*1]), &(stack[((hsi*45+6492)*1+lsi)*1]), &(stack[((hsi*45+6447)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+420)*1+lsi)*1]),&(stack[((hsi*210+8472)*1+lsi)*1]),210);
CR_aB_h110__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*210+8682)*1+lsi)*1]), &(stack[((hsi*45+6537)*1+lsi)*1]), &(stack[((hsi*45+6492)*1+lsi)*1]), &(stack[((hsi*45+6447)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+210)*1+lsi)*1]),&(stack[((hsi*210+8682)*1+lsi)*1]),210);
CR_aB_h200__0___Kinetic_f__0___Ab__up_(inteval, &(stack[((hsi*210+8892)*1+lsi)*1]), &(stack[((hsi*45+6537)*1+lsi)*1]), &(stack[((hsi*45+6492)*1+lsi)*1]), &(stack[((hsi*45+6447)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*210+0)*1+lsi)*1]),&(stack[((hsi*210+8892)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 4410 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
