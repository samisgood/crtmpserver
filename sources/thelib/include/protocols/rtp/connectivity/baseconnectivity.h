/*
 *  Copyright (c) 2010,
 *  Gavriloaie Eugen-Andrei (shiretu@gmail.com)
 *
 *  This file is part of crtmpserver.
 *  crtmpserver is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  crtmpserver is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with crtmpserver.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef HAS_PROTOCOL_RTP
#ifndef _BASECONNECTIVITY_H
#define	_BASECONNECTIVITY_H

#include "common.h"

class DLLEXP BaseConnectivity {
public:
	BaseConnectivity();
	virtual ~BaseConnectivity();

	static uint32_t ToRTPTS(struct timeval &tv, uint32_t rate);
	static uint32_t ToRTPTS(double milliseconds, uint32_t rate);
};


#endif	/* _BASECONNECTIVITY_H */
#endif /* HAS_PROTOCOL_RTP */

