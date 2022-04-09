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
	{ 0x92997ed8, "_printk" },
	{ 0xb1f9e033, "__gameport_register_port" },
	{ 0x85bd1608, "__request_region" },
	{ 0x3789f55c, "gameport_set_phys" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xcfdc00b6, "gameport_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gameport");

MODULE_ALIAS("pci:v00001102d00007002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00007003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00007004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00007005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "98172AEDC65AACCC05E9E77");
