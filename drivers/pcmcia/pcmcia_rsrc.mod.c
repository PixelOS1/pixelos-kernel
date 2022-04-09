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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xee111615, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0xc5e74216, "release_resource" },
	{ 0xd474fdbc, "pcmcia_socket_class" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5c9df047, "pci_bus_alloc_resource" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0xd68c5a1f, "adjust_resource" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xf0240fcb, "class_interface_register" },
	{ 0xde80cd09, "ioremap" },
	{ 0xa41ee6e0, "class_interface_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x5c0798d, "pci_find_parent_resource" },
	{ 0x13110126, "request_resource" },
};

MODULE_INFO(depends, "pcmcia_core");


MODULE_INFO(srcversion, "56E8DD42E9102CE9439CF81");
