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
	{ 0x4a5a0dd5, "pm_runtime_force_suspend" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0xa4cd87c0, "pm_runtime_force_resume" },
	{ 0x6f734d78, "snd_soc_component_update_bits" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xc3573d0f, "regcache_cache_only" },
};

MODULE_INFO(depends, "i2c-core,snd-soc-core,snd-pcm,regmap-i2c");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak5558");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak5558C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak5552");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak5552C*");

MODULE_INFO(srcversion, "0ED174C8F6634CD61EDF15D");
