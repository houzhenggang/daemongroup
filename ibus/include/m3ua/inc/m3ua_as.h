/****************************************************************************
** Description:
*****************************************************************************
** Copyright(C) 2009 Shabd Communications Pvt. Ltd. http://www.shabdcom.org
*****************************************************************************
** Contact:
** vkgupta@shabdcom.org
*****************************************************************************
** License :
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** You should have received a copy of the GNU Lesser General Public
** License along with this library; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*****************************************************************************/

#ifndef __M3UA_AS_H__
#define __M3UA_AS_H__

#include <m3ua_defines.h>
#include <m3ua_types.h>
#include <m3ua_api.h>
#include <m3ua_config.h>
#include <m3ua_errno.h>
#include <m3ua_extern.h>
#include <m3ua_nwapp.h>
#include <m3uaTraceMgr.h>

m3_s32 m3uaAddAS(m3_as_inf_t *, m3ua_as_t *);
m3_s32 m3uaDeleteAS(m3_as_inf_t *, m3ua_as_t *);
m3_s32 m3uaGetASConf(m3_as_inf_t *, m3ua_as_t *);
m3_s32 m3uaModifyASConf(m3_as_inf_t *, m3ua_as_t *);
m3_u32 m3uaGetASFromRC(m3_conn_inf_t *, m3_u32);
m3_u32 m3uaGetRCFromAS(m3_conn_inf_t *, m3_u32);
m3_bool_t m3uaLRCUnique(m3_conn_inf_t *, m3_u32);

#endif

