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
	{ 0xabaee24e, "ieee80211_rx_napi" },
	{ 0xff80ab3, "skb_queue_head" },
	{ 0x2a0fd129, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x499df5af, "generic_file_llseek" },
	{ 0xc045836, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x32e84752, "ieee80211_queue_work" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x55f0dade, "ieee80211_cqm_rssi_notify" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x60158612, "ieee80211_beacon_get_tim" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9d94b04a, "ieee80211_unregister_hw" },
	{ 0x11752b6c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x98de8de4, "ieee80211_scan_completed" },
	{ 0x999e8297, "vfree" },
	{ 0x3c2ca166, "debugfs_create_file" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3618b37d, "skb_trim" },
	{ 0x14feedc1, "ieee80211_stop_queues" },
	{ 0xcb36fc86, "__netdev_alloc_skb" },
	{ 0x293c1990, "ieee80211_tx_status" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5dac2d51, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa7fc11d6, "ieee80211_wake_queues" },
	{ 0x9166fada, "strncpy" },
	{ 0xe8f09ccc, "debugfs_remove" },
	{ 0x459f3f88, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7d3063fb, "skb_pull" },
	{ 0x22749e72, "simple_open" },
	{ 0x92c8c8c1, "ieee80211_queue_delayed_work" },
	{ 0xb1de212f, "skb_queue_tail" },
	{ 0x128f355, "skb_copy_expand" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf414a440, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5d3c4d7a, "ieee80211_get_hdrlen_from_skb" },
	{ 0x60041f8f, "ieee80211_register_hw" },
	{ 0x95dcc8a, "ieee80211_pspoll_get" },
	{ 0xc1310260, "ieee80211_nullfunc_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x210b4acf, "ieee80211_beacon_loss" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x1564421, "request_firmware" },
	{ 0x4c1d85d6, "ieee80211_probereq_get" },
	{ 0x308add0e, "ieee80211_free_hw" },
	{ 0x1acdf838, "skb_dequeue" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5d1688fc, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x24e48d13, "skb_put" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "84F1EBD070AFA959BC58C49");
