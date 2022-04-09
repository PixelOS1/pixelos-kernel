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
	{ 0x5348769c, "rtl_btc_get_ops_pointer" },
	{ 0xd1dda7d3, "rtl_hal_pwrseqcmdparsing" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
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
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xe1944e7f, "rtl_pci_resume" },
	{ 0x3fe0091e, "rtl_ps_enable_nic" },
	{ 0xba4f99f2, "rtl_get_hwinfo" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb038e24, "channel5g_80m" },
	{ 0x459f3f88, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x359db7c1, "rtl_fw_page_write" },
	{ 0x125ea8db, "rtl_signal_scale_mapping" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0x1308e9e0, "rtl_set_tx_report" },
	{ 0x3921609f, "rtl_pci_suspend" },
	{ 0xd0bb2715, "rtlwifi_rate_mapping" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcc209ac1, "rtl_pci_disconnect" },
	{ 0x91306bb7, "rtl_cmd_send_packet" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0xc50f2e3b, "ieee80211_find_sta" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb99a4c2, "rtl_cam_mark_invalid" },
	{ 0x54824f58, "channel5g" },
	{ 0xf44de810, "efuse_one_byte_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xec591d6e, "rtl_cam_del_entry" },
	{ 0x4464aab, "rtl_cam_empty_entry" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x37731173, "rtl_cam_reset_all_entry" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x796abc2, "rtl_process_phyinfo" },
	{ 0x24e48d13, "skb_put" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xbe4ed559, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci,btcoexist,mac80211");

MODULE_ALIAS("pci:v000010ECd0000818Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "640093118113B93D727F49B");
