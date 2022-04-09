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
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x8adca48b, "pci_match_id" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xac1e1dd9, "devm_watchdog_register_device" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x2cc3d8f8, "watchdog_init_timeout" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001002d00004385sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000790Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "81D92674A5CBBA60B7CE2D2");
