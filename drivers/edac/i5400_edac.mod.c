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
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xd5652091, "pci_disable_device" },
	{ 0xbeeef990, "edac_mc_del_mc" },
	{ 0x31c9bc96, "edac_pci_release_generic_ctl" },
	{ 0x9b6d1082, "edac_mc_free" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xd53f9ddc, "edac_pci_create_generic_ctl" },
	{ 0xc9f446a5, "edac_mc_add_mc_with_groups" },
	{ 0x37a0cba, "kfree" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x5c6ddccc, "edac_mc_alloc" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0xbbd529c5, "pci_read_config_word" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9f58a58d, "edac_mc_handle_error" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00004030sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0CEE49CD2FF24EB43BCF9AC");
