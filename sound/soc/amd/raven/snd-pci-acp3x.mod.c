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
	{ 0x51ca8276, "__pm_runtime_use_autosuspend" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3cb4a8, "pci_release_regions" },
	{ 0xa8dd6979, "pm_runtime_allow" },
	{ 0x1ae2b9be, "platform_device_register_full" },
	{ 0xc5d9d883, "pm_runtime_forbid" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x78e41981, "platform_device_unregister" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0x5e959dd0, "devm_ioremap" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x484f3848, "pm_runtime_set_autosuspend_delay" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d000015E2sv*sd*bc04sc80i00*");

MODULE_INFO(srcversion, "3088CB4A0F6300D2CB6538C");
