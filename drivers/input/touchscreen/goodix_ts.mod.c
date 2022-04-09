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
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf9cd2564, "gpiod_direction_output" },
	{ 0x2fa42d74, "touchscreen_parse_properties" },
	{ 0x754d539c, "strlen" },
	{ 0x65f465d, "i2c_del_driver" },
	{ 0x5ae3c675, "regulator_disable" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x3f4fc704, "input_alloc_absinfo" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3db2e2e, "touchscreen_report_pos" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd167fc92, "input_set_abs_params" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x331337dc, "input_event" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3ca6873c, "acpi_dev_gpio_irq_get_by" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0x69eb3786, "device_property_read_string" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xf2247574, "gpiod_direction_input" },
	{ 0x69332c4d, "input_mt_init_slots" },
	{ 0xbed205fd, "gpiod_direction_output_raw" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf8db5365, "devm_acpi_dev_add_driver_gpios" },
	{ 0x1b34e8fd, "i2c_register_driver" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x7f319d8b, "devm_regulator_get" },
	{ 0x705970f5, "device_property_read_u32_array" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7decbec8, "acpi_dev_get_resources" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x18e3bbaf, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x65c32c34, "input_mt_report_slot_state" },
	{ 0x1564421, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8f048bb0, "input_mt_sync_frame" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xeff1f3dc, "regulator_enable" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:GDIX1001:*");
MODULE_ALIAS("acpi*:GDIX1002:*");
MODULE_ALIAS("i2c:GDIX1001:00");

MODULE_INFO(srcversion, "7B06A8C243692131E488619");
