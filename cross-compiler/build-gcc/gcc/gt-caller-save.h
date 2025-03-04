/* Type information for caller-save.cc.
   Copyright (C) 2004-2024 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_caller_save_h[] = {
  {
    &restinsn,
    1,
    sizeof (restinsn),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &saveinsn,
    1,
    sizeof (saveinsn),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &test_mem,
    1,
    sizeof (test_mem),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &test_reg,
    1,
    sizeof (test_reg),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &restpat,
    1,
    sizeof (restpat),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &savepat,
    1,
    sizeof (savepat),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  LAST_GGC_ROOT_TAB
};

