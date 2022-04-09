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
	{ 0x79439db1, "sof_apl_ops" },
	{ 0x4f09ac4d, "sof_pci_pm" },
	{ 0x377e2e26, "sof_pci_shutdown" },
	{ 0xae2bcd88, "snd_soc_acpi_intel_glk_machines" },
	{ 0xf26b380b, "apl_chip_info" },
	{ 0xcc6333ae, "sof_pci_remove" },
	{ 0x78790fcf, "snd_soc_acpi_intel_bxt_machines" },
	{ 0x5610a1fb, "hda_pci_intel_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
};

MODULE_INFO(depends, "snd-sof-intel-hda-common,snd-sof-pci,snd-soc-acpi-intel-match");

MODULE_ALIAS("pci:v00008086d00005A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003198sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E6421A86FEF8B2FD0361328");
