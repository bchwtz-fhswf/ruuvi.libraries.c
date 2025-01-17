/*
 * @file fal_macronix_flash_port.c
 * @author Jenny Kuhn & Jendrik Kraft, original: Thomas Hoof <thomas.hoof@gmx.de>
 * @date 2021-08-31
 * @copyright Ruuvi Innovations Ltd, License BSD-3-Clause.
 */

#ifndef  FAL_MACRONIX_FLASH_PORT_H
#define  FAL_MACRONIX_FLASH_PORT_H

#define FDB_MACRONIX_BLOCK_SIZE (4096)//Sector size
#define FDB_MACRONIX_BLOCK_COUNT (2047) //Sector count
#define MACRONIX_PAGE_MASK (0xFFFF00)
#define MACRONIX_END_ADRESS_MASK (0x0000FF)

#endif
