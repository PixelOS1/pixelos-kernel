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
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xfc3473ed, "mt76_get_sar_power" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x98de8de4, "ieee80211_scan_completed" },
	{ 0xd434be69, "mt76_get_rate_power_limits" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x34bd093e, "ieee80211_iter_keys_rcu" },
	{ 0x26ce4c9a, "mt76_mcu_send_and_get_msg" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5e503c60, "mt76_mcu_skb_send_and_get_msg" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1553818, "mt76_tx" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb5658eb1, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x210b4acf, "ieee80211_beacon_loss" },
	{ 0x69acdf38, "memcpy" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xce68e8, "mt76_mcu_msg_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x24e48d13, "skb_put" },
};

MODULE_INFO(depends, "mt76,mac80211,cfg80211");


MODULE_INFO(srcversion, "402D4DC0B02371FBCDE2D6D");
