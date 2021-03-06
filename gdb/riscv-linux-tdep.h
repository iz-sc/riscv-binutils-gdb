/* Target-dependent header for GNU/Linux RISC-V.

   Copyright (C) 2015 Free Software Foundation, Inc.
   Contributed by Albert Ou <aou@eecs.berkeley.edu>.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef RISCV_LINUX_TDEP_H
#define RISCV_LINUX_TDEP_H

#include "regset.h"

#define RISCV_NGREG (32)

extern const struct regset riscv_linux_gregset;

#endif
