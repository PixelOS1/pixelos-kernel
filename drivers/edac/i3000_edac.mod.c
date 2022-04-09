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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x9f58a58d, "edac_mc_handle_error" },
	{ 0xed694e21, "edac_mc_find_csrow_by_page" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0xd53f9ddc, "edac_pci_create_generic_ctl" },
	{ 0xc9f446a5, "edac_mc_add_mc_with_groups" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x5c6ddccc, "edac_mc_alloc" },
	{ 0xedc03953, "iounmap" },
	{ 0xde80cd09, "ioremap" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x9b6d1082, "edac_mc_free" },
	{ 0xbeeef990, "edac_mc_del_mc" },
	{ 0x31c9bc96, "edac_pci_release_generic_ctl" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00002778sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FFACE5497D26A1CC70ECFD6");
