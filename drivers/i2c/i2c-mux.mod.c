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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x673880f, "rt_mutex_lock" },
	{ 0xa17ef8db, "set_primary_fwnode" },
	{ 0x89937627, "i2c_transfer" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5c8bb90c, "i2c_add_adapter" },
	{ 0xfb31eede, "__i2c_smbus_xfer" },
	{ 0xa142e3d5, "rt_mutex_trylock" },
	{ 0xae4a5e49, "rt_mutex_unlock" },
	{ 0xbb99e571, "sysfs_remove_link" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x496a8608, "i2c_adapter_type" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8df14a40, "i2c_smbus_xfer" },
	{ 0x19db7fed, "i2c_add_numbered_adapter" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfa174f0b, "acpi_find_child_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x638b65f1, "__i2c_transfer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa010ba68, "is_acpi_device_node" },
};

MODULE_INFO(depends, "i2c-core");


MODULE_INFO(srcversion, "7BED06BCD5A3F14A81CCD58");
