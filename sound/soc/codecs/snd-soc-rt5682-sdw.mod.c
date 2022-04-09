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
	{ 0xaa10ea97, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x30c888e9, "sdw_unregister_driver" },
	{ 0x6eb704bc, "rt5682_readable_register" },
	{ 0x4e9d7f39, "sdw_stream_add_slave" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x8819f358, "regcache_cache_bypass" },
	{ 0x42ae244d, "sdw_stream_remove_slave" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2c8da5cf, "rt5682_apply_patch_list" },
	{ 0xf9619ca2, "rt5682_aif2_dai_ops" },
	{ 0xe8b9c7c7, "rt5682_volatile_register" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x125627a1, "rt5682_aif1_dai_ops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xdb9a1ff1, "rt5682_calibrate" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc3e41dfd, "rt5682_soc_component_dev" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf5dcca31, "__sdw_register_driver" },
	{ 0x7679cd25, "__devm_regmap_init_sdw" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xb897de56, "rt5682_reg" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x59d3d967, "rt5682_jack_detect_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0x37a0cba, "kfree" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x5c30163b, "sdw_update_no_pm" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xc3573d0f, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,soundwire-bus,snd-soc-rt5682,regmap-sdw,snd-soc-core");

MODULE_ALIAS("sdw:m025Dp5682v02c*");

MODULE_INFO(srcversion, "31BCD854279EEF5D78B2DC0");
