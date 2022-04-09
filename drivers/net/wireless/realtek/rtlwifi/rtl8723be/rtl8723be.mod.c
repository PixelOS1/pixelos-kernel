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
	{ 0x8ea60059, "rtl_fw_cb" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0x92416ded, "rtl8723_phy_reload_adda_registers" },
	{ 0x5c8788e2, "rtl_pci_probe" },
	{ 0xfaa651db, "rtl_cam_get_free_entry" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xee111615, "param_ops_int" },
	{ 0x9c444ba2, "rtl_dm_diginit" },
	{ 0xd9fefb6f, "rtl_ps_disable_nic" },
	{ 0x5348769c, "rtl_btc_get_ops_pointer" },
	{ 0xd1dda7d3, "rtl_hal_pwrseqcmdparsing" },
	{ 0x4fb20a67, "rtl8723_download_fw" },
	{ 0x2e3c5a09, "efuse_power_switch" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf1f9ba01, "rtl_get_tcb_desc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x1415a18d, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5012a70, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xdb7f5b2f, "rtl8723_dm_init_dynamic_txpower" },
	{ 0xe1944e7f, "rtl_pci_resume" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xacc86fdf, "rtl8723_phy_reload_mac_registers" },
	{ 0x3fe0091e, "rtl_ps_enable_nic" },
	{ 0xba4f99f2, "rtl_get_hwinfo" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcd46f730, "rtl8723_dm_init_dynamic_bb_powersaving" },
	{ 0x4441ea81, "rtl8723_phy_rf_serial_read" },
	{ 0xfcfb1388, "rtl8723_phy_query_bb_reg" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x459f3f88, "skb_push" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x125ea8db, "rtl_signal_scale_mapping" },
	{ 0x2145f74, "rtl8723_phy_mac_setting_calibration" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0x47627762, "rtl8723_phy_path_a_fill_iqk_matrix" },
	{ 0x1308e9e0, "rtl_set_tx_report" },
	{ 0xfe3cdd8d, "rtl8723_dm_init_edca_turbo" },
	{ 0x3921609f, "rtl_pci_suspend" },
	{ 0xd0bb2715, "rtlwifi_rate_mapping" },
	{ 0x48352e24, "rtl8723_save_adda_registers" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcc209ac1, "rtl_pci_disconnect" },
	{ 0x91306bb7, "rtl_cmd_send_packet" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xaecccc9, "rtl8723_phy_init_bb_rf_reg_def" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0xc50f2e3b, "ieee80211_find_sta" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9d63a07d, "rtl8723_phy_save_mac_registers" },
	{ 0xb99a4c2, "rtl_cam_mark_invalid" },
	{ 0xf44de810, "efuse_one_byte_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xec591d6e, "rtl_cam_del_entry" },
	{ 0x4464aab, "rtl_cam_empty_entry" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0x37731173, "rtl_cam_reset_all_entry" },
	{ 0x70de94ca, "rtl8723be_firmware_selfreset" },
	{ 0x9020334c, "rtl8723_phy_path_adda_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x796abc2, "rtl_process_phyinfo" },
	{ 0x24e48d13, "skb_put" },
	{ 0xdf70e7a2, "rtl8723_phy_rf_serial_write" },
	{ 0x3f5bf9c0, "rtl8723_phy_calculate_bit_shift" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xb1a56195, "rtl8723_phy_set_bb_reg" },
	{ 0xbe4ed559, "param_ops_ullong" },
	{ 0x8baf8913, "rtl8723_phy_set_sw_chnl_cmdarray" },
};

MODULE_INFO(depends, "rtlwifi,rtl8723-common,rtl_pci,btcoexist,mac80211");

MODULE_ALIAS("pci:v000010ECd0000B723sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "17AE822AE3E2EAA1A500831");
