/*
     raw os - Copyright (C)  Lingjun Chen(jorya_txj).

    This file is part of raw os.

    raw os is free software; you can redistribute it it under the terms of the 
    GNU General Public License as published by the Free Software Foundation; 
    either version 3 of the License, or  (at your option) any later version.

    raw os is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
    without even the implied warranty of  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
    See the GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program. if not, write email to jorya.txj@gmail.com
                                      ---

    A special exception to the LGPL can be applied should you wish to distribute
    a combined work that includes raw os, without being obliged to provide
    the source code for any proprietary components. See the file exception.txt
    for full details of how and when the exception can be applied.
*/


/* 	2012-4  Created by jorya_txj
  *	xxxxxx   please added here
  */

#ifndef RAW_INTERNAL_H

/*public global event*/
extern STATE_EVENT                  STM_GLOBAL_EVENT[4];

extern ACTIVE_EVENT_STRUCT_CB       active_idle_task[];

extern const RAW_U8 A_ATTR B_ATTR   raw_idle_map_table[256];

extern RAW_U8                       raw_idle_rdy_grp;                     
extern RAW_U8                       raw_rdy_tbl[8];
extern LIST                         raw_idle_tick_head;

#endif

