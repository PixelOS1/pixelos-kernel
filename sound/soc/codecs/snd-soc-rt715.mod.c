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
	{ 0xf9a482f9, "msleep" },
	{ 0x4e9d7f39, "sdw_stream_add_slave" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x42ae244d, "sdw_stream_remove_slave" },
	{ 0xf7175300, "regmap_read" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0xe8c28689, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0xf5dcca31, "__sdw_register_driver" },
	{ 0x7679cd25, "__devm_regmap_init_sdw" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0x37a0cba, "kfree" },
	{ 0x924849f8, "regcache_sync_region" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x46c3c3b2, "snd_soc_dapm_mux_update_power" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xc3573d0f, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,soundwire-bus,snd-soc-core,regmap-sdw");

MODULE_ALIAS("sdw:m025Dp0714v02c*");
MODULE_ALIAS("sdw:m025Dp0715v02c*");

MODULE_INFO(srcversion, "0C4C1E749C20CFA096D2FD9");
