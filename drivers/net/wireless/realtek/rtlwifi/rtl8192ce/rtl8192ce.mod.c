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
	{ 0x5c8788e2, "rtl_pci_probe" },
	{ 0xfaa651db, "rtl_cam_get_free_entry" },
	{ 0x89847087, "rtl92c_phy_set_rfpath_switch" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd1efb4ca, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0xee111615, "param_ops_int" },
	{ 0x3e77ac37, "rtl92c_phy_set_txpower_level" },
	{ 0x7071199a, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0xe73e45f4, "rtl92c_dm_check_txpower_tracking" },
	{ 0xd9fefb6f, "rtl_ps_disable_nic" },
	{ 0xb56258ad, "rtl92c_dm_watchdog" },
	{ 0xc357f58b, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0xd5b8f62e, "_rtl92c_phy_rf_serial_write" },
	{ 0xf1f9ba01, "rtl_get_tcb_desc" },
	{ 0xa993ba50, "_rtl92c_phy_rf_serial_read" },
	{ 0x454d42fe, "rtl92c_phy_set_bw_mode" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcee4d854, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
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
	{ 0xbdbcc9d3, "rtl_phy_scan_operation_backup" },
	{ 0xe93d83b5, "rtl92c_dm_init_edca_turbo" },
	{ 0xe31821a8, "rtl92c_phy_iq_calibrate" },
	{ 0x6e18608, "rtl92c_dm_init" },
	{ 0xc62e9df1, "rtl92c_phy_set_bb_reg" },
	{ 0xe1944e7f, "rtl_pci_resume" },
	{ 0x3fe0091e, "rtl_ps_enable_nic" },
	{ 0xba4f99f2, "rtl_get_hwinfo" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdb76b7bd, "rtl92c_firmware_selfreset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x56dae545, "rtl92c_dm_rf_saving" },
	{ 0xda39b3d8, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2921a4d4, "rtl_btc_status_false" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3cc5da18, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x125ea8db, "rtl_signal_scale_mapping" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0x3921609f, "rtl_pci_suspend" },
	{ 0xd0bb2715, "rtlwifi_rate_mapping" },
	{ 0x9682a7, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb3aa07cd, "rtl92c_download_fw" },
	{ 0xcc209ac1, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x83ca0ad3, "rtl_rfreg_delay" },
	{ 0x1471388d, "_rtl92c_store_pwrindex_diffrate_offset" },
	{ 0xbb6c3b48, "rtl92c_phy_set_io_cmd" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff1aff93, "dma_map_page_attrs" },
	{ 0xc50f2e3b, "ieee80211_find_sta" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf08c4261, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6dfc7bec, "pci_unregister_driver" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb99a4c2, "rtl_cam_mark_invalid" },
	{ 0xa6140482, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0xec591d6e, "rtl_cam_del_entry" },
	{ 0x4038421c, "rtl92c_set_p2p_ps_offload_cmd" },
	{ 0x4464aab, "rtl_cam_empty_entry" },
	{ 0x94d145c2, "rtl92ce_phy_set_rf_on" },
	{ 0xe0befba6, "__pci_register_driver" },
	{ 0x90015baa, "rtl92c_phy_query_bb_reg" },
	{ 0x37731173, "rtl_cam_reset_all_entry" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x796abc2, "rtl_process_phyinfo" },
	{ 0x11b16163, "efuse_read_1byte" },
	{ 0x3f2c176e, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0xab26e948, "rtl92c_fill_h2c_cmd" },
	{ 0x350b3f3f, "rtl92c_phy_sw_chnl" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0xbe4ed559, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci,rtl8192c-common,mac80211");

MODULE_ALIAS("pci:v000010ECd00008191sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008178sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008177sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008176sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8E59884EB0C2C23602E4E3A");
