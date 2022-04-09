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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xbc556315, "sysfs_notify" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x231a9a8f, "hwmon_device_register" },
	{ 0x2af975fa, "device_create_file" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0x80855a13, "acpi_bus_get_acpi_device" },
	{ 0xa2c56cf2, "kobject_create_and_add" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x9166fada, "strncpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5f93525c, "acpi_extract_package" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x426452a3, "acpi_evaluation_failure_warn" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2ec97348, "kobject_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x761527a1, "put_device" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000D:*");

MODULE_INFO(srcversion, "D3C2F1D47210E91FB2DBC4F");
