/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 */

#ifndef _FAL_CFG_H_
#define _FAL_CFG_H_

#include "fal_macronix_flash_port.h"

#define FAL_PART_HAS_TABLE_CFG
#define MACRONIX_FLASH_DEV_NAME          "macronixflash0"

/* ===================== Flash device Configuration ========================= */
extern const struct fal_flash_dev macronix_flash0;
extern const struct fal_flash_dev ram0;

/* flash device table */
#define FAL_FLASH_DEV_TABLE                                          \
{                                                                    \
    &macronix_flash0,                                                \
    &ram0,                                                           \
}
/* ====================== Partition Configuration ========================== */
#ifdef FAL_PART_HAS_TABLE_CFG
/* partition table */
/* Array of { FAL_PART_MAGIC_WORD, "Name", device, start, length, 0 } */
#define FAL_PART_TABLE                                                           \
{                                                                                \
    {FAL_PART_MAGIC_WORD, "env_kvdb",      MACRONIX_FLASH_DEV_NAME,                          0,                            4*FDB_MACRONIX_BLOCK_SIZE, 0},  \
    {FAL_PART_MAGIC_WORD, "envdata_tsdb",  MACRONIX_FLASH_DEV_NAME,  4*FDB_MACRONIX_BLOCK_SIZE,                            8*FDB_MACRONIX_BLOCK_SIZE, 0},  \
    {FAL_PART_MAGIC_WORD, "accdata_tsdb",  MACRONIX_FLASH_DEV_NAME, 12*FDB_MACRONIX_BLOCK_SIZE, 64*FDB_MACRONIX_BLOCK_SIZE, 0},  \
    {FAL_PART_MAGIC_WORD, "ram0",  "ram0", 0, 6 * 1024, 0},  \
}
#endif /* FAL_PART_HAS_TABLE_CFG */

#endif /* _FAL_CFG_H_ */
