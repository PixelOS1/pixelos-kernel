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
	{ 0xb3a66083, "st_sensors_set_dataready_irq" },
	{ 0x55ab8e56, "st_sensors_set_enable" },
	{ 0x74d7047, "st_sensors_trigger_handler" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd5263c64, "st_sensors_sysfs_sampling_frequency_avail" },
	{ 0xfe04242f, "st_sensors_allocate_trigger" },
	{ 0xdae9975, "st_sensors_set_fullscale_by_gain" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x72a43a6e, "st_sensors_validate_device" },
	{ 0x253f7f3c, "iio_read_mount_matrix" },
	{ 0xb3624bb8, "__devm_iio_device_register" },
	{ 0x89522f40, "st_sensors_init_sensor" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x980b983d, "iio_show_mount_matrix" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc9afb9b0, "st_sensors_debugfs_reg_access" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x60ed150a, "st_sensors_get_settings_index" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x629f65c7, "st_sensors_set_odr" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a31a433, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xbad938a6, "st_sensors_sysfs_scale_avail" },
	{ 0xab4a6ca, "st_sensors_verify_id" },
	{ 0x8bd10d07, "st_sensors_set_axis_enable" },
	{ 0x361f64fa, "st_sensors_read_info_raw" },
	{ 0xa010ba68, "is_acpi_device_node" },
};

MODULE_INFO(depends, "st_sensors,industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "43699482FE0552B2463F29F");
