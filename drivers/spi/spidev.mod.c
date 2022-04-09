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
	{ 0x73fec674, "param_ops_uint" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0xb3153dca, "driver_unregister" },
	{ 0x4195254f, "class_destroy" },
	{ 0xaaa81e4, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x1aafecfe, "__class_create" },
	{ 0x3be38d4c, "__register_chrdev" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xf752e98c, "acpi_match_device" },
	{ 0x4dce8ff3, "device_create" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa010ba68, "is_acpi_device_node" },
	{ 0x90ce49bd, "device_destroy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x761527a1, "put_device" },
	{ 0x52345e6e, "spi_setup" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x16e6d67f, "get_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x43469f8e, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa0a0cb18, "stream_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SPT0001:*");
MODULE_ALIAS("acpi*:SPT0002:*");
MODULE_ALIAS("acpi*:SPT0003:*");
MODULE_ALIAS("spi:dh2228fv");
MODULE_ALIAS("spi:ltc2488");
MODULE_ALIAS("spi:sx1301");
MODULE_ALIAS("spi:bk4");
MODULE_ALIAS("spi:dhcom-board");
MODULE_ALIAS("spi:m53cpld");
MODULE_ALIAS("spi:spi-petra");
MODULE_ALIAS("spi:spi-authenta");

MODULE_INFO(srcversion, "6EE32A6796F0C91CA7383B2");
