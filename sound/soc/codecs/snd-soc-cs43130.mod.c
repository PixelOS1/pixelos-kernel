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
	{ 0xd5596d10, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x75ff8ef3, "regmap_multi_reg_write" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4d0699b2, "snd_soc_put_volsw" },
	{ 0xf7175300, "regmap_read" },
	{ 0x2b694178, "snd_soc_get_volsw" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0x652851ff, "snd_soc_info_enum_double" },
	{ 0x28b94e4, "snd_pcm_hw_constraint_list" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x1e0bfadf, "snd_soc_info_volsw" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xc2c5802, "work_busy" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x882af4c8, "snd_soc_get_enum_double" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5d8753b4, "__devm_regmap_init_i2c" },
	{ 0xc9d1e0a3, "devm_snd_soc_register_component" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x673875ec, "snd_soc_card_jack_new" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1a61affa, "regcache_mark_dirty" },
	{ 0xaec3ad45, "snd_soc_put_enum_double" },
	{ 0x21120fd8, "sysfs_create_groups" },
	{ 0xb564d390, "sysfs_remove_groups" },
	{ 0x96848186, "scnprintf" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4cb3da10, "snd_soc_jack_report" },
	{ 0xa6257a2f, "complete" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7fd076f, "regcache_sync" },
	{ 0xc3573d0f, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,i2c-core,snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:cs43130");
MODULE_ALIAS("i2c:cs4399");
MODULE_ALIAS("i2c:cs43131");
MODULE_ALIAS("i2c:cs43198");
MODULE_ALIAS("of:N*T*Ccirrus,cs43130");
MODULE_ALIAS("of:N*T*Ccirrus,cs43130C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs4399");
MODULE_ALIAS("of:N*T*Ccirrus,cs4399C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs43131");
MODULE_ALIAS("of:N*T*Ccirrus,cs43131C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs43198");
MODULE_ALIAS("of:N*T*Ccirrus,cs43198C*");

MODULE_INFO(srcversion, "4231824DF4321E70F73D562");
