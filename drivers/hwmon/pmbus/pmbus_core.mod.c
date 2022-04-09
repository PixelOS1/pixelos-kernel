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
	{ 0x7410aba2, "strreplace" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x732b0d5d, "i2c_smbus_read_byte_data" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xee15abe8, "i2c_smbus_write_word_data" },
	{ 0xe364a09e, "devm_krealloc" },
	{ 0x475d5f6c, "i2c_smbus_write_byte_data" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xe9058da2, "i2c_smbus_read_word_data" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4d1153b, "i2c_smbus_write_byte" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe7f8e5b7, "rdev_get_id" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0x9c35d684, "devm_add_action" },
	{ 0x8df14a40, "i2c_smbus_xfer" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6f488baa, "devm_kstrdup" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xad1de7a1, "rdev_get_dev" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xf350a2ce, "devm_regulator_register" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x45db6081, "simple_attr_open" },
};

MODULE_INFO(depends, "i2c-core");


MODULE_INFO(srcversion, "0BD6FC57C1F3B2A3671B141");
