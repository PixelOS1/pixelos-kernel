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
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe0a1731f, "cfg80211_cqm_rssi_notify" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x753b52ed, "wiphy_free" },
	{ 0xb1e54e7c, "cfg80211_connect_done" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xee111615, "param_ops_int" },
	{ 0x429c0c31, "ieee80211_bss_get_elem" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x754d539c, "strlen" },
	{ 0xfda27c91, "cfg80211_inform_bss_data" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x68514fe5, "cfg80211_report_wowlan_wakeup" },
	{ 0x9a9a7ce8, "cfg80211_chandef_create" },
	{ 0x11af727b, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6ece8090, "skb_clone" },
	{ 0x307eaf37, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x82bf3377, "netif_carrier_off" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xd94be29, "cfg80211_unregister_wdev" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf91c8bc0, "skb_realloc_headroom" },
	{ 0x6750b0d4, "cfg80211_sched_scan_stopped_locked" },
	{ 0x72d463ee, "netif_rx_any_context" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd34d80, "skb_unlink" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1ac99c01, "cfg80211_mgmt_tx_status" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb0cd7d20, "param_ops_charp" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe7e75334, "netif_tx_wake_queue" },
	{ 0x8782a4ce, "netif_tx_stop_all_queues" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1eacc5f8, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca14219, "dev_coredumpv" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xda59b65, "free_netdev" },
	{ 0x42f1cc7d, "wiphy_unregister" },
	{ 0x9126fd2c, "cfg80211_del_sta_sinfo" },
	{ 0x5a921311, "strncmp" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x459f3f88, "skb_push" },
	{ 0x66ea9177, "cfg80211_rx_mgmt_khz" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6aea6a51, "dev_close" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xb8071df2, "cfg80211_michael_mic_failure" },
	{ 0x2ce7e85e, "wiphy_apply_custom_regulatory" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x9d3360fa, "device_init_wakeup" },
	{ 0x22749e72, "simple_open" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0xe30194b1, "cfg80211_ibss_joined" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xf42bb72e, "cfg80211_tdls_oper_request" },
	{ 0xd79a9944, "__cfg80211_radar_event" },
	{ 0xb34750fb, "ieee80211_get_channel_khz" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xd4bb08ea, "netif_device_attach" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x2b695e71, "cfg80211_ch_switch_notify" },
	{ 0x6c21ae75, "netif_device_detach" },
	{ 0xce1fb33, "cfg80211_put_bss" },
	{ 0xa916b694, "strnlen" },
	{ 0xdfc12431, "wiphy_register" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x56419ed8, "cfg80211_classify8021d" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x38a4178c, "cfg80211_ready_on_channel" },
	{ 0x92997ed8, "_printk" },
	{ 0x5d180d08, "wiphy_new_nm" },
	{ 0x31bdbbf0, "alloc_netdev_mqs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb2d2ed3, "eth_type_trans" },
	{ 0x554e6897, "dev_addr_mod" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86814848, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xfd11e320, "cfg80211_disconnected" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x527bd5c8, "cfg80211_new_sta" },
	{ 0x3ffe5462, "cfg80211_chandef_valid" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2c460a2b, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0xb88bec8e, "regulatory_hint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcbc25f87, "cfg80211_ref_bss" },
	{ 0x67f4c9bb, "ieee80211_amsdu_to_8023s" },
	{ 0x96848186, "scnprintf" },
	{ 0x1564421, "request_firmware" },
	{ 0x7fd7e3f3, "cfg80211_register_netdevice" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0x818d68da, "cfg80211_cac_event" },
	{ 0x4ed779a7, "cfg80211_remain_on_channel_expired" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xcd9dd851, "param_ops_ushort" },
	{ 0x5527aa4f, "cfg80211_sched_scan_stopped" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xaf0effb6, "cfg80211_scan_done" },
	{ 0x6b5072b3, "cfg80211_chandef_dfs_required" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0xf8fdfec2, "skb_complete_wifi_ack" },
	{ 0xbf098f7d, "cfg80211_sched_scan_results" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "39916BFC326F249ED0C22F1");
