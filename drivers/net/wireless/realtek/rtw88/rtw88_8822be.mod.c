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
	{ 0x4bce76bb, "rtw_pci_probe" },
	{ 0xb753aa00, "rtw8822b_hw_spec" },
	{ 0x1eafbe36, "rtw_pci_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x99141d2c, "rtw_pci_remove" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd6741051, "rtw_pm_ops" },
};

MODULE_INFO(depends, "rtw88_pci,rtw88_8822b");

MODULE_ALIAS("pci:v000010ECd0000B822sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E51D1192F8F01CEC1D5919A");
