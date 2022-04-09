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
	{ 0x78c2054, "param_ops_bool" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x5012a70, "pv_ops" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfc37562, "amd_smn_read" },
	{ 0x3d40a92d, "node_to_amd_nb" },
	{ 0x81221cad, "amd_nb_num" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf802070c, "pci_bus_read_config_dword" },
	{ 0xaaf50c56, "pci_bus_write_config_dword" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00001203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001303sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001703sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001403sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000141Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001573sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001583sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001463sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001493sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000144Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000014B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000167Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000166Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D94d00001463sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "14A256DFDD079707B954390");
