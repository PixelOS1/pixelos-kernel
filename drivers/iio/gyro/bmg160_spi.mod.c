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
	{ 0x8f270d97, "bmg160_pm_ops" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa7257621, "bmg160_core_probe" },
	{ 0x234598a5, "__devm_regmap_init_spi" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0x8558925d, "bmg160_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmg160_core,regmap-spi");

MODULE_ALIAS("spi:bmg160");
MODULE_ALIAS("spi:bmi055_gyro");
MODULE_ALIAS("spi:bmi088_gyro");

MODULE_INFO(srcversion, "E4F8D2DBC48EA65CBB3C35C");
