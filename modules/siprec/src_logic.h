/*
 * Copyright (C) 2017 OpenSIPS Project
 *
 * This file is part of opensips, a free SIP server.
 *
 * opensips is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * opensips is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 *
 * History:
 * ---------
 *  2017-06-20  created (razvanc)
 */

#ifndef _SIPREC_LOGIC_H_
#define _SIPREC_LOGIC_H_

#include "src_sess.h"
#include "../b2b_entities/b2b_entities.h"

int src_start_recording(struct sip_msg *msg, struct src_sess *sess);

extern struct b2b_api srec_b2b;
extern struct rtpproxy_binds srec_rtp;

#endif /* _SIPREC_LOGIC_H_ */