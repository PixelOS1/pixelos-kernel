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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xe4345174, "single_open" },
	{ 0x9b02585d, "single_release" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xd349d253, "seq_printf" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x94216657, "seq_read" },
	{ 0x5012a70, "pv_ops" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xde80cd09, "ioremap" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x3a6a0e57, "debugfs_create_bool" },
	{ 0x7483dc59, "pci_dev_present" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0xad137d3, "lpit_read_residency_count_address" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfc03d97a, "page_is_ram" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0066:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A5:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A6:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0096:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod00A7:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0097:feature:*");
MODULE_ALIAS("acpi*:INT33A1:*");

MODULE_INFO(srcversion, "2F0C9F75D048E6FE8BABF22");
