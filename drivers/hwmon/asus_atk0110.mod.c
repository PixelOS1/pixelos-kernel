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
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x49d74de6, "acpi_bus_unregister_driver" },
	{ 0xafe29401, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x92997ed8, "_printk" },
	{ 0xf4b754fd, "acpi_resources_are_enforced" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x7ac90ced, "debugfs_create_file_unsafe" },
	{ 0x39e60e9d, "debugfs_create_x32" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x536d56bd, "hwmon_device_register_with_groups" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6f488baa, "devm_kstrdup" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x8371509, "nonseekable_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ATK0110:*");

MODULE_INFO(srcversion, "1CD208372FDA54408BCDDD4");
