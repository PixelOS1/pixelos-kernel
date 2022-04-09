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
	{ 0x980b983d, "iio_show_mount_matrix" },
	{ 0xa4cd87c0, "pm_runtime_force_resume" },
	{ 0x4a5a0dd5, "pm_runtime_force_suspend" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x9b074f32, "__pm_runtime_idle" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x7e30893c, "__iio_device_register" },
	{ 0x4bdcd3a6, "iio_triggered_buffer_setup_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x1f4aebf2, "device_get_match_data" },
	{ 0x253f7f3c, "iio_read_mount_matrix" },
	{ 0xc2a1967, "devm_iio_device_alloc" },
	{ 0x6607ca2b, "gpiod_set_consumer_name" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe9eff1ff, "iio_trigger_notify_done" },
	{ 0xbb4bbdaf, "iio_push_to_buffers" },
	{ 0x6dc20e0b, "iio_get_time_ns" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe3e180dd, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x9a2a64b5, "gpiod_get_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0x43fd6cca, "iio_triggered_buffer_cleanup" },
	{ 0x663bac70, "iio_device_unregister" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xeff1f3dc, "regulator_enable" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak8975");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8975C*");
MODULE_ALIAS("of:N*T*Cak8975");
MODULE_ALIAS("of:N*T*Cak8975C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8963");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8963C*");
MODULE_ALIAS("of:N*T*Cak8963");
MODULE_ALIAS("of:N*T*Cak8963C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09911");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09911C*");
MODULE_ALIAS("of:N*T*Cak09911");
MODULE_ALIAS("of:N*T*Cak09911C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09912");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09912C*");
MODULE_ALIAS("of:N*T*Cak09912");
MODULE_ALIAS("of:N*T*Cak09912C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09916");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09916C*");
MODULE_ALIAS("of:N*T*Cak09916");
MODULE_ALIAS("of:N*T*Cak09916C*");
MODULE_ALIAS("i2c:ak8975");
MODULE_ALIAS("i2c:ak8963");
MODULE_ALIAS("i2c:AK8963");
MODULE_ALIAS("i2c:ak09911");
MODULE_ALIAS("i2c:ak09912");
MODULE_ALIAS("i2c:ak09916");
MODULE_ALIAS("acpi*:AK8975:*");
MODULE_ALIAS("acpi*:AK8963:*");
MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("acpi*:AK009911:*");
MODULE_ALIAS("acpi*:AK09911:*");
MODULE_ALIAS("acpi*:AKM9911:*");
MODULE_ALIAS("acpi*:AK09912:*");

MODULE_INFO(srcversion, "7A748F0ABA8FDACBB2F1424");
