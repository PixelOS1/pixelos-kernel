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
	{ 0x1f0ca91d, "kobject_uevent_env" },
	{ 0xb26b8c8, "acpi_run_osc" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0x1887763e, "acpi_thermal_rel_misc_device_add" },
	{ 0xff241572, "thermal_zone_device_register" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf0f9fe0d, "acpi_parse_trt" },
	{ 0x9103c585, "acpi_parse_art" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x2921e434, "sysfs_create_file_ns" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x86c998e6, "acpi_thermal_rel_misc_device_remove" },
	{ 0xb46f8f6b, "thermal_zone_device_unregister" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0x37a0cba, "kfree" },
	{ 0x7408f66e, "sysfs_remove_file_ns" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x96848186, "scnprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "acpi_thermal_rel");

MODULE_ALIAS("acpi*:INT3400:*");
MODULE_ALIAS("acpi*:INTC1040:*");
MODULE_ALIAS("acpi*:INTC1041:*");
MODULE_ALIAS("acpi*:INTC10A0:*");

MODULE_INFO(srcversion, "43966E8051DD7FC97CA1896");
