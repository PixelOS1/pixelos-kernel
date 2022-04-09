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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xd4f58ba1, "regmap_raw_write" },
	{ 0xced4a9c6, "snd_soc_dapm_get_enum_double" },
	{ 0xece57840, "regmap_register_patch" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0xec789624, "snd_soc_dapm_get_volsw" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x8819f358, "regcache_cache_bypass" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x1598fb9d, "device_get_named_child_node" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6f734d78, "snd_soc_component_update_bits" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x5963d5f4, "fwnode_property_read_string" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0x7989c5dd, "snd_soc_put_volsw_range" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x2d6b8197, "regmap_reinit_cache" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdf45e79a, "regulator_bulk_get" },
	{ 0x2292271e, "snd_soc_info_volsw_range" },
	{ 0xbf5a7f22, "device_property_read_string_array" },
	{ 0x1d96a84, "snd_soc_dapm_force_bias_level" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69eb3786, "device_property_read_string" },
	{ 0x6d18777e, "snd_soc_dapm_put_volsw" },
	{ 0x5f609c50, "snd_soc_get_volsw_range" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1cfe4101, "clkdev_hw_create" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x485b0aa5, "fwnode_property_read_u32_array" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xe4bd0d8d, "regulator_get_voltage" },
	{ 0x8c14a72f, "snd_soc_dapm_sync" },
	{ 0xd791971d, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xf906590d, "clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0x71a2f43b, "snd_soc_dapm_force_enable_pin" },
	{ 0xb1969174, "snd_soc_dapm_disable_pin" },
	{ 0x37a0cba, "kfree" },
	{ 0x924849f8, "regcache_sync_region" },
	{ 0xad44d8dd, "snd_soc_component_read" },
	{ 0xd63347d5, "regmap_raw_read" },
	{ 0x65464c16, "clkdev_drop" },
	{ 0x44bfda28, "regulator_bulk_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4cb3da10, "snd_soc_jack_report" },
	{ 0xa4d930cd, "clk_hw_register" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x929747be, "clk_hw_unregister" },
	{ 0xada4ea8c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,regmap-i2c");

MODULE_ALIAS("acpi*:DLGS7219:*");
MODULE_ALIAS("i2c:da7219");

MODULE_INFO(srcversion, "54E64CC34E6B9A8C3BBACD6");
