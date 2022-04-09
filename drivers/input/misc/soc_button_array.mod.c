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
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x89e4046, "devm_kfree" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0xb2922cca, "gpiod_put" },
	{ 0x83e74f02, "gpiod_to_irq" },
	{ 0x4edb97c5, "desc_to_gpio" },
	{ 0x411f7cad, "gpiod_get_index" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9ff4aa3f, "gpiod_count" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x185a8851, "acpi_device_get_match_data" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C40:*");
MODULE_ALIAS("acpi*:INT33D3:*");
MODULE_ALIAS("acpi*:ID9001:*");
MODULE_ALIAS("acpi*:ACPI0011:*");
MODULE_ALIAS("acpi*:MSHW0040:*");

MODULE_INFO(srcversion, "ADD68AC28D19A0172E850D7");
