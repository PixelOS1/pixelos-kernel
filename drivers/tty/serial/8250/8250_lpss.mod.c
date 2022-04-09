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
	{ 0x69bb525b, "pci_try_set_mwi" },
	{ 0x6c204264, "dw_dma_probe" },
	{ 0xa7a199fb, "pci_ioremap_bar" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x3baa83fd, "serial8250_register_8250_port" },
	{ 0xb4d25a33, "dw8250_setup_port" },
	{ 0xb9d666a5, "pcim_iomap" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa193af22, "pci_set_master" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0x29e6423b, "dw_dma_remove" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x5a409463, "serial8250_do_get_mctrl" },
	{ 0x9852f12f, "pci_get_slot" },
	{ 0xdf6fec09, "dw8250_do_set_termios" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("pci:v00008086d00000936sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B96sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B97sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B99sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B9Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3E51B48C2EB82B9D16922C6");
