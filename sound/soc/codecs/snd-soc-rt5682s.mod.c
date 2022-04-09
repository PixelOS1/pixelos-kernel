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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0x75ff8ef3, "regmap_multi_reg_write" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x6f734d78, "snd_soc_component_update_bits" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0x897c6fc5, "snd_soc_dapm_get_pin_status" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x526133fd, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0xbf5a7f22, "device_property_read_string_array" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3cfdcf52, "devm_gpio_request_one" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0x8c14a72f, "snd_soc_dapm_sync" },
	{ 0xd791971d, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x8685ce01, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xb6897bf3, "clk_hw_get_name" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0x1fd6b8ac, "devm_clk_hw_register" },
	{ 0xb1969174, "snd_soc_dapm_disable_pin" },
	{ 0x989f661, "snd_soc_dapm_sync_unlocked" },
	{ 0xad44d8dd, "snd_soc_component_read" },
	{ 0x4cb3da10, "snd_soc_jack_report" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xc3573d0f, "regcache_cache_only" },
	{ 0x6b3b80ed, "devm_clk_hw_register_clkdev" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,regmap-i2c");

MODULE_ALIAS("acpi*:RTL5682:*");
MODULE_ALIAS("i2c:rt5682s");
MODULE_ALIAS("of:N*T*Crealtek,rt5682s");
MODULE_ALIAS("of:N*T*Crealtek,rt5682sC*");

MODULE_INFO(srcversion, "9D61611F3EB083E5CD02B21");
