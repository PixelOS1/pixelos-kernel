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
	{ 0xbeeef990, "edac_mc_del_mc" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x9b6d1082, "edac_mc_free" },
	{ 0xc9f446a5, "edac_mc_add_mc_with_groups" },
	{ 0x5c6ddccc, "edac_mc_alloc" },
	{ 0x497378b8, "pci_find_bus" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5ab09745, "edac_get_owner" },
	{ 0x9f58a58d, "edac_mc_handle_error" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6bd160a, "pci_write_config_byte" },
	{ 0xedc03953, "iounmap" },
	{ 0xde80cd09, "ioremap" },
	{ 0xb8ee354f, "pci_read_config_byte" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xba8b44f2, "pci_bus_write_config_byte" },
	{ 0xf802070c, "pci_bus_read_config_dword" },
	{ 0xcc494a44, "pci_bus_write_config_word" },
	{ 0xaaf50c56, "pci_bus_write_config_dword" },
	{ 0x51cf315a, "pci_bus_read_config_word" },
	{ 0x86afab43, "pci_bus_read_config_byte" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005F:feature:*");

MODULE_INFO(srcversion, "92DED71D08B20EBE5C6450A");
