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
	{ 0x420f71cc, "xillybus_endpoint_discovery" },
	{ 0xa3c11bf8, "dma_set_mask" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x25978d50, "xillybus_isr" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xa0965042, "pci_disable_link_state" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x98f6f12b, "xillybus_init_endpoint" },
	{ 0x940ce171, "xillybus_endpoint_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xillybus_core");

MODULE_ALIAS("pci:v000010EEd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001172d0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011AAd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001204d0000EBEBsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E80B69D2F76434F90025B2B");
