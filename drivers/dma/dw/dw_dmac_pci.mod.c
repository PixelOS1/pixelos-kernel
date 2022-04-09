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
	{ 0x1ee3e902, "idma32_dma_probe" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x6c204264, "dw_dma_probe" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xfd7d58c5, "dw_dma_acpi_controller_register" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x29e6423b, "dw_dma_remove" },
	{ 0x163ecea4, "do_dw_dma_enable" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x92f71b5a, "devm_kmemdup" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xefe0c5c2, "do_dw_dma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x69bb525b, "pci_try_set_mwi" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x15727ee9, "idma32_dma_remove" },
	{ 0x2fb02c98, "dw_dma_acpi_controller_free" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("pci:v00008086d00000827sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000011A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002286sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0A27B6C2D1626D8A6B5BF70");
