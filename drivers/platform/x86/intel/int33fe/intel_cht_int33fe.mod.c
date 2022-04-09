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
	{ 0x7a9e4c23, "software_node_register_node_group" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x8ab3bee7, "fwnode_handle_put" },
	{ 0x9a908c6, "pci_get_class" },
	{ 0x2b7f79e0, "i2c_for_each_dev" },
	{ 0x1598fb9d, "device_get_named_child_node" },
	{ 0xdd64e639, "strscpy" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x61c7aabf, "acpi_dev_hid_uid_match" },
	{ 0x3ca6873c, "acpi_dev_gpio_irq_get_by" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x6a2f52d1, "i2c_acpi_client_count" },
	{ 0x8fc12788, "software_node_unregister_node_group" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd2493fc1, "device_reprobe" },
	{ 0x61a628af, "regulator_get_optional" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf51a6622, "regulator_put" },
	{ 0x4a423ad8, "dev_fwnode" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xda8e1302, "software_node_find_by_name" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xc2d283d4, "set_secondary_fwnode" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x7855a94f, "software_node_fwnode" },
	{ 0x6b9cd9e3, "i2c_acpi_new_device_by_fwnode" },
	{ 0xa010ba68, "is_acpi_device_node" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:INT33FE:*");

MODULE_INFO(srcversion, "FD775F55827BBFE1B52706C");
