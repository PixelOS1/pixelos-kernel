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
	{ 0x9a82a6d8, "acpi_create_platform_device" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x6bdef35c, "acpi_ec_mark_gpe_for_wake" },
	{ 0xdc966f00, "acpi_bus_get_device" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x6938a1bf, "sparse_keymap_setup" },
	{ 0x5bc8fa81, "acpi_match_device_ids" },
	{ 0x331337dc, "input_event" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x6a8b9c9f, "sparse_keymap_report_event" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0x6a2f52d1, "i2c_acpi_client_count" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x761527a1, "put_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xb7214e95, "pm_wakeup_dev_event" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x4015f710, "sparse_keymap_entry_from_scancode" },
	{ 0x406c510c, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "sparse-keymap,i2c-core");

MODULE_ALIAS("acpi*:INT33D5:*");
MODULE_ALIAS("acpi*:INTC1051:*");
MODULE_ALIAS("acpi*:INTC1054:*");
MODULE_ALIAS("acpi*:INTC1070:*");

MODULE_INFO(srcversion, "82920944D296B89EF650240");
