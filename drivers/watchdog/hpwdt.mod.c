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
	{ 0xee111615, "param_ops_int" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x40715144, "watchdog_unregister_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb3a2dfdf, "nmi_panic" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x47c53a64, "pci_iounmap" },
	{ 0xd54e0fa0, "watchdog_register_device" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x2cc3d8f8, "watchdog_init_timeout" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xe64ad8ea, "unregister_nmi_handler" },
	{ 0xde4eeab5, "__register_nmi_handler" },
	{ 0xb19b445, "ioread8" },
	{ 0x607013d5, "pci_iomap" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00000E11d0000B203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000389sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "489C4C0CFD04E27E5C75561");
