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
	{ 0xbe1a4d8, "amd_unregister_ecc_decoder" },
	{ 0x31c9bc96, "edac_pci_release_generic_ctl" },
	{ 0x3441445f, "msrs_free" },
	{ 0xd53f9ddc, "edac_pci_create_generic_ctl" },
	{ 0x8592d892, "amd_register_ecc_decoder" },
	{ 0xefeafcf1, "edac_has_mcs" },
	{ 0xc9f446a5, "edac_mc_add_mc_with_groups" },
	{ 0x5c6ddccc, "edac_mc_alloc" },
	{ 0xfc37562, "amd_smn_read" },
	{ 0x5012a70, "pv_ops" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xf5a5c84c, "msrs_alloc" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xd919806a, "amd_cache_northbridges" },
	{ 0xcea381dd, "x86_match_cpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5ab09745, "edac_get_owner" },
	{ 0x9b6d1082, "edac_mc_free" },
	{ 0xbeeef990, "edac_mc_del_mc" },
	{ 0x9f58a58d, "edac_mc_handle_error" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xfdcb8001, "edac_mc_find" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xf4a565fd, "wrmsr_on_cpus" },
	{ 0xf05c32ad, "rdmsr_on_cpus" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6e841389, "cpu_info" },
	{ 0x3682fb32, "pci_get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ea9cee3, "pci_dev_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfab07106, "pci_read_config_dword" },
	{ 0x485b75ad, "pci_write_config_dword" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3d40a92d, "node_to_amd_nb" },
	{ 0x81221cad, "amd_nb_num" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "edac_mce_amd");

MODULE_ALIAS("cpu:type:x86,ven0002fam000Fmod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0010mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0015mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0016mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0017mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0009fam0018mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0019mod*:feature:*");

MODULE_INFO(srcversion, "851DDAA79EAA7902C07E538");
