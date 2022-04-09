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
	{ 0x3682fb32, "pci_get_device" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x92997ed8, "_printk" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0xc9f446a5, "edac_mc_add_mc_with_groups" },
	{ 0xde80cd09, "ioremap" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x5c6ddccc, "edac_mc_alloc" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9f58a58d, "edac_mc_handle_error" },
	{ 0xb549cce9, "pci_write_config_word" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0x9b6d1082, "edac_mc_free" },
	{ 0xedc03953, "iounmap" },
	{ 0xbeeef990, "edac_mc_del_mc" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000010Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000158sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000015Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001918sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005918sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E32sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E33sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003EC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003EC6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003ECAsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "29E71A35656299A5D4D04B7");
