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
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x2c499467, "platform_device_put" },
	{ 0x8ad754d, "platform_device_del" },
	{ 0xc0fceb2f, "__platform_driver_probe" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0xbdd7d809, "acpi_initialize_hp_context" },
	{ 0x4f77d6c6, "input_free_device" },
	{ 0xc7d30f91, "input_register_device" },
	{ 0xcac3c3a6, "input_set_capability" },
	{ 0xba123634, "devm_input_allocate_device" },
	{ 0xf9c36f5, "acpi_bus_trim" },
	{ 0xdf918de4, "bus_for_each_dev" },
	{ 0xc7f6572a, "platform_bus_type" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x331337dc, "input_event" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x5a921311, "strncmp" },
	{ 0xdc966f00, "acpi_bus_get_device" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xda096e40, "acpi_device_hid" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x49b163b8, "acpi_bus_scan" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi");


MODULE_INFO(srcversion, "D1D333E9DD95527F6472C61");
