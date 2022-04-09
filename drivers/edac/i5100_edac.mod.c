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
	{ 0x92997ed8, "_printk" },
	{ 0xc9f446a5, "edac_mc_add_mc_with_groups" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5c6ddccc, "edac_mc_alloc" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9f58a58d, "edac_mc_handle_error" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x9b6d1082, "edac_mc_free" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0xbeeef990, "edac_mc_del_mc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000065F0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0FF07556B8724F39BBD8ED4");
