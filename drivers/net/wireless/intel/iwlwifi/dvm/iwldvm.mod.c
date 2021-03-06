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
	{ 0xabaee24e, "ieee80211_rx_napi" },
	{ 0x5f70e6e7, "__iwl_err" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3fee28a7, "ieee80211_disable_rssi_reports" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0x1537b21c, "debugfs_create_u8" },
	{ 0xf88964e4, "iwl_remove_notification" },
	{ 0xd52ef039, "iwl_cmd_groups_verify_sorted" },
	{ 0x496e14f8, "ieee80211_request_smps" },
	{ 0xa713e826, "iwl_read32" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3a79581a, "iwl_set_bits_mask_prph" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0x59dde6e0, "iwl_opmode_register" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x684e4b18, "ieee80211_resume_disconnect" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x98de8de4, "ieee80211_scan_completed" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbafc8994, "iwl_wait_notification" },
	{ 0x8ee68c68, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1a66fc17, "ieee80211_get_tkip_rx_p1k" },
	{ 0x4539a29f, "iwl_trans_send_cmd" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x419d6dcb, "ieee80211_stop_queue" },
	{ 0x293c1990, "ieee80211_tx_status" },
	{ 0x76858db7, "__iwl_dbg" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x86632d5a, "default_llseek" },
	{ 0xe0eb5838, "iwl_init_notification_wait" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x814d6241, "ieee80211_free_txskb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc80018e9, "ieee80211_rate_control_register" },
	{ 0x203911e4, "iwl_write_direct32" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x7cba7c12, "iwl_write32" },
	{ 0xf9744d28, "kmem_cache_free" },
	{ 0x2a038188, "iwl_get_cmd_string" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd2667c, "ieee80211_sta_block_awake" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x22749e72, "simple_open" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb03de8cd, "ieee80211_ave_rssi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8e2c1520, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x5e780dd4, "ieee80211_enable_rssi_reports" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9fa8b134, "iwlwifi_mod_params" },
	{ 0xff3b6bff, "kmem_cache_alloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x218ff3fb, "__iwl_info" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x183dcd3b, "ieee80211_get_key_rx_seq" },
	{ 0x92997ed8, "_printk" },
	{ 0xd7427cf2, "ieee80211_iter_keys" },
	{ 0xc50f2e3b, "ieee80211_find_sta" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x83e7c874, "__iwl_warn" },
	{ 0x4acd1352, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1332e4de, "iwl_abort_notification_waits" },
	{ 0x9381a653, "ieee80211_wake_queue" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5c52e109, "iwl_opmode_deregister" },
	{ 0x3952e149, "__ieee80211_get_radio_led_name" },
	{ 0xe4cdecd6, "ieee80211_rate_control_unregister" },
	{ 0x8f60f032, "ieee80211_restart_hw" },
	{ 0x3e1c74bb, "__ieee80211_create_tpt_led_trigger" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x65a526db, "ieee80211_start_tx_ba_session" },
	{ 0xbae13367, "skb_add_rx_frag" },
	{ 0x116acd93, "ieee80211_get_tkip_p2k" },
	{ 0x96848186, "scnprintf" },
	{ 0xe75b7e77, "iwl_notification_wait" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0xbfe69b3a, "debugfs_create_symlink" },
	{ 0xa3db4c4, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0xb2f51226, "iwl_parse_eeprom_data" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5988395c, "iwl_notification_wait_init" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0xc2b8df30, "ieee80211_chswitch_done" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x4c3ce8f7, "ieee80211_report_wowlan_wakeup" },
	{ 0x1f20865a, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x63f5308, "ieee80211_get_tkip_p1k_iv" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0x7b076afe, "ieee80211_stop_tx_ba_session" },
	{ 0xcf85bdf6, "iwl_read_eeprom" },
};

MODULE_INFO(depends, "mac80211,iwlwifi,cfg80211");


MODULE_INFO(srcversion, "385C36CCC180730C62BB3AD");
