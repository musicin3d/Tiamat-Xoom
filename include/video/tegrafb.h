/*
 * include/video/tegrafb.h
 *
 * Copyright (C) 2010 Google, Inc.
 * Author: Erik Gilling <konkers@android.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _LINUX_TEGRAFB_H_
#define _LINUX_TEGRAFB_H_

#include <linux/fb.h>
#include <linux/types.h>
#include <linux/ioctl.h>
#define TEGRA_FB_WIN_FLAG_INVERT_H	(1 << 0)
#define TEGRA_FB_WIN_FLAG_INVERT_V	(1 << 1)
#define TEGRA_FB_WIN_FLAG_TILED		(1 << 2)


struct tegra_fb_modedb {
	struct fb_var_screeninfo *modedb;
	__u32 modedb_len;
};

#define FBIO_TEGRA_SET_NVMAP_FD	_IOW('F', 0x40, __u32)
#define FBIO_TEGRA_FLIP		_IOW('F', 0x41, struct tegra_fb_flip_args)
#define FBIO_TEGRA_GET_MODEDB	_IOWR('F', 0x42, struct tegra_fb_modedb)

#endif
