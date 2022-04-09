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
	{ 0x40a4c25b, "_dev_info" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc85cb619, "i2c_match_id" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf7175300, "regmap_read" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:emc1402");
MODULE_ALIAS("i2c:emc1403");
MODULE_ALIAS("i2c:emc1404");
MODULE_ALIAS("i2c:emc1412");
MODULE_ALIAS("i2c:emc1413");
MODULE_ALIAS("i2c:emc1414");
MODULE_ALIAS("i2c:emc1422");
MODULE_ALIAS("i2c:emc1423");
MODULE_ALIAS("i2c:emc1424");

MODULE_INFO(srcversion, "AFDCA700E1BB2C80670FC4B");
