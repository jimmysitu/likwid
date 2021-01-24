/*
 * =======================================================================================
 *
 *      Filename:  perfstat.h
 *
 *      Description:  Header File Performance Status Module.
 *                    Implements Intel Core Performance Status Interface.
 *
 *      Version:   <VERSION>
 *      Released:  <DATE>
 *
 *      Author:   Jimmy Situ web@jimmystone.cn
 *      Project:  likwid
 *
 *      Copyright (C) 2020 Jimmy Situ
 *
 *      This program is free software: you can redistribute it and/or modify it under
 *      the terms of the GNU General Public License as published by the Free Software
 *      Foundation, either version 3 of the License, or (at your option) any later
 *      version.
 *
 *      This program is distributed in the hope that it will be useful, but WITHOUT ANY
 *      WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 *      PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License along with
 *      this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * =======================================================================================
 */
#ifndef PERFSTAT_H
#define PERFSTAT_H

#include <types.h>
#include <registers.h>
#include <bitUtil.h>
#include <error.h>
#include <access.h>

int perfstat_read(int cpuId, uint64_t *data);
int perfstat_tread(int socket_fd, int cpuId, uint64_t *data);
double perfstat_value(uint64_t raw_value);

#endif /*PERFSTAT_H*/
