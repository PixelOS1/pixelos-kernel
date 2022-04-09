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
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x731f3a36, "devm_rtc_device_register" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9ba2bb2b, "gpio_request_array" },
	{ 0xb0d1656c, "gpio_free_array" },
	{ 0x4182f7ba, "gpiod_get_raw_value" },
	{ 0xf2247574, "gpiod_direction_input" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6b4a11f, "gpiod_set_raw_value" },
	{ 0xbed205fd, "gpiod_direction_output_raw" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0xde80cd09, "ioremap" },
	{ 0xedc03953, "iounmap" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "04DFC56E0B56FCF3D78D13F");
