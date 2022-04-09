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
	{ 0xee111615, "param_ops_int" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x9f4f2aa3, "acpi_gbl_FADT" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x7e9c3c56, "thermal_zone_device_enable" },
	{ 0xff241572, "thermal_zone_device_register" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xb46f8f6b, "thermal_zone_device_unregister" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00009C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DF9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A379sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1B1sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B31E66F5BC241AF9586666E");
