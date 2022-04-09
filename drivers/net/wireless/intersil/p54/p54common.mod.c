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
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x6807038e, "ieee80211_rx_irqsafe" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x41c9ce68, "_dev_printk" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0x78c2054, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x62667f6b, "__ieee80211_get_assoc_led_name" },
	{ 0x8ee68c68, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xcd34d80, "skb_unlink" },
	{ 0x3618b37d, "skb_trim" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x419d6dcb, "ieee80211_stop_queue" },
	{ 0x8cb3a6a2, "skb_queue_purge" },
	{ 0xd8f50b20, "_dev_warn" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf7fd8ee, "led_classdev_register_ext" },
	{ 0x814d6241, "ieee80211_free_txskb" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0xb7c0f443, "sort" },
	{ 0x8af62e49, "_dev_err" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x40a4c25b, "_dev_info" },
	{ 0x6b8a1365, "__ieee80211_get_rx_led_name" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xdedd0f83, "ieee80211_tx_status_irqsafe" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x3bafb2d, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9381a653, "ieee80211_wake_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x3952e149, "__ieee80211_get_radio_led_name" },
	{ 0x5d3c4d7a, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x7626ce, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xb88bec8e, "regulatory_hint" },
	{ 0x210b4acf, "ieee80211_beacon_loss" },
	{ 0x69acdf38, "memcpy" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x24e48d13, "skb_put" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "56B275D5EA71BCC91C0D14B");
