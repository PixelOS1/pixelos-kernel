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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x83976aaf, "module_layout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xdf5af456, "ieee80211_csa_finish" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc274c233, "mt76_connac_mcu_sta_basic_tlv" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xbb31a266, "__SCT__tp_func_mac_txdone" },
	{ 0x7e0db070, "mt76_get_min_avg_rssi" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0x349cba85, "strchr" },
	{ 0xe4345174, "single_open" },
	{ 0x1537b21c, "debugfs_create_u8" },
	{ 0x688e72e1, "__SCT__preempt_schedule_notrace" },
	{ 0x81b1f7d0, "mt76_rx_aggr_stop" },
	{ 0x8d85ed3, "__mt76_poll" },
	{ 0xce5b2a77, "mt76_connac_mcu_patch_sem_ctrl" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x754d539c, "strlen" },
	{ 0x9237a99a, "mt76_connac_mcu_wtbl_ba_tlv" },
	{ 0x3ee07f3c, "napi_schedule_prep" },
	{ 0x32e84752, "ieee80211_queue_work" },
	{ 0x429c69de, "mt76_connac_mcu_sta_ba" },
	{ 0x60992d38, "mt76_connac_mcu_wtbl_generic_tlv" },
	{ 0x419c3648, "mt76_register_debugfs_fops" },
	{ 0x96791cd, "mt76_sta_pre_rcu_remove" },
	{ 0xe7a0646, "mt76_connac_mcu_set_hif_suspend" },
	{ 0x1071dae6, "mt76_queues_read" },
	{ 0x8ffe009c, "mt76_sw_scan" },
	{ 0x9b02585d, "single_release" },
	{ 0xee57a83a, "mt76_connac_mcu_set_suspend_iter" },
	{ 0xd3b657ab, "ieee80211_radar_detected" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x10b58951, "mt76_put_txwi" },
	{ 0x817a9b7c, "mt76_connac_mcu_wtbl_hdr_trans_tlv" },
	{ 0x6bcdcdeb, "mt76_register_phy" },
	{ 0xa73cda8f, "no_llseek" },
	{ 0x849799fd, "mt76_unregister_phy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xadd7e0c5, "mt76_connac_mcu_coredump_event" },
	{ 0xd349d253, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4c39e660, "mt76_connac_mcu_wtbl_ht_tlv" },
	{ 0xb87c8d60, "mt76_connac_mcu_start_firmware" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x82ffc2f2, "mt76_rx_aggr_start" },
	{ 0xdfc4dbd2, "mt76_sw_scan_complete" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd26bf712, "mt76_connac_mcu_sta_cmd" },
	{ 0xb9392e0b, "mt76_insert_ccmp_hdr" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ffd2fb2, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x98de8de4, "ieee80211_scan_completed" },
	{ 0x1d072c5, "ieee80211_sched_scan_results" },
	{ 0xf89f4a1e, "trace_event_buffer_reserve" },
	{ 0xd434be69, "mt76_get_rate_power_limits" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xf7fa446d, "mt76_connac_mcu_cancel_hw_scan" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x17f568e9, "mt76_rates" },
	{ 0xa354d4eb, "mt76_connac_mcu_add_nested_tlv" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x94216657, "seq_read" },
	{ 0xbb3f92f9, "devm_kasprintf" },
	{ 0xca6696f4, "mt76_connac_mcu_init_download" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x5c570963, "ieee80211_ready_on_channel" },
	{ 0xa7924863, "mt76_sta_state" },
	{ 0x97fd5d34, "__SCK__tp_func_mac_txdone" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcc616bce, "mt76_connac_mcu_start_patch" },
	{ 0x6604ef93, "debugfs_create_u32" },
	{ 0xecec454, "__mt76_mcu_send_firmware" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x318cf0ed, "devm_hwmon_device_register_with_groups" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xf35f7d6b, "mt76_get_survey" },
	{ 0xf25ac6d4, "mt76_connac_pm_dequeue_skbs" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x908ca40c, "mt76_connac_wowlan_support" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca14219, "dev_coredumpv" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x58a22931, "mt76_eeprom_override" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x556a66aa, "ieee80211_beacon_get_template" },
	{ 0x26ce4c9a, "mt76_mcu_send_and_get_msg" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0xb6dd8ad7, "__mt76_poll_msec" },
	{ 0x84a32be5, "trace_event_reg" },
	{ 0x4779daac, "mt76_set_channel" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb5317cd1, "ieee80211_remain_on_channel_expired" },
	{ 0x652032cb, "mac_pton" },
	{ 0x9f4a2426, "mt76_connac_mcu_beacon_loss_iter" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3de4dda8, "mt76_update_survey_active_time" },
	{ 0xe283cb34, "simple_attr_release" },
	{ 0x5e503c60, "mt76_mcu_skb_send_and_get_msg" },
	{ 0x7ac90ced, "debugfs_create_file_unsafe" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x22749e72, "simple_open" },
	{ 0x8af62e49, "_dev_err" },
	{ 0xc62664f0, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x3c21737c, "mt76_eeprom_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xccaf8099, "mt76_tx_status_skb_done" },
	{ 0x4c4dc31b, "mt76_connac_mcu_hw_scan" },
	{ 0x6d5cd7ee, "debugfs_attr_read" },
	{ 0xe3b9a1d6, "wiphy_to_ieee80211_hw" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x1a4301f8, "mt76_connac_mcu_uni_add_bss" },
	{ 0x91959354, "mt76_connac_mcu_alloc_wtbl_req" },
	{ 0x1197121c, "mt76_connac_mcu_sched_scan_req" },
	{ 0x958f63f1, "mt76_rx" },
	{ 0x8e2c1520, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x1fddff, "mt76_connac_mcu_set_p2p_oppps" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x343822fe, "mt76_wcid_key_setup" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x525353b0, "mt76_connac_mcu_set_mac_enable" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0x4e5627a1, "__napi_schedule" },
	{ 0xa1553818, "mt76_tx" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc26f8803, "debugfs_create_devm_seqfile" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2237ae3a, "ieee80211_send_bar" },
	{ 0xf68e3b53, "mt76_connac_mcu_alloc_sta_req" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x5912468f, "trace_event_buffer_commit" },
	{ 0x2cbb52b1, "mt76_connac_power_save_sched" },
	{ 0x6e5cad20, "mt76_connac_free_pending_tx_skbs" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0x5ad685f6, "mt76_tx_status_check" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x910dc48a, "mt76_connac_pm_queue_skb" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x2c5fa10, "mt76_alloc_phy" },
	{ 0xc454b2e4, "mt76_mcu_rx_event" },
	{ 0x4b5d8b5e, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6b54278b, "mt76_connac_mcu_set_vif_ps" },
	{ 0xddb99411, "mt76_connac_mcu_update_arp_filter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5d3c4d7a, "ieee80211_get_hdrlen_from_skb" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xde056ade, "bpf_trace_run2" },
	{ 0xcfcc1612, "mt76_set_stream_caps" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0xcce3aad0, "__mt76_tx_complete_skb" },
	{ 0xca54bd2, "mt76_connac_mcu_sta_ba_tlv" },
	{ 0x4c9eef4, "mt76_get_antenna" },
	{ 0x23b36379, "mt76_connac_mcu_chip_config" },
	{ 0x69acdf38, "memcpy" },
	{ 0x52fa9ef2, "trace_event_raw_init" },
	{ 0x6485cac1, "ieee80211_tx_status_ext" },
	{ 0xa0dde249, "mt76_wake_tx_queue" },
	{ 0x55daf037, "mt76_get_rate" },
	{ 0x15a44afd, "mt76_connac_pm_wake" },
	{ 0x4cefc4ee, "__tracepoint_mac_txdone" },
	{ 0x3ec6ff, "mt76_get_txpower" },
	{ 0x2c4a8d94, "trace_event_printf" },
	{ 0x1564421, "request_firmware" },
	{ 0xfffb16eb, "mt76_release_buffered_frames" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd72e1b44, "dma_unmap_page_attrs" },
	{ 0xcf690d73, "mt76_connac_mcu_uni_add_dev" },
	{ 0x97ba4541, "mt76_connac_mcu_set_channel_domain" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7e51de59, "debugfs_create_u16" },
	{ 0x6e578e05, "mt76_connac_mcu_set_rts_thresh" },
	{ 0x72d0c8ab, "__trace_trigger_soft_disabled" },
	{ 0xae30b022, "mt76_tx_status_lock" },
	{ 0xce68e8, "mt76_mcu_msg_alloc" },
	{ 0xc6e2f879, "trace_raw_output_prep" },
	{ 0x11800bec, "mt76_tx_status_skb_get" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x4c681602, "firmware_request_nowarn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0xcec1d46a, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1839db1f, "mt76_connac_mcu_sched_scan_enable" },
	{ 0x314c95ad, "mt76_connac_mcu_sta_update_hdr_trans" },
	{ 0x246cd242, "debugfs_attr_write" },
	{ 0x859b7c57, "ieee80211_iterate_interfaces" },
	{ 0x45db6081, "simple_attr_open" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9a14536d, "mt76_tx_status_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x998d54ed, "mt76_tx_worker_run" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
	{ 0xd3253eb6, "mt76_connac_mcu_sta_tlv" },
	{ 0x1dc9acc2, "ieee80211_sta_register_airtime" },
	{ 0x179b1dc, "mt76_connac_mcu_set_rate_txpower" },
	{ 0x35065c28, "mt76_connac_mcu_update_gtk_rekey" },
};

MODULE_INFO(depends, "mac80211,mt76-connac-lib,mt76,cfg80211");


MODULE_INFO(srcversion, "479AAF4DA9840AFD5746EA1");