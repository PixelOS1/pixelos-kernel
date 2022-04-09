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
	{ 0xa01d5cf6, "__devm_rtc_register_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x76af4d48, "devm_rtc_allocate_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xbed205fd, "gpiod_direction_output_raw" },
	{ 0x4182f7ba, "gpiod_get_raw_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6b4a11f, "gpiod_set_raw_value" },
	{ 0xf2247574, "gpiod_direction_input" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0xfe990052, "gpio_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1E78468ABF130EC53E3E3B1");
