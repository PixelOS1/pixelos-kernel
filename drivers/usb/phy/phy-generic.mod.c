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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc0f09104, "usb_remove_phy" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf9cd2564, "gpiod_direction_output" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x9a2a64b5, "gpiod_get_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8be6a921, "usb_add_phy_dev" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0xfb3f59a1, "regulator_set_current_limit" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xeff1f3dc, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cusb-nop-xceiv");
MODULE_ALIAS("of:N*T*Cusb-nop-xceivC*");

MODULE_INFO(srcversion, "FA90458888E3CD10185125B");
