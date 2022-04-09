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
	{ 0xb2915f71, "snd_soc_acpi_intel_cfl_machines" },
	{ 0x4f09ac4d, "sof_pci_pm" },
	{ 0xc72c75ba, "snd_soc_acpi_intel_cml_sdw_machines" },
	{ 0x377e2e26, "sof_pci_shutdown" },
	{ 0x105644bf, "snd_soc_acpi_intel_cnl_machines" },
	{ 0x5de456cc, "cnl_chip_info" },
	{ 0xcfdcb82b, "snd_soc_acpi_intel_cnl_sdw_machines" },
	{ 0xcc6333ae, "sof_pci_remove" },
	{ 0xc877d5f, "sof_cnl_ops" },
	{ 0x5610a1fb, "hda_pci_intel_probe" },
	{ 0xe84a74cc, "snd_soc_acpi_intel_cml_machines" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf55eeec2, "snd_soc_acpi_intel_cfl_sdw_machines" },
	{ 0xe0befba6, "__pci_register_driver" },
};

MODULE_INFO(depends, "snd-soc-acpi-intel-match,snd-sof-pci,snd-sof-intel-hda-common");

MODULE_ALIAS("pci:v00008086d00009DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A348sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3F0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "51499E24F13C91DE162ABE7");
