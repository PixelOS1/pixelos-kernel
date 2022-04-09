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
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4da92a59, "dw_edma_probe" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x6b935445, "pci_find_vsec_capability" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0x7e3b0a3e, "dw_edma_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dw-edma");

MODULE_ALIAS("pci:v000016C3d0000EDDAsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B59F02546446C774A4273EC");
