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
	{ 0xc9f446a5, "edac_mc_add_mc_with_groups" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xee111615, "param_ops_int" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0xe2e1d20f, "pci_dev_get" },
	{ 0x1038b96f, "adxl_get_component_names" },
	{ 0x95ef1ccc, "dmi_memdev_size" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde80cd09, "ioremap" },
	{ 0x9f58a58d, "edac_mc_handle_error" },
	{ 0x2901806, "pci_get_domain_bus_and_slot" },
	{ 0x9b6d1082, "edac_mc_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5c6ddccc, "edac_mc_alloc" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x499bbf57, "nfit_get_smbios_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x791748c8, "adxl_decode" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0xbeeef990, "edac_mc_del_mc" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa5008494, "pci_enable_device" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0x5ab09745, "edac_get_owner" },
};

MODULE_INFO(depends, "nfit");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0086:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0086:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008F:feature:*");

MODULE_INFO(srcversion, "2187D4DAE2C5299D9EEF0E5");
