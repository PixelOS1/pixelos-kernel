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
	{ 0xaaea90fd, "bus_unregister_notifier" },
	{ 0x2b7f79e0, "i2c_for_each_dev" },
	{ 0x1511e6f3, "bus_register_notifier" },
	{ 0xbd27c502, "i2c_bus_type" },
	{ 0x53c089f5, "property_entries_dup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xbbd0bc89, "fwnode_remove_software_node" },
	{ 0x6ac34c66, "fwnode_create_software_node" },
	{ 0x92997ed8, "_printk" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a0cb78, "property_entries_free" },
	{ 0x268c8090, "device_remove_software_node" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x4b4666c0, "device_attach" },
	{ 0x429a0fcd, "i2c_client_type" },
	{ 0x496a8608, "i2c_adapter_type" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x38d8baf3, "device_add_software_node" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0xc88dc9c9, "i2c_unregister_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe7a3485c, "i2c_new_scanned_device" },
	{ 0x73c98c2d, "pci_bus_type" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("dmi*:svn*SAMSUNG*:pn*Lumpy*:");
MODULE_ALIAS("dmi*:pn*Alex*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Link*:");
MODULE_ALIAS("dmi*:bvn*coreboot*:pn*Wolf*:");
MODULE_ALIAS("dmi*:bvn*coreboot*:pn*Falco*:");
MODULE_ALIAS("dmi*:bvn*coreboot*:pn*Leon*:");
MODULE_ALIAS("dmi*:pn*Parrot*:");
MODULE_ALIAS("dmi*:pn*ZGB*:");
MODULE_ALIAS("dmi*:pn*Peppy*:");
MODULE_ALIAS("dmi*:pn*Butterfly*:");
MODULE_ALIAS("dmi*:pn*Mario*:");
MODULE_ALIAS("dmi*:svn*Google*:pn*Caroline*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Samus*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Celes*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:");

MODULE_INFO(srcversion, "6340820FDD98255262A2DCF");
