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
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x231a9a8f, "hwmon_device_register" },
	{ 0xa4dfc51c, "sysfs_create_group" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5012a70, "pv_ops" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x2c499467, "platform_device_put" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0xfd36bc29, "platform_device_add" },
	{ 0xf1858ff3, "platform_device_add_resources" },
	{ 0x6b03a735, "platform_device_alloc" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x416d3e65, "__platform_driver_register" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8477a06c, "sysfs_remove_group" },
	{ 0xe734c844, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001106d00008235sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "95AA79882CCDC7D034F206C");
