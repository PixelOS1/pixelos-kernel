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
	{ 0xf9a482f9, "msleep" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x926f4dc7, "iio_read_const_attr" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0xa8ea979c, "regmap_bulk_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x185d6da3, "regmap_bulk_write" },
	{ 0xf7175300, "regmap_read" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0x5d53c6c5, "regmap_noinc_read" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x253f7f3c, "iio_read_mount_matrix" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x50063258, "__devm_iio_trigger_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x72cb7ce4, "iio_device_claim_direct_mode" },
	{ 0x980b983d, "iio_show_mount_matrix" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6f488baa, "devm_kstrdup" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0x16e6d67f, "get_device" },
	{ 0x96d01fb1, "__module_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x7c9a9799, "iio_device_release_direct_mode" },
	{ 0x96848186, "scnprintf" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x9bccda18, "regmap_get_device" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xbeddd8bb, "regmap_write" },
	{ 0xeff1f3dc, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "855233172AC42F732FE468E");
