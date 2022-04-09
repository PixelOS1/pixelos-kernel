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
	{ 0xdc3945a4, "st_accel_common_probe" },
	{ 0x9b2705be, "st_sensors_power_enable" },
	{ 0xcc4b7e1e, "st_sensors_spi_configure" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xc336d60a, "st_accel_get_settings" },
	{ 0xe46facee, "st_sensors_dev_name_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_accel,st_sensors,st_sensors_spi,industrialio");

MODULE_ALIAS("spi:lis3dh");
MODULE_ALIAS("spi:lsm330d_accel");
MODULE_ALIAS("spi:lsm330dl_accel");
MODULE_ALIAS("spi:lsm330dlc_accel");
MODULE_ALIAS("spi:lis331dlh");
MODULE_ALIAS("spi:lsm330_accel");
MODULE_ALIAS("spi:lsm303agr_accel");
MODULE_ALIAS("spi:lis2dh12_accel");
MODULE_ALIAS("spi:lis3l02dq");
MODULE_ALIAS("spi:lng2dm");
MODULE_ALIAS("spi:h3lis331dl_accel");
MODULE_ALIAS("spi:lis331dl_accel");
MODULE_ALIAS("spi:lis3lv02dl_accel");
MODULE_ALIAS("spi:lis2dw12");
MODULE_ALIAS("spi:lis3dhh");
MODULE_ALIAS("spi:lis3de");
MODULE_ALIAS("of:N*T*Cst,lis302dl-spi");
MODULE_ALIAS("of:N*T*Cst,lis302dl-spiC*");
MODULE_ALIAS("of:N*T*Cst,lis3lv02dl-accel");
MODULE_ALIAS("of:N*T*Cst,lis3lv02dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis3dh-accel");
MODULE_ALIAS("of:N*T*Cst,lis3dh-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330d-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330d-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis331dlh-accel");
MODULE_ALIAS("of:N*T*Cst,lis331dlh-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis2dh12-accel");
MODULE_ALIAS("of:N*T*Cst,lis2dh12-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis3l02dq");
MODULE_ALIAS("of:N*T*Cst,lis3l02dqC*");
MODULE_ALIAS("of:N*T*Cst,lng2dm-accel");
MODULE_ALIAS("of:N*T*Cst,lng2dm-accelC*");
MODULE_ALIAS("of:N*T*Cst,h3lis331dl-accel");
MODULE_ALIAS("of:N*T*Cst,h3lis331dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis331dl-accel");
MODULE_ALIAS("of:N*T*Cst,lis331dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis2dw12");
MODULE_ALIAS("of:N*T*Cst,lis2dw12C*");
MODULE_ALIAS("of:N*T*Cst,lis3dhh");
MODULE_ALIAS("of:N*T*Cst,lis3dhhC*");
MODULE_ALIAS("of:N*T*Cst,lis3de");
MODULE_ALIAS("of:N*T*Cst,lis3deC*");

MODULE_INFO(srcversion, "8B8F27377413B3DF749EC20");
