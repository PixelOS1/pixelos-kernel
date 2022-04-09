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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x2a3b34f4, "ehci_suspend" },
	{ 0x8bb579db, "ehci_init_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x5685197c, "ehci_resume" },
	{ 0x8e0ecc69, "device_set_wakeup_capable" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x33832c7, "usb_amd_hang_symptom_quirk" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xaf4014ff, "usb_amd_quirk_pll_check" },
	{ 0xec4ab464, "pci_set_mwi" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x31efc227, "ehci_setup" },
	{ 0xef731740, "pci_find_capability" },
	{ 0x3e53ff7e, "dma_set_coherent_mask" },
	{ 0xc72eece2, "usb_hcd_pci_probe" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0x9f9bf075, "usb_hcd_pci_remove" },
	{ 0x68d03a6, "pci_clear_mwi" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ehci-hcd");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i20*");
MODULE_ALIAS("pci:v0000104Ad0000CC00sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CEADA583DFF8B23B3B14E91");
