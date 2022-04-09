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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x731cb5d4, "i2c_smbus_read_i2c_block_data" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd4f925d2, "__pm_runtime_resume" },
	{ 0x794d1829, "input_device_enabled" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x331337dc, "input_event" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfb6eedf9, "power_group_name" },
	{ 0xfe5eb2fd, "sysfs_merge_group" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xa5ea959d, "sysfs_unmerge_group" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x8df14a40, "i2c_smbus_xfer" },
	{ 0xf9c18e6b, "i2c_smbus_read_block_data" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xb7214e95, "pm_wakeup_dev_event" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x282d8810, "devm_device_add_group" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x96848186, "scnprintf" },
	{ 0x1564421, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xef2f45f3, "i2c_smbus_write_i2c_block_data" },
	{ 0xa6257a2f, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xeff1f3dc, "regulator_enable" },
};

MODULE_INFO(depends, "i2c-core,crc-itu-t");

MODULE_ALIAS("acpi*:CYAP0000:*");
MODULE_ALIAS("acpi*:CYAP0001:*");
MODULE_ALIAS("acpi*:CYAP0002:*");
MODULE_ALIAS("i2c:cyapa");

MODULE_INFO(srcversion, "8BF8691522B27246B0EC903");
