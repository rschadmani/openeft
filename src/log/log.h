//----------------------------------------------------------------------
// Copyright (C) 2018  openeft.org
// Copyright (C) Reza Schadmani <reza.schadmani@openeft.org>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//----------------------------------------------------------------------

#ifndef _OPENEFT_LOG_H
#define _OPENEFT_LOG_H

#include <stdio.h>
#include <stdlib.h>

#define LOG_EMERG  0
#define LOG_ALERT  1
#define LOG_CRIT   2 
#define LOG_ERR    3
#define LOG_WARNING  4
#define LOG_NOTICE   5
#define LOG_INFO     6
#define LOG_DEBUG    7
#define LOG_DEFAULT  d
#define LOG_CONT     c

extern uint32_t log_run_level;
extern uint32_t log_fp;

/* Keep things simple for sakes */
#define log(level, fmt, ...) \
        do { if (level <= log_run_level) dprintf(log_fp, "%s:%d:%s(): " fmt, __FILE__, \
                                __LINE__, __func__, __VA_ARGS__); } while (0)

#endif