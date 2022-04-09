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
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x2c499467, "platform_device_put" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x231a9a8f, "hwmon_device_register" },
	{ 0x2af975fa, "device_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xde80cd09, "ioremap" },
	{ 0x85bd1608, "__request_region" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xb19b445, "ioread8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5596d10, "device_remove_file" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000025F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004030sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7EF9CD0E0C97F2DA374EFE7");
