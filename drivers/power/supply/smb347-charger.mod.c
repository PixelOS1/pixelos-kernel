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
	{ 0xc00cd89e, "regulator_is_enabled_regmap" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xf350a2ce, "devm_regulator_register" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x29a373c2, "devm_power_supply_register" },
	{ 0x25dd666b, "power_supply_get_battery_info" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4d3468c, "power_supply_changed" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3b3f949b, "power_supply_get_drvdata" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf7175300, "regmap_read" },
	{ 0x1f070f13, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Csummit,smb345");
MODULE_ALIAS("of:N*T*Csummit,smb345C*");
MODULE_ALIAS("of:N*T*Csummit,smb347");
MODULE_ALIAS("of:N*T*Csummit,smb347C*");
MODULE_ALIAS("of:N*T*Csummit,smb358");
MODULE_ALIAS("of:N*T*Csummit,smb358C*");
MODULE_ALIAS("i2c:smb345");
MODULE_ALIAS("i2c:smb347");
MODULE_ALIAS("i2c:smb358");

MODULE_INFO(srcversion, "6DB97B3E291D6DE52ECD791");
