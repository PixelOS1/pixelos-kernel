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
	{ 0x926f4dc7, "iio_read_const_attr" },
	{ 0x980b983d, "iio_show_mount_matrix" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x253f7f3c, "iio_read_mount_matrix" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0x4bdcd3a6, "iio_triggered_buffer_setup_ext" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x8f6331cd, "__iio_trigger_register" },
	{ 0x96d01fb1, "__module_get" },
	{ 0x16e6d67f, "get_device" },
	{ 0xc3434aab, "devm_iio_trigger_alloc" },
	{ 0xe1c64e92, "iio_device_id" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0xf40f22e7, "iio_trigger_unregister" },
	{ 0x43fd6cca, "iio_triggered_buffer_cleanup" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0xe3e180dd, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9e32c99e, "iio_trigger_poll" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0x66c0d752, "iio_push_event" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Ckionix,kxcjk1013");
MODULE_ALIAS("of:N*T*Ckionix,kxcjk1013C*");
MODULE_ALIAS("of:N*T*Ckionix,kxcj91008");
MODULE_ALIAS("of:N*T*Ckionix,kxcj91008C*");
MODULE_ALIAS("of:N*T*Ckionix,kxtj21009");
MODULE_ALIAS("of:N*T*Ckionix,kxtj21009C*");
MODULE_ALIAS("of:N*T*Ckionix,kxtf9");
MODULE_ALIAS("of:N*T*Ckionix,kxtf9C*");
MODULE_ALIAS("of:N*T*Ckionix,kx023-1025");
MODULE_ALIAS("of:N*T*Ckionix,kx023-1025C*");
MODULE_ALIAS("i2c:kxcjk1013");
MODULE_ALIAS("i2c:kxcj91008");
MODULE_ALIAS("i2c:kxtj21009");
MODULE_ALIAS("i2c:kxtf9");
MODULE_ALIAS("i2c:kx023-1025");
MODULE_ALIAS("i2c:SMO8500");
MODULE_ALIAS("acpi*:KXCJ1013:*");
MODULE_ALIAS("acpi*:KXCJ1008:*");
MODULE_ALIAS("acpi*:KXCJ9000:*");
MODULE_ALIAS("acpi*:KIOX0008:*");
MODULE_ALIAS("acpi*:KIOX0009:*");
MODULE_ALIAS("acpi*:KIOX000A:*");
MODULE_ALIAS("acpi*:KIOX010A:*");
MODULE_ALIAS("acpi*:KIOX020A:*");
MODULE_ALIAS("acpi*:KXTJ1009:*");
MODULE_ALIAS("acpi*:KXJ2109:*");
MODULE_ALIAS("acpi*:SMO8500:*");

MODULE_INFO(srcversion, "1A8B396CAD6932C680FA597");
