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
	{ 0x8af62e49, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x386c06ff, "pci_enable_msi" },
	{ 0xb7dcf911, "intel_soc_dts_iosf_init" },
	{ 0xc7edd92d, "proc_thermal_mmio_add" },
	{ 0xa0ea8372, "proc_thermal_add" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x58f23253, "intel_soc_dts_iosf_interrupt_handler" },
	{ 0xd6600992, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x88b9a5d4, "proc_thermal_remove" },
	{ 0xf15c05c3, "proc_thermal_mmio_remove" },
	{ 0x168b127c, "intel_soc_dts_iosf_exit" },
	{ 0xecff9d89, "proc_thermal_suspend" },
	{ 0x124560e5, "proc_thermal_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_soc_dts_iosf,processor_thermal_device");

MODULE_ALIAS("pci:v00008086d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E83sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000318Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004E03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009A03sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1D4B7568AEB59E9F3DBA25F");
