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
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xa3c4dc2d, "pps_register_source" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x81f466c5, "device_property_present" },
	{ 0x28b2ea29, "devm_gpiod_get" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2045f61c, "pps_event" },
	{ 0x9a2a64b5, "gpiod_get_value" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x4cb27100, "ktime_get_snapshot" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6225e8d8, "pps_unregister_source" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpps-gpio");
MODULE_ALIAS("of:N*T*Cpps-gpioC*");

MODULE_INFO(srcversion, "B2B46C1E09807EB374DB6CF");
