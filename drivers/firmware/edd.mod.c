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
	{ 0x9703bca3, "kset_unregister" },
	{ 0x2ec97348, "kobject_put" },
	{ 0x9316b04c, "kobject_uevent" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xfa2a4fda, "sysfs_create_link" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0x2921e434, "sysfs_create_file_ns" },
	{ 0xa980d013, "kobject_init_and_add" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x23c1cf32, "kset_create_and_add" },
	{ 0xeae811a7, "firmware_kobj" },
	{ 0x92997ed8, "_printk" },
	{ 0x754d539c, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x607b34f1, "edd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4D81E6B244B265DA9CE2472");
