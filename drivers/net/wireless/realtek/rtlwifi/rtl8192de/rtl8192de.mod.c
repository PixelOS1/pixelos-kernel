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
	{ 0xc319ce0c, "rtl_cam_delete_one_entry" },
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0x8ea60059, "rtl_fw_cb" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x5c8788e2, "rtl_pci_probe" },
	{ 0xfaa651db, "rtl_cam_get_free_entry" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x9c444ba2, "rtl_dm_diginit" },
	{ 0xd9fefb6f, "rtl_ps_disable_nic" },
	{ 0xf1f9ba01, "rtl_get_tcb_desc" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x1415a18d, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdbcc9d3, "rtl_phy_scan_operation_backup" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xe1944e7f, "rtl_pci_resume" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x3fe0091e, "rtl_ps_enable_nic" },
	{ 0xba4f99f2, "rtl_get_hwinfo" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2921a4d4, "rtl_btc_status_false" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0x359db7c1, "rtl_fw_page_write" },
	{ 0x125ea8db, "rtl_signal_scale_mapping" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0x3921609f, "rtl_pci_suspend" },
	{ 0xd0bb2715, "rtlwifi_rate_mapping" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcc209ac1, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x83ca0ad3, "rtl_rfreg_delay" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb99a4c2, "rtl_cam_mark_invalid" },
	{ 0x54824f58, "channel5g" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xec591d6e, "rtl_cam_del_entry" },
	{ 0x4464aab, "rtl_cam_empty_entry" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x37731173, "rtl_cam_reset_all_entry" },
	{ 0x24e48d13, "skb_put" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0xbe4ed559, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci");

MODULE_ALIAS("pci:v000010ECd00008193sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000002Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "39AE104E4230DB7A6EBEBD9");
