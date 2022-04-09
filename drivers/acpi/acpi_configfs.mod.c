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
	{ 0xab33f994, "configfs_unregister_default_group" },
	{ 0x49ad35e8, "configfs_unregister_subsystem" },
	{ 0x5bf3d26b, "configfs_register_default_group" },
	{ 0x22b63fdd, "configfs_register_subsystem" },
	{ 0x1b7be489, "config_group_init" },
	{ 0xba8305fa, "config_item_init_type_name" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4715a909, "acpi_load_table" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb3f9e0ab, "security_locked_down" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x92997ed8, "_printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xec01f426, "config_item_put" },
	{ 0xf7da6e6f, "acpi_unload_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "configfs");


MODULE_INFO(srcversion, "2D95D2ECB31546319DA77C2");
