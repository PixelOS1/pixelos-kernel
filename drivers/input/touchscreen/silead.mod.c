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
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0x2fa42d74, "touchscreen_parse_properties" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x738874cb, "__pm_runtime_disable" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0xcd4a5c56, "pm_runtime_enable" },
	{ 0xc567e3aa, "__pm_runtime_set_status" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x671351c, "regulator_bulk_enable" },
	{ 0x401e43c5, "devm_regulator_bulk_get" },
	{ 0x81f466c5, "device_property_present" },
	{ 0x69eb3786, "device_property_read_string" },
	{ 0xa916b694, "strnlen" },
	{ 0x11089ac7, "_ctype" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x957d98c6, "gpiod_set_value_cansleep" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x86fcf6dc, "regulator_bulk_disable" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0xb670b8a1, "input_mt_assign_slots" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x331337dc, "input_event" },
	{ 0x731cb5d4, "i2c_smbus_read_i2c_block_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xf13baf75, "firmware_request_platform" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xef2f45f3, "i2c_smbus_write_i2c_block_data" },
	{ 0x4c681602, "firmware_request_nowarn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:GSL1680:*");
MODULE_ALIAS("acpi*:GSL1688:*");
MODULE_ALIAS("acpi*:GSL3670:*");
MODULE_ALIAS("acpi*:GSL3675:*");
MODULE_ALIAS("acpi*:GSL3692:*");
MODULE_ALIAS("acpi*:MSSL1680:*");
MODULE_ALIAS("acpi*:MSSL0001:*");
MODULE_ALIAS("acpi*:MSSL0002:*");
MODULE_ALIAS("acpi*:MSSL0017:*");
MODULE_ALIAS("i2c:gsl1680");
MODULE_ALIAS("i2c:gsl1688");
MODULE_ALIAS("i2c:gsl3670");
MODULE_ALIAS("i2c:gsl3675");
MODULE_ALIAS("i2c:gsl3692");
MODULE_ALIAS("i2c:mssl1680");

MODULE_INFO(srcversion, "0FFFC2F36472814BD61694B");
