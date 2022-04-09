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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0xece57840, "regmap_register_patch" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0x6f734d78, "snd_soc_component_update_bits" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8d7fa148, "rl6231_get_pre_div" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xd791971d, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xdba4502f, "rl6231_calc_dmic_clk" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0x5dc92cdf, "rl6231_pll_calc" },
	{ 0xad44d8dd, "snd_soc_component_read" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xc3573d0f, "regcache_cache_only" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,snd-soc-rl6231,regmap-i2c");

MODULE_ALIAS("acpi*:10EC5660:*");
MODULE_ALIAS("acpi*:10EC3277:*");
MODULE_ALIAS("i2c:rt5660");

MODULE_INFO(srcversion, "8F62A39C43601733804C5C1");
