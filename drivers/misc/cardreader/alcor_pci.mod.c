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
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x5a9b22b7, "mfd_remove_devices" },
	{ 0xb9d666a5, "pcim_iomap" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x9bb4e317, "ioread32be" },
	{ 0x5d9dfb8d, "mfd_add_devices" },
	{ 0xffb7c514, "ida_free" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "mfd-core");

MODULE_ALIAS("pci:v00001AEAd00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEAd00006621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEAd00006625sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BBC2465A1E310ECD3D580DC");
