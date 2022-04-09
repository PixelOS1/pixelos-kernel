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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x75ff8ef3, "regmap_multi_reg_write" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6f734d78, "snd_soc_component_update_bits" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0x7c3bda2b, "snd_pcm_hw_constraint_minmax" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x4cb3da10, "snd_soc_jack_report" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:cs42l42");
MODULE_ALIAS("acpi*:10134242:*");

MODULE_INFO(srcversion, "7421C7261336E7DC447C0EB");
