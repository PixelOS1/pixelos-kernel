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
	{ 0x3854774b, "kstrtoll" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x4cec5ded, "__devm_reset_control_get" },
	{ 0xaa10ea97, "__devm_regmap_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xe4ec892b, "devm_platform_ioremap_resource" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf7175300, "regmap_read" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tachoC*");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tachoC*");

MODULE_INFO(srcversion, "F64963E418CD4A705DE4892");
