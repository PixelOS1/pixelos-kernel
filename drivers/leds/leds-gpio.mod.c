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
	{ 0x40a4c25b, "_dev_info" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0x3cfdcf52, "devm_gpio_request_one" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0xa2f7d24c, "devm_fwnode_gpiod_get_index" },
	{ 0x3024ba4b, "device_get_next_child_node" },
	{ 0x34091051, "fwnode_property_present" },
	{ 0xaa57ad4, "led_init_default_state_get" },
	{ 0xc1da8a3f, "device_get_child_node_count" },
	{ 0x6607ca2b, "gpiod_set_consumer_name" },
	{ 0x3ebd1582, "devm_gpiod_get_index" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0x40d50e2a, "devm_led_classdev_register_ext" },
	{ 0xf9cd2564, "gpiod_direction_output" },
	{ 0x5e9a3b01, "gpiod_cansleep" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-leds");
MODULE_ALIAS("of:N*T*Cgpio-ledsC*");

MODULE_INFO(srcversion, "4769AB7588F43C9420B6DF6");
