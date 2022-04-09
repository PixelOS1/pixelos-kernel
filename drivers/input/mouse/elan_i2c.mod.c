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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc851d33a, "input_mt_report_pointer_emulation" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x331337dc, "input_event" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x81fefc83, "i2c_smbus_read_byte" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x4d1153b, "i2c_smbus_write_byte" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xf634309c, "i2c_smbus_write_block_data" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xf9c18e6b, "i2c_smbus_read_block_data" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xb7214e95, "pm_wakeup_dev_event" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x1564421, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x2bd36e7c, "devm_device_add_groups" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xeff1f3dc, "regulator_enable" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:ELAN0000:*");
MODULE_ALIAS("acpi*:ELAN0100:*");
MODULE_ALIAS("acpi*:ELAN0600:*");
MODULE_ALIAS("acpi*:ELAN0601:*");
MODULE_ALIAS("acpi*:ELAN0602:*");
MODULE_ALIAS("acpi*:ELAN0603:*");
MODULE_ALIAS("acpi*:ELAN0604:*");
MODULE_ALIAS("acpi*:ELAN0605:*");
MODULE_ALIAS("acpi*:ELAN0606:*");
MODULE_ALIAS("acpi*:ELAN0607:*");
MODULE_ALIAS("acpi*:ELAN0608:*");
MODULE_ALIAS("acpi*:ELAN0609:*");
MODULE_ALIAS("acpi*:ELAN060B:*");
MODULE_ALIAS("acpi*:ELAN060C:*");
MODULE_ALIAS("acpi*:ELAN060F:*");
MODULE_ALIAS("acpi*:ELAN0610:*");
MODULE_ALIAS("acpi*:ELAN0611:*");
MODULE_ALIAS("acpi*:ELAN0612:*");
MODULE_ALIAS("acpi*:ELAN0615:*");
MODULE_ALIAS("acpi*:ELAN0616:*");
MODULE_ALIAS("acpi*:ELAN0617:*");
MODULE_ALIAS("acpi*:ELAN0618:*");
MODULE_ALIAS("acpi*:ELAN0619:*");
MODULE_ALIAS("acpi*:ELAN061A:*");
MODULE_ALIAS("acpi*:ELAN061C:*");
MODULE_ALIAS("acpi*:ELAN061D:*");
MODULE_ALIAS("acpi*:ELAN061E:*");
MODULE_ALIAS("acpi*:ELAN061F:*");
MODULE_ALIAS("acpi*:ELAN0620:*");
MODULE_ALIAS("acpi*:ELAN0621:*");
MODULE_ALIAS("acpi*:ELAN0622:*");
MODULE_ALIAS("acpi*:ELAN0623:*");
MODULE_ALIAS("acpi*:ELAN0624:*");
MODULE_ALIAS("acpi*:ELAN0625:*");
MODULE_ALIAS("acpi*:ELAN0626:*");
MODULE_ALIAS("acpi*:ELAN0627:*");
MODULE_ALIAS("acpi*:ELAN0628:*");
MODULE_ALIAS("acpi*:ELAN0629:*");
MODULE_ALIAS("acpi*:ELAN062A:*");
MODULE_ALIAS("acpi*:ELAN062B:*");
MODULE_ALIAS("acpi*:ELAN062C:*");
MODULE_ALIAS("acpi*:ELAN062D:*");
MODULE_ALIAS("acpi*:ELAN062E:*");
MODULE_ALIAS("acpi*:ELAN062F:*");
MODULE_ALIAS("acpi*:ELAN0631:*");
MODULE_ALIAS("acpi*:ELAN0632:*");
MODULE_ALIAS("acpi*:ELAN0633:*");
MODULE_ALIAS("acpi*:ELAN0634:*");
MODULE_ALIAS("acpi*:ELAN0635:*");
MODULE_ALIAS("acpi*:ELAN0636:*");
MODULE_ALIAS("acpi*:ELAN0637:*");
MODULE_ALIAS("acpi*:ELAN1000:*");
MODULE_ALIAS("i2c:elan_i2c");

MODULE_INFO(srcversion, "FBA5153E7EB18D8F8B8F781");
