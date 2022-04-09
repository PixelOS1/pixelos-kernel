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
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x2d7bdfc4, "platform_driver_unregister" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x11a6bdde, "__platform_create_bundle" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0xb0e602eb, "memmove" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x5a921311, "strncmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xa0823d85, "__devm_request_region" },
	{ 0x9578a9be, "platform_get_resource" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5012a70, "pv_ops" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x92997ed8, "_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hwmon-vid");


MODULE_INFO(srcversion, "60F20B7E73EA96D744900EF");
