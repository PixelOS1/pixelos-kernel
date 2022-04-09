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
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x4a5a0dd5, "pm_runtime_force_suspend" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x15ffe358, "regmap_update_bits_base" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0xa4cd87c0, "pm_runtime_force_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xf7175300, "regmap_read" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0xac83d6fd, "regulator_bulk_set_supply_names" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xa6257a2f, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "8C2A4FD31C01AC13872751B");
