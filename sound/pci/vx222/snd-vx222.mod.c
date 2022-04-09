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
	{ 0xf9a482f9, "msleep" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xee111615, "param_ops_int" },
	{ 0x5027ce7c, "snd_vx_resume" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x1c265205, "snd_vx_dsp_boot" },
	{ 0xc10b1988, "snd_vx_dsp_load" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe520adf, "snd_devm_card_new" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0xa193af22, "pci_set_master" },
	{ 0x612ea255, "snd_vx_suspend" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x90333d61, "snd_vx_create" },
	{ 0xf1f04d23, "snd_vx_irq_handler" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xcb0b7bad, "snd_ctl_new1" },
	{ 0x226138b0, "snd_vx_threaded_irq_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x4aded579, "pci_request_regions" },
	{ 0xcd3e0e71, "param_array_ops" },
	{ 0xd9746f33, "snd_vx_setup_firmware" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xca691c4e, "snd_card_register" },
	{ 0xb74b614, "snd_ctl_add" },
	{ 0x12566df4, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd-vx-lib,snd");

MODULE_ALIAS("pci:v000010B5d00009050sv00001369sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001369sd*bc*sc*i*");

MODULE_INFO(srcversion, "9DF7472B9551A714A7FAE2C");
