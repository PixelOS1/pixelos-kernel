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
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9866dd4e, "device_property_read_u8_array" },
	{ 0xf7175300, "regmap_read" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x3024ba4b, "device_get_next_child_node" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc1da8a3f, "device_get_child_node_count" },
	{ 0xf9cd2564, "gpiod_direction_output" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:lm3532-led");
MODULE_ALIAS("of:N*T*Cti,lm3532");
MODULE_ALIAS("of:N*T*Cti,lm3532C*");

MODULE_INFO(srcversion, "1295783CFF250EDD3FB1131");
