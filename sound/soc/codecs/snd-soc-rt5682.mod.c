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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0x75ff8ef3, "regmap_multi_reg_write" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xb233c09e, "clk_hw_get_parent" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6f734d78, "snd_soc_component_update_bits" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0x897c6fc5, "snd_soc_dapm_get_pin_status" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x526133fd, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0xbf5a7f22, "device_property_read_string_array" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc2c9d6f7, "__clk_get_hw" },
	{ 0x8c14a72f, "snd_soc_dapm_sync" },
	{ 0xd791971d, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x8685ce01, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xb6897bf3, "clk_hw_get_name" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0x1fd6b8ac, "devm_clk_hw_register" },
	{ 0xb1969174, "snd_soc_dapm_disable_pin" },
	{ 0x989f661, "snd_soc_dapm_sync_unlocked" },
	{ 0x5dc92cdf, "rl6231_pll_calc" },
	{ 0xad44d8dd, "snd_soc_component_read" },
	{ 0x4cb3da10, "snd_soc_jack_report" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xc3573d0f, "regcache_cache_only" },
	{ 0x6b3b80ed, "devm_clk_hw_register_clkdev" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-rl6231");


MODULE_INFO(srcversion, "4A5D89E7D9F81615FEED584");
