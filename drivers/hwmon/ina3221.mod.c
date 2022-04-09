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
	{ 0xa4cd87c0, "pm_runtime_force_resume" },
	{ 0x4a5a0dd5, "pm_runtime_force_suspend" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x6288d382, "regmap_field_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7780d985, "devm_regmap_field_alloc" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0xf7175300, "regmap_read" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xd7c8507, "regmap_field_update_bits_base" },
	{ 0xc3573d0f, "regcache_cache_only" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221C*");

MODULE_INFO(srcversion, "A11302B71947A78D14C1433");
