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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0xece57840, "regmap_register_patch" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x88786b87, "gpio_to_desc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0x64f36507, "snd_soc_dapm_new_controls" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6f734d78, "snd_soc_component_update_bits" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xebc7281d, "snd_soc_dapm_add_routes" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8d7fa148, "rl6231_get_pre_div" },
	{ 0xfa96e89, "snd_soc_add_component_controls" },
	{ 0x526133fd, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0x1d96a84, "snd_soc_dapm_force_bias_level" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x3cfdcf52, "devm_gpio_request_one" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xd791971d, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99261972, "devm_clk_get" },
	{ 0xdba4502f, "rl6231_calc_dmic_clk" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x8685ce01, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x9a2a64b5, "gpiod_get_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0x989f661, "snd_soc_dapm_sync_unlocked" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x5dc92cdf, "rl6231_pll_calc" },
	{ 0xe6a3ee26, "gpiod_set_raw_value_cansleep" },
	{ 0xad44d8dd, "snd_soc_component_read" },
	{ 0x4cb3da10, "snd_soc_jack_report" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xc3573d0f, "regcache_cache_only" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7ce0d551, "gpiod_get_value_cansleep" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,snd-soc-rl6231,regmap-i2c");

MODULE_ALIAS("i2c:rt5640");
MODULE_ALIAS("i2c:rt5639");
MODULE_ALIAS("i2c:rt5642");
MODULE_ALIAS("acpi*:INT33CA:*");
MODULE_ALIAS("acpi*:10EC3276:*");
MODULE_ALIAS("acpi*:10EC5640:*");
MODULE_ALIAS("acpi*:10EC5642:*");
MODULE_ALIAS("acpi*:INTCCFFD:*");

MODULE_INFO(srcversion, "AA70BE6B1A9A6B6616AA7C2");
