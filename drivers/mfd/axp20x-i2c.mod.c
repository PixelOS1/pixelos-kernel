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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1648aa3, "axp20x_device_probe" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x7c0457a7, "axp20x_match_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4692274e, "axp20x_device_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,axp20x,regmap-i2c");

MODULE_ALIAS("acpi*:INT33F4:*");
MODULE_ALIAS("i2c:axp152");
MODULE_ALIAS("i2c:axp202");
MODULE_ALIAS("i2c:axp209");
MODULE_ALIAS("i2c:axp221");
MODULE_ALIAS("i2c:axp223");
MODULE_ALIAS("i2c:axp803");
MODULE_ALIAS("i2c:axp806");

MODULE_INFO(srcversion, "CE1328112AC2D45E95DC36E");
