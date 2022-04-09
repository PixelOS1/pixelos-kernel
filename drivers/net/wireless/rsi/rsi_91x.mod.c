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
	{ 0x6807038e, "ieee80211_rx_irqsafe" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xe4345174, "single_open" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe372bd2f, "seq_puts" },
	{ 0x55f0dade, "ieee80211_cqm_rssi_notify" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0xd349d253, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x98de8de4, "ieee80211_scan_completed" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0xbaa467f1, "wiphy_rfkill_start_polling" },
	{ 0x8ee68c68, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x94216657, "seq_read" },
	{ 0xb8d29237, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x5c570963, "ieee80211_ready_on_channel" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x419d6dcb, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x814d6241, "ieee80211_free_txskb" },
	{ 0x4578ae6e, "kthread_stop" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb5317cd1, "ieee80211_remain_on_channel_expired" },
	{ 0x24d273d1, "add_timer" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xb7c0f443, "sort" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe3b9a1d6, "wiphy_to_ieee80211_hw" },
	{ 0x8e2c1520, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdedd0f83, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9381a653, "ieee80211_wake_queue" },
	{ 0xfc699255, "ieee80211_generic_frame_duration" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x9bbfcdcf, "seq_lseek" },
	{ 0x6008689f, "kthread_complete_and_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x65a526db, "ieee80211_start_tx_ba_session" },
	{ 0x1564421, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x4c1d85d6, "ieee80211_probereq_get" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x24e48d13, "skb_put" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xb3d62000, "rsi_bt_ops" },
	{ 0x410ecd91, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,cfg80211,rfkill,btrsi");


MODULE_INFO(srcversion, "786B607A85F505FDD213913");
