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
	{ 0xc836e0d9, "bmc150_accel_pm_ops" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfe9f6c39, "bmc150_accel_core_probe" },
	{ 0x234598a5, "__devm_regmap_init_spi" },
	{ 0x3881a3d3, "bmc150_regmap_conf" },
	{ 0x9d27181c, "spi_get_device_id" },
	{ 0x47b15be, "bmc150_accel_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmc150-accel-core,regmap-spi");

MODULE_ALIAS("spi:bma222");
MODULE_ALIAS("spi:bma222e");
MODULE_ALIAS("spi:bma250e");
MODULE_ALIAS("spi:bma253");
MODULE_ALIAS("spi:bma255");
MODULE_ALIAS("spi:bma280");
MODULE_ALIAS("spi:bmc150_accel");
MODULE_ALIAS("spi:bmc156_accel");
MODULE_ALIAS("spi:bmi055_accel");
MODULE_ALIAS("acpi*:BMA0255:*");
MODULE_ALIAS("acpi*:BMA0280:*");
MODULE_ALIAS("acpi*:BMA222:*");
MODULE_ALIAS("acpi*:BMA222E:*");
MODULE_ALIAS("acpi*:BMA250E:*");
MODULE_ALIAS("acpi*:BMC150A:*");
MODULE_ALIAS("acpi*:BMI055A:*");
MODULE_ALIAS("acpi*:BSBA0150:*");

MODULE_INFO(srcversion, "AB4BA75826480F0B6BA7E3E");
