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
	{ 0x2d3385d3, "system_wq" },
	{ 0x43fd6cca, "iio_triggered_buffer_cleanup" },
	{ 0x1cebb297, "hid_sensor_batch_mode_supported" },
	{ 0xf40f22e7, "iio_trigger_unregister" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xed528172, "iio_trigger_alloc" },
	{ 0x2ed305de, "sensor_hub_get_feature" },
	{ 0x68057f27, "sensor_hub_device_open" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4bdcd3a6, "iio_triggered_buffer_setup_ext" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0x5c5ebe68, "hid_sensor_read_poll_value" },
	{ 0x22eb9405, "sensor_hub_device_close" },
	{ 0x8f6331cd, "__iio_trigger_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc7c65e19, "hid_sensor_get_usage_index" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0xc61afcc1, "sensor_hub_set_feature" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0x16e6d67f, "get_device" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x82119b2f, "iio_trigger_free" },
	{ 0x25a5176e, "hid_sensor_set_report_latency" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1ba7949f, "hid_sensor_get_report_latency" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,hid-sensor-iio-common,industrialio,hid-sensor-hub");


MODULE_INFO(srcversion, "FB9FD34629DA3C11450418A");
