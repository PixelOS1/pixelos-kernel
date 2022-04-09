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
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x81f466c5, "device_property_present" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xefc7653c, "input_allocate_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5a921311, "strncmp" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x1564421, "request_firmware" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9ae07425, "irq_get_irq_data" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc851d33a, "input_mt_report_pointer_emulation" },
	{ 0xa6257a2f, "complete" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x331337dc, "input_event" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x34340150, "gpiod_set_value" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x794d1829, "input_device_enabled" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0x648cb6e6, "input_unregister_device" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5a5574e4, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x96848186, "scnprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:qt602240_ts");
MODULE_ALIAS("i2c:atmel_mxt_ts");
MODULE_ALIAS("i2c:atmel_mxt_tp");
MODULE_ALIAS("i2c:maxtouch");
MODULE_ALIAS("i2c:mXT224");
MODULE_ALIAS("acpi*:ATML0000:*");
MODULE_ALIAS("acpi*:ATML0001:*");
MODULE_ALIAS("of:N*T*Catmel,maxtouch");
MODULE_ALIAS("of:N*T*Catmel,maxtouchC*");
MODULE_ALIAS("of:N*T*Catmel,qt602240_ts");
MODULE_ALIAS("of:N*T*Catmel,qt602240_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_ts");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tp");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tpC*");
MODULE_ALIAS("of:N*T*Catmel,mXT224");
MODULE_ALIAS("of:N*T*Catmel,mXT224C*");

MODULE_INFO(srcversion, "55AA5888D3C0D29CA1D40CD");
