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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hd001.h>
#include <HRRPart0bra0ket0hd002.h>
#include <HRRPart0bra0ket0hd010.h>
#include <HRRPart0bra0ket0hd011.h>
#include <HRRPart0bra0ket0hd020.h>
#include <HRRPart0bra0ket0hd100.h>
#include <HRRPart0bra0ket0hd101.h>
#include <HRRPart0bra0ket0hd110.h>
#include <HRRPart0bra0ket0hd200.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hf001.h>
#include <HRRPart0bra0ket0hf002.h>
#include <HRRPart0bra0ket0hf010.h>
#include <HRRPart0bra0ket0hf011.h>
#include <HRRPart0bra0ket0hf020.h>
#include <HRRPart0bra0ket0hf100.h>
#include <HRRPart0bra0ket0hf101.h>
#include <HRRPart0bra0ket0hf110.h>
#include <HRRPart0bra0ket0hf200.h>
#include <HRRPart0bra0ket0hg001.h>
#include <HRRPart0bra0ket0hg002.h>
#include <HRRPart0bra0ket0hg010.h>
#include <HRRPart0bra0ket0hg011.h>
#include <HRRPart0bra0ket0hg020.h>
#include <HRRPart0bra0ket0hg100.h>
#include <HRRPart0bra0ket0hg101.h>
#include <HRRPart0bra0ket0hg110.h>
#include <HRRPart0bra0ket0hg200.h>
#include <HRRPart0bra0ket0hh002.h>
#include <HRRPart0bra0ket0hh011.h>
#include <HRRPart0bra0ket0hh020.h>
#include <HRRPart0bra0ket0hh101.h>
#include <HRRPart0bra0ket0hh110.h>
#include <HRRPart0bra0ket0hh200.h>
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
#include <HRRPart0bra0ket0h001f.h>
#include <HRRPart0bra0ket0h001f001.h>
#include <HRRPart0bra0ket0h001f010.h>
#include <HRRPart0bra0ket0h001f100.h>
#include <HRRPart0bra0ket0h001g.h>
#include <HRRPart0bra0ket0h001g001.h>
#include <HRRPart0bra0ket0h001g010.h>
#include <HRRPart0bra0ket0h001g100.h>
#include <HRRPart0bra0ket0h001h001.h>
#include <HRRPart0bra0ket0h001h010.h>
#include <HRRPart0bra0ket0h001h100.h>
#include <HRRPart0bra0ket0h001p.h>
#include <HRRPart0bra0ket0h001p001.h>
#include <HRRPart0bra0ket0h001p010.h>
#include <HRRPart0bra0ket0h001p100.h>
#include <HRRPart0bra0ket0h002d.h>
#include <HRRPart0bra0ket0h002f.h>
#include <HRRPart0bra0ket0h002g.h>
#include <HRRPart0bra0ket0h002h.h>
#include <HRRPart0bra0ket0h002p.h>
#include <HRRPart0bra0ket0h010d.h>
#include <HRRPart0bra0ket0h010d001.h>
#include <HRRPart0bra0ket0h010d010.h>
#include <HRRPart0bra0ket0h010d100.h>
#include <HRRPart0bra0ket0h010f.h>
#include <HRRPart0bra0ket0h010f001.h>
#include <HRRPart0bra0ket0h010f010.h>
#include <HRRPart0bra0ket0h010f100.h>
#include <HRRPart0bra0ket0h010g.h>
#include <HRRPart0bra0ket0h010g001.h>
#include <HRRPart0bra0ket0h010g010.h>
#include <HRRPart0bra0ket0h010g100.h>
#include <HRRPart0bra0ket0h010h001.h>
#include <HRRPart0bra0ket0h010h010.h>
#include <HRRPart0bra0ket0h010h100.h>
#include <HRRPart0bra0ket0h010p.h>
#include <HRRPart0bra0ket0h010p001.h>
#include <HRRPart0bra0ket0h010p010.h>
#include <HRRPart0bra0ket0h010p100.h>
#include <HRRPart0bra0ket0h011d.h>
#include <HRRPart0bra0ket0h011f.h>
#include <HRRPart0bra0ket0h011g.h>
#include <HRRPart0bra0ket0h011h.h>
#include <HRRPart0bra0ket0h011p.h>
#include <HRRPart0bra0ket0h020d.h>
#include <HRRPart0bra0ket0h020f.h>
#include <HRRPart0bra0ket0h020g.h>
#include <HRRPart0bra0ket0h020h.h>
#include <HRRPart0bra0ket0h020p.h>
#include <HRRPart0bra0ket0h100d.h>
#include <HRRPart0bra0ket0h100d001.h>
#include <HRRPart0bra0ket0h100d010.h>
#include <HRRPart0bra0ket0h100d100.h>
#include <HRRPart0bra0ket0h100f.h>
#include <HRRPart0bra0ket0h100f001.h>
#include <HRRPart0bra0ket0h100f010.h>
#include <HRRPart0bra0ket0h100f100.h>
#include <HRRPart0bra0ket0h100g.h>
#include <HRRPart0bra0ket0h100g001.h>
#include <HRRPart0bra0ket0h100g010.h>
#include <HRRPart0bra0ket0h100g100.h>
#include <HRRPart0bra0ket0h100h001.h>
#include <HRRPart0bra0ket0h100h010.h>
#include <HRRPart0bra0ket0h100h100.h>
#include <HRRPart0bra0ket0h100p.h>
#include <HRRPart0bra0ket0h100p001.h>
#include <HRRPart0bra0ket0h100p010.h>
#include <HRRPart0bra0ket0h100p100.h>
#include <HRRPart0bra0ket0h101d.h>
#include <HRRPart0bra0ket0h101f.h>
#include <HRRPart0bra0ket0h101g.h>
#include <HRRPart0bra0ket0h101h.h>
#include <HRRPart0bra0ket0h101p.h>
#include <HRRPart0bra0ket0h110d.h>
#include <HRRPart0bra0ket0h110f.h>
#include <HRRPart0bra0ket0h110g.h>
#include <HRRPart0bra0ket0h110h.h>
#include <HRRPart0bra0ket0h110p.h>
#include <HRRPart0bra0ket0h200d.h>
#include <HRRPart0bra0ket0h200f.h>
#include <HRRPart0bra0ket0h200g.h>
#include <HRRPart0bra0ket0h200h.h>
#include <HRRPart0bra0ket0h200p.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0id001.h>
#include <HRRPart0bra0ket0id002.h>
#include <HRRPart0bra0ket0id010.h>
#include <HRRPart0bra0ket0id011.h>
#include <HRRPart0bra0ket0id020.h>
#include <HRRPart0bra0ket0id100.h>
#include <HRRPart0bra0ket0id101.h>
#include <HRRPart0bra0ket0id110.h>
#include <HRRPart0bra0ket0id200.h>
#include <HRRPart0bra0ket0if001.h>
#include <HRRPart0bra0ket0if002.h>
#include <HRRPart0bra0ket0if010.h>
#include <HRRPart0bra0ket0if011.h>
#include <HRRPart0bra0ket0if020.h>
#include <HRRPart0bra0ket0if100.h>
#include <HRRPart0bra0ket0if101.h>
#include <HRRPart0bra0ket0if110.h>
#include <HRRPart0bra0ket0if200.h>
#include <HRRPart0bra0ket0ig002.h>
#include <HRRPart0bra0ket0ig011.h>
#include <HRRPart0bra0ket0ig020.h>
#include <HRRPart0bra0ket0ig101.h>
#include <HRRPart0bra0ket0ig110.h>
#include <HRRPart0bra0ket0ig200.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0ip001.h>
#include <HRRPart0bra0ket0ip002.h>
#include <HRRPart0bra0ket0ip010.h>
#include <HRRPart0bra0ket0ip011.h>
#include <HRRPart0bra0ket0ip020.h>
#include <HRRPart0bra0ket0ip100.h>
#include <HRRPart0bra0ket0ip101.h>
#include <HRRPart0bra0ket0ip110.h>
#include <HRRPart0bra0ket0ip200.h>
#include <HRRPart0bra0ket0i001d.h>
#include <HRRPart0bra0ket0i001d001.h>
#include <HRRPart0bra0ket0i001d010.h>
#include <HRRPart0bra0ket0i001d100.h>
#include <HRRPart0bra0ket0i001f.h>
#include <HRRPart0bra0ket0i001f001.h>
#include <HRRPart0bra0ket0i001f010.h>
#include <HRRPart0bra0ket0i001f100.h>
#include <HRRPart0bra0ket0i001g001.h>
#include <HRRPart0bra0ket0i001g010.h>
#include <HRRPart0bra0ket0i001g100.h>
#include <HRRPart0bra0ket0i001p.h>
#include <HRRPart0bra0ket0i001p001.h>
#include <HRRPart0bra0ket0i001p010.h>
#include <HRRPart0bra0ket0i001p100.h>
#include <HRRPart0bra0ket0i002d.h>
#include <HRRPart0bra0ket0i002f.h>
#include <HRRPart0bra0ket0i002g.h>
#include <HRRPart0bra0ket0i002p.h>
#include <HRRPart0bra0ket0i010d.h>
#include <HRRPart0bra0ket0i010d001.h>
#include <HRRPart0bra0ket0i010d010.h>
#include <HRRPart0bra0ket0i010d100.h>
#include <HRRPart0bra0ket0i010f.h>
#include <HRRPart0bra0ket0i010f001.h>
#include <HRRPart0bra0ket0i010f010.h>
#include <HRRPart0bra0ket0i010f100.h>
#include <HRRPart0bra0ket0i010g001.h>
#include <HRRPart0bra0ket0i010g010.h>
#include <HRRPart0bra0ket0i010g100.h>
#include <HRRPart0bra0ket0i010p.h>
#include <HRRPart0bra0ket0i010p001.h>
#include <HRRPart0bra0ket0i010p010.h>
#include <HRRPart0bra0ket0i010p100.h>
#include <HRRPart0bra0ket0i011d.h>
#include <HRRPart0bra0ket0i011f.h>
#include <HRRPart0bra0ket0i011g.h>
#include <HRRPart0bra0ket0i011p.h>
#include <HRRPart0bra0ket0i020d.h>
#include <HRRPart0bra0ket0i020f.h>
#include <HRRPart0bra0ket0i020g.h>
#include <HRRPart0bra0ket0i020p.h>
#include <HRRPart0bra0ket0i100d.h>
#include <HRRPart0bra0ket0i100d001.h>
#include <HRRPart0bra0ket0i100d010.h>
#include <HRRPart0bra0ket0i100d100.h>
#include <HRRPart0bra0ket0i100f.h>
#include <HRRPart0bra0ket0i100f001.h>
#include <HRRPart0bra0ket0i100f010.h>
#include <HRRPart0bra0ket0i100f100.h>
#include <HRRPart0bra0ket0i100g001.h>
#include <HRRPart0bra0ket0i100g010.h>
#include <HRRPart0bra0ket0i100g100.h>
#include <HRRPart0bra0ket0i100p.h>
#include <HRRPart0bra0ket0i100p001.h>
#include <HRRPart0bra0ket0i100p010.h>
#include <HRRPart0bra0ket0i100p100.h>
#include <HRRPart0bra0ket0i101d.h>
#include <HRRPart0bra0ket0i101f.h>
#include <HRRPart0bra0ket0i101g.h>
#include <HRRPart0bra0ket0i101p.h>
#include <HRRPart0bra0ket0i110d.h>
#include <HRRPart0bra0ket0i110f.h>
#include <HRRPart0bra0ket0i110g.h>
#include <HRRPart0bra0ket0i110p.h>
#include <HRRPart0bra0ket0i200d.h>
#include <HRRPart0bra0ket0i200f.h>
#include <HRRPart0bra0ket0i200g.h>
#include <HRRPart0bra0ket0i200p.h>
#include <HRRPart0bra0ket0kd001.h>
#include <HRRPart0bra0ket0kd002.h>
#include <HRRPart0bra0ket0kd010.h>
#include <HRRPart0bra0ket0kd011.h>
#include <HRRPart0bra0ket0kd020.h>
#include <HRRPart0bra0ket0kd100.h>
#include <HRRPart0bra0ket0kd101.h>
#include <HRRPart0bra0ket0kd110.h>
#include <HRRPart0bra0ket0kd200.h>
#include <HRRPart0bra0ket0kf002.h>
#include <HRRPart0bra0ket0kf011.h>
#include <HRRPart0bra0ket0kf020.h>
#include <HRRPart0bra0ket0kf101.h>
#include <HRRPart0bra0ket0kf110.h>
#include <HRRPart0bra0ket0kf200.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0kp001.h>
#include <HRRPart0bra0ket0kp002.h>
#include <HRRPart0bra0ket0kp010.h>
#include <HRRPart0bra0ket0kp011.h>
#include <HRRPart0bra0ket0kp020.h>
#include <HRRPart0bra0ket0kp100.h>
#include <HRRPart0bra0ket0kp101.h>
#include <HRRPart0bra0ket0kp110.h>
#include <HRRPart0bra0ket0kp200.h>
#include <HRRPart0bra0ket0k001d.h>
#include <HRRPart0bra0ket0k001d001.h>
#include <HRRPart0bra0ket0k001d010.h>
#include <HRRPart0bra0ket0k001d100.h>
#include <HRRPart0bra0ket0k001f001.h>
#include <HRRPart0bra0ket0k001f010.h>
#include <HRRPart0bra0ket0k001f100.h>
#include <HRRPart0bra0ket0k001p.h>
#include <HRRPart0bra0ket0k001p001.h>
#include <HRRPart0bra0ket0k001p010.h>
#include <HRRPart0bra0ket0k001p100.h>
#include <HRRPart0bra0ket0k002d.h>
#include <HRRPart0bra0ket0k002f.h>
#include <HRRPart0bra0ket0k002p.h>
#include <HRRPart0bra0ket0k010d.h>
#include <HRRPart0bra0ket0k010d001.h>
#include <HRRPart0bra0ket0k010d010.h>
#include <HRRPart0bra0ket0k010d100.h>
#include <HRRPart0bra0ket0k010f001.h>
#include <HRRPart0bra0ket0k010f010.h>
#include <HRRPart0bra0ket0k010f100.h>
#include <HRRPart0bra0ket0k010p.h>
#include <HRRPart0bra0ket0k010p001.h>
#include <HRRPart0bra0ket0k010p010.h>
#include <HRRPart0bra0ket0k010p100.h>
#include <HRRPart0bra0ket0k011d.h>
#include <HRRPart0bra0ket0k011f.h>
#include <HRRPart0bra0ket0k011p.h>
#include <HRRPart0bra0ket0k020d.h>
#include <HRRPart0bra0ket0k020f.h>
#include <HRRPart0bra0ket0k020p.h>
#include <HRRPart0bra0ket0k100d.h>
#include <HRRPart0bra0ket0k100d001.h>
#include <HRRPart0bra0ket0k100d010.h>
#include <HRRPart0bra0ket0k100d100.h>
#include <HRRPart0bra0ket0k100f001.h>
#include <HRRPart0bra0ket0k100f010.h>
#include <HRRPart0bra0ket0k100f100.h>
#include <HRRPart0bra0ket0k100p.h>
#include <HRRPart0bra0ket0k100p001.h>
#include <HRRPart0bra0ket0k100p010.h>
#include <HRRPart0bra0ket0k100p100.h>
#include <HRRPart0bra0ket0k101d.h>
#include <HRRPart0bra0ket0k101f.h>
#include <HRRPart0bra0ket0k101p.h>
#include <HRRPart0bra0ket0k110d.h>
#include <HRRPart0bra0ket0k110f.h>
#include <HRRPart0bra0ket0k110p.h>
#include <HRRPart0bra0ket0k200d.h>
#include <HRRPart0bra0ket0k200f.h>
#include <HRRPart0bra0ket0k200p.h>
#include <HRRPart0bra0ket0ld002.h>
#include <HRRPart0bra0ket0ld011.h>
#include <HRRPart0bra0ket0ld020.h>
#include <HRRPart0bra0ket0ld101.h>
#include <HRRPart0bra0ket0ld110.h>
#include <HRRPart0bra0ket0ld200.h>
#include <HRRPart0bra0ket0lp001.h>
#include <HRRPart0bra0ket0lp002.h>
#include <HRRPart0bra0ket0lp010.h>
#include <HRRPart0bra0ket0lp011.h>
#include <HRRPart0bra0ket0lp020.h>
#include <HRRPart0bra0ket0lp100.h>
#include <HRRPart0bra0ket0lp101.h>
#include <HRRPart0bra0ket0lp110.h>
#include <HRRPart0bra0ket0lp200.h>
#include <HRRPart0bra0ket0l001d001.h>
#include <HRRPart0bra0ket0l001d010.h>
#include <HRRPart0bra0ket0l001d100.h>
#include <HRRPart0bra0ket0l001p.h>
#include <HRRPart0bra0ket0l001p001.h>
#include <HRRPart0bra0ket0l001p010.h>
#include <HRRPart0bra0ket0l001p100.h>
#include <HRRPart0bra0ket0l002d.h>
#include <HRRPart0bra0ket0l002p.h>
#include <HRRPart0bra0ket0l010d001.h>
#include <HRRPart0bra0ket0l010d010.h>
#include <HRRPart0bra0ket0l010d100.h>
#include <HRRPart0bra0ket0l010p.h>
#include <HRRPart0bra0ket0l010p001.h>
#include <HRRPart0bra0ket0l010p010.h>
#include <HRRPart0bra0ket0l010p100.h>
#include <HRRPart0bra0ket0l011d.h>
#include <HRRPart0bra0ket0l011p.h>
#include <HRRPart0bra0ket0l020d.h>
#include <HRRPart0bra0ket0l020p.h>
#include <HRRPart0bra0ket0l100d001.h>
#include <HRRPart0bra0ket0l100d010.h>
#include <HRRPart0bra0ket0l100d100.h>
#include <HRRPart0bra0ket0l100p.h>
#include <HRRPart0bra0ket0l100p001.h>
#include <HRRPart0bra0ket0l100p010.h>
#include <HRRPart0bra0ket0l100p100.h>
#include <HRRPart0bra0ket0l101d.h>
#include <HRRPart0bra0ket0l101p.h>
#include <HRRPart0bra0ket0l110d.h>
#include <HRRPart0bra0ket0l110p.h>
#include <HRRPart0bra0ket0l200d.h>
#include <HRRPart0bra0ket0l200p.h>
#include <HRRPart0bra0ket0mp002.h>
#include <HRRPart0bra0ket0mp011.h>
#include <HRRPart0bra0ket0mp020.h>
#include <HRRPart0bra0ket0mp101.h>
#include <HRRPart0bra0ket0mp110.h>
#include <HRRPart0bra0ket0mp200.h>
#include <HRRPart0bra0ket0m001p001.h>
#include <HRRPart0bra0ket0m001p010.h>
#include <HRRPart0bra0ket0m001p100.h>
#include <HRRPart0bra0ket0m002p.h>
#include <HRRPart0bra0ket0m010p001.h>
#include <HRRPart0bra0ket0m010p010.h>
#include <HRRPart0bra0ket0m010p100.h>
#include <HRRPart0bra0ket0m011p.h>
#include <HRRPart0bra0ket0m020p.h>
#include <HRRPart0bra0ket0m100p001.h>
#include <HRRPart0bra0ket0m100p010.h>
#include <HRRPart0bra0ket0m100p100.h>
#include <HRRPart0bra0ket0m101p.h>
#include <HRRPart0bra0ket0m110p.h>
#include <HRRPart0bra0ket0m200p.h>
#include <_elecpotderiv2_H_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpotderiv2_H_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6511)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpotderiv2_H_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+15772)*1+lsi)*1]), &(inteval->stack[((hsi*36+383)*1+lsi)*1]), &(inteval->stack[((hsi*28+475)*1+lsi)*1]),1);
HRRPart0bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+15856)*1+lsi)*1]), &(inteval->stack[((hsi*36+2612)*1+lsi)*1]), &(inteval->stack[((hsi*28+2676)*1+lsi)*1]), &(inteval->stack[((hsi*28+475)*1+lsi)*1]),1);
HRRPart0bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+15940)*1+lsi)*1]), &(inteval->stack[((hsi*45+2531)*1+lsi)*1]), &(inteval->stack[((hsi*36+2612)*1+lsi)*1]), &(inteval->stack[((hsi*36+383)*1+lsi)*1]),1);
HRRPart0bra0ket0id001(inteval, &(inteval->stack[((hsi*168+16048)*1+lsi)*1]), &(inteval->stack[((hsi*108+15940)*1+lsi)*1]), &(inteval->stack[((hsi*84+15856)*1+lsi)*1]), &(inteval->stack[((hsi*84+15772)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+16216)*1+lsi)*1]), &(inteval->stack[((hsi*28+475)*1+lsi)*1]), &(inteval->stack[((hsi*21+545)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+16279)*1+lsi)*1]), &(inteval->stack[((hsi*84+15772)*1+lsi)*1]), &(inteval->stack[((hsi*63+16216)*1+lsi)*1]),1);
HRRPart0bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+16405)*1+lsi)*1]), &(inteval->stack[((hsi*28+2676)*1+lsi)*1]), &(inteval->stack[((hsi*21+2725)*1+lsi)*1]), &(inteval->stack[((hsi*21+545)*1+lsi)*1]),1);
HRRPart0bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+16468)*1+lsi)*1]), &(inteval->stack[((hsi*84+15856)*1+lsi)*1]), &(inteval->stack[((hsi*63+16405)*1+lsi)*1]), &(inteval->stack[((hsi*63+16216)*1+lsi)*1]),1);
HRRPart0bra0ket0hf001(inteval, &(inteval->stack[((hsi*210+16594)*1+lsi)*1]), &(inteval->stack[((hsi*168+16048)*1+lsi)*1]), &(inteval->stack[((hsi*126+16468)*1+lsi)*1]), &(inteval->stack[((hsi*126+16279)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16804)*1+lsi)*1]), &(inteval->stack[((hsi*45+266)*1+lsi)*1]), &(inteval->stack[((hsi*36+383)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+16912)*1+lsi)*1]), &(inteval->stack[((hsi*108+16804)*1+lsi)*1]), &(inteval->stack[((hsi*84+15772)*1+lsi)*1]),1);
HRRPart0bra0ket0lp001(inteval, &(inteval->stack[((hsi*135+17080)*1+lsi)*1]), &(inteval->stack[((hsi*55+2431)*1+lsi)*1]), &(inteval->stack[((hsi*45+2531)*1+lsi)*1]), &(inteval->stack[((hsi*45+266)*1+lsi)*1]),1);
HRRPart0bra0ket0kd001(inteval, &(inteval->stack[((hsi*216+17215)*1+lsi)*1]), &(inteval->stack[((hsi*135+17080)*1+lsi)*1]), &(inteval->stack[((hsi*108+15940)*1+lsi)*1]), &(inteval->stack[((hsi*108+16804)*1+lsi)*1]),1);
HRRPart0bra0ket0if001(inteval, &(inteval->stack[((hsi*280+17431)*1+lsi)*1]), &(inteval->stack[((hsi*216+17215)*1+lsi)*1]), &(inteval->stack[((hsi*168+16048)*1+lsi)*1]), &(inteval->stack[((hsi*168+16912)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+17711)*1+lsi)*1]), &(inteval->stack[((hsi*168+16912)*1+lsi)*1]), &(inteval->stack[((hsi*126+16279)*1+lsi)*1]),1);
HRRPart0bra0ket0hg001(inteval, &(inteval->stack[((hsi*315+17921)*1+lsi)*1]), &(inteval->stack[((hsi*280+17431)*1+lsi)*1]), &(inteval->stack[((hsi*210+16594)*1+lsi)*1]), &(inteval->stack[((hsi*210+17711)*1+lsi)*1]),1);
HRRPart0bra0ket0ip002(inteval, &(inteval->stack[((hsi*84+18236)*1+lsi)*1]), &(inteval->stack[((hsi*36+6426)*1+lsi)*1]), &(inteval->stack[((hsi*28+6462)*1+lsi)*1]), &(inteval->stack[((hsi*28+2676)*1+lsi)*1]),1);
HRRPart0bra0ket0kp002(inteval, &(inteval->stack[((hsi*108+18320)*1+lsi)*1]), &(inteval->stack[((hsi*45+6381)*1+lsi)*1]), &(inteval->stack[((hsi*36+6426)*1+lsi)*1]), &(inteval->stack[((hsi*36+2612)*1+lsi)*1]),1);
HRRPart0bra0ket0id002(inteval, &(inteval->stack[((hsi*168+18428)*1+lsi)*1]), &(inteval->stack[((hsi*108+18320)*1+lsi)*1]), &(inteval->stack[((hsi*84+18236)*1+lsi)*1]), &(inteval->stack[((hsi*84+15856)*1+lsi)*1]),1);
HRRPart0bra0ket0lp002(inteval, &(inteval->stack[((hsi*135+18596)*1+lsi)*1]), &(inteval->stack[((hsi*55+6326)*1+lsi)*1]), &(inteval->stack[((hsi*45+6381)*1+lsi)*1]), &(inteval->stack[((hsi*45+2531)*1+lsi)*1]),1);
HRRPart0bra0ket0kd002(inteval, &(inteval->stack[((hsi*216+18731)*1+lsi)*1]), &(inteval->stack[((hsi*135+18596)*1+lsi)*1]), &(inteval->stack[((hsi*108+18320)*1+lsi)*1]), &(inteval->stack[((hsi*108+15940)*1+lsi)*1]),1);
HRRPart0bra0ket0if002(inteval, &(inteval->stack[((hsi*280+18947)*1+lsi)*1]), &(inteval->stack[((hsi*216+18731)*1+lsi)*1]), &(inteval->stack[((hsi*168+18428)*1+lsi)*1]), &(inteval->stack[((hsi*168+16048)*1+lsi)*1]),1);
HRRPart0bra0ket0hp002(inteval, &(inteval->stack[((hsi*63+18320)*1+lsi)*1]), &(inteval->stack[((hsi*28+6462)*1+lsi)*1]), &(inteval->stack[((hsi*21+6490)*1+lsi)*1]), &(inteval->stack[((hsi*21+2725)*1+lsi)*1]),1);
HRRPart0bra0ket0hd002(inteval, &(inteval->stack[((hsi*126+6381)*1+lsi)*1]), &(inteval->stack[((hsi*84+18236)*1+lsi)*1]), &(inteval->stack[((hsi*63+18320)*1+lsi)*1]), &(inteval->stack[((hsi*63+16405)*1+lsi)*1]),1);
HRRPart0bra0ket0hf002(inteval, &(inteval->stack[((hsi*210+19227)*1+lsi)*1]), &(inteval->stack[((hsi*168+18428)*1+lsi)*1]), &(inteval->stack[((hsi*126+6381)*1+lsi)*1]), &(inteval->stack[((hsi*126+16468)*1+lsi)*1]),1);
HRRPart0bra0ket0hg002(inteval, &(inteval->stack[((hsi*315+18236)*1+lsi)*1]), &(inteval->stack[((hsi*280+18947)*1+lsi)*1]), &(inteval->stack[((hsi*210+19227)*1+lsi)*1]), &(inteval->stack[((hsi*210+16594)*1+lsi)*1]),1);
HRRPart0bra0ket0mp002(inteval, &(inteval->stack[((hsi*165+19227)*1+lsi)*1]), &(inteval->stack[((hsi*66+6260)*1+lsi)*1]), &(inteval->stack[((hsi*55+6326)*1+lsi)*1]), &(inteval->stack[((hsi*55+2431)*1+lsi)*1]),1);
HRRPart0bra0ket0ld002(inteval, &(inteval->stack[((hsi*270+19392)*1+lsi)*1]), &(inteval->stack[((hsi*165+19227)*1+lsi)*1]), &(inteval->stack[((hsi*135+18596)*1+lsi)*1]), &(inteval->stack[((hsi*135+17080)*1+lsi)*1]),1);
HRRPart0bra0ket0kf002(inteval, &(inteval->stack[((hsi*360+19662)*1+lsi)*1]), &(inteval->stack[((hsi*270+19392)*1+lsi)*1]), &(inteval->stack[((hsi*216+18731)*1+lsi)*1]), &(inteval->stack[((hsi*216+17215)*1+lsi)*1]),1);
HRRPart0bra0ket0ig002(inteval, &(inteval->stack[((hsi*420+19227)*1+lsi)*1]), &(inteval->stack[((hsi*360+19662)*1+lsi)*1]), &(inteval->stack[((hsi*280+18947)*1+lsi)*1]), &(inteval->stack[((hsi*280+17431)*1+lsi)*1]),1);
HRRPart0bra0ket0hh002(inteval, &(inteval->stack[((hsi*441+15331)*1+lsi)*1]), &(inteval->stack[((hsi*420+19227)*1+lsi)*1]), &(inteval->stack[((hsi*315+18236)*1+lsi)*1]), &(inteval->stack[((hsi*315+17921)*1+lsi)*1]),1);
HRRPart0bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*36+2176)*1+lsi)*1]), &(inteval->stack[((hsi*28+2240)*1+lsi)*1]), &(inteval->stack[((hsi*28+475)*1+lsi)*1]),1);
HRRPart0bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+18635)*1+lsi)*1]), &(inteval->stack[((hsi*45+2095)*1+lsi)*1]), &(inteval->stack[((hsi*36+2176)*1+lsi)*1]), &(inteval->stack[((hsi*36+383)*1+lsi)*1]),1);
HRRPart0bra0ket0id010(inteval, &(inteval->stack[((hsi*168+18743)*1+lsi)*1]), &(inteval->stack[((hsi*108+18635)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*84+15772)*1+lsi)*1]),1);
HRRPart0bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+18911)*1+lsi)*1]), &(inteval->stack[((hsi*28+2240)*1+lsi)*1]), &(inteval->stack[((hsi*21+2289)*1+lsi)*1]), &(inteval->stack[((hsi*21+545)*1+lsi)*1]),1);
HRRPart0bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+18974)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*63+18911)*1+lsi)*1]), &(inteval->stack[((hsi*63+16216)*1+lsi)*1]),1);
HRRPart0bra0ket0hf010(inteval, &(inteval->stack[((hsi*210+6260)*1+lsi)*1]), &(inteval->stack[((hsi*168+18743)*1+lsi)*1]), &(inteval->stack[((hsi*126+18974)*1+lsi)*1]), &(inteval->stack[((hsi*126+16279)*1+lsi)*1]),1);
HRRPart0bra0ket0lp010(inteval, &(inteval->stack[((hsi*135+19647)*1+lsi)*1]), &(inteval->stack[((hsi*55+1995)*1+lsi)*1]), &(inteval->stack[((hsi*45+2095)*1+lsi)*1]), &(inteval->stack[((hsi*45+266)*1+lsi)*1]),1);
HRRPart0bra0ket0kd010(inteval, &(inteval->stack[((hsi*216+19782)*1+lsi)*1]), &(inteval->stack[((hsi*135+19647)*1+lsi)*1]), &(inteval->stack[((hsi*108+18635)*1+lsi)*1]), &(inteval->stack[((hsi*108+16804)*1+lsi)*1]),1);
HRRPart0bra0ket0if010(inteval, &(inteval->stack[((hsi*280+19998)*1+lsi)*1]), &(inteval->stack[((hsi*216+19782)*1+lsi)*1]), &(inteval->stack[((hsi*168+18743)*1+lsi)*1]), &(inteval->stack[((hsi*168+16912)*1+lsi)*1]),1);
HRRPart0bra0ket0hg010(inteval, &(inteval->stack[((hsi*315+20278)*1+lsi)*1]), &(inteval->stack[((hsi*280+19998)*1+lsi)*1]), &(inteval->stack[((hsi*210+6260)*1+lsi)*1]), &(inteval->stack[((hsi*210+17711)*1+lsi)*1]),1);
HRRPart0bra0ket0ip011(inteval, &(inteval->stack[((hsi*84+19100)*1+lsi)*1]), &(inteval->stack[((hsi*36+6175)*1+lsi)*1]), &(inteval->stack[((hsi*28+6211)*1+lsi)*1]), &(inteval->stack[((hsi*28+2676)*1+lsi)*1]), &(inteval->stack[((hsi*28+2240)*1+lsi)*1]),1);
HRRPart0bra0ket0kp011(inteval, &(inteval->stack[((hsi*108+20593)*1+lsi)*1]), &(inteval->stack[((hsi*45+6130)*1+lsi)*1]), &(inteval->stack[((hsi*36+6175)*1+lsi)*1]), &(inteval->stack[((hsi*36+2612)*1+lsi)*1]), &(inteval->stack[((hsi*36+2176)*1+lsi)*1]),1);
HRRPart0bra0ket0id011(inteval, &(inteval->stack[((hsi*168+20701)*1+lsi)*1]), &(inteval->stack[((hsi*108+20593)*1+lsi)*1]), &(inteval->stack[((hsi*84+19100)*1+lsi)*1]), &(inteval->stack[((hsi*84+15856)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]),1);
HRRPart0bra0ket0lp011(inteval, &(inteval->stack[((hsi*135+20869)*1+lsi)*1]), &(inteval->stack[((hsi*55+6075)*1+lsi)*1]), &(inteval->stack[((hsi*45+6130)*1+lsi)*1]), &(inteval->stack[((hsi*45+2531)*1+lsi)*1]), &(inteval->stack[((hsi*45+2095)*1+lsi)*1]),1);
HRRPart0bra0ket0kd011(inteval, &(inteval->stack[((hsi*216+21004)*1+lsi)*1]), &(inteval->stack[((hsi*135+20869)*1+lsi)*1]), &(inteval->stack[((hsi*108+20593)*1+lsi)*1]), &(inteval->stack[((hsi*108+15940)*1+lsi)*1]), &(inteval->stack[((hsi*108+18635)*1+lsi)*1]),1);
HRRPart0bra0ket0if011(inteval, &(inteval->stack[((hsi*280+21220)*1+lsi)*1]), &(inteval->stack[((hsi*216+21004)*1+lsi)*1]), &(inteval->stack[((hsi*168+20701)*1+lsi)*1]), &(inteval->stack[((hsi*168+16048)*1+lsi)*1]), &(inteval->stack[((hsi*168+18743)*1+lsi)*1]),1);
HRRPart0bra0ket0hp011(inteval, &(inteval->stack[((hsi*63+20593)*1+lsi)*1]), &(inteval->stack[((hsi*28+6211)*1+lsi)*1]), &(inteval->stack[((hsi*21+6239)*1+lsi)*1]), &(inteval->stack[((hsi*21+2725)*1+lsi)*1]), &(inteval->stack[((hsi*21+2289)*1+lsi)*1]),1);
HRRPart0bra0ket0hd011(inteval, &(inteval->stack[((hsi*126+6130)*1+lsi)*1]), &(inteval->stack[((hsi*84+19100)*1+lsi)*1]), &(inteval->stack[((hsi*63+20593)*1+lsi)*1]), &(inteval->stack[((hsi*63+16405)*1+lsi)*1]), &(inteval->stack[((hsi*63+18911)*1+lsi)*1]),1);
HRRPart0bra0ket0hf011(inteval, &(inteval->stack[((hsi*210+21500)*1+lsi)*1]), &(inteval->stack[((hsi*168+20701)*1+lsi)*1]), &(inteval->stack[((hsi*126+6130)*1+lsi)*1]), &(inteval->stack[((hsi*126+16468)*1+lsi)*1]), &(inteval->stack[((hsi*126+18974)*1+lsi)*1]),1);
HRRPart0bra0ket0hg011(inteval, &(inteval->stack[((hsi*315+21710)*1+lsi)*1]), &(inteval->stack[((hsi*280+21220)*1+lsi)*1]), &(inteval->stack[((hsi*210+21500)*1+lsi)*1]), &(inteval->stack[((hsi*210+16594)*1+lsi)*1]), &(inteval->stack[((hsi*210+6260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp011(inteval, &(inteval->stack[((hsi*165+20593)*1+lsi)*1]), &(inteval->stack[((hsi*66+6009)*1+lsi)*1]), &(inteval->stack[((hsi*55+6075)*1+lsi)*1]), &(inteval->stack[((hsi*55+2431)*1+lsi)*1]), &(inteval->stack[((hsi*55+1995)*1+lsi)*1]),1);
HRRPart0bra0ket0ld011(inteval, &(inteval->stack[((hsi*270+22025)*1+lsi)*1]), &(inteval->stack[((hsi*165+20593)*1+lsi)*1]), &(inteval->stack[((hsi*135+20869)*1+lsi)*1]), &(inteval->stack[((hsi*135+17080)*1+lsi)*1]), &(inteval->stack[((hsi*135+19647)*1+lsi)*1]),1);
HRRPart0bra0ket0kf011(inteval, &(inteval->stack[((hsi*360+20593)*1+lsi)*1]), &(inteval->stack[((hsi*270+22025)*1+lsi)*1]), &(inteval->stack[((hsi*216+21004)*1+lsi)*1]), &(inteval->stack[((hsi*216+17215)*1+lsi)*1]), &(inteval->stack[((hsi*216+19782)*1+lsi)*1]),1);
HRRPart0bra0ket0ig011(inteval, &(inteval->stack[((hsi*420+22025)*1+lsi)*1]), &(inteval->stack[((hsi*360+20593)*1+lsi)*1]), &(inteval->stack[((hsi*280+21220)*1+lsi)*1]), &(inteval->stack[((hsi*280+17431)*1+lsi)*1]), &(inteval->stack[((hsi*280+19998)*1+lsi)*1]),1);
HRRPart0bra0ket0hh011(inteval, &(inteval->stack[((hsi*441+14890)*1+lsi)*1]), &(inteval->stack[((hsi*420+22025)*1+lsi)*1]), &(inteval->stack[((hsi*315+21710)*1+lsi)*1]), &(inteval->stack[((hsi*315+17921)*1+lsi)*1]), &(inteval->stack[((hsi*315+20278)*1+lsi)*1]),1);
HRRPart0bra0ket0ip020(inteval, &(inteval->stack[((hsi*84+20593)*1+lsi)*1]), &(inteval->stack[((hsi*36+5924)*1+lsi)*1]), &(inteval->stack[((hsi*28+5960)*1+lsi)*1]), &(inteval->stack[((hsi*28+2240)*1+lsi)*1]),1);
HRRPart0bra0ket0kp020(inteval, &(inteval->stack[((hsi*108+20677)*1+lsi)*1]), &(inteval->stack[((hsi*45+5879)*1+lsi)*1]), &(inteval->stack[((hsi*36+5924)*1+lsi)*1]), &(inteval->stack[((hsi*36+2176)*1+lsi)*1]),1);
HRRPart0bra0ket0id020(inteval, &(inteval->stack[((hsi*168+20785)*1+lsi)*1]), &(inteval->stack[((hsi*108+20677)*1+lsi)*1]), &(inteval->stack[((hsi*84+20593)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]),1);
HRRPart0bra0ket0lp020(inteval, &(inteval->stack[((hsi*135+20953)*1+lsi)*1]), &(inteval->stack[((hsi*55+5824)*1+lsi)*1]), &(inteval->stack[((hsi*45+5879)*1+lsi)*1]), &(inteval->stack[((hsi*45+2095)*1+lsi)*1]),1);
HRRPart0bra0ket0kd020(inteval, &(inteval->stack[((hsi*216+21088)*1+lsi)*1]), &(inteval->stack[((hsi*135+20953)*1+lsi)*1]), &(inteval->stack[((hsi*108+20677)*1+lsi)*1]), &(inteval->stack[((hsi*108+18635)*1+lsi)*1]),1);
HRRPart0bra0ket0if020(inteval, &(inteval->stack[((hsi*280+21304)*1+lsi)*1]), &(inteval->stack[((hsi*216+21088)*1+lsi)*1]), &(inteval->stack[((hsi*168+20785)*1+lsi)*1]), &(inteval->stack[((hsi*168+18743)*1+lsi)*1]),1);
HRRPart0bra0ket0hp020(inteval, &(inteval->stack[((hsi*63+6009)*1+lsi)*1]), &(inteval->stack[((hsi*28+5960)*1+lsi)*1]), &(inteval->stack[((hsi*21+5988)*1+lsi)*1]), &(inteval->stack[((hsi*21+2289)*1+lsi)*1]),1);
HRRPart0bra0ket0hd020(inteval, &(inteval->stack[((hsi*126+21584)*1+lsi)*1]), &(inteval->stack[((hsi*84+20593)*1+lsi)*1]), &(inteval->stack[((hsi*63+6009)*1+lsi)*1]), &(inteval->stack[((hsi*63+18911)*1+lsi)*1]),1);
HRRPart0bra0ket0hf020(inteval, &(inteval->stack[((hsi*210+5879)*1+lsi)*1]), &(inteval->stack[((hsi*168+20785)*1+lsi)*1]), &(inteval->stack[((hsi*126+21584)*1+lsi)*1]), &(inteval->stack[((hsi*126+18974)*1+lsi)*1]),1);
HRRPart0bra0ket0hg020(inteval, &(inteval->stack[((hsi*315+20593)*1+lsi)*1]), &(inteval->stack[((hsi*280+21304)*1+lsi)*1]), &(inteval->stack[((hsi*210+5879)*1+lsi)*1]), &(inteval->stack[((hsi*210+6260)*1+lsi)*1]),1);
HRRPart0bra0ket0mp020(inteval, &(inteval->stack[((hsi*165+5879)*1+lsi)*1]), &(inteval->stack[((hsi*66+5758)*1+lsi)*1]), &(inteval->stack[((hsi*55+5824)*1+lsi)*1]), &(inteval->stack[((hsi*55+1995)*1+lsi)*1]),1);
HRRPart0bra0ket0ld020(inteval, &(inteval->stack[((hsi*270+22445)*1+lsi)*1]), &(inteval->stack[((hsi*165+5879)*1+lsi)*1]), &(inteval->stack[((hsi*135+20953)*1+lsi)*1]), &(inteval->stack[((hsi*135+19647)*1+lsi)*1]),1);
HRRPart0bra0ket0kf020(inteval, &(inteval->stack[((hsi*360+5758)*1+lsi)*1]), &(inteval->stack[((hsi*270+22445)*1+lsi)*1]), &(inteval->stack[((hsi*216+21088)*1+lsi)*1]), &(inteval->stack[((hsi*216+19782)*1+lsi)*1]),1);
HRRPart0bra0ket0ig020(inteval, &(inteval->stack[((hsi*420+22445)*1+lsi)*1]), &(inteval->stack[((hsi*360+5758)*1+lsi)*1]), &(inteval->stack[((hsi*280+21304)*1+lsi)*1]), &(inteval->stack[((hsi*280+19998)*1+lsi)*1]),1);
HRRPart0bra0ket0hh020(inteval, &(inteval->stack[((hsi*441+14449)*1+lsi)*1]), &(inteval->stack[((hsi*420+22445)*1+lsi)*1]), &(inteval->stack[((hsi*315+20593)*1+lsi)*1]), &(inteval->stack[((hsi*315+20278)*1+lsi)*1]),1);
HRRPart0bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+20908)*1+lsi)*1]), &(inteval->stack[((hsi*36+1740)*1+lsi)*1]), &(inteval->stack[((hsi*28+1804)*1+lsi)*1]), &(inteval->stack[((hsi*28+475)*1+lsi)*1]),1);
HRRPart0bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+20992)*1+lsi)*1]), &(inteval->stack[((hsi*45+1659)*1+lsi)*1]), &(inteval->stack[((hsi*36+1740)*1+lsi)*1]), &(inteval->stack[((hsi*36+383)*1+lsi)*1]),1);
HRRPart0bra0ket0id100(inteval, &(inteval->stack[((hsi*168+21100)*1+lsi)*1]), &(inteval->stack[((hsi*108+20992)*1+lsi)*1]), &(inteval->stack[((hsi*84+20908)*1+lsi)*1]), &(inteval->stack[((hsi*84+15772)*1+lsi)*1]),1);
HRRPart0bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+5758)*1+lsi)*1]), &(inteval->stack[((hsi*28+1804)*1+lsi)*1]), &(inteval->stack[((hsi*21+1853)*1+lsi)*1]), &(inteval->stack[((hsi*21+545)*1+lsi)*1]),1);
HRRPart0bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+21268)*1+lsi)*1]), &(inteval->stack[((hsi*84+20908)*1+lsi)*1]), &(inteval->stack[((hsi*63+5758)*1+lsi)*1]), &(inteval->stack[((hsi*63+16216)*1+lsi)*1]),1);
HRRPart0bra0ket0hf100(inteval, &(inteval->stack[((hsi*210+5821)*1+lsi)*1]), &(inteval->stack[((hsi*168+21100)*1+lsi)*1]), &(inteval->stack[((hsi*126+21268)*1+lsi)*1]), &(inteval->stack[((hsi*126+16279)*1+lsi)*1]),1);
HRRPart0bra0ket0lp100(inteval, &(inteval->stack[((hsi*135+21394)*1+lsi)*1]), &(inteval->stack[((hsi*55+1559)*1+lsi)*1]), &(inteval->stack[((hsi*45+1659)*1+lsi)*1]), &(inteval->stack[((hsi*45+266)*1+lsi)*1]),1);
HRRPart0bra0ket0kd100(inteval, &(inteval->stack[((hsi*216+6031)*1+lsi)*1]), &(inteval->stack[((hsi*135+21394)*1+lsi)*1]), &(inteval->stack[((hsi*108+20992)*1+lsi)*1]), &(inteval->stack[((hsi*108+16804)*1+lsi)*1]),1);
HRRPart0bra0ket0if100(inteval, &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*216+6031)*1+lsi)*1]), &(inteval->stack[((hsi*168+21100)*1+lsi)*1]), &(inteval->stack[((hsi*168+16912)*1+lsi)*1]),1);
HRRPart0bra0ket0hg100(inteval, &(inteval->stack[((hsi*315+23145)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*210+5821)*1+lsi)*1]), &(inteval->stack[((hsi*210+17711)*1+lsi)*1]),1);
HRRPart0bra0ket0ip101(inteval, &(inteval->stack[((hsi*84+21529)*1+lsi)*1]), &(inteval->stack[((hsi*36+5673)*1+lsi)*1]), &(inteval->stack[((hsi*28+5709)*1+lsi)*1]), &(inteval->stack[((hsi*28+2676)*1+lsi)*1]), &(inteval->stack[((hsi*28+1804)*1+lsi)*1]),1);
HRRPart0bra0ket0kp101(inteval, &(inteval->stack[((hsi*108+19100)*1+lsi)*1]), &(inteval->stack[((hsi*45+5628)*1+lsi)*1]), &(inteval->stack[((hsi*36+5673)*1+lsi)*1]), &(inteval->stack[((hsi*36+2612)*1+lsi)*1]), &(inteval->stack[((hsi*36+1740)*1+lsi)*1]),1);
HRRPart0bra0ket0id101(inteval, &(inteval->stack[((hsi*168+23460)*1+lsi)*1]), &(inteval->stack[((hsi*108+19100)*1+lsi)*1]), &(inteval->stack[((hsi*84+21529)*1+lsi)*1]), &(inteval->stack[((hsi*84+15856)*1+lsi)*1]), &(inteval->stack[((hsi*84+20908)*1+lsi)*1]),1);
HRRPart0bra0ket0lp101(inteval, &(inteval->stack[((hsi*135+23628)*1+lsi)*1]), &(inteval->stack[((hsi*55+5573)*1+lsi)*1]), &(inteval->stack[((hsi*45+5628)*1+lsi)*1]), &(inteval->stack[((hsi*45+2531)*1+lsi)*1]), &(inteval->stack[((hsi*45+1659)*1+lsi)*1]),1);
HRRPart0bra0ket0kd101(inteval, &(inteval->stack[((hsi*216+23763)*1+lsi)*1]), &(inteval->stack[((hsi*135+23628)*1+lsi)*1]), &(inteval->stack[((hsi*108+19100)*1+lsi)*1]), &(inteval->stack[((hsi*108+15940)*1+lsi)*1]), &(inteval->stack[((hsi*108+20992)*1+lsi)*1]),1);
HRRPart0bra0ket0if101(inteval, &(inteval->stack[((hsi*280+23979)*1+lsi)*1]), &(inteval->stack[((hsi*216+23763)*1+lsi)*1]), &(inteval->stack[((hsi*168+23460)*1+lsi)*1]), &(inteval->stack[((hsi*168+16048)*1+lsi)*1]), &(inteval->stack[((hsi*168+21100)*1+lsi)*1]),1);
HRRPart0bra0ket0hp101(inteval, &(inteval->stack[((hsi*63+19100)*1+lsi)*1]), &(inteval->stack[((hsi*28+5709)*1+lsi)*1]), &(inteval->stack[((hsi*21+5737)*1+lsi)*1]), &(inteval->stack[((hsi*21+2725)*1+lsi)*1]), &(inteval->stack[((hsi*21+1853)*1+lsi)*1]),1);
HRRPart0bra0ket0hd101(inteval, &(inteval->stack[((hsi*126+5628)*1+lsi)*1]), &(inteval->stack[((hsi*84+21529)*1+lsi)*1]), &(inteval->stack[((hsi*63+19100)*1+lsi)*1]), &(inteval->stack[((hsi*63+16405)*1+lsi)*1]), &(inteval->stack[((hsi*63+5758)*1+lsi)*1]),1);
HRRPart0bra0ket0hf101(inteval, &(inteval->stack[((hsi*210+24259)*1+lsi)*1]), &(inteval->stack[((hsi*168+23460)*1+lsi)*1]), &(inteval->stack[((hsi*126+5628)*1+lsi)*1]), &(inteval->stack[((hsi*126+16468)*1+lsi)*1]), &(inteval->stack[((hsi*126+21268)*1+lsi)*1]),1);
HRRPart0bra0ket0hg101(inteval, &(inteval->stack[((hsi*315+24469)*1+lsi)*1]), &(inteval->stack[((hsi*280+23979)*1+lsi)*1]), &(inteval->stack[((hsi*210+24259)*1+lsi)*1]), &(inteval->stack[((hsi*210+16594)*1+lsi)*1]), &(inteval->stack[((hsi*210+5821)*1+lsi)*1]),1);
HRRPart0bra0ket0mp101(inteval, &(inteval->stack[((hsi*165+24259)*1+lsi)*1]), &(inteval->stack[((hsi*66+5507)*1+lsi)*1]), &(inteval->stack[((hsi*55+5573)*1+lsi)*1]), &(inteval->stack[((hsi*55+2431)*1+lsi)*1]), &(inteval->stack[((hsi*55+1559)*1+lsi)*1]),1);
HRRPart0bra0ket0ld101(inteval, &(inteval->stack[((hsi*270+24784)*1+lsi)*1]), &(inteval->stack[((hsi*165+24259)*1+lsi)*1]), &(inteval->stack[((hsi*135+23628)*1+lsi)*1]), &(inteval->stack[((hsi*135+17080)*1+lsi)*1]), &(inteval->stack[((hsi*135+21394)*1+lsi)*1]),1);
HRRPart0bra0ket0kf101(inteval, &(inteval->stack[((hsi*360+25054)*1+lsi)*1]), &(inteval->stack[((hsi*270+24784)*1+lsi)*1]), &(inteval->stack[((hsi*216+23763)*1+lsi)*1]), &(inteval->stack[((hsi*216+17215)*1+lsi)*1]), &(inteval->stack[((hsi*216+6031)*1+lsi)*1]),1);
HRRPart0bra0ket0ig101(inteval, &(inteval->stack[((hsi*420+23460)*1+lsi)*1]), &(inteval->stack[((hsi*360+25054)*1+lsi)*1]), &(inteval->stack[((hsi*280+23979)*1+lsi)*1]), &(inteval->stack[((hsi*280+17431)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]),1);
HRRPart0bra0ket0hh101(inteval, &(inteval->stack[((hsi*441+14008)*1+lsi)*1]), &(inteval->stack[((hsi*420+23460)*1+lsi)*1]), &(inteval->stack[((hsi*315+24469)*1+lsi)*1]), &(inteval->stack[((hsi*315+17921)*1+lsi)*1]), &(inteval->stack[((hsi*315+23145)*1+lsi)*1]),1);
HRRPart0bra0ket0ip110(inteval, &(inteval->stack[((hsi*84+23880)*1+lsi)*1]), &(inteval->stack[((hsi*36+5422)*1+lsi)*1]), &(inteval->stack[((hsi*28+5458)*1+lsi)*1]), &(inteval->stack[((hsi*28+2240)*1+lsi)*1]), &(inteval->stack[((hsi*28+1804)*1+lsi)*1]),1);
HRRPart0bra0ket0kp110(inteval, &(inteval->stack[((hsi*108+23964)*1+lsi)*1]), &(inteval->stack[((hsi*45+5377)*1+lsi)*1]), &(inteval->stack[((hsi*36+5422)*1+lsi)*1]), &(inteval->stack[((hsi*36+2176)*1+lsi)*1]), &(inteval->stack[((hsi*36+1740)*1+lsi)*1]),1);
HRRPart0bra0ket0id110(inteval, &(inteval->stack[((hsi*168+24072)*1+lsi)*1]), &(inteval->stack[((hsi*108+23964)*1+lsi)*1]), &(inteval->stack[((hsi*84+23880)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*84+20908)*1+lsi)*1]),1);
HRRPart0bra0ket0lp110(inteval, &(inteval->stack[((hsi*135+5507)*1+lsi)*1]), &(inteval->stack[((hsi*55+5322)*1+lsi)*1]), &(inteval->stack[((hsi*45+5377)*1+lsi)*1]), &(inteval->stack[((hsi*45+2095)*1+lsi)*1]), &(inteval->stack[((hsi*45+1659)*1+lsi)*1]),1);
HRRPart0bra0ket0kd110(inteval, &(inteval->stack[((hsi*216+24240)*1+lsi)*1]), &(inteval->stack[((hsi*135+5507)*1+lsi)*1]), &(inteval->stack[((hsi*108+23964)*1+lsi)*1]), &(inteval->stack[((hsi*108+18635)*1+lsi)*1]), &(inteval->stack[((hsi*108+20992)*1+lsi)*1]),1);
HRRPart0bra0ket0if110(inteval, &(inteval->stack[((hsi*280+24784)*1+lsi)*1]), &(inteval->stack[((hsi*216+24240)*1+lsi)*1]), &(inteval->stack[((hsi*168+24072)*1+lsi)*1]), &(inteval->stack[((hsi*168+18743)*1+lsi)*1]), &(inteval->stack[((hsi*168+21100)*1+lsi)*1]),1);
HRRPart0bra0ket0hp110(inteval, &(inteval->stack[((hsi*63+21529)*1+lsi)*1]), &(inteval->stack[((hsi*28+5458)*1+lsi)*1]), &(inteval->stack[((hsi*21+5486)*1+lsi)*1]), &(inteval->stack[((hsi*21+2289)*1+lsi)*1]), &(inteval->stack[((hsi*21+1853)*1+lsi)*1]),1);
HRRPart0bra0ket0hd110(inteval, &(inteval->stack[((hsi*126+5377)*1+lsi)*1]), &(inteval->stack[((hsi*84+23880)*1+lsi)*1]), &(inteval->stack[((hsi*63+21529)*1+lsi)*1]), &(inteval->stack[((hsi*63+18911)*1+lsi)*1]), &(inteval->stack[((hsi*63+5758)*1+lsi)*1]),1);
HRRPart0bra0ket0hf110(inteval, &(inteval->stack[((hsi*210+25064)*1+lsi)*1]), &(inteval->stack[((hsi*168+24072)*1+lsi)*1]), &(inteval->stack[((hsi*126+5377)*1+lsi)*1]), &(inteval->stack[((hsi*126+18974)*1+lsi)*1]), &(inteval->stack[((hsi*126+21268)*1+lsi)*1]),1);
HRRPart0bra0ket0hg110(inteval, &(inteval->stack[((hsi*315+23880)*1+lsi)*1]), &(inteval->stack[((hsi*280+24784)*1+lsi)*1]), &(inteval->stack[((hsi*210+25064)*1+lsi)*1]), &(inteval->stack[((hsi*210+6260)*1+lsi)*1]), &(inteval->stack[((hsi*210+5821)*1+lsi)*1]),1);
HRRPart0bra0ket0mp110(inteval, &(inteval->stack[((hsi*165+21529)*1+lsi)*1]), &(inteval->stack[((hsi*66+5256)*1+lsi)*1]), &(inteval->stack[((hsi*55+5322)*1+lsi)*1]), &(inteval->stack[((hsi*55+1995)*1+lsi)*1]), &(inteval->stack[((hsi*55+1559)*1+lsi)*1]),1);
HRRPart0bra0ket0ld110(inteval, &(inteval->stack[((hsi*270+25064)*1+lsi)*1]), &(inteval->stack[((hsi*165+21529)*1+lsi)*1]), &(inteval->stack[((hsi*135+5507)*1+lsi)*1]), &(inteval->stack[((hsi*135+19647)*1+lsi)*1]), &(inteval->stack[((hsi*135+21394)*1+lsi)*1]),1);
HRRPart0bra0ket0kf110(inteval, &(inteval->stack[((hsi*360+5256)*1+lsi)*1]), &(inteval->stack[((hsi*270+25064)*1+lsi)*1]), &(inteval->stack[((hsi*216+24240)*1+lsi)*1]), &(inteval->stack[((hsi*216+19782)*1+lsi)*1]), &(inteval->stack[((hsi*216+6031)*1+lsi)*1]),1);
HRRPart0bra0ket0ig110(inteval, &(inteval->stack[((hsi*420+25064)*1+lsi)*1]), &(inteval->stack[((hsi*360+5256)*1+lsi)*1]), &(inteval->stack[((hsi*280+24784)*1+lsi)*1]), &(inteval->stack[((hsi*280+19998)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]),1);
HRRPart0bra0ket0hh110(inteval, &(inteval->stack[((hsi*441+13567)*1+lsi)*1]), &(inteval->stack[((hsi*420+25064)*1+lsi)*1]), &(inteval->stack[((hsi*315+23880)*1+lsi)*1]), &(inteval->stack[((hsi*315+20278)*1+lsi)*1]), &(inteval->stack[((hsi*315+23145)*1+lsi)*1]),1);
HRRPart0bra0ket0ip200(inteval, &(inteval->stack[((hsi*84+5256)*1+lsi)*1]), &(inteval->stack[((hsi*36+5171)*1+lsi)*1]), &(inteval->stack[((hsi*28+5207)*1+lsi)*1]), &(inteval->stack[((hsi*28+1804)*1+lsi)*1]),1);
HRRPart0bra0ket0kp200(inteval, &(inteval->stack[((hsi*108+5340)*1+lsi)*1]), &(inteval->stack[((hsi*45+5126)*1+lsi)*1]), &(inteval->stack[((hsi*36+5171)*1+lsi)*1]), &(inteval->stack[((hsi*36+1740)*1+lsi)*1]),1);
HRRPart0bra0ket0id200(inteval, &(inteval->stack[((hsi*168+5448)*1+lsi)*1]), &(inteval->stack[((hsi*108+5340)*1+lsi)*1]), &(inteval->stack[((hsi*84+5256)*1+lsi)*1]), &(inteval->stack[((hsi*84+20908)*1+lsi)*1]),1);
HRRPart0bra0ket0lp200(inteval, &(inteval->stack[((hsi*135+24784)*1+lsi)*1]), &(inteval->stack[((hsi*55+5071)*1+lsi)*1]), &(inteval->stack[((hsi*45+5126)*1+lsi)*1]), &(inteval->stack[((hsi*45+1659)*1+lsi)*1]),1);
HRRPart0bra0ket0kd200(inteval, &(inteval->stack[((hsi*216+24195)*1+lsi)*1]), &(inteval->stack[((hsi*135+24784)*1+lsi)*1]), &(inteval->stack[((hsi*108+5340)*1+lsi)*1]), &(inteval->stack[((hsi*108+20992)*1+lsi)*1]),1);
HRRPart0bra0ket0if200(inteval, &(inteval->stack[((hsi*280+25484)*1+lsi)*1]), &(inteval->stack[((hsi*216+24195)*1+lsi)*1]), &(inteval->stack[((hsi*168+5448)*1+lsi)*1]), &(inteval->stack[((hsi*168+21100)*1+lsi)*1]),1);
HRRPart0bra0ket0hp200(inteval, &(inteval->stack[((hsi*63+21529)*1+lsi)*1]), &(inteval->stack[((hsi*28+5207)*1+lsi)*1]), &(inteval->stack[((hsi*21+5235)*1+lsi)*1]), &(inteval->stack[((hsi*21+1853)*1+lsi)*1]),1);
HRRPart0bra0ket0hd200(inteval, &(inteval->stack[((hsi*126+24919)*1+lsi)*1]), &(inteval->stack[((hsi*84+5256)*1+lsi)*1]), &(inteval->stack[((hsi*63+21529)*1+lsi)*1]), &(inteval->stack[((hsi*63+5758)*1+lsi)*1]),1);
HRRPart0bra0ket0hf200(inteval, &(inteval->stack[((hsi*210+5126)*1+lsi)*1]), &(inteval->stack[((hsi*168+5448)*1+lsi)*1]), &(inteval->stack[((hsi*126+24919)*1+lsi)*1]), &(inteval->stack[((hsi*126+21268)*1+lsi)*1]),1);
HRRPart0bra0ket0hg200(inteval, &(inteval->stack[((hsi*315+5336)*1+lsi)*1]), &(inteval->stack[((hsi*280+25484)*1+lsi)*1]), &(inteval->stack[((hsi*210+5126)*1+lsi)*1]), &(inteval->stack[((hsi*210+5821)*1+lsi)*1]),1);
HRRPart0bra0ket0mp200(inteval, &(inteval->stack[((hsi*165+5126)*1+lsi)*1]), &(inteval->stack[((hsi*66+5005)*1+lsi)*1]), &(inteval->stack[((hsi*55+5071)*1+lsi)*1]), &(inteval->stack[((hsi*55+1559)*1+lsi)*1]),1);
HRRPart0bra0ket0ld200(inteval, &(inteval->stack[((hsi*270+25764)*1+lsi)*1]), &(inteval->stack[((hsi*165+5126)*1+lsi)*1]), &(inteval->stack[((hsi*135+24784)*1+lsi)*1]), &(inteval->stack[((hsi*135+21394)*1+lsi)*1]),1);
HRRPart0bra0ket0kf200(inteval, &(inteval->stack[((hsi*360+26034)*1+lsi)*1]), &(inteval->stack[((hsi*270+25764)*1+lsi)*1]), &(inteval->stack[((hsi*216+24195)*1+lsi)*1]), &(inteval->stack[((hsi*216+6031)*1+lsi)*1]),1);
HRRPart0bra0ket0ig200(inteval, &(inteval->stack[((hsi*420+26394)*1+lsi)*1]), &(inteval->stack[((hsi*360+26034)*1+lsi)*1]), &(inteval->stack[((hsi*280+25484)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]),1);
HRRPart0bra0ket0hh200(inteval, &(inteval->stack[((hsi*441+13126)*1+lsi)*1]), &(inteval->stack[((hsi*420+26394)*1+lsi)*1]), &(inteval->stack[((hsi*315+5336)*1+lsi)*1]), &(inteval->stack[((hsi*315+23145)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+25484)*1+lsi)*1]), &(inteval->stack[((hsi*36+1304)*1+lsi)*1]), &(inteval->stack[((hsi*28+1368)*1+lsi)*1]), &(inteval->stack[((hsi*28+475)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p(inteval, &(inteval->stack[((hsi*108+25568)*1+lsi)*1]), &(inteval->stack[((hsi*45+1223)*1+lsi)*1]), &(inteval->stack[((hsi*36+1304)*1+lsi)*1]), &(inteval->stack[((hsi*36+383)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d(inteval, &(inteval->stack[((hsi*168+25676)*1+lsi)*1]), &(inteval->stack[((hsi*108+25568)*1+lsi)*1]), &(inteval->stack[((hsi*84+25484)*1+lsi)*1]), &(inteval->stack[((hsi*84+15772)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+25844)*1+lsi)*1]), &(inteval->stack[((hsi*28+1368)*1+lsi)*1]), &(inteval->stack[((hsi*21+1417)*1+lsi)*1]), &(inteval->stack[((hsi*21+545)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d(inteval, &(inteval->stack[((hsi*126+25907)*1+lsi)*1]), &(inteval->stack[((hsi*84+25484)*1+lsi)*1]), &(inteval->stack[((hsi*63+25844)*1+lsi)*1]), &(inteval->stack[((hsi*63+16216)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f(inteval, &(inteval->stack[((hsi*210+26033)*1+lsi)*1]), &(inteval->stack[((hsi*168+25676)*1+lsi)*1]), &(inteval->stack[((hsi*126+25907)*1+lsi)*1]), &(inteval->stack[((hsi*126+16279)*1+lsi)*1]),1);
HRRPart0bra0ket0l001p(inteval, &(inteval->stack[((hsi*135+5005)*1+lsi)*1]), &(inteval->stack[((hsi*55+1123)*1+lsi)*1]), &(inteval->stack[((hsi*45+1223)*1+lsi)*1]), &(inteval->stack[((hsi*45+266)*1+lsi)*1]),1);
HRRPart0bra0ket0k001d(inteval, &(inteval->stack[((hsi*216+24784)*1+lsi)*1]), &(inteval->stack[((hsi*135+5005)*1+lsi)*1]), &(inteval->stack[((hsi*108+25568)*1+lsi)*1]), &(inteval->stack[((hsi*108+16804)*1+lsi)*1]),1);
HRRPart0bra0ket0i001f(inteval, &(inteval->stack[((hsi*280+26814)*1+lsi)*1]), &(inteval->stack[((hsi*216+24784)*1+lsi)*1]), &(inteval->stack[((hsi*168+25676)*1+lsi)*1]), &(inteval->stack[((hsi*168+16912)*1+lsi)*1]),1);
HRRPart0bra0ket0h001g(inteval, &(inteval->stack[((hsi*315+27094)*1+lsi)*1]), &(inteval->stack[((hsi*280+26814)*1+lsi)*1]), &(inteval->stack[((hsi*210+26033)*1+lsi)*1]), &(inteval->stack[((hsi*210+17711)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p001(inteval, &(inteval->stack[((hsi*84+24195)*1+lsi)*1]), &(inteval->stack[((hsi*36+4920)*1+lsi)*1]), &(inteval->stack[((hsi*28+4956)*1+lsi)*1]), &(inteval->stack[((hsi*28+2676)*1+lsi)*1]), &(inteval->stack[((hsi*28+1368)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p001(inteval, &(inteval->stack[((hsi*108+5140)*1+lsi)*1]), &(inteval->stack[((hsi*45+4875)*1+lsi)*1]), &(inteval->stack[((hsi*36+4920)*1+lsi)*1]), &(inteval->stack[((hsi*36+2612)*1+lsi)*1]), &(inteval->stack[((hsi*36+1304)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d001(inteval, &(inteval->stack[((hsi*168+24279)*1+lsi)*1]), &(inteval->stack[((hsi*108+5140)*1+lsi)*1]), &(inteval->stack[((hsi*84+24195)*1+lsi)*1]), &(inteval->stack[((hsi*84+15856)*1+lsi)*1]), &(inteval->stack[((hsi*84+25484)*1+lsi)*1]),1);
HRRPart0bra0ket0l001p001(inteval, &(inteval->stack[((hsi*135+21529)*1+lsi)*1]), &(inteval->stack[((hsi*55+4820)*1+lsi)*1]), &(inteval->stack[((hsi*45+4875)*1+lsi)*1]), &(inteval->stack[((hsi*45+2531)*1+lsi)*1]), &(inteval->stack[((hsi*45+1223)*1+lsi)*1]),1);
HRRPart0bra0ket0k001d001(inteval, &(inteval->stack[((hsi*216+27409)*1+lsi)*1]), &(inteval->stack[((hsi*135+21529)*1+lsi)*1]), &(inteval->stack[((hsi*108+5140)*1+lsi)*1]), &(inteval->stack[((hsi*108+15940)*1+lsi)*1]), &(inteval->stack[((hsi*108+25568)*1+lsi)*1]),1);
HRRPart0bra0ket0i001f001(inteval, &(inteval->stack[((hsi*280+27625)*1+lsi)*1]), &(inteval->stack[((hsi*216+27409)*1+lsi)*1]), &(inteval->stack[((hsi*168+24279)*1+lsi)*1]), &(inteval->stack[((hsi*168+16048)*1+lsi)*1]), &(inteval->stack[((hsi*168+25676)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p001(inteval, &(inteval->stack[((hsi*63+5140)*1+lsi)*1]), &(inteval->stack[((hsi*28+4956)*1+lsi)*1]), &(inteval->stack[((hsi*21+4984)*1+lsi)*1]), &(inteval->stack[((hsi*21+2725)*1+lsi)*1]), &(inteval->stack[((hsi*21+1417)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d001(inteval, &(inteval->stack[((hsi*126+26243)*1+lsi)*1]), &(inteval->stack[((hsi*84+24195)*1+lsi)*1]), &(inteval->stack[((hsi*63+5140)*1+lsi)*1]), &(inteval->stack[((hsi*63+16405)*1+lsi)*1]), &(inteval->stack[((hsi*63+25844)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f001(inteval, &(inteval->stack[((hsi*210+27905)*1+lsi)*1]), &(inteval->stack[((hsi*168+24279)*1+lsi)*1]), &(inteval->stack[((hsi*126+26243)*1+lsi)*1]), &(inteval->stack[((hsi*126+16468)*1+lsi)*1]), &(inteval->stack[((hsi*126+25907)*1+lsi)*1]),1);
HRRPart0bra0ket0h001g001(inteval, &(inteval->stack[((hsi*315+28115)*1+lsi)*1]), &(inteval->stack[((hsi*280+27625)*1+lsi)*1]), &(inteval->stack[((hsi*210+27905)*1+lsi)*1]), &(inteval->stack[((hsi*210+16594)*1+lsi)*1]), &(inteval->stack[((hsi*210+26033)*1+lsi)*1]),1);
HRRPart0bra0ket0m001p001(inteval, &(inteval->stack[((hsi*165+24195)*1+lsi)*1]), &(inteval->stack[((hsi*66+4754)*1+lsi)*1]), &(inteval->stack[((hsi*55+4820)*1+lsi)*1]), &(inteval->stack[((hsi*55+2431)*1+lsi)*1]), &(inteval->stack[((hsi*55+1123)*1+lsi)*1]),1);
HRRPart0bra0ket0l001d001(inteval, &(inteval->stack[((hsi*270+28430)*1+lsi)*1]), &(inteval->stack[((hsi*165+24195)*1+lsi)*1]), &(inteval->stack[((hsi*135+21529)*1+lsi)*1]), &(inteval->stack[((hsi*135+17080)*1+lsi)*1]), &(inteval->stack[((hsi*135+5005)*1+lsi)*1]),1);
HRRPart0bra0ket0k001f001(inteval, &(inteval->stack[((hsi*360+28700)*1+lsi)*1]), &(inteval->stack[((hsi*270+28430)*1+lsi)*1]), &(inteval->stack[((hsi*216+27409)*1+lsi)*1]), &(inteval->stack[((hsi*216+17215)*1+lsi)*1]), &(inteval->stack[((hsi*216+24784)*1+lsi)*1]),1);
HRRPart0bra0ket0i001g001(inteval, &(inteval->stack[((hsi*420+29060)*1+lsi)*1]), &(inteval->stack[((hsi*360+28700)*1+lsi)*1]), &(inteval->stack[((hsi*280+27625)*1+lsi)*1]), &(inteval->stack[((hsi*280+17431)*1+lsi)*1]), &(inteval->stack[((hsi*280+26814)*1+lsi)*1]),1);
HRRPart0bra0ket0h001h001(inteval, &(inteval->stack[((hsi*441+12685)*1+lsi)*1]), &(inteval->stack[((hsi*420+29060)*1+lsi)*1]), &(inteval->stack[((hsi*315+28115)*1+lsi)*1]), &(inteval->stack[((hsi*315+17921)*1+lsi)*1]), &(inteval->stack[((hsi*315+27094)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p010(inteval, &(inteval->stack[((hsi*84+27409)*1+lsi)*1]), &(inteval->stack[((hsi*36+4669)*1+lsi)*1]), &(inteval->stack[((hsi*28+4705)*1+lsi)*1]), &(inteval->stack[((hsi*28+1368)*1+lsi)*1]), &(inteval->stack[((hsi*28+2240)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p010(inteval, &(inteval->stack[((hsi*108+28430)*1+lsi)*1]), &(inteval->stack[((hsi*45+4624)*1+lsi)*1]), &(inteval->stack[((hsi*36+4669)*1+lsi)*1]), &(inteval->stack[((hsi*36+1304)*1+lsi)*1]), &(inteval->stack[((hsi*36+2176)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d010(inteval, &(inteval->stack[((hsi*168+27493)*1+lsi)*1]), &(inteval->stack[((hsi*108+28430)*1+lsi)*1]), &(inteval->stack[((hsi*84+27409)*1+lsi)*1]), &(inteval->stack[((hsi*84+25484)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]),1);
HRRPart0bra0ket0l001p010(inteval, &(inteval->stack[((hsi*135+28538)*1+lsi)*1]), &(inteval->stack[((hsi*55+4569)*1+lsi)*1]), &(inteval->stack[((hsi*45+4624)*1+lsi)*1]), &(inteval->stack[((hsi*45+1223)*1+lsi)*1]), &(inteval->stack[((hsi*45+2095)*1+lsi)*1]),1);
HRRPart0bra0ket0k001d010(inteval, &(inteval->stack[((hsi*216+27661)*1+lsi)*1]), &(inteval->stack[((hsi*135+28538)*1+lsi)*1]), &(inteval->stack[((hsi*108+28430)*1+lsi)*1]), &(inteval->stack[((hsi*108+25568)*1+lsi)*1]), &(inteval->stack[((hsi*108+18635)*1+lsi)*1]),1);
HRRPart0bra0ket0i001f010(inteval, &(inteval->stack[((hsi*280+28673)*1+lsi)*1]), &(inteval->stack[((hsi*216+27661)*1+lsi)*1]), &(inteval->stack[((hsi*168+27493)*1+lsi)*1]), &(inteval->stack[((hsi*168+25676)*1+lsi)*1]), &(inteval->stack[((hsi*168+18743)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p010(inteval, &(inteval->stack[((hsi*63+24195)*1+lsi)*1]), &(inteval->stack[((hsi*28+4705)*1+lsi)*1]), &(inteval->stack[((hsi*21+4733)*1+lsi)*1]), &(inteval->stack[((hsi*21+1417)*1+lsi)*1]), &(inteval->stack[((hsi*21+2289)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d010(inteval, &(inteval->stack[((hsi*126+4624)*1+lsi)*1]), &(inteval->stack[((hsi*84+27409)*1+lsi)*1]), &(inteval->stack[((hsi*63+24195)*1+lsi)*1]), &(inteval->stack[((hsi*63+25844)*1+lsi)*1]), &(inteval->stack[((hsi*63+18911)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f010(inteval, &(inteval->stack[((hsi*210+24195)*1+lsi)*1]), &(inteval->stack[((hsi*168+27493)*1+lsi)*1]), &(inteval->stack[((hsi*126+4624)*1+lsi)*1]), &(inteval->stack[((hsi*126+25907)*1+lsi)*1]), &(inteval->stack[((hsi*126+18974)*1+lsi)*1]),1);
HRRPart0bra0ket0h001g010(inteval, &(inteval->stack[((hsi*315+4624)*1+lsi)*1]), &(inteval->stack[((hsi*280+28673)*1+lsi)*1]), &(inteval->stack[((hsi*210+24195)*1+lsi)*1]), &(inteval->stack[((hsi*210+26033)*1+lsi)*1]), &(inteval->stack[((hsi*210+6260)*1+lsi)*1]),1);
HRRPart0bra0ket0m001p010(inteval, &(inteval->stack[((hsi*165+24195)*1+lsi)*1]), &(inteval->stack[((hsi*66+4503)*1+lsi)*1]), &(inteval->stack[((hsi*55+4569)*1+lsi)*1]), &(inteval->stack[((hsi*55+1123)*1+lsi)*1]), &(inteval->stack[((hsi*55+1995)*1+lsi)*1]),1);
HRRPart0bra0ket0l001d010(inteval, &(inteval->stack[((hsi*270+29480)*1+lsi)*1]), &(inteval->stack[((hsi*165+24195)*1+lsi)*1]), &(inteval->stack[((hsi*135+28538)*1+lsi)*1]), &(inteval->stack[((hsi*135+5005)*1+lsi)*1]), &(inteval->stack[((hsi*135+19647)*1+lsi)*1]),1);
HRRPart0bra0ket0k001f010(inteval, &(inteval->stack[((hsi*360+29750)*1+lsi)*1]), &(inteval->stack[((hsi*270+29480)*1+lsi)*1]), &(inteval->stack[((hsi*216+27661)*1+lsi)*1]), &(inteval->stack[((hsi*216+24784)*1+lsi)*1]), &(inteval->stack[((hsi*216+19782)*1+lsi)*1]),1);
HRRPart0bra0ket0i001g010(inteval, &(inteval->stack[((hsi*420+27409)*1+lsi)*1]), &(inteval->stack[((hsi*360+29750)*1+lsi)*1]), &(inteval->stack[((hsi*280+28673)*1+lsi)*1]), &(inteval->stack[((hsi*280+26814)*1+lsi)*1]), &(inteval->stack[((hsi*280+19998)*1+lsi)*1]),1);
HRRPart0bra0ket0h001h010(inteval, &(inteval->stack[((hsi*441+12244)*1+lsi)*1]), &(inteval->stack[((hsi*420+27409)*1+lsi)*1]), &(inteval->stack[((hsi*315+4624)*1+lsi)*1]), &(inteval->stack[((hsi*315+27094)*1+lsi)*1]), &(inteval->stack[((hsi*315+20278)*1+lsi)*1]),1);
HRRPart0bra0ket0i001p100(inteval, &(inteval->stack[((hsi*84+28430)*1+lsi)*1]), &(inteval->stack[((hsi*36+4418)*1+lsi)*1]), &(inteval->stack[((hsi*28+4454)*1+lsi)*1]), &(inteval->stack[((hsi*28+1368)*1+lsi)*1]), &(inteval->stack[((hsi*28+1804)*1+lsi)*1]),1);
HRRPart0bra0ket0k001p100(inteval, &(inteval->stack[((hsi*108+28514)*1+lsi)*1]), &(inteval->stack[((hsi*45+4373)*1+lsi)*1]), &(inteval->stack[((hsi*36+4418)*1+lsi)*1]), &(inteval->stack[((hsi*36+1304)*1+lsi)*1]), &(inteval->stack[((hsi*36+1740)*1+lsi)*1]),1);
HRRPart0bra0ket0i001d100(inteval, &(inteval->stack[((hsi*168+28622)*1+lsi)*1]), &(inteval->stack[((hsi*108+28514)*1+lsi)*1]), &(inteval->stack[((hsi*84+28430)*1+lsi)*1]), &(inteval->stack[((hsi*84+25484)*1+lsi)*1]), &(inteval->stack[((hsi*84+20908)*1+lsi)*1]),1);
HRRPart0bra0ket0l001p100(inteval, &(inteval->stack[((hsi*135+27829)*1+lsi)*1]), &(inteval->stack[((hsi*55+4318)*1+lsi)*1]), &(inteval->stack[((hsi*45+4373)*1+lsi)*1]), &(inteval->stack[((hsi*45+1223)*1+lsi)*1]), &(inteval->stack[((hsi*45+1659)*1+lsi)*1]),1);
HRRPart0bra0ket0k001d100(inteval, &(inteval->stack[((hsi*216+24195)*1+lsi)*1]), &(inteval->stack[((hsi*135+27829)*1+lsi)*1]), &(inteval->stack[((hsi*108+28514)*1+lsi)*1]), &(inteval->stack[((hsi*108+25568)*1+lsi)*1]), &(inteval->stack[((hsi*108+20992)*1+lsi)*1]),1);
HRRPart0bra0ket0i001f100(inteval, &(inteval->stack[((hsi*280+29480)*1+lsi)*1]), &(inteval->stack[((hsi*216+24195)*1+lsi)*1]), &(inteval->stack[((hsi*168+28622)*1+lsi)*1]), &(inteval->stack[((hsi*168+25676)*1+lsi)*1]), &(inteval->stack[((hsi*168+21100)*1+lsi)*1]),1);
HRRPart0bra0ket0h001p100(inteval, &(inteval->stack[((hsi*63+28790)*1+lsi)*1]), &(inteval->stack[((hsi*28+4454)*1+lsi)*1]), &(inteval->stack[((hsi*21+4482)*1+lsi)*1]), &(inteval->stack[((hsi*21+1417)*1+lsi)*1]), &(inteval->stack[((hsi*21+1853)*1+lsi)*1]),1);
HRRPart0bra0ket0h001d100(inteval, &(inteval->stack[((hsi*126+4373)*1+lsi)*1]), &(inteval->stack[((hsi*84+28430)*1+lsi)*1]), &(inteval->stack[((hsi*63+28790)*1+lsi)*1]), &(inteval->stack[((hsi*63+25844)*1+lsi)*1]), &(inteval->stack[((hsi*63+5758)*1+lsi)*1]),1);
HRRPart0bra0ket0h001f100(inteval, &(inteval->stack[((hsi*210+28790)*1+lsi)*1]), &(inteval->stack[((hsi*168+28622)*1+lsi)*1]), &(inteval->stack[((hsi*126+4373)*1+lsi)*1]), &(inteval->stack[((hsi*126+25907)*1+lsi)*1]), &(inteval->stack[((hsi*126+21268)*1+lsi)*1]),1);
HRRPart0bra0ket0h001g100(inteval, &(inteval->stack[((hsi*315+28430)*1+lsi)*1]), &(inteval->stack[((hsi*280+29480)*1+lsi)*1]), &(inteval->stack[((hsi*210+28790)*1+lsi)*1]), &(inteval->stack[((hsi*210+26033)*1+lsi)*1]), &(inteval->stack[((hsi*210+5821)*1+lsi)*1]),1);
HRRPart0bra0ket0m001p100(inteval, &(inteval->stack[((hsi*165+28745)*1+lsi)*1]), &(inteval->stack[((hsi*66+4252)*1+lsi)*1]), &(inteval->stack[((hsi*55+4318)*1+lsi)*1]), &(inteval->stack[((hsi*55+1123)*1+lsi)*1]), &(inteval->stack[((hsi*55+1559)*1+lsi)*1]),1);
HRRPart0bra0ket0l001d100(inteval, &(inteval->stack[((hsi*270+4252)*1+lsi)*1]), &(inteval->stack[((hsi*165+28745)*1+lsi)*1]), &(inteval->stack[((hsi*135+27829)*1+lsi)*1]), &(inteval->stack[((hsi*135+5005)*1+lsi)*1]), &(inteval->stack[((hsi*135+21394)*1+lsi)*1]),1);
HRRPart0bra0ket0k001f100(inteval, &(inteval->stack[((hsi*360+29760)*1+lsi)*1]), &(inteval->stack[((hsi*270+4252)*1+lsi)*1]), &(inteval->stack[((hsi*216+24195)*1+lsi)*1]), &(inteval->stack[((hsi*216+24784)*1+lsi)*1]), &(inteval->stack[((hsi*216+6031)*1+lsi)*1]),1);
HRRPart0bra0ket0i001g100(inteval, &(inteval->stack[((hsi*420+30120)*1+lsi)*1]), &(inteval->stack[((hsi*360+29760)*1+lsi)*1]), &(inteval->stack[((hsi*280+29480)*1+lsi)*1]), &(inteval->stack[((hsi*280+26814)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]),1);
HRRPart0bra0ket0h001h100(inteval, &(inteval->stack[((hsi*441+11803)*1+lsi)*1]), &(inteval->stack[((hsi*420+30120)*1+lsi)*1]), &(inteval->stack[((hsi*315+28430)*1+lsi)*1]), &(inteval->stack[((hsi*315+27094)*1+lsi)*1]), &(inteval->stack[((hsi*315+23145)*1+lsi)*1]),1);
HRRPart0bra0ket0i002p(inteval, &(inteval->stack[((hsi*84+29480)*1+lsi)*1]), &(inteval->stack[((hsi*36+4167)*1+lsi)*1]), &(inteval->stack[((hsi*28+4203)*1+lsi)*1]), &(inteval->stack[((hsi*28+1368)*1+lsi)*1]),1);
HRRPart0bra0ket0k002p(inteval, &(inteval->stack[((hsi*108+29564)*1+lsi)*1]), &(inteval->stack[((hsi*45+4122)*1+lsi)*1]), &(inteval->stack[((hsi*36+4167)*1+lsi)*1]), &(inteval->stack[((hsi*36+1304)*1+lsi)*1]),1);
HRRPart0bra0ket0i002d(inteval, &(inteval->stack[((hsi*168+29672)*1+lsi)*1]), &(inteval->stack[((hsi*108+29564)*1+lsi)*1]), &(inteval->stack[((hsi*84+29480)*1+lsi)*1]), &(inteval->stack[((hsi*84+25484)*1+lsi)*1]),1);
HRRPart0bra0ket0l002p(inteval, &(inteval->stack[((hsi*135+4252)*1+lsi)*1]), &(inteval->stack[((hsi*55+4067)*1+lsi)*1]), &(inteval->stack[((hsi*45+4122)*1+lsi)*1]), &(inteval->stack[((hsi*45+1223)*1+lsi)*1]),1);
HRRPart0bra0ket0k002d(inteval, &(inteval->stack[((hsi*216+28745)*1+lsi)*1]), &(inteval->stack[((hsi*135+4252)*1+lsi)*1]), &(inteval->stack[((hsi*108+29564)*1+lsi)*1]), &(inteval->stack[((hsi*108+25568)*1+lsi)*1]),1);
HRRPart0bra0ket0i002f(inteval, &(inteval->stack[((hsi*280+29840)*1+lsi)*1]), &(inteval->stack[((hsi*216+28745)*1+lsi)*1]), &(inteval->stack[((hsi*168+29672)*1+lsi)*1]), &(inteval->stack[((hsi*168+25676)*1+lsi)*1]),1);
HRRPart0bra0ket0h002p(inteval, &(inteval->stack[((hsi*63+27829)*1+lsi)*1]), &(inteval->stack[((hsi*28+4203)*1+lsi)*1]), &(inteval->stack[((hsi*21+4231)*1+lsi)*1]), &(inteval->stack[((hsi*21+1417)*1+lsi)*1]),1);
HRRPart0bra0ket0h002d(inteval, &(inteval->stack[((hsi*126+24195)*1+lsi)*1]), &(inteval->stack[((hsi*84+29480)*1+lsi)*1]), &(inteval->stack[((hsi*63+27829)*1+lsi)*1]), &(inteval->stack[((hsi*63+25844)*1+lsi)*1]),1);
HRRPart0bra0ket0h002f(inteval, &(inteval->stack[((hsi*210+27829)*1+lsi)*1]), &(inteval->stack[((hsi*168+29672)*1+lsi)*1]), &(inteval->stack[((hsi*126+24195)*1+lsi)*1]), &(inteval->stack[((hsi*126+25907)*1+lsi)*1]),1);
HRRPart0bra0ket0h002g(inteval, &(inteval->stack[((hsi*315+29480)*1+lsi)*1]), &(inteval->stack[((hsi*280+29840)*1+lsi)*1]), &(inteval->stack[((hsi*210+27829)*1+lsi)*1]), &(inteval->stack[((hsi*210+26033)*1+lsi)*1]),1);
HRRPart0bra0ket0m002p(inteval, &(inteval->stack[((hsi*165+27829)*1+lsi)*1]), &(inteval->stack[((hsi*66+4001)*1+lsi)*1]), &(inteval->stack[((hsi*55+4067)*1+lsi)*1]), &(inteval->stack[((hsi*55+1123)*1+lsi)*1]),1);
HRRPart0bra0ket0l002d(inteval, &(inteval->stack[((hsi*270+24195)*1+lsi)*1]), &(inteval->stack[((hsi*165+27829)*1+lsi)*1]), &(inteval->stack[((hsi*135+4252)*1+lsi)*1]), &(inteval->stack[((hsi*135+5005)*1+lsi)*1]),1);
HRRPart0bra0ket0k002f(inteval, &(inteval->stack[((hsi*360+4001)*1+lsi)*1]), &(inteval->stack[((hsi*270+24195)*1+lsi)*1]), &(inteval->stack[((hsi*216+28745)*1+lsi)*1]), &(inteval->stack[((hsi*216+24784)*1+lsi)*1]),1);
HRRPart0bra0ket0i002g(inteval, &(inteval->stack[((hsi*420+30540)*1+lsi)*1]), &(inteval->stack[((hsi*360+4001)*1+lsi)*1]), &(inteval->stack[((hsi*280+29840)*1+lsi)*1]), &(inteval->stack[((hsi*280+26814)*1+lsi)*1]),1);
HRRPart0bra0ket0h002h(inteval, &(inteval->stack[((hsi*441+11362)*1+lsi)*1]), &(inteval->stack[((hsi*420+30540)*1+lsi)*1]), &(inteval->stack[((hsi*315+29480)*1+lsi)*1]), &(inteval->stack[((hsi*315+27094)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+4001)*1+lsi)*1]), &(inteval->stack[((hsi*36+868)*1+lsi)*1]), &(inteval->stack[((hsi*28+932)*1+lsi)*1]), &(inteval->stack[((hsi*28+475)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p(inteval, &(inteval->stack[((hsi*108+4085)*1+lsi)*1]), &(inteval->stack[((hsi*45+787)*1+lsi)*1]), &(inteval->stack[((hsi*36+868)*1+lsi)*1]), &(inteval->stack[((hsi*36+383)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d(inteval, &(inteval->stack[((hsi*168+4193)*1+lsi)*1]), &(inteval->stack[((hsi*108+4085)*1+lsi)*1]), &(inteval->stack[((hsi*84+4001)*1+lsi)*1]), &(inteval->stack[((hsi*84+15772)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+29795)*1+lsi)*1]), &(inteval->stack[((hsi*28+932)*1+lsi)*1]), &(inteval->stack[((hsi*21+981)*1+lsi)*1]), &(inteval->stack[((hsi*21+545)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d(inteval, &(inteval->stack[((hsi*126+28745)*1+lsi)*1]), &(inteval->stack[((hsi*84+4001)*1+lsi)*1]), &(inteval->stack[((hsi*63+29795)*1+lsi)*1]), &(inteval->stack[((hsi*63+16216)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f(inteval, &(inteval->stack[((hsi*210+27829)*1+lsi)*1]), &(inteval->stack[((hsi*168+4193)*1+lsi)*1]), &(inteval->stack[((hsi*126+28745)*1+lsi)*1]), &(inteval->stack[((hsi*126+16279)*1+lsi)*1]),1);
HRRPart0bra0ket0l010p(inteval, &(inteval->stack[((hsi*135+24195)*1+lsi)*1]), &(inteval->stack[((hsi*55+687)*1+lsi)*1]), &(inteval->stack[((hsi*45+787)*1+lsi)*1]), &(inteval->stack[((hsi*45+266)*1+lsi)*1]),1);
HRRPart0bra0ket0k010d(inteval, &(inteval->stack[((hsi*216+4361)*1+lsi)*1]), &(inteval->stack[((hsi*135+24195)*1+lsi)*1]), &(inteval->stack[((hsi*108+4085)*1+lsi)*1]), &(inteval->stack[((hsi*108+16804)*1+lsi)*1]),1);
HRRPart0bra0ket0i010f(inteval, &(inteval->stack[((hsi*280+30960)*1+lsi)*1]), &(inteval->stack[((hsi*216+4361)*1+lsi)*1]), &(inteval->stack[((hsi*168+4193)*1+lsi)*1]), &(inteval->stack[((hsi*168+16912)*1+lsi)*1]),1);
HRRPart0bra0ket0h010g(inteval, &(inteval->stack[((hsi*315+31240)*1+lsi)*1]), &(inteval->stack[((hsi*280+30960)*1+lsi)*1]), &(inteval->stack[((hsi*210+27829)*1+lsi)*1]), &(inteval->stack[((hsi*210+17711)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p001(inteval, &(inteval->stack[((hsi*84+29858)*1+lsi)*1]), &(inteval->stack[((hsi*36+3916)*1+lsi)*1]), &(inteval->stack[((hsi*28+3952)*1+lsi)*1]), &(inteval->stack[((hsi*28+2676)*1+lsi)*1]), &(inteval->stack[((hsi*28+932)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p001(inteval, &(inteval->stack[((hsi*108+5140)*1+lsi)*1]), &(inteval->stack[((hsi*45+3871)*1+lsi)*1]), &(inteval->stack[((hsi*36+3916)*1+lsi)*1]), &(inteval->stack[((hsi*36+2612)*1+lsi)*1]), &(inteval->stack[((hsi*36+868)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d001(inteval, &(inteval->stack[((hsi*168+28871)*1+lsi)*1]), &(inteval->stack[((hsi*108+5140)*1+lsi)*1]), &(inteval->stack[((hsi*84+29858)*1+lsi)*1]), &(inteval->stack[((hsi*84+15856)*1+lsi)*1]), &(inteval->stack[((hsi*84+4001)*1+lsi)*1]),1);
HRRPart0bra0ket0l010p001(inteval, &(inteval->stack[((hsi*135+21529)*1+lsi)*1]), &(inteval->stack[((hsi*55+3816)*1+lsi)*1]), &(inteval->stack[((hsi*45+3871)*1+lsi)*1]), &(inteval->stack[((hsi*45+2531)*1+lsi)*1]), &(inteval->stack[((hsi*45+787)*1+lsi)*1]),1);
HRRPart0bra0ket0k010d001(inteval, &(inteval->stack[((hsi*216+31555)*1+lsi)*1]), &(inteval->stack[((hsi*135+21529)*1+lsi)*1]), &(inteval->stack[((hsi*108+5140)*1+lsi)*1]), &(inteval->stack[((hsi*108+15940)*1+lsi)*1]), &(inteval->stack[((hsi*108+4085)*1+lsi)*1]),1);
HRRPart0bra0ket0i010f001(inteval, &(inteval->stack[((hsi*280+31771)*1+lsi)*1]), &(inteval->stack[((hsi*216+31555)*1+lsi)*1]), &(inteval->stack[((hsi*168+28871)*1+lsi)*1]), &(inteval->stack[((hsi*168+16048)*1+lsi)*1]), &(inteval->stack[((hsi*168+4193)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p001(inteval, &(inteval->stack[((hsi*63+5140)*1+lsi)*1]), &(inteval->stack[((hsi*28+3952)*1+lsi)*1]), &(inteval->stack[((hsi*21+3980)*1+lsi)*1]), &(inteval->stack[((hsi*21+2725)*1+lsi)*1]), &(inteval->stack[((hsi*21+981)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d001(inteval, &(inteval->stack[((hsi*126+29942)*1+lsi)*1]), &(inteval->stack[((hsi*84+29858)*1+lsi)*1]), &(inteval->stack[((hsi*63+5140)*1+lsi)*1]), &(inteval->stack[((hsi*63+16405)*1+lsi)*1]), &(inteval->stack[((hsi*63+29795)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f001(inteval, &(inteval->stack[((hsi*210+32051)*1+lsi)*1]), &(inteval->stack[((hsi*168+28871)*1+lsi)*1]), &(inteval->stack[((hsi*126+29942)*1+lsi)*1]), &(inteval->stack[((hsi*126+16468)*1+lsi)*1]), &(inteval->stack[((hsi*126+28745)*1+lsi)*1]),1);
HRRPart0bra0ket0h010g001(inteval, &(inteval->stack[((hsi*315+32261)*1+lsi)*1]), &(inteval->stack[((hsi*280+31771)*1+lsi)*1]), &(inteval->stack[((hsi*210+32051)*1+lsi)*1]), &(inteval->stack[((hsi*210+16594)*1+lsi)*1]), &(inteval->stack[((hsi*210+27829)*1+lsi)*1]),1);
HRRPart0bra0ket0m010p001(inteval, &(inteval->stack[((hsi*165+29858)*1+lsi)*1]), &(inteval->stack[((hsi*66+3750)*1+lsi)*1]), &(inteval->stack[((hsi*55+3816)*1+lsi)*1]), &(inteval->stack[((hsi*55+2431)*1+lsi)*1]), &(inteval->stack[((hsi*55+687)*1+lsi)*1]),1);
HRRPart0bra0ket0l010d001(inteval, &(inteval->stack[((hsi*270+32576)*1+lsi)*1]), &(inteval->stack[((hsi*165+29858)*1+lsi)*1]), &(inteval->stack[((hsi*135+21529)*1+lsi)*1]), &(inteval->stack[((hsi*135+17080)*1+lsi)*1]), &(inteval->stack[((hsi*135+24195)*1+lsi)*1]),1);
HRRPart0bra0ket0k010f001(inteval, &(inteval->stack[((hsi*360+32846)*1+lsi)*1]), &(inteval->stack[((hsi*270+32576)*1+lsi)*1]), &(inteval->stack[((hsi*216+31555)*1+lsi)*1]), &(inteval->stack[((hsi*216+17215)*1+lsi)*1]), &(inteval->stack[((hsi*216+4361)*1+lsi)*1]),1);
HRRPart0bra0ket0i010g001(inteval, &(inteval->stack[((hsi*420+33206)*1+lsi)*1]), &(inteval->stack[((hsi*360+32846)*1+lsi)*1]), &(inteval->stack[((hsi*280+31771)*1+lsi)*1]), &(inteval->stack[((hsi*280+17431)*1+lsi)*1]), &(inteval->stack[((hsi*280+30960)*1+lsi)*1]),1);
HRRPart0bra0ket0h010h001(inteval, &(inteval->stack[((hsi*441+10921)*1+lsi)*1]), &(inteval->stack[((hsi*420+33206)*1+lsi)*1]), &(inteval->stack[((hsi*315+32261)*1+lsi)*1]), &(inteval->stack[((hsi*315+17921)*1+lsi)*1]), &(inteval->stack[((hsi*315+31240)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p010(inteval, &(inteval->stack[((hsi*84+31555)*1+lsi)*1]), &(inteval->stack[((hsi*36+3665)*1+lsi)*1]), &(inteval->stack[((hsi*28+3701)*1+lsi)*1]), &(inteval->stack[((hsi*28+2240)*1+lsi)*1]), &(inteval->stack[((hsi*28+932)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p010(inteval, &(inteval->stack[((hsi*108+32576)*1+lsi)*1]), &(inteval->stack[((hsi*45+3620)*1+lsi)*1]), &(inteval->stack[((hsi*36+3665)*1+lsi)*1]), &(inteval->stack[((hsi*36+2176)*1+lsi)*1]), &(inteval->stack[((hsi*36+868)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d010(inteval, &(inteval->stack[((hsi*168+31639)*1+lsi)*1]), &(inteval->stack[((hsi*108+32576)*1+lsi)*1]), &(inteval->stack[((hsi*84+31555)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*84+4001)*1+lsi)*1]),1);
HRRPart0bra0ket0l010p010(inteval, &(inteval->stack[((hsi*135+32684)*1+lsi)*1]), &(inteval->stack[((hsi*55+3565)*1+lsi)*1]), &(inteval->stack[((hsi*45+3620)*1+lsi)*1]), &(inteval->stack[((hsi*45+2095)*1+lsi)*1]), &(inteval->stack[((hsi*45+787)*1+lsi)*1]),1);
HRRPart0bra0ket0k010d010(inteval, &(inteval->stack[((hsi*216+31807)*1+lsi)*1]), &(inteval->stack[((hsi*135+32684)*1+lsi)*1]), &(inteval->stack[((hsi*108+32576)*1+lsi)*1]), &(inteval->stack[((hsi*108+18635)*1+lsi)*1]), &(inteval->stack[((hsi*108+4085)*1+lsi)*1]),1);
HRRPart0bra0ket0i010f010(inteval, &(inteval->stack[((hsi*280+32819)*1+lsi)*1]), &(inteval->stack[((hsi*216+31807)*1+lsi)*1]), &(inteval->stack[((hsi*168+31639)*1+lsi)*1]), &(inteval->stack[((hsi*168+18743)*1+lsi)*1]), &(inteval->stack[((hsi*168+4193)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p010(inteval, &(inteval->stack[((hsi*63+29858)*1+lsi)*1]), &(inteval->stack[((hsi*28+3701)*1+lsi)*1]), &(inteval->stack[((hsi*21+3729)*1+lsi)*1]), &(inteval->stack[((hsi*21+2289)*1+lsi)*1]), &(inteval->stack[((hsi*21+981)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d010(inteval, &(inteval->stack[((hsi*126+3620)*1+lsi)*1]), &(inteval->stack[((hsi*84+31555)*1+lsi)*1]), &(inteval->stack[((hsi*63+29858)*1+lsi)*1]), &(inteval->stack[((hsi*63+18911)*1+lsi)*1]), &(inteval->stack[((hsi*63+29795)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f010(inteval, &(inteval->stack[((hsi*210+29858)*1+lsi)*1]), &(inteval->stack[((hsi*168+31639)*1+lsi)*1]), &(inteval->stack[((hsi*126+3620)*1+lsi)*1]), &(inteval->stack[((hsi*126+18974)*1+lsi)*1]), &(inteval->stack[((hsi*126+28745)*1+lsi)*1]),1);
HRRPart0bra0ket0h010g010(inteval, &(inteval->stack[((hsi*315+3620)*1+lsi)*1]), &(inteval->stack[((hsi*280+32819)*1+lsi)*1]), &(inteval->stack[((hsi*210+29858)*1+lsi)*1]), &(inteval->stack[((hsi*210+6260)*1+lsi)*1]), &(inteval->stack[((hsi*210+27829)*1+lsi)*1]),1);
HRRPart0bra0ket0m010p010(inteval, &(inteval->stack[((hsi*165+29858)*1+lsi)*1]), &(inteval->stack[((hsi*66+3499)*1+lsi)*1]), &(inteval->stack[((hsi*55+3565)*1+lsi)*1]), &(inteval->stack[((hsi*55+1995)*1+lsi)*1]), &(inteval->stack[((hsi*55+687)*1+lsi)*1]),1);
HRRPart0bra0ket0l010d010(inteval, &(inteval->stack[((hsi*270+33626)*1+lsi)*1]), &(inteval->stack[((hsi*165+29858)*1+lsi)*1]), &(inteval->stack[((hsi*135+32684)*1+lsi)*1]), &(inteval->stack[((hsi*135+19647)*1+lsi)*1]), &(inteval->stack[((hsi*135+24195)*1+lsi)*1]),1);
HRRPart0bra0ket0k010f010(inteval, &(inteval->stack[((hsi*360+33896)*1+lsi)*1]), &(inteval->stack[((hsi*270+33626)*1+lsi)*1]), &(inteval->stack[((hsi*216+31807)*1+lsi)*1]), &(inteval->stack[((hsi*216+19782)*1+lsi)*1]), &(inteval->stack[((hsi*216+4361)*1+lsi)*1]),1);
HRRPart0bra0ket0i010g010(inteval, &(inteval->stack[((hsi*420+31555)*1+lsi)*1]), &(inteval->stack[((hsi*360+33896)*1+lsi)*1]), &(inteval->stack[((hsi*280+32819)*1+lsi)*1]), &(inteval->stack[((hsi*280+19998)*1+lsi)*1]), &(inteval->stack[((hsi*280+30960)*1+lsi)*1]),1);
HRRPart0bra0ket0h010h010(inteval, &(inteval->stack[((hsi*441+10480)*1+lsi)*1]), &(inteval->stack[((hsi*420+31555)*1+lsi)*1]), &(inteval->stack[((hsi*315+3620)*1+lsi)*1]), &(inteval->stack[((hsi*315+20278)*1+lsi)*1]), &(inteval->stack[((hsi*315+31240)*1+lsi)*1]),1);
HRRPart0bra0ket0i010p100(inteval, &(inteval->stack[((hsi*84+32576)*1+lsi)*1]), &(inteval->stack[((hsi*36+3414)*1+lsi)*1]), &(inteval->stack[((hsi*28+3450)*1+lsi)*1]), &(inteval->stack[((hsi*28+932)*1+lsi)*1]), &(inteval->stack[((hsi*28+1804)*1+lsi)*1]),1);
HRRPart0bra0ket0k010p100(inteval, &(inteval->stack[((hsi*108+32660)*1+lsi)*1]), &(inteval->stack[((hsi*45+3369)*1+lsi)*1]), &(inteval->stack[((hsi*36+3414)*1+lsi)*1]), &(inteval->stack[((hsi*36+868)*1+lsi)*1]), &(inteval->stack[((hsi*36+1740)*1+lsi)*1]),1);
HRRPart0bra0ket0i010d100(inteval, &(inteval->stack[((hsi*168+32768)*1+lsi)*1]), &(inteval->stack[((hsi*108+32660)*1+lsi)*1]), &(inteval->stack[((hsi*84+32576)*1+lsi)*1]), &(inteval->stack[((hsi*84+4001)*1+lsi)*1]), &(inteval->stack[((hsi*84+20908)*1+lsi)*1]),1);
HRRPart0bra0ket0l010p100(inteval, &(inteval->stack[((hsi*135+31975)*1+lsi)*1]), &(inteval->stack[((hsi*55+3314)*1+lsi)*1]), &(inteval->stack[((hsi*45+3369)*1+lsi)*1]), &(inteval->stack[((hsi*45+787)*1+lsi)*1]), &(inteval->stack[((hsi*45+1659)*1+lsi)*1]),1);
HRRPart0bra0ket0k010d100(inteval, &(inteval->stack[((hsi*216+32936)*1+lsi)*1]), &(inteval->stack[((hsi*135+31975)*1+lsi)*1]), &(inteval->stack[((hsi*108+32660)*1+lsi)*1]), &(inteval->stack[((hsi*108+4085)*1+lsi)*1]), &(inteval->stack[((hsi*108+20992)*1+lsi)*1]),1);
HRRPart0bra0ket0i010f100(inteval, &(inteval->stack[((hsi*280+33626)*1+lsi)*1]), &(inteval->stack[((hsi*216+32936)*1+lsi)*1]), &(inteval->stack[((hsi*168+32768)*1+lsi)*1]), &(inteval->stack[((hsi*168+4193)*1+lsi)*1]), &(inteval->stack[((hsi*168+21100)*1+lsi)*1]),1);
HRRPart0bra0ket0h010p100(inteval, &(inteval->stack[((hsi*63+29858)*1+lsi)*1]), &(inteval->stack[((hsi*28+3450)*1+lsi)*1]), &(inteval->stack[((hsi*21+3478)*1+lsi)*1]), &(inteval->stack[((hsi*21+981)*1+lsi)*1]), &(inteval->stack[((hsi*21+1853)*1+lsi)*1]),1);
HRRPart0bra0ket0h010d100(inteval, &(inteval->stack[((hsi*126+3369)*1+lsi)*1]), &(inteval->stack[((hsi*84+32576)*1+lsi)*1]), &(inteval->stack[((hsi*63+29858)*1+lsi)*1]), &(inteval->stack[((hsi*63+29795)*1+lsi)*1]), &(inteval->stack[((hsi*63+5758)*1+lsi)*1]),1);
HRRPart0bra0ket0h010f100(inteval, &(inteval->stack[((hsi*210+29858)*1+lsi)*1]), &(inteval->stack[((hsi*168+32768)*1+lsi)*1]), &(inteval->stack[((hsi*126+3369)*1+lsi)*1]), &(inteval->stack[((hsi*126+28745)*1+lsi)*1]), &(inteval->stack[((hsi*126+21268)*1+lsi)*1]),1);
HRRPart0bra0ket0h010g100(inteval, &(inteval->stack[((hsi*315+32576)*1+lsi)*1]), &(inteval->stack[((hsi*280+33626)*1+lsi)*1]), &(inteval->stack[((hsi*210+29858)*1+lsi)*1]), &(inteval->stack[((hsi*210+27829)*1+lsi)*1]), &(inteval->stack[((hsi*210+5821)*1+lsi)*1]),1);
HRRPart0bra0ket0m010p100(inteval, &(inteval->stack[((hsi*165+29858)*1+lsi)*1]), &(inteval->stack[((hsi*66+3248)*1+lsi)*1]), &(inteval->stack[((hsi*55+3314)*1+lsi)*1]), &(inteval->stack[((hsi*55+687)*1+lsi)*1]), &(inteval->stack[((hsi*55+1559)*1+lsi)*1]),1);
HRRPart0bra0ket0l010d100(inteval, &(inteval->stack[((hsi*270+3248)*1+lsi)*1]), &(inteval->stack[((hsi*165+29858)*1+lsi)*1]), &(inteval->stack[((hsi*135+31975)*1+lsi)*1]), &(inteval->stack[((hsi*135+24195)*1+lsi)*1]), &(inteval->stack[((hsi*135+21394)*1+lsi)*1]),1);
HRRPart0bra0ket0k010f100(inteval, &(inteval->stack[((hsi*360+33906)*1+lsi)*1]), &(inteval->stack[((hsi*270+3248)*1+lsi)*1]), &(inteval->stack[((hsi*216+32936)*1+lsi)*1]), &(inteval->stack[((hsi*216+4361)*1+lsi)*1]), &(inteval->stack[((hsi*216+6031)*1+lsi)*1]),1);
HRRPart0bra0ket0i010g100(inteval, &(inteval->stack[((hsi*420+34266)*1+lsi)*1]), &(inteval->stack[((hsi*360+33906)*1+lsi)*1]), &(inteval->stack[((hsi*280+33626)*1+lsi)*1]), &(inteval->stack[((hsi*280+30960)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]),1);
HRRPart0bra0ket0h010h100(inteval, &(inteval->stack[((hsi*441+10039)*1+lsi)*1]), &(inteval->stack[((hsi*420+34266)*1+lsi)*1]), &(inteval->stack[((hsi*315+32576)*1+lsi)*1]), &(inteval->stack[((hsi*315+31240)*1+lsi)*1]), &(inteval->stack[((hsi*315+23145)*1+lsi)*1]),1);
HRRPart0bra0ket0i011p(inteval, &(inteval->stack[((hsi*84+33626)*1+lsi)*1]), &(inteval->stack[((hsi*36+3163)*1+lsi)*1]), &(inteval->stack[((hsi*28+3199)*1+lsi)*1]), &(inteval->stack[((hsi*28+1368)*1+lsi)*1]), &(inteval->stack[((hsi*28+932)*1+lsi)*1]),1);
HRRPart0bra0ket0k011p(inteval, &(inteval->stack[((hsi*108+33710)*1+lsi)*1]), &(inteval->stack[((hsi*45+3118)*1+lsi)*1]), &(inteval->stack[((hsi*36+3163)*1+lsi)*1]), &(inteval->stack[((hsi*36+1304)*1+lsi)*1]), &(inteval->stack[((hsi*36+868)*1+lsi)*1]),1);
HRRPart0bra0ket0i011d(inteval, &(inteval->stack[((hsi*168+33818)*1+lsi)*1]), &(inteval->stack[((hsi*108+33710)*1+lsi)*1]), &(inteval->stack[((hsi*84+33626)*1+lsi)*1]), &(inteval->stack[((hsi*84+25484)*1+lsi)*1]), &(inteval->stack[((hsi*84+4001)*1+lsi)*1]),1);
HRRPart0bra0ket0l011p(inteval, &(inteval->stack[((hsi*135+3248)*1+lsi)*1]), &(inteval->stack[((hsi*55+3063)*1+lsi)*1]), &(inteval->stack[((hsi*45+3118)*1+lsi)*1]), &(inteval->stack[((hsi*45+1223)*1+lsi)*1]), &(inteval->stack[((hsi*45+787)*1+lsi)*1]),1);
HRRPart0bra0ket0k011d(inteval, &(inteval->stack[((hsi*216+32891)*1+lsi)*1]), &(inteval->stack[((hsi*135+3248)*1+lsi)*1]), &(inteval->stack[((hsi*108+33710)*1+lsi)*1]), &(inteval->stack[((hsi*108+25568)*1+lsi)*1]), &(inteval->stack[((hsi*108+4085)*1+lsi)*1]),1);
HRRPart0bra0ket0i011f(inteval, &(inteval->stack[((hsi*280+33986)*1+lsi)*1]), &(inteval->stack[((hsi*216+32891)*1+lsi)*1]), &(inteval->stack[((hsi*168+33818)*1+lsi)*1]), &(inteval->stack[((hsi*168+25676)*1+lsi)*1]), &(inteval->stack[((hsi*168+4193)*1+lsi)*1]),1);
HRRPart0bra0ket0h011p(inteval, &(inteval->stack[((hsi*63+31975)*1+lsi)*1]), &(inteval->stack[((hsi*28+3199)*1+lsi)*1]), &(inteval->stack[((hsi*21+3227)*1+lsi)*1]), &(inteval->stack[((hsi*21+1417)*1+lsi)*1]), &(inteval->stack[((hsi*21+981)*1+lsi)*1]),1);
HRRPart0bra0ket0h011d(inteval, &(inteval->stack[((hsi*126+29858)*1+lsi)*1]), &(inteval->stack[((hsi*84+33626)*1+lsi)*1]), &(inteval->stack[((hsi*63+31975)*1+lsi)*1]), &(inteval->stack[((hsi*63+25844)*1+lsi)*1]), &(inteval->stack[((hsi*63+29795)*1+lsi)*1]),1);
HRRPart0bra0ket0h011f(inteval, &(inteval->stack[((hsi*210+31975)*1+lsi)*1]), &(inteval->stack[((hsi*168+33818)*1+lsi)*1]), &(inteval->stack[((hsi*126+29858)*1+lsi)*1]), &(inteval->stack[((hsi*126+25907)*1+lsi)*1]), &(inteval->stack[((hsi*126+28745)*1+lsi)*1]),1);
HRRPart0bra0ket0h011g(inteval, &(inteval->stack[((hsi*315+33626)*1+lsi)*1]), &(inteval->stack[((hsi*280+33986)*1+lsi)*1]), &(inteval->stack[((hsi*210+31975)*1+lsi)*1]), &(inteval->stack[((hsi*210+26033)*1+lsi)*1]), &(inteval->stack[((hsi*210+27829)*1+lsi)*1]),1);
HRRPart0bra0ket0m011p(inteval, &(inteval->stack[((hsi*165+31975)*1+lsi)*1]), &(inteval->stack[((hsi*66+2997)*1+lsi)*1]), &(inteval->stack[((hsi*55+3063)*1+lsi)*1]), &(inteval->stack[((hsi*55+1123)*1+lsi)*1]), &(inteval->stack[((hsi*55+687)*1+lsi)*1]),1);
HRRPart0bra0ket0l011d(inteval, &(inteval->stack[((hsi*270+34686)*1+lsi)*1]), &(inteval->stack[((hsi*165+31975)*1+lsi)*1]), &(inteval->stack[((hsi*135+3248)*1+lsi)*1]), &(inteval->stack[((hsi*135+5005)*1+lsi)*1]), &(inteval->stack[((hsi*135+24195)*1+lsi)*1]),1);
HRRPart0bra0ket0k011f(inteval, &(inteval->stack[((hsi*360+2997)*1+lsi)*1]), &(inteval->stack[((hsi*270+34686)*1+lsi)*1]), &(inteval->stack[((hsi*216+32891)*1+lsi)*1]), &(inteval->stack[((hsi*216+24784)*1+lsi)*1]), &(inteval->stack[((hsi*216+4361)*1+lsi)*1]),1);
HRRPart0bra0ket0i011g(inteval, &(inteval->stack[((hsi*420+34686)*1+lsi)*1]), &(inteval->stack[((hsi*360+2997)*1+lsi)*1]), &(inteval->stack[((hsi*280+33986)*1+lsi)*1]), &(inteval->stack[((hsi*280+26814)*1+lsi)*1]), &(inteval->stack[((hsi*280+30960)*1+lsi)*1]),1);
HRRPart0bra0ket0h011h(inteval, &(inteval->stack[((hsi*441+9598)*1+lsi)*1]), &(inteval->stack[((hsi*420+34686)*1+lsi)*1]), &(inteval->stack[((hsi*315+33626)*1+lsi)*1]), &(inteval->stack[((hsi*315+27094)*1+lsi)*1]), &(inteval->stack[((hsi*315+31240)*1+lsi)*1]),1);
HRRPart0bra0ket0i020p(inteval, &(inteval->stack[((hsi*84+2997)*1+lsi)*1]), &(inteval->stack[((hsi*36+2912)*1+lsi)*1]), &(inteval->stack[((hsi*28+2948)*1+lsi)*1]), &(inteval->stack[((hsi*28+932)*1+lsi)*1]),1);
HRRPart0bra0ket0k020p(inteval, &(inteval->stack[((hsi*108+3081)*1+lsi)*1]), &(inteval->stack[((hsi*45+2867)*1+lsi)*1]), &(inteval->stack[((hsi*36+2912)*1+lsi)*1]), &(inteval->stack[((hsi*36+868)*1+lsi)*1]),1);
HRRPart0bra0ket0i020d(inteval, &(inteval->stack[((hsi*168+3189)*1+lsi)*1]), &(inteval->stack[((hsi*108+3081)*1+lsi)*1]), &(inteval->stack[((hsi*84+2997)*1+lsi)*1]), &(inteval->stack[((hsi*84+4001)*1+lsi)*1]),1);
HRRPart0bra0ket0l020p(inteval, &(inteval->stack[((hsi*135+33941)*1+lsi)*1]), &(inteval->stack[((hsi*55+2812)*1+lsi)*1]), &(inteval->stack[((hsi*45+2867)*1+lsi)*1]), &(inteval->stack[((hsi*45+787)*1+lsi)*1]),1);
HRRPart0bra0ket0k020d(inteval, &(inteval->stack[((hsi*216+32891)*1+lsi)*1]), &(inteval->stack[((hsi*135+33941)*1+lsi)*1]), &(inteval->stack[((hsi*108+3081)*1+lsi)*1]), &(inteval->stack[((hsi*108+4085)*1+lsi)*1]),1);
HRRPart0bra0ket0i020f(inteval, &(inteval->stack[((hsi*280+31975)*1+lsi)*1]), &(inteval->stack[((hsi*216+32891)*1+lsi)*1]), &(inteval->stack[((hsi*168+3189)*1+lsi)*1]), &(inteval->stack[((hsi*168+4193)*1+lsi)*1]),1);
HRRPart0bra0ket0h020p(inteval, &(inteval->stack[((hsi*63+3357)*1+lsi)*1]), &(inteval->stack[((hsi*28+2948)*1+lsi)*1]), &(inteval->stack[((hsi*21+2976)*1+lsi)*1]), &(inteval->stack[((hsi*21+981)*1+lsi)*1]),1);
HRRPart0bra0ket0h020d(inteval, &(inteval->stack[((hsi*126+29858)*1+lsi)*1]), &(inteval->stack[((hsi*84+2997)*1+lsi)*1]), &(inteval->stack[((hsi*63+3357)*1+lsi)*1]), &(inteval->stack[((hsi*63+29795)*1+lsi)*1]),1);
HRRPart0bra0ket0h020f(inteval, &(inteval->stack[((hsi*210+2867)*1+lsi)*1]), &(inteval->stack[((hsi*168+3189)*1+lsi)*1]), &(inteval->stack[((hsi*126+29858)*1+lsi)*1]), &(inteval->stack[((hsi*126+28745)*1+lsi)*1]),1);
HRRPart0bra0ket0h020g(inteval, &(inteval->stack[((hsi*315+3077)*1+lsi)*1]), &(inteval->stack[((hsi*280+31975)*1+lsi)*1]), &(inteval->stack[((hsi*210+2867)*1+lsi)*1]), &(inteval->stack[((hsi*210+27829)*1+lsi)*1]),1);
HRRPart0bra0ket0m020p(inteval, &(inteval->stack[((hsi*165+29858)*1+lsi)*1]), &(inteval->stack[((hsi*66+2746)*1+lsi)*1]), &(inteval->stack[((hsi*55+2812)*1+lsi)*1]), &(inteval->stack[((hsi*55+687)*1+lsi)*1]),1);
HRRPart0bra0ket0l020d(inteval, &(inteval->stack[((hsi*270+2746)*1+lsi)*1]), &(inteval->stack[((hsi*165+29858)*1+lsi)*1]), &(inteval->stack[((hsi*135+33941)*1+lsi)*1]), &(inteval->stack[((hsi*135+24195)*1+lsi)*1]),1);
HRRPart0bra0ket0k020f(inteval, &(inteval->stack[((hsi*360+35106)*1+lsi)*1]), &(inteval->stack[((hsi*270+2746)*1+lsi)*1]), &(inteval->stack[((hsi*216+32891)*1+lsi)*1]), &(inteval->stack[((hsi*216+4361)*1+lsi)*1]),1);
HRRPart0bra0ket0i020g(inteval, &(inteval->stack[((hsi*420+35466)*1+lsi)*1]), &(inteval->stack[((hsi*360+35106)*1+lsi)*1]), &(inteval->stack[((hsi*280+31975)*1+lsi)*1]), &(inteval->stack[((hsi*280+30960)*1+lsi)*1]),1);
HRRPart0bra0ket0h020h(inteval, &(inteval->stack[((hsi*441+9157)*1+lsi)*1]), &(inteval->stack[((hsi*420+35466)*1+lsi)*1]), &(inteval->stack[((hsi*315+3077)*1+lsi)*1]), &(inteval->stack[((hsi*315+31240)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+35106)*1+lsi)*1]), &(inteval->stack[((hsi*36+347)*1+lsi)*1]), &(inteval->stack[((hsi*28+447)*1+lsi)*1]), &(inteval->stack[((hsi*28+475)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p(inteval, &(inteval->stack[((hsi*108+2746)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]), &(inteval->stack[((hsi*36+347)*1+lsi)*1]), &(inteval->stack[((hsi*36+383)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d(inteval, &(inteval->stack[((hsi*168+33941)*1+lsi)*1]), &(inteval->stack[((hsi*108+2746)*1+lsi)*1]), &(inteval->stack[((hsi*84+35106)*1+lsi)*1]), &(inteval->stack[((hsi*84+15772)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+32891)*1+lsi)*1]), &(inteval->stack[((hsi*28+447)*1+lsi)*1]), &(inteval->stack[((hsi*21+524)*1+lsi)*1]), &(inteval->stack[((hsi*21+545)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d(inteval, &(inteval->stack[((hsi*126+31975)*1+lsi)*1]), &(inteval->stack[((hsi*84+35106)*1+lsi)*1]), &(inteval->stack[((hsi*63+32891)*1+lsi)*1]), &(inteval->stack[((hsi*63+16216)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f(inteval, &(inteval->stack[((hsi*210+35190)*1+lsi)*1]), &(inteval->stack[((hsi*168+33941)*1+lsi)*1]), &(inteval->stack[((hsi*126+31975)*1+lsi)*1]), &(inteval->stack[((hsi*126+16279)*1+lsi)*1]),1);
HRRPart0bra0ket0l100p(inteval, &(inteval->stack[((hsi*135+29858)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]), &(inteval->stack[((hsi*45+266)*1+lsi)*1]),1);
HRRPart0bra0ket0k100d(inteval, &(inteval->stack[((hsi*216+32954)*1+lsi)*1]), &(inteval->stack[((hsi*135+29858)*1+lsi)*1]), &(inteval->stack[((hsi*108+2746)*1+lsi)*1]), &(inteval->stack[((hsi*108+16804)*1+lsi)*1]),1);
HRRPart0bra0ket0i100f(inteval, &(inteval->stack[((hsi*280+35886)*1+lsi)*1]), &(inteval->stack[((hsi*216+32954)*1+lsi)*1]), &(inteval->stack[((hsi*168+33941)*1+lsi)*1]), &(inteval->stack[((hsi*168+16912)*1+lsi)*1]),1);
HRRPart0bra0ket0h100g(inteval, &(inteval->stack[((hsi*315+36166)*1+lsi)*1]), &(inteval->stack[((hsi*280+35886)*1+lsi)*1]), &(inteval->stack[((hsi*210+35190)*1+lsi)*1]), &(inteval->stack[((hsi*210+17711)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p001(inteval, &(inteval->stack[((hsi*84+15772)*1+lsi)*1]), &(inteval->stack[((hsi*36+2576)*1+lsi)*1]), &(inteval->stack[((hsi*28+2648)*1+lsi)*1]), &(inteval->stack[((hsi*28+2676)*1+lsi)*1]), &(inteval->stack[((hsi*28+447)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p001(inteval, &(inteval->stack[((hsi*108+16804)*1+lsi)*1]), &(inteval->stack[((hsi*45+2486)*1+lsi)*1]), &(inteval->stack[((hsi*36+2576)*1+lsi)*1]), &(inteval->stack[((hsi*36+2612)*1+lsi)*1]), &(inteval->stack[((hsi*36+347)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d001(inteval, &(inteval->stack[((hsi*168+16912)*1+lsi)*1]), &(inteval->stack[((hsi*108+16804)*1+lsi)*1]), &(inteval->stack[((hsi*84+15772)*1+lsi)*1]), &(inteval->stack[((hsi*84+15856)*1+lsi)*1]), &(inteval->stack[((hsi*84+35106)*1+lsi)*1]),1);
HRRPart0bra0ket0l100p001(inteval, &(inteval->stack[((hsi*135+3392)*1+lsi)*1]), &(inteval->stack[((hsi*55+2376)*1+lsi)*1]), &(inteval->stack[((hsi*45+2486)*1+lsi)*1]), &(inteval->stack[((hsi*45+2531)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k100d001(inteval, &(inteval->stack[((hsi*216+2854)*1+lsi)*1]), &(inteval->stack[((hsi*135+3392)*1+lsi)*1]), &(inteval->stack[((hsi*108+16804)*1+lsi)*1]), &(inteval->stack[((hsi*108+15940)*1+lsi)*1]), &(inteval->stack[((hsi*108+2746)*1+lsi)*1]),1);
HRRPart0bra0ket0i100f001(inteval, &(inteval->stack[((hsi*280+36481)*1+lsi)*1]), &(inteval->stack[((hsi*216+2854)*1+lsi)*1]), &(inteval->stack[((hsi*168+16912)*1+lsi)*1]), &(inteval->stack[((hsi*168+16048)*1+lsi)*1]), &(inteval->stack[((hsi*168+33941)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p001(inteval, &(inteval->stack[((hsi*63+15856)*1+lsi)*1]), &(inteval->stack[((hsi*28+2648)*1+lsi)*1]), &(inteval->stack[((hsi*21+2704)*1+lsi)*1]), &(inteval->stack[((hsi*21+2725)*1+lsi)*1]), &(inteval->stack[((hsi*21+524)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d001(inteval, &(inteval->stack[((hsi*126+15919)*1+lsi)*1]), &(inteval->stack[((hsi*84+15772)*1+lsi)*1]), &(inteval->stack[((hsi*63+15856)*1+lsi)*1]), &(inteval->stack[((hsi*63+16405)*1+lsi)*1]), &(inteval->stack[((hsi*63+32891)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f001(inteval, &(inteval->stack[((hsi*210+17711)*1+lsi)*1]), &(inteval->stack[((hsi*168+16912)*1+lsi)*1]), &(inteval->stack[((hsi*126+15919)*1+lsi)*1]), &(inteval->stack[((hsi*126+16468)*1+lsi)*1]), &(inteval->stack[((hsi*126+31975)*1+lsi)*1]),1);
HRRPart0bra0ket0h100g001(inteval, &(inteval->stack[((hsi*315+15772)*1+lsi)*1]), &(inteval->stack[((hsi*280+36481)*1+lsi)*1]), &(inteval->stack[((hsi*210+17711)*1+lsi)*1]), &(inteval->stack[((hsi*210+16594)*1+lsi)*1]), &(inteval->stack[((hsi*210+35190)*1+lsi)*1]),1);
HRRPart0bra0ket0m100p001(inteval, &(inteval->stack[((hsi*165+16087)*1+lsi)*1]), &(inteval->stack[((hsi*66+2310)*1+lsi)*1]), &(inteval->stack[((hsi*55+2376)*1+lsi)*1]), &(inteval->stack[((hsi*55+2431)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l100d001(inteval, &(inteval->stack[((hsi*270+16252)*1+lsi)*1]), &(inteval->stack[((hsi*165+16087)*1+lsi)*1]), &(inteval->stack[((hsi*135+3392)*1+lsi)*1]), &(inteval->stack[((hsi*135+17080)*1+lsi)*1]), &(inteval->stack[((hsi*135+29858)*1+lsi)*1]),1);
HRRPart0bra0ket0k100f001(inteval, &(inteval->stack[((hsi*360+16522)*1+lsi)*1]), &(inteval->stack[((hsi*270+16252)*1+lsi)*1]), &(inteval->stack[((hsi*216+2854)*1+lsi)*1]), &(inteval->stack[((hsi*216+17215)*1+lsi)*1]), &(inteval->stack[((hsi*216+32954)*1+lsi)*1]),1);
HRRPart0bra0ket0i100g001(inteval, &(inteval->stack[((hsi*420+16882)*1+lsi)*1]), &(inteval->stack[((hsi*360+16522)*1+lsi)*1]), &(inteval->stack[((hsi*280+36481)*1+lsi)*1]), &(inteval->stack[((hsi*280+17431)*1+lsi)*1]), &(inteval->stack[((hsi*280+35886)*1+lsi)*1]),1);
HRRPart0bra0ket0h100h001(inteval, &(inteval->stack[((hsi*441+8716)*1+lsi)*1]), &(inteval->stack[((hsi*420+16882)*1+lsi)*1]), &(inteval->stack[((hsi*315+15772)*1+lsi)*1]), &(inteval->stack[((hsi*315+17921)*1+lsi)*1]), &(inteval->stack[((hsi*315+36166)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p010(inteval, &(inteval->stack[((hsi*84+16087)*1+lsi)*1]), &(inteval->stack[((hsi*36+2140)*1+lsi)*1]), &(inteval->stack[((hsi*28+2212)*1+lsi)*1]), &(inteval->stack[((hsi*28+2240)*1+lsi)*1]), &(inteval->stack[((hsi*28+447)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p010(inteval, &(inteval->stack[((hsi*108+16171)*1+lsi)*1]), &(inteval->stack[((hsi*45+2050)*1+lsi)*1]), &(inteval->stack[((hsi*36+2140)*1+lsi)*1]), &(inteval->stack[((hsi*36+2176)*1+lsi)*1]), &(inteval->stack[((hsi*36+347)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d010(inteval, &(inteval->stack[((hsi*168+17302)*1+lsi)*1]), &(inteval->stack[((hsi*108+16171)*1+lsi)*1]), &(inteval->stack[((hsi*84+16087)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*84+35106)*1+lsi)*1]),1);
HRRPart0bra0ket0l100p010(inteval, &(inteval->stack[((hsi*135+16279)*1+lsi)*1]), &(inteval->stack[((hsi*55+1940)*1+lsi)*1]), &(inteval->stack[((hsi*45+2050)*1+lsi)*1]), &(inteval->stack[((hsi*45+2095)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k100d010(inteval, &(inteval->stack[((hsi*216+16414)*1+lsi)*1]), &(inteval->stack[((hsi*135+16279)*1+lsi)*1]), &(inteval->stack[((hsi*108+16171)*1+lsi)*1]), &(inteval->stack[((hsi*108+18635)*1+lsi)*1]), &(inteval->stack[((hsi*108+2746)*1+lsi)*1]),1);
HRRPart0bra0ket0i100f010(inteval, &(inteval->stack[((hsi*280+17470)*1+lsi)*1]), &(inteval->stack[((hsi*216+16414)*1+lsi)*1]), &(inteval->stack[((hsi*168+17302)*1+lsi)*1]), &(inteval->stack[((hsi*168+18743)*1+lsi)*1]), &(inteval->stack[((hsi*168+33941)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p010(inteval, &(inteval->stack[((hsi*63+2310)*1+lsi)*1]), &(inteval->stack[((hsi*28+2212)*1+lsi)*1]), &(inteval->stack[((hsi*21+2268)*1+lsi)*1]), &(inteval->stack[((hsi*21+2289)*1+lsi)*1]), &(inteval->stack[((hsi*21+524)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d010(inteval, &(inteval->stack[((hsi*126+2373)*1+lsi)*1]), &(inteval->stack[((hsi*84+16087)*1+lsi)*1]), &(inteval->stack[((hsi*63+2310)*1+lsi)*1]), &(inteval->stack[((hsi*63+18911)*1+lsi)*1]), &(inteval->stack[((hsi*63+32891)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f010(inteval, &(inteval->stack[((hsi*210+18551)*1+lsi)*1]), &(inteval->stack[((hsi*168+17302)*1+lsi)*1]), &(inteval->stack[((hsi*126+2373)*1+lsi)*1]), &(inteval->stack[((hsi*126+18974)*1+lsi)*1]), &(inteval->stack[((hsi*126+31975)*1+lsi)*1]),1);
HRRPart0bra0ket0h100g010(inteval, &(inteval->stack[((hsi*315+2050)*1+lsi)*1]), &(inteval->stack[((hsi*280+17470)*1+lsi)*1]), &(inteval->stack[((hsi*210+18551)*1+lsi)*1]), &(inteval->stack[((hsi*210+6260)*1+lsi)*1]), &(inteval->stack[((hsi*210+35190)*1+lsi)*1]),1);
HRRPart0bra0ket0m100p010(inteval, &(inteval->stack[((hsi*165+18551)*1+lsi)*1]), &(inteval->stack[((hsi*66+1874)*1+lsi)*1]), &(inteval->stack[((hsi*55+1940)*1+lsi)*1]), &(inteval->stack[((hsi*55+1995)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l100d010(inteval, &(inteval->stack[((hsi*270+18716)*1+lsi)*1]), &(inteval->stack[((hsi*165+18551)*1+lsi)*1]), &(inteval->stack[((hsi*135+16279)*1+lsi)*1]), &(inteval->stack[((hsi*135+19647)*1+lsi)*1]), &(inteval->stack[((hsi*135+29858)*1+lsi)*1]),1);
HRRPart0bra0ket0k100f010(inteval, &(inteval->stack[((hsi*360+2365)*1+lsi)*1]), &(inteval->stack[((hsi*270+18716)*1+lsi)*1]), &(inteval->stack[((hsi*216+16414)*1+lsi)*1]), &(inteval->stack[((hsi*216+19782)*1+lsi)*1]), &(inteval->stack[((hsi*216+32954)*1+lsi)*1]),1);
HRRPart0bra0ket0i100g010(inteval, &(inteval->stack[((hsi*420+16087)*1+lsi)*1]), &(inteval->stack[((hsi*360+2365)*1+lsi)*1]), &(inteval->stack[((hsi*280+17470)*1+lsi)*1]), &(inteval->stack[((hsi*280+19998)*1+lsi)*1]), &(inteval->stack[((hsi*280+35886)*1+lsi)*1]),1);
HRRPart0bra0ket0h100h010(inteval, &(inteval->stack[((hsi*441+8275)*1+lsi)*1]), &(inteval->stack[((hsi*420+16087)*1+lsi)*1]), &(inteval->stack[((hsi*315+2050)*1+lsi)*1]), &(inteval->stack[((hsi*315+20278)*1+lsi)*1]), &(inteval->stack[((hsi*315+36166)*1+lsi)*1]),1);
HRRPart0bra0ket0i100p100(inteval, &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*36+1704)*1+lsi)*1]), &(inteval->stack[((hsi*28+1776)*1+lsi)*1]), &(inteval->stack[((hsi*28+1804)*1+lsi)*1]), &(inteval->stack[((hsi*28+447)*1+lsi)*1]),1);
HRRPart0bra0ket0k100p100(inteval, &(inteval->stack[((hsi*108+19647)*1+lsi)*1]), &(inteval->stack[((hsi*45+1614)*1+lsi)*1]), &(inteval->stack[((hsi*36+1704)*1+lsi)*1]), &(inteval->stack[((hsi*36+1740)*1+lsi)*1]), &(inteval->stack[((hsi*36+347)*1+lsi)*1]),1);
HRRPart0bra0ket0i100d100(inteval, &(inteval->stack[((hsi*168+17302)*1+lsi)*1]), &(inteval->stack[((hsi*108+19647)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*84+20908)*1+lsi)*1]), &(inteval->stack[((hsi*84+35106)*1+lsi)*1]),1);
HRRPart0bra0ket0l100p100(inteval, &(inteval->stack[((hsi*135+18635)*1+lsi)*1]), &(inteval->stack[((hsi*55+1504)*1+lsi)*1]), &(inteval->stack[((hsi*45+1614)*1+lsi)*1]), &(inteval->stack[((hsi*45+1659)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k100d100(inteval, &(inteval->stack[((hsi*216+19755)*1+lsi)*1]), &(inteval->stack[((hsi*135+18635)*1+lsi)*1]), &(inteval->stack[((hsi*108+19647)*1+lsi)*1]), &(inteval->stack[((hsi*108+20992)*1+lsi)*1]), &(inteval->stack[((hsi*108+2746)*1+lsi)*1]),1);
HRRPart0bra0ket0i100f100(inteval, &(inteval->stack[((hsi*280+18770)*1+lsi)*1]), &(inteval->stack[((hsi*216+19755)*1+lsi)*1]), &(inteval->stack[((hsi*168+17302)*1+lsi)*1]), &(inteval->stack[((hsi*168+21100)*1+lsi)*1]), &(inteval->stack[((hsi*168+33941)*1+lsi)*1]),1);
HRRPart0bra0ket0h100p100(inteval, &(inteval->stack[((hsi*63+17470)*1+lsi)*1]), &(inteval->stack[((hsi*28+1776)*1+lsi)*1]), &(inteval->stack[((hsi*21+1832)*1+lsi)*1]), &(inteval->stack[((hsi*21+1853)*1+lsi)*1]), &(inteval->stack[((hsi*21+524)*1+lsi)*1]),1);
HRRPart0bra0ket0h100d100(inteval, &(inteval->stack[((hsi*126+1614)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*63+17470)*1+lsi)*1]), &(inteval->stack[((hsi*63+5758)*1+lsi)*1]), &(inteval->stack[((hsi*63+32891)*1+lsi)*1]),1);
HRRPart0bra0ket0h100f100(inteval, &(inteval->stack[((hsi*210+17470)*1+lsi)*1]), &(inteval->stack[((hsi*168+17302)*1+lsi)*1]), &(inteval->stack[((hsi*126+1614)*1+lsi)*1]), &(inteval->stack[((hsi*126+21268)*1+lsi)*1]), &(inteval->stack[((hsi*126+31975)*1+lsi)*1]),1);
HRRPart0bra0ket0h100g100(inteval, &(inteval->stack[((hsi*315+20908)*1+lsi)*1]), &(inteval->stack[((hsi*280+18770)*1+lsi)*1]), &(inteval->stack[((hsi*210+17470)*1+lsi)*1]), &(inteval->stack[((hsi*210+5821)*1+lsi)*1]), &(inteval->stack[((hsi*210+35190)*1+lsi)*1]),1);
HRRPart0bra0ket0m100p100(inteval, &(inteval->stack[((hsi*165+17302)*1+lsi)*1]), &(inteval->stack[((hsi*66+1438)*1+lsi)*1]), &(inteval->stack[((hsi*55+1504)*1+lsi)*1]), &(inteval->stack[((hsi*55+1559)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l100d100(inteval, &(inteval->stack[((hsi*270+1438)*1+lsi)*1]), &(inteval->stack[((hsi*165+17302)*1+lsi)*1]), &(inteval->stack[((hsi*135+18635)*1+lsi)*1]), &(inteval->stack[((hsi*135+21394)*1+lsi)*1]), &(inteval->stack[((hsi*135+29858)*1+lsi)*1]),1);
HRRPart0bra0ket0k100f100(inteval, &(inteval->stack[((hsi*360+17302)*1+lsi)*1]), &(inteval->stack[((hsi*270+1438)*1+lsi)*1]), &(inteval->stack[((hsi*216+19755)*1+lsi)*1]), &(inteval->stack[((hsi*216+6031)*1+lsi)*1]), &(inteval->stack[((hsi*216+32954)*1+lsi)*1]),1);
HRRPart0bra0ket0i100g100(inteval, &(inteval->stack[((hsi*420+5651)*1+lsi)*1]), &(inteval->stack[((hsi*360+17302)*1+lsi)*1]), &(inteval->stack[((hsi*280+18770)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*280+35886)*1+lsi)*1]),1);
HRRPart0bra0ket0h100h100(inteval, &(inteval->stack[((hsi*441+7834)*1+lsi)*1]), &(inteval->stack[((hsi*420+5651)*1+lsi)*1]), &(inteval->stack[((hsi*315+20908)*1+lsi)*1]), &(inteval->stack[((hsi*315+23145)*1+lsi)*1]), &(inteval->stack[((hsi*315+36166)*1+lsi)*1]),1);
HRRPart0bra0ket0i101p(inteval, &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*36+1268)*1+lsi)*1]), &(inteval->stack[((hsi*28+1340)*1+lsi)*1]), &(inteval->stack[((hsi*28+1368)*1+lsi)*1]), &(inteval->stack[((hsi*28+447)*1+lsi)*1]),1);
HRRPart0bra0ket0k101p(inteval, &(inteval->stack[((hsi*108+19647)*1+lsi)*1]), &(inteval->stack[((hsi*45+1178)*1+lsi)*1]), &(inteval->stack[((hsi*36+1268)*1+lsi)*1]), &(inteval->stack[((hsi*36+1304)*1+lsi)*1]), &(inteval->stack[((hsi*36+347)*1+lsi)*1]),1);
HRRPart0bra0ket0i101d(inteval, &(inteval->stack[((hsi*168+17302)*1+lsi)*1]), &(inteval->stack[((hsi*108+19647)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*84+25484)*1+lsi)*1]), &(inteval->stack[((hsi*84+35106)*1+lsi)*1]),1);
HRRPart0bra0ket0l101p(inteval, &(inteval->stack[((hsi*135+1438)*1+lsi)*1]), &(inteval->stack[((hsi*55+1068)*1+lsi)*1]), &(inteval->stack[((hsi*45+1178)*1+lsi)*1]), &(inteval->stack[((hsi*45+1223)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k101d(inteval, &(inteval->stack[((hsi*216+18635)*1+lsi)*1]), &(inteval->stack[((hsi*135+1438)*1+lsi)*1]), &(inteval->stack[((hsi*108+19647)*1+lsi)*1]), &(inteval->stack[((hsi*108+25568)*1+lsi)*1]), &(inteval->stack[((hsi*108+2746)*1+lsi)*1]),1);
HRRPart0bra0ket0i101f(inteval, &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*216+18635)*1+lsi)*1]), &(inteval->stack[((hsi*168+17302)*1+lsi)*1]), &(inteval->stack[((hsi*168+25676)*1+lsi)*1]), &(inteval->stack[((hsi*168+33941)*1+lsi)*1]),1);
HRRPart0bra0ket0h101p(inteval, &(inteval->stack[((hsi*63+19647)*1+lsi)*1]), &(inteval->stack[((hsi*28+1340)*1+lsi)*1]), &(inteval->stack[((hsi*21+1396)*1+lsi)*1]), &(inteval->stack[((hsi*21+1417)*1+lsi)*1]), &(inteval->stack[((hsi*21+524)*1+lsi)*1]),1);
HRRPart0bra0ket0h101d(inteval, &(inteval->stack[((hsi*126+19710)*1+lsi)*1]), &(inteval->stack[((hsi*84+18551)*1+lsi)*1]), &(inteval->stack[((hsi*63+19647)*1+lsi)*1]), &(inteval->stack[((hsi*63+25844)*1+lsi)*1]), &(inteval->stack[((hsi*63+32891)*1+lsi)*1]),1);
HRRPart0bra0ket0h101f(inteval, &(inteval->stack[((hsi*210+21223)*1+lsi)*1]), &(inteval->stack[((hsi*168+17302)*1+lsi)*1]), &(inteval->stack[((hsi*126+19710)*1+lsi)*1]), &(inteval->stack[((hsi*126+25907)*1+lsi)*1]), &(inteval->stack[((hsi*126+31975)*1+lsi)*1]),1);
HRRPart0bra0ket0h101g(inteval, &(inteval->stack[((hsi*315+19647)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*210+21223)*1+lsi)*1]), &(inteval->stack[((hsi*210+26033)*1+lsi)*1]), &(inteval->stack[((hsi*210+35190)*1+lsi)*1]),1);
HRRPart0bra0ket0m101p(inteval, &(inteval->stack[((hsi*165+25484)*1+lsi)*1]), &(inteval->stack[((hsi*66+1002)*1+lsi)*1]), &(inteval->stack[((hsi*55+1068)*1+lsi)*1]), &(inteval->stack[((hsi*55+1123)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l101d(inteval, &(inteval->stack[((hsi*270+25649)*1+lsi)*1]), &(inteval->stack[((hsi*165+25484)*1+lsi)*1]), &(inteval->stack[((hsi*135+1438)*1+lsi)*1]), &(inteval->stack[((hsi*135+5005)*1+lsi)*1]), &(inteval->stack[((hsi*135+29858)*1+lsi)*1]),1);
HRRPart0bra0ket0k101f(inteval, &(inteval->stack[((hsi*360+1002)*1+lsi)*1]), &(inteval->stack[((hsi*270+25649)*1+lsi)*1]), &(inteval->stack[((hsi*216+18635)*1+lsi)*1]), &(inteval->stack[((hsi*216+24784)*1+lsi)*1]), &(inteval->stack[((hsi*216+32954)*1+lsi)*1]),1);
HRRPart0bra0ket0i101g(inteval, &(inteval->stack[((hsi*420+25484)*1+lsi)*1]), &(inteval->stack[((hsi*360+1002)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*280+26814)*1+lsi)*1]), &(inteval->stack[((hsi*280+35886)*1+lsi)*1]),1);
HRRPart0bra0ket0h101h(inteval, &(inteval->stack[((hsi*441+7393)*1+lsi)*1]), &(inteval->stack[((hsi*420+25484)*1+lsi)*1]), &(inteval->stack[((hsi*315+19647)*1+lsi)*1]), &(inteval->stack[((hsi*315+27094)*1+lsi)*1]), &(inteval->stack[((hsi*315+36166)*1+lsi)*1]),1);
HRRPart0bra0ket0i110p(inteval, &(inteval->stack[((hsi*84+1002)*1+lsi)*1]), &(inteval->stack[((hsi*36+832)*1+lsi)*1]), &(inteval->stack[((hsi*28+904)*1+lsi)*1]), &(inteval->stack[((hsi*28+932)*1+lsi)*1]), &(inteval->stack[((hsi*28+447)*1+lsi)*1]),1);
HRRPart0bra0ket0k110p(inteval, &(inteval->stack[((hsi*108+1086)*1+lsi)*1]), &(inteval->stack[((hsi*45+742)*1+lsi)*1]), &(inteval->stack[((hsi*36+832)*1+lsi)*1]), &(inteval->stack[((hsi*36+868)*1+lsi)*1]), &(inteval->stack[((hsi*36+347)*1+lsi)*1]),1);
HRRPart0bra0ket0i110d(inteval, &(inteval->stack[((hsi*168+1194)*1+lsi)*1]), &(inteval->stack[((hsi*108+1086)*1+lsi)*1]), &(inteval->stack[((hsi*84+1002)*1+lsi)*1]), &(inteval->stack[((hsi*84+4001)*1+lsi)*1]), &(inteval->stack[((hsi*84+35106)*1+lsi)*1]),1);
HRRPart0bra0ket0l110p(inteval, &(inteval->stack[((hsi*135+1362)*1+lsi)*1]), &(inteval->stack[((hsi*55+632)*1+lsi)*1]), &(inteval->stack[((hsi*45+742)*1+lsi)*1]), &(inteval->stack[((hsi*45+787)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k110d(inteval, &(inteval->stack[((hsi*216+18551)*1+lsi)*1]), &(inteval->stack[((hsi*135+1362)*1+lsi)*1]), &(inteval->stack[((hsi*108+1086)*1+lsi)*1]), &(inteval->stack[((hsi*108+4085)*1+lsi)*1]), &(inteval->stack[((hsi*108+2746)*1+lsi)*1]),1);
HRRPart0bra0ket0i110f(inteval, &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*216+18551)*1+lsi)*1]), &(inteval->stack[((hsi*168+1194)*1+lsi)*1]), &(inteval->stack[((hsi*168+4193)*1+lsi)*1]), &(inteval->stack[((hsi*168+33941)*1+lsi)*1]),1);
HRRPart0bra0ket0h110p(inteval, &(inteval->stack[((hsi*63+17302)*1+lsi)*1]), &(inteval->stack[((hsi*28+904)*1+lsi)*1]), &(inteval->stack[((hsi*21+960)*1+lsi)*1]), &(inteval->stack[((hsi*21+981)*1+lsi)*1]), &(inteval->stack[((hsi*21+524)*1+lsi)*1]),1);
HRRPart0bra0ket0h110d(inteval, &(inteval->stack[((hsi*126+17365)*1+lsi)*1]), &(inteval->stack[((hsi*84+1002)*1+lsi)*1]), &(inteval->stack[((hsi*63+17302)*1+lsi)*1]), &(inteval->stack[((hsi*63+29795)*1+lsi)*1]), &(inteval->stack[((hsi*63+32891)*1+lsi)*1]),1);
HRRPart0bra0ket0h110f(inteval, &(inteval->stack[((hsi*210+1497)*1+lsi)*1]), &(inteval->stack[((hsi*168+1194)*1+lsi)*1]), &(inteval->stack[((hsi*126+17365)*1+lsi)*1]), &(inteval->stack[((hsi*126+28745)*1+lsi)*1]), &(inteval->stack[((hsi*126+31975)*1+lsi)*1]),1);
HRRPart0bra0ket0h110g(inteval, &(inteval->stack[((hsi*315+28745)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*210+1497)*1+lsi)*1]), &(inteval->stack[((hsi*210+27829)*1+lsi)*1]), &(inteval->stack[((hsi*210+35190)*1+lsi)*1]),1);
HRRPart0bra0ket0m110p(inteval, &(inteval->stack[((hsi*165+742)*1+lsi)*1]), &(inteval->stack[((hsi*66+566)*1+lsi)*1]), &(inteval->stack[((hsi*55+632)*1+lsi)*1]), &(inteval->stack[((hsi*55+687)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l110d(inteval, &(inteval->stack[((hsi*270+17302)*1+lsi)*1]), &(inteval->stack[((hsi*165+742)*1+lsi)*1]), &(inteval->stack[((hsi*135+1362)*1+lsi)*1]), &(inteval->stack[((hsi*135+24195)*1+lsi)*1]), &(inteval->stack[((hsi*135+29858)*1+lsi)*1]),1);
HRRPart0bra0ket0k110f(inteval, &(inteval->stack[((hsi*360+545)*1+lsi)*1]), &(inteval->stack[((hsi*270+17302)*1+lsi)*1]), &(inteval->stack[((hsi*216+18551)*1+lsi)*1]), &(inteval->stack[((hsi*216+4361)*1+lsi)*1]), &(inteval->stack[((hsi*216+32954)*1+lsi)*1]),1);
HRRPart0bra0ket0i110g(inteval, &(inteval->stack[((hsi*420+905)*1+lsi)*1]), &(inteval->stack[((hsi*360+545)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*280+30960)*1+lsi)*1]), &(inteval->stack[((hsi*280+35886)*1+lsi)*1]),1);
HRRPart0bra0ket0h110h(inteval, &(inteval->stack[((hsi*441+6952)*1+lsi)*1]), &(inteval->stack[((hsi*420+905)*1+lsi)*1]), &(inteval->stack[((hsi*315+28745)*1+lsi)*1]), &(inteval->stack[((hsi*315+31240)*1+lsi)*1]), &(inteval->stack[((hsi*315+36166)*1+lsi)*1]),1);
HRRPart0bra0ket0i200p(inteval, &(inteval->stack[((hsi*84+1325)*1+lsi)*1]), &(inteval->stack[((hsi*36+311)*1+lsi)*1]), &(inteval->stack[((hsi*28+419)*1+lsi)*1]), &(inteval->stack[((hsi*28+447)*1+lsi)*1]),1);
HRRPart0bra0ket0k200p(inteval, &(inteval->stack[((hsi*108+3935)*1+lsi)*1]), &(inteval->stack[((hsi*45+176)*1+lsi)*1]), &(inteval->stack[((hsi*36+311)*1+lsi)*1]), &(inteval->stack[((hsi*36+347)*1+lsi)*1]),1);
HRRPart0bra0ket0i200d(inteval, &(inteval->stack[((hsi*168+18551)*1+lsi)*1]), &(inteval->stack[((hsi*108+3935)*1+lsi)*1]), &(inteval->stack[((hsi*84+1325)*1+lsi)*1]), &(inteval->stack[((hsi*84+35106)*1+lsi)*1]),1);
HRRPart0bra0ket0l200p(inteval, &(inteval->stack[((hsi*135+1409)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*45+176)*1+lsi)*1]), &(inteval->stack[((hsi*45+221)*1+lsi)*1]),1);
HRRPart0bra0ket0k200d(inteval, &(inteval->stack[((hsi*216+17302)*1+lsi)*1]), &(inteval->stack[((hsi*135+1409)*1+lsi)*1]), &(inteval->stack[((hsi*108+3935)*1+lsi)*1]), &(inteval->stack[((hsi*108+2746)*1+lsi)*1]),1);
HRRPart0bra0ket0i200f(inteval, &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*216+17302)*1+lsi)*1]), &(inteval->stack[((hsi*168+18551)*1+lsi)*1]), &(inteval->stack[((hsi*168+33941)*1+lsi)*1]),1);
HRRPart0bra0ket0h200p(inteval, &(inteval->stack[((hsi*63+29795)*1+lsi)*1]), &(inteval->stack[((hsi*28+419)*1+lsi)*1]), &(inteval->stack[((hsi*21+503)*1+lsi)*1]), &(inteval->stack[((hsi*21+524)*1+lsi)*1]),1);
HRRPart0bra0ket0h200d(inteval, &(inteval->stack[((hsi*126+176)*1+lsi)*1]), &(inteval->stack[((hsi*84+1325)*1+lsi)*1]), &(inteval->stack[((hsi*63+29795)*1+lsi)*1]), &(inteval->stack[((hsi*63+32891)*1+lsi)*1]),1);
HRRPart0bra0ket0h200f(inteval, &(inteval->stack[((hsi*210+2365)*1+lsi)*1]), &(inteval->stack[((hsi*168+18551)*1+lsi)*1]), &(inteval->stack[((hsi*126+176)*1+lsi)*1]), &(inteval->stack[((hsi*126+31975)*1+lsi)*1]),1);
HRRPart0bra0ket0h200g(inteval, &(inteval->stack[((hsi*315+176)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*210+2365)*1+lsi)*1]), &(inteval->stack[((hsi*210+35190)*1+lsi)*1]),1);
HRRPart0bra0ket0m200p(inteval, &(inteval->stack[((hsi*165+2365)*1+lsi)*1]), &(inteval->stack[((hsi*66+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*55+121)*1+lsi)*1]),1);
HRRPart0bra0ket0l200d(inteval, &(inteval->stack[((hsi*270+3935)*1+lsi)*1]), &(inteval->stack[((hsi*165+2365)*1+lsi)*1]), &(inteval->stack[((hsi*135+1409)*1+lsi)*1]), &(inteval->stack[((hsi*135+29858)*1+lsi)*1]),1);
HRRPart0bra0ket0k200f(inteval, &(inteval->stack[((hsi*360+35106)*1+lsi)*1]), &(inteval->stack[((hsi*270+3935)*1+lsi)*1]), &(inteval->stack[((hsi*216+17302)*1+lsi)*1]), &(inteval->stack[((hsi*216+32954)*1+lsi)*1]),1);
HRRPart0bra0ket0i200g(inteval, &(inteval->stack[((hsi*420+1325)*1+lsi)*1]), &(inteval->stack[((hsi*360+35106)*1+lsi)*1]), &(inteval->stack[((hsi*280+22865)*1+lsi)*1]), &(inteval->stack[((hsi*280+35886)*1+lsi)*1]),1);
HRRPart0bra0ket0h200h(inteval, &(inteval->stack[((hsi*441+6511)*1+lsi)*1]), &(inteval->stack[((hsi*420+1325)*1+lsi)*1]), &(inteval->stack[((hsi*315+176)*1+lsi)*1]), &(inteval->stack[((hsi*315+36166)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*441+6511)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*441+6952)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*441+7393)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*441+7834)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*441+8275)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*441+8716)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*441+9157)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*441+9598)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*441+10039)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*441+10480)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*441+10921)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*441+11362)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*441+11803)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*441+12244)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*441+12685)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*441+13126)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*441+13567)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*441+14008)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*441+14449)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*441+14890)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*441+15331)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
