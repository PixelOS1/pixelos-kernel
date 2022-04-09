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
	{ 0x8acb43bf, "usb_hcd_pci_pm_ops" },
	{ 0x15a69b6a, "usb_hcd_pci_shutdown" },
	{ 0x9f9bf075, "usb_hcd_pci_remove" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd0a6e9f5, "ohci_resume" },
	{ 0x5679318a, "ohci_suspend" },
	{ 0x2ceaab7a, "ohci_init_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x9852f12f, "pci_get_slot" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf3357bee, "ohci_restart" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xd87fc0a0, "usb_amd_prefetch_quirk" },
	{ 0xaf4014ff, "usb_amd_quirk_pll_check" },
	{ 0x6e32225b, "ohci_setup" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0xc72eece2, "usb_hcd_pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ohci-hcd");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i10*");
MODULE_ALIAS("pci:v0000104Ad0000CC01sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DA88D98E2F43086A84E1E30");
