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
	{ 0x92997ed8, "_printk" },
	{ 0xf9393856, "iio_convert_raw_to_processed" },
	{ 0xdffb6894, "iio_read_channel_raw" },
	{ 0xc9b6f8cf, "iio_read_channel_processed_scale" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0x81f466c5, "device_property_present" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x6ddde01f, "iio_get_channel_type" },
	{ 0x8e9d7d0b, "devm_iio_channel_get" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cepcos,b57330v2103");
MODULE_ALIAS("of:N*T*Cepcos,b57330v2103C*");
MODULE_ALIAS("of:N*T*Cepcos,b57891s0103");
MODULE_ALIAS("of:N*T*Cepcos,b57891s0103C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wb473C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wf104");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wf104C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wb473C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wl333");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wl333C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp15xh103");
MODULE_ALIAS("of:N*T*Cmurata,ncp15xh103C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp18wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp18wb473C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp21wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp21wb473C*");
MODULE_ALIAS("of:N*T*Csamsung,1404-001221");
MODULE_ALIAS("of:N*T*Csamsung,1404-001221C*");
MODULE_ALIAS("of:N*T*Cntc,ncp03wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp03wb473C*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp15wb473C*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wl333");
MODULE_ALIAS("of:N*T*Cntc,ncp15wl333C*");
MODULE_ALIAS("of:N*T*Cntc,ncp18wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp18wb473C*");
MODULE_ALIAS("of:N*T*Cntc,ncp21wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp21wb473C*");

MODULE_INFO(srcversion, "6971ED064F8ED57AD95D5A9");
