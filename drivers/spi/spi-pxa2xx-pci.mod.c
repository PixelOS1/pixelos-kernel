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
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x5d5f5d8e, "clk_register_fixed_rate" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x9852f12f, "pci_get_slot" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000935sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001194sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E6Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E7D1BEF740C2F09ED162370");
