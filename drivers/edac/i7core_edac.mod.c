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
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0x9b9f3648, "pcibios_scan_specific_bus" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xd53f9ddc, "edac_pci_create_generic_ctl" },
	{ 0xf5c5e04e, "device_add" },
	{ 0xf53c7135, "dev_set_name" },
	{ 0x8e4ac542, "device_initialize" },
	{ 0xc9f446a5, "edac_mc_add_mc_with_groups" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5c6ddccc, "edac_mc_alloc" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x1905849, "pci_find_next_bus" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0x9b6d1082, "edac_mc_free" },
	{ 0xbeeef990, "edac_mc_del_mc" },
	{ 0x761527a1, "put_device" },
	{ 0x339c0a66, "device_del" },
	{ 0x31c9bc96, "edac_pci_release_generic_ctl" },
	{ 0x92997ed8, "_printk" },
	{ 0x9f58a58d, "edac_mc_handle_error" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000342Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002C90sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5329A714115E5F4A38A39F3");
