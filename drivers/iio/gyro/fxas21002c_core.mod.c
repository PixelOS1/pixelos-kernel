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
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x926f4dc7, "iio_read_const_attr" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0xf25891ce, "iio_trigger_poll_chained" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x50063258, "__devm_iio_trigger_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x7780d985, "devm_regmap_field_alloc" },
	{ 0x6288d382, "regmap_field_read" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0xd7c8507, "regmap_field_update_bits_base" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x9bccda18, "regmap_get_device" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xeff1f3dc, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "9457445778B801D6F419912");
