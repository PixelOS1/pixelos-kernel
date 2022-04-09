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
	{ 0xd5a73a26, "isst_if_cdev_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9a48bcc6, "pcim_enable_device" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x9a5c38f2, "isst_store_cmd" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x165d3335, "isst_if_get_pci_dev" },
	{ 0x6f7821f, "isst_if_mbox_cmd_set_req" },
	{ 0x58a8261f, "isst_if_mbox_cmd_invalid" },
	{ 0xe18f42a5, "isst_if_cdev_unregister" },
	{ 0x861369f8, "isst_resume_common" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "isst_if_common");

MODULE_ALIAS("pci:v00008086d00003459sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003259sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8BE40666B8AF26331769CF4");
