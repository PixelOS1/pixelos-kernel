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
	{ 0xb04a2a66, "st_lsm6dsx_pm_ops" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1d125490, "st_lsm6dsx_probe" },
	{ 0x234598a5, "__devm_regmap_init_spi" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_lsm6dsx,regmap-spi");

MODULE_ALIAS("spi:lsm6ds3");
MODULE_ALIAS("spi:lsm6ds3h");
MODULE_ALIAS("spi:lsm6dsl");
MODULE_ALIAS("spi:lsm6dsm");
MODULE_ALIAS("spi:ism330dlc");
MODULE_ALIAS("spi:lsm6dso");
MODULE_ALIAS("spi:asm330lhh");
MODULE_ALIAS("spi:lsm6dsox");
MODULE_ALIAS("spi:lsm6dsr");
MODULE_ALIAS("spi:lsm6ds3tr-c");
MODULE_ALIAS("spi:ism330dhcx");
MODULE_ALIAS("spi:lsm9ds1-imu");
MODULE_ALIAS("spi:lsm6ds0");
MODULE_ALIAS("spi:lsm6dsrx");
MODULE_ALIAS("spi:lsm6dst");
MODULE_ALIAS("spi:lsm6dsop");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3C*");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3h");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3hC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsl");
MODULE_ALIAS("of:N*T*Cst,lsm6dslC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsm");
MODULE_ALIAS("of:N*T*Cst,lsm6dsmC*");
MODULE_ALIAS("of:N*T*Cst,ism330dlc");
MODULE_ALIAS("of:N*T*Cst,ism330dlcC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dso");
MODULE_ALIAS("of:N*T*Cst,lsm6dsoC*");
MODULE_ALIAS("of:N*T*Cst,asm330lhh");
MODULE_ALIAS("of:N*T*Cst,asm330lhhC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsox");
MODULE_ALIAS("of:N*T*Cst,lsm6dsoxC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsr");
MODULE_ALIAS("of:N*T*Cst,lsm6dsrC*");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3tr-c");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3tr-cC*");
MODULE_ALIAS("of:N*T*Cst,ism330dhcx");
MODULE_ALIAS("of:N*T*Cst,ism330dhcxC*");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-imu");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-imuC*");
MODULE_ALIAS("of:N*T*Cst,lsm6ds0");
MODULE_ALIAS("of:N*T*Cst,lsm6ds0C*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsrx");
MODULE_ALIAS("of:N*T*Cst,lsm6dsrxC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dst");
MODULE_ALIAS("of:N*T*Cst,lsm6dstC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsop");
MODULE_ALIAS("of:N*T*Cst,lsm6dsopC*");

MODULE_INFO(srcversion, "B67430A148E59BAF025F334");
