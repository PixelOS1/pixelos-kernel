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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xec9acbfb, "register_sja1000dev" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd2d5114f, "alloc_sja1000dev" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x61628d30, "free_sja1000dev" },
	{ 0x5b00552a, "unregister_sja1000dev" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sja1000");

MODULE_ALIAS("pci:v0000110Ad00002104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00004000bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00004002bc*sc*i*");

MODULE_INFO(srcversion, "D1F51EAE69D268AB1EFC015");
