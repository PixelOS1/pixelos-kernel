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
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x32e84752, "ieee80211_queue_work" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x55f0dade, "ieee80211_cqm_rssi_notify" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x307eaf37, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ffd2fb2, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x98de8de4, "ieee80211_scan_completed" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd34d80, "skb_unlink" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x9a6f0459, "ieee80211_tx_dequeue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca14219, "dev_coredumpv" },
	{ 0x814d6241, "ieee80211_free_txskb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x34bd093e, "ieee80211_iter_keys_rcu" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9f0537a8, "kfree_skb_reason" },
	{ 0xaa7ab137, "ieee80211_find_sta_by_ifaddr" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x868319dd, "request_firmware_nowait" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x837b1e4d, "ieee80211_proberesp_get" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe3b9a1d6, "wiphy_to_ieee80211_hw" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8e2c1520, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xbff772e, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdedd0f83, "ieee80211_tx_status_irqsafe" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd7427cf2, "ieee80211_iter_keys" },
	{ 0xc50f2e3b, "ieee80211_find_sta" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x15a37cf3, "cfg80211_calculate_bitrate" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8f60f032, "ieee80211_restart_hw" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x95dcc8a, "ieee80211_pspoll_get" },
	{ 0xc1310260, "ieee80211_nullfunc_get" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0xb88bec8e, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x65a526db, "ieee80211_start_tx_ba_session" },
	{ 0xdea98e22, "ieee80211_iterate_stations_atomic" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x4c1d85d6, "ieee80211_probereq_get" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x73fec674, "param_ops_uint" },
	{ 0xc5b47569, "ieee80211_txq_get_depth" },
	{ 0x859b7c57, "ieee80211_iterate_interfaces" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4c3ce8f7, "ieee80211_report_wowlan_wakeup" },
	{ 0xbaa89437, "ieee80211_connection_loss" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc0973b41, "device_set_wakeup_enable" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "B1A5A58F2B5D9526585A33D");
