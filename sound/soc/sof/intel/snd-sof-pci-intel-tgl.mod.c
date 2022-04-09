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
	{ 0x4f09ac4d, "sof_pci_pm" },
	{ 0xef6100be, "sof_tgl_ops" },
	{ 0x377e2e26, "sof_pci_shutdown" },
	{ 0x5c3c2a7, "ehl_chip_info" },
	{ 0x200a3806, "tglh_chip_info" },
	{ 0xcc6333ae, "sof_pci_remove" },
	{ 0x2b3a2bd6, "snd_soc_acpi_intel_tgl_machines" },
	{ 0x5610a1fb, "hda_pci_intel_probe" },
	{ 0xdb549933, "snd_soc_acpi_intel_adl_sdw_machines" },
	{ 0xe4f39a53, "snd_soc_acpi_intel_ehl_machines" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x560475eb, "adls_chip_info" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xb23a4130, "snd_soc_acpi_intel_tgl_sdw_machines" },
	{ 0xd90eca88, "tgl_chip_info" },
	{ 0xe10dead5, "snd_soc_acpi_intel_adl_machines" },
};

MODULE_INFO(depends, "snd-sof-pci,snd-sof-intel-hda-common,snd-soc-acpi-intel-match");

MODULE_ALIAS("pci:v00008086d0000A0C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000051CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000054C8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D0F397796CB9F44746C51D4");
