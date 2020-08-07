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
#include <HRRPart0bra0ket0hd001.h>
#include <HRRPart0bra0ket0hd002.h>
#include <HRRPart0bra0ket0hd010.h>
#include <HRRPart0bra0ket0hd011.h>
#include <HRRPart0bra0ket0hd020.h>
#include <HRRPart0bra0ket0hd100.h>
#include <HRRPart0bra0ket0hd101.h>
#include <HRRPart0bra0ket0hd110.h>
#include <HRRPart0bra0ket0hd200.h>
#include <HRRPart0bra0ket0hf002.h>
#include <HRRPart0bra0ket0hf011.h>
#include <HRRPart0bra0ket0hf020.h>
#include <HRRPart0bra0ket0hf101.h>
#include <HRRPart0bra0ket0hf110.h>
#include <HRRPart0bra0ket0hf200.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0hp001.h>
#include <HRRPart0bra0ket0hp002.h>
#include <HRRPart0bra0ket0hp010.h>
#include <HRRPart0bra0ket0hp011.h>
#include <HRRPart0bra0ket0hp020.h>
#include <HRRPart0bra0ket0hp100.h>
#include <HRRPart0bra0ket0hp101.h>
#include <HRRPart0bra0ket0hp110.h>
#include <HRRPart0bra0ket0hp200.h>
#include <HRRPart0bra0ket0h001d.h>
#include <HRRPart0bra0ket0h001d001.h>
#include <HRRPart0bra0ket0h001d010.h>
#include <HRRPart0bra0ket0h001d100.h>
#include <HRRPart0bra0ket0h001f001.h>
#include <HRRPart0bra0ket0h001f010.h>
#include <HRRPart0bra0ket0h001f100.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h001p001.h>
#include <HRRPart0bra0ket0h001p010.h>
#include <HRRPart0bra0ket0h001p100.h>
#include <HRRPart0bra0ket0h002d.h>
#include <HRRPart0bra0ket0h002f.h>
#include <HRRPart0bra0ket0h002p.h>
#include <HRRPart0bra0ket0h010d.h>
#include <HRRPart0bra0ket0h010d001.h>
#include <HRRPart0bra0ket0h010d010.h>
#include <HRRPart0bra0ket0h010d100.h>
#include <HRRPart0bra0ket0h010f001.h>
#include <HRRPart0bra0ket0h010f010.h>
#include <HRRPart0bra0ket0h010f100.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h010p001.h>
#include <HRRPart0bra0ket0h010p010.h>
#include <HRRPart0bra0ket0h010p100.h>
#include <HRRPart0bra0ket0h011d.h>
#include <HRRPart0bra0ket0h011f.h>
#include <HRRPart0bra0ket0h011p.h>
#include <HRRPart0bra0ket0h020d.h>
#include <HRRPart0bra0ket0h020f.h>
#include <HRRPart0bra0ket0h020p.h>
#include <HRRPart0bra0ket0h100d.h>
#include <HRRPart0bra0ket0h100d001.h>
#include <HRRPart0bra0ket0h100d010.h>
#include <HRRPart0bra0ket0h100d100.h>
#include <HRRPart0bra0ket0h100f001.h>
#include <HRRPart0bra0ket0h100f010.h>
#include <HRRPart0bra0ket0h100f100.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart0bra0ket0h100p001.h>
#include <HRRPart0bra0ket0h100p010.h>
#include <HRRPart0bra0ket0h100p100.h>
#include <HRRPart0bra0ket0h101d.h>
#include <HRRPart0bra0ket0h101f.h>
#include <HRRPart0bra0ket0h101p.h>
#include <HRRPart0bra0ket0h110d.h>
#include <HRRPart0bra0ket0h110f.h>
#include <HRRPart0bra0ket0h110p.h>
#include <HRRPart0bra0ket0h200d.h>
#include <HRRPart0bra0ket0h200f.h>
#include <HRRPart0bra0ket0h200p.h>
#include <HRRPart0bra0ket0id002.h>
#include <HRRPart0bra0ket0id011.h>
#include <HRRPart0bra0ket0id020.h>
#include <HRRPart0bra0ket0id101.h>
#include <HRRPart0bra0ket0id110.h>
#include <HRRPart0bra0ket0id200.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip002.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip011.h>
#include <HRRPart0bra0ket0ip020.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0ip101.h>
#include <HRRPart0bra0ket0ip110.h>
#include <HRRPart0bra0ket0ip200.h>
#include <HRRPart0bra0ket0i001d001.h>
#include <HRRPart0bra0ket0i001d010.h>
#include <HRRPart0bra0ket0i001d100.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i001p001.h>
#include <HRRPart0bra0ket0i001p010.h>
#include <HRRPart0bra0ket0i001p100.h>
#include <HRRPart0bra0ket0i002d.h>
#include <HRRPart0bra0ket0i002p.h>
#include <HRRPart0bra0ket0i010d001.h>
#include <HRRPart0bra0ket0i010d010.h>
#include <HRRPart0bra0ket0i010d100.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i010p001.h>
#include <HRRPart0bra0ket0i010p010.h>
#include <HRRPart0bra0ket0i010p100.h>
#include <HRRPart0bra0ket0i011d.h>
#include <HRRPart0bra0ket0i011p.h>
#include <HRRPart0bra0ket0i020d.h>
#include <HRRPart0bra0ket0i020p.h>
#include <HRRPart0bra0ket0i100d001.h>
#include <HRRPart0bra0ket0i100d010.h>
#include <HRRPart0bra0ket0i100d100.h>
#include <HRRPart0bra0ket0i100p.h>
#include <HRRPart0bra0ket0i100p001.h>
#include <HRRPart0bra0ket0i100p010.h>
#include <HRRPart0bra0ket0i100p100.h>
#include <HRRPart0bra0ket0i101d.h>
#include <HRRPart0bra0ket0i101p.h>
#include <HRRPart0bra0ket0i110d.h>
#include <HRRPart0bra0ket0i110p.h>
#include <HRRPart0bra0ket0i200d.h>
#include <HRRPart0bra0ket0i200p.h>
#include <HRRPart0bra0ket0kp002.h>
#include <HRRPart0bra0ket0kp011.h>
#include <HRRPart0bra0ket0kp020.h>
#include <HRRPart0bra0ket0kp101.h>
#include <HRRPart0bra0ket0kp110.h>
#include <HRRPart0bra0ket0kp200.h>
#include <HRRPart0bra0ket0k001p001.h>
#include <HRRPart0bra0ket0k001p010.h>
#include <HRRPart0bra0ket0k001p100.h>
#include <HRRPart0bra0ket0k002p.h>
#include <HRRPart0bra0ket0k010p001.h>
#include <HRRPart0bra0ket0k010p010.h>
#include <HRRPart0bra0ket0k010p100.h>
#include <HRRPart0bra0ket0k011p.h>
#include <HRRPart0bra0ket0k020p.h>
#include <HRRPart0bra0ket0k100p001.h>
#include <HRRPart0bra0ket0k100p010.h>
#include <HRRPart0bra0ket0k100p100.h>
#include <HRRPart0bra0ket0k101p.h>
#include <HRRPart0bra0ket0k110p.h>
#include <HRRPart0bra0ket0k200p.h>
#include <_elecpotderiv2_H_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv2_H_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3289)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv2_H_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+7699)*1+lsi)*1]), &(inteval->stack[((hsi*28+1269)*1+lsi)*1]), &(inteval->stack[((hsi*21+1318)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+7762)*1+lsi)*1]), &(inteval->stack[((hsi*36+1205)*1+lsi)*1]), &(inteval->stack[((hsi*28+1269)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+7846)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+7909)*1+lsi)*1]), &(inteval->stack[((hsi*84+7762)*1+lsi)*1]), &(inteval->stack[((hsi*63+7699)*1+lsi)*1]), &(inteval->stack[((hsi*63+7846)*1+lsi)*1]),1);
HRRPart0bra0ket0ip002(inteval, &(inteval->stack[((hsi*84+8035)*1+lsi)*1]), &(inteval->stack[((hsi*36+3204)*1+lsi)*1]), &(inteval->stack[((hsi*28+3240)*1+lsi)*1]), &(inteval->stack[((hsi*28+1269)*1+lsi)*1]),1);
HRRPart0bra0ket0hp002(inteval, &(inteval->stack[((hsi*63+8119)*1+lsi)*1]), &(inteval->stack[((hsi*28+3240)*1+lsi)*1]), &(inteval->stack[((hsi*21+3268)*1+lsi)*1]), &(inteval->stack[((hsi*21+1318)*1+lsi)*1]),1);
HRRPart0bra0ket0hd002(inteval, &(inteval->stack[((hsi*126+8182)*1+lsi)*1]), &(inteval->stack[((hsi*84+8035)*1+lsi)*1]), &(inteval->stack[((hsi*63+8119)*1+lsi)*1]), &(inteval->stack[((hsi*63+7699)*1+lsi)*1]),1);
HRRPart0bra0ket0kp002(inteval, &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*45+3159)*1+lsi)*1]), &(inteval->stack[((hsi*36+3204)*1+lsi)*1]), &(inteval->stack[((hsi*36+1205)*1+lsi)*1]),1);
HRRPart0bra0ket0id002(inteval, &(inteval->stack[((hsi*168+8416)*1+lsi)*1]), &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*84+8035)*1+lsi)*1]), &(inteval->stack[((hsi*84+7762)*1+lsi)*1]),1);
HRRPart0bra0ket0hf002(inteval, &(inteval->stack[((hsi*210+7489)*1+lsi)*1]), &(inteval->stack[((hsi*168+8416)*1+lsi)*1]), &(inteval->stack[((hsi*126+8182)*1+lsi)*1]), &(inteval->stack[((hsi*126+7909)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+8035)*1+lsi)*1]), &(inteval->stack[((hsi*28+1054)*1+lsi)*1]), &(inteval->stack[((hsi*21+1103)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+8098)*1+lsi)*1]), &(inteval->stack[((hsi*36+990)*1+lsi)*1]), &(inteval->stack[((hsi*28+1054)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+3159)*1+lsi)*1]), &(inteval->stack[((hsi*84+8098)*1+lsi)*1]), &(inteval->stack[((hsi*63+8035)*1+lsi)*1]), &(inteval->stack[((hsi*63+7846)*1+lsi)*1]),1);
HRRPart0bra0ket0ip011(inteval, &(inteval->stack[((hsi*84+8308)*1+lsi)*1]), &(inteval->stack[((hsi*36+3074)*1+lsi)*1]), &(inteval->stack[((hsi*28+3110)*1+lsi)*1]), &(inteval->stack[((hsi*28+1269)*1+lsi)*1]), &(inteval->stack[((hsi*28+1054)*1+lsi)*1]),1);
HRRPart0bra0ket0hp011(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+3110)*1+lsi)*1]), &(inteval->stack[((hsi*21+3138)*1+lsi)*1]), &(inteval->stack[((hsi*21+1318)*1+lsi)*1]), &(inteval->stack[((hsi*21+1103)*1+lsi)*1]),1);
HRRPart0bra0ket0hd011(inteval, &(inteval->stack[((hsi*126+8647)*1+lsi)*1]), &(inteval->stack[((hsi*84+8308)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*63+7699)*1+lsi)*1]), &(inteval->stack[((hsi*63+8035)*1+lsi)*1]),1);
HRRPart0bra0ket0kp011(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+3029)*1+lsi)*1]), &(inteval->stack[((hsi*36+3074)*1+lsi)*1]), &(inteval->stack[((hsi*36+1205)*1+lsi)*1]), &(inteval->stack[((hsi*36+990)*1+lsi)*1]),1);
HRRPart0bra0ket0id011(inteval, &(inteval->stack[((hsi*168+8881)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8308)*1+lsi)*1]), &(inteval->stack[((hsi*84+7762)*1+lsi)*1]), &(inteval->stack[((hsi*84+8098)*1+lsi)*1]),1);
HRRPart0bra0ket0hf011(inteval, &(inteval->stack[((hsi*210+7279)*1+lsi)*1]), &(inteval->stack[((hsi*168+8881)*1+lsi)*1]), &(inteval->stack[((hsi*126+8647)*1+lsi)*1]), &(inteval->stack[((hsi*126+7909)*1+lsi)*1]), &(inteval->stack[((hsi*126+3159)*1+lsi)*1]),1);
HRRPart0bra0ket0ip020(inteval, &(inteval->stack[((hsi*84+3029)*1+lsi)*1]), &(inteval->stack[((hsi*36+2944)*1+lsi)*1]), &(inteval->stack[((hsi*28+2980)*1+lsi)*1]), &(inteval->stack[((hsi*28+1054)*1+lsi)*1]),1);
HRRPart0bra0ket0hp020(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2980)*1+lsi)*1]), &(inteval->stack[((hsi*21+3008)*1+lsi)*1]), &(inteval->stack[((hsi*21+1103)*1+lsi)*1]),1);
HRRPart0bra0ket0hd020(inteval, &(inteval->stack[((hsi*126+9049)*1+lsi)*1]), &(inteval->stack[((hsi*84+3029)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*63+8035)*1+lsi)*1]),1);
HRRPart0bra0ket0kp020(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2899)*1+lsi)*1]), &(inteval->stack[((hsi*36+2944)*1+lsi)*1]), &(inteval->stack[((hsi*36+990)*1+lsi)*1]),1);
HRRPart0bra0ket0id020(inteval, &(inteval->stack[((hsi*168+9175)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+3029)*1+lsi)*1]), &(inteval->stack[((hsi*84+8098)*1+lsi)*1]),1);
HRRPart0bra0ket0hf020(inteval, &(inteval->stack[((hsi*210+7069)*1+lsi)*1]), &(inteval->stack[((hsi*168+9175)*1+lsi)*1]), &(inteval->stack[((hsi*126+9049)*1+lsi)*1]), &(inteval->stack[((hsi*126+3159)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+839)*1+lsi)*1]), &(inteval->stack[((hsi*21+888)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+2899)*1+lsi)*1]), &(inteval->stack[((hsi*36+775)*1+lsi)*1]), &(inteval->stack[((hsi*28+839)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+2983)*1+lsi)*1]), &(inteval->stack[((hsi*84+2899)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*63+7846)*1+lsi)*1]),1);
HRRPart0bra0ket0ip101(inteval, &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*36+2814)*1+lsi)*1]), &(inteval->stack[((hsi*28+2850)*1+lsi)*1]), &(inteval->stack[((hsi*28+1269)*1+lsi)*1]), &(inteval->stack[((hsi*28+839)*1+lsi)*1]),1);
HRRPart0bra0ket0hp101(inteval, &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*28+2850)*1+lsi)*1]), &(inteval->stack[((hsi*21+2878)*1+lsi)*1]), &(inteval->stack[((hsi*21+1318)*1+lsi)*1]), &(inteval->stack[((hsi*21+888)*1+lsi)*1]),1);
HRRPart0bra0ket0hd101(inteval, &(inteval->stack[((hsi*126+9343)*1+lsi)*1]), &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*63+7699)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp101(inteval, &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*45+2769)*1+lsi)*1]), &(inteval->stack[((hsi*36+2814)*1+lsi)*1]), &(inteval->stack[((hsi*36+1205)*1+lsi)*1]), &(inteval->stack[((hsi*36+775)*1+lsi)*1]),1);
HRRPart0bra0ket0id101(inteval, &(inteval->stack[((hsi*168+9469)*1+lsi)*1]), &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+7762)*1+lsi)*1]), &(inteval->stack[((hsi*84+2899)*1+lsi)*1]),1);
HRRPart0bra0ket0hf101(inteval, &(inteval->stack[((hsi*210+6859)*1+lsi)*1]), &(inteval->stack[((hsi*168+9469)*1+lsi)*1]), &(inteval->stack[((hsi*126+9343)*1+lsi)*1]), &(inteval->stack[((hsi*126+7909)*1+lsi)*1]), &(inteval->stack[((hsi*126+2983)*1+lsi)*1]),1);
HRRPart0bra0ket0ip110(inteval, &(inteval->stack[((hsi*84+2769)*1+lsi)*1]), &(inteval->stack[((hsi*36+2684)*1+lsi)*1]), &(inteval->stack[((hsi*28+2720)*1+lsi)*1]), &(inteval->stack[((hsi*28+1054)*1+lsi)*1]), &(inteval->stack[((hsi*28+839)*1+lsi)*1]),1);
HRRPart0bra0ket0hp110(inteval, &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*28+2720)*1+lsi)*1]), &(inteval->stack[((hsi*21+2748)*1+lsi)*1]), &(inteval->stack[((hsi*21+1103)*1+lsi)*1]), &(inteval->stack[((hsi*21+888)*1+lsi)*1]),1);
HRRPart0bra0ket0hd110(inteval, &(inteval->stack[((hsi*126+9637)*1+lsi)*1]), &(inteval->stack[((hsi*84+2769)*1+lsi)*1]), &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*63+8035)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp110(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2639)*1+lsi)*1]), &(inteval->stack[((hsi*36+2684)*1+lsi)*1]), &(inteval->stack[((hsi*36+990)*1+lsi)*1]), &(inteval->stack[((hsi*36+775)*1+lsi)*1]),1);
HRRPart0bra0ket0id110(inteval, &(inteval->stack[((hsi*168+9763)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+2769)*1+lsi)*1]), &(inteval->stack[((hsi*84+8098)*1+lsi)*1]), &(inteval->stack[((hsi*84+2899)*1+lsi)*1]),1);
HRRPart0bra0ket0hf110(inteval, &(inteval->stack[((hsi*210+6649)*1+lsi)*1]), &(inteval->stack[((hsi*168+9763)*1+lsi)*1]), &(inteval->stack[((hsi*126+9637)*1+lsi)*1]), &(inteval->stack[((hsi*126+3159)*1+lsi)*1]), &(inteval->stack[((hsi*126+2983)*1+lsi)*1]),1);
HRRPart0bra0ket0ip200(inteval, &(inteval->stack[((hsi*84+2639)*1+lsi)*1]), &(inteval->stack[((hsi*36+2554)*1+lsi)*1]), &(inteval->stack[((hsi*28+2590)*1+lsi)*1]), &(inteval->stack[((hsi*28+839)*1+lsi)*1]),1);
HRRPart0bra0ket0hp200(inteval, &(inteval->stack[((hsi*63+2723)*1+lsi)*1]), &(inteval->stack[((hsi*28+2590)*1+lsi)*1]), &(inteval->stack[((hsi*21+2618)*1+lsi)*1]), &(inteval->stack[((hsi*21+888)*1+lsi)*1]),1);
HRRPart0bra0ket0hd200(inteval, &(inteval->stack[((hsi*126+9931)*1+lsi)*1]), &(inteval->stack[((hsi*84+2639)*1+lsi)*1]), &(inteval->stack[((hsi*63+2723)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp200(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2509)*1+lsi)*1]), &(inteval->stack[((hsi*36+2554)*1+lsi)*1]), &(inteval->stack[((hsi*36+775)*1+lsi)*1]),1);
HRRPart0bra0ket0id200(inteval, &(inteval->stack[((hsi*168+2723)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+2639)*1+lsi)*1]), &(inteval->stack[((hsi*84+2899)*1+lsi)*1]),1);
HRRPart0bra0ket0hf200(inteval, &(inteval->stack[((hsi*210+6439)*1+lsi)*1]), &(inteval->stack[((hsi*168+2723)*1+lsi)*1]), &(inteval->stack[((hsi*126+9931)*1+lsi)*1]), &(inteval->stack[((hsi*126+2983)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+2509)*1+lsi)*1]), &(inteval->stack[((hsi*28+624)*1+lsi)*1]), &(inteval->stack[((hsi*21+673)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+2572)*1+lsi)*1]), &(inteval->stack[((hsi*36+560)*1+lsi)*1]), &(inteval->stack[((hsi*28+624)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d(inteval, &(inteval->stack[((hsi*126+10057)*1+lsi)*1]), &(inteval->stack[((hsi*84+2572)*1+lsi)*1]), &(inteval->stack[((hsi*63+2509)*1+lsi)*1]), &(inteval->stack[((hsi*63+7846)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p001(inteval, &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*36+2424)*1+lsi)*1]), &(inteval->stack[((hsi*28+2460)*1+lsi)*1]), &(inteval->stack[((hsi*28+1269)*1+lsi)*1]), &(inteval->stack[((hsi*28+624)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p001(inteval, &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*28+2460)*1+lsi)*1]), &(inteval->stack[((hsi*21+2488)*1+lsi)*1]), &(inteval->stack[((hsi*21+1318)*1+lsi)*1]), &(inteval->stack[((hsi*21+673)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d001(inteval, &(inteval->stack[((hsi*126+10183)*1+lsi)*1]), &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*63+7699)*1+lsi)*1]), &(inteval->stack[((hsi*63+2509)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p001(inteval, &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*45+2379)*1+lsi)*1]), &(inteval->stack[((hsi*36+2424)*1+lsi)*1]), &(inteval->stack[((hsi*36+1205)*1+lsi)*1]), &(inteval->stack[((hsi*36+560)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d001(inteval, &(inteval->stack[((hsi*168+10309)*1+lsi)*1]), &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+7762)*1+lsi)*1]), &(inteval->stack[((hsi*84+2572)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f001(inteval, &(inteval->stack[((hsi*210+6229)*1+lsi)*1]), &(inteval->stack[((hsi*168+10309)*1+lsi)*1]), &(inteval->stack[((hsi*126+10183)*1+lsi)*1]), &(inteval->stack[((hsi*126+7909)*1+lsi)*1]), &(inteval->stack[((hsi*126+10057)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p010(inteval, &(inteval->stack[((hsi*84+2379)*1+lsi)*1]), &(inteval->stack[((hsi*36+2294)*1+lsi)*1]), &(inteval->stack[((hsi*28+2330)*1+lsi)*1]), &(inteval->stack[((hsi*28+624)*1+lsi)*1]), &(inteval->stack[((hsi*28+1054)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p010(inteval, &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*28+2330)*1+lsi)*1]), &(inteval->stack[((hsi*21+2358)*1+lsi)*1]), &(inteval->stack[((hsi*21+673)*1+lsi)*1]), &(inteval->stack[((hsi*21+1103)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d010(inteval, &(inteval->stack[((hsi*126+10477)*1+lsi)*1]), &(inteval->stack[((hsi*84+2379)*1+lsi)*1]), &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*63+2509)*1+lsi)*1]), &(inteval->stack[((hsi*63+8035)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p010(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2249)*1+lsi)*1]), &(inteval->stack[((hsi*36+2294)*1+lsi)*1]), &(inteval->stack[((hsi*36+560)*1+lsi)*1]), &(inteval->stack[((hsi*36+990)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d010(inteval, &(inteval->stack[((hsi*168+10603)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+2379)*1+lsi)*1]), &(inteval->stack[((hsi*84+2572)*1+lsi)*1]), &(inteval->stack[((hsi*84+8098)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f010(inteval, &(inteval->stack[((hsi*210+6019)*1+lsi)*1]), &(inteval->stack[((hsi*168+10603)*1+lsi)*1]), &(inteval->stack[((hsi*126+10477)*1+lsi)*1]), &(inteval->stack[((hsi*126+10057)*1+lsi)*1]), &(inteval->stack[((hsi*126+3159)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p100(inteval, &(inteval->stack[((hsi*84+2249)*1+lsi)*1]), &(inteval->stack[((hsi*36+2164)*1+lsi)*1]), &(inteval->stack[((hsi*28+2200)*1+lsi)*1]), &(inteval->stack[((hsi*28+624)*1+lsi)*1]), &(inteval->stack[((hsi*28+839)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p100(inteval, &(inteval->stack[((hsi*63+2333)*1+lsi)*1]), &(inteval->stack[((hsi*28+2200)*1+lsi)*1]), &(inteval->stack[((hsi*21+2228)*1+lsi)*1]), &(inteval->stack[((hsi*21+673)*1+lsi)*1]), &(inteval->stack[((hsi*21+888)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d100(inteval, &(inteval->stack[((hsi*126+10771)*1+lsi)*1]), &(inteval->stack[((hsi*84+2249)*1+lsi)*1]), &(inteval->stack[((hsi*63+2333)*1+lsi)*1]), &(inteval->stack[((hsi*63+2509)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p100(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2119)*1+lsi)*1]), &(inteval->stack[((hsi*36+2164)*1+lsi)*1]), &(inteval->stack[((hsi*36+560)*1+lsi)*1]), &(inteval->stack[((hsi*36+775)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d100(inteval, &(inteval->stack[((hsi*168+2333)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+2249)*1+lsi)*1]), &(inteval->stack[((hsi*84+2572)*1+lsi)*1]), &(inteval->stack[((hsi*84+2899)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f100(inteval, &(inteval->stack[((hsi*210+5809)*1+lsi)*1]), &(inteval->stack[((hsi*168+2333)*1+lsi)*1]), &(inteval->stack[((hsi*126+10771)*1+lsi)*1]), &(inteval->stack[((hsi*126+10057)*1+lsi)*1]), &(inteval->stack[((hsi*126+2983)*1+lsi)*1]),1);
HRRPart0bra0ket0i002p(inteval, &(inteval->stack[((hsi*84+2119)*1+lsi)*1]), &(inteval->stack[((hsi*36+2034)*1+lsi)*1]), &(inteval->stack[((hsi*28+2070)*1+lsi)*1]), &(inteval->stack[((hsi*28+624)*1+lsi)*1]),1);
HRRPart0bra0ket0h002p(inteval, &(inteval->stack[((hsi*63+2203)*1+lsi)*1]), &(inteval->stack[((hsi*28+2070)*1+lsi)*1]), &(inteval->stack[((hsi*21+2098)*1+lsi)*1]), &(inteval->stack[((hsi*21+673)*1+lsi)*1]),1);
HRRPart0bra0ket0h002d(inteval, &(inteval->stack[((hsi*126+10897)*1+lsi)*1]), &(inteval->stack[((hsi*84+2119)*1+lsi)*1]), &(inteval->stack[((hsi*63+2203)*1+lsi)*1]), &(inteval->stack[((hsi*63+2509)*1+lsi)*1]),1);
HRRPart0bra0ket0k002p(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1989)*1+lsi)*1]), &(inteval->stack[((hsi*36+2034)*1+lsi)*1]), &(inteval->stack[((hsi*36+560)*1+lsi)*1]),1);
HRRPart0bra0ket0i002d(inteval, &(inteval->stack[((hsi*168+11023)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+2119)*1+lsi)*1]), &(inteval->stack[((hsi*84+2572)*1+lsi)*1]),1);
HRRPart0bra0ket0h002f(inteval, &(inteval->stack[((hsi*210+5599)*1+lsi)*1]), &(inteval->stack[((hsi*168+11023)*1+lsi)*1]), &(inteval->stack[((hsi*126+10897)*1+lsi)*1]), &(inteval->stack[((hsi*126+10057)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+1989)*1+lsi)*1]), &(inteval->stack[((hsi*28+409)*1+lsi)*1]), &(inteval->stack[((hsi*21+458)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+2052)*1+lsi)*1]), &(inteval->stack[((hsi*36+345)*1+lsi)*1]), &(inteval->stack[((hsi*28+409)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d(inteval, &(inteval->stack[((hsi*126+2136)*1+lsi)*1]), &(inteval->stack[((hsi*84+2052)*1+lsi)*1]), &(inteval->stack[((hsi*63+1989)*1+lsi)*1]), &(inteval->stack[((hsi*63+7846)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p001(inteval, &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*36+1904)*1+lsi)*1]), &(inteval->stack[((hsi*28+1940)*1+lsi)*1]), &(inteval->stack[((hsi*28+1269)*1+lsi)*1]), &(inteval->stack[((hsi*28+409)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p001(inteval, &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*28+1940)*1+lsi)*1]), &(inteval->stack[((hsi*21+1968)*1+lsi)*1]), &(inteval->stack[((hsi*21+1318)*1+lsi)*1]), &(inteval->stack[((hsi*21+458)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d001(inteval, &(inteval->stack[((hsi*126+11191)*1+lsi)*1]), &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*63+7699)*1+lsi)*1]), &(inteval->stack[((hsi*63+1989)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p001(inteval, &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*45+1859)*1+lsi)*1]), &(inteval->stack[((hsi*36+1904)*1+lsi)*1]), &(inteval->stack[((hsi*36+1205)*1+lsi)*1]), &(inteval->stack[((hsi*36+345)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d001(inteval, &(inteval->stack[((hsi*168+11317)*1+lsi)*1]), &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+7762)*1+lsi)*1]), &(inteval->stack[((hsi*84+2052)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f001(inteval, &(inteval->stack[((hsi*210+5389)*1+lsi)*1]), &(inteval->stack[((hsi*168+11317)*1+lsi)*1]), &(inteval->stack[((hsi*126+11191)*1+lsi)*1]), &(inteval->stack[((hsi*126+7909)*1+lsi)*1]), &(inteval->stack[((hsi*126+2136)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p010(inteval, &(inteval->stack[((hsi*84+1859)*1+lsi)*1]), &(inteval->stack[((hsi*36+1774)*1+lsi)*1]), &(inteval->stack[((hsi*28+1810)*1+lsi)*1]), &(inteval->stack[((hsi*28+1054)*1+lsi)*1]), &(inteval->stack[((hsi*28+409)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p010(inteval, &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*28+1810)*1+lsi)*1]), &(inteval->stack[((hsi*21+1838)*1+lsi)*1]), &(inteval->stack[((hsi*21+1103)*1+lsi)*1]), &(inteval->stack[((hsi*21+458)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d010(inteval, &(inteval->stack[((hsi*126+11485)*1+lsi)*1]), &(inteval->stack[((hsi*84+1859)*1+lsi)*1]), &(inteval->stack[((hsi*63+8308)*1+lsi)*1]), &(inteval->stack[((hsi*63+8035)*1+lsi)*1]), &(inteval->stack[((hsi*63+1989)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p010(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1729)*1+lsi)*1]), &(inteval->stack[((hsi*36+1774)*1+lsi)*1]), &(inteval->stack[((hsi*36+990)*1+lsi)*1]), &(inteval->stack[((hsi*36+345)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d010(inteval, &(inteval->stack[((hsi*168+11611)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+1859)*1+lsi)*1]), &(inteval->stack[((hsi*84+8098)*1+lsi)*1]), &(inteval->stack[((hsi*84+2052)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f010(inteval, &(inteval->stack[((hsi*210+5179)*1+lsi)*1]), &(inteval->stack[((hsi*168+11611)*1+lsi)*1]), &(inteval->stack[((hsi*126+11485)*1+lsi)*1]), &(inteval->stack[((hsi*126+3159)*1+lsi)*1]), &(inteval->stack[((hsi*126+2136)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p100(inteval, &(inteval->stack[((hsi*84+1729)*1+lsi)*1]), &(inteval->stack[((hsi*36+1644)*1+lsi)*1]), &(inteval->stack[((hsi*28+1680)*1+lsi)*1]), &(inteval->stack[((hsi*28+409)*1+lsi)*1]), &(inteval->stack[((hsi*28+839)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p100(inteval, &(inteval->stack[((hsi*63+1813)*1+lsi)*1]), &(inteval->stack[((hsi*28+1680)*1+lsi)*1]), &(inteval->stack[((hsi*21+1708)*1+lsi)*1]), &(inteval->stack[((hsi*21+458)*1+lsi)*1]), &(inteval->stack[((hsi*21+888)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d100(inteval, &(inteval->stack[((hsi*126+11779)*1+lsi)*1]), &(inteval->stack[((hsi*84+1729)*1+lsi)*1]), &(inteval->stack[((hsi*63+1813)*1+lsi)*1]), &(inteval->stack[((hsi*63+1989)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p100(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1599)*1+lsi)*1]), &(inteval->stack[((hsi*36+1644)*1+lsi)*1]), &(inteval->stack[((hsi*36+345)*1+lsi)*1]), &(inteval->stack[((hsi*36+775)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d100(inteval, &(inteval->stack[((hsi*168+1813)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+1729)*1+lsi)*1]), &(inteval->stack[((hsi*84+2052)*1+lsi)*1]), &(inteval->stack[((hsi*84+2899)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f100(inteval, &(inteval->stack[((hsi*210+4969)*1+lsi)*1]), &(inteval->stack[((hsi*168+1813)*1+lsi)*1]), &(inteval->stack[((hsi*126+11779)*1+lsi)*1]), &(inteval->stack[((hsi*126+2136)*1+lsi)*1]), &(inteval->stack[((hsi*126+2983)*1+lsi)*1]),1);
HRRPart0bra0ket0i011p(inteval, &(inteval->stack[((hsi*84+1599)*1+lsi)*1]), &(inteval->stack[((hsi*36+1514)*1+lsi)*1]), &(inteval->stack[((hsi*28+1550)*1+lsi)*1]), &(inteval->stack[((hsi*28+624)*1+lsi)*1]), &(inteval->stack[((hsi*28+409)*1+lsi)*1]),1);
HRRPart0bra0ket0h011p(inteval, &(inteval->stack[((hsi*63+1683)*1+lsi)*1]), &(inteval->stack[((hsi*28+1550)*1+lsi)*1]), &(inteval->stack[((hsi*21+1578)*1+lsi)*1]), &(inteval->stack[((hsi*21+673)*1+lsi)*1]), &(inteval->stack[((hsi*21+458)*1+lsi)*1]),1);
HRRPart0bra0ket0h011d(inteval, &(inteval->stack[((hsi*126+11905)*1+lsi)*1]), &(inteval->stack[((hsi*84+1599)*1+lsi)*1]), &(inteval->stack[((hsi*63+1683)*1+lsi)*1]), &(inteval->stack[((hsi*63+2509)*1+lsi)*1]), &(inteval->stack[((hsi*63+1989)*1+lsi)*1]),1);
HRRPart0bra0ket0k011p(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1469)*1+lsi)*1]), &(inteval->stack[((hsi*36+1514)*1+lsi)*1]), &(inteval->stack[((hsi*36+560)*1+lsi)*1]), &(inteval->stack[((hsi*36+345)*1+lsi)*1]),1);
HRRPart0bra0ket0i011d(inteval, &(inteval->stack[((hsi*168+12031)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+1599)*1+lsi)*1]), &(inteval->stack[((hsi*84+2572)*1+lsi)*1]), &(inteval->stack[((hsi*84+2052)*1+lsi)*1]),1);
HRRPart0bra0ket0h011f(inteval, &(inteval->stack[((hsi*210+4759)*1+lsi)*1]), &(inteval->stack[((hsi*168+12031)*1+lsi)*1]), &(inteval->stack[((hsi*126+11905)*1+lsi)*1]), &(inteval->stack[((hsi*126+10057)*1+lsi)*1]), &(inteval->stack[((hsi*126+2136)*1+lsi)*1]),1);
HRRPart0bra0ket0i020p(inteval, &(inteval->stack[((hsi*84+1469)*1+lsi)*1]), &(inteval->stack[((hsi*36+1384)*1+lsi)*1]), &(inteval->stack[((hsi*28+1420)*1+lsi)*1]), &(inteval->stack[((hsi*28+409)*1+lsi)*1]),1);
HRRPart0bra0ket0h020p(inteval, &(inteval->stack[((hsi*63+1553)*1+lsi)*1]), &(inteval->stack[((hsi*28+1420)*1+lsi)*1]), &(inteval->stack[((hsi*21+1448)*1+lsi)*1]), &(inteval->stack[((hsi*21+458)*1+lsi)*1]),1);
HRRPart0bra0ket0h020d(inteval, &(inteval->stack[((hsi*126+1616)*1+lsi)*1]), &(inteval->stack[((hsi*84+1469)*1+lsi)*1]), &(inteval->stack[((hsi*63+1553)*1+lsi)*1]), &(inteval->stack[((hsi*63+1989)*1+lsi)*1]),1);
HRRPart0bra0ket0k020p(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1339)*1+lsi)*1]), &(inteval->stack[((hsi*36+1384)*1+lsi)*1]), &(inteval->stack[((hsi*36+345)*1+lsi)*1]),1);
HRRPart0bra0ket0i020d(inteval, &(inteval->stack[((hsi*168+12199)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+1469)*1+lsi)*1]), &(inteval->stack[((hsi*84+2052)*1+lsi)*1]),1);
HRRPart0bra0ket0h020f(inteval, &(inteval->stack[((hsi*210+4549)*1+lsi)*1]), &(inteval->stack[((hsi*168+12199)*1+lsi)*1]), &(inteval->stack[((hsi*126+1616)*1+lsi)*1]), &(inteval->stack[((hsi*126+2136)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+1339)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]), &(inteval->stack[((hsi*21+243)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+1402)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]), &(inteval->stack[((hsi*28+173)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d(inteval, &(inteval->stack[((hsi*126+1486)*1+lsi)*1]), &(inteval->stack[((hsi*84+1402)*1+lsi)*1]), &(inteval->stack[((hsi*63+1339)*1+lsi)*1]), &(inteval->stack[((hsi*63+7846)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p001(inteval, &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*36+1169)*1+lsi)*1]), &(inteval->stack[((hsi*28+1241)*1+lsi)*1]), &(inteval->stack[((hsi*28+1269)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p001(inteval, &(inteval->stack[((hsi*63+7846)*1+lsi)*1]), &(inteval->stack[((hsi*28+1241)*1+lsi)*1]), &(inteval->stack[((hsi*21+1297)*1+lsi)*1]), &(inteval->stack[((hsi*21+1318)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d001(inteval, &(inteval->stack[((hsi*126+12367)*1+lsi)*1]), &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*63+7846)*1+lsi)*1]), &(inteval->stack[((hsi*63+7699)*1+lsi)*1]), &(inteval->stack[((hsi*63+1339)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p001(inteval, &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*45+1124)*1+lsi)*1]), &(inteval->stack[((hsi*36+1169)*1+lsi)*1]), &(inteval->stack[((hsi*36+1205)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d001(inteval, &(inteval->stack[((hsi*168+1124)*1+lsi)*1]), &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*84+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+7762)*1+lsi)*1]), &(inteval->stack[((hsi*84+1402)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f001(inteval, &(inteval->stack[((hsi*210+4339)*1+lsi)*1]), &(inteval->stack[((hsi*168+1124)*1+lsi)*1]), &(inteval->stack[((hsi*126+12367)*1+lsi)*1]), &(inteval->stack[((hsi*126+7909)*1+lsi)*1]), &(inteval->stack[((hsi*126+1486)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p010(inteval, &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*36+954)*1+lsi)*1]), &(inteval->stack[((hsi*28+1026)*1+lsi)*1]), &(inteval->stack[((hsi*28+1054)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p010(inteval, &(inteval->stack[((hsi*63+7783)*1+lsi)*1]), &(inteval->stack[((hsi*28+1026)*1+lsi)*1]), &(inteval->stack[((hsi*21+1082)*1+lsi)*1]), &(inteval->stack[((hsi*21+1103)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d010(inteval, &(inteval->stack[((hsi*126+12493)*1+lsi)*1]), &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*63+7783)*1+lsi)*1]), &(inteval->stack[((hsi*63+8035)*1+lsi)*1]), &(inteval->stack[((hsi*63+1339)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p010(inteval, &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*45+909)*1+lsi)*1]), &(inteval->stack[((hsi*36+954)*1+lsi)*1]), &(inteval->stack[((hsi*36+990)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d010(inteval, &(inteval->stack[((hsi*168+909)*1+lsi)*1]), &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*84+8098)*1+lsi)*1]), &(inteval->stack[((hsi*84+1402)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f010(inteval, &(inteval->stack[((hsi*210+4129)*1+lsi)*1]), &(inteval->stack[((hsi*168+909)*1+lsi)*1]), &(inteval->stack[((hsi*126+12493)*1+lsi)*1]), &(inteval->stack[((hsi*126+3159)*1+lsi)*1]), &(inteval->stack[((hsi*126+1486)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p100(inteval, &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*36+739)*1+lsi)*1]), &(inteval->stack[((hsi*28+811)*1+lsi)*1]), &(inteval->stack[((hsi*28+839)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p100(inteval, &(inteval->stack[((hsi*63+8035)*1+lsi)*1]), &(inteval->stack[((hsi*28+811)*1+lsi)*1]), &(inteval->stack[((hsi*21+867)*1+lsi)*1]), &(inteval->stack[((hsi*21+888)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d100(inteval, &(inteval->stack[((hsi*126+7783)*1+lsi)*1]), &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*63+8035)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*63+1339)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p100(inteval, &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*45+694)*1+lsi)*1]), &(inteval->stack[((hsi*36+739)*1+lsi)*1]), &(inteval->stack[((hsi*36+775)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d100(inteval, &(inteval->stack[((hsi*168+694)*1+lsi)*1]), &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*84+2899)*1+lsi)*1]), &(inteval->stack[((hsi*84+1402)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f100(inteval, &(inteval->stack[((hsi*210+3919)*1+lsi)*1]), &(inteval->stack[((hsi*168+694)*1+lsi)*1]), &(inteval->stack[((hsi*126+7783)*1+lsi)*1]), &(inteval->stack[((hsi*126+2983)*1+lsi)*1]), &(inteval->stack[((hsi*126+1486)*1+lsi)*1]),1);
HRRPart0bra0ket0i101p(inteval, &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*36+524)*1+lsi)*1]), &(inteval->stack[((hsi*28+596)*1+lsi)*1]), &(inteval->stack[((hsi*28+624)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h101p(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+596)*1+lsi)*1]), &(inteval->stack[((hsi*21+652)*1+lsi)*1]), &(inteval->stack[((hsi*21+673)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0h101d(inteval, &(inteval->stack[((hsi*126+8035)*1+lsi)*1]), &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*63+2509)*1+lsi)*1]), &(inteval->stack[((hsi*63+1339)*1+lsi)*1]),1);
HRRPart0bra0ket0k101p(inteval, &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*45+479)*1+lsi)*1]), &(inteval->stack[((hsi*36+524)*1+lsi)*1]), &(inteval->stack[((hsi*36+560)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i101d(inteval, &(inteval->stack[((hsi*168+479)*1+lsi)*1]), &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*84+2572)*1+lsi)*1]), &(inteval->stack[((hsi*84+1402)*1+lsi)*1]),1);
HRRPart0bra0ket0h101f(inteval, &(inteval->stack[((hsi*210+3709)*1+lsi)*1]), &(inteval->stack[((hsi*168+479)*1+lsi)*1]), &(inteval->stack[((hsi*126+8035)*1+lsi)*1]), &(inteval->stack[((hsi*126+10057)*1+lsi)*1]), &(inteval->stack[((hsi*126+1486)*1+lsi)*1]),1);
HRRPart0bra0ket0i110p(inteval, &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*36+309)*1+lsi)*1]), &(inteval->stack[((hsi*28+381)*1+lsi)*1]), &(inteval->stack[((hsi*28+409)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h110p(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+381)*1+lsi)*1]), &(inteval->stack[((hsi*21+437)*1+lsi)*1]), &(inteval->stack[((hsi*21+458)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0h110d(inteval, &(inteval->stack[((hsi*126+2501)*1+lsi)*1]), &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*63+1989)*1+lsi)*1]), &(inteval->stack[((hsi*63+1339)*1+lsi)*1]),1);
HRRPart0bra0ket0k110p(inteval, &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*45+264)*1+lsi)*1]), &(inteval->stack[((hsi*36+309)*1+lsi)*1]), &(inteval->stack[((hsi*36+345)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i110d(inteval, &(inteval->stack[((hsi*168+243)*1+lsi)*1]), &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*84+2052)*1+lsi)*1]), &(inteval->stack[((hsi*84+1402)*1+lsi)*1]),1);
HRRPart0bra0ket0h110f(inteval, &(inteval->stack[((hsi*210+3499)*1+lsi)*1]), &(inteval->stack[((hsi*168+243)*1+lsi)*1]), &(inteval->stack[((hsi*126+2501)*1+lsi)*1]), &(inteval->stack[((hsi*126+2136)*1+lsi)*1]), &(inteval->stack[((hsi*126+1486)*1+lsi)*1]),1);
HRRPart0bra0ket0i200p(inteval, &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+117)*1+lsi)*1]), &(inteval->stack[((hsi*28+145)*1+lsi)*1]),1);
HRRPart0bra0ket0h200p(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+117)*1+lsi)*1]), &(inteval->stack[((hsi*21+201)*1+lsi)*1]), &(inteval->stack[((hsi*21+222)*1+lsi)*1]),1);
HRRPart0bra0ket0h200d(inteval, &(inteval->stack[((hsi*126+117)*1+lsi)*1]), &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*63+1339)*1+lsi)*1]),1);
HRRPart0bra0ket0k200p(inteval, &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*36+81)*1+lsi)*1]),1);
HRRPart0bra0ket0i200d(inteval, &(inteval->stack[((hsi*168+12619)*1+lsi)*1]), &(inteval->stack[((hsi*108+8308)*1+lsi)*1]), &(inteval->stack[((hsi*84+7699)*1+lsi)*1]), &(inteval->stack[((hsi*84+1402)*1+lsi)*1]),1);
HRRPart0bra0ket0h200f(inteval, &(inteval->stack[((hsi*210+3289)*1+lsi)*1]), &(inteval->stack[((hsi*168+12619)*1+lsi)*1]), &(inteval->stack[((hsi*126+117)*1+lsi)*1]), &(inteval->stack[((hsi*126+1486)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*210+3289)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*210+3499)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*210+3709)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*210+3919)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*210+4129)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*210+4339)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*210+4549)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*210+4759)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*210+4969)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*210+5179)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*210+5389)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*210+5599)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*210+5809)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*210+6019)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*210+6229)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*210+6439)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*210+6649)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*210+6859)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*210+7069)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*210+7279)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*210+7489)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
