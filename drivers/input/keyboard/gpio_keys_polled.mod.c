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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0x5963d5f4, "fwnode_property_read_string" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0x69eb3786, "device_property_read_string" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xc1da8a3f, "device_get_child_node_count" },
	{ 0xa2f7d24c, "devm_fwnode_gpiod_get_index" },
	{ 0x3024ba4b, "device_get_next_child_node" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xc1a92eef, "input_set_poll_interval" },
	{ 0x87645171, "input_setup_polling" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0x3cfdcf52, "devm_gpio_request_one" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x331337dc, "input_event" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys-polled");
MODULE_ALIAS("of:N*T*Cgpio-keys-polledC*");

MODULE_INFO(srcversion, "A0090BBAF0D2730E5FB57B3");
