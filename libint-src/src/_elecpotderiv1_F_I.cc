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
#include <HRRPart0ket0bra0id.h>
#include <HRRPart0ket0bra0id001.h>
#include <HRRPart0ket0bra0id010.h>
#include <HRRPart0ket0bra0id100.h>
#include <HRRPart0ket0bra0if001.h>
#include <HRRPart0ket0bra0if010.h>
#include <HRRPart0ket0bra0if100.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0ip001.h>
#include <HRRPart0ket0bra0ip010.h>
#include <HRRPart0ket0bra0ip100.h>
#include <HRRPart0ket0bra0i001d.h>
#include <HRRPart0ket0bra0i001f.h>
#include <HRRPart0ket0bra0i001p.h>
#include <HRRPart0ket0bra0i010d.h>
#include <HRRPart0ket0bra0i010f.h>
#include <HRRPart0ket0bra0i010p.h>
#include <HRRPart0ket0bra0i100d.h>
#include <HRRPart0ket0bra0i100f.h>
#include <HRRPart0ket0bra0i100p.h>
#include <HRRPart0ket0bra0kd001.h>
#include <HRRPart0ket0bra0kd010.h>
#include <HRRPart0ket0bra0kd100.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0kp001.h>
#include <HRRPart0ket0bra0kp010.h>
#include <HRRPart0ket0bra0kp100.h>
#include <HRRPart0ket0bra0k001d.h>
#include <HRRPart0ket0bra0k001p.h>
#include <HRRPart0ket0bra0k010d.h>
#include <HRRPart0ket0bra0k010p.h>
#include <HRRPart0ket0bra0k100d.h>
#include <HRRPart0ket0bra0k100p.h>
#include <HRRPart0ket0bra0lp001.h>
#include <HRRPart0ket0bra0lp010.h>
#include <HRRPart0ket0bra0lp100.h>
#include <HRRPart0ket0bra0l001p.h>
#include <HRRPart0ket0bra0l010p.h>
#include <HRRPart0ket0bra0l100p.h>
#include <_elecpotderiv1_F_I_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _elecpotderiv1_F_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1093)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv1_F_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2773)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2857)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2965)*1+lsi)*1]), &(inteval->stack[((hsi*108+2857)*1+lsi)*1]), &(inteval->stack[((hsi*84+2773)*1+lsi)*1]),1);
HRRPart0ket0bra0k001p(inteval, &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*45+984)*1+lsi)*1]), &(inteval->stack[((hsi*36+1029)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0ket0bra0i001p(inteval, &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*36+1029)*1+lsi)*1]), &(inteval->stack[((hsi*28+1065)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0ket0bra0i001d(inteval, &(inteval->stack[((hsi*168+3325)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*84+2773)*1+lsi)*1]),1);
HRRPart0ket0bra0l001p(inteval, &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*55+929)*1+lsi)*1]), &(inteval->stack[((hsi*45+984)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0ket0bra0k001d(inteval, &(inteval->stack[((hsi*216+3628)*1+lsi)*1]), &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*108+2857)*1+lsi)*1]),1);
HRRPart0ket0bra0i001f(inteval, &(inteval->stack[((hsi*280+2493)*1+lsi)*1]), &(inteval->stack[((hsi*216+3628)*1+lsi)*1]), &(inteval->stack[((hsi*168+3325)*1+lsi)*1]), &(inteval->stack[((hsi*168+2965)*1+lsi)*1]),1);
HRRPart0ket0bra0k010p(inteval, &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*45+820)*1+lsi)*1]), &(inteval->stack[((hsi*36+865)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0ket0bra0i010p(inteval, &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*36+865)*1+lsi)*1]), &(inteval->stack[((hsi*28+901)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0ket0bra0i010d(inteval, &(inteval->stack[((hsi*168+865)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*84+2773)*1+lsi)*1]),1);
HRRPart0ket0bra0l010p(inteval, &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*55+765)*1+lsi)*1]), &(inteval->stack[((hsi*45+820)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0ket0bra0k010d(inteval, &(inteval->stack[((hsi*216+3844)*1+lsi)*1]), &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*108+2857)*1+lsi)*1]),1);
HRRPart0ket0bra0i010f(inteval, &(inteval->stack[((hsi*280+2213)*1+lsi)*1]), &(inteval->stack[((hsi*216+3844)*1+lsi)*1]), &(inteval->stack[((hsi*168+865)*1+lsi)*1]), &(inteval->stack[((hsi*168+2965)*1+lsi)*1]),1);
HRRPart0ket0bra0k100p(inteval, &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*45+656)*1+lsi)*1]), &(inteval->stack[((hsi*36+701)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0ket0bra0i100p(inteval, &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*36+701)*1+lsi)*1]), &(inteval->stack[((hsi*28+737)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0ket0bra0i100d(inteval, &(inteval->stack[((hsi*168+4060)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*84+2773)*1+lsi)*1]),1);
HRRPart0ket0bra0l100p(inteval, &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*55+601)*1+lsi)*1]), &(inteval->stack[((hsi*45+656)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0ket0bra0k100d(inteval, &(inteval->stack[((hsi*216+601)*1+lsi)*1]), &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*108+2857)*1+lsi)*1]),1);
HRRPart0ket0bra0i100f(inteval, &(inteval->stack[((hsi*280+1933)*1+lsi)*1]), &(inteval->stack[((hsi*216+601)*1+lsi)*1]), &(inteval->stack[((hsi*168+4060)*1+lsi)*1]), &(inteval->stack[((hsi*168+2965)*1+lsi)*1]),1);
HRRPart0ket0bra0kp001(inteval, &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*45+492)*1+lsi)*1]), &(inteval->stack[((hsi*36+537)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0ket0bra0ip001(inteval, &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*36+537)*1+lsi)*1]), &(inteval->stack[((hsi*28+573)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0ket0bra0id001(inteval, &(inteval->stack[((hsi*168+4228)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*84+2773)*1+lsi)*1]),1);
HRRPart0ket0bra0lp001(inteval, &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*55+437)*1+lsi)*1]), &(inteval->stack[((hsi*45+492)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0ket0bra0kd001(inteval, &(inteval->stack[((hsi*216+4396)*1+lsi)*1]), &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*108+2857)*1+lsi)*1]),1);
HRRPart0ket0bra0if001(inteval, &(inteval->stack[((hsi*280+1653)*1+lsi)*1]), &(inteval->stack[((hsi*216+4396)*1+lsi)*1]), &(inteval->stack[((hsi*168+4228)*1+lsi)*1]), &(inteval->stack[((hsi*168+2965)*1+lsi)*1]),1);
HRRPart0ket0bra0kp010(inteval, &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*45+328)*1+lsi)*1]), &(inteval->stack[((hsi*36+373)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0ket0bra0ip010(inteval, &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*36+373)*1+lsi)*1]), &(inteval->stack[((hsi*28+409)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0ket0bra0id010(inteval, &(inteval->stack[((hsi*168+373)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*84+2773)*1+lsi)*1]),1);
HRRPart0ket0bra0lp010(inteval, &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*55+273)*1+lsi)*1]), &(inteval->stack[((hsi*45+328)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0ket0bra0kd010(inteval, &(inteval->stack[((hsi*216+4612)*1+lsi)*1]), &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*108+2857)*1+lsi)*1]),1);
HRRPart0ket0bra0if010(inteval, &(inteval->stack[((hsi*280+1373)*1+lsi)*1]), &(inteval->stack[((hsi*216+4612)*1+lsi)*1]), &(inteval->stack[((hsi*168+373)*1+lsi)*1]), &(inteval->stack[((hsi*168+2965)*1+lsi)*1]),1);
HRRPart0ket0bra0kp100(inteval, &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*36+145)*1+lsi)*1]), &(inteval->stack[((hsi*36+181)*1+lsi)*1]),1);
HRRPart0ket0bra0ip100(inteval, &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*36+145)*1+lsi)*1]), &(inteval->stack[((hsi*28+217)*1+lsi)*1]), &(inteval->stack[((hsi*28+245)*1+lsi)*1]),1);
HRRPart0ket0bra0id100(inteval, &(inteval->stack[((hsi*168+145)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*84+3241)*1+lsi)*1]), &(inteval->stack[((hsi*84+2773)*1+lsi)*1]),1);
HRRPart0ket0bra0lp100(inteval, &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*45+100)*1+lsi)*1]),1);
HRRPart0ket0bra0kd100(inteval, &(inteval->stack[((hsi*216+4828)*1+lsi)*1]), &(inteval->stack[((hsi*135+3493)*1+lsi)*1]), &(inteval->stack[((hsi*108+3133)*1+lsi)*1]), &(inteval->stack[((hsi*108+2857)*1+lsi)*1]),1);
HRRPart0ket0bra0if100(inteval, &(inteval->stack[((hsi*280+1093)*1+lsi)*1]), &(inteval->stack[((hsi*216+4828)*1+lsi)*1]), &(inteval->stack[((hsi*168+145)*1+lsi)*1]), &(inteval->stack[((hsi*168+2965)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*280+1093)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*280+1373)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*280+1653)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*280+1933)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*280+2213)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*280+2493)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
