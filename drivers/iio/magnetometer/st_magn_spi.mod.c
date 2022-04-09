#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x823ef447, "st_magn_common_probe" },
	{ 0x9b2705be, "st_sensors_power_enable" },
	{ 0xcc4b7e1e, "st_sensors_spi_configure" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x6e79e2f2, "st_magn_get_settings" },
	{ 0xe46facee, "st_sensors_dev_name_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_magn,st_sensors,st_sensors_spi,industrialio");

MODULE_ALIAS("spi:lis3mdl");
MODULE_ALIAS("spi:lsm303agr_magn");
MODULE_ALIAS("spi:lis2mdl");
MODULE_ALIAS("spi:lsm9ds1_magn");
MODULE_ALIAS("spi:iis2mdc");
MODULE_ALIAS("of:N*T*Cst,lis3mdl-magn");
MODULE_ALIAS("of:N*T*Cst,lis3mdl-magnC*");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-magn");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-magnC*");
MODULE_ALIAS("of:N*T*Cst,lis2mdl");
MODULE_ALIAS("of:N*T*Cst,lis2mdlC*");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-magn");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-magnC*");
MODULE_ALIAS("of:N*T*Cst,iis2mdc");
MODULE_ALIAS("of:N*T*Cst,iis2mdcC*");

MODULE_INFO(srcversion, "8DECD6A37F167A212501C4E");
