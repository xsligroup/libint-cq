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
#include <CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_l100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_m001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_m010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_m100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_ps001__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_ps010__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InBra_aB_ps100__0___ElecPot_s__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_l__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_m__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_m__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_m__0___ElecPot_s100__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_ps__0___ElecPot_s001__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_ps__0___ElecPot_s010__0___Ab__up_0.h>
#include <CR_DerivGaussP0InKet_aB_ps__0___ElecPot_s100__0___Ab__up_0.h>
#include <GenericContract.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
#include <OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_m__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_pp__0___ElecPot_s__0___Ab__up_0.h>
#include <OSVRRElecPotInBra_aB_ps__0___ElecPot_s__0___Ab__up_0.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_K_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1348)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1351)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1354)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1360)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1363)*1+lsi)*1]), &(stack[((hsi*3+1360)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1369)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1372)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]), &(stack[((hsi*3+1369)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_3[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1378)*1+lsi)*1]), &(stack[((hsi*6+1354)*1+lsi)*1]), &(stack[((hsi*6+1372)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*6+1363)*1+lsi)*1]), &(stack[((hsi*6+1354)*1+lsi)*1]), &(stack[((hsi*3+1360)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1398)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*10+1378)*1+lsi)*1]), &(stack[((hsi*6+1363)*1+lsi)*1]), &(stack[((hsi*6+1354)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1351)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1413)*1+lsi)*1]), &(stack[((hsi*3+1369)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_4[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1419)*1+lsi)*1]), &(stack[((hsi*6+1372)*1+lsi)*1]), &(stack[((hsi*6+1413)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]), &(stack[((hsi*3+1369)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1429)*1+lsi)*1]), &(stack[((hsi*10+1378)*1+lsi)*1]), &(stack[((hsi*10+1419)*1+lsi)*1]), &(stack[((hsi*6+1354)*1+lsi)*1]), &(stack[((hsi*6+1372)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1444)*1+lsi)*1]), &(stack[((hsi*15+1398)*1+lsi)*1]), &(stack[((hsi*15+1429)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*10+1378)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1348)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1354)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]), &(stack[((hsi*3+1360)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1465)*1+lsi)*1]), &(stack[((hsi*6+1354)*1+lsi)*1]), &(stack[((hsi*6+1363)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]), &(stack[((hsi*3+1360)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1475)*1+lsi)*1]), &(stack[((hsi*10+1465)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*6+1354)*1+lsi)*1]), &(stack[((hsi*6+1363)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1490)*1+lsi)*1]), &(stack[((hsi*15+1475)*1+lsi)*1]), &(stack[((hsi*15+1398)*1+lsi)*1]), &(stack[((hsi*10+1465)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1511)*1+lsi)*1]), &(stack[((hsi*21+1490)*1+lsi)*1]), &(stack[((hsi*21+1444)*1+lsi)*1]), &(stack[((hsi*15+1475)*1+lsi)*1]), &(stack[((hsi*15+1398)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1348)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1465)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_5[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*6+1413)*1+lsi)*1]), &(stack[((hsi*6+1465)*1+lsi)*1]), &(stack[((hsi*3+1369)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1471)*1+lsi)*1]), &(stack[((hsi*10+1419)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*6+1372)*1+lsi)*1]), &(stack[((hsi*6+1413)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1354)*1+lsi)*1]), &(stack[((hsi*15+1429)*1+lsi)*1]), &(stack[((hsi*15+1471)*1+lsi)*1]), &(stack[((hsi*10+1378)*1+lsi)*1]), &(stack[((hsi*10+1419)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1539)*1+lsi)*1]), &(stack[((hsi*21+1444)*1+lsi)*1]), &(stack[((hsi*21+1354)*1+lsi)*1]), &(stack[((hsi*15+1398)*1+lsi)*1]), &(stack[((hsi*15+1429)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1567)*1+lsi)*1]), &(stack[((hsi*28+1511)*1+lsi)*1]), &(stack[((hsi*28+1539)*1+lsi)*1]), &(stack[((hsi*21+1490)*1+lsi)*1]), &(stack[((hsi*21+1444)*1+lsi)*1]));
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1486)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1489)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]), &(stack[((hsi*3+1486)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_6[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1495)*1+lsi)*1]), &(stack[((hsi*6+1465)*1+lsi)*1]), &(stack[((hsi*6+1489)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1398)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*10+1495)*1+lsi)*1]), &(stack[((hsi*6+1413)*1+lsi)*1]), &(stack[((hsi*6+1465)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1603)*1+lsi)*1]), &(stack[((hsi*15+1471)*1+lsi)*1]), &(stack[((hsi*15+1398)*1+lsi)*1]), &(stack[((hsi*10+1419)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1624)*1+lsi)*1]), &(stack[((hsi*21+1354)*1+lsi)*1]), &(stack[((hsi*21+1603)*1+lsi)*1]), &(stack[((hsi*15+1429)*1+lsi)*1]), &(stack[((hsi*15+1471)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1652)*1+lsi)*1]), &(stack[((hsi*28+1539)*1+lsi)*1]), &(stack[((hsi*28+1624)*1+lsi)*1]), &(stack[((hsi*21+1444)*1+lsi)*1]), &(stack[((hsi*21+1354)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1413)*1+lsi)*1]), &(stack[((hsi*36+1567)*1+lsi)*1]), &(stack[((hsi*36+1652)*1+lsi)*1]), &(stack[((hsi*28+1511)*1+lsi)*1]), &(stack[((hsi*28+1539)*1+lsi)*1]));
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*108+1688)*1+lsi)*1]), &(stack[((hsi*45+1413)*1+lsi)*1]), &(stack[((hsi*36+1567)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*36+1796)*1+lsi)*1]), &(stack[((hsi*108+1688)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1312)*1+lsi)*1]),&(stack[((hsi*36+1796)*1+lsi)*1]),36);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1351)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1505)*1+lsi)*1]), &(stack[((hsi*3+1486)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_7[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1375)*1+lsi)*1]), &(stack[((hsi*6+1489)*1+lsi)*1]), &(stack[((hsi*6+1505)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]), &(stack[((hsi*3+1486)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1832)*1+lsi)*1]), &(stack[((hsi*10+1495)*1+lsi)*1]), &(stack[((hsi*10+1375)*1+lsi)*1]), &(stack[((hsi*6+1465)*1+lsi)*1]), &(stack[((hsi*6+1489)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1847)*1+lsi)*1]), &(stack[((hsi*15+1398)*1+lsi)*1]), &(stack[((hsi*15+1832)*1+lsi)*1]), &(stack[((hsi*10+1388)*1+lsi)*1]), &(stack[((hsi*10+1495)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1868)*1+lsi)*1]), &(stack[((hsi*21+1603)*1+lsi)*1]), &(stack[((hsi*21+1847)*1+lsi)*1]), &(stack[((hsi*15+1471)*1+lsi)*1]), &(stack[((hsi*15+1398)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1896)*1+lsi)*1]), &(stack[((hsi*28+1624)*1+lsi)*1]), &(stack[((hsi*28+1868)*1+lsi)*1]), &(stack[((hsi*21+1354)*1+lsi)*1]), &(stack[((hsi*21+1603)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1932)*1+lsi)*1]), &(stack[((hsi*36+1652)*1+lsi)*1]), &(stack[((hsi*36+1896)*1+lsi)*1]), &(stack[((hsi*28+1539)*1+lsi)*1]), &(stack[((hsi*28+1624)*1+lsi)*1]));
OSVRRElecPotInBra_aB_m__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+1977)*1+lsi)*1]), &(stack[((hsi*45+1413)*1+lsi)*1]), &(stack[((hsi*45+1932)*1+lsi)*1]), &(stack[((hsi*36+1567)*1+lsi)*1]), &(stack[((hsi*36+1652)*1+lsi)*1]));
HRRPart0bra0ket0lp(inteval, &(stack[((hsi*135+2032)*1+lsi)*1]), &(stack[((hsi*55+1977)*1+lsi)*1]), &(stack[((hsi*45+1413)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*45+2167)*1+lsi)*1]), &(stack[((hsi*135+2032)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1267)*1+lsi)*1]),&(stack[((hsi*45+2167)*1+lsi)*1]),45);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1348)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_10[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1539)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_8[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1458)*1+lsi)*1]), &(stack[((hsi*6+1505)*1+lsi)*1]), &(stack[((hsi*6+1539)*1+lsi)*1]), &(stack[((hsi*3+1486)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1545)*1+lsi)*1]), &(stack[((hsi*10+1375)*1+lsi)*1]), &(stack[((hsi*10+1458)*1+lsi)*1]), &(stack[((hsi*6+1489)*1+lsi)*1]), &(stack[((hsi*6+1505)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1354)*1+lsi)*1]), &(stack[((hsi*15+1832)*1+lsi)*1]), &(stack[((hsi*15+1545)*1+lsi)*1]), &(stack[((hsi*10+1495)*1+lsi)*1]), &(stack[((hsi*10+1375)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+1468)*1+lsi)*1]), &(stack[((hsi*21+1847)*1+lsi)*1]), &(stack[((hsi*21+1354)*1+lsi)*1]), &(stack[((hsi*15+1398)*1+lsi)*1]), &(stack[((hsi*15+1832)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+2212)*1+lsi)*1]), &(stack[((hsi*28+1868)*1+lsi)*1]), &(stack[((hsi*28+1468)*1+lsi)*1]), &(stack[((hsi*21+1603)*1+lsi)*1]), &(stack[((hsi*21+1847)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+2248)*1+lsi)*1]), &(stack[((hsi*36+1896)*1+lsi)*1]), &(stack[((hsi*36+2212)*1+lsi)*1]), &(stack[((hsi*28+1624)*1+lsi)*1]), &(stack[((hsi*28+1868)*1+lsi)*1]));
OSVRRElecPotInBra_aB_m__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+2293)*1+lsi)*1]), &(stack[((hsi*45+1932)*1+lsi)*1]), &(stack[((hsi*45+2248)*1+lsi)*1]), &(stack[((hsi*36+1652)*1+lsi)*1]), &(stack[((hsi*36+1896)*1+lsi)*1]));
OSVRRElecPotInBra_aB_ps__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*66+1603)*1+lsi)*1]), &(stack[((hsi*55+1977)*1+lsi)*1]), &(stack[((hsi*55+2293)*1+lsi)*1]), &(stack[((hsi*45+1413)*1+lsi)*1]), &(stack[((hsi*45+1932)*1+lsi)*1]));
HRRPart0bra0ket0mp(inteval, &(stack[((hsi*165+2348)*1+lsi)*1]), &(stack[((hsi*66+1603)*1+lsi)*1]), &(stack[((hsi*55+1977)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_m__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*55+2513)*1+lsi)*1]), &(stack[((hsi*165+2348)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1212)*1+lsi)*1]),&(stack[((hsi*55+2513)*1+lsi)*1]),55);
OSVRRElecPotInBra_aB_p__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*3+1385)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_10[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_11[vi]));
OSVRRElecPotInBra_aB_d__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*6+1388)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]), &(stack[((hsi*3+1385)*1+lsi)*1]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_9[vi]), &(inteval->_aB_s___0___ElecPot_s___0___Ab__up_10[vi]));
OSVRRElecPotInBra_aB_f__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*10+1394)*1+lsi)*1]), &(stack[((hsi*6+1539)*1+lsi)*1]), &(stack[((hsi*6+1388)*1+lsi)*1]), &(stack[((hsi*3+1351)*1+lsi)*1]), &(stack[((hsi*3+1348)*1+lsi)*1]));
OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*15+1669)*1+lsi)*1]), &(stack[((hsi*10+1458)*1+lsi)*1]), &(stack[((hsi*10+1394)*1+lsi)*1]), &(stack[((hsi*6+1505)*1+lsi)*1]), &(stack[((hsi*6+1539)*1+lsi)*1]));
OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*21+1385)*1+lsi)*1]), &(stack[((hsi*15+1545)*1+lsi)*1]), &(stack[((hsi*15+1669)*1+lsi)*1]), &(stack[((hsi*10+1375)*1+lsi)*1]), &(stack[((hsi*10+1458)*1+lsi)*1]));
OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*28+2568)*1+lsi)*1]), &(stack[((hsi*21+1354)*1+lsi)*1]), &(stack[((hsi*21+1385)*1+lsi)*1]), &(stack[((hsi*15+1832)*1+lsi)*1]), &(stack[((hsi*15+1545)*1+lsi)*1]));
OSVRRElecPotInBra_aB_k__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+1375)*1+lsi)*1]), &(stack[((hsi*28+1468)*1+lsi)*1]), &(stack[((hsi*28+2568)*1+lsi)*1]), &(stack[((hsi*21+1847)*1+lsi)*1]), &(stack[((hsi*21+1354)*1+lsi)*1]));
OSVRRElecPotInBra_aB_l__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+2568)*1+lsi)*1]), &(stack[((hsi*36+2212)*1+lsi)*1]), &(stack[((hsi*36+1375)*1+lsi)*1]), &(stack[((hsi*28+1868)*1+lsi)*1]), &(stack[((hsi*28+1468)*1+lsi)*1]));
OSVRRElecPotInBra_aB_m__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+1348)*1+lsi)*1]), &(stack[((hsi*45+2248)*1+lsi)*1]), &(stack[((hsi*45+2568)*1+lsi)*1]), &(stack[((hsi*36+1896)*1+lsi)*1]), &(stack[((hsi*36+2212)*1+lsi)*1]));
OSVRRElecPotInBra_aB_ps__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*66+1832)*1+lsi)*1]), &(stack[((hsi*55+2293)*1+lsi)*1]), &(stack[((hsi*55+1348)*1+lsi)*1]), &(stack[((hsi*45+1932)*1+lsi)*1]), &(stack[((hsi*45+2248)*1+lsi)*1]));
OSVRRElecPotInBra_aB_pp__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*78+2212)*1+lsi)*1]), &(stack[((hsi*66+1603)*1+lsi)*1]), &(stack[((hsi*66+1832)*1+lsi)*1]), &(stack[((hsi*55+1977)*1+lsi)*1]), &(stack[((hsi*55+2293)*1+lsi)*1]));
HRRPart0bra0ket0psp(inteval, &(stack[((hsi*198+2568)*1+lsi)*1]), &(stack[((hsi*78+2212)*1+lsi)*1]), &(stack[((hsi*66+1603)*1+lsi)*1]),1);
CR_DerivGaussP0InKet_aB_ps__0___ElecPot_s001__0___Ab__up_0(inteval, &(stack[((hsi*66+1832)*1+lsi)*1]), &(stack[((hsi*198+2568)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+1146)*1+lsi)*1]),&(stack[((hsi*66+1832)*1+lsi)*1]),66);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*36+1898)*1+lsi)*1]), &(stack[((hsi*108+1688)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1110)*1+lsi)*1]),&(stack[((hsi*36+1898)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*45+1348)*1+lsi)*1]), &(stack[((hsi*135+2032)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+1065)*1+lsi)*1]),&(stack[((hsi*45+1348)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_m__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*55+2290)*1+lsi)*1]), &(stack[((hsi*165+2348)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+1010)*1+lsi)*1]),&(stack[((hsi*55+2290)*1+lsi)*1]),55);
CR_DerivGaussP0InKet_aB_ps__0___ElecPot_s010__0___Ab__up_0(inteval, &(stack[((hsi*66+2766)*1+lsi)*1]), &(stack[((hsi*198+2568)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+944)*1+lsi)*1]),&(stack[((hsi*66+2766)*1+lsi)*1]),66);
CR_DerivGaussP0InKet_aB_k__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*36+1458)*1+lsi)*1]), &(stack[((hsi*108+1688)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+908)*1+lsi)*1]),&(stack[((hsi*36+1458)*1+lsi)*1]),36);
CR_DerivGaussP0InKet_aB_l__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*45+1669)*1+lsi)*1]), &(stack[((hsi*135+2032)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+863)*1+lsi)*1]),&(stack[((hsi*45+1669)*1+lsi)*1]),45);
CR_DerivGaussP0InKet_aB_m__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*55+2032)*1+lsi)*1]), &(stack[((hsi*165+2348)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+808)*1+lsi)*1]),&(stack[((hsi*55+2032)*1+lsi)*1]),55);
CR_DerivGaussP0InKet_aB_ps__0___ElecPot_s100__0___Ab__up_0(inteval, &(stack[((hsi*66+2345)*1+lsi)*1]), &(stack[((hsi*198+2568)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+742)*1+lsi)*1]),&(stack[((hsi*66+2345)*1+lsi)*1]),66);
CR_DerivGaussP0InBra_aB_k001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+2568)*1+lsi)*1]), &(stack[((hsi*45+1413)*1+lsi)*1]), &(stack[((hsi*28+1511)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+706)*1+lsi)*1]),&(stack[((hsi*36+2568)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+2604)*1+lsi)*1]), &(stack[((hsi*55+1977)*1+lsi)*1]), &(stack[((hsi*36+1567)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+661)*1+lsi)*1]),&(stack[((hsi*45+2604)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_m001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+2649)*1+lsi)*1]), &(stack[((hsi*66+1603)*1+lsi)*1]), &(stack[((hsi*45+1413)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+606)*1+lsi)*1]),&(stack[((hsi*55+2649)*1+lsi)*1]),55);
CR_DerivGaussP0InBra_aB_ps001__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*66+2411)*1+lsi)*1]), &(stack[((hsi*78+2212)*1+lsi)*1]), &(stack[((hsi*55+1977)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+540)*1+lsi)*1]),&(stack[((hsi*66+2411)*1+lsi)*1]),66);
CR_DerivGaussP0InBra_aB_k010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+2477)*1+lsi)*1]), &(stack[((hsi*45+1413)*1+lsi)*1]), &(stack[((hsi*28+1511)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+504)*1+lsi)*1]),&(stack[((hsi*36+2477)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_l010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1714)*1+lsi)*1]), &(stack[((hsi*55+1977)*1+lsi)*1]), &(stack[((hsi*36+1567)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+459)*1+lsi)*1]),&(stack[((hsi*45+1714)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_m010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+2087)*1+lsi)*1]), &(stack[((hsi*66+1603)*1+lsi)*1]), &(stack[((hsi*45+1413)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+404)*1+lsi)*1]),&(stack[((hsi*55+2087)*1+lsi)*1]),55);
CR_DerivGaussP0InBra_aB_ps010__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*66+2832)*1+lsi)*1]), &(stack[((hsi*78+2212)*1+lsi)*1]), &(stack[((hsi*55+1977)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+338)*1+lsi)*1]),&(stack[((hsi*66+2832)*1+lsi)*1]),66);
_libint2_static_api_inc1_short_(&(stack[((hsi*36+302)*1+lsi)*1]),&(stack[((hsi*36+1567)*1+lsi)*1]),36);
CR_DerivGaussP0InBra_aB_k100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*36+2704)*1+lsi)*1]), &(stack[((hsi*45+1413)*1+lsi)*1]), &(stack[((hsi*28+1511)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+266)*1+lsi)*1]),&(stack[((hsi*36+2704)*1+lsi)*1]),36);
_libint2_static_api_inc1_short_(&(stack[((hsi*45+221)*1+lsi)*1]),&(stack[((hsi*45+1413)*1+lsi)*1]),45);
CR_DerivGaussP0InBra_aB_l100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*45+1494)*1+lsi)*1]), &(stack[((hsi*55+1977)*1+lsi)*1]), &(stack[((hsi*36+1567)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*45+176)*1+lsi)*1]),&(stack[((hsi*45+1494)*1+lsi)*1]),45);
_libint2_static_api_inc1_short_(&(stack[((hsi*55+121)*1+lsi)*1]),&(stack[((hsi*55+1977)*1+lsi)*1]),55);
CR_DerivGaussP0InBra_aB_m100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*55+2898)*1+lsi)*1]), &(stack[((hsi*66+1603)*1+lsi)*1]), &(stack[((hsi*45+1413)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*55+66)*1+lsi)*1]),&(stack[((hsi*55+2898)*1+lsi)*1]),55);
CR_DerivGaussP0InBra_aB_ps100__0___ElecPot_s__0___Ab__up_0(inteval, &(stack[((hsi*66+1603)*1+lsi)*1]), &(stack[((hsi*78+2212)*1+lsi)*1]), &(stack[((hsi*55+1977)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*66+0)*1+lsi)*1]),&(stack[((hsi*66+1603)*1+lsi)*1]),66);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1348 */
}

#ifdef __cplusplus
};
#endif
