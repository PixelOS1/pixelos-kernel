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
	{ 0xb8bbb68d, "snd_soc_acpi_intel_icl_sdw_machines" },
	{ 0xc8ffec29, "icl_chip_info" },
	{ 0x4f09ac4d, "sof_pci_pm" },
	{ 0x996f28, "jsl_chip_info" },
	{ 0x377e2e26, "sof_pci_shutdown" },
	{ 0x2b30d9bf, "snd_soc_acpi_intel_icl_machines" },
	{ 0x4f593824, "snd_soc_acpi_intel_jsl_machines" },
	{ 0xcc6333ae, "sof_pci_remove" },
	{ 0xc877d5f, "sof_cnl_ops" },
	{ 0x5610a1fb, "hda_pci_intel_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xfc900057, "sof_icl_ops" },
};

MODULE_INFO(depends, "snd-soc-acpi-intel-match,snd-sof-intel-hda-common,snd-sof-pci");

MODULE_ALIAS("pci:v00008086d000034C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000038C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "12AC407A8881D4CC1C97BB5");
