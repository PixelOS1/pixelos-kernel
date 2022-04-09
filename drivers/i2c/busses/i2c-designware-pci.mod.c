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
	{ 0x3d6c5f15, "i2c_dw_probe_master" },
	{ 0xb0e1b529, "pci_free_irq_vectors" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0xa17ef8db, "set_primary_fwnode" },
	{ 0x6341a9de, "__pm_runtime_suspend" },
	{ 0x3f42da6d, "pcim_iomap_table" },
	{ 0x32cfe081, "dev_err_probe" },
	{ 0xfd76d81e, "i2c_detect_slave_mode" },
	{ 0x2d2afd51, "i2c_dw_configure_master" },
	{ 0x966947d7, "i2c_dw_validate_speed" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x4204d49b, "pci_alloc_irq_vectors_affinity" },
	{ 0x60941796, "i2c_new_client_device" },
	{ 0x3ef7ebe6, "i2c_dw_acpi_configure" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xf2b5efd, "pcim_iomap_regions" },
	{ 0xe6f65f72, "i2c_del_adapter" },
	{ 0xcbb3c845, "devm_free_irq" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4231d202, "i2c_dw_configure_slave" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x3903862d, "pci_irq_vector" },
	{ 0xdee9cc98, "i2c_dw_probe_slave" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xf78891ce, "i2c_dw_adjust_bus_speed" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa010ba68, "is_acpi_device_node" },
};

MODULE_INFO(depends, "i2c-designware-core,i2c-core");

MODULE_ALIAS("pci:v00008086d00000817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001195sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001196sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007314sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000073C4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9867921B27D9C52C573862B");
