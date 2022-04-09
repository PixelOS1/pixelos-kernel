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
	{ 0xc7d30f91, "input_register_device" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0x3024ba4b, "device_get_next_child_node" },
	{ 0xc1da8a3f, "device_get_child_node_count" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x331337dc, "input_event" },
	{ 0xf7175300, "regmap_read" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cmicrochip,qt1050");
MODULE_ALIAS("of:N*T*Cmicrochip,qt1050C*");

MODULE_INFO(srcversion, "B9B75C146A1BE4A230C1D47");
