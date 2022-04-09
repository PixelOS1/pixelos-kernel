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
	{ 0xfd5f20cf, "generic_handle_domain_irq" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x12566df4, "devm_request_threaded_irq" },
	{ 0x8b649654, "devm_gpiochip_add_data_with_key" },
	{ 0x27ecdc7f, "handle_edge_irq" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb14fc46a, "find_next_clump8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb19b445, "ioread8" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf92c8476, "gpiochip_get_data" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000494Fd00000DC8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D008CE442CCE73253589020");
