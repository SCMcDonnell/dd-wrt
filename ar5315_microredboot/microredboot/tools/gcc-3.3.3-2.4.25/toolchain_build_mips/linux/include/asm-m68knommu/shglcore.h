
/* Copyright (C) 1998  Kenneth Albanowski <kjahds@kjahds.com>,
 */

#ifndef _M68K_SHGLCORE_H
#define _M68K_SHGLCORE_H

#include <linux/config.h>

#ifdef CONFIG_SHGLCORE

#include <asm/MC68332.h>

#ifdef CONFIG_SHGLCORE_2MEG

#define SHGLCORE_ROM_BANK_0_ADDR	0x000000
#define SHGLCORE_ROM_BANK_1_ADDR	0x100000
#define SHGLCORE_RAM_BANK_0_ADDR	0x200000
#define SHGLCORE_RAM_BANK_1_ADDR	0x300000
#define SHGLCORE_FLASH_BANK_0_ADDR	0x400000

#define SHGLCORE_ROM_BANK_0_LENGTH	0x100000
#define SHGLCORE_ROM_BANK_1_LENGTH	0x100000
#define SHGLCORE_RAM_BANK_0_LENGTH	0x100000
#define SHGLCORE_RAM_BANK_1_LENGTH	0x100000
#define SHGLCORE_FLASH_BANK_0_LENGTH	0x80000

#define SHGLCORE_ACC_ADDR		0x600000
#define SHGLCORE_LANCE_ADDR		0x700000

#else

#define SHGLCORE_ROM_BANK_0_ADDR	0x000000
#define SHGLCORE_RAM_BANK_0_ADDR	0x100000
#define SHGLCORE_FLASH_BANK_0_ADDR	0x300000

#define SHGLCORE_ROM_BANK_0_LENGTH	0x100000
#define SHGLCORE_RAM_BANK_0_LENGTH	0x100000
#define SHGLCORE_FLASH_BANK_0_LENGTH	0x80000

#define SHGLCORE_ACC_ADDR		0x400000
#define SHGLCORE_LANCE_ADDR		0x500000

#endif

#define MAX_DMA_ADDRESS			SHGLCORE_RAM_BANK_0_ADDR + SHGLCORE_RAM_BANK_0_LENGTH

#define SHGLCORE_LATCH_ADDR	(SHGLCORE_ACC_ADDR+0x100)
#define SHGLCORE_1865_0_ADDR	(SHGLCORE_ACC_ADDR+0x600)
#define SHGLCORE_1865_1_ADDR	(SHGLCORE_ACC_ADDR+0x700)

#define SHGLCORE_LATCH_BIT(x)	BYTE_REF(SHGLCORE_LATCH_ADDR+x)

#define SHGLCORE_LATCH_STATUS_LED	0
#define SHGLCORE_LATCH_ERROR_LED	1
#define SHGLCORE_LATCH_ALARM_LED	2

#define SHGLCORE_LATCH_1865		4

#define SHGLCORE_LATCH_RELAY_1		6
#define SHGLCORE_LATCH_RELAY_2		7

#endif /* SHGLCORE */

#endif /* _M68K_SHGLCORE_H */
