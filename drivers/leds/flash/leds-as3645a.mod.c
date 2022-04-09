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
	{ 0x157bf346, "led_classdev_flash_register_ext" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0xe44aecc1, "fwnode_handle_get" },
	{ 0x4901bf50, "fwnode_get_next_child_node" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x642aea86, "led_classdev_flash_unregister" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,led-class-flash");

MODULE_ALIAS("of:N*T*Cams,as3645a");
MODULE_ALIAS("of:N*T*Cams,as3645aC*");
MODULE_ALIAS("i2c:as3645a");

MODULE_INFO(srcversion, "E498A1F5697AB89DE60E4A6");
