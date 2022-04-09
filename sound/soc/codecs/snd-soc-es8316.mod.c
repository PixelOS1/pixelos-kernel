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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6f734d78, "snd_soc_component_update_bits" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x6631a567, "devm_clk_get_optional" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x526133fd, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xd791971d, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x8685ce01, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x989f661, "snd_soc_dapm_sync_unlocked" },
	{ 0x4cb3da10, "snd_soc_jack_report" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,i2c-core,snd-pcm,regmap-i2c");

MODULE_ALIAS("i2c:es8316");
MODULE_ALIAS("acpi*:ESSX8316:*");
MODULE_ALIAS("acpi*:ESSX8336:*");

MODULE_INFO(srcversion, "852439CC3E15D9295FC18AD");
