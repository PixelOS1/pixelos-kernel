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
	{ 0x591c0306, "_dev_notice" },
	{ 0xfbf394b, "devm_hwmon_device_register_with_info" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00003438sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "598C822278A4FB529F3F496");
