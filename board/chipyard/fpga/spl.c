#include <init.h>
#include <spl.h>
#include <misc.h>
#include <log.h>
#include <linux/delay.h>
#include <linux/io.h>
#include <asm/gpio.h>

u32 spl_boot_device(void)
{
	return BOOT_DEVICE_BOOTROM;
}

#ifdef CONFIG_SPL_LOAD_FIT
int board_fit_config_name_match(const char *name)
{
	/* boot using first FIT config */
	return 0;
}
#endif
